/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _TestTrackAtlas_H_
#define _TestTrackAtlas_H_

#include "kcg_types.h"
#include "ConvertReceivedMess.h"
#include "SimTrainPos.h"
#include "TrackAtlas_TrackAtlas.h"
#include "TestTrackTrackAtlasLegacy_Internal_Tests.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TestTrackAtlas::Trigger_in */ Trigger_in;
  kcg_bool /* TestTrackAtlas::reset */ reset;
} inC_TestTrackAtlas;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DataForDMI_t_TrackAtlasTypes /* TestTrackAtlas::to_DMI */ to_DMI;
  DataForModeAndLevel_t_TrackAtlasTypes /* TestTrackAtlas::to_ML */ to_ML;
  P003_OBU_T_TM /* TestTrackAtlas::NV_raw_out */ NV_raw_out;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TestTrackAtlas::to_Supervision */ to_Supervision;
  MovementAuthority_t_TrackAtlasTypes /* TestTrackAtlas::MA_onboard_out */ MA_onboard_out;
  MRSP_Profile_t_TrackAtlasTypes /* TestTrackAtlas::MRSP */ MRSP;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TestTrackAtlas::MA_request_out */ MA_request_out;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TestTrackAtlas::message147 */ message147;
  kcg_bool /* TestTrackAtlas::ces_accepted */ ces_accepted;
  kcg_bool /* TestTrackAtlas::ces_revoked */ ces_revoked;
  kcg_bool /* TestTrackAtlas::trip_train */ trip_train;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackAtlas_TrackAtlas /* 1 */ _3_Context_1;
  outC_SimTrainPos /* 1 */ _2_Context_1;
  outC_ConvertReceivedMess /* 1 */ _1_Context_1;
  outC_TestTrackTrackAtlasLegacy_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DataForModeAndLevel_t_TrackAtlasTypes /* TestTrackAtlas::_L12 */ _L12;
  P003_OBU_T_TM /* TestTrackAtlas::_L11 */ _L11;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TestTrackAtlas::_L15 */ _L15;
  CompressedPackets_T_Common_Types_Pkg /* TestTrackAtlas::_L14 */ _L14;
  CompressedRadioMessage_TM /* TestTrackAtlas::_L13 */ _L13;
  ReceivedMessage_T_Common_Types_Pkg /* TestTrackAtlas::_L16 */ _L16;
  kcg_int /* TestTrackAtlas::_L18 */ _L18;
  trainPosition_T_TrainPosition_Types_Pck /* TestTrackAtlas::_L28 */ _L28;
  DataForDMI_t_TrackAtlasTypes /* TestTrackAtlas::_L29 */ _L29;
  kcg_bool /* TestTrackAtlas::_L31 */ _L31;
  kcg_int /* TestTrackAtlas::_L32 */ _L32;
  kcg_bool /* TestTrackAtlas::_L40 */ _L40;
  kcg_bool /* TestTrackAtlas::_L39 */ _L39;
  kcg_bool /* TestTrackAtlas::_L38 */ _L38;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TestTrackAtlas::_L37 */ _L37;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TestTrackAtlas::_L36 */ _L36;
  MRSP_Profile_t_TrackAtlasTypes /* TestTrackAtlas::_L35 */ _L35;
  MovementAuthority_t_TrackAtlasTypes /* TestTrackAtlas::_L34 */ _L34;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TestTrackAtlas::_L33 */ _L33;
  T_internal_Type_Obu_BasicTypes_Pkg /* TestTrackAtlas::_L41 */ _L41;
  L_internal_Type_Obu_BasicTypes_Pkg /* TestTrackAtlas::_L42 */ _L42;
  odometry_T_Obu_BasicTypes_Pkg /* TestTrackAtlas::_L43 */ _L43;
  Driver2MAR_T_MA_Request /* TestTrackAtlas::_L44 */ _L44;
  trainProperties_T_TrainPosition_Types_Pck /* TestTrackAtlas::_L45 */ _L45;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TestTrackAtlas::_L46 */ _L46;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TestTrackAtlas::_L47 */ _L47;
  T_TRAIN /* TestTrackAtlas::_L48 */ _L48;
  P203V1_OBU_T_TM_baseline2 /* TestTrackAtlas::_L49 */ _L49;
  P003_permanent_data_T_TM_baseline2 /* TestTrackAtlas::_L50 */ _L50;
  FromTIU_t_TrackAtlasTypes /* TestTrackAtlas::_L51 */ _L51;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TestTrackAtlas::_L52 */ _L52;
} outC_TestTrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TestTrackAtlas */
extern void TestTrackAtlas(inC_TestTrackAtlas *inC, outC_TestTrackAtlas *outC);

extern void TestTrackAtlas_reset(outC_TestTrackAtlas *outC);

#endif /* _TestTrackAtlas_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestTrackAtlas.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

