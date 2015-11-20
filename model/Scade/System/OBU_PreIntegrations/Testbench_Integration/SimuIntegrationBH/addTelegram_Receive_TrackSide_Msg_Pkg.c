/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *_18_outCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *_17_outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool *_16_outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool *_15_outIsDuplicate)
{
  static kcg_int i4;
  /* Receive_TrackSide_Msg_Pkg::addTelegram */
  static kcg_bool _3_cond_iterw;
  static kcg_int i2;
  static kcg_int i1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */
  static kcg_bool _8_outIsDuplicate;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */
  static kcg_bool _7_outBGisComplete;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _6_outTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _5_outCollector;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L55 */
  static Telegram_T_BG_Types_Pkg _L55_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L48 */
  static kcg_int _L48_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L49 */
  static kcg_int _L49_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L50 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L50_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L51 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L51_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L52 */
  static NID_BG _L52_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L53 */
  static NID_C _L53_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L54 */
  static kcg_bool _L54_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L47 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L47_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L46 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L46_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L45 */
  static Telegram_T_BG_Types_Pkg _L45_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L36 */
  static TelegramArray_T_BG_Types_Pkg _L36_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L35 */
  static kcg_int _L35_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L37 */
  static TelegramArray_T_BG_Types_Pkg _L37_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L39 */
  static TelegramArray_T_BG_Types_Pkg _L39_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L40 */
  static kcg_bool _L40_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L41 */
  static Telegram_T_BG_Types_Pkg _L41_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L17 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L17_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L15 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L15_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L6 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L6_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L9 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L9_IfBlock1;
  static kcg_int noname;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */
  static kcg_bool outIsDuplicate;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */
  static kcg_bool outBGisComplete;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */
  static TelegramArray_T_BG_Types_Pkg outTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L33 */
  static kcg_bool _L33_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L32 */
  static kcg_bool _L32_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L31 */
  static kcg_bool _L31_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L30 */
  static kcg_int _L30_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L29 */
  static kcg_int _L29_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L27 */
  static kcg_bool _L27_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L21 */
  static array_bool_8 _L219_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L20 */
  static Telegram_T_BG_Types_Pkg _L20_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L16 */
  static TelegramArray_T_BG_Types_Pkg _L16_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L17 */
  static Telegram_T_BG_Types_Pkg _L1710_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L15 */
  static TelegramArray_T_BG_Types_Pkg _L1511_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L14 */
  static kcg_int _L14_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L13 */
  static TelegramArray_T_BG_Types_Pkg _L13_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L9 */
  static kcg_bool _L912_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L8 */
  static kcg_bool _L813_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L5 */
  static kcg_int _L5_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L4 */
  static kcg_int _L4_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L1 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L114_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = doUpdate;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L9_IfBlock1,
      inCollector);
    _L3_IfBlock1 = _L9_IfBlock1.badBaliseFlag;
    _L54_IfBlock1 = _L9_IfBlock1.BGMessageSent;
    _L53_IfBlock1 = _L9_IfBlock1.C_ID;
    _L52_IfBlock1 = _L9_IfBlock1.BG_ID;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L51_IfBlock1,
      &_L9_IfBlock1.balisePosition);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L45_IfBlock1, newTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L17_IfBlock1, inPosition);
    /* 1 */
    setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
      &_L51_IfBlock1,
      &_L45_IfBlock1,
      &_L17_IfBlock1,
      &_L15_IfBlock1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L50_IfBlock1,
      &_L9_IfBlock1.positionFirstContact);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L47_IfBlock1, inPosition);
    /* 1 */
    setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
      &_L50_IfBlock1,
      &_L47_IfBlock1,
      &_L46_IfBlock1);
    _L49_IfBlock1 = _L9_IfBlock1.collectedTelegrams;
    _L8_IfBlock1 = 1;
    _L1_IfBlock1 = _L49_IfBlock1 + _L8_IfBlock1;
    _L48_IfBlock1 = _L9_IfBlock1.totalTelegrams;
    _L6_IfBlock1.badBaliseFlag = _L3_IfBlock1;
    _L6_IfBlock1.BGMessageSent = _L54_IfBlock1;
    _L6_IfBlock1.C_ID = _L53_IfBlock1;
    _L6_IfBlock1.BG_ID = _L52_IfBlock1;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L6_IfBlock1.balisePosition,
      &_L15_IfBlock1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L6_IfBlock1.positionFirstContact,
      &_L46_IfBlock1);
    _L6_IfBlock1.collectedTelegrams = _L1_IfBlock1;
    _L6_IfBlock1.totalTelegrams = _L48_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_5_outCollector,
      &_L6_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      _18_outCollector,
      &_5_outCollector);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L41_IfBlock1, newTelegram);
    /* pow */ for (i1 = 0; i1 < 8; i1++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L37_IfBlock1[i1], &_L41_IfBlock1);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L39_IfBlock1, inoldTelegramArray);
    _L40_IfBlock1 = doUpdate;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &_L55_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    if (_L40_IfBlock1) {
      for (i = 0; i < 8; i++) {
        /* 3 */
        setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &_L37_IfBlock1[i],
          &_L39_IfBlock1[i],
          &cond_iterw,
          &_L36_IfBlock1[i]);
        _L35_IfBlock1 = i + 1;
        if (!cond_iterw) {
          break;
        }
      }
    }
    else {
      _L35_IfBlock1 = 0;
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L35_IfBlock1; i < 8; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L36_IfBlock1[i], &_L55_IfBlock1);
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_6_outTelegramArray, &_L36_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      _17_outTelegramArray,
      &_6_outTelegramArray);
    _L21_IfBlock1 = _L1_IfBlock1 >= _L48_IfBlock1;
    _7_outBGisComplete = _L21_IfBlock1;
    *_16_outBGisComplete = _7_outBGisComplete;
    _8_outIsDuplicate = kcg_false;
    *_15_outIsDuplicate = _8_outIsDuplicate;
    noname = _L35_IfBlock1;
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L114_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &_L114_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      _18_outCollector,
      &outCollector);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L1710_IfBlock1, newTelegram);
    /* pow */ for (i4 = 0; i4 < 8; i4++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L16_IfBlock1[i4], &_L1710_IfBlock1);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L13_IfBlock1, inoldTelegramArray);
    _L18_IfBlock1 = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &_L20_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    _L22_IfBlock1 = kcg_false;
    if (_L18_IfBlock1) {
      for (i2 = 0; i2 < 8; i2++) {
        /* 1 */
        replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &_L16_IfBlock1[i2],
          &_L13_IfBlock1[i2],
          &_3_cond_iterw,
          &_L1511_IfBlock1[i2],
          &_L219_IfBlock1[i2]);
        _L14_IfBlock1 = i2 + 1;
        if (!_3_cond_iterw) {
          break;
        }
      }
    }
    else {
      _L14_IfBlock1 = 0;
    }
