/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Modes_InputManagement.h"

/* InputManagement::Input_Modes */
void Input_Modes_InputManagement(
  /* InputManagement::Input_Modes::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::Input_Modes::Stop_If_In_SH */ kcg_bool *Stop_If_In_SH,
  /* InputManagement::Input_Modes::Stop_if_In_SR */ kcg_bool *Stop_if_In_SR,
  /* InputManagement::Input_Modes::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* InputManagement::Input_Modes::Mode_Profile_On_Borad */ T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *Mode_Profile_On_Borad,
  /* InputManagement::Input_Modes::List_BG_Related_SR_Empty */ kcg_bool *List_BG_Related_SR_Empty,
  /* InputManagement::Input_Modes::Trip_Order_givrn_By_Balise */ kcg_bool *Trip_Order_givrn_By_Balise)
{
  static kcg_int i1;
  static kcg_int i;
  static Q_DIR noname;
  static P15_Level23MovementAuthorities_T_Packet_Types_Pkg _2_noname;
  static P21_GradientProfiles_T_Packet_Types_Pkg _3_noname;
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg _4_noname;
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _5_noname;
  static P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg _6_noname;
  static NID_LRBG _7_noname;
  /* InputManagement::Input_Modes::Loc_Packet_12 */
  static P12_Level1MovementAuthorities_T_Packet_Types_Pkg Loc_Packet_12;
  /* InputManagement::Input_Modes::Loc_Packet_139 */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg Loc_Packet_139;
  /* InputManagement::Input_Modes::Loc_Packet_138 */
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg Loc_Packet_138;
  /* InputManagement::Input_Modes::Loc_Packet_137 */
  static P137_StopIfInStaffResponsible_T_Packet_Types_Pkg Loc_Packet_137;
  /* InputManagement::Input_Modes::Loc_Packet_135 */
  static P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg Loc_Packet_135;
  /* InputManagement::Input_Modes::Loc_Packet_63 */
  static P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg Loc_Packet_63;
  /* InputManagement::Input_Modes::Loc_Packet_80 */
  static P80_ModeProfiles_T_Packet_Types_Pkg Loc_Packet_80;
  /* InputManagement::Input_Modes::Loc_referenceLocation */
  static Location_T_Obu_BasicTypes_Pkg Loc_referenceLocation;
  /* InputManagement::Input_Modes::_L55 */
  static kcg_bool _L55;
  /* InputManagement::Input_Modes::_L54 */
  static Q_DIR _L54;
  /* InputManagement::Input_Modes::_L84 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L84;
  /* InputManagement::Input_Modes::_L91 */
  static kcg_bool _L91;
  /* InputManagement::Input_Modes::_L90 */
  static kcg_bool _L90;
  /* InputManagement::Input_Modes::_L89 */
  static P12_Level1MovementAuthorities_T_Packet_Types_Pkg _L89;
  /* InputManagement::Input_Modes::_L88 */
  static kcg_int _L88;
  /* InputManagement::Input_Modes::_L87 */
  static V_MAIN _L87;
  /* InputManagement::Input_Modes::_L86 */
  static kcg_bool _L86;
  /* InputManagement::Input_Modes::_L85 */
  static P12_Level1MovementAuthority_T_Packet_Types_Pkg _L85;
  /* InputManagement::Input_Modes::_L92 */
  static T_Mode_Profile_Table_Level_And_Mode_Types_Pkg _L92;
  /* InputManagement::Input_Modes::_L93 */
  static P80_ModeProfiles_T_Packet_Types_Pkg _L93;
  /* InputManagement::Input_Modes::_L94 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L94;
  /* InputManagement::Input_Modes::_L95 */
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg _L95;
  /* InputManagement::Input_Modes::_L96 */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg _L96;
  /* InputManagement::Input_Modes::_L97 */
  static kcg_bool _L97;
  /* InputManagement::Input_Modes::_L98 */
  static kcg_bool _L98;
  /* InputManagement::Input_Modes::_L99 */
  static P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg _L99;
  /* InputManagement::Input_Modes::_L100 */
  static P137_StopIfInStaffResponsible_T_Packet_Types_Pkg _L100;
  /* InputManagement::Input_Modes::_L101 */
  static P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg _L101;
  /* InputManagement::Input_Modes::_L115 */
  static P12_Level1MovementAuthorities_T_Packet_Types_Pkg _L115;
  /* InputManagement::Input_Modes::_L114 */
  static P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg _L114;
  /* InputManagement::Input_Modes::_L113 */
  static P137_StopIfInStaffResponsible_T_Packet_Types_Pkg _L113;
  /* InputManagement::Input_Modes::_L112 */
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg _L112;
  /* InputManagement::Input_Modes::_L111 */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg _L111;
  /* InputManagement::Input_Modes::_L110 */
  static P15_Level23MovementAuthorities_T_Packet_Types_Pkg _L110;
  /* InputManagement::Input_Modes::_L109 */
  static P21_GradientProfiles_T_Packet_Types_Pkg _L109;
  /* InputManagement::Input_Modes::_L108 */
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg _L108;
  /* InputManagement::Input_Modes::_L107 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L107;
  /* InputManagement::Input_Modes::_L106 */
  static P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg _L106;
  /* InputManagement::Input_Modes::_L105 */
  static P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg _L105;
  /* InputManagement::Input_Modes::_L104 */
  static P80_ModeProfiles_T_Packet_Types_Pkg _L104;
  /* InputManagement::Input_Modes::_L103 */
  static NID_LRBG _L103;
  /* InputManagement::Input_Modes::_L102 */
  static Location_T_Obu_BasicTypes_Pkg _L102;
  /* InputManagement::Input_Modes::_L118 */
  static array_int_3 _L118;
  /* InputManagement::Input_Modes::_L119 */
  static Location_T_Obu_BasicTypes_Pkg _L119;
  /* InputManagement::Input_Modes::_L120 */
  static Location_T_Obu_BasicTypes_Pkg _L120;
  
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L84,
    Data_From_Track_Packets);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &_L114,
    &_L84.P_135);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &Loc_Packet_135,
    &_L114);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &_L101,
    &Loc_Packet_135);
  _L55 = _L101.valid;
  *Stop_If_In_SH = _L55;
  _L54 = _L101.q_dir;
  noname = _L54;
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(&_L115, &_L84.P_12);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &Loc_Packet_12,
    &_L115);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &_L110,
    &_L84.P_15);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &_2_noname,
    &_L110);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(&_L109, &_L84.P_21);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(&_3_noname, &_L109);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &_L108,
    &_L84.P_27);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &_4_noname,
    &_L108);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &_L112,
    &_L84.P_138);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &Loc_Packet_138,
    &_L112);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &_L105,
    &_L84.P_63);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &Loc_Packet_63,
    &_L105);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &_L111,
    &_L84.P_139);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &Loc_Packet_139,
    &_L111);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&_L104, &_L84.P_80);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&Loc_Packet_80, &_L104);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &_L113,
    &_L84.P_137);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &Loc_Packet_137,
    &_L113);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &_L89,
    &Loc_Packet_12);
  kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg(&_L85, &_L89[0]);
  _L91 = _L85.valid;
  _L87 = _L85.v_main;
  _L88 = 0;
  _L90 = _L87 == _L88;
  _L86 = _L91 & _L90;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&_L93, &Loc_Packet_80);
  _L102 = _L84.referenceLocation;
  Loc_referenceLocation = _L102;
  _L119 = Loc_referenceLocation;
  /* pow */ for (i1 = 0; i1 < 3; i1++) {
    _L118[i1] = _L119;
  }
  /* 1 */ for (i = 0; i < 3; i++) {
    /* 1 */ Input_ModeProfiles_InputManagement(&_L93[i], _L118[i], &_L92[i]);
  }
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    Mode_Profile_On_Borad,
    &_L92);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &_L95,
    &Loc_Packet_138);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &_L96,
    &Loc_Packet_139);
  _L120 = Loc_referenceLocation;
  /* 1 */ Input_Reversing_Mode_InputManagement(&_L95, &_L96, _L120, &_L94);
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(Reversing_Data, &_L94);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &_L99,
    &Loc_Packet_63);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &_L100,
    &Loc_Packet_137);
  /* 1 */ Input_Staff_Responsible_InputManagement(&_L99, &_L100, &_L97, &_L98);
  *List_BG_Related_SR_Empty = _L97;
  *Stop_if_In_SR = _L98;
  _L103 = _L84.LRBG;
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &_L106,
    &_L84.P_46);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(&_L107, &_L84.P_41);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(&_5_noname, &_L107);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &_6_noname,
    &_L106);
  _7_noname = _L103;
  *Trip_Order_givrn_By_Balise = _L86;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Modes_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

