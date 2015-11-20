/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LengthLargerThanLKr_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::LengthLargerThanLKr */
kcg_bool LengthLargerThanLKr_SDMConversionModelPkg(
  /* SDMConversionModelPkg::LengthLargerThanLKr::L */L_internal_Type_Obu_BasicTypes_Pkg L,
  /* SDMConversionModelPkg::LengthLargerThanLKr::LnvKrInt */L_NVKRINT LnvKrInt)
{
  static kcg_int tmp;
  /* SDMConversionModelPkg::LengthLargerThanLKr::isLarger */
  static kcg_bool isLarger;
  
  switch (LnvKrInt) {
    case L_NVKRINT_0m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[0];
      break;
    case L_NVKRINT_25m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[1];
      break;
    case L_NVKRINT_50m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[2];
      break;
    case L_NVKRINT_75m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[3];
      break;
    case L_NVKRINT_100m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[4];
      break;
    case L_NVKRINT_150m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[5];
      break;
    case L_NVKRINT_200m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[6];
      break;
    case L_NVKRINT_300m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[7];
      break;
    case L_NVKRINT_400m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[8];
      break;
    case L_NVKRINT_500m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[9];
      break;
    case L_NVKRINT_600m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[10];
      break;
    case L_NVKRINT_700m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[11];
      break;
    case L_NVKRINT_800m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[12];
      break;
    case L_NVKRINT_900m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[13];
      break;
    case L_NVKRINT_1000m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[14];
      break;
    case L_NVKRINT_1100m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[15];
      break;
    case L_NVKRINT_1200m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[16];
      break;
    case L_NVKRINT_1300m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[17];
      break;
    case L_NVKRINT_1400m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[18];
      break;
    case L_NVKRINT_1500m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[19];
      break;
    case L_NVKRINT_1600m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[20];
      break;
    case L_NVKRINT_1700m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[21];
      break;
    case L_NVKRINT_1800m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[22];
      break;
    case L_NVKRINT_1900m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[23];
      break;
    case L_NVKRINT_2000m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[24];
      break;
    case L_NVKRINT_2100m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[25];
      break;
    case L_NVKRINT_2200m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[26];
      break;
    case L_NVKRINT_2300m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[27];
      break;
    case L_NVKRINT_2400m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[28];
      break;
    case L_NVKRINT_2500m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[29];
      break;
    case L_NVKRINT_2600m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[30];
      break;
    case L_NVKRINT_2700m :
      tmp = cLKrIntLookUp_SDMConversionModelPkg[31];
      break;
    
  }
  isLarger = L >= 100 * tmp;
  return isLarger;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LengthLargerThanLKr_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

