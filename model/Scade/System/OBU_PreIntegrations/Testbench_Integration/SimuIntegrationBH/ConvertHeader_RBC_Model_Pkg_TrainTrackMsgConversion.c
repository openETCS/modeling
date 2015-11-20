/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader */
void ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::newHeader */ M_TrainTrack_MessageHd_T_TM_radio_messages *newHeader,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::present */ kcg_bool *present,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::oldHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *oldHeader)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::nid_textmessage */
  static NID_TEXTMESSAGE _1_nid_textmessage;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_NID_TEXTMESSAGE::then::_L2 */
  static kcg_int _L2_Decode_NID_TEXTMESSAGE;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_NID_TEXTMESSAGE::then::_L1 */
  static NID_TEXTMESSAGE _L1_Decode_NID_TEXTMESSAGE;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::nid_textmessage */
  static NID_TEXTMESSAGE nid_textmessage;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_NID_TEXTMESSAGE::else::_L1 */
  static NID_TEXTMESSAGE _L17_Decode_NID_TEXTMESSAGE;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::q_emergencystop */
  static Q_EMERGENCYSTOP _3_q_emergencystop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::nid_em */
  static NID_EM _2_nid_em;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop::then::_L4 */
  static kcg_int _L4_Decode_Emergency_Stop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop::then::_L3 */
  static Q_EMERGENCYSTOP _L3_Decode_Emergency_Stop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop::then::_L2 */
  static NID_EM _L2_Decode_Emergency_Stop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop::then::_L1 */
  static kcg_int _L1_Decode_Emergency_Stop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::q_emergencystop */
  static Q_EMERGENCYSTOP q_emergencystop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::nid_em */
  static NID_EM nid_em;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop::else::_L2 */
  static Q_EMERGENCYSTOP _L28_Decode_Emergency_Stop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop::else::_L1 */
  static NID_EM _L19_Decode_Emergency_Stop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::xt_train */
  static T_TRAIN _4_xt_train;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_xT_TRAIN::then::_L2 */
  static kcg_int _L2_Decode_xT_TRAIN;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_xT_TRAIN::then::_L1 */
  static T_TRAIN _L1_Decode_xT_TRAIN;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::xt_train */
  static T_TRAIN xt_train;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_xT_TRAIN::else::_L1 */
  static T_TRAIN _L110_Decode_xT_TRAIN;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::q_marqstreason */
  static Q_MARQSTREASON _5_q_marqstreason;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Q_MARQSTREASON::then::_L2 */
  static kcg_int _L2_Decode_Q_MARQSTREASON;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Q_MARQSTREASON::then::_L1 */
  static Q_MARQSTREASON _L1_Decode_Q_MARQSTREASON;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::q_marqstreason */
  static Q_MARQSTREASON q_marqstreason;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Q_MARQSTREASON::else::_L1 */
  static Q_MARQSTREASON _L111_Decode_Q_MARQSTREASON;
  static kcg_int noname;
  static kcg_int _6_noname;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_NID_TEXTMESSAGE */
  static kcg_bool Decode_NID_TEXTMESSAGE_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop */
  static kcg_bool Decode_Emergency_Stop_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_xT_TRAIN */
  static kcg_bool Decode_xT_TRAIN_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Q_MARQSTREASON */
  static kcg_bool Decode_Q_MARQSTREASON_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::field1 */
  static kcg_int field1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::field2 */
  static kcg_int field2;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::field3 */
  static kcg_int field3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::q_marqstreason */
  static Q_MARQSTREASON _16_q_marqstreason;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::nid_message */
  static kcg_int nid_message;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::xt_train */
  static T_TRAIN _15_xt_train;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::nid_em */
  static NID_EM _14_nid_em;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::q_emergencystop */
  static Q_EMERGENCYSTOP _13_q_emergencystop;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::nid_textmessage */
  static NID_TEXTMESSAGE _12_nid_textmessage;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L1 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L10 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L10;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L16 */
  static NID_MESSAGE _L16;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L17 */
  static T_TRAIN _L17;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L28 */
  static kcg_bool _L28;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L27 */
  static kcg_int _L27;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L26 */
  static kcg_int _L26;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L25 */
  static kcg_int _L25;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L24 */
  static kcg_int _L24;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L23 */
  static kcg_int _L23;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L22 */
  static kcg_int _L22;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L21 */
  static kcg_int _L21;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L29 */
  static NID_ENGINE _L29;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L31 */
  static Q_MARQSTREASON _L31;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L32 */
  static T_TRAIN _L32;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L34 */
  static NID_EM _L34;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L36 */
  static Q_EMERGENCYSTOP _L36;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L39 */
  static NID_TEXTMESSAGE _L39;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::_L40 */
  static kcg_int _L40;
  
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L1, newHeader);
  _L28 = _L1.valid;
  _L27 = _L1.nid_message;
  _L16 = /* 1 */ CAST_Int_to_NID_MESSAGE_TM_conversions(_L27);
  _L25 = _L1.t_train;
  _L17 = /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(_L25);
  _L24 = _L1.nid_engine;
  _L29 = /* 1 */ CAST_Int_to_NID_ENGINE_TM_conversions(_L24);
  nid_message = _L27;
  Decode_Q_MARQSTREASON_clock = nid_message == 132;
  /* ck_Decode_Q_MARQSTREASON */ if (Decode_Q_MARQSTREASON_clock) {
  }
  else {
    _L111_Decode_Q_MARQSTREASON =
      cDEFAULT_Q_MARQSTREASON_RBC_Model_Pkg_TrainTrackMsgConversion;
    q_marqstreason = _L111_Decode_Q_MARQSTREASON;
  }
  _L23 = _L1.field1;
  field1 = _L23;
  /* ck_Decode_Q_MARQSTREASON */ if (Decode_Q_MARQSTREASON_clock) {
    _L2_Decode_Q_MARQSTREASON = field1;
    _L1_Decode_Q_MARQSTREASON = /* 2 */
      CAST_Int_to_Q_MARQSTREASON_TM_conversions(_L2_Decode_Q_MARQSTREASON);
    _5_q_marqstreason = _L1_Decode_Q_MARQSTREASON;
    _16_q_marqstreason = _5_q_marqstreason;
  }
  else {
    _16_q_marqstreason = q_marqstreason;
  }
  _L31 = _16_q_marqstreason;
  Decode_xT_TRAIN_clock = (nid_message == 137) | (nid_message == 138) |
    (nid_message == 146);
  /* ck_Decode_xT_TRAIN */ if (Decode_xT_TRAIN_clock) {
    _L2_Decode_xT_TRAIN = field1;
    _L1_Decode_xT_TRAIN = /* 3 */
      CAST_Int_to_T_TRAIN_TM_conversions(_L2_Decode_xT_TRAIN);
    _4_xt_train = _L1_Decode_xT_TRAIN;
    _15_xt_train = _4_xt_train;
  }
  else {
    _L110_Decode_xT_TRAIN =
      cDEFAULT_T_TRAIN_RBC_Model_Pkg_TrainTrackMsgConversion;
    xt_train = _L110_Decode_xT_TRAIN;
    _15_xt_train = xt_train;
  }
  _L32 = _15_xt_train;
  Decode_Emergency_Stop_clock = nid_message == 147;
  /* ck_Decode_Emergency_Stop */ if (Decode_Emergency_Stop_clock) {
    _L1_Decode_Emergency_Stop = field1;
    _L2_Decode_Emergency_Stop = /* 2 */
      CAST_Int_to_NID_EM_TM_conversions(_L1_Decode_Emergency_Stop);
    _2_nid_em = _L2_Decode_Emergency_Stop;
    _14_nid_em = _2_nid_em;
  }
  else {
    _L19_Decode_Emergency_Stop =
      cDEFAULT_NID_EM_RBC_Model_Pkg_TrainTrackMsgConversion;
    nid_em = _L19_Decode_Emergency_Stop;
    _14_nid_em = nid_em;
  }
  _L34 = _14_nid_em;
  /* ck_Decode_Emergency_Stop */ if (Decode_Emergency_Stop_clock) {
  }
  else {
    _L28_Decode_Emergency_Stop =
      cDEFAULT_EMERGENCYSTOP_RBC_Model_Pkg_TrainTrackMsgConversion;
    q_emergencystop = _L28_Decode_Emergency_Stop;
  }
  _L22 = _L1.field2;
  field2 = _L22;
  /* ck_Decode_Emergency_Stop */ if (Decode_Emergency_Stop_clock) {
    _L4_Decode_Emergency_Stop = field2;
    _L3_Decode_Emergency_Stop = /* 2 */
      CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions(_L4_Decode_Emergency_Stop);
    _3_q_emergencystop = _L3_Decode_Emergency_Stop;
    _13_q_emergencystop = _3_q_emergencystop;
  }
  else {
    _13_q_emergencystop = q_emergencystop;
  }
  _L36 = _13_q_emergencystop;
  Decode_NID_TEXTMESSAGE_clock = nid_message == 158;
  /* ck_Decode_NID_TEXTMESSAGE */ if (Decode_NID_TEXTMESSAGE_clock) {
    _L2_Decode_NID_TEXTMESSAGE = field1;
    _L1_Decode_NID_TEXTMESSAGE = /* 2 */
      CAST_Int_to_NID_TEXTMESSAGE_TM_conversions(_L2_Decode_NID_TEXTMESSAGE);
    _1_nid_textmessage = _L1_Decode_NID_TEXTMESSAGE;
    _12_nid_textmessage = _1_nid_textmessage;
  }
  else {
    _L17_Decode_NID_TEXTMESSAGE =
      cDEFAULT_NID_TEXTMESSAGE_RBC_Model_Pkg_TrainTrackMsgConversion;
    nid_textmessage = _L17_Decode_NID_TEXTMESSAGE;
    _12_nid_textmessage = nid_textmessage;
  }
  _L39 = _12_nid_textmessage;
  _L10.present = _L28;
  _L10.nid_message = _L16;
  _L10.t_train = _L17;
  _L10.nid_engine = _L29;
  _L10.xQ_MARQSTREASON = _L31;
  _L10.xT_TRAIN = _L32;
  _L10.xNID_EM = _L34;
  _L10.xQ_EMERGENCYSTOP = _L36;
  _L10.xNID_TEXTMESSAGE = _L39;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(oldHeader, &_L10);
  *present = _L28;
  _L21 = _L1.field3;
  _L26 = _L1.l_message;
  noname = _L26;
  field3 = _L21;
  _L40 = field3;
  _6_noname = _L40;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