#ifdef KCG_MAPW_CPY
    
    for (i2 = _L14_IfBlock1; i2 < 8; i2++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L1511_IfBlock1[i2], &_L20_IfBlock1);
      _L219_IfBlock1[i2] = _L22_IfBlock1;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outTelegramArray, &_L1511_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      _17_outTelegramArray,
      &outTelegramArray);
    _L31_IfBlock1 = kcg_false;
    _L30_IfBlock1 = 1;
    _L29_IfBlock1 = _L14_IfBlock1 - _L30_IfBlock1;
    if ((0 <= _L29_IfBlock1) & (_L29_IfBlock1 < 8)) {
      _L27_IfBlock1 = _L219_IfBlock1[_L29_IfBlock1];
    }
    else {
      _L27_IfBlock1 = _L31_IfBlock1;
    }
    _L33_IfBlock1 = !_L27_IfBlock1;
    _L4_IfBlock1 = _L114_IfBlock1.collectedTelegrams;
    _L5_IfBlock1 = _L114_IfBlock1.totalTelegrams;
    _L813_IfBlock1 = _L4_IfBlock1 >= _L5_IfBlock1;
    _L912_IfBlock1 = _L114_IfBlock1.BGMessageSent;
    _L10_IfBlock1 = !_L912_IfBlock1;
    _L11_IfBlock1 = _L813_IfBlock1 & _L10_IfBlock1;
    _L32_IfBlock1 = _L33_IfBlock1 & _L11_IfBlock1;
    outBGisComplete = _L32_IfBlock1;
    *_16_outBGisComplete = outBGisComplete;
    outIsDuplicate = _L27_IfBlock1;
    *_15_outIsDuplicate = outIsDuplicate;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

