/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_
#define _MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "MLRI__CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "MLRI__CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "MLRI__Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
extern void MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */MLRI__TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */MLRI__Telegram_T_BG_Types_Pkg *lastTelegram);

#endif /* _MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

