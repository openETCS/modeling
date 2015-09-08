/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _TestSpeedProfile_H_
#define _TestSpeedProfile_H_

#include "kcg_types.h"
#include "ConvertReceivedMess.h"
#include "SimTrainPos.h"
#include "Build_StaticSpeedProfile_TA_SSP.h"
#include "TestTrackTrackAtlasLegacy_Internal_Tests.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TestSpeedProfile::Trigger_in */ Trigger_in;
  kcg_bool /* TestSpeedProfile::reset */ reset;
} inC_TestSpeedProfile;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TestSpeedProfile::available */ available;
  kcg_bool /* TestSpeedProfile::updated */ updated;
  StaticSpeedProfile_t_TrackAtlasTypes /* TestSpeedProfile::SSP_out */ SSP_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_StaticSpeedProfile_TA_SSP /* 1 */ _3_Context_1;
  outC_SimTrainPos /* 1 */ _2_Context_1;
  outC_ConvertReceivedMess /* 1 */ _1_Context_1;
  outC_TestTrackTrackAtlasLegacy_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TestSpeedProfile::_L12 */ _L12;
  StaticSpeedProfile_t_TrackAtlasTypes /* TestSpeedProfile::_L11 */ _L11;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TestSpeedProfile::_L15 */ _L15;
  CompressedPackets_T_Common_Types_Pkg /* TestSpeedProfile::_L14 */ _L14;
  CompressedRadioMessage_TM /* TestSpeedProfile::_L13 */ _L13;
  ReceivedMessage_T_Common_Types_Pkg /* TestSpeedProfile::_L16 */ _L16;
  kcg_int /* TestSpeedProfile::_L18 */ _L18;
  trainPosition_T_TrainPosition_Types_Pck /* TestSpeedProfile::_L28 */ _L28;
  kcg_bool /* TestSpeedProfile::_L29 */ _L29;
  kcg_bool /* TestSpeedProfile::_L31 */ _L31;
  kcg_int /* TestSpeedProfile::_L32 */ _L32;
} outC_TestSpeedProfile;

/* ===========  node initialization and cycle functions  =========== */
/* TestSpeedProfile */
extern void TestSpeedProfile(
  inC_TestSpeedProfile *inC,
  outC_TestSpeedProfile *outC);

extern void TestSpeedProfile_reset(outC_TestSpeedProfile *outC);

#endif /* _TestSpeedProfile_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestSpeedProfile.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

