/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */
#ifndef _TestGradientProfile_H_
#define _TestGradientProfile_H_

#include "kcg_types.h"
#include "ConvertReceivedMess.h"
#include "SimTrainPos.h"
#include "Build_GradientProfile_TA_Gradient.h"
#include "TestTrackTrackAtlasLegacy_Internal_Tests.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TestGradientProfile::Trigger_in */ Trigger_in;
} inC_TestGradientProfile;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TestGradientProfile::GradientProfile */ GradientProfile;
  kcg_bool /* TestGradientProfile::updated */ updated;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_GradientProfile_TA_Gradient /* 1 */ _3_Context_1;
  outC_ConvertReceivedMess /* 1 */ _2_Context_1;
  outC_TestTrackTrackAtlasLegacy_Internal_Tests /* 1 */ _1_Context_1;
  outC_SimTrainPos /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TestGradientProfile::_L12 */ _L12;
  GradientProfile_t_TrackAtlasTypes /* TestGradientProfile::_L11 */ _L11;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TestGradientProfile::_L15 */ _L15;
  CompressedPackets_T_Common_Types_Pkg /* TestGradientProfile::_L14 */ _L14;
  CompressedRadioMessage_TM /* TestGradientProfile::_L13 */ _L13;
  ReceivedMessage_T_Common_Types_Pkg /* TestGradientProfile::_L16 */ _L16;
  kcg_int /* TestGradientProfile::_L18 */ _L18;
  trainPosition_T_TrainPosition_Types_Pck /* TestGradientProfile::_L28 */ _L28;
} outC_TestGradientProfile;

/* ===========  node initialization and cycle functions  =========== */
/* TestGradientProfile */
extern void TestGradientProfile(
  inC_TestGradientProfile *inC,
  outC_TestGradientProfile *outC);

extern void TestGradientProfile_reset(outC_TestGradientProfile *outC);

#endif /* _TestGradientProfile_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestGradientProfile.h
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

