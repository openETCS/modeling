/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _D_behavior_H_
#define _D_behavior_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "ComputeDistDisplay.h"
#include "SPDI_ComputeSpeedChangeIndex_SPDI.h"
#include "ZoomLevel.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tScale /* D_behavior::Scale */ Scale;
  array_real_12 /* D_behavior::GradientStartInterpolated */ GradientStartInterpolated;
  array_real_12 /* D_behavior::GradientEndInterpolated */ GradientEndInterpolated;
  array_bool_12 /* D_behavior::GradientVisible */ GradientVisible;
  array_real_4 /* D_behavior::PASP_Distances */ PASP_Distances;
  array_real_4 /* D_behavior::PASP_Speeds */ PASP_Speeds;
  array_real_10 /* D_behavior::SPDI_SpeedChangePosition */ SPDI_SpeedChangePosition;
  array_int_10 /* D_behavior::SPDI_SpeedChangeIndex */ SPDI_SpeedChangeIndex;
  array_bool_10 /* D_behavior::SPDI_SpeedChangeSymbolsVisible */ SPDI_SpeedChangeSymbolsVisible;
  array_real_1 /* D_behavior::toDisplay */ toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ZoomLevel /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_D_behavior;

/* ===========  node initialization and cycle functions  =========== */
/* D_behavior */
extern void D_behavior(
  /* D_behavior::MousePressed */ kcg_bool MousePressed,
  /* D_behavior::OverD9 */ kcg_bool OverD9,
  /* D_behavior::OverD12 */ kcg_bool OverD12,
  /* D_behavior::TrainPosition */ kcg_real TrainPosition,
  /* D_behavior::GradientsStart */ array_real_12 *GradientsStart,
  /* D_behavior::GradientsEnd */ array_real_12 *GradientsEnd,
  /* D_behavior::PASP_SpeedPoints */ tSpeedPoints *PASP_SpeedPoints,
  /* D_behavior::CPS */ kcg_real CPS,
  /* D_behavior::Indicationlocation */ kcg_int Indicationlocation,
  outC_D_behavior *outC);

extern void D_behavior_reset(outC_D_behavior *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void D_behavior_init(outC_D_behavior *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _D_behavior_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** D_behavior.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

