/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileConStatus_EVC_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void getMobileConStatus_init_EVC_Support_Pkg(
  outC_getMobileConStatus_EVC_Support_Pkg *outC)
{
  outC->_L9 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L7 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L5 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L3 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L2 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1 = mhwc_notRegistered_MoRC_Pck;
  outC->MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getMobileConStatus_reset_EVC_Support_Pkg(
  outC_getMobileConStatus_EVC_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_Support_Pkg::getMobileConStatus */
void getMobileConStatus_EVC_Support_Pkg(
  /* EVC_Support_Pkg::getMobileConStatus::HW_ConnectionStatus */ mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus,
  outC_getMobileConStatus_EVC_Support_Pkg *outC)
{
  outC->_L1 = HW_ConnectionStatus;
  outC->_L5 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L9 = mcs_connected_RCM_Types_Pkg;
  outC->_L3 = mcs_connecting_RCM_Types_Pkg;
  outC->_L7 = mcs_disconnected_RCM_Types_Pkg;
  switch (outC->_L1) {
    case mhwc_notRegistered_MoRC_Pck :
      outC->_L2 = outC->_L5;
      break;
    case mhwc_registered_MoRC_Pck :
      outC->_L2 = outC->_L5;
      break;
    case mhwc_connected_MoRC_Pck :
      outC->_L2 = outC->_L9;
      break;
    case mhwc_connecting_MoRC_Pck :
      outC->_L2 = outC->_L3;
      break;
    
    default :
      outC->_L2 = outC->_L7;
  }
  outC->MobileConnectionStatus = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMobileConStatus_EVC_Support_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

