/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _CalcBrakeCmd_SDM_OutputWrapper_H_
#define _CalcBrakeCmd_SDM_OutputWrapper_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Brake_command_T_TIU_Types_Pkg /* SDM_OutputWrapper::CalcBrakeCmd::brakeCmd */ brakeCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SDM_OutputWrapper::CalcBrakeCmd::trigEB */ trigEB;
  kcg_bool /* SDM_OutputWrapper::CalcBrakeCmd::trigSB */ trigSB;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CalcBrakeCmd_SDM_OutputWrapper;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_OutputWrapper::CalcBrakeCmd */
extern void CalcBrakeCmd_SDM_OutputWrapper(
  /* SDM_OutputWrapper::CalcBrakeCmd::triggeredEB */ kcg_bool triggeredEB,
  /* SDM_OutputWrapper::CalcBrakeCmd::triggeredSB */ kcg_bool triggeredSB,
  /* SDM_OutputWrapper::CalcBrakeCmd::revokedEB */ kcg_bool revokedEB,
  /* SDM_OutputWrapper::CalcBrakeCmd::revokedSB */ kcg_bool revokedSB,
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC);

extern void CalcBrakeCmd_reset_SDM_OutputWrapper(
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC);
extern void CalcBrakeCmd_init_SDM_OutputWrapper(
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC);

#endif /* _CalcBrakeCmd_SDM_OutputWrapper_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcBrakeCmd_SDM_OutputWrapper.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

