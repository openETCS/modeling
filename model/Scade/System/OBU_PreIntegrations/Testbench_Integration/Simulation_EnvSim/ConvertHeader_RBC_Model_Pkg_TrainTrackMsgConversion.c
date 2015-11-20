/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader */
void ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::newHeader */M_TrainTrack_MessageHd_T_TM_radio_messages *newHeader,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::present */kcg_bool *present,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::oldHeader */Radio_TrainTrack_Header_T_Radio_Types_Pkg *oldHeader)
{
  static Q_EMERGENCYSTOP tmp;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_NID_TEXTMESSAGE */
  static kcg_bool Decode_NID_TEXTMESSAGE_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop */
  static kcg_bool Decode_Emergency_Stop_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_xT_TRAIN */
  static kcg_bool Decode_xT_TRAIN_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Q_MARQSTREASON */
  static kcg_bool Decode_Q_MARQSTREASON_clock;
  
  Decode_NID_TEXTMESSAGE_clock = (*newHeader).nid_message == 158;
  Decode_Emergency_Stop_clock = (*newHeader).nid_message == 147;
  Decode_xT_TRAIN_clock = ((*newHeader).nid_message == 137) |
    ((*newHeader).nid_message == 138) | ((*newHeader).nid_message == 146);
  Decode_Q_MARQSTREASON_clock = (*newHeader).nid_message == 132;
  *present = (*newHeader).valid;
  (*oldHeader).present = *present;
  (*oldHeader).nid_message = /* 1 */
    CAST_Int_to_NID_MESSAGE_TM_conversions((*newHeader).nid_message);
  (*oldHeader).t_train = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversions((*newHeader).t_train);
  (*oldHeader).nid_engine = /* 1 */
    CAST_Int_to_NID_ENGINE_TM_conversions((*newHeader).nid_engine);
  if (Decode_Q_MARQSTREASON_clock) {
    (*oldHeader).xQ_MARQSTREASON = /* 2 */
      CAST_Int_to_Q_MARQSTREASON_TM_conversions((*newHeader).field1);
  }
  else {
    (*oldHeader).xQ_MARQSTREASON =
      cDEFAULT_Q_MARQSTREASON_RBC_Model_Pkg_TrainTrackMsgConversion;
  }
  if (Decode_xT_TRAIN_clock) {
    (*oldHeader).xT_TRAIN = /* 3 */
      CAST_Int_to_T_TRAIN_TM_conversions((*newHeader).field1);
  }
  else {
    (*oldHeader).xT_TRAIN =
      cDEFAULT_T_TRAIN_RBC_Model_Pkg_TrainTrackMsgConversion;
  }
  if (Decode_Emergency_Stop_clock) {
    (*oldHeader).xNID_EM = /* 2 */
      CAST_Int_to_NID_EM_TM_conversions((*newHeader).field1);
    tmp = /* 2 */
      CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions((*newHeader).field2);
  }
  else {
    (*oldHeader).xNID_EM =
      cDEFAULT_NID_EM_RBC_Model_Pkg_TrainTrackMsgConversion;
    tmp = cDEFAULT_EMERGENCYSTOP_RBC_Model_Pkg_TrainTrackMsgConversion;
  }
  (*oldHeader).xQ_EMERGENCYSTOP = tmp;
  if (Decode_NID_TEXTMESSAGE_clock) {
    (*oldHeader).xNID_TEXTMESSAGE = /* 2 */
      CAST_Int_to_NID_TEXTMESSAGE_TM_conversions((*newHeader).field1);
  }
  else {
    (*oldHeader).xNID_TEXTMESSAGE =
      cDEFAULT_NID_TEXTMESSAGE_RBC_Model_Pkg_TrainTrackMsgConversion;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

