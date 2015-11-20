/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CalcDMI_output_SDM_Commands_Pkg_H_
#define _CalcDMI_output_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "LowerOrHold_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Types_Pkg /* SDM_Commands_Pkg::CalcDMI_output::sdmToDMI */ sdmToDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LowerOrHold_SDM_Commands_Pkg /* 2 */ Context_2;
  outC_LowerOrHold_SDM_Commands_Pkg /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_CalcDMI_output_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcDMI_output */
extern void CalcDMI_output_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDMI_output::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcDMI_output::limit_locations */ SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* SDM_Commands_Pkg::CalcDMI_output::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcDMI_output::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_CalcDMI_output_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcDMI_output_reset_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcDMI_output_init_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CalcDMI_output_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDMI_output_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

