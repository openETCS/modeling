/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-28T16:19:59
*************************************************************$ */
#ifndef _ProbeTracksideInput_EnvSim_H_
#define _ProbeTracksideInput_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -------------  insert eventual inits and memories  -------------- */
} outC_ProbeTracksideInput_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::ProbeTracksideInput */
extern void ProbeTracksideInput_EnvSim(
  /* EnvSim::ProbeTracksideInput::in */ API_TrackSideInput_T_API_Msg_Pkg *in,
  outC_ProbeTracksideInput_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProbeTracksideInput_reset_EnvSim(
  outC_ProbeTracksideInput_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void ProbeTracksideInput_init_EnvSim(
  outC_ProbeTracksideInput_EnvSim *outC);

#endif /* _ProbeTracksideInput_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeTracksideInput_EnvSim.dh
** Generation date: 2015-10-28T16:19:59
*************************************************************$ */

