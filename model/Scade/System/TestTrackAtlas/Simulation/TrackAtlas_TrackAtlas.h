/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _TrackAtlas_TrackAtlas_H_
#define _TrackAtlas_TrackAtlas_H_

#include "kcg_types.h"
#include "WA_Speed_NTC_TrackAtlas.h"
#include "Build_MA_TA_MA.h"
#include "Build_MRSP_TA_MRSP.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"
#include "StoreRaw_NV_TA_Storage.h"
#include "GradientProfile_to_DMI_TA_Export.h"
#include "TA_to_ML_TA_Export.h"
#include "SSP_to_MRSP_TA_Export.h"
#include "Manage_MA_Request_MA_Request.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"
#include "Build_GradientProfile_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_OBU_T_TM /* TrackAtlas::TrackAtlas::NV_raw_out */ NV_raw_out;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::To_ModeAndLevel */ To_ModeAndLevel;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::to_DMI */ to_DMI;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::to_Supervision */ to_Supervision;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::MA_onboard_out */ MA_onboard_out;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::MRSP */ MRSP;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlas::MA_request_out */ MA_request_out;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlas::message147 */ message147;
  kcg_bool /* TrackAtlas::TrackAtlas::ces_accepted */ ces_accepted;
  kcg_bool /* TrackAtlas::TrackAtlas::ces_revoked */ ces_revoked;
  kcg_bool /* TrackAtlas::TrackAtlas::trip_train */ trip_train;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L94 */ _L94_1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_WA_Speed_NTC_TrackAtlas /* 2 */ Context_2;
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 /* 1_1 */ _9_Context_1_1;
  outC_TA_to_ML_TA_Export /* 1_1 */ _8_Context_1_1;
  outC_GradientProfile_to_DMI_TA_Export /* 1_1 */ _7_Context_1_1;
  outC_SSP_to_MRSP_TA_Export /* 1_1 */ _6_Context_1_1[200];
  outC_Build_MRSP_TA_MRSP /* 1_1 */ _5_Context_1_1;
  outC_Build_GradientProfile_TA_Gradient /* 1_1 */ _4_Context_1_1;
  outC_Manage_MA_Request_MA_Request /* 1_1 */ _3_Context_1_1;
  outC_Build_MA_TA_MA /* 1_1 */ _2_Context_1_1;
  outC_StoreRaw_NV_TA_Storage /* 1_1 */ _1_Context_1_1;
  outC_Manage_EmergencyStop_TA_EmergencyStop /* 1_1 */ Context_1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  kcg_bool tmp10;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::MovementAuthority_Local */ MovementAuthority_Local_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::valid_MA */ valid_MA_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::valid_SSP */ valid_SSP_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::valid_GP */ valid_GP_1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::SSP */ SSP_1;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::MRSP_export */ MRSP_export_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L17 */ _L17_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L16 */ _L16_1;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L19 */ _L19_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L22 */ _L22_1;
  P003V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlasETCS::_L21 */ _L21_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L20 */ _L20_1;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L23 */ _L23_1;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L24 */ _L24_1;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasETCS::_L25 */ _L25_1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L26 */ _L26_1;
  FromTIU_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L27 */ _L27_1;
  kcg_int /* TrackAtlas::TrackAtlasETCS::_L28 */ _L28_1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L30 */ _L30_1;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L31 */ _L31_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L32 */ _L32_1;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L34 */ _L34_1;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L35 */ _L35_1;
  P003_OBU_T_TM /* TrackAtlas::TrackAtlasETCS::_L50 */ _L50_1;
  P203V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlasETCS::_L51 */ _L51_1;
  P003_permanent_data_T_TM_baseline2 /* TrackAtlas::TrackAtlasETCS::_L52 */ _L52_1;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L73 */ _L73_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L72 */ _L72_1;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasETCS::_L71 */ _L71_1;
  Driver2MAR_T_MA_Request /* TrackAtlas::TrackAtlasETCS::_L70 */ _L70_1;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L69 */ _L69_1;
  odometry_T_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L68 */ _L68_1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L67 */ _L67_1;
  T_TRAIN /* TrackAtlas::TrackAtlasETCS::_L66 */ _L66_1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L65 */ _L65_1;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L64 */ _L64_1;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L75 */ _L75_1;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasETCS::_L74 */ _L74_1;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L76 */ _L76_1;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L78 */ _L78_1;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L77 */ _L77_1;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L79 */ _L79_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L80 */ _L80_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L82 */ _L82_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L83 */ _L83_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L84 */ _L84_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L85 */ _L85_1;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L86 */ _L86_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L93 */ _L93_1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L92 */ _L92_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L91 */ _L91_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L90 */ _L90_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L89 */ _L89_1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlasETCS::_L88 */ _L88_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L87 */ _L87_1;
  T_TRAIN /* TrackAtlas::TrackAtlasETCS::_L95 */ _L95_1;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasETCS::_L96 */ _L96_1;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L97 */ _L97_1;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L98 */ _L98_1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L99 */ _L99_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L100 */ _L100_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L103 */ _L103_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L102 */ _L102_1;
  GradientProfile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L101 */ _L101_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L104 */ _L104_1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L105 */ _L105_1;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L110 */ _L110_1;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L111 */ _L111_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L112 */ _L112_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L113 */ _L113_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L114 */ _L114_1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L115 */ _L115_1;
  kcg_int /* TrackAtlas::TrackAtlasETCS::_L118 */ _L118_1;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L119 */ _L119_1;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::_L120 */ _L120_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::_L121 */ _L121_1;
  array__24069 /* TrackAtlas::TrackAtlasETCS::_L122 */ _L122_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::trip_train */ trip_train_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::ces_revoked */ ces_revoked_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::ces_accepted */ ces_accepted_1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlasETCS::message147 */ message147_1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlasETCS::MA_request_out */ MA_request_out_1;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::MA_onboard_out */ MA_onboard_out_1;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::to_Supervision */ to_Supervision_1;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::SSP_available */ SSP_available_1;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::to_DMI */ to_DMI_1;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::To_ModeAndLevel */ To_ModeAndLevel_1;
  P003_OBU_T_TM /* TrackAtlas::TrackAtlasETCS::NV_raw_out */ NV_raw_out_1;
  P003_permanent_data_T_TM_baseline2 /* TrackAtlas::TrackAtlasETCS::PermanentDataP003 */ PermanentDataP003_1;
  P203V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlasETCS::P203V1_onboard */ P203V1_onboard_1;
  T_TRAIN /* TrackAtlas::TrackAtlasETCS::t_train */ t_train_1;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasETCS::packet1 */ packet1_1;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasETCS::packet0 */ packet0_1;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasETCS::trainProps */ trainProps_1;
  Driver2MAR_T_MA_Request /* TrackAtlas::TrackAtlasETCS::fromDriverToMA_R */ fromDriverToMA_R_1;
  odometry_T_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::odometry */ odometry_1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::preindicationLocation */ preindicationLocation_1;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::SystemTime */ SystemTime_1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::train_length_TOBEREPLACED */ train_length_TOBEREPLACED_1;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasETCS::TrainPositionIn */ TrainPositionIn_1;
  FromTIU_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::TrainData_in */ TrainData_in_1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlasETCS::ModeAndLevel_in */ ModeAndLevel_in_1;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasETCS::MessageIn */ MessageIn_1;
  kcg_bool /* TrackAtlas::TrackAtlas::_L11 */ _L11;
  kcg_bool /* TrackAtlas::TrackAtlas::_L10 */ _L10;
  kcg_bool /* TrackAtlas::TrackAtlas::_L9 */ _L9;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlas::_L8 */ _L8;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlas::_L7 */ _L7;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L5 */ _L5;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L4 */ _L4;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L3 */ _L3;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L2 */ _L2;
  P003_OBU_T_TM /* TrackAtlas::TrackAtlas::_L1 */ _L1;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlas::_L12 */ _L12;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlas::_L13 */ _L13;
  FromTIU_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L14 */ _L14;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlas::_L15 */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L16 */ _L16;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L17 */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L18 */ _L18;
  odometry_T_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L19 */ _L19;
  Driver2MAR_T_MA_Request /* TrackAtlas::TrackAtlas::_L20 */ _L20;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlas::_L21 */ _L21;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlas::_L22 */ _L22;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlas::_L23 */ _L23;
  T_TRAIN /* TrackAtlas::TrackAtlas::_L24 */ _L24;
  P203V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlas::_L25 */ _L25;
  P003_permanent_data_T_TM_baseline2 /* TrackAtlas::TrackAtlas::_L26 */ _L26;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlas::_L59 */ _L59;
  M_MODE /* TrackAtlas::TrackAtlas::_L63 */ _L63;
  M_MODE /* TrackAtlas::TrackAtlas::_L62 */ _L62;
  kcg_bool /* TrackAtlas::TrackAtlas::_L61 */ _L61;
  P003_OBU_T_TM /* TrackAtlas::TrackAtlas::_L64 */ _L64;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L65 */ _L65;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L66 */ _L66;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L68 */ _L68;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlas::_L69 */ _L69;
  kcg_bool /* TrackAtlas::TrackAtlas::_L70 */ _L70;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L74 */ _L74;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L60 */ _L60;
  kcg_bool /* TrackAtlas::TrackAtlas::_L76 */ _L76;
  kcg_bool /* TrackAtlas::TrackAtlas::_L78 */ _L78;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L79 */ _L79;
} outC_TrackAtlas_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlas */
extern void TrackAtlas_TrackAtlas(
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
  outC_TrackAtlas_TrackAtlas *outC);

extern void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);

#endif /* _TrackAtlas_TrackAtlas_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlas_TrackAtlas.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

