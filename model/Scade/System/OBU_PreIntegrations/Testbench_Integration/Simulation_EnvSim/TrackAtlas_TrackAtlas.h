/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _TrackAtlas_TrackAtlas_H_
#define _TrackAtlas_TrackAtlas_H_

#include "kcg_types.h"
#include "TrackAtlasETCS_TrackAtlas.h"

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
  Radio_TrainTrack_Message_T_TM_transitional /* TrackAtlas::TrackAtlas::message147 */ message147;
  kcg_bool /* TrackAtlas::TrackAtlas::ces_accepted */ ces_accepted;
  kcg_bool /* TrackAtlas::TrackAtlas::ces_revoked */ ces_revoked;
  kcg_bool /* TrackAtlas::TrackAtlas::trip_train */ trip_train;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TrackAtlas::TrackAtlas::bus_out */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackAtlasETCS_TrackAtlas /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TrackAtlas_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlas */
extern void TrackAtlas_TrackAtlas(
  /* TrackAtlas::TrackAtlas::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlas::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlas::TrainData_in */FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlas::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlas::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
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
  /* TrackAtlas::TrackAtlas::bus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_TrackAtlas_TrackAtlas *outC);

extern void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);

#endif /* _TrackAtlas_TrackAtlas_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlas_TrackAtlas.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

