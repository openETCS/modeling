/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TA_to_ML_TA_Export.h"

void TA_to_ML_reset_TA_Export(outC_TA_to_ML_TA_Export *outC)
{
  /* 2 */ CAST_NID_MESSAGE_to_int_reset_TM_conversions(&outC->_10_Context_2);
  /* 1 */ Read_P135_reset_TM(&outC->_9_Context_1);
  /* 1 */ Read_P137_Legacy_reset_TM_specific(&outC->_8_Context_1);
  /* 1 */ Read_P138_Legacy_reset_TM_specific(&outC->_7_Context_1);
  /* 1 */ Read_P139_Legacy_reset_TM_specific(&outC->_6_Context_1);
  /* 1 */ Read_P015_Legacy_reset_TM_specific(&outC->_5_Context_1);
  /* 1 */ Read_P021_Legacy_reset_TM_specific(&outC->_4_Context_1);
  /* 1 */ Read_P027V1_Legacy_for_ML_reset_TM_specific(&outC->_3_Context_1);
  /* 1 */ Read_P041_Legacy_reset_TM_specific(&outC->_2_Context_1);
  /* 1 */ Read_P046_Legacy_reset_TM_specific(&outC->_1_Context_1);
  /* 2 */ Read_P135_reset_TM(&outC->Context_2);
  /* 1 */ Read_P012_reset_TM(&outC->Context_1);
}

