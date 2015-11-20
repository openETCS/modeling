/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2 */
void connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connectionCmd */mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileConnectionContext */mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileRegistrationStatus */mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileConnectionCmd */mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::rejectOrderToContactRBC_or_RIU */kcg_bool *rejectOrderToContactRBC_or_RIU)
{
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connect */
  static kcg_bool connect;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::disconnect */
  static kcg_bool disconnect;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::enterHole */
  static kcg_bool enterHole;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::leaveHole */
  static kcg_bool leaveHole;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L358 */
  static kcg_bool _L358;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L377 */
  static kcg_bool _L377;
  
  (*mobileConnectionCmd).nid_radio = (*connectionCmd).nid_radio;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    connectionStatus,
    mobileConnectionContext);
  (*mobileConnectionCmd).mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
  _L358 = mrs_registered_RCM_Types_Pkg == (*mobileRegistrationStatus).status;
  _L377 = (*mobileRegistrationStatus).valid & (*connectionStatus).valid &
    (*connectionCmd).valid;
  enterHole = _L358 & _L377;
  connect = enterHole & ((*connectionCmd).action == mca_connect_RCM_Types_Pkg);
  disconnect = enterHole & ((*connectionCmd).action ==
      mca_disconnect_RCM_Types_Pkg);
  enterHole = _L377 & ((*connectionCmd).action ==
      mca_expectRadioHole_RCM_Types_Pkg);
  leaveHole = _L377 & ((*connectionCmd).action ==
      mca_unexpectRadioHole_RCM_Types_Pkg);
  (*mobileConnectionCmd).valid = connect | disconnect | enterHole | leaveHole;
  if (connect) {
    (*mobileConnectionCmd).action = mca_connect_RCM_Types_Pkg;
  }
  else if (disconnect) {
    (*mobileConnectionCmd).action = mca_disconnect_RCM_Types_Pkg;
  }
  else if (enterHole) {
    (*mobileConnectionCmd).action = mca_expectRadioHole_RCM_Types_Pkg;
  }
  else if (leaveHole) {
    (*mobileConnectionCmd).action = mca_unexpectRadioHole_RCM_Types_Pkg;
  }
  else {
    (*mobileConnectionCmd).action = mca_nop_RCM_Types_Pkg;
  }
  *rejectOrderToContactRBC_or_RIU = !_L358 & (*mobileRegistrationStatus).valid &
    (*connectionStatus).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

