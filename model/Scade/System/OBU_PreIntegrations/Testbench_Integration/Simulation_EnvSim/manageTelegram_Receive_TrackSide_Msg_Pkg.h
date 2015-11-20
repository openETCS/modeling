/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:55
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
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisComplete */kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisChangedEarly */kcg_bool *outBGisChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outTelegramArray */TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outStoresChanged */kcg_bool *outStoresChanged);

#endif /* _manageTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */

