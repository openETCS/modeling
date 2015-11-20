/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckCompleteness_CheckBGConsistency_Pkg_H_
#define _CheckCompleteness_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::CheckCompleteness */
extern void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */ BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool *_16_isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool *_15_isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg *_14_lastTelegram);

#endif /* _CheckCompleteness_CheckBGConsistency_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckCompleteness_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

