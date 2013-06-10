// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PProjInc_M2CDRad5.h"


cEqAppui_PProjInc_M2CDRad5::cEqAppui_PProjInc_M2CDRad5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,10));
   AddIntRef (cIncIntervale("Orient",10,16));
   AddIntRef (cIncIntervale("Tmp_PTer",16,19));
   Close(false);
}



void cEqAppui_PProjInc_M2CDRad5::ComputeVal()
{
   double tmp0_ = mCompCoord[10];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[16];
   double tmp4_ = mCompCoord[17];
   double tmp5_ = mCompCoord[18];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[12];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x*tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[13];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y*tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[14];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z*tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[15];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = mCompCoord[3];
   double tmp39_ = tmp7_*tmp2_;
   double tmp40_ = tmp39_*(tmp17_);
   double tmp41_ = tmp6_*tmp2_;
   double tmp42_ = tmp41_*(tmp29_);
   double tmp43_ = tmp40_+tmp42_;
   double tmp44_ = tmp8_*(tmp37_);
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = mCompCoord[0];
   double tmp47_ = -(tmp6_);
   double tmp48_ = tmp47_*tmp19_;
   double tmp49_ = tmp7_*tmp20_;
   double tmp50_ = tmp49_*tmp21_;
   double tmp51_ = tmp48_+tmp50_;
   double tmp52_ = (tmp51_)*(tmp17_);
   double tmp53_ = tmp7_*tmp19_;
   double tmp54_ = tmp6_*tmp20_;
   double tmp55_ = tmp54_*tmp21_;
   double tmp56_ = tmp53_+tmp55_;
   double tmp57_ = (tmp56_)*(tmp29_);
   double tmp58_ = tmp52_+tmp57_;
   double tmp59_ = tmp2_*tmp21_;
   double tmp60_ = tmp59_*(tmp37_);
   double tmp61_ = tmp58_+tmp60_;
   double tmp62_ = tmp46_/(tmp61_);
   double tmp63_ = (tmp45_)*(tmp62_);
   double tmp64_ = mCompCoord[1];
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = (tmp65_)-tmp38_;
   double tmp67_ = tmp47_*tmp21_;
   double tmp68_ = tmp49_*tmp18_;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp17_);
   double tmp71_ = tmp7_*tmp21_;
   double tmp72_ = tmp54_*tmp18_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp29_);
   double tmp75_ = tmp70_+tmp74_;
   double tmp76_ = tmp2_*tmp18_;
   double tmp77_ = tmp76_*(tmp37_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp62_);
   double tmp80_ = mCompCoord[2];
   double tmp81_ = tmp79_+tmp80_;
   double tmp82_ = mCompCoord[4];
   double tmp83_ = (tmp81_)-tmp82_;
   double tmp84_ = (tmp66_)*(tmp66_);
   double tmp85_ = (tmp83_)*(tmp83_);
   double tmp86_ = tmp84_+tmp85_;
   double tmp87_ = (tmp86_)*(tmp86_);
   double tmp88_ = tmp87_*(tmp86_);
   double tmp89_ = tmp88_*(tmp86_);
   double tmp90_ = mCompCoord[5];
   double tmp91_ = (tmp86_)*tmp90_;
   double tmp92_ = 1+tmp91_;
   double tmp93_ = mCompCoord[6];
   double tmp94_ = tmp87_*tmp93_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[7];
   double tmp97_ = tmp88_*tmp96_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = mCompCoord[8];
   double tmp100_ = tmp89_*tmp99_;
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = tmp89_*(tmp86_);
   double tmp103_ = mCompCoord[9];
   double tmp104_ = tmp102_*tmp103_;
   double tmp105_ = tmp101_+tmp104_;

  mVal[0] = ((tmp38_+(tmp66_)*(tmp105_))-mLocXIm)*mLocScNorm;

  mVal[1] = ((tmp82_+(tmp83_)*(tmp105_))-mLocYIm)*mLocScNorm;

}


