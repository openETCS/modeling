/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2 */
void connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connectionCmd */ mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileConnectionContext */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileRegistrationStatus */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileConnectionCmd */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::rejectOrderToContactRBC_or_RIU */ kcg_bool *rejectOrderToContactRBC_or_RIU)
{
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _1_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::then::_L1 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L1_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _5_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::else::else::then::_L1 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L111_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _4_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::else::else::else::else::_L1 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L113_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _6_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::else::else::else::then::_L1 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L112_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _7_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _2_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1::else::then::_L1 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L110_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _3_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connect */
  static kcg_bool connect;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::disconnect */
  static kcg_bool disconnect;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::enterHole */
  static kcg_bool enterHole;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::leaveHole */
  static kcg_bool leaveHole;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::action */
  static mobileConnetionAction_T_RCM_Types_Pkg _14_action;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L354 */
  static kcg_bool _L354;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L355 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L355;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L356 */
  static kcg_bool _L356;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L357 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L357;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L358 */
  static kcg_bool _L358;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L359 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L359;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L360 */
  static kcg_bool _L360;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L362 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L362;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L363 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L363;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L364 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L364;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L365 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L365;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L366 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L366;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L367 */
  static kcg_bool _L367;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L368 */
  static kcg_bool _L368;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L370 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L370;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L371 */
  static kcg_bool _L371;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L372 */
  static kcg_bool _L372;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L373 */
  static kcg_bool _L373;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L374 */
  static kcg_bool _L374;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L375 */
  static kcg_bool _L375;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L376 */
  static kcg_bool _L376;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L377 */
  static kcg_bool _L377;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L379 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L379;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L380 */
  static kcg_bool _L380;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L381 */
  static kcg_bool _L381;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L382 */
  static kcg_bool _L382;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L383 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L383;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L384 */
  static kcg_bool _L384;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L385 */
  static kcg_bool _L385;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L386 */
  static kcg_bool _L386;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L387 */
  static kcg_bool _L387;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L388 */
  static kcg_bool _L388;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L389 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L389;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L390 */
  static kcg_int _L390;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L391 */
  static NID_RADIO _L391;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L392 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L392;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L393 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L393;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L394 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L394;
  
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&_L370, connectionCmd);
  _L354 = _L370.valid;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L355,
    mobileRegistrationStatus);
  _L356 = _L355.valid;
  _L357 = _L355.status;
  _L359 = mrs_registered_RCM_Types_Pkg;
  _L358 = _L359 == _L357;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L379,
    mobileConnectionContext);
  _L380 = _L379.valid;
  _L377 = _L356 & _L380 & _L354;
  _L360 = _L358 & _L377;
  _L362 = mca_connect_RCM_Types_Pkg;
  _L363 = mca_disconnect_RCM_Types_Pkg;
  _L364 = mca_expectRadioHole_RCM_Types_Pkg;
  _L365 = mca_unexpectRadioHole_RCM_Types_Pkg;
  _L366 = _L370.action;
  _L367 = _L366 == _L362;
  _L368 = _L366 == _L363;
  _L371 = _L360 & _L367;
  _L372 = _L360 & _L368;
  disconnect = _L372;
  connect = _L371;
  _L373 = _L366 == _L364;
  _L374 = _L366 == _L365;
  _L375 = _L377 & _L373;
  _L376 = _L377 & _L374;
  enterHole = _L375;
  leaveHole = _L376;
  _L382 = !_L358;
  _L381 = _L382 & _L356 & _L380;
  *rejectOrderToContactRBC_or_RIU = _L381;
  _L384 = connect;
  _L385 = disconnect;
  _L386 = enterHole;
  _L387 = leaveHole;
  _L388 = _L384 | _L385 | _L386 | _L387;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L389,
    mobileConnectionContext);
  _L390 = _L389.mobileDeviceNo;
  IfBlock1_clock = connect;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = mca_connect_RCM_Types_Pkg;
    _1_action = _L1_IfBlock1;
    _14_action = _1_action;
  }
  else {
    _9_else_clock_IfBlock1 = disconnect;
    /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
      _L110_IfBlock1 = mca_disconnect_RCM_Types_Pkg;
      _3_action = _L110_IfBlock1;
      action = _3_action;
    }
    else {
      _8_else_clock_IfBlock1 = enterHole;
      /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
        _L111_IfBlock1 = mca_expectRadioHole_RCM_Types_Pkg;
        _5_action = _L111_IfBlock1;
        _2_action = _5_action;
      }
      else {
        else_clock_IfBlock1 = leaveHole;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L112_IfBlock1 = mca_unexpectRadioHole_RCM_Types_Pkg;
          _7_action = _L112_IfBlock1;
          _4_action = _7_action;
        }
        else {
          _L113_IfBlock1 = mca_nop_RCM_Types_Pkg;
          _6_action = _L113_IfBlock1;
          _4_action = _6_action;
        }
        _2_action = _4_action;
      }
      action = _2_action;
    }
    _14_action = action;
  }
  _L393 = _14_action;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&_L392, connectionCmd);
  _L391 = _L392.nid_radio;
  _L383.valid = _L388;
  _L383.mobileDeviceNo = _L390;
  _L383.action = _L393;
  _L383.nid_radio = _L391;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(mobileConnectionCmd, &_L383);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L394,
    mobileConnectionContext);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(connectionStatus, &_L394);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

