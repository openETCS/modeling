/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter */
kcg_int TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter::TrainCatEnum */ NC_TRAIN TrainCatEnum)
{
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter::TrainCatIndex */ kcg_int TrainCatIndex;
  
  switch (TrainCatEnum) {
    case NC_TRAIN_Passenger_train :
      TrainCatIndex = 2;
      break;
    case NC_TRAIN_Freight_train_braked_in_P_position :
      TrainCatIndex = 3;
      break;
    case NC_TRAIN_Freight_train_braked_in_G_position :
      TrainCatIndex = 4;
      break;
    
    default :
      TrainCatIndex = 1;
  }
  return TrainCatIndex;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

