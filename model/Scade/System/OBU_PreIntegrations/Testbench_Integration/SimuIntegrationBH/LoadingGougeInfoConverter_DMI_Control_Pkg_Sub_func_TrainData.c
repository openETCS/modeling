/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

#ifndef KCG_USER_DEFINED_INIT
void LoadingGougeInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->loadingGougeIndex = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LoadingGougeInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter */
void LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter::loadingGougeEnum */ M_LOADINGGAUGE loadingGougeEnum,
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L1 = loadingGougeEnum;
  outC->_L3 = 1;
  outC->_L4 = 2;
  outC->_L5 = 3;
  outC->_L6 = 4;
  outC->_L7 = 5;
  switch (outC->_L1) {
    case M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles :
      outC->_L2 = outC->_L3;
      break;
    case M_LOADINGGAUGE_G1 :
      outC->_L2 = outC->_L4;
      break;
    case M_LOADINGGAUGE_GA :
      outC->_L2 = outC->_L5;
      break;
    case M_LOADINGGAUGE_GB :
      outC->_L2 = outC->_L6;
      break;
    
    default :
      outC->_L2 = outC->_L7;
  }
  outC->loadingGougeIndex = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

