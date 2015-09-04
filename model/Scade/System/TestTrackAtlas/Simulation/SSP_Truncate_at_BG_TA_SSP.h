/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _SSP_Truncate_at_BG_TA_SSP_H_
#define _SSP_Truncate_at_BG_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Truncate_at_BG_loop_TA_SSP.h"
#include "SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG::Profile_out */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Truncate_at_BG_loop_TA_SSP /* 1 */ _1_Context_1[50];
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG::_L1 */ _L1;
  kcg_int /* TA_SSP::SSP_Truncate_at_BG::_L8 */ _L8;
  array__11530 /* TA_SSP::SSP_Truncate_at_BG::_L6 */ _L6;
  kcg_int /* TA_SSP::SSP_Truncate_at_BG::_L5 */ _L5;
  kcg_int /* TA_SSP::SSP_Truncate_at_BG::_L4 */ _L4;
  kcg_int /* TA_SSP::SSP_Truncate_at_BG::_L10 */ _L10;
  kcg_bool /* TA_SSP::SSP_Truncate_at_BG::_L11 */ _L11;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG::_L12 */ _L12;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG::_L13 */ _L13;
  kcg_bool /* TA_SSP::SSP_Truncate_at_BG::_L14 */ _L14;
  array_int_50 /* TA_SSP::SSP_Truncate_at_BG::_L17 */ _L17;
} outC_SSP_Truncate_at_BG_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Truncate_at_BG */
extern void SSP_Truncate_at_BG_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Truncate_at_BG_TA_SSP *outC);

extern void SSP_Truncate_at_BG_reset_TA_SSP(
  outC_SSP_Truncate_at_BG_TA_SSP *outC);

#endif /* _SSP_Truncate_at_BG_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Truncate_at_BG_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

