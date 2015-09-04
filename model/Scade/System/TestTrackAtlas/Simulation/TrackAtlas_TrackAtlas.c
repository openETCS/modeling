/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlas_TrackAtlas.h"

void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  kcg_int i;
  
  outC->init = kcg_true;
  /* 2 */ WA_Speed_NTC_reset_TrackAtlas(&outC->Context_2);
  /* 1_1 */
  C_P003V1_OBU_P003_OBU_reset_TM_conversions_baseline2(&outC->_9_Context_1_1);
  /* 1_1 */ TA_to_ML_reset_TA_Export(&outC->_8_Context_1_1);
  /* 1_1 */ GradientProfile_to_DMI_reset_TA_Export(&outC->_7_Context_1_1);
  for (i = 0; i < 200; i++) {
    /* 1_1 */ SSP_to_MRSP_reset_TA_Export(&outC->_6_Context_1_1[i]);
  }
  /* 1_1 */ Build_MRSP_reset_TA_MRSP(&outC->_5_Context_1_1);
  /* 1_1 */ Build_GradientProfile_reset_TA_Gradient(&outC->_4_Context_1_1);
  /* 1_1 */ Manage_MA_Request_reset_MA_Request(&outC->_3_Context_1_1);
  /* 1_1 */ Build_MA_reset_TA_MA(&outC->_2_Context_1_1);
  /* 1_1 */ StoreRaw_NV_reset_TA_Storage(&outC->_1_Context_1_1);
  /* 1_1 */ Manage_EmergencyStop_reset_TA_EmergencyStop(&outC->Context_1_1);
}

