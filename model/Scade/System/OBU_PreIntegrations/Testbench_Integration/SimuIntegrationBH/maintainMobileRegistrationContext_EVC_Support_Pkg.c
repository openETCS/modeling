/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainMobileRegistrationContext_EVC_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void maintainMobileRegistrationContext_init_EVC_Support_Pkg(
  outC_maintainMobileRegistrationContext_EVC_Support_Pkg *outC)
{
  outC->_L20.valid = kcg_true;
  outC->_L20.mobileDeviceNo = 0;
  outC->_L20.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L20.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L20.nid_mn = 0;
  outC->_L19 = 0;
  outC->_L18 = mhwc_notRegistered_MoRC_Pck;
  outC->_L17 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L16 = mhs_nok_RCM_Types_Pkg;
  outC->_L15 = mhs_nok_RCM_Types_Pkg;
  outC->_L14 = mhs_nok_RCM_Types_Pkg;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = kcg_true;
  outC->_L3 = 0;
  outC->_L2.valid = kcg_true;
  outC->_L2.mobileDeviceNo = 0;
  outC->_L2.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L2.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L2.nid_mn = 0;
  outC->_L1.valid = kcg_true;
  outC->_L1.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L1.settingUpConnectionHasFailed = kcg_true;
  outC->_L1.connectionLost = kcg_true;
  outC->RegistrationContext.valid = kcg_true;
  outC->RegistrationContext.mobileDeviceNo = 0;
  outC->RegistrationContext.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->RegistrationContext.status = mrs_unregistered_RCM_Types_Pkg;
  outC->RegistrationContext.nid_mn = 0;
  outC->MobileRegistrationContext.valid = kcg_true;
  outC->MobileRegistrationContext.mobileDeviceNo = 0;
  outC->MobileRegistrationContext.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->MobileRegistrationContext.status = mrs_unregistered_RCM_Types_Pkg;
  outC->MobileRegistrationContext.nid_mn = 0;
  /* 1 */ getMobileRegStatus_init_EVC_Support_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void maintainMobileRegistrationContext_reset_EVC_Support_Pkg(
  outC_maintainMobileRegistrationContext_EVC_Support_Pkg *outC)
{
  /* 1 */ getMobileRegStatus_reset_EVC_Support_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_Support_Pkg::maintainMobileRegistrationContext */
void maintainMobileRegistrationContext_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::Registered_MN */ NID_MN Registered_MN,
  outC_maintainMobileRegistrationContext_EVC_Support_Pkg *outC)
{
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L1, MobileFromAPI);
  outC->_L13 = outC->_L1.valid;
  outC->_L3 = mobileDeviceNo;
  outC->_L5 = 0;
  outC->_L4 = outC->_L3 >= outC->_L5;
  outC->_L12 = outC->_L13 & outC->_L4;
  outC->_L6 = mobileDeviceNo;
  outC->_L15 = mhs_ok_RCM_Types_Pkg;
  outC->_L16 = mhs_nok_RCM_Types_Pkg;
  /* 1 */ if (outC->_L13) {
    outC->_L14 = outC->_L15;
  }
  else {
    outC->_L14 = outC->_L16;
  }
  outC->_L18 = outC->_L1.connectionStatus;
  /* 1 */ getMobileRegStatus_EVC_Support_Pkg(outC->_L18, &outC->Context_1);
  outC->_L17 = outC->Context_1.MobileRegistrationStatus;
  outC->_L19 = Registered_MN;
  outC->_L2.valid = outC->_L12;
  outC->_L2.mobileDeviceNo = outC->_L6;
  outC->_L2.healthStatus = outC->_L14;
  outC->_L2.status = outC->_L17;
  outC->_L2.nid_mn = outC->_L19;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->RegistrationContext,
    &outC->_L2);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L20,
    &outC->RegistrationContext);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->MobileRegistrationContext,
    &outC->_L20);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileRegistrationContext_EVC_Support_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

