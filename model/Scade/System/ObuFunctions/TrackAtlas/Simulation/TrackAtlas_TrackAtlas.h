/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _TrackAtlas_TrackAtlas_H_
#define _TrackAtlas_TrackAtlas_H_

#include "kcg_types.h"
#include "Build_GradientProfile_TA_Gradient.h"
#include "Build_MRSP_TA_MRSP.h"
#include "Build_MA_TA_MA.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"
#include "StoreRaw_NV_TA_Storage.h"
#include "GradientProfile_to_DMI_TA_Export.h"
#include "TA_to_ML_TA_Export.h"
#include "Manage_MA_Request_MA_Request.h"

/* ========================  input structure  ====================== */
typedef struct {
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlas::MessageIn */ MessageIn;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlas::ModeAndLevel_in */ ModeAndLevel_in;
  FromTIU_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::TrainData_in */ TrainData_in;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlas::TrainPositionIn */ TrainPositionIn;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::train_length_TOBEREPLACED */ train_length_TOBEREPLACED;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::SystemTime */ SystemTime;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::preindicationLocation */ preindicationLocation;
  odometry_T_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::odometry */ odometry;
  Driver2MAR_T_MA_Request /* TrackAtlas::TrackAtlas::fromDriverToMA_R */ fromDriverToMA_R;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlas::trainProps */ trainProps;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlas::packet0 */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlas::packet1 */ packet1;
  T_TRAIN /* TrackAtlas::TrackAtlas::t_train */ t_train;
  P203V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlas::P203V1_onboard */ P203V1_onboard;
  P003_permanent_data_T_TM_baseline2 /* TrackAtlas::TrackAtlas::PermanentDataP003 */ PermanentDataP003;
} inC_TrackAtlas_TrackAtlas;

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
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_MRSP_TA_MRSP /* 1 */ _7_Context_1;
  outC_GradientProfile_to_DMI_TA_Export /* 1 */ _6_Context_1;
  outC_Build_GradientProfile_TA_Gradient /* 1 */ _5_Context_1;
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 /* 1 */ _4_Context_1;
  outC_TA_to_ML_TA_Export /* 1 */ _3_Context_1;
  outC_Manage_MA_Request_MA_Request /* 1 */ _2_Context_1;
  outC_Build_MA_TA_MA /* 1 */ _1_Context_1;
  outC_StoreRaw_NV_TA_Storage /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::MovementAuthority_Local */ MovementAuthority_Local;
  kcg_bool /* TrackAtlas::TrackAtlas::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L14 */ _L14;
  kcg_bool /* TrackAtlas::TrackAtlas::_L17 */ _L17;
  kcg_bool /* TrackAtlas::TrackAtlas::_L16 */ _L16;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L19 */ _L19;
  kcg_bool /* TrackAtlas::TrackAtlas::_L22 */ _L22;
  P003V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlas::_L21 */ _L21;
  kcg_bool /* TrackAtlas::TrackAtlas::_L20 */ _L20;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlas::_L23 */ _L23;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlas::_L24 */ _L24;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlas::_L25 */ _L25;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlas::_L26 */ _L26;
  FromTIU_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L27 */ _L27;
  kcg_int /* TrackAtlas::TrackAtlas::_L28 */ _L28;
  kcg_bool /* TrackAtlas::TrackAtlas::_L29 */ _L29;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L30 */ _L30;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L31 */ _L31;
  kcg_bool /* TrackAtlas::TrackAtlas::_L32 */ _L32;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L34 */ _L34;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L35 */ _L35;
  P003_OBU_T_TM /* TrackAtlas::TrackAtlas::_L50 */ _L50;
  P203V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlas::_L51 */ _L51;
  P003_permanent_data_T_TM_baseline2 /* TrackAtlas::TrackAtlas::_L52 */ _L52;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L54 */ _L54;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L73 */ _L73;
  kcg_bool /* TrackAtlas::TrackAtlas::_L72 */ _L72;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlas::_L71 */ _L71;
  Driver2MAR_T_MA_Request /* TrackAtlas::TrackAtlas::_L70 */ _L70;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlas::_L69 */ _L69;
  odometry_T_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L68 */ _L68;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlas::_L67 */ _L67;
  T_TRAIN /* TrackAtlas::TrackAtlas::_L66 */ _L66;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlas::_L65 */ _L65;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlas::_L64 */ _L64;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlas::_L75 */ _L75;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlas::_L74 */ _L74;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::_L76 */ _L76;
} outC_TrackAtlas_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlas */
extern void TrackAtlas_TrackAtlas(
  inC_TrackAtlas_TrackAtlas *inC,
  outC_TrackAtlas_TrackAtlas *outC);

extern void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);

#endif /* _TrackAtlas_TrackAtlas_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlas_TrackAtlas.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

