/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__CheckCompleteness_CheckBGConsistency_Pkg_H_
#define _MLRI__CheckCompleteness_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CheckCompleteness */
extern void MLRI__CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */kcg_bool *isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */MLRI__Telegram_T_BG_Types_Pkg *lastTelegram);

#endif /* _MLRI__CheckCompleteness_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckCompleteness_CheckBGConsistency_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

