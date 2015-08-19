/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _SBD_Operator_H_
#define _SBD_Operator_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_25 /* SBD_Operator::Vsbd */ Vsbd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_real_25 /* SBD_Operator::_L1 */ _L1;
  array_real_25 /* SBD_Operator::_L2 */ _L2;
} outC_SBD_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* SBD_Operator */
extern void SBD_Operator(
  /* SBD_Operator::Aservice */array_real_25 *Aservice,
  outC_SBD_Operator *outC);

extern void SBD_Operator_reset(outC_SBD_Operator *outC);

#endif /* _SBD_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SBD_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

