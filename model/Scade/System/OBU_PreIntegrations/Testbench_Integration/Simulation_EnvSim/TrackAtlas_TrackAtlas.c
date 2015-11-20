/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlas_TrackAtlas.h"

void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  /* 1 */ TrackAtlasETCS_reset_TrackAtlas(&outC->Context_1);
}

/* TrackAtlas::TrackAtlas */
void TrackAtlas_TrackAtlas(
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
  outC_TrackAtlas_TrackAtlas *outC)
{
  /* 1 */
  TrackAtlasETCS_TrackAtlas(
    MessageIn,
    ModeAndLevel_in,
    TrainData_in,
    TrainPositionIn,
    train_length,
    SystemTime,
    preindicationLocation,
    odometry,
    fromDriverToMA_R,
    trainProps,
    packet0,
    packet1,
    t_train,
    bus_in,
    P203V1_onboard,
    PermanentDataP003,
    &outC->Context_1);
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &outC->Context_1.NV_raw_out);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->To_ModeAndLevel,
    &outC->Context_1.To_ModeAndLevel);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &outC->Context_1.to_DMI);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->Context_1.MA_onboard_out);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->Context_1.bus_out);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->message147,
    &outC->Context_1.message147);
  outC->ces_accepted = outC->Context_1.ces_accepted;
  outC->ces_revoked = outC->Context_1.ces_revoked;
  outC->trip_train = outC->Context_1.trip_train;
  if (((*ModeAndLevel_in).Mode != Mode_NTC_TrackAtlas) &
    outC->Context_1.SSP_available) {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
      &outC->to_Supervision,
      &outC->Context_1.to_Supervision);
  }
  else {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
      &outC->to_Supervision,
      (DataForSupervision_nextGen_t_TrackAtlasTypes *)
        &NTC_values_to_supervision_TrackAtlas);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->MRSP,
    &outC->to_Supervision.MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlas_TrackAtlas.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

