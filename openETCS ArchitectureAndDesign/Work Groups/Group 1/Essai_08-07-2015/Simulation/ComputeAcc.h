/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _ComputeAcc_H_
#define _ComputeAcc_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* ComputeAcc::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* ComputeAcc::_L1 */ _L1;
  kcg_real /* ComputeAcc::_L2 */ _L2;
  kcg_real /* ComputeAcc::_L3 */ _L3;
  kcg_real /* ComputeAcc::_L4 */ _L4;
  kcg_real /* ComputeAcc::_L5 */ _L5;
} outC_ComputeAcc;

/* ===========  node initialization and cycle functions  =========== */
/* ComputeAcc */
extern void ComputeAcc(
  /* ComputeAcc::Input1 */kcg_real Input1,
  outC_ComputeAcc *outC);

extern void ComputeAcc_reset(outC_ComputeAcc *outC);

#endif /* _ComputeAcc_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeAcc.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

