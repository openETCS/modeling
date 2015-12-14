/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-12-14T10:39:25
*************************************************************$ */
#ifndef _ProbeSDM_EnvSim_H_
#define _ProbeSDM_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EnvSim::ProbeSDM::dummyOut */ dummyOut;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_ProbeSDM_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::ProbeSDM */
extern void ProbeSDM_EnvSim(
  /* EnvSim::ProbeSDM::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* EnvSim::ProbeSDM::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* EnvSim::ProbeSDM::target */ Target_T_TargetManagement_types *target,
  /* EnvSim::ProbeSDM::dataFromTA */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTA,
  /* EnvSim::ProbeSDM::sdmToDMI */ speedSupervisionForDMI_T_DMI_Types_Pkg *sdmToDMI,
  outC_ProbeSDM_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProbeSDM_reset_EnvSim(outC_ProbeSDM_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void ProbeSDM_init_EnvSim(outC_ProbeSDM_EnvSim *outC);

#endif /* _ProbeSDM_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeSDM_EnvSim.dh
** Generation date: 2015-12-14T10:39:25
*************************************************************$ */

