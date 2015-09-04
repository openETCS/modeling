/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _SSP_Merge_New_P27V1_to_Profile_TA_SSP_H_
#define _SSP_Merge_New_P27V1_to_Profile_TA_SSP_H_

#include "kcg_types.h"
#include "FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h"
#include "SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::SpeedProfile_out */ SpeedProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP /* 1 */ _1_Context_1[50];
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L1 */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L5 */ _L5;
  array_int_50 /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L9 */ _L9;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L14 */ _L14;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L45 */ _L45;
  array__24015 /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L47 */ _L47;
  kcg_bool /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L148 */ _L148;
} outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
extern void SSP_Merge_New_P27V1_to_Profile_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::new_GP */StaticSpeedProfile_t_TrackAtlasTypes *new_GP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::Last_SpeedProfile_in */StaticSpeedProfile_t_TrackAtlasTypes *Last_SpeedProfile_in,
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP *outC);

extern void SSP_Merge_New_P27V1_to_Profile_reset_TA_SSP(
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP *outC);

#endif /* _SSP_Merge_New_P27V1_to_Profile_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Merge_New_P27V1_to_Profile_TA_SSP.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

