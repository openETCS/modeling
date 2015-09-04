/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"

void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  /* 2 */ ES_Build_Acknowledgement_reset_TA_EmergencyStop(&outC->Context_2);
  /* 1 */ ES_Process_Unconditional_reset_TA_EmergencyStop(&outC->_2_Context_1);
  /* 1 */ ES_Process_Conditional_reset_TA_EmergencyStop(&outC->_1_Context_1);
  /* 3 */ ES_ExtractMsgParams_reset_TA_EmergencyStop(&outC->Context_3);
  /* 1 */ ES_ReceiveAndControl_reset_TA_EmergencyStop(&outC->Context_1);
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
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L53, messageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, messageIn);
  /* 1 */ ES_ReceiveAndControl_TA_EmergencyStop(&outC->_L1, &outC->Context_1);
  outC->_L35 = outC->Context_1.receivedMsg15;
  outC->_L20 = outC->Context_1.receivedMsg16;
  outC->_L33 = outC->Context_1.receivedMsg18;
  outC->_L34 = outC->Context_1.sendMsg147;
  outC->_L52 = outC->_L35 | outC->_L20 | outC->_L33;
  outC->receivedESMsg = outC->_L52;
  outC->_L51 = outC->receivedESMsg;
  /* 3 */
  ES_ExtractMsgParams_TA_EmergencyStop(
    &outC->_L53,
    outC->_L51,
    &outC->Context_3);
  outC->_L46 = outC->Context_3.nid_em;
  outC->_L83 = outC->Context_3.q_scale;
  outC->_L86 = outC->Context_3.d_ref;
  outC->_L85 = outC->Context_3.q_dir;
  outC->_L84 = outC->Context_3.d_emergencystop;
  outC->nid_em = outC->_L46;
  outC->_L82 = outC->nid_em;
  outC->q_scale = outC->_L83;
  outC->_L88 = outC->q_scale;
  outC->d_ref = outC->_L86;
  outC->_L89 = outC->d_ref;
  outC->q_dir = outC->_L85;
  outC->_L87 = outC->q_dir;
  outC->d_emergencystop = outC->_L84;
  outC->_L90 = outC->d_emergencystop;
  outC->receivedMsg15 = outC->_L35;
  outC->_L91 = outC->receivedMsg15;
  outC->receivedMsg18 = outC->_L33;
  outC->_L92 = outC->receivedMsg18;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L95,
    TrainPositionIn);
  outC->_L105 = currentEOA;
  /* 1 */
  ES_Process_Conditional_TA_EmergencyStop(
    outC->_L82,
    outC->_L88,
    outC->_L89,
    outC->_L87,
    outC->_L90,
    outC->_L91,
    outC->_L92,
    &outC->_L95,
    outC->_L105,
    &outC->_1_Context_1);
  outC->_L78 = outC->_1_Context_1.cesAccepted;
  outC->_L103 = outC->_1_Context_1.updateEOA;
  outC->_L79 = outC->_1_Context_1.newEOA;
  outC->_L93 = outC->_1_Context_1.cesActive;
  outC->_L94 = outC->_1_Context_1.cesRevoked;
  outC->cesUpdateEOA = outC->_L103;
  outC->_L107 = outC->cesUpdateEOA;
  outC->_L104 = outC->cesUpdateEOA;
  outC->updateEOA = outC->_L104;
  outC->triggerCES = outC->_L78;
  outC->_L102 = outC->triggerCES;
  outC->receivedMsg16 = outC->_L20;
  outC->_L101 = outC->receivedMsg16;
  outC->_L99 = outC->triggerCES;
  outC->cesEOA = outC->_L79;
  outC->_L98 = outC->cesEOA;
  outC->revokeCES = outC->_L94;
  outC->_L97 = outC->revokeCES;
  outC->cesRevoked = outC->_L97;
  outC->cesActive = outC->_L93;
  outC->newEOA = outC->_L98;
  outC->cesAccepted = outC->_L99;
  outC->_L59 = outC->nid_em;
  outC->_L64 = outC->receivedMsg16;
  outC->_L65 = outC->receivedMsg18;
  /* 1 */
  ES_Process_Unconditional_TA_EmergencyStop(
    outC->_L59,
    outC->_L64,
    outC->_L65,
    &outC->_2_Context_1);
  outC->_L57 = outC->_2_Context_1.uesActive;
  outC->uesActive = outC->_L57;
  outC->_L61 = outC->uesActive;
  outC->_L72 = outC->cesActive;
  outC->_L73 = outC->_L61 | outC->_L72;
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L71, packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L70, packet0);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L69, trainProps);
  outC->_L68 = t_train;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L67,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
      &cMSG147_NONE_TA_EmergencyStop);
  outC->tripTrain = outC->_L61;
  outC->_L63 = outC->nid_em;
  outC->sendMsg147 = outC->_L34;
  outC->_L62 = outC->sendMsg147;
  outC->tmp = outC->_L62;
  if (outC->tmp) {
    /* 2 */
    ES_Build_Acknowledgement_TA_EmergencyStop(
      outC->_L63,
      outC->_L68,
      &outC->_L69,
      &outC->_L70,
      &outC->_L71,
      outC->_L101,
      outC->_L102,
      outC->_L107,
      &outC->Context_2);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &tmp,
      &outC->Context_2.message147);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L60, &tmp);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L60,
      &outC->_L67);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->message147,
    &outC->_L60);
  outC->rejectNewMA = outC->_L73;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_EmergencyStop_TA_EmergencyStop.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

