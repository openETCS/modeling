/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _FindMax_of_all_t_cats_LOOP_H_
#define _FindMax_of_all_t_cats_LOOP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* FindMax_of_all_t_cats_LOOP::cont */ cont;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats_LOOP::Max */ Max;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats_LOOP::_L13 */ _L13;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats_LOOP::_L14 */ _L14;
  SSP_target_t /* FindMax_of_all_t_cats_LOOP::_L15 */ _L15;
  SSP_target_t /* FindMax_of_all_t_cats_LOOP::_L20 */ _L20;
  kcg_bool /* FindMax_of_all_t_cats_LOOP::_L21 */ _L21;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats_LOOP::_L24 */ _L24;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats_LOOP::_L23 */ _L23;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats_LOOP::_L25 */ _L25;
  kcg_int /* FindMax_of_all_t_cats_LOOP::_L26 */ _L26;
  kcg_bool /* FindMax_of_all_t_cats_LOOP::_L27 */ _L27;
  kcg_int /* FindMax_of_all_t_cats_LOOP::_L28 */ _L28;
  kcg_bool /* FindMax_of_all_t_cats_LOOP::_L29 */ _L29;
  kcg_bool /* FindMax_of_all_t_cats_LOOP::_L30 */ _L30;
  SSP_t_indexed_matrix_element /* FindMax_of_all_t_cats_LOOP::_L32 */ _L32;
} outC_FindMax_of_all_t_cats_LOOP;

/* ===========  node initialization and cycle functions  =========== */
/* FindMax_of_all_t_cats_LOOP */
extern void FindMax_of_all_t_cats_LOOP(
  /* FindMax_of_all_t_cats_LOOP::i */kcg_int i,
  /* FindMax_of_all_t_cats_LOOP::Init_target */SSP_t_indexed_matrix_element *Init_target,
  /* FindMax_of_all_t_cats_LOOP::SSP_indexed_target */SSP_t_indexed_matrix_element *SSP_indexed_target,
  outC_FindMax_of_all_t_cats_LOOP *outC);

extern void FindMax_of_all_t_cats_LOOP_reset(
  outC_FindMax_of_all_t_cats_LOOP *outC);

#endif /* _FindMax_of_all_t_cats_LOOP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindMax_of_all_t_cats_LOOP.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

