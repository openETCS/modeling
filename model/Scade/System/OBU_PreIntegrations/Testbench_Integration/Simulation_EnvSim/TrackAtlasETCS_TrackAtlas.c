/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlasETCS_TrackAtlas.h"

void TrackAtlasETCS_reset_TrackAtlas(outC_TrackAtlasETCS_TrackAtlas *outC)
{
  outC->init = kcg_true;
  /* 1 */ Build_GradientProfile_reset_TA_Gradient(&outC->Context_1);
  /* 1 */ Build_MRSP_reset_TA_MRSP(&outC->_1_Context_1);
  /* 1 */ Manage_MA_Request_reset_TA_MA_Request(&outC->_2_Context_1);
  /* 6 */ Build_MA_L23_reset_TA_MA(&outC->Context_6);
  /* 1 */ StoreRaw_NV_reset_TA_Storage(&outC->_3_Context_1);
  /* 1 */ Manage_EmergencyStop_reset_TA_EmergencyStop(&outC->_4_Context_1);
}

/* TrackAtlas::TrackAtlasETCS */
void TrackAtlasETCS_TrackAtlas(
  /* TrackAtlas::TrackAtlasETCS::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlasETCS::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlasETCS::TrainData_in */FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlasETCS::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlasETCS::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TrackAtlas::TrackAtlasETCS::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlasETCS::preindicationLocation */L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlasETCS::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlasETCS::fromDriverToMA_R */Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlasETCS::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlasETCS::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlasETCS::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlasETCS::t_train */T_TRAIN t_train,
  /* TrackAtlas::TrackAtlasETCS::bus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* TrackAtlas::TrackAtlasETCS::P203V1_onboard */P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlasETCS::PermanentDataP003 */P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_TrackAtlasETCS_TrackAtlas *outC)
{
  static kcg_int i;
  static MRSP_Profile_t_TrackAtlasTypes tmp;
  /* TrackAtlas::TrackAtlasETCS::valid_MA */
  static kcg_bool valid_MA;
  /* TrackAtlas::TrackAtlasETCS::valid_GP */
  static kcg_bool valid_GP;
  /* TrackAtlas::TrackAtlasETCS::MRSP_export */
  static MRSP_Profile_t_TrackAtlasTypes MRSP_export;
  /* TrackAtlas::TrackAtlasETCS::_L21 */
  static P003V1_OBU_T_TM_baseline2 _L21;
  /* TrackAtlas::TrackAtlasETCS::_L78 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L78;
  /* TrackAtlas::TrackAtlasETCS::_L82 */
  static kcg_bool _L82;
  /* TrackAtlas::TrackAtlasETCS::_L83 */
  static kcg_bool _L83;
  /* TrackAtlas::TrackAtlasETCS::_L84 */
  static kcg_bool _L84;
  /* TrackAtlas::TrackAtlasETCS::_L85 */
  static kcg_bool _L85;
  
  if (outC->init) {
    outC->init = kcg_false;
    i = 0;
  }
  else {
    i = outC->EoA;
  }
  /* 1 */
  Manage_EmergencyStop_TA_EmergencyStop(
    MessageIn,
    t_train,
    trainProps,
    packet0,
    packet1,
    TrainPositionIn,
    i,
    bus_in,
    &outC->_4_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->message147,
    &outC->_4_Context_1.message147);
  outC->trip_train = outC->_4_Context_1.tripTrain;
  outC->ces_accepted = outC->_4_Context_1.cesAccepted;
  outC->ces_revoked = outC->_4_Context_1.cesRevoked;
  /* 1 */ StoreRaw_NV_TA_Storage(MessageIn, &outC->_3_Context_1);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L21, &outC->_3_Context_1.NV_onboard_out);
  /* 6 */
  Build_MA_L23_TA_MA(
    kcg_false,
    MessageIn,
    &_L21,
    TrainPositionIn,
    outC->_4_Context_1.rejectNewMA,
    outC->_4_Context_1.updateEOA,
    outC->_4_Context_1.newEOA,
    &outC->Context_6);
  outC->to_Supervision.freshMA = outC->Context_6.updated;
  valid_MA = outC->Context_6.available;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->Context_6.MA_absolute);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->to_Supervision.MA,
    &outC->MA_onboard_out);
  outC->EoA = outC->Context_6.currentEOA;
  /* 1 */
  Manage_MA_Request_TA_MA_Request(
    TrainPositionIn,
    SystemTime,
    MessageIn,
    preindicationLocation,
    odometry,
    &outC->MA_onboard_out,
    fromDriverToMA_R,
    kcg_false,
    trainProps,
    packet0,
    packet1,
    t_train,
    &outC->_4_Context_1.bus_out,
    ModeAndLevel_in,
    &outC->_2_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->_2_Context_1.bus_out);
  /* 1 */
  Build_MRSP_TA_MRSP(
    MessageIn,
    TrainData_in,
    ModeAndLevel_in,
    train_length,
    TrainPositionIn,
    &outC->_1_Context_1);
  outC->to_Supervision.freshMRSP = outC->_1_Context_1.newMRSP;
  outC->to_DMI.MRSP_updated = outC->_1_Context_1.newMRSP;
  outC->SSP_available = outC->_1_Context_1.SSP_available;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &MRSP_export,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
  for (i = 0; i < 110; i++) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&tmp, &MRSP_export);
    /* 1 */
    SSP_to_MRSP_TA_Export(
      i,
      &tmp,
      &outC->_1_Context_1.SSP,
      &valid_GP,
      &MRSP_export);
    if (!valid_GP) {
      break;
    }
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->to_Supervision.MRSP,
    &MRSP_export);
  /* 1 */
  Build_GradientProfile_TA_Gradient(
    kcg_false,
    MessageIn,
    TrainPositionIn,
    &outC->Context_1);
  outC->to_Supervision.freshGradientProfile = outC->Context_1.updated;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->to_Supervision.GradientProfile,
    &outC->Context_1.GP);
  outC->to_DMI.Gradient_profile_updated = outC->Context_1.updated;
  valid_GP = outC->Context_1.available;
  /* 1 */
  TA_to_ML_TA_Export(
    MessageIn,
    kcg_false,
    valid_GP,
    valid_MA,
    outC->SSP_available,
    &outC->To_ModeAndLevel.train_packets,
    &_L78,
    &_L85,
    &_L84,
    &_L83,
    &_L82);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->To_ModeAndLevel.train_messages,
    &_L78);
  outC->To_ModeAndLevel.p12 = _L85;
  outC->To_ModeAndLevel.p15 = _L84;
  outC->To_ModeAndLevel.p21 = _L83;
  outC->To_ModeAndLevel.p27 = _L82;
  /* 1 */
  C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
    &_L21,
    P203V1_onboard,
    PermanentDataP003,
    &outC->NV_raw_out);
  /* 1 */
  GradientProfile_to_DMI_TA_Export(
    outC->EoA,
    &outC->Context_1.GP,
    &outC->to_DMI.GradientProfile);
  /* 1 */ MRSP_to_DMI_TA_Export(outC->EoA, &MRSP_export, &outC->to_DMI.MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlasETCS_TrackAtlas.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

