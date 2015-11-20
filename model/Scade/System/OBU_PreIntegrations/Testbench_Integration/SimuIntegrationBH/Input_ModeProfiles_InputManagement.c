/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_ModeProfiles_InputManagement.h"

/* InputManagement::Input_ModeProfiles */
void Input_ModeProfiles_InputManagement(
  /* InputManagement::Input_ModeProfiles::P_80_One_Iter */ P80_ModeProfile_T_Packet_Types_Pkg *P_80_One_Iter,
  /* InputManagement::Input_ModeProfiles::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::Input_ModeProfiles::Mode_Profile_On_Borad */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Borad)
{
  /* InputManagement::Input_ModeProfiles::Loc_Mode_Profile */
  static T_MA_Level_And_Mode_Types_Pkg _1_Loc_Mode_Profile;
  /* InputManagement::Input_ModeProfiles::IfBlock1::then::_L1 */
  static T_MA_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* InputManagement::Input_ModeProfiles::IfBlock1::then::_L2 */
  static T_MA_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* InputManagement::Input_ModeProfiles::IfBlock1::then::_L3 */
  static T_MA_Level_And_Mode_Types_Pkg _L3_IfBlock1;
  /* InputManagement::Input_ModeProfiles::IfBlock1::then::_L4 */
  static T_MA_Level_And_Mode_Types_Pkg _L4_IfBlock1;
  /* InputManagement::Input_ModeProfiles::IfBlock1::then::_L5 */
  static M_MAMODE _L5_IfBlock1;
  /* InputManagement::Input_ModeProfiles::Loc_Mode_Profile */
  static T_MA_Level_And_Mode_Types_Pkg Loc_Mode_Profile;
  /* InputManagement::Input_ModeProfiles::IfBlock1::else::_L1 */
  static T_MA_Level_And_Mode_Types_Pkg _L14_IfBlock1;
  static Q_DIR noname;
  static Q_SCALE _2_noname;
  static Q_MAMODE _3_noname;
  /* InputManagement::Input_ModeProfiles::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* InputManagement::Input_ModeProfiles::Loc_MO_Profile_Available */
  static kcg_bool Loc_MO_Profile_Available;
  /* InputManagement::Input_ModeProfiles::Loc_Mode_Profile */
  static T_MA_Level_And_Mode_Types_Pkg _5_Loc_Mode_Profile;
  /* InputManagement::Input_ModeProfiles::Loc_MAMode */
  static M_MAMODE Loc_MAMode;
  /* InputManagement::Input_ModeProfiles::_L16 */
  static T_MA_Level_And_Mode_Types_Pkg _L16;
  /* InputManagement::Input_ModeProfiles::_L15 */
  static P80_ModeProfile_T_Packet_Types_Pkg _L15;
  /* InputManagement::Input_ModeProfiles::_L14 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L14;
  /* InputManagement::Input_ModeProfiles::_L5 */
  static kcg_bool _L5;
  /* InputManagement::Input_ModeProfiles::_L6 */
  static Q_DIR _L6;
  /* InputManagement::Input_ModeProfiles::_L7 */
  static Q_SCALE _L7;
  /* InputManagement::Input_ModeProfiles::_L8 */
  static D_MAMODE _L8;
  /* InputManagement::Input_ModeProfiles::_L9 */
  static M_MAMODE _L9;
  /* InputManagement::Input_ModeProfiles::_L10 */
  static V_MAMODE _L10;
  /* InputManagement::Input_ModeProfiles::_L11 */
  static L_MAMODE _L11;
  /* InputManagement::Input_ModeProfiles::_L12 */
  static L_ACKMAMODE _L12;
  /* InputManagement::Input_ModeProfiles::_L13 */
  static Q_MAMODE _L13;
  /* InputManagement::Input_ModeProfiles::_L17 */
  static kcg_int _L17;
  /* InputManagement::Input_ModeProfiles::_L18 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L18;
  
  kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(&_L15, P_80_One_Iter);
  _L6 = _L15.q_dir;
  noname = _L6;
  _L5 = _L15.valid;
  Loc_MO_Profile_Available = _L5;
  _L13 = _L15.q_mamode;
  _L12 = _L15.l_ackmamode;
  _L11 = _L15.l_mamode;
  _L10 = _L15.v_mamode;
  _L9 = _L15.m_mamode;
  _L8 = _L15.d_mamode;
  _L7 = _L15.q_scale;
  _L18 = referenceLocation;
  _L17 = _L18 + _L8;
  IfBlock1_clock = Loc_MO_Profile_Available;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _L14_IfBlock1 = No_Profile_Level_And_Mode_Types_Pkg;
    Loc_Mode_Profile = _L14_IfBlock1;
  }
  Loc_MAMode = _L9;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = Loc_MAMode;
    _L1_IfBlock1 = Profile_OS_Level_And_Mode_Types_Pkg;
    _L4_IfBlock1 = Profile_SH_Level_And_Mode_Types_Pkg;
    _L3_IfBlock1 = Profile_LS_Level_And_Mode_Types_Pkg;
    switch (_L5_IfBlock1) {
      case M_MAMODE_On_Sight :
        _L2_IfBlock1 = _L1_IfBlock1;
        break;
      case M_MAMODE_Shunting :
        _L2_IfBlock1 = _L4_IfBlock1;
        break;
      case M_MAMODE_Limited_Supervision :
        _L2_IfBlock1 = _L3_IfBlock1;
        break;
      
    }
    _1_Loc_Mode_Profile = _L2_IfBlock1;
    _5_Loc_Mode_Profile = _1_Loc_Mode_Profile;
  }
  else {
    _5_Loc_Mode_Profile = Loc_Mode_Profile;
  }
  _L16 = _5_Loc_Mode_Profile;
  _L14.Distance = _L17;
  _L14.Mode = _L16;
  _L14.Speed = _L10;
  _L14.Length = _L11;
  _L14.Length_Ack = _L12;
  _2_noname = _L7;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    Mode_Profile_On_Borad,
    &_L14);
  _3_noname = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_ModeProfiles_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

