/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T14:59:23
*************************************************************$ */
#ifndef _Spreader_Operator_1_1_H_
#define _Spreader_Operator_1_1_H_

#include "kcg_types.h"
#include "ScanPositions_1_1.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_25 /* Spreader_Operator::SSP_100 */ SSP_100;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ScanPositions_1_1 /* 1 */ Context_1[25];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_real_25 /* Spreader_Operator::_L9 */ _L9;
  kcg_real /* Spreader_Operator::_L7 */ _L7;
  kcg_real /* Spreader_Operator::_L4 */ _L4;
  array_real_25 /* Spreader_Operator::_L5 */ _L5;
  array__1672 /* Spreader_Operator::_L2 */ _L2;
  kcg_real /* Spreader_Operator::_L10 */ _L10;
  array__1666 /* Spreader_Operator::_L11 */ _L11;
  array_real_25 /* Spreader_Operator::_L12 */ _L12;
} outC_Spreader_Operator_1_1;

/* ===========  node initialization and cycle functions  =========== */
/* Spreader_Operator */
extern void Spreader_Operator_1_1(
  /* Spreader_Operator::SSP_n */array__1666 *SSP_n,
  /* Spreader_Operator::Position */array_real_25 *Position,
  outC_Spreader_Operator_1_1 *outC);

extern void Spreader_Operator_reset_1_1(outC_Spreader_Operator_1_1 *outC);

#endif /* _Spreader_Operator_1_1_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Spreader_Operator_1_1.h
** Generation date: 2015-06-24T14:59:23
*************************************************************$ */

