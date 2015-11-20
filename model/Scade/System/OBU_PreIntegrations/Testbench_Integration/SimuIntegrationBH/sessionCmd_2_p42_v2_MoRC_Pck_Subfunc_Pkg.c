/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2 */
void sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::sessionCmd */ sessionCmd_T_RCM_Session_Types_Pkg *sessionCmd,
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::valid */ kcg_bool *valid,
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement)
{
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L1 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L1;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L11 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L11;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L10 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L10;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L9 */
  static RBC_Id_T_Common_Types_Pkg _L9;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L8 */
  static NID_RADIO _L8;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L7 */
  static NID_RBC _L7;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L6 */
  static NID_C _L6;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L5 */
  static Q_RBC _L5;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L4 */
  static kcg_bool _L4;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L3 */
  static kcg_bool _L3;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L2 */
  static kcg_bool _L2;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L22 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L22;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L23 */
  static Q_SLEEPSESSION _L23;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L24 */
  static kcg_bool _L24;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L25 */
  static Q_SLEEPSESSION _L25;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L26 */
  static Q_SLEEPSESSION _L26;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L27 */
  static MsgSource_T_Common_Types_Pkg _L27;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L28 */
  static MsgSource_T_Common_Types_Pkg _L28;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L29 */
  static MsgSource_T_Common_Types_Pkg _L29;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L30 */
  static Q_DIR _L30;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L32 */
  static Q_DIR _L32;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::_L33 */
  static Q_DIR _L33;
  
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L1, sessionCmd);
  _L2 = _L1.valid;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L11, &_L1.p42);
  _L24 = _L11.valid;
  _L28 = _L11.msgSrc;
  _L29 = msrc_OBU_Common_Types_Pkg;
  /* 2 */ if (_L24) {
    _L27 = _L28;
  }
  else {
    _L27 = _L29;
  }
  _L30 = _L11.q_dir;
  _L33 = Q_DIR_Both_directions;
  /* 3 */ if (_L24) {
    _L32 = _L30;
  }
  else {
    _L32 = _L33;
  }
  _L5 = _L1.q_rbc;
  _L6 = _L1.nid_c;
  _L7 = _L1.nid_rbc;
  _L8 = _L1.nid_radio;
  _L23 = _L11.q_sleepsession;
  _L26 = Q_SLEEPSESSION_Execute_session_establishment_order;
  /* 1 */ if (_L24) {
    _L25 = _L23;
  }
  else {
    _L25 = _L26;
  }
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L9, &_L1.origin);
  _L22.valid = _L2;
  _L22.msgSrc = _L27;
  _L22.q_dir = _L32;
  _L22.q_rbc = _L5;
  _L22.nid_c = _L6;
  _L22.nid_RBC = _L7;
  _L22.nid_radio = _L8;
  _L22.q_sleepsession = _L25;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L22.origin, &_L9);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    p42_SessionManagement,
    &_L22);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L10,
    &_L1.m38);
  _L4 = _L1.initiatedByRBC;
  _L3 = _L1.initiatedByOBU;
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &noname,
    &_L10);
  _1_noname = _L3;
  _2_noname = _L4;
  *valid = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

