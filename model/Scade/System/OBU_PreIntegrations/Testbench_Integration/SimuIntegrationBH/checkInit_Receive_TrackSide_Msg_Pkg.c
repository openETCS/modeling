/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkInit */
void checkInit_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkInit::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkInit::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *_2_outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _1_outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1::then::_L1 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L1_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1::else::_L20 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L20_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1::else::_L19 */
  static Telegram_T_BG_Types_Pkg _L19_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Receive_TrackSide_Msg_Pkg::checkInit::isDefined */
  static kcg_bool isDefined;
  /* Receive_TrackSide_Msg_Pkg::checkInit::_L2 */
  static kcg_int _L2;
  /* Receive_TrackSide_Msg_Pkg::checkInit::_L4 */
  static kcg_int _L4;
  /* Receive_TrackSide_Msg_Pkg::checkInit::_L6 */
  static kcg_bool _L6;
  /* Receive_TrackSide_Msg_Pkg::checkInit::_L8 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L8;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L8, inCollector);
  _L2 = _L8.totalTelegrams;
  _L4 = 0;
  _L6 = _L2 > _L4;
  isDefined = _L6;
  IfBlock1_clock = isDefined;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L1_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_1_outCollector,
      &_L1_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      _2_outCollector,
      &_1_outCollector);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L19_IfBlock1, newTelegram);
    /* 1 */
    initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &_L19_IfBlock1,
      &_L20_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &_L20_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      _2_outCollector,
      &outCollector);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkInit_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

