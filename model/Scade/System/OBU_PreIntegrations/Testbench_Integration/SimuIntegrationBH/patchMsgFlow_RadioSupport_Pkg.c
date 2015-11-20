/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchMsgFlow_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::patchMsgFlow */
void patchMsgFlow_RadioSupport_Pkg(
  /* RadioSupport_Pkg::patchMsgFlow::fromEVC */ M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* RadioSupport_Pkg::patchMsgFlow::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* RadioSupport_Pkg::patchMsgFlow::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* RadioSupport_Pkg::patchMsgFlow::toRBC */ M_TrainTrack_Message_T_TM_radio_messages *toRBC)
{
  /* RadioSupport_Pkg::patchMsgFlow::reset136 */
  static kcg_bool reset136;
  /* RadioSupport_Pkg::patchMsgFlow::reset132 */
  static kcg_bool reset132;
  /* RadioSupport_Pkg::patchMsgFlow::_L1 */
  static M_TrainTrack_Message_T_TM_radio_messages _L1;
  /* RadioSupport_Pkg::patchMsgFlow::_L2 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L2;
  /* RadioSupport_Pkg::patchMsgFlow::_L3 */
  static kcg_bool _L3;
  /* RadioSupport_Pkg::patchMsgFlow::_L12 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L12;
  /* RadioSupport_Pkg::patchMsgFlow::_L10 */
  static kcg_bool _L10;
  /* RadioSupport_Pkg::patchMsgFlow::_L9 */
  static kcg_bool _L9;
  /* RadioSupport_Pkg::patchMsgFlow::_L8 */
  static M_LEVEL _L8;
  /* RadioSupport_Pkg::patchMsgFlow::_L7 */
  static kcg_bool _L7;
  /* RadioSupport_Pkg::patchMsgFlow::_L6 */
  static kcg_bool _L6;
  /* RadioSupport_Pkg::patchMsgFlow::_L5 */
  static M_LEVEL _L5;
  /* RadioSupport_Pkg::patchMsgFlow::_L4 */
  static M_LEVEL _L4;
  /* RadioSupport_Pkg::patchMsgFlow::_L13 */
  static kcg_int _L13;
  /* RadioSupport_Pkg::patchMsgFlow::_L14 */
  static NID_MESSAGE _L14;
  /* RadioSupport_Pkg::patchMsgFlow::_L15 */
  static NID_MESSAGE _L15;
  /* RadioSupport_Pkg::patchMsgFlow::_L16 */
  static kcg_bool _L16;
  /* RadioSupport_Pkg::patchMsgFlow::_L17 */
  static kcg_bool _L17;
  /* RadioSupport_Pkg::patchMsgFlow::_L18 */
  static kcg_bool _L18;
  /* RadioSupport_Pkg::patchMsgFlow::_L19 */
  static M_TrainTrack_Message_T_TM_radio_messages _L19;
  /* RadioSupport_Pkg::patchMsgFlow::_L28 */
  static kcg_int _L28;
  /* RadioSupport_Pkg::patchMsgFlow::_L27 */
  static M_TrainTrack_Message_T_TM_radio_messages _L27;
  /* RadioSupport_Pkg::patchMsgFlow::_L26 */
  static kcg_bool _L26;
  /* RadioSupport_Pkg::patchMsgFlow::_L25 */
  static kcg_bool _L25;
  /* RadioSupport_Pkg::patchMsgFlow::_L22 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L22;
  /* RadioSupport_Pkg::patchMsgFlow::_L21 */
  static kcg_bool _L21;
  /* RadioSupport_Pkg::patchMsgFlow::_L30 */
  static kcg_bool _L30;
  /* RadioSupport_Pkg::patchMsgFlow::_L31 */
  static kcg_bool _L31;
  /* RadioSupport_Pkg::patchMsgFlow::_L32 */
  static kcg_bool _L32;
  /* RadioSupport_Pkg::patchMsgFlow::_L33 */
  static kcg_bool _L33;
  /* RadioSupport_Pkg::patchMsgFlow::_L34 */
  static M_TrainTrack_Message_T_TM_radio_messages _L34;
  /* RadioSupport_Pkg::patchMsgFlow::_L35 */
  static M_TrainTrack_Message_T_TM_radio_messages _L35;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L1, fromEVC);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L2, &_L1.Message);
  _L3 = _L2.valid;
  _L4 = M_LEVEL_Level_2;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L12, inModeAndLevel);
  _L5 = _L12.level;
  _L8 = M_LEVEL_Level_3;
  _L6 = _L8 == _L5;
  _L9 = _L5 == _L4;
  _L7 = _L6 | _L9;
  _L10 = insafeSessionEstablished;
  _L13 = _L2.nid_message;
  _L14 = co132_MA_Request_Id_Pkg;
  _L15 = co136_Train_Position_Report_Id_Pkg;
  _L16 = _L13 == _L15;
  _L18 = !_L10;
  _L17 = _L3 & _L16 & _L18;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L19,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  reset136 = _L17;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L27, fromEVC);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L22, &_L27.Message);
  _L28 = _L22.nid_message;
  _L21 = _L28 == _L14;
  _L25 = _L22.valid;
  _L30 = !_L7;
  _L26 = _L25 & _L21 & _L30;
  reset132 = _L26;
  _L31 = reset132;
  _L32 = reset136;
  _L33 = _L31 | _L32;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L35, fromEVC);
  /* 1 */ if (_L33) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L34, &_L19);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L34, &_L35);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(toRBC, &_L34);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** patchMsgFlow_RadioSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

