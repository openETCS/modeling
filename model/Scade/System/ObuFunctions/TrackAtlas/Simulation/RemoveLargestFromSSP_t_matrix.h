/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _RemoveLargestFromSSP_t_matrix_H_
#define _RemoveLargestFromSSP_t_matrix_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_matrix_t /* RemoveLargestFromSSP_t_matrix::SSP_matrix_out */ SSP_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_matrix_t /* RemoveLargestFromSSP_t_matrix::_L1 */ _L1;
  SSP_t_indexed_matrix_element /* RemoveLargestFromSSP_t_matrix::_L2 */ _L2;
  SSP_t_matrix_t /* RemoveLargestFromSSP_t_matrix::_L3 */ _L3;
  kcg_int /* RemoveLargestFromSSP_t_matrix::_L10 */ _L10;
  kcg_int /* RemoveLargestFromSSP_t_matrix::_L17 */ _L17;
  kcg_int /* RemoveLargestFromSSP_t_matrix::_L18 */ _L18;
} outC_RemoveLargestFromSSP_t_matrix;

/* ===========  node initialization and cycle functions  =========== */
/* RemoveLargestFromSSP_t_matrix */
extern void RemoveLargestFromSSP_t_matrix(
  /* RemoveLargestFromSSP_t_matrix::Largest_Target */SSP_t_indexed_matrix_element *Largest_Target,
  /* RemoveLargestFromSSP_t_matrix::SSP_matrix_in */SSP_t_matrix_t *SSP_matrix_in,
  outC_RemoveLargestFromSSP_t_matrix *outC);

extern void RemoveLargestFromSSP_t_matrix_reset(
  outC_RemoveLargestFromSSP_t_matrix *outC);

#endif /* _RemoveLargestFromSSP_t_matrix_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RemoveLargestFromSSP_t_matrix.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

