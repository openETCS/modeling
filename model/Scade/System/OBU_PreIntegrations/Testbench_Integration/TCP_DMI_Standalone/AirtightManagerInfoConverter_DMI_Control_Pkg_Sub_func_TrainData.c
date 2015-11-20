/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter */
kcg_int AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::airtightEnum */M_AIRTIGHT airtightEnum)
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

