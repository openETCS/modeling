/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */
#ifndef _addTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _addTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::addTelegram */
extern void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::addTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inoldTelegramArray */TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::doUpdate */kcg_bool doUpdate,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inPosition */centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */kcg_bool *outIsDuplicate);

#endif /* _addTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** addTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */

