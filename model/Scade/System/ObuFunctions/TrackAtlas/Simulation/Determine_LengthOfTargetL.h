/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */
#ifndef _Determine_LengthOfTargetL_H_
#define _Determine_LengthOfTargetL_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Determine_LengthOfTargetList_LOOP::cont */ cont;
  kcg_int /* Determine_LengthOfTargetList_LOOP::length */ length;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Determine_LengthOfTargetList_LOOP::_L1 */ _L1;
  kcg_int /* Determine_LengthOfTargetList_LOOP::_L2 */ _L2;
  SSP_t_indexed_matrix_element /* Determine_LengthOfTargetList_LOOP::_L3 */ _L3;
  SSP_target_t /* Determine_LengthOfTargetList_LOOP::_L10 */ _L10;
  kcg_int /* Determine_LengthOfTargetList_LOOP::_L11 */ _L11;
  kcg_bool /* Determine_LengthOfTargetList_LOOP::_L12 */ _L12;
  kcg_int /* Determine_LengthOfTargetList_LOOP::_L13 */ _L13;
  kcg_int /* Determine_LengthOfTargetList_LOOP::_L14 */ _L14;
} outC_Determine_LengthOfTargetL;

/* ===========  node initialization and cycle functions  =========== */
/* Determine_LengthOfTargetList_LOOP */
extern void Determine_LengthOfTargetL(
  /* Determine_LengthOfTargetList_LOOP::i */kcg_int i,
  /* Determine_LengthOfTargetList_LOOP::Acc */kcg_int Acc,
  /* Determine_LengthOfTargetList_LOOP::SSP_target_in */SSP_t_indexed_matrix_element *SSP_target_in,
  outC_Determine_LengthOfTargetL *outC);

extern void Determine_LengthOfTargetL_reset(
  outC_Determine_LengthOfTargetL *outC);

#endif /* _Determine_LengthOfTargetL_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_LengthOfTargetL.h
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

