/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _TA_to_ML_TA_Export_H_
#define _TA_to_ML_TA_Export_H_

#include "kcg_types.h"
#include "Read_P135_TM.h"
#include "Read_P012_TM.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P046_Legacy_TM_specific.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* TA_Export::TA_to_ML::Data_to_From_Track_Packets_at_ML */ Data_to_From_Track_Packets_at_ML;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* TA_Export::TA_to_ML::Data_to_From_Track_Messages_at_ML */ Data_to_From_Track_Messages_at_ML;
  kcg_bool /* TA_Export::TA_to_ML::P_12_to_Input_MA_SSP_Gradient_at_ML */ P_12_to_Input_MA_SSP_Gradient_at_ML;
  kcg_bool /* TA_Export::TA_to_ML::P_15_to_Input_MA_SSP_Gradient_at_ML */ P_15_to_Input_MA_SSP_Gradient_at_ML;
  kcg_bool /* TA_Export::TA_to_ML::P_21_to_Input_MA_SSP_Gradient_at_ML */ P_21_to_Input_MA_SSP_Gradient_at_ML;
  kcg_bool /* TA_Export::TA_to_ML::P_27_to_Input_MA_SSP_Gradient_at_ML */ P_27_to_Input_MA_SSP_Gradient_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* 2 */ _10_Context_2;
  outC_Read_P135_TM /* 1 */ _9_Context_1;
  outC_Read_P137_Legacy_TM_specific /* 1 */ _8_Context_1;
  outC_Read_P138_Legacy_TM_specific /* 1 */ _7_Context_1;
  outC_Read_P139_Legacy_TM_specific /* 1 */ _6_Context_1;
  outC_Read_P015_Legacy_TM_specific /* 1 */ _5_Context_1;
  outC_Read_P021_Legacy_TM_specific /* 1 */ _4_Context_1;
  outC_Read_P027V1_Legacy_for_ML_TM_specific /* 1 */ _3_Context_1;
  outC_Read_P041_Legacy_TM_specific /* 1 */ _2_Context_1;
  outC_Read_P046_Legacy_TM_specific /* 1 */ _1_Context_1;
  outC_Read_P135_TM /* 2 */ Context_2;
  outC_Read_P012_TM /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* TA_Export::TA_to_ML::_L6 */ _L6;
  kcg_bool /* TA_Export::TA_to_ML::_L26 */ _L26;
  kcg_int /* TA_Export::TA_to_ML::_L25 */ _L25;
  kcg_bool /* TA_Export::TA_to_ML::_L24 */ _L24;
  kcg_bool /* TA_Export::TA_to_ML::_L23 */ _L23;
  kcg_bool /* TA_Export::TA_to_ML::_L22 */ _L22;
  kcg_bool /* TA_Export::TA_to_ML::_L21 */ _L21;
  kcg_int /* TA_Export::TA_to_ML::_L20 */ _L20;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* TA_Export::TA_to_ML::_L19 */ _L19;
  kcg_bool /* TA_Export::TA_to_ML::_L18 */ _L18;
  kcg_int /* TA_Export::TA_to_ML::_L27 */ _L27;
  kcg_int /* TA_Export::TA_to_ML::_L28 */ _L28;
  kcg_int /* TA_Export::TA_to_ML::_L29 */ _L29;
  kcg_int /* TA_Export::TA_to_ML::_L30 */ _L30;
  kcg_int /* TA_Export::TA_to_ML::_L31 */ _L31;
  kcg_bool /* TA_Export::TA_to_ML::_L32 */ _L32;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Export::TA_to_ML::_L33 */ _L33;
  NID_MESSAGE /* TA_Export::TA_to_ML::_L48 */ _L48;
  CompressedPackets_T_Common_Types_Pkg /* TA_Export::TA_to_ML::_L51 */ _L51;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Export::TA_to_ML::_L49 */ _L49;
  P135_OBU_T_TM /* TA_Export::TA_to_ML::_L68 */ _L68;
  kcg_bool /* TA_Export::TA_to_ML::_L67 */ _L67;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L69 */ _L69;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L71 */ _L71;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L73 */ _L73;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L81 */ _L81;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L83 */ _L83;
  kcg_bool /* TA_Export::TA_to_ML::_L85 */ _L85;
  P80_ModeProfiles_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L86 */ _L86;
  CompressedPackets_T_Common_Types_Pkg /* TA_Export::TA_to_ML::_L99 */ _L99;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Export::TA_to_ML::_L97 */ _L97;
  kcg_bool /* TA_Export::TA_to_ML::_L88 */ _L88;
  P135_OBU_T_TM /* TA_Export::TA_to_ML::_L89 */ _L89;
  kcg_bool /* TA_Export::TA_to_ML::_L103 */ _L103;
  P012_OBU_T_TM /* TA_Export::TA_to_ML::_L108 */ _L108;
  kcg_bool /* TA_Export::TA_to_ML::_L107 */ _L107;
  kcg_bool /* TA_Export::TA_to_ML::_L109 */ _L109;
  kcg_bool /* TA_Export::TA_to_ML::_L110 */ _L110;
  kcg_bool /* TA_Export::TA_to_ML::_L111 */ _L111;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L121 */ _L121;
  P21_GradientProfiles_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L122 */ _L122;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* TA_Export::TA_to_ML::_L123 */ _L123;
} outC_TA_to_ML_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::TA_to_ML */
extern void TA_to_ML_TA_Export(
  /* TA_Export::TA_to_ML::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Export::TA_to_ML::t_nvcontact_overpass */kcg_bool t_nvcontact_overpass,
  /* TA_Export::TA_to_ML::valid_GP */kcg_bool valid_GP,
  /* TA_Export::TA_to_ML::valid_MA */kcg_bool valid_MA,
  /* TA_Export::TA_to_ML::valid_SSP */kcg_bool valid_SSP,
  outC_TA_to_ML_TA_Export *outC);

extern void TA_to_ML_reset_TA_Export(outC_TA_to_ML_TA_Export *outC);

#endif /* _TA_to_ML_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TA_to_ML_TA_Export.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

