/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _BuildTargetList_LOOP_H_
#define _BuildTargetList_LOOP_H_

#include "kcg_types.h"
#include "Find_First_in_each_t_SSP_cat.h"
#include "FindMax_of_all_t_cats.h"
#include "RemoveLargestFromSSP_t_matrix.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_matrix_t /* BuildTargetList_LOOP::SSP_Matrix_out */ SSP_Matrix_out;
  SSP_t_indexed_matrix_element /* BuildTargetList_LOOP::SSP_list_out */ SSP_list_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RemoveLargestFromSSP_t_matrix /* 1 */ _2_Context_1;
  outC_FindMax_of_all_t_cats /* 1 */ _1_Context_1;
  outC_Find_First_in_each_t_SSP_cat /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_matrix_t /* BuildTargetList_LOOP::_L1 */ _L1;
  SSP_t_indexed_matrix_element /* BuildTargetList_LOOP::_L2 */ _L2;
  SSP_t_indexed_targets_list_t /* BuildTargetList_LOOP::_L3 */ _L3;
  SSP_t_indexed_matrix_element /* BuildTargetList_LOOP::_L4 */ _L4;
  SSP_t_matrix_t /* BuildTargetList_LOOP::_L5 */ _L5;
} outC_BuildTargetList_LOOP;

/* ===========  node initialization and cycle functions  =========== */
/* BuildTargetList_LOOP */
extern void BuildTargetList_LOOP(
  /* BuildTargetList_LOOP::SSP_Matrix_In */SSP_t_matrix_t *SSP_Matrix_In,
  /* BuildTargetList_LOOP::SSP_list_in */SSP_t_indexed_matrix_element *SSP_list_in,
  outC_BuildTargetList_LOOP *outC);

extern void BuildTargetList_LOOP_reset(outC_BuildTargetList_LOOP *outC);

#endif /* _BuildTargetList_LOOP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildTargetList_LOOP.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

