/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _Find_First_in_SSP_t_cat_H_
#define _Find_First_in_SSP_t_cat_H_

#include "kcg_types.h"
#include "Find_First_in_SSP_t_cat_LOOP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_trgt_t /* Find_First_in_SSP_t_cat::SSP_indexed_loc */ SSP_indexed_loc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Find_First_in_SSP_t_cat_LOOP /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Find_First_in_SSP_t_cat::_L1 */ _L1;
  SSP_t_cat_t /* Find_First_in_SSP_t_cat::_L2 */ _L2;
  kcg_bool /* Find_First_in_SSP_t_cat::_L3 */ _L3;
  kcg_int /* Find_First_in_SSP_t_cat::_L4 */ _L4;
  SSP_target_t /* Find_First_in_SSP_t_cat::_L5 */ _L5;
  SSP_t_indexed_trgt_t /* Find_First_in_SSP_t_cat::_L6 */ _L6;
  kcg_int /* Find_First_in_SSP_t_cat::_L7 */ _L7;
  kcg_int /* Find_First_in_SSP_t_cat::_L8 */ _L8;
} outC_Find_First_in_SSP_t_cat;

/* ===========  node initialization and cycle functions  =========== */
/* Find_First_in_SSP_t_cat */
extern void Find_First_in_SSP_t_cat(
  /* Find_First_in_SSP_t_cat::SSP_cat_in */SSP_t_cat_t *SSP_cat_in,
  outC_Find_First_in_SSP_t_cat *outC);

extern void Find_First_in_SSP_t_cat_reset(outC_Find_First_in_SSP_t_cat *outC);

#endif /* _Find_First_in_SSP_t_cat_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Find_First_in_SSP_t_cat.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

