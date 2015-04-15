/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _Find_First_in_each_t_SSP_cat_H_
#define _Find_First_in_each_t_SSP_cat_H_

#include "kcg_types.h"
#include "Find_First_in_SSP_t_cat.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_targets_list_t /* Find_First_in_each_t_SSP_cat::SSP_indexed_targets_per_cat_out */ SSP_indexed_targets_per_cat_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Find_First_in_SSP_t_cat /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__357 /* Find_First_in_each_t_SSP_cat::_L1 */ _L1;
  SSP_t_matrix_t /* Find_First_in_each_t_SSP_cat::_L3 */ _L3;
} outC_Find_First_in_each_t_SSP_cat;

/* ===========  node initialization and cycle functions  =========== */
/* Find_First_in_each_t_SSP_cat */
extern void Find_First_in_each_t_SSP_cat(
  /* Find_First_in_each_t_SSP_cat::SSP_matrix_in */SSP_t_matrix_t *SSP_matrix_in,
  outC_Find_First_in_each_t_SSP_cat *outC);

extern void Find_First_in_each_t_SSP_cat_reset(
  outC_Find_First_in_each_t_SSP_cat *outC);

#endif /* _Find_First_in_each_t_SSP_cat_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Find_First_in_each_t_SSP_cat.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

