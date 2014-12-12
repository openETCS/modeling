/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__addTelegram_BuildBGMessage_Pkg_H_
#define _MLRI__addTelegram_BuildBGMessage_Pkg_H_

#include "kcg_types.h"
#include "MLRI__setFirstFree_BuildBGMessage_Pkg_BaliseSupport.h"
#include "MLRI__replaceTelegram_BuildBGMessage_Pkg_BaliseSupport.h"
#include "MLRI__setCoordinateSystemPosition_BuildBGMessage_Pkg.h"
#include "MLRI__setIntervalBGPosition_BuildBGMessage_Pkg.h"

/* =====================  no input structure  ====================== */


/* BuildBGMessage_Pkg::addTelegram */
extern void MLRI__addTelegram_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::addTelegram::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::addTelegram::inCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *inCollector,
  /* BuildBGMessage_Pkg::addTelegram::inoldTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* BuildBGMessage_Pkg::addTelegram::doUpdate */kcg_bool doUpdate,
  /* BuildBGMessage_Pkg::addTelegram::inPosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  /* BuildBGMessage_Pkg::addTelegram::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector,
  /* BuildBGMessage_Pkg::addTelegram::outTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* BuildBGMessage_Pkg::addTelegram::outBGisComplete */kcg_bool *outBGisComplete);

#endif /* _MLRI__addTelegram_BuildBGMessage_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__addTelegram_BuildBGMessage_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

