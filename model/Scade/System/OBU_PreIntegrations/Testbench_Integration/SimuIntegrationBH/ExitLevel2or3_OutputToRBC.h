/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ExitLevel2or3_OutputToRBC_H_
#define _ExitLevel2or3_OutputToRBC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OutputToRBC::ExitLevel2or3::PositionReportNeeded */ PositionReportNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _50_SSM_ST_SM1 /* OutputToRBC::ExitLevel2or3::SM1 */ SM1_state_nxt;
  kcg_bool /* OutputToRBC::ExitLevel2or3::SM1 */ SM1_reset_act;
  kcg_bool /* OutputToRBC::ExitLevel2or3::SM1 */ SM1_reset_nxt;
  M_POSITION /* OutputToRBC::ExitLevel2or3::Loc_Position */ Loc_Position;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ExitLevel2or3_OutputToRBC;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::ExitLevel2or3 */
extern void ExitLevel2or3_OutputToRBC(
  /* OutputToRBC::ExitLevel2or3::new_level */ M_LEVEL new_level,
  /* OutputToRBC::ExitLevel2or3::last_level */ M_LEVEL last_level,
  /* OutputToRBC::ExitLevel2or3::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::ExitLevel2or3::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ExitLevel2or3_OutputToRBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ExitLevel2or3_reset_OutputToRBC(
  outC_ExitLevel2or3_OutputToRBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ExitLevel2or3_init_OutputToRBC(
  outC_ExitLevel2or3_OutputToRBC *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ExitLevel2or3_OutputToRBC_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ExitLevel2or3_OutputToRBC.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

