/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_H_
#define _SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::cont */ cont;
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Pointer */ Pointer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L5 */ _L5;
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L6 */ _L6;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L7 */ _L7;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L10 */ _L10;
  kcg_bool /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L11 */ _L11;
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L12 */ _L12;
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L13 */ _L13;
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L14 */ _L14;
  kcg_bool /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L15 */ _L15;
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L16 */ _L16;
  kcg_int /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L17 */ _L17;
} outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop */
extern void SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::i */kcg_int i,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Acc */kcg_int Acc,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP *outC);

extern void SSP_Find_First_Speed_Section_After_BG_loop_reset_TA_SSP(
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP *outC);

#endif /* _SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

