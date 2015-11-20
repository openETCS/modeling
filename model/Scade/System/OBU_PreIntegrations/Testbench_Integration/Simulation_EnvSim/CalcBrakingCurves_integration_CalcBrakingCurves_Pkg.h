/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _CalcBrakingCurves_integration_CalcBrakingCurves_Pkg_H_
#define _CalcBrakingCurves_integration_CalcBrakingCurves_Pkg_H_

#include "kcg_types.h"
#include "CalculateBrakingCurve_CalcBrakingCurves_Pkg.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CurveCollection_T_CalcBrakingCurves_types /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::curveCollection */ curveCollection;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::MRSPCurves */ MRSPCurves;
  ParabolaCurve_T_CalcBrakingCurves_types /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L33 */ _L33;
  ParabolaCurve_T_CalcBrakingCurves_types /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L99 */ _L99;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
extern void CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::TrainLocations */TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::targetCollection */TargetCollection_T_TargetManagement_types *targetCollection,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Safe */ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Expected */ASafe_T_CalcBrakingCurves_types *A_Expected,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC);

extern void CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC);

#endif /* _CalcBrakingCurves_integration_CalcBrakingCurves_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

