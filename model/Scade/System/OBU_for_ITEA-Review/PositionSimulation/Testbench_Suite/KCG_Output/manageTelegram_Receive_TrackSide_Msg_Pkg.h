/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _manageTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _manageTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::manageTelegram */
extern void manageTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisComplete */ kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisChangedEarly */ kcg_bool *outBGisChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outStoresChanged */ kcg_bool *outStoresChanged);

#endif /* _manageTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

