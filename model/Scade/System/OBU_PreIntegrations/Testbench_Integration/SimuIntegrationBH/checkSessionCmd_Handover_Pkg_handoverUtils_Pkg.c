/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd */
void checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_in,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::currentMoRCStatus */ morcStatus_T_RCM_Session_Types_Pkg *currentMoRCStatus,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_out */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_out)
{
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L5 */
  static morcStatus_T_RCM_Session_Types_Pkg _L5;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L6 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L6;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L7 */
  static kcg_bool _L7;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L11 */
  static NID_RADIO _L11;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L15 */
  static kcg_bool _L15;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L16 */
  static kcg_bool _L16;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L17 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L17;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L21 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L21;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L22 */
  static Q_RBC _L22;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L23 */
  static Q_RBC _L23;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L24 */
  static kcg_bool _L24;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L25 */
  static kcg_bool _L25;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L26 */
  static Q_RBC _L26;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L27 */
  static kcg_bool _L27;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L28 */
  static kcg_bool _L28;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L29 */
  static kcg_bool _L29;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L30 */
  static kcg_bool _L30;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L31 */
  static NID_RADIO _L31;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L32 */
  static NID_C _L32;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L33 */
  static NID_C _L33;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L34 */
  static NID_RBC _L34;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L35 */
  static NID_RBC _L35;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L36 */
  static kcg_bool _L36;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L37 */
  static kcg_bool _L37;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L38 */
  static kcg_bool _L38;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L39 */
  static kcg_bool _L39;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L40 */
  static kcg_bool _L40;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L43 */
  static kcg_bool _L43;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L44 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L44;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L42 */
  static CompressedPackets_T_Common_Types_Pkg _L42;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L45 */
  static kcg_bool _L45;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L46 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L46;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L47 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L47;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L48 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L48;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L49 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L49;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L50 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L50;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L51 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L51;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L52 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L52;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L53 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L53;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L54 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L54;
  
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L5, currentMoRCStatus);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(&_L47, &_L5.registration);
  _L6 = _L47.status;
  _L48 = mrs_registered_RCM_Types_Pkg;
  _L7 = _L6 == _L48;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L49, &_L5.connection);
  _L11 = _L49.nid_radio;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L21, p42_sessionCmd_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L42, &_L21.packets);
  /* 1 */ Read_P042_TM(&_L42, &_L43, &_L44);
  _L15 = _L44.valid;
  _L22 = _L44.q_rbc;
  _L23 = Q_RBC_Establish_communication_session;
  _L24 = _L22 == _L23;
  _L25 = _L7 & _L24;
  _L26 = Q_RBC_Terminate_communication_session;
  _L27 = _L22 == _L26;
  _L51 = _L49.status;
  _L52 = mcs_connected_RCM_Types_Pkg;
  _L28 = _L51 == _L52;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L50, &_L5.session);
  _L53 = _L50.phase;
  _L54 = sp_maintaining_RCM_Session_Types_Pkg;
  _L29 = _L53 == _L54;
  _L39 = _L28 | _L29;
  _L31 = _L44.nid_radio;
  _L36 = _L11 == _L31;
  _L32 = _L50.nid_c;
  _L33 = _L44.nid_c;
  _L37 = _L32 == _L33;
  _L34 = _L50.nid_rbc;
  _L35 = _L44.nid_rbc;
  _L38 = _L34 == _L35;
  _L30 = _L27 & _L39 & _L36 & _L37 & _L38;
  _L40 = _L25 | _L30;
  _L45 = _L21.valid;
  _L16 = _L40 & _L43 & _L45 & _L15;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L46,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  /* 1 */ if (_L16) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L17, &_L21);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L17, &_L46);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(p42_sessionCmd_out, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

