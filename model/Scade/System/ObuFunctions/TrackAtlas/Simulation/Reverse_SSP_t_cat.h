/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _Reverse_SSP_t_cat_H_
#define _Reverse_SSP_t_cat_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_cat_t /* Reverse_SSP_t_cat::SSP_cat_out */ SSP_cat_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_cat_t /* Reverse_SSP_t_cat::_L1 */ _L1;
  SSP_t_cat_t /* Reverse_SSP_t_cat::_L2 */ _L2;
} outC_Reverse_SSP_t_cat;

/* ===========  node initialization and cycle functions  =========== */
/* Reverse_SSP_t_cat */
extern void Reverse_SSP_t_cat(
  /* Reverse_SSP_t_cat::SSP_cat_in */SSP_t_cat_t *SSP_cat_in,
  outC_Reverse_SSP_t_cat *outC);

extern void Reverse_SSP_t_cat_reset(outC_Reverse_SSP_t_cat *outC);

#endif /* _Reverse_SSP_t_cat_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Reverse_SSP_t_cat.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

