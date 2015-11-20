/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition */
void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::inOldPosition */ centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::outUpdateBGPosition */ centerOfBalisePosition_T_BG_Types_Pkg *outUpdateBGPosition)
{
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L2 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L4 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L4;
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L7 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L7;
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L18 */
  static kcg_bool _L18;
  
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L2, inOldPosition);
  _L18 = _L2.odometerOfBaliseDetection.valid;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L4,
    incenterOfBalisePosition);
  /* 1 */ if (_L18) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L7, &_L2);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L7, &_L4);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(outUpdateBGPosition, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

