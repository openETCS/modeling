/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::addTelegram */
void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::addTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::doUpdate */ kcg_bool doUpdate,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inPosition */ centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool *outIsDuplicate)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L36 */ TelegramArray_T_BG_Types_Pkg _L36_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L35 */ kcg_int _L35_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L1 */ kcg_int _L1_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L21 */ array_bool_4 _L21_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L15 */ TelegramArray_T_BG_Types_Pkg _L15_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L14 */ kcg_int _L14_IfBlock1;
  
  if (doUpdate) {
    *outIsDuplicate = kcg_false;
    (*outCollector).badBaliseFlag = (*inCollector).badBaliseFlag;
    (*outCollector).BGMessageSent = (*inCollector).BGMessageSent;
    (*outCollector).C_ID = (*inCollector).C_ID;
    (*outCollector).BG_ID = (*inCollector).BG_ID;
    (*outCollector).totalTelegrams = (*inCollector).totalTelegrams;
    for (i = 0; i < 4; i++) {
      /* 3 */
      setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
        newTelegram,
        &(*inoldTelegramArray)[i],
        &tmp,
        &_L36_IfBlock1[i]);
      _L35_IfBlock1 = i + 1;
      if (!tmp) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L35_IfBlock1; i < 4; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L36_IfBlock1[i],
        (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    }
#endif /* KCG_MAPW_CPY */
    
    _L1_IfBlock1 = (*inCollector).collectedTelegrams + 1;
    (*outCollector).collectedTelegrams = _L1_IfBlock1;
    /* 1 */
    setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
      &(*inCollector).balisePosition,
      newTelegram,
      inPosition,
      &(*outCollector).balisePosition);
    /* 1 */
    setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
      &(*inCollector).positionFirstContact,
      inPosition,
      &(*outCollector).positionFirstContact);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(outTelegramArray, &_L36_IfBlock1);
    *outBGisComplete = _L1_IfBlock1 >= (*inCollector).totalTelegrams;
  }
  else {
    for (i = 0; i < 4; i++) {
      /* 1 */
      replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
        newTelegram,
        &(*inoldTelegramArray)[i],
        &tmp1,
        &_L15_IfBlock1[i],
        &_L21_IfBlock1[i]);
      _L14_IfBlock1 = i + 1;
      if (!tmp1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L14_IfBlock1; i < 4; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L15_IfBlock1[i],
        (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
      _L21_IfBlock1[i] = kcg_false;
    }
#endif /* KCG_MAPW_CPY */
    
    if ((0 <= _L14_IfBlock1 - 1) & (_L14_IfBlock1 - 1 < 4)) {
      *outIsDuplicate = _L21_IfBlock1[_L14_IfBlock1 - 1];
    }
    else {
      *outIsDuplicate = kcg_false;
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, inCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(outTelegramArray, &_L15_IfBlock1);
    *outBGisComplete = !*outIsDuplicate & (((*inCollector).collectedTelegrams >=
          (*inCollector).totalTelegrams) & !(*inCollector).BGMessageSent);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** addTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

