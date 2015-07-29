/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _Bool_Spreader_Operator_2_H_
#define _Bool_Spreader_Operator_2_H_

#include "kcg_types.h"
#include "BooleanScanPositions_2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_bool_25 /* Bool_Spreader_Operator::Values_100 */ Values_100;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BooleanScanPositions_2 /* 1 */ Context_1[25];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_bool_25 /* Bool_Spreader_Operator::_L9 */ _L9;
  array_bool_25 /* Bool_Spreader_Operator::_L8 */ _L8;
  kcg_real /* Bool_Spreader_Operator::_L7 */ _L7;
  array_bool_1 /* Bool_Spreader_Operator::_L6 */ _L6;
  kcg_real /* Bool_Spreader_Operator::_L4 */ _L4;
  array_bool_25 /* Bool_Spreader_Operator::_L5 */ _L5;
  array_bool_24 /* Bool_Spreader_Operator::_L3 */ _L3;
  array__1586 /* Bool_Spreader_Operator::_L2 */ _L2;
  kcg_bool /* Bool_Spreader_Operator::_L1 */ _L1;
  kcg_bool /* Bool_Spreader_Operator::_L10 */ _L10;
  array__1550 /* Bool_Spreader_Operator::_L11 */ _L11;
  array_real_25 /* Bool_Spreader_Operator::_L12 */ _L12;
} outC_Bool_Spreader_Operator_2;

/* ===========  node initialization and cycle functions  =========== */
/* Bool_Spreader_Operator */
extern void Bool_Spreader_Operator_2(
  /* Bool_Spreader_Operator::Values_n */array__1550 *Values_n,
  /* Bool_Spreader_Operator::Position */array_real_25 *Position,
  outC_Bool_Spreader_Operator_2 *outC);

extern void Bool_Spreader_Operator_reset_2(outC_Bool_Spreader_Operator_2 *outC);

#endif /* _Bool_Spreader_Operator_2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Bool_Spreader_Operator_2.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

