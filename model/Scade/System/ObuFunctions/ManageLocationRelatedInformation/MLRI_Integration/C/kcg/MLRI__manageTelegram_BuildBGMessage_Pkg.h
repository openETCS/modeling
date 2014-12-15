/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__manageTelegram_BuildBGMessage_Pkg_H_
#define _MLRI__manageTelegram_BuildBGMessage_Pkg_H_

#include "kcg_types.h"
#include "MLRI__checkTelegram_BuildBGMessage_Pkg.h"
#include "MLRI__addTelegram_BuildBGMessage_Pkg.h"
#include "MLRI__checkInit_BuildBGMessage_Pkg.h"

/* =====================  no input structure  ====================== */


/* BuildBGMessage_Pkg::manageTelegram */
extern void MLRI__manageTelegram_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::manageTelegram::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::manageTelegram::incenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* BuildBGMessage_Pkg::manageTelegram::inCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *inCollector,
  /* BuildBGMessage_Pkg::manageTelegram::inoldTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* BuildBGMessage_Pkg::manageTelegram::outBGisComplete */kcg_bool *outBGisComplete,
  /* BuildBGMessage_Pkg::manageTelegram::outBGisChangedEarly */kcg_bool *outBGisChangedEarly,
  /* BuildBGMessage_Pkg::manageTelegram::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector,
  /* BuildBGMessage_Pkg::manageTelegram::outTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* BuildBGMessage_Pkg::manageTelegram::outStoresChanged */kcg_bool *outStoresChanged);

#endif /* _MLRI__manageTelegram_BuildBGMessage_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__manageTelegram_BuildBGMessage_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

