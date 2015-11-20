/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition */
void setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::inOldPosition */ centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::outUpdateBGPosition */ centerOfBalisePosition_T_BG_Types_Pkg *outUpdateBGPosition)
{
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L2 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L3 */
  static N_PIG _L3;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L4 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L4;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L5 */
  static kcg_bool _L5;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L6 */
  static N_PIG _L6;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L7 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L7;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L9 */
  static kcg_bool _L9;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L8 */
  static N_PIG _L8;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L10 */
  static M_DUP _L10;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L11 */
  static M_DUP _L11;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L12 */
  static kcg_bool _L12;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L13 */
  static kcg_bool _L13;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L14 */
  static kcg_bool _L14;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L16 */
  static kcg_bool _L16;
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L18 */
  static kcg_bool _L18;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, newTelegram);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L2, inOldPosition);
  _L10 = _L1.telegramheader.m_dup;
  _L11 = M_DUP_No_duplicates;
  _L12 = _L10 != _L11;
  _L8 = N_PIG_I_am_the_2nd;
  _L3 = _L1.telegramheader.n_pig;
  _L9 = _L8 == _L3;
  _L18 = _L2.odometerOfBaliseDetection.valid;
  _L16 = !_L18;
  _L13 = _L12 & _L9 & _L16;
  _L6 = N_PIG_I_am_the_1st;
  _L5 = _L3 == _L6;
  _L14 = _L13 | _L5;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L4,
    incenterOfBalisePosition);
  /* 1 */ if (_L14) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L7, &_L4);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L7, &_L2);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(outUpdateBGPosition, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

