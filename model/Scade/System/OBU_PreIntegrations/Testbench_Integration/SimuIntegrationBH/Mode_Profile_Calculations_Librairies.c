/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mode_Profile_Calculations_Librairies.h"

/* Librairies::Mode_Profile_Calculations */
void Mode_Profile_Calculations_Librairies(
  /* Librairies::Mode_Profile_Calculations::Selected_Mode */ T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Librairies::Mode_Profile_Calculations::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Librairies::Mode_Profile_Calculations::Profile_Mode */ T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Librairies::Mode_Profile_Calculations::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Librairies::Mode_Profile_Calculations::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Librairies::Mode_Profile_Calculations::Max_Safe_Front_In_Mode_Profile */ kcg_bool *Max_Safe_Front_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Supervision_Condition_In_Mode_Profile */ kcg_bool *Supervision_Condition_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Awaited_Mode_Profile */ kcg_bool *Awaited_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Estimated_front_End_In_Ack_Area */ kcg_bool *Estimated_front_End_In_Ack_Area)
{
  /* Librairies::Mode_Profile_Calculations::Condition_Loc */
  static kcg_bool _1_Condition_Loc;
  /* Librairies::Mode_Profile_Calculations::IfBlock2::then::_L1 */
  static kcg_bool _L1_IfBlock2;
  /* Librairies::Mode_Profile_Calculations::Condition_Loc */
  static kcg_bool Condition_Loc;
  /* Librairies::Mode_Profile_Calculations::IfBlock2::else */
  static kcg_bool _6_else_clock_IfBlock2;
  /* Librairies::Mode_Profile_Calculations::Condition_Loc */
  static kcg_bool _5_Condition_Loc;
  /* Librairies::Mode_Profile_Calculations::IfBlock2::else::else::then::_L1 */
  static kcg_bool _L18_IfBlock2;
  /* Librairies::Mode_Profile_Calculations::Condition_Loc */
  static kcg_bool _4_Condition_Loc;
  /* Librairies::Mode_Profile_Calculations::IfBlock2::else::else::else::_L1 */
  static kcg_bool _L19_IfBlock2;
  /* Librairies::Mode_Profile_Calculations::IfBlock2::else::else */
  static kcg_bool else_clock_IfBlock2;
  /* Librairies::Mode_Profile_Calculations::Condition_Loc */
  static kcg_bool _2_Condition_Loc;
  /* Librairies::Mode_Profile_Calculations::IfBlock2::else::then::_L1 */
  static kcg_bool _L17_IfBlock2;
  /* Librairies::Mode_Profile_Calculations::Condition_Loc */
  static kcg_bool _3_Condition_Loc;
  /* Librairies::Mode_Profile_Calculations::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* Librairies::Mode_Profile_Calculations::Valid_Train_Position */
  static kcg_bool Valid_Train_Position;
  /* Librairies::Mode_Profile_Calculations::Estimated_Front_End */
  static Location_T_Obu_BasicTypes_Pkg Estimated_Front_End;
  /* Librairies::Mode_Profile_Calculations::Max_Safe_Front_End */
  static Location_T_Obu_BasicTypes_Pkg Max_Safe_Front_End;
  /* Librairies::Mode_Profile_Calculations::Loc_MP_Distance */
  static Location_T_Obu_BasicTypes_Pkg Loc_MP_Distance;
  /* Librairies::Mode_Profile_Calculations::Loc_MP_Mode */
  static T_MA_Level_And_Mode_Types_Pkg Loc_MP_Mode;
  /* Librairies::Mode_Profile_Calculations::Loc_MP_Speed */
  static Speed_T_Obu_BasicTypes_Pkg Loc_MP_Speed;
  /* Librairies::Mode_Profile_Calculations::Loc_MP_Length */
  static Location_T_Obu_BasicTypes_Pkg Loc_MP_Length;
  /* Librairies::Mode_Profile_Calculations::Loc_MP_Length_Ack */
  static Location_T_Obu_BasicTypes_Pkg Loc_MP_Length_Ack;
  /* Librairies::Mode_Profile_Calculations::Condition_Ok */
  static kcg_bool Condition_Ok;
  /* Librairies::Mode_Profile_Calculations::Condition_Loc */
  static kcg_bool _10_Condition_Loc;
  /* Librairies::Mode_Profile_Calculations::_L5 */
  static Speed_T_Obu_BasicTypes_Pkg _L5;
  /* Librairies::Mode_Profile_Calculations::_L9 */
  static kcg_bool _L9;
  /* Librairies::Mode_Profile_Calculations::_L12 */
  static kcg_bool _L12;
  /* Librairies::Mode_Profile_Calculations::_L16 */
  static T_MA_Level_And_Mode_Types_Pkg _L16;
  /* Librairies::Mode_Profile_Calculations::_L30 */
  static kcg_bool _L30;
  /* Librairies::Mode_Profile_Calculations::_L29 */
  static trainPosition_T_TrainPosition_Types_Pck _L29;
  /* Librairies::Mode_Profile_Calculations::_L28 */
  static Location_T_Obu_BasicTypes_Pkg _L28;
  /* Librairies::Mode_Profile_Calculations::_L25 */
  static Location_T_Obu_BasicTypes_Pkg _L25;
  /* Librairies::Mode_Profile_Calculations::_L21 */
  static trainPosition_T_TrainPosition_Types_Pck _L21;
  /* Librairies::Mode_Profile_Calculations::_L20 */
  static trainPosition_T_TrainPosition_Types_Pck _L20;
  /* Librairies::Mode_Profile_Calculations::_L35 */
  static kcg_bool _L35;
  /* Librairies::Mode_Profile_Calculations::_L36 */
  static kcg_bool _L36;
  /* Librairies::Mode_Profile_Calculations::_L37 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L37;
  /* Librairies::Mode_Profile_Calculations::_L42 */
  static Location_T_Obu_BasicTypes_Pkg _L42;
  /* Librairies::Mode_Profile_Calculations::_L41 */
  static T_MA_Level_And_Mode_Types_Pkg _L41;
  /* Librairies::Mode_Profile_Calculations::_L40 */
  static Speed_T_Obu_BasicTypes_Pkg _L40;
  /* Librairies::Mode_Profile_Calculations::_L39 */
  static Location_T_Obu_BasicTypes_Pkg _L39;
  /* Librairies::Mode_Profile_Calculations::_L38 */
  static Location_T_Obu_BasicTypes_Pkg _L38;
  /* Librairies::Mode_Profile_Calculations::_L43 */
  static T_MA_Level_And_Mode_Types_Pkg _L43;
  /* Librairies::Mode_Profile_Calculations::_L45 */
  static kcg_bool _L45;
  /* Librairies::Mode_Profile_Calculations::_L47 */
  static kcg_bool _L47;
  /* Librairies::Mode_Profile_Calculations::_L48 */
  static kcg_bool _L48;
  /* Librairies::Mode_Profile_Calculations::_L49 */
  static Location_T_Obu_BasicTypes_Pkg _L49;
  /* Librairies::Mode_Profile_Calculations::_L50 */
  static kcg_bool _L50;
  /* Librairies::Mode_Profile_Calculations::_L51 */
  static Location_T_Obu_BasicTypes_Pkg _L51;
  /* Librairies::Mode_Profile_Calculations::_L52 */
  static Location_T_Obu_BasicTypes_Pkg _L52;
  /* Librairies::Mode_Profile_Calculations::_L53 */
  static Speed_T_Obu_BasicTypes_Pkg _L53;
  /* Librairies::Mode_Profile_Calculations::_L54 */
  static kcg_bool _L54;
  /* Librairies::Mode_Profile_Calculations::_L55 */
  static kcg_bool _L55;
  /* Librairies::Mode_Profile_Calculations::_L56 */
  static kcg_bool _L56;
  /* Librairies::Mode_Profile_Calculations::_L57 */
  static Location_T_Obu_BasicTypes_Pkg _L57;
  /* Librairies::Mode_Profile_Calculations::_L58 */
  static Location_T_Obu_BasicTypes_Pkg _L58;
  /* Librairies::Mode_Profile_Calculations::_L59 */
  static Location_T_Obu_BasicTypes_Pkg _L59;
  /* Librairies::Mode_Profile_Calculations::_L60 */
  static kcg_bool _L60;
  /* Librairies::Mode_Profile_Calculations::_L61 */
  static kcg_bool _L61;
  /* Librairies::Mode_Profile_Calculations::_L62 */
  static kcg_bool _L62;
  /* Librairies::Mode_Profile_Calculations::_L63 */
  static kcg_bool _L63;
  /* Librairies::Mode_Profile_Calculations::_L65 */
  static kcg_bool _L65;
  /* Librairies::Mode_Profile_Calculations::_L64 */
  static kcg_bool _L64;
  /* Librairies::Mode_Profile_Calculations::_L66 */
  static kcg_bool _L66;
  
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L37,
    Mode_Profile_On_Board);
  _L41 = _L37.Mode;
  Loc_MP_Mode = _L41;
  _L43 = Loc_MP_Mode;
  _L16 = Profile_Mode;
  _L12 = _L43 == _L16;
  IfBlock2_clock = (Loc_MP_Mode == Profile_OS_Level_And_Mode_Types_Pkg) &
    (Selected_Mode == OS_Level_And_Mode_Types_Pkg);
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    _L1_IfBlock2 = kcg_true;
    _1_Condition_Loc = _L1_IfBlock2;
    _10_Condition_Loc = _1_Condition_Loc;
  }
  else {
    _6_else_clock_IfBlock2 = (Loc_MP_Mode ==
        Profile_LS_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
        LS_Level_And_Mode_Types_Pkg);
    /* ck_anon_activ */ if (_6_else_clock_IfBlock2) {
      _L17_IfBlock2 = kcg_true;
      _3_Condition_Loc = _L17_IfBlock2;
      Condition_Loc = _3_Condition_Loc;
    }
    else {
      else_clock_IfBlock2 = (Loc_MP_Mode ==
          Profile_SH_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
          SH_Level_And_Mode_Types_Pkg);
      /* ck_anon_activ */ if (else_clock_IfBlock2) {
        _L18_IfBlock2 = kcg_true;
        _5_Condition_Loc = _L18_IfBlock2;
        _2_Condition_Loc = _5_Condition_Loc;
      }
      else {
        _L19_IfBlock2 = kcg_false;
        _4_Condition_Loc = _L19_IfBlock2;
        _2_Condition_Loc = _4_Condition_Loc;
      }
      Condition_Loc = _2_Condition_Loc;
    }
    _10_Condition_Loc = Condition_Loc;
  }
  _L60 = _10_Condition_Loc;
  _L61 = _L12 | _L60;
  *Awaited_Mode_Profile = _L61;
  _L5 = Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L29, Train_Position);
  _L30 = _L29.valid;
  Valid_Train_Position = _L30;
  _L45 = Valid_Train_Position;
  _L62 = _L61 & _L45;
  Condition_Ok = _L62;
  _L55 = Condition_Ok;
  _L40 = _L37.Speed;
  Loc_MP_Speed = _L40;
  _L53 = Loc_MP_Speed;
  _L9 = _L53 >= _L5;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L21, Train_Position);
  _L25 = _L21.estimatedFrontEndPosition;
  Estimated_Front_End = _L25;
  _L57 = Estimated_Front_End;
  _L42 = _L37.Distance;
  Loc_MP_Distance = _L42;
  _L58 = Loc_MP_Distance;
  _L38 = _L37.Length_Ack;
  Loc_MP_Length_Ack = _L38;
  _L59 = Loc_MP_Length_Ack;
  _L35 = /* 1 */ Position_In_Ack_Area_Librairies(_L57, _L58, _L59);
  _L63 = _L9 & _L35;
  _L56 = kcg_false;
  /* 2 */ if (_L55) {
    _L54 = _L63;
  }
  else {
    _L54 = _L56;
  }
  *Supervision_Condition_In_Mode_Profile = _L54;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L20, Train_Position);
  _L28 = _L20.maxSafeFrontEndPostion;
  Max_Safe_Front_End = _L28;
  _L49 = Max_Safe_Front_End;
  _L51 = Loc_MP_Distance;
  _L39 = _L37.Length;
  Loc_MP_Length = _L39;
  _L52 = Loc_MP_Length;
  _L36 = /* 1 */ Position_In_Area_Librairies(_L49, _L51, _L52);
  _L50 = Condition_Ok;
  _L48 = kcg_false;
  /* 1 */ if (_L50) {
    _L47 = _L36;
  }
  else {
    _L47 = _L48;
  }
  *Max_Safe_Front_In_Mode_Profile = _L47;
  _L64 = Condition_Ok;
  _L66 = kcg_false;
  /* 3 */ if (_L64) {
    _L65 = _L35;
  }
  else {
    _L65 = _L66;
  }
  *Estimated_front_End_In_Ack_Area = _L65;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Mode_Profile_Calculations_Librairies.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

