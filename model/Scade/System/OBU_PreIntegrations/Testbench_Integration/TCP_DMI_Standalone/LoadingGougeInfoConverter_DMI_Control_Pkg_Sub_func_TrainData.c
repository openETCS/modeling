/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter */
kcg_int LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter::loadingGougeEnum */M_LOADINGGAUGE loadingGougeEnum)
{
  /* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter::loadingGougeIndex */ kcg_int loadingGougeIndex;
  
  switch (loadingGougeEnum) {
    case M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles :
      loadingGougeIndex = 1;
      break;
    case M_LOADINGGAUGE_G1 :
      loadingGougeIndex = 2;
      break;
    case M_LOADINGGAUGE_GA :
      loadingGougeIndex = 3;
      break;
    case M_LOADINGGAUGE_GB :
      loadingGougeIndex = 4;
      break;
    
    default :
      loadingGougeIndex = 5;
  }
  return loadingGougeIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

