/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */
#ifndef _RemoveLargestFromSSP_Matrix_H_
#define _RemoveLargestFromSSP_Matrix_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_matrix_t /* RemoveLargestFromSSP_Matrix::SSP_matrix_out */ SSP_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t /* RemoveLargestFromSSP_Matrix::_L1 */ _L1;
  SSP_indexed_matrix_element /* RemoveLargestFromSSP_Matrix::_L2 */ _L2;
  SSP_matrix_t /* RemoveLargestFromSSP_Matrix::_L3 */ _L3;
  kcg_int /* RemoveLargestFromSSP_Matrix::_L10 */ _L10;
  kcg_int /* RemoveLargestFromSSP_Matrix::_L17 */ _L17;
  kcg_int /* RemoveLargestFromSSP_Matrix::_L18 */ _L18;
} outC_RemoveLargestFromSSP_Matrix;

/* ===========  node initialization and cycle functions  =========== */
/* RemoveLargestFromSSP_Matrix */
extern void RemoveLargestFromSSP_Matrix(
  /* RemoveLargestFromSSP_Matrix::Largest_Target */SSP_indexed_matrix_element *Largest_Target,
  /* RemoveLargestFromSSP_Matrix::SSP_matrix_in */SSP_matrix_t *SSP_matrix_in,
  outC_RemoveLargestFromSSP_Matrix *outC);

extern void RemoveLargestFromSSP_Matrix_reset(
  outC_RemoveLargestFromSSP_Matrix *outC);

#endif /* _RemoveLargestFromSSP_Matrix_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RemoveLargestFromSSP_Matrix.h
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

