/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage */
void updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  static kcg_bool noname;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L2 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L3 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L3;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L11 */
  static kcg_bool _L11;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L10 */
  static kcg_bool _L10;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L9 */
  static NID_C _L9;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L8 */
  static NID_BG _L8;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L7 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L7;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L6 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L6;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L5 */
  static kcg_int _L5;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L4 */
  static kcg_int _L4;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L14 */
  static kcg_bool _L14;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L2, inCollector);
  _L11 = _L2.badBaliseFlag;
  _L14 = kcg_true;
  _L9 = _L2.C_ID;
  _L8 = _L2.BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L7, &_L2.balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L6,
    &_L2.positionFirstContact);
  _L5 = _L2.collectedTelegrams;
  _L4 = _L2.totalTelegrams;
  _L3.badBaliseFlag = _L11;
  _L3.BGMessageSent = _L14;
  _L3.C_ID = _L9;
  _L3.BG_ID = _L8;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L3.balisePosition, &_L7);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L3.positionFirstContact,
    &_L6);
  _L3.collectedTelegrams = _L5;
  _L3.totalTelegrams = _L4;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, &_L3);
  _L10 = _L2.BGMessageSent;
  noname = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

