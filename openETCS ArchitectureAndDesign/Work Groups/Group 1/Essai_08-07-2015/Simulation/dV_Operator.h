/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _dV_Operator_H_
#define _dV_Operator_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* dV_Operator::dV */ dV;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* dV_Operator::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* dV_Operator::IfBlock1::else */ else_clock_IfBlock1;
} outC_dV_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* dV_Operator */
extern void dV_Operator(
  /* dV_Operator::MRSP */kcg_real MRSP,
  outC_dV_Operator *outC);

extern void dV_Operator_reset(outC_dV_Operator *outC);

#endif /* _dV_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** dV_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