/* TrackAtlas::TrackAtlas */
void TrackAtlas_TrackAtlas(
  /* TrackAtlas::TrackAtlas::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlas::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlas::TrainData_in */FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlas::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlas::train_length_TOBEREPLACED */L_internal_Type_Obu_BasicTypes_Pkg train_length_TOBEREPLACED,
  /* TrackAtlas::TrackAtlas::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlas::preindicationLocation */L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlas::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlas::fromDriverToMA_R */Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlas::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlas::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlas::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlas::t_train */T_TRAIN t_train,
  /* TrackAtlas::TrackAtlas::P203V1_onboard */P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlas::PermanentDataP003 */P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_TrackAtlas_TrackAtlas *outC)
{
  kcg_int i1;
  MRSP_Profile_t_TrackAtlasTypes tmp;
  kcg_int i;
  DataForSupervision_nextGen_t_TrackAtlasTypes tmp2;
  kcg_bool _6_noname_1;
  kcg_bool _5_noname_1;
  FromTIU_t_TrackAtlasTypes _4_noname_1;
  MRSP_Profile_t_TrackAtlasTypes _3_noname_1;
  kcg_int noname_1;
  kcg_bool tmp7;
  kcg_bool tmp8;
  kcg_bool tmp9;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp10;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp11;
  MovementAuthority_t_TrackAtlasTypes tmp12;
  DataForSupervision_nextGen_t_TrackAtlasTypes tmp13;
  kcg_bool tmp14;
  DataForDMI_t_TrackAtlasTypes tmp15;
  DataForModeAndLevel_t_TrackAtlasTypes tmp16;
  P003_OBU_T_TM tmp17;
  
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L59, ModeAndLevel_in);
  outC->_L62 = outC->_L59.Mode;
  outC->_L63 = Mode_NTC_TrackAtlas;
  outC->_L61 = outC->_L62 != outC->_L63;
  outC->tmp10 = outC->_L61;
  kcg_copy_P003_permanent_data_T_TM_baseline2(&outC->_L26, PermanentDataP003);
  if (outC->tmp10) {
    kcg_copy_P003_permanent_data_T_TM_baseline2(
      &outC->PermanentDataP003_1,
      &outC->_L26);
  }
  kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->_L25, P203V1_onboard);
  if (outC->tmp10) {
    kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->P203V1_onboard_1, &outC->_L25);
  }
  outC->_L24 = t_train;
  if (outC->tmp10) {
    outC->t_train_1 = outC->_L24;
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L23, packet1);
  if (outC->tmp10) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->packet1_1,
      &outC->_L23);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L22, packet0);
  if (outC->tmp10) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &outC->packet0_1,
      &outC->_L22);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L21, trainProps);
  if (outC->tmp10) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->trainProps_1,
      &outC->_L21);
  }
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L20, fromDriverToMA_R);
  if (outC->tmp10) {
    kcg_copy_Driver2MAR_T_MA_Request(&outC->fromDriverToMA_R_1, &outC->_L20);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L19, odometry);
  if (outC->tmp10) {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry_1, &outC->_L19);
  }
  outC->_L18 = preindicationLocation;
  if (outC->tmp10) {
    outC->preindicationLocation_1 = outC->_L18;
  }
  outC->_L17 = SystemTime;
  if (outC->tmp10) {
    outC->SystemTime_1 = outC->_L17;
  }
  outC->_L16 = train_length_TOBEREPLACED;
  if (outC->tmp10) {
    outC->train_length_TOBEREPLACED_1 = outC->_L16;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L15,
    TrainPositionIn);
  if (outC->tmp10) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->TrainPositionIn_1,
      &outC->_L15);
  }
  outC->_L14 = TrainData_in;
  if (outC->tmp10) {
    outC->TrainData_in_1 = outC->_L14;
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L13, ModeAndLevel_in);
  if (outC->tmp10) {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &outC->ModeAndLevel_in_1,
      &outC->_L13);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L12, MessageIn);
  if (outC->tmp10) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->MessageIn_1,
      &outC->_L12);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L24_1,
      &outC->MessageIn_1);
    outC->_L95_1 = outC->t_train_1;
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L96_1,
      &outC->trainProps_1);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &outC->_L97_1,
      &outC->packet0_1);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L98_1,
      &outC->packet1_1);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L25_1,
      &outC->TrainPositionIn_1);
    if (outC->init) {
      outC->_L99_1 = 0;
    }
    else {
      outC->_L99_1 = outC->_L94_1;
    }
    /* 1_1 */
    Manage_EmergencyStop_TA_EmergencyStop(
      &outC->_L24_1,
      outC->_L95_1,
      &outC->_L96_1,
      &outC->_L97_1,
      &outC->_L98_1,
      &outC->_L25_1,
      outC->_L99_1,
      &outC->Context_1_1);
    outC->_L87_1 = outC->Context_1_1.rejectNewMA;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L88_1,
      &outC->Context_1_1.message147);
    outC->_L89_1 = outC->Context_1_1.tripTrain;
    outC->_L90_1 = outC->Context_1_1.cesAccepted;
    outC->_L91_1 = outC->Context_1_1.updateEOA;
    outC->_L92_1 = outC->Context_1_1.newEOA;
    outC->_L93_1 = outC->Context_1_1.cesRevoked;
    outC->trip_train_1 = outC->_L89_1;
    tmp7 = outC->trip_train_1;
  }
  outC->_L70 = kcg_false;
  if (outC->tmp10) {
    outC->_L11 = tmp7;
    outC->ces_revoked_1 = outC->_L93_1;
    tmp8 = outC->ces_revoked_1;
    outC->_L10 = tmp8;
    outC->ces_accepted_1 = outC->_L90_1;
    tmp9 = outC->ces_accepted_1;
    outC->_L9 = tmp9;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->message147_1,
      &outC->_L88_1);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &tmp10,
      &outC->message147_1);
  }
  else {
    outC->_L11 = outC->_L70;
    outC->_L10 = outC->_L70;
    outC->_L9 = outC->_L70;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L69,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
      &DEFAULT_TrainTrack_TrackAtlasTypes);
  if (outC->tmp10) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L8, &tmp10);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L74_1,
      &outC->TrainPositionIn_1);
    outC->_L73_1 = outC->SystemTime_1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L75_1,
      &outC->MessageIn_1);
    outC->_L65_1 = outC->preindicationLocation_1;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L68_1, &outC->odometry_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L23_1,
      &outC->MessageIn_1);
    /* 1_1 */ StoreRaw_NV_TA_Storage(&outC->_L23_1, &outC->_1_Context_1_1);
    outC->_L20_1 = outC->_1_Context_1_1.vald_NV;
    outC->_L22_1 = outC->_1_Context_1_1.new_NV;
    kcg_copy_P003V1_OBU_T_TM_baseline2(
      &outC->_L21_1,
      &outC->_1_Context_1_1.NV_onboard_out);
    /* 1_1 */
    Build_MA_TA_MA(
      &outC->_L24_1,
      &outC->_L21_1,
      outC->_L87_1,
      outC->_L91_1,
      outC->_L92_1,
      &outC->_2_Context_1_1);
    outC->_L16_1 = outC->_2_Context_1_1.new_MA;
    outC->_L17_1 = outC->_2_Context_1_1.vald_MA;
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MovementAuthority_Local_1,
      &outC->_2_Context_1_1.MA_onboard_out);
    outC->_L94_1 = outC->_2_Context_1_1.currentEOA;
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->_L76_1,
      &outC->MovementAuthority_Local_1);
    kcg_copy_Driver2MAR_T_MA_Request(&outC->_L70_1, &outC->fromDriverToMA_R_1);
    outC->_L72_1 = kcg_false;
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L71_1,
      &outC->trainProps_1);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &outC->_L64_1,
      &outC->packet0_1);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L69_1,
      &outC->packet1_1);
    outC->_L66_1 = outC->t_train_1;
    /* 1_1 */
    Manage_MA_Request_MA_Request(
      &outC->_L74_1,
      outC->_L73_1,
      &outC->_L75_1,
      outC->_L65_1,
      &outC->_L68_1,
      &outC->_L76_1,
      &outC->_L70_1,
      outC->_L72_1,
      &outC->_L71_1,
      &outC->_L64_1,
      &outC->_L69_1,
      outC->_L66_1,
      &outC->_3_Context_1_1);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L67_1,
      &outC->_3_Context_1_1.message_out);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->MA_request_out_1,
      &outC->_L67_1);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &tmp11,
      &outC->MA_request_out_1);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L7, &tmp11);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MA_onboard_out_1,
      &outC->MovementAuthority_Local_1);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &tmp12,
      &outC->MA_onboard_out_1);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L8,
      &outC->_L69);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L7,
      &outC->_L69);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L68,
    (MovementAuthority_t_TrackAtlasTypes *)
      &DEFAULT_MovementAuthority_TrackAtlasTypes);
  if (outC->tmp10) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L5, &tmp12);
    outC->_L104_1 = kcg_false;
    /* 1_1 */
    Build_GradientProfile_TA_Gradient(
      outC->_L104_1,
      &outC->_L24_1,
      &outC->_L25_1,
      &outC->_4_Context_1_1);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L101_1,
      &outC->_4_Context_1_1.GP);
    outC->_L102_1 = outC->_4_Context_1_1.updated;
    outC->_L103_1 = outC->_4_Context_1_1.available;
    outC->_L28_1 = 0;
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &outC->_L26_1,
      &outC->ModeAndLevel_in_1);
    outC->_L30_1 = outC->train_length_TOBEREPLACED_1;
    /* 1_1 */
    Build_MRSP_TA_MRSP(
      &outC->_L24_1,
      outC->_L28_1,
      &outC->_L26_1,
      outC->_L30_1,
      &outC->_L25_1,
      &outC->_5_Context_1_1);
    outC->_L32_1 = outC->_5_Context_1_1.newMRSP;
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->_L19_1,
      &outC->_5_Context_1_1.MRSP);
    outC->_L100_1 = outC->_5_Context_1_1.SSP_available;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L105_1,
      &outC->_5_Context_1_1.SSP);
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->_L120_1,
      (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP_1, &outC->_L105_1);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L115_1, &outC->SSP_1);
    for (i1 = 0; i1 < 200; i1++) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
        &outC->_L122_1[i1],
        &outC->_L115_1);
    }
    outC->_L121_1 = kcg_true;
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L119_1, &outC->_L120_1);
    if (outC->_L121_1) {
      for (i = 0; i < 200; i++) {
        kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&tmp, &outC->_L119_1);
        /* 1_1 */
        SSP_to_MRSP_TA_Export(
          i,
          &tmp,
          &outC->_L122_1[i],
          &outC->_6_Context_1_1[i]);
        kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
          &outC->_L119_1,
          &outC->_6_Context_1_1[i].MRSP);
        outC->_L118_1 = i + 1;
        if (!outC->_6_Context_1_1[i].cont) {
          break;
        }
      }
    }
    else {
      outC->_L118_1 = 0;
    }
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->MRSP_export_1,
      &outC->_L119_1);
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->_L111_1,
      &outC->MRSP_export_1);
    outC->_L34_1.freshMA = outC->_L16_1;
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->_L34_1.MA,
      &outC->MovementAuthority_Local_1);
    outC->_L34_1.freshGradientProfile = outC->_L102_1;
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L34_1.GradientProfile,
      &outC->_L101_1);
    outC->_L34_1.freshMRSP = outC->_L32_1;
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L34_1.MRSP, &outC->_L111_1);
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
      &outC->to_Supervision_1,
      &outC->_L34_1);
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
      &tmp13,
      &outC->to_Supervision_1);
  }
  else {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L5, &outC->_L68);
  }
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L79,
    (DataForSupervision_nextGen_t_TrackAtlasTypes *)
      &DEFAULT_to_Supervision_TrackAtlasTypes);
  if (outC->tmp10) {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(&outC->_L4, &tmp13);
    outC->SSP_available_1 = outC->_L100_1;
    tmp14 = outC->SSP_available_1;
    outC->_L76 = tmp14;
    /* 1_1 */
    GradientProfile_to_DMI_TA_Export(&outC->_L101_1, &outC->_7_Context_1_1);
    kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
      &outC->_L31_1,
      &outC->_7_Context_1_1.Gradient_Profile_for_DMI_out);
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->_L110_1,
      &outC->MRSP_export_1);
    kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
      &outC->_L35_1.GradientProfile,
      &outC->_L31_1);
    outC->_L35_1.Gradient_profile_updated = outC->_L102_1;
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L35_1.MRSP, &outC->_L110_1);
    outC->_L35_1.MRSP_updated = outC->_L32_1;
    kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI_1, &outC->_L35_1);
    kcg_copy_DataForDMI_t_TrackAtlasTypes(&tmp15, &outC->to_DMI_1);
  }
  else {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->_L79);
    outC->_L76 = outC->_L70;
  }
  kcg_copy_DataForDMI_t_TrackAtlasTypes(
    &outC->_L66,
    (DataForDMI_t_TrackAtlasTypes *) &DEFAULT_to_DMI_TrackAtlasTypes);
  if (outC->tmp10) {
    kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->_L3, &tmp15);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L79_1,
      &outC->MessageIn_1);
    outC->_L80_1 = kcg_false;
    outC->valid_GP_1 = outC->_L103_1;
    outC->_L112_1 = outC->valid_GP_1;
    outC->valid_MA_1 = outC->_L17_1;
    outC->_L113_1 = outC->valid_MA_1;
    outC->valid_SSP_1 = outC->_L100_1;
    outC->_L114_1 = outC->valid_SSP_1;
    /* 1_1 */
    TA_to_ML_TA_Export(
      &outC->_L79_1,
      outC->_L80_1,
      outC->_L112_1,
      outC->_L113_1,
      outC->_L114_1,
      &outC->_8_Context_1_1);
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      &outC->_L77_1,
      &outC->_8_Context_1_1.Data_to_From_Track_Packets_at_ML);
    kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
      &outC->_L78_1,
      &outC->_8_Context_1_1.Data_to_From_Track_Messages_at_ML);
    outC->_L85_1 = outC->_8_Context_1_1.P_12_to_Input_MA_SSP_Gradient_at_ML;
    outC->_L84_1 = outC->_8_Context_1_1.P_15_to_Input_MA_SSP_Gradient_at_ML;
    outC->_L83_1 = outC->_8_Context_1_1.P_21_to_Input_MA_SSP_Gradient_at_ML;
    outC->_L82_1 = outC->_8_Context_1_1.P_27_to_Input_MA_SSP_Gradient_at_ML;
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      &outC->_L86_1.train_packets,
      &outC->_L77_1);
    kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
      &outC->_L86_1.train_messages,
      &outC->_L78_1);
    outC->_L86_1.p12 = outC->_L85_1;
    outC->_L86_1.p15 = outC->_L84_1;
    outC->_L86_1.p21 = outC->_L83_1;
    outC->_L86_1.p27 = outC->_L82_1;
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
      &outC->To_ModeAndLevel_1,
      &outC->_L86_1);
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
      &tmp16,
      &outC->To_ModeAndLevel_1);
  }
  else {
    kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->_L3, &outC->_L66);
  }
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L65,
    (DataForModeAndLevel_t_TrackAtlasTypes *)
      &DEFAULT_to_Mode_and_Level_TrackAtlasTypes);
  if (outC->tmp10) {
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L2, &tmp16);
    kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->_L51_1, &outC->P203V1_onboard_1);
    kcg_copy_P003_permanent_data_T_TM_baseline2(
      &outC->_L52_1,
      &outC->PermanentDataP003_1);
    /* 1_1 */
    C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
      &outC->_L21_1,
      &outC->_L51_1,
      &outC->_L52_1,
      &outC->_9_Context_1_1);
    kcg_copy_P003_OBU_T_TM(
      &outC->_L50_1,
      &outC->_9_Context_1_1.P003_onbaord_out);
    kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out_1, &outC->_L50_1);
    kcg_copy_P003_OBU_T_TM(&tmp17, &outC->NV_raw_out_1);
  }
  else {
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L2, &outC->_L65);
  }
  outC->_L78 = !outC->_L61;
  outC->tmp = outC->_L78;
  if (outC->tmp) {
    /* 2 */ WA_Speed_NTC_TrackAtlas(outC->_L76, &outC->_L4, &outC->Context_2);
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
      &tmp2,
      &outC->Context_2.to_Supervision);
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(&outC->_L74, &tmp2);
  }
  else {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
      &outC->_L74,
      &outC->_L4);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L60, &outC->_L74.MRSP);
  kcg_copy_P003_OBU_T_TM(
    &outC->_L64,
    (P003_OBU_T_TM *) &DEFAULT_P003_TrackAtlasTypes);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L60);
  outC->trip_train = outC->_L11;
  outC->ces_revoked = outC->_L10;
  outC->ces_accepted = outC->_L9;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->message147,
    &outC->_L8);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->MA_request_out,
    &outC->_L7);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->_L5);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &outC->_L74);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &outC->_L3);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->To_ModeAndLevel,
    &outC->_L2);
  if (outC->tmp10) {
    kcg_copy_P003_OBU_T_TM(&outC->_L1, &tmp17);
  }
  else {
    kcg_copy_P003_OBU_T_TM(&outC->_L1, &outC->_L64);
  }
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &outC->_L1);
  if (outC->tmp10) {
    noname_1 = outC->_L118_1;
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_3_noname_1, &outC->_L19_1);
    outC->_L27_1 = outC->TrainData_in_1;
    _4_noname_1 = outC->_L27_1;
    _5_noname_1 = outC->_L22_1;
    _6_noname_1 = outC->_L20_1;
    outC->init = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlas_TrackAtlas.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

