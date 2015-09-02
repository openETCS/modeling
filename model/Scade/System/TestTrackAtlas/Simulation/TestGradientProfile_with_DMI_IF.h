/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */
#ifndef _TestGradientProfile_with_DMI_IF_H_
#define _TestGradientProfile_with_DMI_IF_H_

#include "kcg_types.h"
#include "ConvertReceivedMess.h"
#include "SimTrainPos.h"
#include "Build_GradientProfile_TA_Gradient.h"
#include "TestTrackTrackAtlasLegacy_Internal_Tests.h"
#include "GradientProfile_to_DMI_TA_Export.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TestGradientProfile_with_DMI_IF::Trigger_in */ Trigger_in;
} inC_TestGradientProfile_with_DMI_IF;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TestGradientProfile_with_DMI_IF::GradientProfile */ GradientProfile;
  kcg_bool /* TestGradientProfile_with_DMI_IF::updated */ updated;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* TestGradientProfile_with_DMI_IF::Gradient_Profile_for_DMI_out */ Gradient_Profile_for_DMI_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GradientProfile_to_DMI_TA_Export /* 1 */ _4_Context_1;
  outC_Build_GradientProfile_TA_Gradient /* 1 */ _3_Context_1;
  outC_SimTrainPos /* 1 */ _2_Context_1;
  outC_ConvertReceivedMess /* 1 */ _1_Context_1;
  outC_TestTrackTrackAtlasLegacy_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TestGradientProfile_with_DMI_IF::_L12 */ _L12;
  GradientProfile_t_TrackAtlasTypes /* TestGradientProfile_with_DMI_IF::_L11 */ _L11;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TestGradientProfile_with_DMI_IF::_L15 */ _L15;
  CompressedPackets_T_Common_Types_Pkg /* TestGradientProfile_with_DMI_IF::_L14 */ _L14;
  CompressedRadioMessage_TM /* TestGradientProfile_with_DMI_IF::_L13 */ _L13;
  ReceivedMessage_T_Common_Types_Pkg /* TestGradientProfile_with_DMI_IF::_L16 */ _L16;
  kcg_int /* TestGradientProfile_with_DMI_IF::_L18 */ _L18;
  trainPosition_T_TrainPosition_Types_Pck /* TestGradientProfile_with_DMI_IF::_L28 */ _L28;
  kcg_bool /* TestGradientProfile_with_DMI_IF::_L29 */ _L29;
  kcg_bool /* TestGradientProfile_with_DMI_IF::_L30 */ _L30;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* TestGradientProfile_with_DMI_IF::_L31 */ _L31;
} outC_TestGradientProfile_with_DMI_IF;

/* ===========  node initialization and cycle functions  =========== */
/* TestGradientProfile_with_DMI_IF */
extern void TestGradientProfile_with_DMI_IF(
  inC_TestGradientProfile_with_DMI_IF *inC,
  outC_TestGradientProfile_with_DMI_IF *outC);

extern void TestGradientProfile_with_DMI_IF_reset(
  outC_TestGradientProfile_with_DMI_IF *outC);

#endif /* _TestGradientProfile_with_DMI_IF_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestGradientProfile_with_DMI_IF.h
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

