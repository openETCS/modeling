/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2015-10-23T11:03:30
*************************************************************$ */
#ifndef _RemoteDMIBus_EnvSim_H_
#define _RemoteDMIBus_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* EnvSim::RemoteDMIBus::dmiToEVC */ dmiToEVC;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_RemoteDMIBus_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::RemoteDMIBus */
extern void RemoteDMIBus_EnvSim(
  /* EnvSim::RemoteDMIBus::evcToDMI */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evcToDMI,
  /* EnvSim::RemoteDMIBus::tiuToDMI */ TIU_Input_msg_API_TIU_Pkg *tiuToDMI,
  outC_RemoteDMIBus_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RemoteDMIBus_reset_EnvSim(outC_RemoteDMIBus_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void RemoteDMIBus_init_EnvSim(outC_RemoteDMIBus_EnvSim *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_RemoteDMIBus_EnvSim;

extern void kcg_save_SV_RemoteDMIBus_EnvSim(
  SV_RemoteDMIBus_EnvSim *SV,
  outC_RemoteDMIBus_EnvSim *outC);
extern void kcg_load_SV_RemoteDMIBus_EnvSim(
  outC_RemoteDMIBus_EnvSim *outC,
  SV_RemoteDMIBus_EnvSim *SV);

#endif /* _RemoteDMIBus_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteDMIBus_EnvSim.dh
** Generation date: 2015-10-23T11:03:30
*************************************************************$ */

