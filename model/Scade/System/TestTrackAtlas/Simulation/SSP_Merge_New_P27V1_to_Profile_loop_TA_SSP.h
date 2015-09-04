/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_H_
#define _SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SSP */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L4 */ _L4;
  kcg_int /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L5 */ _L5;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L6 */ _L6;
  kcg_int /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L7 */ _L7;
  kcg_int /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L11 */ _L11;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L15 */ _L15;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L19 */ _L19;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L20 */ _L20;
} outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop */
extern void SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::i */kcg_int i,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SP */StaticSpeedProfile_t_TrackAtlasTypes *SP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::new_SP_received */StaticSpeedProfile_t_TrackAtlasTypes *new_SP_received,
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP *outC);

extern void SSP_Merge_New_P27V1_to_Profile_loop_reset_TA_SSP(
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP *outC);

#endif /* _SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

