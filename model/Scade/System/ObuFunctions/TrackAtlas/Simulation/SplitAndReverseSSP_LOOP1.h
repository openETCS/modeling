/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */
#ifndef _SplitAndReverseSSP_LOOP1_H_
#define _SplitAndReverseSSP_LOOP1_H_

#include "kcg_types.h"
#include "SplitAndReverseSSP_LOOP2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_cat_t /* SplitAndReverseSSP_LOOP1::SSP_reverse_t_cat_out */ SSP_reverse_t_cat_out;
  SSP_cat_t /* SplitAndReverseSSP_LOOP1::SSP_reverse_cat_out */ SSP_reverse_cat_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SplitAndReverseSSP_LOOP2 /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t /* SplitAndReverseSSP_LOOP1::_L1 */ _L1;
  SSP_cat_t /* SplitAndReverseSSP_LOOP1::_L18 */ _L18;
  array_int_8 /* SplitAndReverseSSP_LOOP1::_L35 */ _L35;
} outC_SplitAndReverseSSP_LOOP1;

/* ===========  node initialization and cycle functions  =========== */
/* SplitAndReverseSSP_LOOP1 */
extern void SplitAndReverseSSP_LOOP1(
  /* SplitAndReverseSSP_LOOP1::SSP_cat_in */SSP_cat_t *SSP_cat_in,
  outC_SplitAndReverseSSP_LOOP1 *outC);

extern void SplitAndReverseSSP_LOOP1_reset(outC_SplitAndReverseSSP_LOOP1 *outC);

#endif /* _SplitAndReverseSSP_LOOP1_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SplitAndReverseSSP_LOOP1.h
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

