/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _CheckCompleteness_CheckBGConsistency_Pkg_H_
#define _CheckCompleteness_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CheckCompleteness */
extern void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */kcg_bool *isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */Telegram_T_BG_Types_Pkg *lastTelegram);

#endif /* _CheckCompleteness_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckCompleteness_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

