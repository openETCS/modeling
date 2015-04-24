/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _calculatePosition_H_
#define _calculatePosition_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* calculatePosition::position */ position;
  kcg_real /* calculatePosition::velocity */ velocity;
  kcg_int /* calculatePosition::timestamp */ timestamp;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculatePosition;

/* ===========  node initialization and cycle functions  =========== */
/* calculatePosition */
extern void calculatePosition(
  /* calculatePosition::accelerationPercent */ kcg_real accelerationPercent,
  /* calculatePosition::deltaTime */ kcg_int deltaTime,
  /* calculatePosition::positionIn */ kcg_real positionIn,
  /* calculatePosition::velocityIn */ kcg_real velocityIn,
  outC_calculatePosition *outC);

extern void calculatePosition_reset(outC_calculatePosition *outC);
extern void calculatePosition_init(outC_calculatePosition *outC);

#endif /* _calculatePosition_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculatePosition.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

