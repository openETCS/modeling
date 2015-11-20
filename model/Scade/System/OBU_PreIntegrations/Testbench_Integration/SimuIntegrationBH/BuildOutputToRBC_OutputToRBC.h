/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _BuildOutputToRBC_OutputToRBC_H_
#define _BuildOutputToRBC_OutputToRBC_H_

#include "kcg_types.h"
#include "RBCSessionRequests_OutputToRBC.h"
#include "EntryInLevel2or3_OutputToRBC.h"
#include "ExitLevel2or3_OutputToRBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OutputToRBC::BuildOutputToRBC::Connection_to_RBC_Requested */ Connection_to_RBC_Requested;
  kcg_bool /* OutputToRBC::BuildOutputToRBC::PositionReportNeeded */ PositionReportNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ExitLevel2or3_OutputToRBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_BuildOutputToRBC_OutputToRBC;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::BuildOutputToRBC */
extern void BuildOutputToRBC_OutputToRBC(
  /* OutputToRBC::BuildOutputToRBC::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::BuildOutputToRBC::last_level */ M_LEVEL last_level,
  /* OutputToRBC::BuildOutputToRBC::new_level */ M_LEVEL new_level,
  /* OutputToRBC::BuildOutputToRBC::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_BuildOutputToRBC_OutputToRBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildOutputToRBC_reset_OutputToRBC(
  outC_BuildOutputToRBC_OutputToRBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildOutputToRBC_init_OutputToRBC(
  outC_BuildOutputToRBC_OutputToRBC *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _BuildOutputToRBC_OutputToRBC_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** BuildOutputToRBC_OutputToRBC.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

