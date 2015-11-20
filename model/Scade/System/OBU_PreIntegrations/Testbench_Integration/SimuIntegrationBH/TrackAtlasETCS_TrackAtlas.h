/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TrackAtlasETCS_TrackAtlas_H_
#define _TrackAtlasETCS_TrackAtlas_H_

#include "kcg_types.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"
#include "GradientProfile_to_DMI_TA_Export.h"
#include "TA_to_ML_TA_Export.h"
#include "SSP_to_MRSP_TA_Export.h"
#include "MRSP_to_DMI_TA_Export.h"
#include "Build_MA_L23_TA_MA.h"
#include "Build_MRSP_TA_MRSP.h"
#include "StoreRaw_NV_TA_Storage.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"
#include "Build_GradientProfile_TA_Gradient.h"
#include "Manage_MA_Request_TA_MA_Request.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TrackAtlas::TrackAtlasETCS::SSP_available */ SSP_available;
  P003_OBU_T_TM /* TrackAtlas::TrackAtlasETCS::NV_raw_out */ NV_raw_out;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::To_ModeAndLevel */ To_ModeAndLevel;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::to_DMI */ to_DMI;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::to_Supervision */ to_Supervision;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlasETCS::MA_onboard_out */ MA_onboard_out;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TrackAtlas::TrackAtlasETCS::bus_out */ bus_out;
  Radio_TrainTrack_Message_T_TM_transitional /* TrackAtlas::TrackAtlasETCS::message147 */ message147;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::ces_accepted */ ces_accepted;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::ces_revoked */ ces_revoked;
  kcg_bool /* TrackAtlas::TrackAtlasETCS::trip_train */ trip_train;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TrackAtlas::TrackAtlasETCS::_L94 */ _L94;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Manage_MA_Request_TA_MA_Request /* 1 */ _4_Context_1;
  outC_Build_GradientProfile_TA_Gradient /* 1 */ _3_Context_1;
  outC_Build_MRSP_TA_MRSP /* 1 */ _2_Context_1;
  outC_Build_MA_L23_TA_MA /* 6 */ Context_6;
  outC_Manage_EmergencyStop_TA_EmergencyStop /* 1 */ _1_Context_1;
  outC_StoreRaw_NV_TA_Storage /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TrackAtlasETCS_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlasETCS */
extern void TrackAtlasETCS_TrackAtlas(
  /* TrackAtlas::TrackAtlasETCS::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlasETCS::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlasETCS::TrainData_in */ FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlasETCS::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlasETCS::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TrackAtlas::TrackAtlasETCS::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlasETCS::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlasETCS::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlasETCS::fromDriverToMA_R */ Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlasETCS::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlasETCS::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlasETCS::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlasETCS::t_train */ T_TRAIN t_train,
  /* TrackAtlas::TrackAtlasETCS::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* TrackAtlas::TrackAtlasETCS::P203V1_onboard */ P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlasETCS::PermanentDataP003 */ P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_TrackAtlasETCS_TrackAtlas *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackAtlasETCS_reset_TrackAtlas(
  outC_TrackAtlasETCS_TrackAtlas *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackAtlasETCS_init_TrackAtlas(
  outC_TrackAtlasETCS_TrackAtlas *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TrackAtlasETCS_TrackAtlas_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrackAtlasETCS_TrackAtlas.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

