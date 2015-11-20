/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession */
void p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::p131_transitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::p42_establishSession */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishSession)
{
  static Q_SCALE noname;
  static D_RBCTR _1_noname;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L37 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L37;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L53 */
  static kcg_bool _L53;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L54 */
  static P131_OBU_T_TM _L54;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L52 */
  static CompressedPackets_T_Common_Types_Pkg _L52;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L55 */
  static kcg_bool _L55;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L56 */
  static kcg_bool _L56;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L72 */
  static Q_SLEEPSESSION _L72;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L71 */
  static NID_RADIO _L71;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L70 */
  static NID_RBC _L70;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L69 */
  static NID_C _L69;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L68 */
  static D_RBCTR _L68;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L67 */
  static Q_SCALE _L67;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L66 */
  static Q_DIR _L66;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L65 */
  static kcg_bool _L65;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L73 */
  static ReceivedMessage_T_Common_Types_Pkg _L73;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L74 */
  static MsgSource_T_Common_Types_Pkg _L74;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L75 */
  static RadioMetadata_T_Common_Types_Pkg _L75;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L76 */
  static BG_Header_T_BG_Types_Pkg _L76;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L77 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L77;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L78 */
  static RBC_Id_T_Common_Types_Pkg _L78;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L81 */
  static Q_RBC _L81;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L120 */
  static CompressedPackets_T_Common_Types_Pkg _L120;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L135 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L135;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L37, p131_transitionOrder);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L52, &_L37.packets);
  /* 1 */ Read_P131_TM(&_L52, &_L53, &_L54);
  _L55 = _L37.valid;
  _L56 = _L55 & _L53;
  _L72 = _L54.q_sleepsession;
  _L71 = _L54.nid_radio;
  _L70 = _L54.nid_rbc;
  _L69 = _L54.nid_c;
  _L68 = _L54.d_rbctr;
  _L67 = _L54.q_scale;
  _L66 = _L54.q_dir;
  _L65 = _L54.valid;
  _L74 = _L37.source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L75, &_L37.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L76, &_L37.BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L77,
    &_L37.Radio_Common_Header);
  _L81 = Q_RBC_Establish_communication_session;
  _L135.valid = _L65;
  _L135.q_dir = _L66;
  _L135.q_rbc = _L81;
  _L135.nid_c = _L69;
  _L135.nid_rbc = _L70;
  _L135.nid_radio = _L71;
  _L135.q_sleepsession = _L72;
  /* 1 */ Send_P042_no_merge_TM_specific_send(&_L135, &_L120);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L78, &_L37.sendingRBC);
  _L73.valid = _L56;
  _L73.source = _L74;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L73.radioMetadata, &_L75);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L73.BG_Common_Header, &_L76);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L73.Radio_Common_Header,
    &_L77);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L73.packets, &_L120);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L73.sendingRBC, &_L78);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(p42_establishSession, &_L73);
  noname = _L67;
  _1_noname = _L68;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

