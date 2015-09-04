/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestTrackAtlas.h"

void TestTrackAtlas_reset(outC_TestTrackAtlas *outC)
{
  /* 1 */ TrackAtlas_reset_TrackAtlas(&outC->_3_Context_1);
  /* 1 */ SimTrainPos_reset(&outC->_2_Context_1);
  /* 1 */ ConvertReceivedMess_reset(&outC->_1_Context_1);
  /* 1 */ TestTrackTrackAtlasLegacy_reset_Internal_Tests(&outC->Context_1);
}

/* TestTrackAtlas */
void TestTrackAtlas(inC_TestTrackAtlas *inC, outC_TestTrackAtlas *outC)
{
  kcg_bool noname;
  
  outC->_L31 = inC->reset;
  noname = outC->_L31;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L52,
    (T_Mode_Level_Level_And_Mode_Types_Pkg *) &TTrackAtlas_ModeAndLevel_in);
  outC->_L51 = TTrackAtlas_TrainData;
  kcg_copy_P003_permanent_data_T_TM_baseline2(
    &outC->_L50,
    (P003_permanent_data_T_TM_baseline2 *) &TTrackAtlas_PermanentDataP003);
  kcg_copy_P203V1_OBU_T_TM_baseline2(
    &outC->_L49,
    (P203V1_OBU_T_TM_baseline2 *) &TTrackAtlas_P203V1_onboard);
  outC->_L48 = TTrackAtlas_t_train;
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L47,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &TTrackAtlas_packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L46,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &TTrackAtlas_packet0);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L45,
    (trainProperties_T_TrainPosition_Types_Pck *) &TTrackAtlas_TrainProps);
  kcg_copy_Driver2MAR_T_MA_Request(
    &outC->_L44,
    (Driver2MAR_T_MA_Request *) &TTrackAtlas_fromDriverToMA_R);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L43,
    (odometry_T_Obu_BasicTypes_Pkg *) &TTrackAtlas_Odometry);
  outC->_L42 = TTrackAtlas_PreindicationLocation;
  outC->_L41 = TTrackAtlas_SystemTime;
  outC->_L18 = inC->Trigger_in;
  /* 1 */
  TestTrackTrackAtlasLegacy_Internal_Tests(outC->_L18, &outC->Context_1);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L13,
    &outC->Context_1.Compressed_Radio_Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L14,
    &outC->Context_1.Compressed_Packets_out);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L15,
    &outC->Context_1.RadioTrackTrainHeader_out);
  /* 1 */
  ConvertReceivedMess(
    &outC->_L13,
    &outC->_L14,
    &outC->_L15,
    &outC->_1_Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L16,
    &outC->_1_Context_1.Received_Message);
  /* 1 */ SimTrainPos(outC->_L18, &outC->_2_Context_1);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L28,
    &outC->_2_Context_1.TrainPos);
  outC->_L32 = 11450;
  /* 1 */
  TrackAtlas_TrackAtlas(
    &outC->_L16,
    &outC->_L52,
    outC->_L51,
    &outC->_L28,
    outC->_L32,
    outC->_L41,
    outC->_L42,
    &outC->_L43,
    &outC->_L44,
    &outC->_L45,
    &outC->_L46,
    &outC->_L47,
    outC->_L48,
    &outC->_L49,
    &outC->_L50,
    &outC->_3_Context_1);
  kcg_copy_P003_OBU_T_TM(&outC->_L11, &outC->_3_Context_1.NV_raw_out);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L12,
    &outC->_3_Context_1.To_ModeAndLevel);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(
    &outC->_L29,
    &outC->_3_Context_1.to_DMI);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L33,
    &outC->_3_Context_1.to_Supervision);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L34,
    &outC->_3_Context_1.MA_onboard_out);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L35,
    &outC->_3_Context_1.MRSP);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L36,
    &outC->_3_Context_1.MA_request_out);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L37,
    &outC->_3_Context_1.message147);
  outC->_L38 = outC->_3_Context_1.ces_accepted;
  outC->_L39 = outC->_3_Context_1.ces_revoked;
  outC->_L40 = outC->_3_Context_1.trip_train;
  outC->trip_train = outC->_L40;
  outC->ces_revoked = outC->_L39;
  outC->ces_accepted = outC->_L38;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->message147,
    &outC->_L37);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->MA_request_out,
    &outC->_L36);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L35);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->_L34);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &outC->_L33);
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &outC->_L11);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->to_ML, &outC->_L12);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &outC->_L29);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestTrackAtlas.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

