/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__checkTelegram_BuildBGMessage_Pkg_H_
#define _MLRI__checkTelegram_BuildBGMessage_Pkg_H_

#include "kcg_types.h"
#include "MLRI__findTelegram_BuildBGMessage_Pkg_BaliseSupport.h"
#include "MLRI__initCollector_BuildBGMessage_Pkg_BaliseSupport.h"
#include "MLRI__checkSingleBB_BuildBGMessage_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */


/* BuildBGMessage_Pkg::checkTelegram */
extern void MLRI__checkTelegram_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::checkTelegram::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::checkTelegram::inTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* BuildBGMessage_Pkg::checkTelegram::BGCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *BGCollector,
  /* BuildBGMessage_Pkg::checkTelegram::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector,
  /* BuildBGMessage_Pkg::checkTelegram::outTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* BuildBGMessage_Pkg::checkTelegram::outTelegramNotInGroup */kcg_bool *outTelegramNotInGroup,
  /* BuildBGMessage_Pkg::checkTelegram::outBGchangedEarly */kcg_bool *outBGchangedEarly);

#endif /* _MLRI__checkTelegram_BuildBGMessage_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__checkTelegram_BuildBGMessage_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

