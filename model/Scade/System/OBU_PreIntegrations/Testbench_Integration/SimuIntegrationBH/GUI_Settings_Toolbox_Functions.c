/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GUI_Settings_Toolbox_Functions.h"

/* Toolbox::Functions::GUI_Settings */
void GUI_Settings_Toolbox_Functions(
  /* Toolbox::Functions::GUI_Settings::mode */ kcg_int mode,
  /* Toolbox::Functions::GUI_Settings::level */ kcg_int level,
  /* Toolbox::Functions::GUI_Settings::mobileHWStatus */ kcg_int mobileHWStatus,
  /* Toolbox::Functions::GUI_Settings::directionIn */ kcg_int directionIn,
  /* Toolbox::Functions::GUI_Settings::cabStatusIin */ kcg_bool cabStatusIin,
  /* Toolbox::Functions::GUI_Settings::modeOut */ M_MODE *modeOut,
  /* Toolbox::Functions::GUI_Settings::levelOut */ M_LEVEL *levelOut,
  /* Toolbox::Functions::GUI_Settings::mobileHWStatusOut */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatusOut,
  /* Toolbox::Functions::GUI_Settings::directionOut */ M_directioncontroller_signal_status_T_TIU_Types_Pkg *directionOut,
  /* Toolbox::Functions::GUI_Settings::cabStatusOut */ M_cab_signal_status_T_TIU_Types_Pkg *cabStatusOut,
  /* Toolbox::Functions::GUI_Settings::apiConnectionStatus */ connectionStatusRadioUnit_T_API_RadioCommunication_Pkg *apiConnectionStatus)
{
  /* Toolbox::Functions::GUI_Settings::_L1 */
  static M_MODE _L1;
  /* Toolbox::Functions::GUI_Settings::_L2 */
  static kcg_int _L2;
  /* Toolbox::Functions::GUI_Settings::_L3 */
  static M_MODE _L3;
  /* Toolbox::Functions::GUI_Settings::_L4 */
  static M_MODE _L4;
  /* Toolbox::Functions::GUI_Settings::_L5 */
  static M_MODE _L5;
  /* Toolbox::Functions::GUI_Settings::_L6 */
  static M_MODE _L6;
  /* Toolbox::Functions::GUI_Settings::_L7 */
  static M_MODE _L7;
  /* Toolbox::Functions::GUI_Settings::_L8 */
  static M_MODE _L8;
  /* Toolbox::Functions::GUI_Settings::_L9 */
  static M_MODE _L9;
  /* Toolbox::Functions::GUI_Settings::_L10 */
  static M_LEVEL _L10;
  /* Toolbox::Functions::GUI_Settings::_L11 */
  static kcg_int _L11;
  /* Toolbox::Functions::GUI_Settings::_L12 */
  static M_LEVEL _L12;
  /* Toolbox::Functions::GUI_Settings::_L13 */
  static M_LEVEL _L13;
  /* Toolbox::Functions::GUI_Settings::_L14 */
  static M_LEVEL _L14;
  /* Toolbox::Functions::GUI_Settings::_L15 */
  static M_LEVEL _L15;
  /* Toolbox::Functions::GUI_Settings::_L16 */
  static M_LEVEL _L16;
  /* Toolbox::Functions::GUI_Settings::_L17 */
  static M_LEVEL _L17;
  /* Toolbox::Functions::GUI_Settings::_L18 */
  static mobileHWStatus_Type_MoRC_Pck _L18;
  /* Toolbox::Functions::GUI_Settings::_L19 */
  static kcg_int _L19;
  /* Toolbox::Functions::GUI_Settings::_L20 */
  static mobileHWStatus_Type_MoRC_Pck _L20;
  /* Toolbox::Functions::GUI_Settings::_L21 */
  static mobileHWStatus_Type_MoRC_Pck _L21;
  /* Toolbox::Functions::GUI_Settings::_L22 */
  static mobileHWStatus_Type_MoRC_Pck _L22;
  /* Toolbox::Functions::GUI_Settings::_L23 */
  static mobileHWStatus_Type_MoRC_Pck _L23;
  /* Toolbox::Functions::GUI_Settings::_L24 */
  static mobileHWStatus_Type_MoRC_Pck _L24;
  /* Toolbox::Functions::GUI_Settings::_L25 */
  static kcg_int _L25;
  /* Toolbox::Functions::GUI_Settings::_L26 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L26;
  /* Toolbox::Functions::GUI_Settings::_L27 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L27;
  /* Toolbox::Functions::GUI_Settings::_L28 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L28;
  /* Toolbox::Functions::GUI_Settings::_L29 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L29;
  /* Toolbox::Functions::GUI_Settings::_L30 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L30;
  /* Toolbox::Functions::GUI_Settings::_L31 */
  static kcg_bool _L31;
  /* Toolbox::Functions::GUI_Settings::_L39 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L39;
  /* Toolbox::Functions::GUI_Settings::_L40 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L40;
  /* Toolbox::Functions::GUI_Settings::_L41 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L41;
  /* Toolbox::Functions::GUI_Settings::_L55 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L55;
  /* Toolbox::Functions::GUI_Settings::_L54 */
  static kcg_int _L54;
  /* Toolbox::Functions::GUI_Settings::_L53 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L53;
  /* Toolbox::Functions::GUI_Settings::_L51 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L51;
  /* Toolbox::Functions::GUI_Settings::_L50 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L50;
  /* Toolbox::Functions::GUI_Settings::_L49 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L49;
  /* Toolbox::Functions::GUI_Settings::_L57 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L57;
  
  _L2 = mode;
  _L3 = M_MODE_Full_Supervision;
  _L4 = M_MODE_Limited_Supervision;
  _L5 = M_MODE_No_Power;
  _L6 = M_MODE_Stand_By;
  _L8 = M_MODE_Sleeping;
  _L7 = M_MODE_Staff_Responsible;
  _L9 = M_MODE_System_Failure;
  switch (_L2) {
    case 0 :
      _L1 = _L3;
      break;
    case 1 :
      _L1 = _L4;
      break;
    case 2 :
      _L1 = _L5;
      break;
    case 3 :
      _L1 = _L6;
      break;
    case 4 :
      _L1 = _L8;
      break;
    case 5 :
      _L1 = _L7;
      break;
    
    default :
      _L1 = _L9;
  }
  *modeOut = _L1;
  _L11 = level;
  _L12 = M_LEVEL_Level_0;
  _L13 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L14 = M_LEVEL_Level_1;
  _L15 = M_LEVEL_Level_2;
  _L16 = M_LEVEL_Level_3;
  _L17 = M_LEVEL_Level_0;
  switch (_L11) {
    case 0 :
      _L10 = _L12;
      break;
    case 1 :
      _L10 = _L13;
      break;
    case 2 :
      _L10 = _L14;
      break;
    case 3 :
      _L10 = _L15;
      break;
    case 4 :
      _L10 = _L16;
      break;
    
    default :
      _L10 = _L17;
  }
  *levelOut = _L10;
  _L19 = mobileHWStatus;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &_L21,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &_L20,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &_L23,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Disconnected_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &_L22,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &_L24,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
  switch (_L19) {
    case 0 :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&_L18, &_L21);
      break;
    case 1 :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&_L18, &_L20);
      break;
    case 2 :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&_L18, &_L23);
      break;
    case 3 :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&_L18, &_L22);
      break;
    
    default :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&_L18, &_L24);
  }
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(mobileHWStatusOut, &_L18);
  _L25 = directionIn;
  _L27 = direction_controller_in_neutral_TIU_Types_Pkg;
  _L29 = direction_controller_in_forward_TIU_Types_Pkg;
  _L30 = direction_controller_in_backward_TIU_Types_Pkg;
  _L28 = direction_controller_in_neutral_TIU_Types_Pkg;
  switch (_L25) {
    case 1 :
      _L26 = _L27;
      break;
    case 2 :
      _L26 = _L29;
      break;
    case 3 :
      _L26 = _L30;
      break;
    
    default :
      _L26 = _L28;
  }
  *directionOut = _L26;
  _L31 = cabStatusIin;
  _L40 = desk_A_is_open_TIU_Types_Pkg;
  _L41 = both_desks_are_closed_TIU_Types_Pkg;
  /* 1 */ if (_L31) {
    _L39 = _L40;
  }
  else {
    _L39 = _L41;
  }
  *cabStatusOut = _L39;
  _L49 = conn_ConnectionUp_API_RadioCommunication_Pkg;
  _L50 = conn_no_connection_API_RadioCommunication_Pkg;
  _L51 = conn_unknown_API_RadioCommunication_Pkg;
  _L53 = conn_no_connection_API_RadioCommunication_Pkg;
  _L54 = mobileHWStatus;
  _L57 = conn_no_connection_API_RadioCommunication_Pkg;
  switch (_L54) {
    case 1 :
      _L55 = _L53;
      break;
    case 2 :
      _L55 = _L50;
      break;
    case 3 :
      _L55 = _L57;
      break;
    case 4 :
      _L55 = _L49;
      break;
    
    default :
      _L55 = _L51;
  }
  *apiConnectionStatus = _L55;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GUI_Settings_Toolbox_Functions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

