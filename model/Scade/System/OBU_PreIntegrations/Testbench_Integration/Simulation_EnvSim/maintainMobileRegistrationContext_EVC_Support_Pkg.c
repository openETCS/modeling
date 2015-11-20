/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainMobileRegistrationContext_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::maintainMobileRegistrationContext */
void maintainMobileRegistrationContext_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::MobileFromAPI */mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::mobileDeviceNo */kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::Registered_MN */NID_MN Registered_MN,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::MobileRegistrationContext */mobileRegistrationContext_T_RCM_Types_Pkg *MobileRegistrationContext)
{
  (*MobileRegistrationContext).valid = (*MobileFromAPI).valid &
    (mobileDeviceNo >= 0);
  (*MobileRegistrationContext).mobileDeviceNo = mobileDeviceNo;
  (*MobileRegistrationContext).nid_mn = Registered_MN;
  if ((*MobileFromAPI).valid) {
    (*MobileRegistrationContext).healthStatus = mhs_ok_RCM_Types_Pkg;
  }
  else {
    (*MobileRegistrationContext).healthStatus = mhs_nok_RCM_Types_Pkg;
  }
  (*MobileRegistrationContext).status = /* 1 */
    getMobileRegStatus_EVC_Support_Pkg((*MobileFromAPI).connectionStatus);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** maintainMobileRegistrationContext_EVC_Support_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

