/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */
#ifndef _TestDistanceConversion_H_
#define _TestDistanceConversion_H_

#include "kcg_types.h"
#include "TestP021_Internal_Tests.h"
#include "_1_Convert_P21_to_DistancePr_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TestDistanceConversion::GradientProfile */ GradientProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__1_Convert_P21_to_DistancePr_TA_Gradient /* 1 */ _1_Context_1;
  outC_TestP021_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* TestDistanceConversion::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TestDistanceConversion::_L2 */ _L2;
} outC_TestDistanceConversion;

/* ===========  node initialization and cycle functions  =========== */
/* TestDistanceConversion */
extern void TestDistanceConversion(outC_TestDistanceConversion *outC);

extern void TestDistanceConversion_reset(outC_TestDistanceConversion *outC);

#endif /* _TestDistanceConversion_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestDistanceConversion.h
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

