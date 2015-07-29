/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _ASB_Operator_H_
#define _ASB_Operator_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* ASB_Operator::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* ASB_Operator::_L1 */ _L1;
  kcg_bool /* ASB_Operator::_L2 */ _L2;
  kcg_real /* ASB_Operator::_L4 */ _L4;
} outC_ASB_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* ASB_Operator */
extern void ASB_Operator(
  /* ASB_Operator::Input1 */kcg_real Input1,
  /* ASB_Operator::Input2 */kcg_bool Input2,
  outC_ASB_Operator *outC);

extern void ASB_Operator_reset(outC_ASB_Operator *outC);

#endif /* _ASB_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ASB_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

