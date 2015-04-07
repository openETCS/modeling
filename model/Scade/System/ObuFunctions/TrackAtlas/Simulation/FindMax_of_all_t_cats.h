/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _FindMax_of_all_t_cats_H_
#define _FindMax_of_all_t_cats_H_

#include "kcg_types.h"
#include "FindMax_of_all_t_cats_LOOP.h"
#include "ConvertIndexedElements.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats::SSP_largest_target */ SSP_largest_target;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindMax_of_all_t_cats_LOOP /* 1 */ _1_Context_1[11];
  outC_ConvertIndexedElements /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_indexed_targets_list_t /* FindMax_of_all_t_cats::_L1 */ _L1;
  kcg_bool /* FindMax_of_all_t_cats::_L25 */ _L25;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats::_L27 */ _L27;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats::_L26 */ _L26;
  kcg_int /* FindMax_of_all_t_cats::_L24 */ _L24;
  array__363 /* FindMax_of_all_t_cats::_L61 */ _L61;
} outC_FindMax_of_all_t_cats;

/* ===========  node initialization and cycle functions  =========== */
/* FindMax_of_all_t_cats */
extern void FindMax_of_all_t_cats(
  /* FindMax_of_all_t_cats::SSP_indexed_targets_per_cat */SSP_t_indexed_targets_list_t *SSP_indexed_targets_per_cat,
  outC_FindMax_of_all_t_cats *outC);

extern void FindMax_of_all_t_cats_reset(outC_FindMax_of_all_t_cats *outC);

#endif /* _FindMax_of_all_t_cats_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindMax_of_all_t_cats.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

