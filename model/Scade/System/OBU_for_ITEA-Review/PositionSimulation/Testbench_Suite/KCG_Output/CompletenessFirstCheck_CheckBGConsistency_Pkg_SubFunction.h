/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_
#define _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
extern void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */ TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */ kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */ Telegram_T_BG_Types_Pkg *lastTelegram);

#endif /* _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

