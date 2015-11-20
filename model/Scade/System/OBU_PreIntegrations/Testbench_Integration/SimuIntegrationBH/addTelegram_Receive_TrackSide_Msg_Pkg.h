/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _addTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _addTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::addTelegram */
extern void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::addTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::doUpdate */ kcg_bool doUpdate,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inPosition */ centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *_18_outCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *_17_outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool *_16_outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool *_15_outIsDuplicate);

#endif /* _addTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** addTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

