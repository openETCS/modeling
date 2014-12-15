/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_
#define _MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__L_TRAININT /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::safeTrainLength */ safeTrainLength;
  kcg_int /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::minSafeRearEnd */ minSafeRearEnd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L10 */ _L10;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
extern void MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  MLRI__outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);

extern void MLRI__CalculateSafeTrainLength_reset_ProvidePositionReport_Pkg(
  MLRI__outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

