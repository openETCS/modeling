/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _AEB_Operator_H_
#define _AEB_Operator_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* AEB_Operator::EB */ EB;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* AEB_Operator::IfBlock1::else */ _1_else_clock_IfBlock1;
  kcg_bool /* AEB_Operator::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* AEB_Operator::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_real /* AEB_Operator::L_EB */ L_EB;
  kcg_bool /* AEB_Operator::_L1 */ _L1;
  kcg_real /* AEB_Operator::_L2 */ _L2;
  kcg_real /* AEB_Operator::_L3 */ _L3;
  kcg_real /* AEB_Operator::_L4 */ _L4;
} outC_AEB_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* AEB_Operator */
extern void AEB_Operator(
  /* AEB_Operator::Adh */kcg_bool Adh6,
  /* AEB_Operator::EB_Type */TY_EB_Type *EB_Type,
  /* AEB_Operator::MRSP */kcg_real MRSP,
  outC_AEB_Operator *outC);

extern void AEB_Operator_reset(outC_AEB_Operator *outC);

#endif /* _AEB_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** AEB_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

