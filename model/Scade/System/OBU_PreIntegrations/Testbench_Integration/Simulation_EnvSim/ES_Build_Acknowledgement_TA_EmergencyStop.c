/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_Acknowledgement_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Build_Acknowledgement */
void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::message147 */Radio_TrainTrack_Message_T_TM_transitional *message147)
{
  static Q_EMERGENCYSTOP tmp;
  
  (*message147).present = kcg_true;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &(*message147).packets.p0,
    packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &(*message147).packets.p1,
    packet1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &(*message147).packets.p3,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &(*message147).packets.p4,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &(*message147).packets.p5,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_MA_Request);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &(*message147).packets.p9,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &(*message147).packets.p11,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_MA_Request);
  if (receivedMsg16) {
    tmp = Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  }
  else if (cesAccepted) {
    if (updateEOA) {
      tmp =
        Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
    }
    else {
      tmp =
        Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
    }
  }
  else {
    tmp = Q_EMERGENCYSTOP_Emergency_stop;
  }
  (*message147).header.present = kcg_true;
  (*message147).header.nid_message = 147;
  (*message147).header.t_train = t_train;
  (*message147).header.nid_engine = (*trainProps).nid_engine;
  (*message147).header.xQ_MARQSTREASON = cQ_MARQSREASON_NONE_TA_EmergencyStop;
  (*message147).header.xT_TRAIN = t_train;
  (*message147).header.xNID_EM = nid_em;
  (*message147).header.xQ_EMERGENCYSTOP = tmp;
  (*message147).header.xNID_TEXTMESSAGE =
    cNID_TEXTMESSAGE_NONE_TA_EmergencyStop;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Build_Acknowledgement_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

