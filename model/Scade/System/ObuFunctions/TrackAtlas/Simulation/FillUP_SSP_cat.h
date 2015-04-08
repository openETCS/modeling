/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */
#ifndef _FillUP_SSP_cat_H_
#define _FillUP_SSP_cat_H_

#include "kcg_types.h"
#include "FillUP_SSP_cat_LOOP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t /* FillUP_SSP_cat::SSP_cat_out */ SSP_cat_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FillUP_SSP_cat_LOOP /* 1 */ Context_1[3];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t /* FillUP_SSP_cat::_L1 */ _L1;
  SSP_cat_t /* FillUP_SSP_cat::_L4 */ _L4;
  kcg_int /* FillUP_SSP_cat::_L9 */ _L9;
  kcg_bool /* FillUP_SSP_cat::_L10 */ _L10;
  SSP_cat_t /* FillUP_SSP_cat::_L11 */ _L11;
} outC_FillUP_SSP_cat;

/* ===========  node initialization and cycle functions  =========== */
/* FillUP_SSP_cat */
extern void FillUP_SSP_cat(
  /* FillUP_SSP_cat::SSP_cat_in */SSP_cat_t *SSP_cat_in,
  outC_FillUP_SSP_cat *outC);

extern void FillUP_SSP_cat_reset(outC_FillUP_SSP_cat *outC);

#endif /* _FillUP_SSP_cat_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FillUP_SSP_cat.h
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

