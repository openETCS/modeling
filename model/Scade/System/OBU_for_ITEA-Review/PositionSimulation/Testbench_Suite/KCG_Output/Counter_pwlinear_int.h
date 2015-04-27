/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _Counter_pwlinear_int_H_
#define _Counter_pwlinear_int_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* pwlinear::Counter::Count */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Counter_pwlinear_int;

/* ===========  node initialization and cycle functions  =========== */
/* pwlinear::Counter */
extern void Counter_pwlinear_int(
  /* pwlinear::Counter::Incr */ kcg_int Incr,
  /* pwlinear::Counter::Reset */ kcg_bool Reset,
  outC_Counter_pwlinear_int *outC);

extern void Counter_reset_pwlinear_int(outC_Counter_pwlinear_int *outC);
extern void Counter_init_pwlinear_int(outC_Counter_pwlinear_int *outC);

#endif /* _Counter_pwlinear_int_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Counter_pwlinear_int.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

