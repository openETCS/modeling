/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2 */
void processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p42_establishOrTerminateSessionCmd_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishOrTerminateSessionCmd_in,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::additionalSessionCmdsFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::morcStatus */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::sessionCmds_2_MoRC */ msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmds_2_MoRC)
{
  static morcStatus_T_RCM_Session_Types_Pkg noname;
  static kcg_int _1_noname;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L177 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L177;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L214 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L214;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L215 */
  static kcg_bool _L215;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L216 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L216;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L217 */
  static kcg_bool _L217;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L218 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L218;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L219 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L219;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L220 */
  static morcStatus_T_RCM_Session_Types_Pkg _L220;
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::_L221 */
  static kcg_int _L221;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L177,
    additionalSessionCmdsFromTrack_in);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L218,
    p42_establishOrTerminateSessionCmd_in);
  _L217 = _L218.valid;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L219,
    p45_radioNetworkRegistrationOrder_in);
  _L215 = _L219.valid;
  /* 27 */ if (_L215) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L214, &_L219);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L214, &_L177);
  }
  /* 28 */ if (_L217) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L216, &_L218);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L216, &_L214);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(sessionCmds_2_MoRC, &_L216);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L220, morcStatus);
  _L221 = mobileDeviceNo;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&noname, &_L220);
  _1_noname = _L221;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

