/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainMobileConnectionContext_EVC_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void maintainMobileConnectionContext_init_EVC_Support_Pkg(
  outC_maintainMobileConnectionContext_EVC_Support_Pkg *outC)
{
  outC->_L31.valid = kcg_true;
  outC->_L31.mobileDeviceNo = 0;
  outC->_L31.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L31.nid_radio = 0;
  outC->_L31.settingUpConnectionHasFailed = kcg_true;
  outC->_L31.connectionLost = kcg_true;
  outC->_L31.isInRadioHole = kcg_true;
  outC->_L30 = 0;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = mhwc_notRegistered_MoRC_Pck;
  outC->_L24 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L21.valid = kcg_true;
  outC->_L21.mobileDeviceNo = 0;
  outC->_L21.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L21.nid_radio = 0;
  outC->_L21.settingUpConnectionHasFailed = kcg_true;
  outC->_L21.connectionLost = kcg_true;
  outC->_L21.isInRadioHole = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = kcg_true;
  outC->_L3 = 0;
  outC->_L1.valid = kcg_true;
  outC->_L1.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L1.settingUpConnectionHasFailed = kcg_true;
  outC->_L1.connectionLost = kcg_true;
  outC->ConnectionContext.valid = kcg_true;
  outC->ConnectionContext.mobileDeviceNo = 0;
  outC->ConnectionContext.status = mcs_disconnected_RCM_Types_Pkg;
  outC->ConnectionContext.nid_radio = 0;
  outC->ConnectionContext.settingUpConnectionHasFailed = kcg_true;
  outC->ConnectionContext.connectionLost = kcg_true;
  outC->ConnectionContext.isInRadioHole = kcg_true;
  outC->MobileConnectionContext.valid = kcg_true;
  outC->MobileConnectionContext.mobileDeviceNo = 0;
  outC->MobileConnectionContext.status = mcs_disconnected_RCM_Types_Pkg;
  outC->MobileConnectionContext.nid_radio = 0;
  outC->MobileConnectionContext.settingUpConnectionHasFailed = kcg_true;
  outC->MobileConnectionContext.connectionLost = kcg_true;
  outC->MobileConnectionContext.isInRadioHole = kcg_true;
  /* 1 */ getMobileConStatus_init_EVC_Support_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void maintainMobileConnectionContext_reset_EVC_Support_Pkg(
  outC_maintainMobileConnectionContext_EVC_Support_Pkg *outC)
{
  /* 1 */ getMobileConStatus_reset_EVC_Support_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_Support_Pkg::maintainMobileConnectionContext */
void maintainMobileConnectionContext_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::Radio_ID */ NID_RADIO Radio_ID,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::inRadioHole */ kcg_bool inRadioHole,
  outC_maintainMobileConnectionContext_EVC_Support_Pkg *outC)
{
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L1, MobileFromAPI);
  outC->_L3 = mobileDeviceNo;
  outC->_L5 = 0;
  outC->_L4 = outC->_L3 >= outC->_L5;
  outC->_L6 = mobileDeviceNo;
  outC->_L13 = outC->_L1.valid;
  outC->_L12 = outC->_L13 & outC->_L4;
  outC->_L25 = outC->_L1.connectionStatus;
  /* 1 */ getMobileConStatus_EVC_Support_Pkg(outC->_L25, &outC->Context_1);
  outC->_L24 = outC->Context_1.MobileConnectionStatus;
  outC->_L30 = Radio_ID;
  outC->_L28 = outC->_L1.settingUpConnectionHasFailed;
  outC->_L26 = outC->_L1.connectionLost;
  outC->_L27 = inRadioHole;
  outC->_L21.valid = outC->_L12;
  outC->_L21.mobileDeviceNo = outC->_L6;
  outC->_L21.status = outC->_L24;
  outC->_L21.nid_radio = outC->_L30;
  outC->_L21.settingUpConnectionHasFailed = outC->_L28;
  outC->_L21.connectionLost = outC->_L26;
  outC->_L21.isInRadioHole = outC->_L27;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->ConnectionContext,
    &outC->_L21);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L31,
    &outC->ConnectionContext);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->MobileConnectionContext,
    &outC->_L31);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileConnectionContext_EVC_Support_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

