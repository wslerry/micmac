#pragma once

#include "GpGpu/GpGpu.h"

#ifdef CUDA_ENABLED
#define BOOST_ALL_NO_LIB 

#include "GpGpu/cudaAppliMicMac.cuh"
#include <boost/thread/thread.hpp>
#include "GpGpu/GpGpuTools.h"

extern "C" void	CopyParamTodevice(pCorGpu h);
extern "C" void	KernelCorrelation(const int s,cudaStream_t stream, dim3 blocks, dim3 threads, uint *dev_NbImgOk, float* cachVig, uint2 nbActThrd);
extern "C" void	KernelmultiCorrelation(cudaStream_t stream, dim3 blocks, dim3 threads, float *dTCost, float* cacheVign, uint* dev_NbImgOk, uint2 nbActThr, ushort divideNThreads);
extern "C" void	KernelmultiCorrelationNA(cudaStream_t stream, dim3 blocks, dim3 threads, float *dTCost, float* cacheVign, uint* dev_NbImgOk, uint2 nbActThr);

extern "C" void dilateKernel(pixel* HostDataOut, short r, uint2 dim);
extern "C" textureReference& getMaskD();

extern "C" textureReference&	getMask();
extern "C" textureReference&	getImage();
extern "C" textureReference&	getProjection(int TexSel);
//extern "C" textureReference&    getCache();

#define NSTREAM 1

class InterfaceMicMacGpGpu
{

public:

  InterfaceMicMacGpGpu();
  ~InterfaceMicMacGpGpu();

  void	SetSizeBlock( uint Zinter, Rect Ter);
  void	SetSizeBlock( uint Zinter);
  void	SetMask(pixel* dataMask, uint2 dimMask);
  void	SetImages(float* dataImage, uint2 dimImage, int nbLayer);
  void	SetParameter(Rect Ter, int nbLayer , uint2 dRVig , uint2 dimImg, float mAhEpsilon, uint samplingZ, int uvINTDef , uint interZ);

  void	BasicCorrelation( float* hostVolumeCost, float2* hostVolumeProj,  int nbLayer, uint interZ );
  void	BasicCorrelationStream( float* hostVolumeCost, float2* hostVolumeProj,  int nbLayer, uint interZ );
  pCorGpu Param();

  void	DeallocMemory();
  void	MallocInfo();

  void	SetHostVolume(float* vCost, float2* vProj);
  void	SetZToCompute(uint Z);
  uint	GetZCtoCopy();
  void	SetZCToCopy(uint Z);
  bool	GetComputeNextProj();
  void	SetComputeNextProj(bool compute);

private:

  uint                  GetZToCompute();
  void			ResizeVolume(int nbLayer, uint interZ);
  void			AllocMemory(int nStream);
  cudaStream_t*		GetStream(int stream);
  textureReference&	GetTeXProjection(int texSel);
  void			MTComputeCost();

  cudaStream_t		_stream[NSTREAM];
  pCorGpu		_param;

  CuDeviceData3D<float>	_volumeCost[NSTREAM];	// volume des couts
  CuDeviceData3D<float>	_volumeCach[NSTREAM];	// volume des calculs intermédiaires
  CuDeviceData3D<uint>	_volumeNIOk[NSTREAM];	// nombre d'image correct pour une vignette

  ImageCuda<pixel>		_mask;
  ImageLayeredCuda<float>	_LayeredImages;
  ImageLayeredCuda<float2>      _LayeredProjection[NSTREAM];

  textureReference&		_texMask;
  textureReference&		_texMaskD;
  textureReference&		_texImages;
  //textureReference&		_texCache;
  textureReference&		_texProjections_00;
  textureReference&		_texProjections_01;
  textureReference&		_texProjections_02;
  textureReference&		_texProjections_03;
  boost::thread*		_gpuThread;
  boost::mutex			_mutex;
  boost::mutex			_mutexC;
  boost::mutex			_mutexCompute;
  float*			_vCost;
  float2*			_vProj;
  uint				_ZCompute;
  uint				_ZCCopy;
  bool				_computeNextProj;

#ifdef USEDILATEMASK	
public:
  void	dilateMask(uint2 dim);
  pixel*	GetDilateMask();
private:
  pixel	ValDilMask(int2 pt);
  pixel*				_dilateMask;
  uint2					_dimDilateMask;
#endif

};

#endif
