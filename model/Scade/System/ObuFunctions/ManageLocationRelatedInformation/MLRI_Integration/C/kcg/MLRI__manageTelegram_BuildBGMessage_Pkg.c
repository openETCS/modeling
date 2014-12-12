/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__manageTelegram_BuildBGMessage_Pkg.h"

/* BuildBGMessage_Pkg::manageTelegram */
void MLRI__manageTelegram_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::manageTelegram::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::manageTelegram::incenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* BuildBGMessage_Pkg::manageTelegram::inCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *inCollector,
  /* BuildBGMessage_Pkg::manageTelegram::inoldTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* BuildBGMessage_Pkg::manageTelegram::outBGisComplete */kcg_bool *outBGisComplete,
  /* BuildBGMessage_Pkg::manageTelegram::outBGisChangedEarly */kcg_bool *outBGisChangedEarly,
  /* BuildBGMessage_Pkg::manageTelegram::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector,
  /* BuildBGMessage_Pkg::manageTelegram::outTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* BuildBGMessage_Pkg::manageTelegram::outStoresChanged */kcg_bool *outStoresChanged)
{
  MLRI__BGCollector_T_BuildBGMessage_Pkg tmp;
  /* BuildBGMessage_Pkg::manageTelegram::_L53 */ kcg_bool _L53;
  /* BuildBGMessage_Pkg::manageTelegram::_L63 */ MLRI__BGCollector_T_BuildBGMessage_Pkg _L63;
  /* BuildBGMessage_Pkg::manageTelegram::_L64 */ MLRI__TelegramArray_T_BG_Types_Pkg _L64;
  
  /* 1 */ MLRI__checkInit_BuildBGMessage_Pkg(newTelegram, inCollector, &tmp);
  /* 1 */
  MLRI__checkTelegram_BuildBGMessage_Pkg(
    newTelegram,
    inoldTelegramArray,
    &tmp,
    &_L63,
    &_L64,
    outStoresChanged,
    outBGisChangedEarly);
  /* 4 */
  MLRI__addTelegram_BuildBGMessage_Pkg(
    newTelegram,
    &_L63,
    &_L64,
    *outStoresChanged,
    incenterOfBalisePosition,
    outCollector,
    outTelegramArray,
    &_L53);
  *outBGisComplete = _L53 | *outBGisChangedEarly;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__manageTelegram_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