void cEqAppui_PProjInc_M2CDRad5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[10];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[16];
   double tmp4_ = mCompCoord[17];
   double tmp5_ = mCompCoord[18];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[12];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x*tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[13];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y*tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[14];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z*tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[15];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = mCompCoord[3];
   double tmp39_ = tmp7_*tmp2_;
   double tmp40_ = tmp39_*(tmp17_);
   double tmp41_ = tmp6_*tmp2_;
   double tmp42_ = tmp41_*(tmp29_);
   double tmp43_ = tmp40_+tmp42_;
   double tmp44_ = tmp8_*(tmp37_);
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = mCompCoord[0];
   double tmp47_ = -(tmp6_);
   double tmp48_ = tmp47_*tmp19_;
   double tmp49_ = tmp7_*tmp20_;
   double tmp50_ = tmp49_*tmp21_;
   double tmp51_ = tmp48_+tmp50_;
   double tmp52_ = (tmp51_)*(tmp17_);
   double tmp53_ = tmp7_*tmp19_;
   double tmp54_ = tmp6_*tmp20_;
   double tmp55_ = tmp54_*tmp21_;
   double tmp56_ = tmp53_+tmp55_;
   double tmp57_ = (tmp56_)*(tmp29_);
   double tmp58_ = tmp52_+tmp57_;
   double tmp59_ = tmp2_*tmp21_;
   double tmp60_ = tmp59_*(tmp37_);
   double tmp61_ = tmp58_+tmp60_;
   double tmp62_ = tmp46_/(tmp61_);
   double tmp63_ = (tmp45_)*(tmp62_);
   double tmp64_ = mCompCoord[1];
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = (tmp65_)-tmp38_;
   double tmp67_ = tmp47_*tmp21_;
   double tmp68_ = tmp49_*tmp18_;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp17_);
   double tmp71_ = tmp7_*tmp21_;
   double tmp72_ = tmp54_*tmp18_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp29_);
   double tmp75_ = tmp70_+tmp74_;
   double tmp76_ = tmp2_*tmp18_;
   double tmp77_ = tmp76_*(tmp37_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp62_);
   double tmp80_ = mCompCoord[2];
   double tmp81_ = tmp79_+tmp80_;
   double tmp82_ = mCompCoord[4];
   double tmp83_ = (tmp81_)-tmp82_;
   double tmp84_ = (tmp66_)*(tmp66_);
   double tmp85_ = (tmp83_)*(tmp83_);
   double tmp86_ = tmp84_+tmp85_;
   double tmp87_ = (tmp86_)*(tmp86_);
   double tmp88_ = tmp87_*(tmp86_);
   double tmp89_ = tmp88_*(tmp86_);
   double tmp90_ = mCompCoord[5];
   double tmp91_ = (tmp86_)*tmp90_;
   double tmp92_ = 1+tmp91_;
   double tmp93_ = mCompCoord[6];
   double tmp94_ = tmp87_*tmp93_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[7];
   double tmp97_ = tmp88_*tmp96_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = mCompCoord[8];
   double tmp100_ = tmp89_*tmp99_;
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = tmp89_*(tmp86_);
   double tmp103_ = mCompCoord[9];
   double tmp104_ = tmp102_*tmp103_;
   double tmp105_ = tmp101_+tmp104_;
   double tmp106_ = ElSquare(tmp61_);
   double tmp107_ = (tmp61_)/tmp106_;
   double tmp108_ = (tmp107_)*(tmp45_);
   double tmp109_ = tmp108_*(tmp66_);
   double tmp110_ = (tmp107_)*(tmp78_);
   double tmp111_ = tmp110_*(tmp83_);
   double tmp112_ = tmp109_+tmp109_;
   double tmp113_ = tmp111_+tmp111_;
   double tmp114_ = tmp112_+tmp113_;
   double tmp115_ = (tmp114_)*(tmp86_);
   double tmp116_ = tmp115_+tmp115_;
   double tmp117_ = (tmp116_)*(tmp86_);
   double tmp118_ = (tmp114_)*tmp87_;
   double tmp119_ = tmp117_+tmp118_;
   double tmp120_ = (tmp119_)*(tmp86_);
   double tmp121_ = (tmp114_)*tmp88_;
   double tmp122_ = tmp120_+tmp121_;
   double tmp123_ = tmp66_+tmp66_;
   double tmp124_ = (tmp123_)*(tmp86_);
   double tmp125_ = tmp124_+tmp124_;
   double tmp126_ = (tmp125_)*(tmp86_);
   double tmp127_ = (tmp123_)*tmp87_;
   double tmp128_ = tmp126_+tmp127_;
   double tmp129_ = (tmp128_)*(tmp86_);
   double tmp130_ = (tmp123_)*tmp88_;
   double tmp131_ = tmp129_+tmp130_;
   double tmp132_ = tmp83_+tmp83_;
   double tmp133_ = (tmp132_)*(tmp86_);
   double tmp134_ = tmp133_+tmp133_;
   double tmp135_ = (tmp134_)*(tmp86_);
   double tmp136_ = (tmp132_)*tmp87_;
   double tmp137_ = tmp135_+tmp136_;
   double tmp138_ = (tmp137_)*(tmp86_);
   double tmp139_ = (tmp132_)*tmp88_;
   double tmp140_ = tmp138_+tmp139_;
   double tmp141_ = -(1);
   double tmp142_ = tmp141_*(tmp66_);
   double tmp143_ = tmp142_+tmp142_;
   double tmp144_ = (tmp143_)*(tmp86_);
   double tmp145_ = tmp144_+tmp144_;
   double tmp146_ = (tmp145_)*(tmp86_);
   double tmp147_ = (tmp143_)*tmp87_;
   double tmp148_ = tmp146_+tmp147_;
   double tmp149_ = (tmp148_)*(tmp86_);
   double tmp150_ = (tmp143_)*tmp88_;
   double tmp151_ = tmp149_+tmp150_;
   double tmp152_ = tmp141_*(tmp83_);
   double tmp153_ = tmp152_+tmp152_;
   double tmp154_ = (tmp153_)*(tmp86_);
   double tmp155_ = tmp154_+tmp154_;
   double tmp156_ = (tmp155_)*(tmp86_);
   double tmp157_ = (tmp153_)*tmp87_;
   double tmp158_ = tmp156_+tmp157_;
   double tmp159_ = (tmp158_)*(tmp86_);
   double tmp160_ = (tmp153_)*tmp88_;
   double tmp161_ = tmp159_+tmp160_;
   double tmp162_ = tmp141_*tmp6_;
   double tmp163_ = tmp162_*tmp2_;
   double tmp164_ = tmp163_*(tmp17_);
   double tmp165_ = tmp39_*(tmp29_);
   double tmp166_ = tmp164_+tmp165_;
   double tmp167_ = (tmp166_)*(tmp62_);
   double tmp168_ = -(tmp7_);
   double tmp169_ = tmp168_*tmp19_;
   double tmp170_ = tmp162_*tmp20_;
   double tmp171_ = tmp170_*tmp21_;
   double tmp172_ = tmp169_+tmp171_;
   double tmp173_ = (tmp172_)*(tmp17_);
   double tmp174_ = tmp162_*tmp19_;
   double tmp175_ = tmp174_+tmp50_;
   double tmp176_ = (tmp175_)*(tmp29_);
   double tmp177_ = tmp173_+tmp176_;
   double tmp178_ = tmp46_*(tmp177_);
   double tmp179_ = -(tmp178_);
   double tmp180_ = tmp179_/tmp106_;
   double tmp181_ = (tmp180_)*(tmp45_);
   double tmp182_ = tmp167_+tmp181_;
   double tmp183_ = (tmp182_)*(tmp66_);
   double tmp184_ = tmp168_*tmp21_;
   double tmp185_ = tmp170_*tmp18_;
   double tmp186_ = tmp184_+tmp185_;
   double tmp187_ = (tmp186_)*(tmp17_);
   double tmp188_ = tmp162_*tmp21_;
   double tmp189_ = tmp188_+tmp68_;
   double tmp190_ = (tmp189_)*(tmp29_);
   double tmp191_ = tmp187_+tmp190_;
   double tmp192_ = (tmp191_)*(tmp62_);
   double tmp193_ = (tmp180_)*(tmp78_);
   double tmp194_ = tmp192_+tmp193_;
   double tmp195_ = (tmp194_)*(tmp83_);
   double tmp196_ = tmp183_+tmp183_;
   double tmp197_ = tmp195_+tmp195_;
   double tmp198_ = tmp196_+tmp197_;
   double tmp199_ = (tmp198_)*(tmp86_);
   double tmp200_ = tmp199_+tmp199_;
   double tmp201_ = (tmp200_)*(tmp86_);
   double tmp202_ = (tmp198_)*tmp87_;
   double tmp203_ = tmp201_+tmp202_;
   double tmp204_ = (tmp203_)*(tmp86_);
   double tmp205_ = (tmp198_)*tmp88_;
   double tmp206_ = tmp204_+tmp205_;
   double tmp207_ = tmp141_*tmp8_;
   double tmp208_ = -(tmp2_);
   double tmp209_ = tmp207_*tmp7_;
   double tmp210_ = tmp209_*(tmp17_);
   double tmp211_ = tmp207_*tmp6_;
   double tmp212_ = tmp211_*(tmp29_);
   double tmp213_ = tmp210_+tmp212_;
   double tmp214_ = tmp2_*(tmp37_);
   double tmp215_ = tmp213_+tmp214_;
   double tmp216_ = (tmp215_)*(tmp62_);
   double tmp217_ = tmp208_*tmp7_;
   double tmp218_ = tmp217_*tmp21_;
   double tmp219_ = tmp218_*(tmp17_);
   double tmp220_ = tmp208_*tmp6_;
   double tmp221_ = tmp220_*tmp21_;
   double tmp222_ = tmp221_*(tmp29_);
   double tmp223_ = tmp219_+tmp222_;
   double tmp224_ = tmp207_*tmp21_;
   double tmp225_ = tmp224_*(tmp37_);
   double tmp226_ = tmp223_+tmp225_;
   double tmp227_ = tmp46_*(tmp226_);
   double tmp228_ = -(tmp227_);
   double tmp229_ = tmp228_/tmp106_;
   double tmp230_ = (tmp229_)*(tmp45_);
   double tmp231_ = tmp216_+tmp230_;
   double tmp232_ = (tmp231_)*(tmp66_);
   double tmp233_ = tmp217_*tmp18_;
   double tmp234_ = tmp233_*(tmp17_);
   double tmp235_ = tmp220_*tmp18_;
   double tmp236_ = tmp235_*(tmp29_);
   double tmp237_ = tmp234_+tmp236_;
   double tmp238_ = tmp207_*tmp18_;
   double tmp239_ = tmp238_*(tmp37_);
   double tmp240_ = tmp237_+tmp239_;
   double tmp241_ = (tmp240_)*(tmp62_);
   double tmp242_ = (tmp229_)*(tmp78_);
   double tmp243_ = tmp241_+tmp242_;
   double tmp244_ = (tmp243_)*(tmp83_);
   double tmp245_ = tmp232_+tmp232_;
   double tmp246_ = tmp244_+tmp244_;
   double tmp247_ = tmp245_+tmp246_;
   double tmp248_ = (tmp247_)*(tmp86_);
   double tmp249_ = tmp248_+tmp248_;
   double tmp250_ = (tmp249_)*(tmp86_);
   double tmp251_ = (tmp247_)*tmp87_;
   double tmp252_ = tmp250_+tmp251_;
   double tmp253_ = (tmp252_)*(tmp86_);
   double tmp254_ = (tmp247_)*tmp88_;
   double tmp255_ = tmp253_+tmp254_;
   double tmp256_ = -(tmp21_);
   double tmp257_ = tmp141_*tmp18_;
   double tmp258_ = tmp256_*tmp47_;
   double tmp259_ = tmp257_*tmp49_;
   double tmp260_ = tmp258_+tmp259_;
   double tmp261_ = (tmp260_)*(tmp17_);
   double tmp262_ = tmp256_*tmp7_;
   double tmp263_ = tmp257_*tmp54_;
   double tmp264_ = tmp262_+tmp263_;
   double tmp265_ = (tmp264_)*(tmp29_);
   double tmp266_ = tmp261_+tmp265_;
   double tmp267_ = tmp257_*tmp2_;
   double tmp268_ = tmp267_*(tmp37_);
   double tmp269_ = tmp266_+tmp268_;
   double tmp270_ = tmp46_*(tmp269_);
   double tmp271_ = -(tmp270_);
   double tmp272_ = tmp271_/tmp106_;
   double tmp273_ = (tmp272_)*(tmp45_);
   double tmp274_ = tmp273_*(tmp66_);
   double tmp275_ = tmp257_*tmp47_;
   double tmp276_ = tmp21_*tmp49_;
   double tmp277_ = tmp275_+tmp276_;
   double tmp278_ = (tmp277_)*(tmp17_);
   double tmp279_ = tmp257_*tmp7_;
   double tmp280_ = tmp21_*tmp54_;
   double tmp281_ = tmp279_+tmp280_;
   double tmp282_ = (tmp281_)*(tmp29_);
   double tmp283_ = tmp278_+tmp282_;
   double tmp284_ = tmp21_*tmp2_;
   double tmp285_ = tmp284_*(tmp37_);
   double tmp286_ = tmp283_+tmp285_;
   double tmp287_ = (tmp286_)*(tmp62_);
   double tmp288_ = (tmp272_)*(tmp78_);
   double tmp289_ = tmp287_+tmp288_;
   double tmp290_ = (tmp289_)*(tmp83_);
   double tmp291_ = tmp274_+tmp274_;
   double tmp292_ = tmp290_+tmp290_;
   double tmp293_ = tmp291_+tmp292_;
   double tmp294_ = (tmp293_)*(tmp86_);
   double tmp295_ = tmp294_+tmp294_;
   double tmp296_ = (tmp295_)*(tmp86_);
   double tmp297_ = (tmp293_)*tmp87_;
   double tmp298_ = tmp296_+tmp297_;
   double tmp299_ = (tmp298_)*(tmp86_);
   double tmp300_ = (tmp293_)*tmp88_;
   double tmp301_ = tmp299_+tmp300_;
   double tmp302_ = tmp141_*tmp39_;
   double tmp303_ = tmp302_*(tmp62_);
   double tmp304_ = tmp141_*(tmp51_);
   double tmp305_ = tmp46_*tmp304_;
   double tmp306_ = -(tmp305_);
   double tmp307_ = tmp306_/tmp106_;
   double tmp308_ = (tmp307_)*(tmp45_);
   double tmp309_ = tmp303_+tmp308_;
   double tmp310_ = (tmp309_)*(tmp66_);
   double tmp311_ = tmp141_*(tmp69_);
   double tmp312_ = tmp311_*(tmp62_);
   double tmp313_ = (tmp307_)*(tmp78_);
   double tmp314_ = tmp312_+tmp313_;
   double tmp315_ = (tmp314_)*(tmp83_);
   double tmp316_ = tmp310_+tmp310_;
   double tmp317_ = tmp315_+tmp315_;
   double tmp318_ = tmp316_+tmp317_;
   double tmp319_ = (tmp318_)*(tmp86_);
   double tmp320_ = tmp319_+tmp319_;
   double tmp321_ = (tmp320_)*(tmp86_);
   double tmp322_ = (tmp318_)*tmp87_;
   double tmp323_ = tmp321_+tmp322_;
   double tmp324_ = (tmp323_)*(tmp86_);
   double tmp325_ = (tmp318_)*tmp88_;
   double tmp326_ = tmp324_+tmp325_;
   double tmp327_ = tmp141_*tmp41_;
   double tmp328_ = tmp327_*(tmp62_);
   double tmp329_ = tmp141_*(tmp56_);
   double tmp330_ = tmp46_*tmp329_;
   double tmp331_ = -(tmp330_);
   double tmp332_ = tmp331_/tmp106_;
   double tmp333_ = (tmp332_)*(tmp45_);
   double tmp334_ = tmp328_+tmp333_;
   double tmp335_ = (tmp334_)*(tmp66_);
   double tmp336_ = tmp141_*(tmp73_);
   double tmp337_ = tmp336_*(tmp62_);
   double tmp338_ = (tmp332_)*(tmp78_);
   double tmp339_ = tmp337_+tmp338_;
   double tmp340_ = (tmp339_)*(tmp83_);
   double tmp341_ = tmp335_+tmp335_;
   double tmp342_ = tmp340_+tmp340_;
   double tmp343_ = tmp341_+tmp342_;
   double tmp344_ = (tmp343_)*(tmp86_);
   double tmp345_ = tmp344_+tmp344_;
   double tmp346_ = (tmp345_)*(tmp86_);
   double tmp347_ = (tmp343_)*tmp87_;
   double tmp348_ = tmp346_+tmp347_;
   double tmp349_ = (tmp348_)*(tmp86_);
   double tmp350_ = (tmp343_)*tmp88_;
   double tmp351_ = tmp349_+tmp350_;
   double tmp352_ = tmp207_*(tmp62_);
   double tmp353_ = tmp141_*tmp59_;
   double tmp354_ = tmp46_*tmp353_;
   double tmp355_ = -(tmp354_);
   double tmp356_ = tmp355_/tmp106_;
   double tmp357_ = (tmp356_)*(tmp45_);
   double tmp358_ = tmp352_+tmp357_;
   double tmp359_ = (tmp358_)*(tmp66_);
   double tmp360_ = tmp141_*tmp76_;
   double tmp361_ = tmp360_*(tmp62_);
   double tmp362_ = (tmp356_)*(tmp78_);
   double tmp363_ = tmp361_+tmp362_;
   double tmp364_ = (tmp363_)*(tmp83_);
   double tmp365_ = tmp359_+tmp359_;
   double tmp366_ = tmp364_+tmp364_;
   double tmp367_ = tmp365_+tmp366_;
   double tmp368_ = (tmp367_)*(tmp86_);
   double tmp369_ = tmp368_+tmp368_;
   double tmp370_ = (tmp369_)*(tmp86_);
   double tmp371_ = (tmp367_)*tmp87_;
   double tmp372_ = tmp370_+tmp371_;
   double tmp373_ = (tmp372_)*(tmp86_);
   double tmp374_ = (tmp367_)*tmp88_;
   double tmp375_ = tmp373_+tmp374_;
   double tmp376_ = mLocProjI_x*tmp39_;
   double tmp377_ = mLocProjI_y*tmp41_;
   double tmp378_ = tmp376_+tmp377_;
   double tmp379_ = mLocProjI_z*tmp8_;
   double tmp380_ = tmp378_+tmp379_;
   double tmp381_ = (tmp380_)*(tmp62_);
   double tmp382_ = mLocProjI_x*(tmp51_);
   double tmp383_ = mLocProjI_y*(tmp56_);
   double tmp384_ = tmp382_+tmp383_;
   double tmp385_ = mLocProjI_z*tmp59_;
   double tmp386_ = tmp384_+tmp385_;
   double tmp387_ = tmp46_*(tmp386_);
   double tmp388_ = -(tmp387_);
   double tmp389_ = tmp388_/tmp106_;
   double tmp390_ = (tmp389_)*(tmp45_);
   double tmp391_ = tmp381_+tmp390_;
   double tmp392_ = (tmp391_)*(tmp66_);
   double tmp393_ = mLocProjI_x*(tmp69_);
   double tmp394_ = mLocProjI_y*(tmp73_);
   double tmp395_ = tmp393_+tmp394_;
   double tmp396_ = mLocProjI_z*tmp76_;
   double tmp397_ = tmp395_+tmp396_;
   double tmp398_ = (tmp397_)*(tmp62_);
   double tmp399_ = (tmp389_)*(tmp78_);
   double tmp400_ = tmp398_+tmp399_;
   double tmp401_ = (tmp400_)*(tmp83_);
   double tmp402_ = tmp392_+tmp392_;
   double tmp403_ = tmp401_+tmp401_;
   double tmp404_ = tmp402_+tmp403_;
   double tmp405_ = (tmp404_)*(tmp86_);
   double tmp406_ = tmp405_+tmp405_;
   double tmp407_ = (tmp406_)*(tmp86_);
   double tmp408_ = (tmp404_)*tmp87_;
   double tmp409_ = tmp407_+tmp408_;
   double tmp410_ = (tmp409_)*(tmp86_);
   double tmp411_ = (tmp404_)*tmp88_;
   double tmp412_ = tmp410_+tmp411_;
   double tmp413_ = mLocProjJ_x*tmp39_;
   double tmp414_ = mLocProjJ_y*tmp41_;
   double tmp415_ = tmp413_+tmp414_;
   double tmp416_ = mLocProjJ_z*tmp8_;
   double tmp417_ = tmp415_+tmp416_;
   double tmp418_ = (tmp417_)*(tmp62_);
   double tmp419_ = mLocProjJ_x*(tmp51_);
   double tmp420_ = mLocProjJ_y*(tmp56_);
   double tmp421_ = tmp419_+tmp420_;
   double tmp422_ = mLocProjJ_z*tmp59_;
   double tmp423_ = tmp421_+tmp422_;
   double tmp424_ = tmp46_*(tmp423_);
   double tmp425_ = -(tmp424_);
   double tmp426_ = tmp425_/tmp106_;
   double tmp427_ = (tmp426_)*(tmp45_);
   double tmp428_ = tmp418_+tmp427_;
   double tmp429_ = (tmp428_)*(tmp66_);
   double tmp430_ = mLocProjJ_x*(tmp69_);
   double tmp431_ = mLocProjJ_y*(tmp73_);
   double tmp432_ = tmp430_+tmp431_;
   double tmp433_ = mLocProjJ_z*tmp76_;
   double tmp434_ = tmp432_+tmp433_;
   double tmp435_ = (tmp434_)*(tmp62_);
   double tmp436_ = (tmp426_)*(tmp78_);
   double tmp437_ = tmp435_+tmp436_;
   double tmp438_ = (tmp437_)*(tmp83_);
   double tmp439_ = tmp429_+tmp429_;
   double tmp440_ = tmp438_+tmp438_;
   double tmp441_ = tmp439_+tmp440_;
   double tmp442_ = (tmp441_)*(tmp86_);
   double tmp443_ = tmp442_+tmp442_;
   double tmp444_ = (tmp443_)*(tmp86_);
   double tmp445_ = (tmp441_)*tmp87_;
   double tmp446_ = tmp444_+tmp445_;
   double tmp447_ = (tmp446_)*(tmp86_);
   double tmp448_ = (tmp441_)*tmp88_;
   double tmp449_ = tmp447_+tmp448_;
   double tmp450_ = mLocProjK_x*tmp39_;
   double tmp451_ = mLocProjK_y*tmp41_;
   double tmp452_ = tmp450_+tmp451_;
   double tmp453_ = mLocProjK_z*tmp8_;
   double tmp454_ = tmp452_+tmp453_;
   double tmp455_ = (tmp454_)*(tmp62_);
   double tmp456_ = mLocProjK_x*(tmp51_);
   double tmp457_ = mLocProjK_y*(tmp56_);
   double tmp458_ = tmp456_+tmp457_;
   double tmp459_ = mLocProjK_z*tmp59_;
   double tmp460_ = tmp458_+tmp459_;
   double tmp461_ = tmp46_*(tmp460_);
   double tmp462_ = -(tmp461_);
   double tmp463_ = tmp462_/tmp106_;
   double tmp464_ = (tmp463_)*(tmp45_);
   double tmp465_ = tmp455_+tmp464_;
   double tmp466_ = (tmp465_)*(tmp66_);
   double tmp467_ = mLocProjK_x*(tmp69_);
   double tmp468_ = mLocProjK_y*(tmp73_);
   double tmp469_ = tmp467_+tmp468_;
   double tmp470_ = mLocProjK_z*tmp76_;
   double tmp471_ = tmp469_+tmp470_;
   double tmp472_ = (tmp471_)*(tmp62_);
   double tmp473_ = (tmp463_)*(tmp78_);
   double tmp474_ = tmp472_+tmp473_;
   double tmp475_ = (tmp474_)*(tmp83_);
   double tmp476_ = tmp466_+tmp466_;
   double tmp477_ = tmp475_+tmp475_;
   double tmp478_ = tmp476_+tmp477_;
   double tmp479_ = (tmp478_)*(tmp86_);
   double tmp480_ = tmp479_+tmp479_;
   double tmp481_ = (tmp480_)*(tmp86_);
   double tmp482_ = (tmp478_)*tmp87_;
   double tmp483_ = tmp481_+tmp482_;
   double tmp484_ = (tmp483_)*(tmp86_);
   double tmp485_ = (tmp478_)*tmp88_;
   double tmp486_ = tmp484_+tmp485_;
   double tmp487_ = (tmp114_)*tmp90_;
   double tmp488_ = (tmp116_)*tmp93_;
   double tmp489_ = tmp487_+tmp488_;
   double tmp490_ = (tmp119_)*tmp96_;
   double tmp491_ = tmp489_+tmp490_;
   double tmp492_ = (tmp122_)*tmp99_;
   double tmp493_ = tmp491_+tmp492_;
   double tmp494_ = (tmp122_)*(tmp86_);
   double tmp495_ = (tmp114_)*tmp89_;
   double tmp496_ = tmp494_+tmp495_;
   double tmp497_ = (tmp496_)*tmp103_;
   double tmp498_ = tmp493_+tmp497_;
   double tmp499_ = (tmp123_)*tmp90_;
   double tmp500_ = (tmp125_)*tmp93_;
   double tmp501_ = tmp499_+tmp500_;
   double tmp502_ = (tmp128_)*tmp96_;
   double tmp503_ = tmp501_+tmp502_;
   double tmp504_ = (tmp131_)*tmp99_;
   double tmp505_ = tmp503_+tmp504_;
   double tmp506_ = (tmp131_)*(tmp86_);
   double tmp507_ = (tmp123_)*tmp89_;
   double tmp508_ = tmp506_+tmp507_;
   double tmp509_ = (tmp508_)*tmp103_;
   double tmp510_ = tmp505_+tmp509_;
   double tmp511_ = (tmp132_)*tmp90_;
   double tmp512_ = (tmp134_)*tmp93_;
   double tmp513_ = tmp511_+tmp512_;
   double tmp514_ = (tmp137_)*tmp96_;
   double tmp515_ = tmp513_+tmp514_;
   double tmp516_ = (tmp140_)*tmp99_;
   double tmp517_ = tmp515_+tmp516_;
   double tmp518_ = (tmp140_)*(tmp86_);
   double tmp519_ = (tmp132_)*tmp89_;
   double tmp520_ = tmp518_+tmp519_;
   double tmp521_ = (tmp520_)*tmp103_;
   double tmp522_ = tmp517_+tmp521_;
   double tmp523_ = (tmp143_)*tmp90_;
   double tmp524_ = (tmp145_)*tmp93_;
   double tmp525_ = tmp523_+tmp524_;
   double tmp526_ = (tmp148_)*tmp96_;
   double tmp527_ = tmp525_+tmp526_;
   double tmp528_ = (tmp151_)*tmp99_;
   double tmp529_ = tmp527_+tmp528_;
   double tmp530_ = (tmp151_)*(tmp86_);
   double tmp531_ = (tmp143_)*tmp89_;
   double tmp532_ = tmp530_+tmp531_;
   double tmp533_ = (tmp532_)*tmp103_;
   double tmp534_ = tmp529_+tmp533_;
   double tmp535_ = tmp141_*(tmp105_);
   double tmp536_ = (tmp153_)*tmp90_;
   double tmp537_ = (tmp155_)*tmp93_;
   double tmp538_ = tmp536_+tmp537_;
   double tmp539_ = (tmp158_)*tmp96_;
   double tmp540_ = tmp538_+tmp539_;
   double tmp541_ = (tmp161_)*tmp99_;
   double tmp542_ = tmp540_+tmp541_;
   double tmp543_ = (tmp161_)*(tmp86_);
   double tmp544_ = (tmp153_)*tmp89_;
   double tmp545_ = tmp543_+tmp544_;
   double tmp546_ = (tmp545_)*tmp103_;
   double tmp547_ = tmp542_+tmp546_;
   double tmp548_ = (tmp198_)*tmp90_;
   double tmp549_ = (tmp200_)*tmp93_;
   double tmp550_ = tmp548_+tmp549_;
   double tmp551_ = (tmp203_)*tmp96_;
   double tmp552_ = tmp550_+tmp551_;
   double tmp553_ = (tmp206_)*tmp99_;
   double tmp554_ = tmp552_+tmp553_;
   double tmp555_ = (tmp206_)*(tmp86_);
   double tmp556_ = (tmp198_)*tmp89_;
   double tmp557_ = tmp555_+tmp556_;
   double tmp558_ = (tmp557_)*tmp103_;
   double tmp559_ = tmp554_+tmp558_;
   double tmp560_ = (tmp247_)*tmp90_;
   double tmp561_ = (tmp249_)*tmp93_;
   double tmp562_ = tmp560_+tmp561_;
   double tmp563_ = (tmp252_)*tmp96_;
   double tmp564_ = tmp562_+tmp563_;
   double tmp565_ = (tmp255_)*tmp99_;
   double tmp566_ = tmp564_+tmp565_;
   double tmp567_ = (tmp255_)*(tmp86_);
   double tmp568_ = (tmp247_)*tmp89_;
   double tmp569_ = tmp567_+tmp568_;
   double tmp570_ = (tmp569_)*tmp103_;
   double tmp571_ = tmp566_+tmp570_;
   double tmp572_ = (tmp293_)*tmp90_;
   double tmp573_ = (tmp295_)*tmp93_;
   double tmp574_ = tmp572_+tmp573_;
   double tmp575_ = (tmp298_)*tmp96_;
   double tmp576_ = tmp574_+tmp575_;
   double tmp577_ = (tmp301_)*tmp99_;
   double tmp578_ = tmp576_+tmp577_;
   double tmp579_ = (tmp301_)*(tmp86_);
   double tmp580_ = (tmp293_)*tmp89_;
   double tmp581_ = tmp579_+tmp580_;
   double tmp582_ = (tmp581_)*tmp103_;
   double tmp583_ = tmp578_+tmp582_;
   double tmp584_ = (tmp318_)*tmp90_;
   double tmp585_ = (tmp320_)*tmp93_;
   double tmp586_ = tmp584_+tmp585_;
   double tmp587_ = (tmp323_)*tmp96_;
   double tmp588_ = tmp586_+tmp587_;
   double tmp589_ = (tmp326_)*tmp99_;
   double tmp590_ = tmp588_+tmp589_;
   double tmp591_ = (tmp326_)*(tmp86_);
   double tmp592_ = (tmp318_)*tmp89_;
   double tmp593_ = tmp591_+tmp592_;
   double tmp594_ = (tmp593_)*tmp103_;
   double tmp595_ = tmp590_+tmp594_;
   double tmp596_ = (tmp343_)*tmp90_;
   double tmp597_ = (tmp345_)*tmp93_;
   double tmp598_ = tmp596_+tmp597_;
   double tmp599_ = (tmp348_)*tmp96_;
   double tmp600_ = tmp598_+tmp599_;
   double tmp601_ = (tmp351_)*tmp99_;
   double tmp602_ = tmp600_+tmp601_;
   double tmp603_ = (tmp351_)*(tmp86_);
   double tmp604_ = (tmp343_)*tmp89_;
   double tmp605_ = tmp603_+tmp604_;
   double tmp606_ = (tmp605_)*tmp103_;
   double tmp607_ = tmp602_+tmp606_;
   double tmp608_ = (tmp367_)*tmp90_;
   double tmp609_ = (tmp369_)*tmp93_;
   double tmp610_ = tmp608_+tmp609_;
   double tmp611_ = (tmp372_)*tmp96_;
   double tmp612_ = tmp610_+tmp611_;
   double tmp613_ = (tmp375_)*tmp99_;
   double tmp614_ = tmp612_+tmp613_;
   double tmp615_ = (tmp375_)*(tmp86_);
   double tmp616_ = (tmp367_)*tmp89_;
   double tmp617_ = tmp615_+tmp616_;
   double tmp618_ = (tmp617_)*tmp103_;
   double tmp619_ = tmp614_+tmp618_;
   double tmp620_ = (tmp404_)*tmp90_;
   double tmp621_ = (tmp406_)*tmp93_;
   double tmp622_ = tmp620_+tmp621_;
   double tmp623_ = (tmp409_)*tmp96_;
   double tmp624_ = tmp622_+tmp623_;
   double tmp625_ = (tmp412_)*tmp99_;
   double tmp626_ = tmp624_+tmp625_;
   double tmp627_ = (tmp412_)*(tmp86_);
   double tmp628_ = (tmp404_)*tmp89_;
   double tmp629_ = tmp627_+tmp628_;
   double tmp630_ = (tmp629_)*tmp103_;
   double tmp631_ = tmp626_+tmp630_;
   double tmp632_ = (tmp441_)*tmp90_;
   double tmp633_ = (tmp443_)*tmp93_;
   double tmp634_ = tmp632_+tmp633_;
   double tmp635_ = (tmp446_)*tmp96_;
   double tmp636_ = tmp634_+tmp635_;
   double tmp637_ = (tmp449_)*tmp99_;
   double tmp638_ = tmp636_+tmp637_;
   double tmp639_ = (tmp449_)*(tmp86_);
   double tmp640_ = (tmp441_)*tmp89_;
   double tmp641_ = tmp639_+tmp640_;
   double tmp642_ = (tmp641_)*tmp103_;
   double tmp643_ = tmp638_+tmp642_;
   double tmp644_ = (tmp478_)*tmp90_;
   double tmp645_ = (tmp480_)*tmp93_;
   double tmp646_ = tmp644_+tmp645_;
   double tmp647_ = (tmp483_)*tmp96_;
   double tmp648_ = tmp646_+tmp647_;
   double tmp649_ = (tmp486_)*tmp99_;
   double tmp650_ = tmp648_+tmp649_;
   double tmp651_ = (tmp486_)*(tmp86_);
   double tmp652_ = (tmp478_)*tmp89_;
   double tmp653_ = tmp651_+tmp652_;
   double tmp654_ = (tmp653_)*tmp103_;
   double tmp655_ = tmp650_+tmp654_;

  mVal[0] = ((tmp38_+(tmp66_)*(tmp105_))-mLocXIm)*mLocScNorm;

  mCompDer[0][0] = (tmp108_*(tmp105_)+(tmp498_)*(tmp66_))*mLocScNorm;
  mCompDer[0][1] = (tmp105_+(tmp510_)*(tmp66_))*mLocScNorm;
  mCompDer[0][2] = (tmp522_)*(tmp66_)*mLocScNorm;
  mCompDer[0][3] = (1+tmp535_+(tmp534_)*(tmp66_))*mLocScNorm;
  mCompDer[0][4] = (tmp547_)*(tmp66_)*mLocScNorm;
  mCompDer[0][5] = (tmp86_)*(tmp66_)*mLocScNorm;
  mCompDer[0][6] = tmp87_*(tmp66_)*mLocScNorm;
  mCompDer[0][7] = tmp88_*(tmp66_)*mLocScNorm;
  mCompDer[0][8] = tmp89_*(tmp66_)*mLocScNorm;
  mCompDer[0][9] = tmp102_*(tmp66_)*mLocScNorm;
  mCompDer[0][10] = ((tmp182_)*(tmp105_)+(tmp559_)*(tmp66_))*mLocScNorm;
  mCompDer[0][11] = ((tmp231_)*(tmp105_)+(tmp571_)*(tmp66_))*mLocScNorm;
  mCompDer[0][12] = (tmp273_*(tmp105_)+(tmp583_)*(tmp66_))*mLocScNorm;
  mCompDer[0][13] = ((tmp309_)*(tmp105_)+(tmp595_)*(tmp66_))*mLocScNorm;
  mCompDer[0][14] = ((tmp334_)*(tmp105_)+(tmp607_)*(tmp66_))*mLocScNorm;
  mCompDer[0][15] = ((tmp358_)*(tmp105_)+(tmp619_)*(tmp66_))*mLocScNorm;
  mCompDer[0][16] = ((tmp391_)*(tmp105_)+(tmp631_)*(tmp66_))*mLocScNorm;
  mCompDer[0][17] = ((tmp428_)*(tmp105_)+(tmp643_)*(tmp66_))*mLocScNorm;
  mCompDer[0][18] = ((tmp465_)*(tmp105_)+(tmp655_)*(tmp66_))*mLocScNorm;
  mVal[1] = ((tmp82_+(tmp83_)*(tmp105_))-mLocYIm)*mLocScNorm;

  mCompDer[1][0] = (tmp110_*(tmp105_)+(tmp498_)*(tmp83_))*mLocScNorm;
  mCompDer[1][1] = (tmp510_)*(tmp83_)*mLocScNorm;
  mCompDer[1][2] = (tmp105_+(tmp522_)*(tmp83_))*mLocScNorm;
  mCompDer[1][3] = (tmp534_)*(tmp83_)*mLocScNorm;
  mCompDer[1][4] = (1+tmp535_+(tmp547_)*(tmp83_))*mLocScNorm;
  mCompDer[1][5] = (tmp86_)*(tmp83_)*mLocScNorm;
  mCompDer[1][6] = tmp87_*(tmp83_)*mLocScNorm;
  mCompDer[1][7] = tmp88_*(tmp83_)*mLocScNorm;
  mCompDer[1][8] = tmp89_*(tmp83_)*mLocScNorm;
  mCompDer[1][9] = tmp102_*(tmp83_)*mLocScNorm;
  mCompDer[1][10] = ((tmp194_)*(tmp105_)+(tmp559_)*(tmp83_))*mLocScNorm;
  mCompDer[1][11] = ((tmp243_)*(tmp105_)+(tmp571_)*(tmp83_))*mLocScNorm;
  mCompDer[1][12] = ((tmp289_)*(tmp105_)+(tmp583_)*(tmp83_))*mLocScNorm;
  mCompDer[1][13] = ((tmp314_)*(tmp105_)+(tmp595_)*(tmp83_))*mLocScNorm;
  mCompDer[1][14] = ((tmp339_)*(tmp105_)+(tmp607_)*(tmp83_))*mLocScNorm;
  mCompDer[1][15] = ((tmp363_)*(tmp105_)+(tmp619_)*(tmp83_))*mLocScNorm;
  mCompDer[1][16] = ((tmp400_)*(tmp105_)+(tmp631_)*(tmp83_))*mLocScNorm;
  mCompDer[1][17] = ((tmp437_)*(tmp105_)+(tmp643_)*(tmp83_))*mLocScNorm;
  mCompDer[1][18] = ((tmp474_)*(tmp105_)+(tmp655_)*(tmp83_))*mLocScNorm;
}


