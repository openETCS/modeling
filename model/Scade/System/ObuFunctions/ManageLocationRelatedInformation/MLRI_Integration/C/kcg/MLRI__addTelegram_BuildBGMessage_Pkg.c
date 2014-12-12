/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__addTelegram_BuildBGMessage_Pkg.h"

/* BuildBGMessage_Pkg::addTelegram */
void MLRI__addTelegram_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::addTelegram::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::addTelegram::inCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *inCollector,
  /* BuildBGMessage_Pkg::addTelegram::inoldTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* BuildBGMessage_Pkg::addTelegram::doUpdate */kcg_bool doUpdate,
  /* BuildBGMessage_Pkg::addTelegram::inPosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  /* BuildBGMessage_Pkg::addTelegram::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector,
  /* BuildBGMessage_Pkg::addTelegram::outTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* BuildBGMessage_Pkg::addTelegram::outBGisComplete */kcg_bool *outBGisComplete)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* BuildBGMessage_Pkg::addTelegram::IfBlock1::then::_L36 */ MLRI__array__21563 _L36_IfBlock1;
  /* BuildBGMessage_Pkg::addTelegram::IfBlock1::then::_L35 */ kcg_int _L35_IfBlock1;
  /* BuildBGMessage_Pkg::addTelegram::IfBlock1::then::_L1 */ kcg_int _L1_IfBlock1;
  /* BuildBGMessage_Pkg::addTelegram::IfBlock1::else::_L15 */ MLRI__array__21563 _L15_IfBlock1;
  /* BuildBGMessage_Pkg::addTelegram::IfBlock1::else::_L14 */ kcg_int _L14_IfBlock1;
  
  if (doUpdate) {
    (*outCollector).badBaliseFlag = (*inCollector).badBaliseFlag;
    (*outCollector).BGMessageSent = (*inCollector).BGMessageSent;
    (*outCollector).C_ID = (*inCollector).C_ID;
    (*outCollector).BG_ID = (*inCollector).BG_ID;
    (*outCollector).totalTelegrams = (*inCollector).totalTelegrams;
    for (i = 0; i < 8; i++) {
      /* 3 */
      MLRI__setFirstFree_BuildBGMessage_Pkg_BaliseSupport(
        newTelegram,
        &(*inoldTelegramArray)[i],
        &tmp1,
        &_L36_IfBlock1[i]);
      _L35_IfBlock1 = i + 1;
      if (!tmp1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L35_IfBlock1; i < 8; i++) {
      MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L36_IfBlock1[i],
        (MLRI__Telegram_T_BG_Types_Pkg *) &MLRI__cEmpty_BaliseTlg_BG_Types_Pkg);
    }
#endif /* KCG_MAPW_CPY */
    
    _L1_IfBlock1 = (*inCollector).collectedTelegrams + 1;
    (*outCollector).collectedTelegrams = _L1_IfBlock1;
    /* 1 */
    MLRI__setCoordinateSystemPosition_BuildBGMessage_Pkg(
      &(*inCollector).balisePosition,
      newTelegram,
      inPosition,
      &(*outCollector).balisePosition);
    /* 1 */
    MLRI__setIntervalBGPosition_BuildBGMessage_Pkg(
      &(*inCollector).positionFirstContact,
      inPosition,
      &(*outCollector).positionFirstContact);
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      outTelegramArray,
      &_L36_IfBlock1);
    *outBGisComplete = _L1_IfBlock1 >= (*inCollector).totalTelegrams;
  }
  else {
    for (i = 0; i < 8; i++) {
      /* 1 */
      MLRI__replaceTelegram_BuildBGMessage_Pkg_BaliseSupport(
        newTelegram,
        &(*inoldTelegramArray)[i],
        &tmp,
        &_L15_IfBlock1[i]);
      _L14_IfBlock1 = i + 1;
      if (!tmp) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L14_IfBlock1; i < 8; i++) {
      MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L15_IfBlock1[i],
        (MLRI__Telegram_T_BG_Types_Pkg *) &MLRI__cEmpty_BaliseTlg_BG_Types_Pkg);
    }
#endif /* KCG_MAPW_CPY */
    
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(outCollector, inCollector);
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      outTelegramArray,
      &_L15_IfBlock1);
    *outBGisComplete = ((*inCollector).collectedTelegrams >=
        (*inCollector).totalTelegrams) & !(*inCollector).BGMessageSent;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__addTelegram_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

