/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SwitchModes_H_
#define _SwitchModes_H_

#include "kcg_types.h"
#include "From_NP_PriorityManagement.h"
#include "From_SB_PriorityManagement.h"
#include "From_PS_PriorityManagement.h"
#include "From_SH_PriorityManagement.h"
#include "From_FS_PriorityManagement.h"
#include "From_LS_PriorityManagement.h"
#include "From_SR_PriorityManagement.h"
#include "From_OS_PriorityManagement.h"
#include "From_SL_PriorityManagement.h"
#include "From_NL_PriorityManagement.h"
#include "From_TR_PriorityManagement.h"
#include "From_PT_PriorityManagement.h"
#include "From_SF_PriorityManagement.h"
#include "From_SN_PriorityManagement.h"
#include "From_RV_PriorityManagement.h"
#include "From_UN_PriorityManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* SwitchModes::currentMode */ currentMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SwitchModes;

/* ===========  node initialization and cycle functions  =========== */
/* SwitchModes */
extern void SwitchModes(
  /* SwitchModes::Condition1 */ kcg_bool Condition1,
  /* SwitchModes::Condition2 */ kcg_bool Condition2,
  /* SwitchModes::Condition3 */ kcg_bool Condition3,
  /* SwitchModes::Condition4 */ kcg_bool Condition4,
  /* SwitchModes::Condition5 */ kcg_bool Condition5,
  /* SwitchModes::Condition6 */ kcg_bool Condition6,
  /* SwitchModes::Condition7 */ kcg_bool Condition7,
  /* SwitchModes::Condition8 */ kcg_bool Condition8,
  /* SwitchModes::Condition10 */ kcg_bool Condition10,
  /* SwitchModes::Condition13 */ kcg_bool Condition13,
  /* SwitchModes::Condition14 */ kcg_bool Condition14,
  /* SwitchModes::Condition15 */ kcg_bool Condition15,
  /* SwitchModes::Condition19 */ kcg_bool Condition19,
  /* SwitchModes::Condition21 */ kcg_bool Condition21,
  /* SwitchModes::Condition22 */ kcg_bool Condition22,
  /* SwitchModes::Condition23 */ kcg_bool Condition23,
  /* SwitchModes::Condition25 */ kcg_bool Condition25,
  /* SwitchModes::Condition26 */ kcg_bool Condition26,
  /* SwitchModes::Condition27 */ kcg_bool Condition27,
  /* SwitchModes::Condition28 */ kcg_bool Condition28,
  /* SwitchModes::Condition29 */ kcg_bool Condition29,
  /* SwitchModes::Condition30 */ kcg_bool Condition30,
  /* SwitchModes::Condition31 */ kcg_bool Condition31,
  /* SwitchModes::Condition32 */ kcg_bool Condition32,
  /* SwitchModes::Condition34 */ kcg_bool Condition34,
  /* SwitchModes::Condition37 */ kcg_bool Condition37,
  /* SwitchModes::Condition40 */ kcg_bool Condition40,
  /* SwitchModes::Condition44 */ kcg_bool Condition44,
  /* SwitchModes::Condition45 */ kcg_bool Condition45,
  /* SwitchModes::Condition46 */ kcg_bool Condition46,
  /* SwitchModes::Condition47 */ kcg_bool Condition47,
  /* SwitchModes::Condition50 */ kcg_bool Condition50,
  /* SwitchModes::Condition51 */ kcg_bool Condition51,
  /* SwitchModes::Condition56 */ kcg_bool Condition56,
  /* SwitchModes::Condition58 */ kcg_bool Condition58,
  /* SwitchModes::Condition59 */ kcg_bool Condition59,
  /* SwitchModes::Condition60 */ kcg_bool Condition60,
  /* SwitchModes::Condition61 */ kcg_bool Condition61,
  /* SwitchModes::Condition62 */ kcg_bool Condition62,
  /* SwitchModes::Condition63 */ kcg_bool Condition63,
  /* SwitchModes::Condition68 */ kcg_bool Condition68,
  /* SwitchModes::Condition70 */ kcg_bool Condition70,
  /* SwitchModes::Condition71 */ kcg_bool Condition71,
  /* SwitchModes::Condition72 */ kcg_bool Condition72,
  /* SwitchModes::Condition73 */ kcg_bool Condition73,
  /* SwitchModes::Condition74 */ kcg_bool Condition74,
  /* SwitchModes::ConditionTrip */ kcg_bool ConditionTrip,
  outC_SwitchModes *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SwitchModes_reset(outC_SwitchModes *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SwitchModes_init(outC_SwitchModes *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SwitchModes_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SwitchModes.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

