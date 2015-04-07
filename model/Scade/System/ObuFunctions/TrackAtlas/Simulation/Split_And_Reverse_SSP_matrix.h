/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */
#ifndef _Split_And_Reverse_SSP_matrix_H_
#define _Split_And_Reverse_SSP_matrix_H_

#include "kcg_types.h"
#include "SplitAndReverseSSP_LOOP1.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_matrix_t /* Split_And_Reverse_SSP_matrix::SSP_matrix_in */ SSP_matrix_in;
} inC_Split_And_Reverse_SSP_matrix;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_matrix_t /* Split_And_Reverse_SSP_matrix::SSP_reverse_t_matrix_out */ SSP_reverse_t_matrix_out;
  SSP_matrix_t /* Split_And_Reverse_SSP_matrix::SSP_reverse_matrix_out */ SSP_reverse_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SplitAndReverseSSP_LOOP1 /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t /* Split_And_Reverse_SSP_matrix::_L1 */ _L1;
  array_int_8_11 /* Split_And_Reverse_SSP_matrix::_L27 */ _L27;
  array__150 /* Split_And_Reverse_SSP_matrix::_L51 */ _L51;
} outC_Split_And_Reverse_SSP_matrix;

/* ===========  node initialization and cycle functions  =========== */
/* Split_And_Reverse_SSP_matrix */
extern void Split_And_Reverse_SSP_matrix(
  inC_Split_And_Reverse_SSP_matrix *inC,
  outC_Split_And_Reverse_SSP_matrix *outC);

extern void Split_And_Reverse_SSP_matrix_reset(
  outC_Split_And_Reverse_SSP_matrix *outC);

#endif /* _Split_And_Reverse_SSP_matrix_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Split_And_Reverse_SSP_matrix.h
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

