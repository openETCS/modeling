/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BTM_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::BTM */
void BTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::BTM::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::BTM::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Toolbox::TrainModules::BTM::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::BTM::TelegramHeader */ TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  /* Toolbox::TrainModules::BTM::TrackMessage */ API_TrackSideInput_T_API_Msg_Pkg *TrackMessage)
{
  /* Toolbox::TrainModules::BTM::_L4 */
  static API_TrackSideInput_T_API_Msg_Pkg _L4;
  /* Toolbox::TrainModules::BTM::_L5 */
  static API_TelegramHeader_T_API_Msg_Pkg _L5;
  /* Toolbox::TrainModules::BTM::_L6 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* Toolbox::TrainModules::BTM::_L16 */
  static kcg_bool _L16;
  /* Toolbox::TrainModules::BTM::_L17 */
  static kcg_bool _L17;
  /* Toolbox::TrainModules::BTM::_L18 */
  static odometry_T_Obu_BasicTypes_Pkg _L18;
  /* Toolbox::TrainModules::BTM::_L20 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L20;
  /* Toolbox::TrainModules::BTM::_L22 */
  static NID_C _L22;
  /* Toolbox::TrainModules::BTM::_L23 */
  static kcg_bool _L23;
  /* Toolbox::TrainModules::BTM::_L24 */
  static kcg_int _L24;
  /* Toolbox::TrainModules::BTM::_L25 */
  static MsgSource_T_Common_Types_Pkg _L25;
  /* Toolbox::TrainModules::BTM::_L26 */
  static MsgSource_T_Common_Types_Pkg _L26;
  /* Toolbox::TrainModules::BTM::_L27 */
  static MsgSource_T_Common_Types_Pkg _L27;
  /* Toolbox::TrainModules::BTM::_L28 */
  static TelegramHeader_T_BG_Types_Pkg _L28;
  /* Toolbox::TrainModules::BTM::_L29 */
  static TelegramHeader_T_BG_Types_Pkg _L29;
  /* Toolbox::TrainModules::BTM::_L30 */
  static CompressedPackets_T_Common_Types_Pkg _L30;
  /* Toolbox::TrainModules::BTM::_L32 */
  static API_RadioMsgHeader_T_API_Msg_Pkg _L32;
  /* Toolbox::TrainModules::BTM::_L33 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L33;
  /* Toolbox::TrainModules::BTM::_L34 */
  static kcg_int _L34;
  /* Toolbox::TrainModules::BTM::_L35 */
  static kcg_int _L35;
  
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L29, TelegramHeader);
  _L22 = _L29.nid_c;
  _L24 = 0;
  _L23 = _L22 != _L24;
  _L6 = systemTime;
  _L26 = msrc_Eurobalise_Common_Types_Pkg;
  _L27 = msrc_undefined_Common_Types_Pkg;
  /* 1 */ if (_L23) {
    _L25 = _L26;
  }
  else {
    _L25 = _L27;
  }
  _L16 = kcg_true;
  _L17 = kcg_false;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L28, TelegramHeader);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L18, odometry);
  _L34 = - 10;
  _L35 = 10;
  /* 1 */ ODO_doLocInacc_Toolbox_Functions(_L34, _L35, &_L33);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &_L20.odometerOfBaliseDetection,
    &_L18);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L20.BG_centerDetectionInaccuraccuracies,
    &_L33);
  _L5.present = _L23;
  _L5.checkResult = _L16;
  _L5.api_bad_balise_received = _L17;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L5.api_header, &_L28);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L5.centerOfBalisePosition,
    &_L20);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(
    &_L32,
    (API_RadioMsgHeader_T_API_Msg_Pkg *) &cEmptyRadioMsgHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L30, Packets);
  _L4.valid = _L23;
  _L4.systemTimeMsgReceived = _L6;
  _L4.msg_type = _L25;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&_L4.btm_msg, &_L5);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&_L4.rtm_msg, &_L32);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L4.packets, &_L30);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(TrackMessage, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BTM_Toolbox_TrainModules.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