void cEqAppui_PProjInc_M2CDRad5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PProjInc_M2CDRad5 Has no Der Sec");
}

void cEqAppui_PProjInc_M2CDRad5::SetProjI_x(double aVal){ mLocProjI_x = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjI_y(double aVal){ mLocProjI_y = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjI_z(double aVal){ mLocProjI_z = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjJ_x(double aVal){ mLocProjJ_x = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjJ_y(double aVal){ mLocProjJ_y = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjJ_z(double aVal){ mLocProjJ_z = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjK_x(double aVal){ mLocProjK_x = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjK_y(double aVal){ mLocProjK_y = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjK_z(double aVal){ mLocProjK_z = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjP0_x(double aVal){ mLocProjP0_x = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjP0_y(double aVal){ mLocProjP0_y = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetProjP0_z(double aVal){ mLocProjP0_z = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PProjInc_M2CDRad5::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PProjInc_M2CDRad5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "ProjI_x") return & mLocProjI_x;
   if (aName == "ProjI_y") return & mLocProjI_y;
   if (aName == "ProjI_z") return & mLocProjI_z;
   if (aName == "ProjJ_x") return & mLocProjJ_x;
   if (aName == "ProjJ_y") return & mLocProjJ_y;
   if (aName == "ProjJ_z") return & mLocProjJ_z;
   if (aName == "ProjK_x") return & mLocProjK_x;
   if (aName == "ProjK_y") return & mLocProjK_y;
   if (aName == "ProjK_z") return & mLocProjK_z;
   if (aName == "ProjP0_x") return & mLocProjP0_x;
   if (aName == "ProjP0_y") return & mLocProjP0_y;
   if (aName == "ProjP0_z") return & mLocProjP0_z;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PProjInc_M2CDRad5::mTheAuto("cEqAppui_PProjInc_M2CDRad5",cEqAppui_PProjInc_M2CDRad5::Alloc);


cElCompiledFonc *  cEqAppui_PProjInc_M2CDRad5::Alloc()
{  return new cEqAppui_PProjInc_M2CDRad5();
}

