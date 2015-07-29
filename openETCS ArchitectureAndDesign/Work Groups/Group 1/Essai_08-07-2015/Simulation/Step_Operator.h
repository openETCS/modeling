/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _Step_Operator_H_
#define _Step_Operator_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TY_SizePos /* Step_Operator::Next_SizePos */ Next_SizePos;
  kcg_real /* Step_Operator::SIZE */ SIZE;
  kcg_real /* Step_Operator::POS */ POS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Step_Operator::_L1 */ _L1;
  kcg_real /* Step_Operator::_L2 */ _L2;
  kcg_real /* Step_Operator::_L3 */ _L3;
  kcg_real /* Step_Operator::_L12 */ _L12;
  kcg_real /* Step_Operator::_L13 */ _L13;
  TY_SizePos /* Step_Operator::_L14 */ _L14;
} outC_Step_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* Step_Operator */
extern void Step_Operator(
  /* Step_Operator::SizePos */TY_SizePos *SizePos,
  outC_Step_Operator *outC);

extern void Step_Operator_reset(outC_Step_Operator *outC);

#endif /* _Step_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Step_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

