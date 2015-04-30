/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_
#define _CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_TRAININT /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::safeTrainLength */ safeTrainLength;
  kcg_int /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::minSafeRearEnd */ minSafeRearEnd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L10 */ _L10;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
extern void CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);

extern void CalculateSafeTrainLength_reset_ProvidePositionReport_Pkg(
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);
extern void CalculateSafeTrainLength_init_ProvidePositionReport_Pkg(
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);

#endif /* _CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateSafeTrainLength_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

