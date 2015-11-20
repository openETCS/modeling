/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileRegStatus_EVC_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void getMobileRegStatus_init_EVC_Support_Pkg(
  outC_getMobileRegStatus_EVC_Support_Pkg *outC)
{
  outC->_L7 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L5 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L3 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L2 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1 = mhwc_notRegistered_MoRC_Pck;
  outC->MobileRegistrationStatus = mrs_unregistered_RCM_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getMobileRegStatus_reset_EVC_Support_Pkg(
  outC_getMobileRegStatus_EVC_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_Support_Pkg::getMobileRegStatus */
void getMobileRegStatus_EVC_Support_Pkg(
  /* EVC_Support_Pkg::getMobileRegStatus::HW_ConnectionStatus */ mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus,
  outC_getMobileRegStatus_EVC_Support_Pkg *outC)
{
  outC->_L1 = HW_ConnectionStatus;
  outC->_L5 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L3 = mrs_registered_RCM_Types_Pkg;
  outC->_L7 = mrs_unregistered_RCM_Types_Pkg;
  switch (outC->_L1) {
    case mhwc_notRegistered_MoRC_Pck :
      outC->_L2 = outC->_L5;
      break;
    case mhwc_registered_MoRC_Pck :
      outC->_L2 = outC->_L3;
      break;
    case mhwc_connected_MoRC_Pck :
      outC->_L2 = outC->_L3;
      break;
    case mhwc_connecting_MoRC_Pck :
      outC->_L2 = outC->_L3;
      break;
    
    default :
      outC->_L2 = outC->_L7;
  }
  outC->MobileRegistrationStatus = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMobileRegStatus_EVC_Support_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

