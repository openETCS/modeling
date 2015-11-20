/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector */
void initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L11 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L11;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L10 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L10;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L9 */
  static kcg_bool _L9;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L8 */
  static NID_C _L8;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L7 */
  static kcg_int _L7;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L6 */
  static TelegramHeader_T_BG_Types_Pkg _L6;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L5 */
  static kcg_int _L5;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L4 */
  static N_TOTAL _L4;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L3 */
  static NID_BG _L3;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L2 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L1 */
  static kcg_bool _L1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L12 */
  static Telegram_T_BG_Types_Pkg _L12;
  
  _L1 = kcg_true;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L2,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L12, newTelegram);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L6, &_L12.telegramheader);
  _L3 = _L6.nid_bg;
  _L4 = _L6.n_total;
  _L5 = /* 1 */ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(_L4);
  _L7 = 0;
  _L8 = _L6.nid_c;
  _L9 = kcg_false;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L10,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  _L11.badBaliseFlag = _L9;
  _L11.BGMessageSent = _L1;
  _L11.C_ID = _L8;
  _L11.BG_ID = _L3;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L11.balisePosition, &_L10);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L11.positionFirstContact,
    &_L2);
  _L11.collectedTelegrams = _L7;
  _L11.totalTelegrams = _L5;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

