/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TA_to_ML_TA_Export.h"

/* TA_Export::TA_to_ML */
void TA_to_ML_TA_Export(
  /* TA_Export::TA_to_ML::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Export::TA_to_ML::t_nvcontact_overpass */ kcg_bool t_nvcontact_overpass,
  /* TA_Export::TA_to_ML::valid_GP */ kcg_bool valid_GP,
  /* TA_Export::TA_to_ML::valid_MA */ kcg_bool valid_MA,
  /* TA_Export::TA_to_ML::valid_SSP */ kcg_bool valid_SSP,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Packets_at_ML */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_to_From_Track_Packets_at_ML,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Messages_at_ML */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_to_From_Track_Messages_at_ML,
  /* TA_Export::TA_to_ML::P_12_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_12_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_15_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_15_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_21_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_21_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_27_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_27_to_Input_MA_SSP_Gradient_at_ML)
{
  static P135_OBU_T_TM noname;
  static P135_OBU_T_TM _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  static P012_OBU_T_TM _4_noname;
  static kcg_bool _5_noname;
  static kcg_bool _6_noname;
  /* TA_Export::TA_to_ML::_L6 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L6;
  /* TA_Export::TA_to_ML::_L26 */
  static kcg_bool _L26;
  /* TA_Export::TA_to_ML::_L25 */
  static kcg_int _L25;
  /* TA_Export::TA_to_ML::_L24 */
  static kcg_bool _L24;
  /* TA_Export::TA_to_ML::_L23 */
  static kcg_bool _L23;
  /* TA_Export::TA_to_ML::_L22 */
  static kcg_bool _L22;
  /* TA_Export::TA_to_ML::_L21 */
  static kcg_bool _L21;
  /* TA_Export::TA_to_ML::_L20 */
  static kcg_int _L20;
  /* TA_Export::TA_to_ML::_L18 */
  static kcg_bool _L18;
  /* TA_Export::TA_to_ML::_L27 */
  static kcg_int _L27;
  /* TA_Export::TA_to_ML::_L28 */
  static kcg_int _L28;
  /* TA_Export::TA_to_ML::_L29 */
  static kcg_int _L29;
  /* TA_Export::TA_to_ML::_L30 */
  static kcg_int _L30;
  /* TA_Export::TA_to_ML::_L31 */
  static kcg_int _L31;
  /* TA_Export::TA_to_ML::_L32 */
  static kcg_bool _L32;
  /* TA_Export::TA_to_ML::_L33 */
  static ReceivedMessage_T_Common_Types_Pkg _L33;
  /* TA_Export::TA_to_ML::_L48 */
  static NID_MESSAGE _L48;
  /* TA_Export::TA_to_ML::_L51 */
  static CompressedPackets_T_Common_Types_Pkg _L51;
  /* TA_Export::TA_to_ML::_L49 */
  static ReceivedMessage_T_Common_Types_Pkg _L49;
  /* TA_Export::TA_to_ML::_L68 */
  static P135_OBU_T_TM _L68;
  /* TA_Export::TA_to_ML::_L67 */
  static kcg_bool _L67;
  /* TA_Export::TA_to_ML::_L69 */
  static P137_StopIfInStaffResponsible_T_Packet_Types_Pkg _L69;
  /* TA_Export::TA_to_ML::_L71 */
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg _L71;
  /* TA_Export::TA_to_ML::_L73 */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg _L73;
  /* TA_Export::TA_to_ML::_L81 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L81;
  /* TA_Export::TA_to_ML::_L83 */
  static P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg _L83;
  /* TA_Export::TA_to_ML::_L85 */
  static P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg _L85;
  /* TA_Export::TA_to_ML::_L86 */
  static P80_ModeProfiles_T_Packet_Types_Pkg _L86;
  /* TA_Export::TA_to_ML::_L99 */
  static CompressedPackets_T_Common_Types_Pkg _L99;
  /* TA_Export::TA_to_ML::_L97 */
  static ReceivedMessage_T_Common_Types_Pkg _L97;
  /* TA_Export::TA_to_ML::_L88 */
  static kcg_bool _L88;
  /* TA_Export::TA_to_ML::_L89 */
  static P135_OBU_T_TM _L89;
  /* TA_Export::TA_to_ML::_L103 */
  static kcg_bool _L103;
  /* TA_Export::TA_to_ML::_L108 */
  static P012_OBU_T_TM _L108;
  /* TA_Export::TA_to_ML::_L107 */
  static kcg_bool _L107;
  /* TA_Export::TA_to_ML::_L109 */
  static kcg_bool _L109;
  /* TA_Export::TA_to_ML::_L110 */
  static kcg_bool _L110;
  /* TA_Export::TA_to_ML::_L111 */
  static kcg_bool _L111;
  /* TA_Export::TA_to_ML::_L121 */
  static P15_Level23MovementAuthorities_T_Packet_Types_Pkg _L121;
  /* TA_Export::TA_to_ML::_L122 */
  static P21_GradientProfiles_T_Packet_Types_Pkg _L122;
  /* TA_Export::TA_to_ML::_L123 */
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg _L123;
  /* TA_Export::TA_to_ML::_L124 */
  static P12_Level1MovementAuthorities_T_Packet_Types_Pkg _L124;
  /* TA_Export::TA_to_ML::_L125 */
  static P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg _L125;
  /* TA_Export::TA_to_ML::_L126 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L126;
  /* TA_Export::TA_to_ML::_L127 */
  static NID_LRBG _L127;
  /* TA_Export::TA_to_ML::_L128 */
  static Location_T_Obu_BasicTypes_Pkg _L128;
  
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &_L124,
    (P12_Level1MovementAuthorities_T_Packet_Types_Pkg *)
      &Default_P12_legacy_TA_Export);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &_L125,
    (P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg *)
      &Default_P135_legacy_TA_Export);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L49, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L51, &_L49.packets);
  /* 1 */ Read_P137_Legacy_TM_specific(&_L51, &_L69);
  /* 1 */ Read_P138_Legacy_TM_specific(&_L51, &_L71);
  /* 1 */ Read_P139_Legacy_TM_specific(&_L51, &_L73);
  /* 1 */ Read_P015_Legacy_TM_specific(&_L51, &_L121);
  /* 1 */ Read_P021_Legacy_TM_specific(&_L51, &_L122);
  /* 1 */ Read_P027V1_Legacy_for_ML_TM_specific(&_L51, &_L123);
  /* 1 */ Read_P041_Legacy_TM_specific(&_L51, &_L81);
  /* 1 */ Read_P046_Legacy_TM_specific(&_L51, &_L83);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &_L85,
    (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *)
      &Default_P63_legacy_TA_Export);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &_L86,
    (P80_ModeProfiles_T_Packet_Types_Pkg *) &Default_P80_legacy_TA_Export);
  _L127 = DEFAULT_LRBG_TrackAtlasTypes;
  _L128 = DEFAULT_Location_T_TrackAtlasTypes;
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(&_L6.P_12, &_L124);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &_L6.P_135,
    &_L125);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(&_L6.P_137, &_L69);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(&_L6.P_138, &_L71);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &_L6.P_139,
    &_L73);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(&_L6.P_15, &_L121);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(&_L6.P_21, &_L122);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &_L6.P_27,
    &_L123);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(&_L6.P_41, &_L81);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &_L6.P_46,
    &_L83);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(&_L6.P_63, &_L85);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&_L6.P_80, &_L86);
  _L6.LRBG = _L127;
  _L6.referenceLocation = _L128;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    Data_to_From_Track_Packets_at_ML,
    &_L6);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L33, MessageIn);
  _L48 = _L33.Radio_Common_Header.nid_message;
  _L20 = /* 2 */ CAST_NID_MESSAGE_to_int_TM_conversions(_L48);
  _L31 = nid_message_TrackTrain_006_TM_radio_messages;
  _L18 = _L20 == _L31;
  _L25 = nid_message_TrackTrain_015_TM_radio_messages;
  _L21 = _L20 == _L25;
  _L27 = nid_message_TrackTrain_016_TM_radio_messages;
  _L22 = _L20 == _L27;
  _L29 = nid_message_TrackTrain_027_TM_radio_messages;
  _L23 = _L20 == _L29;
  _L28 = nid_message_TrackTrain_002_TM_radio_messages;
  _L24 = _L20 == _L28;
  _L30 = nid_message_TrackTrain_028_TM_radio_messages;
  _L26 = _L20 == _L30;
  _L126.Mess_15 = _L21;
  _L126.Mess_16 = _L22;
  _L126.Mess_2 = _L24;
  _L126.Mess_27 = _L23;
  _L126.Mess_28 = _L26;
  _L126.Mess_6 = _L18;
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    Data_to_From_Track_Messages_at_ML,
    &_L126);
  _L32 = t_nvcontact_overpass;
  /* 1 */ Read_P135_TM(&_L51, &_L67, &_L68);
  kcg_copy_P135_OBU_T_TM(&noname, &_L68);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L97, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L99, &_L97.packets);
  /* 2 */ Read_P135_TM(&_L99, &_L88, &_L89);
  kcg_copy_P135_OBU_T_TM(&_1_noname, &_L89);
  _L103 = kcg_false;
  *P_12_to_Input_MA_SSP_Gradient_at_ML = _L103;
  _L110 = valid_MA;
  *P_15_to_Input_MA_SSP_Gradient_at_ML = _L110;
  _L109 = valid_GP;
  *P_21_to_Input_MA_SSP_Gradient_at_ML = _L109;
  _L111 = valid_SSP;
  *P_27_to_Input_MA_SSP_Gradient_at_ML = _L111;
  _2_noname = _L88;
  /* 1 */ Read_P012_TM(&_L51, &_L107, &_L108);
  _3_noname = _L107;
  kcg_copy_P012_OBU_T_TM(&_4_noname, &_L108);
  _5_noname = _L67;
  _6_noname = _L32;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TA_to_ML_TA_Export.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

