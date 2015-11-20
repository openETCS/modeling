/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

#ifndef KCG_USER_DEFINED_INIT
void AxleLoadCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L20 = 0;
  outC->_L22 = 0;
  outC->_L24 = 0;
  outC->_L15 = 0;
  outC->_L16 = 0;
  outC->_L17 = 0;
  outC->_L18 = 0;
  outC->_L19 = 0;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 = M_AXLELOADCAT_A;
  outC->axelLoadIndex = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AxleLoadCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter */
void AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::axleLoadEnum */ M_AXLELOADCAT axleLoadEnum,
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L1 = axleLoadEnum;
  outC->_L3 = 1;
  outC->_L4 = 2;
  outC->_L5 = 3;
  outC->_L6 = 4;
  outC->_L7 = 5;
  outC->_L15 = 6;
  outC->_L18 = 7;
  outC->_L19 = 8;
  outC->_L17 = 9;
  outC->_L16 = 10;
  outC->_L24 = 11;
  outC->_L20 = 12;
  outC->_L22 = 13;
  switch (outC->_L1) {
    case M_AXLELOADCAT_A :
      outC->_L2 = outC->_L3;
      break;
    case M_AXLELOADCAT_HS17 :
      outC->_L2 = outC->_L4;
      break;
    case M_AXLELOADCAT_B1 :
      outC->_L2 = outC->_L5;
      break;
    case M_AXLELOADCAT_B2 :
      outC->_L2 = outC->_L6;
      break;
    case M_AXLELOADCAT_C2 :
      outC->_L2 = outC->_L7;
      break;
    case M_AXLELOADCAT_C3 :
      outC->_L2 = outC->_L15;
      break;
    case M_AXLELOADCAT_C4 :
      outC->_L2 = outC->_L18;
      break;
    case M_AXLELOADCAT_D2 :
      outC->_L2 = outC->_L19;
      break;
    case M_AXLELOADCAT_D3 :
      outC->_L2 = outC->_L17;
      break;
    case M_AXLELOADCAT_D4 :
      outC->_L2 = outC->_L16;
      break;
    case M_AXLELOADCAT_D4XL :
      outC->_L2 = outC->_L24;
      break;
    case M_AXLELOADCAT_E4 :
      outC->_L2 = outC->_L20;
      break;
    
    default :
      outC->_L2 = outC->_L22;
  }
  outC->axelLoadIndex = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

