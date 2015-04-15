/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */
#ifndef _Find_First_in_SSP_cat_LOOP_H_
#define _Find_First_in_SSP_cat_LOOP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Find_First_in_SSP_cat_LOOP::cont */ cont;
  SSP_target_t /* Find_First_in_SSP_cat_LOOP::Last_Loc */ Last_Loc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Find_First_in_SSP_cat_LOOP::_L1 */ _L1;
  SSP_target_t /* Find_First_in_SSP_cat_LOOP::_L2 */ _L2;
  SSP_section_t /* Find_First_in_SSP_cat_LOOP::_L3 */ _L3;
  kcg_int /* Find_First_in_SSP_cat_LOOP::_L4 */ _L4;
  kcg_bool /* Find_First_in_SSP_cat_LOOP::_L5 */ _L5;
  kcg_bool /* Find_First_in_SSP_cat_LOOP::_L6 */ _L6;
} outC_Find_First_in_SSP_cat_LOOP;

/* ===========  node initialization and cycle functions  =========== */
/* Find_First_in_SSP_cat_LOOP */
extern void Find_First_in_SSP_cat_LOOP(
  /* Find_First_in_SSP_cat_LOOP::i */kcg_int i,
  /* Find_First_in_SSP_cat_LOOP::Loc */SSP_target_t Loc,
  /* Find_First_in_SSP_cat_LOOP::SSP_section_in */SSP_section_t SSP_section_in,
  outC_Find_First_in_SSP_cat_LOOP *outC);

extern void Find_First_in_SSP_cat_LOOP_reset(
  outC_Find_First_in_SSP_cat_LOOP *outC);

#endif /* _Find_First_in_SSP_cat_LOOP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Find_First_in_SSP_cat_LOOP.h
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

