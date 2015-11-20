/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"

void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  /* 1 */ ES_Process_Unconditional_reset_TA_EmergencyStop(&outC->Context_1);
  /* 2 */ Send_M147_reset_TM_radio_messages(&outC->Context_2);
  /* 1 */ ES_Process_Conditional_reset_TA_EmergencyStop(&outC->_1_Context_1);
}

/* TA_EmergencyStop::Manage_EmergencyStop */
void Manage_EmergencyStop_TA_EmergencyStop(
  /* TA_EmergencyStop::Manage_EmergencyStop::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::Manage_EmergencyStop::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::Manage_EmergencyStop::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* TA_EmergencyStop::Manage_EmergencyStop::bus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  static M_147_T_TM_radio_messages tmp2;
  static P000_TM_TrainToTrack tmp1;
  static P001_TM_TrainToTrack tmp;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg16 */
  static kcg_bool receivedMsg16;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg15 */
  static kcg_bool receivedMsg15;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg18 */
  static kcg_bool receivedMsg18;
  /* TA_EmergencyStop::Manage_EmergencyStop::sendMsg147 */
  static kcg_bool sendMsg147;
  /* TA_EmergencyStop::Manage_EmergencyStop::nid_em */
  static NID_EM nid_em;
  /* TA_EmergencyStop::Manage_EmergencyStop::q_scale */
  static Q_SCALE q_scale;
  /* TA_EmergencyStop::Manage_EmergencyStop::d_ref */
  static D_REF d_ref;
  /* TA_EmergencyStop::Manage_EmergencyStop::q_dir */
  static Q_DIR q_dir;
  /* TA_EmergencyStop::Manage_EmergencyStop::d_emergencystop */
  static D_EMERGENCYSTOP d_emergencystop;
  
  /* 1 */
  ES_ReceiveAndControl_TA_EmergencyStop(
    messageIn,
    &receivedMsg15,
    &receivedMsg16,
    &receivedMsg18,
    &sendMsg147);
  /* 3 */
  ES_ExtractMsgParams_TA_EmergencyStop(
    messageIn,
    (kcg_bool) (receivedMsg15 | receivedMsg16 | receivedMsg18),
    &nid_em,
    &q_scale,
    &d_ref,
    &q_dir,
    &d_emergencystop);
  /* 1 */
  ES_Process_Conditional_TA_EmergencyStop(
    nid_em,
    q_scale,
    d_ref,
    q_dir,
    d_emergencystop,
    receivedMsg15,
    receivedMsg18,
    TrainPositionIn,
    currentEOA,
    &outC->_1_Context_1);
  outC->cesAccepted = outC->_1_Context_1.cesAccepted;
  outC->updateEOA = outC->_1_Context_1.updateEOA;
  outC->newEOA = outC->_1_Context_1.newEOA;
  outC->cesRevoked = outC->_1_Context_1.cesRevoked;
  /* 1 */ C_legacy_P000_TM_conversions_TrainToTrack(packet0, &tmp1);
  /* 1 */ C_legacy_P001_TM_conversions_TrainToTrack(packet1, &tmp);
  if (sendMsg147) {
    /* 1 */
    ES_Build_AcknowledgementNew_TA_EmergencyStop(
      nid_em,
      t_train,
      trainProps,
      receivedMsg16,
      outC->cesAccepted,
      outC->updateEOA,
      &tmp2);
    /* 2 */
    ES_Build_Acknowledgement_TA_EmergencyStop(
      nid_em,
      t_train,
      trainProps,
      packet0,
      packet1,
      receivedMsg16,
      outC->cesAccepted,
      outC->updateEOA,
      &outC->message147);
  }
  else {
    kcg_copy_M_147_T_TM_radio_messages(
      &tmp2,
      (M_147_T_TM_radio_messages *) &DEFAULT_M147_TA_EmergencyStop);
    kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
      &outC->message147,
      (Radio_TrainTrack_Message_T_TM_transitional *)
        &cMSG147_NONE_TA_EmergencyStop);
  }
  /* 2 */
  Send_M147_TM_radio_messages(
    t_train,
    bus_in,
    &tmp2,
    &tmp1,
    &tmp,
    cM_version_MA_Request,
    &outC->Context_2);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->Context_2.MessageBus_out);
  /* 1 */
  ES_Process_Unconditional_TA_EmergencyStop(
    nid_em,
    receivedMsg16,
    receivedMsg18,
    &outC->Context_1);
  outC->tripTrain = outC->Context_1.uesActive;
  outC->rejectNewMA = outC->tripTrain | outC->_1_Context_1.cesActive;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_EmergencyStop_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

