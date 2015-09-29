/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/SimulationJK/config.txt
** Generation date: 2015-09-28T11:34:05
*************************************************************$ */
#ifndef _DMIAdapter_EnvSim_H_
#define _DMIAdapter_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* EnvSim::DMIAdapter::dmiToEVC */ dmiToEVC;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_DMIAdapter_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::DMIAdapter */
extern void DMIAdapter_EnvSim(
  /* EnvSim::DMIAdapter::evcToDMI */ EVC_to_DMI_Message_T_API_DMI_Pkg *evcToDMI,
  outC_DMIAdapter_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMIAdapter_reset_EnvSim(outC_DMIAdapter_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void DMIAdapter_init_EnvSim(outC_DMIAdapter_EnvSim *outC);

#endif /* _DMIAdapter_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DMIAdapter_EnvSim.dh
** Generation date: 2015-09-28T11:34:05
*************************************************************$ */

