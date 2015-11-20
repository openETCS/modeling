/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h"

#ifndef KCG_USER_DEFINED_INIT
void ToOldRadioTrainTrackMsg_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->outOld.present = kcg_true;
  outC->outOld.header.present = kcg_true;
  outC->outOld.header.nid_message = 0;
  outC->outOld.header.t_train = 0;
  outC->outOld.header.nid_engine = 0;
  outC->outOld.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->outOld.header.xT_TRAIN = 0;
  outC->outOld.header.xNID_EM = 0;
  outC->outOld.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outOld.header.xNID_TEXTMESSAGE = 0;
  outC->outOld.packets.p0.valid = kcg_true;
  outC->outOld.packets.p0.packet0.NID_PACKET = 0;
  outC->outOld.packets.p0.packet0.L_PACKET = 0;
  outC->outOld.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outOld.packets.p0.packet0.NID_LRBG = 0;
  outC->outOld.packets.p0.packet0.D_LRBG = 0;
  outC->outOld.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outOld.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outOld.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outOld.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outOld.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outOld.packets.p0.packet0.L_TRAININT = 0;
  outC->outOld.packets.p0.packet0.V_TRAIN = 0;
  outC->outOld.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outOld.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outOld.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outOld.packets.p0.packet0.NID_NTC = 0;
  outC->outOld.packets.p1.valid = kcg_true;
  outC->outOld.packets.p1.packet1.NID_PACKET = 0;
  outC->outOld.packets.p1.packet1.L_PACKET = 0;
  outC->outOld.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outOld.packets.p1.packet1.NID_LRBG = 0;
  outC->outOld.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outOld.packets.p1.packet1.D_LRBG = 0;
  outC->outOld.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outOld.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outOld.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outOld.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outOld.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outOld.packets.p1.packet1.L_TRAININT = 0;
  outC->outOld.packets.p1.packet1.V_TRAIN = 0;
  outC->outOld.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outOld.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outOld.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outOld.packets.p1.packet1.NID_NTC = 0;
  outC->outOld.packets.p3.valid = kcg_true;
  outC->outOld.packets.p3.number = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->outOld.packets.p3.aNID_RADIO[i1].valid = kcg_true;
    for (i = 0; i < 15; i++) {
      outC->outOld.packets.p3.aNID_RADIO[i1].telephoneNumber[i] = 0;
    }
  }
  outC->outOld.packets.p4.valid = kcg_true;
  outC->outOld.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outOld.packets.p5.valid = kcg_true;
  outC->outOld.packets.p5.TrainRunningNumber = 0;
  outC->outOld.packets.p9.valid = kcg_true;
  outC->outOld.packets.p9.transitionInformation = 0;
  outC->outOld.packets.p11.valid = kcg_true;
  outC->outOld.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outOld.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outOld.packets.p11.l_train = 0;
  outC->outOld.packets.p11.v_maxtrain = 0;
  outC->outOld.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outOld.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outOld.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outOld.packets.p11.n_axle = 0;
  outC->outOld.packets.p11.nIter_tractionIdentity = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->outOld.packets.p11.tractionIdentity[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outOld.packets.p11.tractionIdentity[i2].nid_ctraction = 0;
  }
  outC->outOld.packets.p11.nIter_ntc = 0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->outOld.packets.p11.nid_ntc[i3] = 0;
  }
  /* 1 */
  ConvertPackets_init_RBC_Model_Pkg_TrainTrackMsgConversion(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* 1 */
  ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg */
void ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::inNew */ M_TrainTrack_Message_T_TM_radio_messages *inNew,
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L1 */
  static M_TrainTrack_Message_T_TM_radio_messages _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L3 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L8 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L8;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L7 */
  static kcg_bool _L7;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L11 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L11;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L10 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L10;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L12 */
  static outPackets_T_Common_Types_Pkg _L12;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L13 */
  static kcg_int _L13;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L1, inNew);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L11, &_L1.Message);
  /* 1 */
  ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion(&_L11, &_L7, &_L8);
  _L13 = _L11.nid_message;
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &_L10,
    &_L1.OptionalPackets);
  /* 1 */
  ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
    _L13,
    &_L10,
    &outC->Context_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L12, &outC->Context_1.oldPackets);
  _L3.present = _L7;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L3.header, &_L8);
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L3.packets, &_L12);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->outOld, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

