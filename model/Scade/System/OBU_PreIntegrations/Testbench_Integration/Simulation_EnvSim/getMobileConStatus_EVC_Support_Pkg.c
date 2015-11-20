/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileConStatus_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::getMobileConStatus */
mobileConnectionStatus_T_RCM_Types_Pkg getMobileConStatus_EVC_Support_Pkg(
  /* EVC_Support_Pkg::getMobileConStatus::HW_ConnectionStatus */mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus)
{
  /* EVC_Support_Pkg::getMobileConStatus::MobileConnectionStatus */
  static mobileConnectionStatus_T_RCM_Types_Pkg MobileConnectionStatus;
  
  switch (HW_ConnectionStatus) {
    case mhwc_notRegistered_MoRC_Pck :
      MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
      break;
    case mhwc_registered_MoRC_Pck :
      MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
      break;
    case mhwc_connected_MoRC_Pck :
      MobileConnectionStatus = mcs_connected_RCM_Types_Pkg;
      break;
    case mhwc_connecting_MoRC_Pck :
      MobileConnectionStatus = mcs_connecting_RCM_Types_Pkg;
      break;
    
    default :
      MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
  }
  return MobileConnectionStatus;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getMobileConStatus_EVC_Support_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

