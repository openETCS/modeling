/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */
#ifndef _Reverse_SSP_matrix_H_
#define _Reverse_SSP_matrix_H_

#include "kcg_types.h"
#include "Reverse_SSP_cat.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_matrix_t /* Reverse_SSP_matrix::Reverse_SSP_matrix_out */ Reverse_SSP_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Reverse_SSP_cat /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t /* Reverse_SSP_matrix::_L1 */ _L1;
  array_int_3_11 /* Reverse_SSP_matrix::_L3 */ _L3;
} outC_Reverse_SSP_matrix;

/* ===========  node initialization and cycle functions  =========== */
/* Reverse_SSP_matrix */
extern void Reverse_SSP_matrix(
  /* Reverse_SSP_matrix::SSP_matrix_in */SSP_matrix_t *SSP_matrix_in,
  outC_Reverse_SSP_matrix *outC);

extern void Reverse_SSP_matrix_reset(outC_Reverse_SSP_matrix *outC);

#endif /* _Reverse_SSP_matrix_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Reverse_SSP_matrix.h
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

