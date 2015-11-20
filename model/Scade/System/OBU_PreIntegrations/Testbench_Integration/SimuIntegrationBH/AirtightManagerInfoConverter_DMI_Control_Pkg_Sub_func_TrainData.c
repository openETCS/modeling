/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

#ifndef KCG_USER_DEFINED_INIT
void AirtightManagerInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 = M_AIRTIGHT_Not_fitted;
  outC->airtightIndex = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AirtightManagerInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter */
void AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::airtightEnum */ M_AIRTIGHT airtightEnum,
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L1 = airtightEnum;
  outC->_L3 = 1;
  outC->_L4 = 2;
  switch (outC->_L1) {
    case M_AIRTIGHT_Fitted :
      outC->_L2 = outC->_L3;
      break;
    
    default :
      outC->_L2 = outC->_L4;
  }
  outC->airtightIndex = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

