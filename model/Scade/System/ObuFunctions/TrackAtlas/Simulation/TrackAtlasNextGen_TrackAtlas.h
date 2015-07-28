/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _TrackAtlasNextGen_TrackAtlas_H_
#define _TrackAtlasNextGen_TrackAtlas_H_

#include "kcg_types.h"
#include "Build_GradientProfile_TA_Gradient.h"
#include "Build_MRSP_TA_MRSP.h"
#include "Build_MA_TA_MA.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"
#include "StoreRaw_NV_TA_Storage.h"
#include "GradientProfile_to_DMI_TA_Export.h"
#include "Manage_MA_Request_MA_Request.h"

/* ========================  input structure  ====================== */
typedef struct {
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasNextGen::MessageIn */ MessageIn;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlasNextGen::ModeAndLevel_in */ ModeAndLevel_in;
  FromTIU_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::TrainData_in */ TrainData_in;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasNextGen::TrainPositionIn */ TrainPositionIn;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::train_length_TOBEREPLACED */ train_length_TOBEREPLACED;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::SystemTime */ SystemTime;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::preindicationLocation */ preindicationLocation;
  odometry_T_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::odometry */ odometry;
  Driver2MAR_T_MA_Request /* TrackAtlas::TrackAtlasNextGen::fromDriverToMA_R */ fromDriverToMA_R;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasNextGen::trainProps */ trainProps;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::packet0 */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::packet1 */ packet1;
  T_TRAIN /* TrackAtlas::TrackAtlasNextGen::t_train */ t_train;
  P203V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlasNextGen::P203V1_onboard */ P203V1_onboard;
  P003_permanent_data_T_TM_baseline2 /* TrackAtlas::TrackAtlasNextGen::PermanentDataP003 */ PermanentDataP003;
} inC_TrackAtlasNextGen_TrackAtlas;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_OBU_T_TM /* TrackAtlas::TrackAtlasNextGen::NV_raw_out */ NV_raw_out;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::To_ModeAndLevel */ To_ModeAndLevel;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::to_DMI */ to_DMI;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::to_Supervision */ to_Supervision;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::MA_onboard_out */ MA_onboard_out;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::MRSP */ MRSP;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlasNextGen::MA_request_out */ MA_request_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_MRSP_TA_MRSP /* 1 */ _5_Context_1;
  outC_GradientProfile_to_DMI_TA_Export /* 1 */ _4_Context_1;
  outC_Build_GradientProfile_TA_Gradient /* 1 */ _3_Context_1;
  outC_Manage_MA_Request_MA_Request /* 1 */ _2_Context_1;
  outC_Build_MA_TA_MA /* 1 */ _1_Context_1;
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 /* 2 */ Context_2;
  outC_StoreRaw_NV_TA_Storage /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L14 */ _L14;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L18 */ _L18;
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L17 */ _L17;
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L16 */ _L16;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L19 */ _L19;
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L22 */ _L22;
  P003V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlasNextGen::_L21 */ _L21;
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L20 */ _L20;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasNextGen::_L23 */ _L23;
  ReceivedMessage_T_Common_Types_Pkg /* TrackAtlas::TrackAtlasNextGen::_L24 */ _L24;
  trainPosition_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasNextGen::_L25 */ _L25;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TrackAtlas::TrackAtlasNextGen::_L26 */ _L26;
  FromTIU_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L27 */ _L27;
  kcg_int /* TrackAtlas::TrackAtlasNextGen::_L28 */ _L28;
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L29 */ _L29;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::_L30 */ _L30;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L31 */ _L31;
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L32 */ _L32;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L34 */ _L34;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L35 */ _L35;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasNextGen::_L36 */ _L36;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlasNextGen::_L37 */ _L37;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::_L38 */ _L38;
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::_L40 */ _L40;
  odometry_T_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::_L41 */ _L41;
  Driver2MAR_T_MA_Request /* TrackAtlas::TrackAtlasNextGen::_L42 */ _L42;
  trainProperties_T_TrainPosition_Types_Pck /* TrackAtlas::TrackAtlasNextGen::_L44 */ _L44;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::_L45 */ _L45;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TrackAtlas::TrackAtlasNextGen::_L46 */ _L46;
  T_TRAIN /* TrackAtlas::TrackAtlasNextGen::_L47 */ _L47;
  kcg_bool /* TrackAtlas::TrackAtlasNextGen::_L48 */ _L48;
  P003_OBU_T_TM /* TrackAtlas::TrackAtlasNextGen::_L50 */ _L50;
  P203V1_OBU_T_TM_baseline2 /* TrackAtlas::TrackAtlasNextGen::_L51 */ _L51;
  P003_permanent_data_T_TM_baseline2 /* TrackAtlas::TrackAtlasNextGen::_L52 */ _L52;
} outC_TrackAtlasNextGen_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlasNextGen */
extern void TrackAtlasNextGen_TrackAtlas(
  inC_TrackAtlasNextGen_TrackAtlas *inC,
  outC_TrackAtlasNextGen_TrackAtlas *outC);

extern void TrackAtlasNextGen_reset_TrackAtlas(
  outC_TrackAtlasNextGen_TrackAtlas *outC);

#endif /* _TrackAtlasNextGen_TrackAtlas_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlasNextGen_TrackAtlas.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

