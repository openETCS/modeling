/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter */
kcg_int AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::airtightEnum */ M_AIRTIGHT airtightEnum)
{
  /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::airtightIndex */ kcg_int airtightIndex;
  
  switch (airtightEnum) {
    case M_AIRTIGHT_Fitted :
      airtightIndex = 1;
      break;
    
    default :
      airtightIndex = 2;
  }
  return airtightIndex;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

