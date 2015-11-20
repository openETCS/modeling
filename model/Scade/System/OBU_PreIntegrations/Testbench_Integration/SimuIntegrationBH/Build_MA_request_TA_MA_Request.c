/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_request_init_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->bus_out[i1].Message.valid = kcg_true;
    outC->bus_out[i1].Message.nid_message = 0;
    outC->bus_out[i1].Message.l_message = 0;
    outC->bus_out[i1].Message.t_train = 0;
    outC->bus_out[i1].Message.nid_engine = 0;
    outC->bus_out[i1].Message.field1 = 0;
    outC->bus_out[i1].Message.field2 = 0;
    outC->bus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->bus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 1 */ Send_M132_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_request_reset_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  /* 1 */ Send_M132_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Build_MA_request */
void Build_MA_request_TA_MA_Request(
  /* TA_MA_Request::Build_MA_request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Build_MA_request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_MA_Request::Build_MA_request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_MA_Request::Build_MA_request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_MA_Request::Build_MA_request::t_train */ T_TRAIN t_train,
  /* TA_MA_Request::Build_MA_request::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_TA_MA_Request *outC)
{
  static kcg_int noname;
  /* TA_MA_Request::Build_MA_request::q_marqrstreason_local */
  static Q_MARQSTREASON q_marqrstreason_local;
  /* TA_MA_Request::Build_MA_request::_L33 */
  static kcg_bool _L33;
  /* TA_MA_Request::Build_MA_request::_L34 */
  static Q_MARQSTREASON _L34;
  /* TA_MA_Request::Build_MA_request::_L35 */
  static Q_MARQSTREASON _L35;
  /* TA_MA_Request::Build_MA_request::_L84 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L84;
  /* TA_MA_Request::Build_MA_request::_L85 */
  static T_TRAIN _L85;
  /* TA_MA_Request::Build_MA_request::_L102 */
  static NID_ENGINE _L102;
  /* TA_MA_Request::Build_MA_request::_L101 */
  static kcg_int _L101;
  /* TA_MA_Request::Build_MA_request::_L100 */
  static kcg_bool _L100;
  /* TA_MA_Request::Build_MA_request::_L99 */
  static trainProperties_T_TrainPosition_Types_Pck _L99;
  /* TA_MA_Request::Build_MA_request::_L98 */
  static M_132_T_TM_radio_messages _L98;
  /* TA_MA_Request::Build_MA_request::_L97 */
  static kcg_int _L97;
  /* TA_MA_Request::Build_MA_request::_L103 */
  static Q_MARQSTREASON _L103;
  /* TA_MA_Request::Build_MA_request::_L104 */
  static M_VERSION _L104;
  /* TA_MA_Request::Build_MA_request::_L105 */
  static P009_TM_TrainToTrack _L105;
  /* TA_MA_Request::Build_MA_request::_L106 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L106;
  /* TA_MA_Request::Build_MA_request::_L107 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L107;
  /* TA_MA_Request::Build_MA_request::_L108 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L108;
  /* TA_MA_Request::Build_MA_request::_L109 */
  static P000_TM_TrainToTrack _L109;
  /* TA_MA_Request::Build_MA_request::_L110 */
  static P001_TM_TrainToTrack _L110;
  /* TA_MA_Request::Build_MA_request::_L111 */
  static kcg_int _L111;
  /* TA_MA_Request::Build_MA_request::_L114 */
  static Q_MARQSTREASON _L114;
  
  _L33 = trackDescrDeleted;
  _L35 = Q_MARQSTREASON_Track_description_deleted;
  _L34 = Q_MARQSTREASON_Start_selected_by_driver;
  /* 1 */ if (_L33) {
    _L114 = _L35;
  }
  else {
    _L114 = _L34;
  }
  _L85 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L108, bus_in);
  _L100 = kcg_true;
  _L97 = 132;
  _L101 = 0;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L99, trainProps);
  _L102 = _L99.nid_engine;
  q_marqrstreason_local = _L114;
  _L103 = q_marqrstreason_local;
  _L98.valid = _L100;
  _L98.nid_message = _L97;
  _L98.l_message = _L101;
  _L98.t_train = _L101;
  _L98.nid_engine = _L102;
  _L98.q_marqstreason = _L103;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L106, packet0);
  /* 1 */ C_legacy_P000_TM_conversions_TrainToTrack(&_L106, &_L109);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L107, packet1);
  /* 1 */ C_legacy_P001_TM_conversions_TrainToTrack(&_L107, &_L110);
  kcg_copy_P009_TM_TrainToTrack(
    &_L105,
    (P009_TM_TrainToTrack *) &DEFAULT_P009_TA_MA_Request);
  _L104 = cM_version_TA_MA_Request;
  /* 1 */
  Send_M132_TM_radio_messages(
    _L85,
    &_L108,
    &_L98,
    &_L109,
    &_L110,
    &_L105,
    _L104,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L84,
    &outC->Context_1.MessageBus_out);
  _L111 = outC->Context_1.t_train_assigned;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->bus_out, &_L84);
  noname = _L111;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_request_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

