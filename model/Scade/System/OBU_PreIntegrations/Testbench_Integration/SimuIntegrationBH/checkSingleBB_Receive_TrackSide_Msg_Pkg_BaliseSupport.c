/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB */
void checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inTelegram */ Telegram_T_BG_Types_Pkg *inTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  static kcg_bool noname;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L2 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L3 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L3;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L14 */
  static kcg_bool _L14;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L15 */
  static kcg_int _L15;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L16 */
  static kcg_bool _L16;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L17 */
  static kcg_int _L17;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L18 */
  static Telegram_T_BG_Types_Pkg _L18;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L19 */
  static kcg_bool _L19;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L20 */
  static kcg_bool _L20;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L21 */
  static kcg_bool _L21;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L22 */
  static kcg_bool _L22;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L30 */
  static kcg_bool _L30;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L29 */
  static kcg_bool _L29;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L28 */
  static NID_C _L28;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L27 */
  static NID_BG _L27;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L26 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L26;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L25 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L25;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L24 */
  static kcg_int _L24;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L23 */
  static kcg_int _L23;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L2, inCollector);
  _L30 = _L2.badBaliseFlag;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L18, inTelegram);
  _L19 = _L18.valid;
  _L20 = !_L19;
  _L14 = _L2.BGMessageSent;
  _L21 = !_L14;
  _L15 = _L2.collectedTelegrams;
  _L17 = 0;
  _L16 = _L15 == _L17;
  _L22 = _L20 & _L21 & _L16;
  _L28 = _L2.C_ID;
  _L27 = _L2.BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L26, &_L2.balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L25,
    &_L2.positionFirstContact);
  _L24 = _L2.collectedTelegrams;
  _L23 = _L2.totalTelegrams;
  _L3.badBaliseFlag = _L30;
  _L3.BGMessageSent = _L22;
  _L3.C_ID = _L28;
  _L3.BG_ID = _L27;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L3.balisePosition, &_L26);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L3.positionFirstContact,
    &_L25);
  _L3.collectedTelegrams = _L24;
  _L3.totalTelegrams = _L23;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, &_L3);
  _L29 = _L2.BGMessageSent;
  noname = _L29;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

