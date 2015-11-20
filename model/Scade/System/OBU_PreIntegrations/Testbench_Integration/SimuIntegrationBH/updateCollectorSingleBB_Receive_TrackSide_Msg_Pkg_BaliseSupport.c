/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB */
void updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inSingleBadBalise */ kcg_bool inSingleBadBalise,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L1 */
  static kcg_bool _L1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L2 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L3 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L3;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L11 */
  static kcg_bool _L11;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L10 */
  static kcg_bool _L10;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L9 */
  static NID_C _L9;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L8 */
  static NID_BG _L8;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L7 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L7;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L6 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L6;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L5 */
  static kcg_int _L5;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L4 */
  static kcg_int _L4;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L12 */
  static kcg_bool _L12;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L13 */
  static kcg_bool _L13;
  
  _L1 = inSingleBadBalise;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L2, inCollector);
  _L13 = kcg_false;
  _L11 = _L2.badBaliseFlag;
  /* 1 */ if (_L1) {
    _L12 = _L13;
  }
  else {
    _L12 = _L11;
  }
  _L10 = _L2.BGMessageSent;
  _L9 = _L2.C_ID;
  _L8 = _L2.BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L7, &_L2.balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L6,
    &_L2.positionFirstContact);
  _L5 = _L2.collectedTelegrams;
  _L4 = _L2.totalTelegrams;
  _L3.badBaliseFlag = _L12;
  _L3.BGMessageSent = _L10;
  _L3.C_ID = _L9;
  _L3.BG_ID = _L8;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L3.balisePosition, &_L7);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L3.positionFirstContact,
    &_L6);
  _L3.collectedTelegrams = _L5;
  _L3.totalTelegrams = _L4;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

