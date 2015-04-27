/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _checkTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _checkTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::checkTelegram */
extern void checkTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::inTelegramArray */ TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::BGCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *BGCollector,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramNotInGroup */ kcg_bool *outTelegramNotInGroup,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outBGchangedEarly */ kcg_bool *outBGchangedEarly);

#endif /* _checkTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** checkTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

