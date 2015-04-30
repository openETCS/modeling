/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _CheckCompleteness_CheckBGConsistency_Pkg_H_
#define _CheckCompleteness_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CheckCompleteness */
extern void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */ BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool *isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg *lastTelegram);

#endif /* _CheckCompleteness_CheckBGConsistency_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckCompleteness_CheckBGConsistency_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

