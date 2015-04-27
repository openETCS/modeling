/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter */
kcg_int LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter::loadingGougeEnum */ M_LOADINGGAUGE loadingGougeEnum)
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

