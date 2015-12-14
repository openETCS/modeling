/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-29T09:08:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProbeSDM_EnvSim.h"

#ifdef WITH_SCADE
extern void es_scade_probe_sdm_init(outC_ProbeSDM_EnvSim *outC);
extern void es_scade_probe_sdm_cycle(TargetCollection_T_TargetManagement_types *targetCollection,
                                     CurveCollection_T_CalcBrakingCurves_types *curveCollection,
                                     Target_T_TargetManagement_types *target,
                                     DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTA,
                                     speedSupervisionForDMI_T_DMI_Types_Pkg *sdmToDMI,
                                     outC_ProbeSDM_EnvSim *outC);

int ProbeSDM_initialized_EnvSim = 0;
#endif // WITH_SCADE

void ProbeSDM_init_EnvSim(outC_ProbeSDM_EnvSim *outC)
{
#ifdef WITH_SCADE
  es_scade_probe_sdm_init(outC);
  ProbeSDM_initialized_EnvSim = 1;
#endif // WITH_SCADE
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProbeSDM_reset_EnvSim(outC_ProbeSDM_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::ProbeSDM */
void ProbeSDM_EnvSim(
  /* EnvSim::ProbeSDM::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* EnvSim::ProbeSDM::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* EnvSim::ProbeSDM::target */ Target_T_TargetManagement_types *target,
  /* EnvSim::ProbeSDM::dataFromTA */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTA,
  /* EnvSim::ProbeSDM::sdmToDMI */ speedSupervisionForDMI_T_DMI_Types_Pkg *sdmToDMI,
  outC_ProbeSDM_EnvSim *outC) {
#ifdef WITH_SCADE
  if(!ProbeSDM_initialized_EnvSim) {
    ProbeSDM_init_EnvSim(outC);
  }
  es_scade_probe_sdm_cycle(targetCollection,curveCollection,target,dataFromTA,sdmToDMI,outC);
#endif // WITH_SCADE
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeSDM_EnvSim.dc
** Generation date: 2015-10-29T09:08:52
*************************************************************$ */