/* TA_Export::TA_to_ML */
void TA_to_ML_TA_Export(
  /* TA_Export::TA_to_ML::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Export::TA_to_ML::t_nvcontact_overpass */kcg_bool t_nvcontact_overpass,
  /* TA_Export::TA_to_ML::valid_GP */kcg_bool valid_GP,
  /* TA_Export::TA_to_ML::valid_MA */kcg_bool valid_MA,
  /* TA_Export::TA_to_ML::valid_SSP */kcg_bool valid_SSP,
  outC_TA_to_ML_TA_Export *outC)
{
  P135_OBU_T_TM noname;
  P135_OBU_T_TM _1_noname;
  kcg_bool _2_noname;
  P012_OBU_T_TM _3_noname;
  
  outC->_L111 = valid_SSP;
  outC->_L110 = valid_MA;
  outC->_L109 = valid_GP;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L49, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L51,
    &outC->_L49.packets);
  /* 1 */ Read_P012_TM(&outC->_L51, &outC->Context_1);
  outC->_L107 = outC->Context_1.received;
  kcg_copy_P012_OBU_T_TM(&outC->_L108, &outC->Context_1.P012_OBU_out);
  kcg_copy_P012_OBU_T_TM(&_3_noname, &outC->_L108);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L97, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L99,
    &outC->_L97.packets);
  /* 2 */ Read_P135_TM(&outC->_L99, &outC->Context_2);
  outC->_L88 = outC->Context_2.received;
  kcg_copy_P135_OBU_T_TM(&outC->_L89, &outC->Context_2.P135_OBU_out);
  _2_noname = outC->_L88;
  outC->_L103 = kcg_false;
  outC->P_27_to_Input_MA_SSP_Gradient_at_ML = outC->_L111;
  outC->P_21_to_Input_MA_SSP_Gradient_at_ML = outC->_L109;
  outC->P_15_to_Input_MA_SSP_Gradient_at_ML = outC->_L110;
  outC->P_12_to_Input_MA_SSP_Gradient_at_ML = outC->_L103;
  kcg_copy_P135_OBU_T_TM(&_1_noname, &outC->_L89);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->_L86,
    (P80_ModeProfiles_T_Packet_Types_Pkg *) &Default_P80_legacy_TA_Export);
  outC->_L85 = kcg_false;
  /* 1 */ Read_P046_Legacy_TM_specific(&outC->_L51, &outC->_1_Context_1);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L83,
    &outC->_1_Context_1.P046_legacy_out);
  /* 1 */ Read_P041_Legacy_TM_specific(&outC->_L51, &outC->_2_Context_1);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L81,
    &outC->_2_Context_1.P041_legacy_out);
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_specific(&outC->_L51, &outC->_3_Context_1);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L123,
    &outC->_3_Context_1.P027_legacy_out);
  /* 1 */ Read_P021_Legacy_TM_specific(&outC->_L51, &outC->_4_Context_1);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L122,
    &outC->_4_Context_1.P015_legacy_out);
  /* 1 */ Read_P015_Legacy_TM_specific(&outC->_L51, &outC->_5_Context_1);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L121,
    &outC->_5_Context_1.P015_legacy_out);
  /* 1 */ Read_P139_Legacy_TM_specific(&outC->_L51, &outC->_6_Context_1);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L73,
    &outC->_6_Context_1.P139_legacy_out);
  /* 1 */ Read_P138_Legacy_TM_specific(&outC->_L51, &outC->_7_Context_1);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L71,
    &outC->_7_Context_1.P138_legacy_out);
  /* 1 */ Read_P137_Legacy_TM_specific(&outC->_L51, &outC->_8_Context_1);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L69,
    &outC->_8_Context_1.P137_legacy_out);
  /* 1 */ Read_P135_TM(&outC->_L51, &outC->_9_Context_1);
  outC->_L67 = outC->_9_Context_1.received;
  kcg_copy_P135_OBU_T_TM(&outC->_L68, &outC->_9_Context_1.P135_OBU_out);
  kcg_copy_P135_OBU_T_TM(&noname, &outC->_L68);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L33, MessageIn);
  outC->_L48 = outC->_L33.Radio_Common_Header.nid_message;
  outC->_L32 = t_nvcontact_overpass;
  outC->_L31 = nid_message_TrackTrain_006_TM_radio_messages;
  outC->_L30 = nid_message_TrackTrain_028_TM_radio_messages;
  outC->_L29 = nid_message_TrackTrain_027_TM_radio_messages;
  outC->_L28 = nid_message_TrackTrain_002_TM_radio_messages;
  outC->_L27 = nid_message_TrackTrain_016_TM_radio_messages;
  /* 2 */
  CAST_NID_MESSAGE_to_int_TM_conversions(outC->_L48, &outC->_10_Context_2);
  outC->_L20 = outC->_10_Context_2.nid_message_int;
  outC->_L26 = outC->_L20 == outC->_L30;
  outC->_L25 = nid_message_TrackTrain_015_TM_radio_messages;
  outC->_L21 = outC->_L20 == outC->_L25;
  outC->_L22 = outC->_L20 == outC->_L27;
  outC->_L24 = outC->_L20 == outC->_L28;
  outC->_L23 = outC->_L20 == outC->_L29;
  outC->_L18 = outC->_L20 == outC->_L31;
  outC->_L19.Mess_15 = outC->_L21;
  outC->_L19.Mess_16 = outC->_L22;
  outC->_L19.Mess_2 = outC->_L24;
  outC->_L19.Mess_27 = outC->_L23;
  outC->_L19.Mess_28 = outC->_L26;
  outC->_L19.Mess_6 = outC->_L18;
  outC->_L19.T_NVCONTACT_Overpass = outC->_L32;
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Messages_at_ML,
    &outC->_L19);
  outC->_L6.P_12 = outC->_L107;
  outC->_L6.P_135 = outC->_L67;
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L6.P_137,
    &outC->_L69);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L6.P_138,
    &outC->_L71);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L6.P_139,
    &outC->_L73);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L6.P_15,
    &outC->_L121);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L6.P_21,
    &outC->_L122);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L6.P_27,
    &outC->_L123);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L6.P_41,
    &outC->_L81);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L6.P_46,
    &outC->_L83);
  outC->_L6.P_63 = outC->_L85;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L6.P_80, &outC->_L86);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML,
    &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TA_to_ML_TA_Export.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

