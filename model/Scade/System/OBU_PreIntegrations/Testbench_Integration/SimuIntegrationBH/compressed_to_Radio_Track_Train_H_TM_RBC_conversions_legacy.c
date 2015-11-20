/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H */
void compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::Header_In */ M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *Header_Out)
{
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _1_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::then::_L3 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L3_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::then::_L2 */
  static M_028_T_TM_radio_messages _L2_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else */
  static kcg_bool _46_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _5_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L157_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L258_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::then::_L3 */
  static M_033_T_TM_radio_messages _L359_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _4_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else */
  static kcg_bool _44_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _9_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L163_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L264_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::then::_L3 */
  static M_038_T_TM_radio_messages _L365_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _8_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else */
  static kcg_bool _42_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _13_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::then::_L1 */
  static M_040_T_TM_radio_messages _L169_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L270_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::then::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L371_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _12_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else */
  static kcg_bool _40_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _17_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L275_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::then::_L3 */
  static M_043_T_TM_radio_messages _L376_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::then::_L4 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L477_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _16_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else::else::_L1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L181_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _18_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else::then::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L380_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else::then::_L2 */
  static M_045_T_TM_radio_messages _L279_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else::then::_L1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L178_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _19_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else */
  static kcg_bool _39_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _14_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::then::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L374_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L273_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::then::_L1 */
  static M_041_T_TM_radio_messages _L172_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _15_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else */
  static kcg_bool _41_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _10_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::then::_L3 */
  static M_039_T_TM_radio_messages _L368_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L267_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L166_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _11_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else */
  static kcg_bool _43_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _6_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::then::_L3 */
  static M_034_T_TM_radio_messages _L362_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L261_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L160_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _7_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else */
  static kcg_bool _45_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _2_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::then::_L4 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L4_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::then::_L3 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L356_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::then::_L2 */
  static M_032_T_TM_radio_messages _L255_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _3_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _20_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::then::_L3 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L3_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::then::_L2 */
  static M_002_T_TM_radio_messages _L2_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else */
  static kcg_bool _54_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _24_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L185_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L286_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::then::_L3 */
  static M_006_T_TM_radio_messages _L387_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _23_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else */
  static kcg_bool _52_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _28_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L191_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L292_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::then::_L3 */
  static M_009_T_TM_radio_messages _L393_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _27_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else */
  static kcg_bool _50_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _32_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static M_016_T_TM_radio_messages _L197_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L298_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::then::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L399_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _31_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _48_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _36_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L1102_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static M_024_T_TM_radio_messages _L2103_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L3104_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _35_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::else::else::_L1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L1108_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _37_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L3 */
  static M_027_T_TM_radio_messages _L3107_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L2106_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1105_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _38_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _47_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _33_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L4_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::then::_L3 */
  static M_018_T_TM_radio_messages _L3101_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L2100_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _34_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _49_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _29_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::then::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L396_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L295_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::then::_L1 */
  static M_015_T_TM_radio_messages _L194_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _30_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else */
  static kcg_bool _51_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _25_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::then::_L3 */
  static M_008_T_TM_radio_messages _L390_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L289_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L188_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _26_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else */
  static kcg_bool _53_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _21_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::then::_L3 */
  static M_003_T_TM_radio_messages _L384_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::then::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L283_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L182_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _22_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::nid_message */
  static kcg_int nid_message;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _110_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _109_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L32 */
  static kcg_int _L32;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L33 */
  static kcg_int _L33;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L34 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L34;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L35 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L35;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L36 */
  static kcg_int _L36;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L37 */
  static kcg_bool _L37;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L38 */
  static kcg_int _L38;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::_L39 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L39;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L1, Header_In);
  _L32 = _L1.nid_message;
  _L33 = /* 1 */ CAST_NID_MESSAGE_to_int_TM_conversions(_L32);
  nid_message = _L33;
  IfBlock1_clock = nid_message == 2;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L1_IfBlock1, Header_In);
    /* 1 */ C_header_to_M002_TM_RBC_conversions(&_L1_IfBlock1, &_L2_IfBlock1);
    /* 1 */
    M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
      &_L2_IfBlock1,
      &_L3_IfBlock1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_20_header_sheet1,
      &_L3_IfBlock1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_110_header_sheet1,
      &_20_header_sheet1);
  }
  else {
    _54_else_clock_IfBlock1 = nid_message == 3;
    /* ck_anon_activ */ if (_54_else_clock_IfBlock1) {
      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
        &_L182_IfBlock1,
        Header_In);
      /* 1 */
      C_header_to_M003_TM_RBC_conversions(&_L182_IfBlock1, &_L384_IfBlock1);
      /* 4 */
      M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
        &_L384_IfBlock1,
        &_L283_IfBlock1);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_22_header_sheet1,
        &_L283_IfBlock1);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet1,
        &_22_header_sheet1);
    }
    else {
      _53_else_clock_IfBlock1 = nid_message == 6;
      /* ck_anon_activ */ if (_53_else_clock_IfBlock1) {
        kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
          &_L185_IfBlock1,
          Header_In);
        /* 1 */
        C_header_to_M006_TM_RBC_conversions(&_L185_IfBlock1, &_L387_IfBlock1);
        /* 1 */
        M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
          &_L387_IfBlock1,
          &_L286_IfBlock1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_24_header_sheet1,
          &_L286_IfBlock1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_21_header_sheet1,
          &_24_header_sheet1);
      }
      else {
        _52_else_clock_IfBlock1 = nid_message == 8;
        /* ck_anon_activ */ if (_52_else_clock_IfBlock1) {
          kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
            &_L188_IfBlock1,
            Header_In);
          /* 1 */
          C_header_to_M008_TM_RBC_conversions(&_L188_IfBlock1, &_L390_IfBlock1);
          /* 2 */
          M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
            &_L390_IfBlock1,
            &_L289_IfBlock1);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_26_header_sheet1,
            &_L289_IfBlock1);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_23_header_sheet1,
            &_26_header_sheet1);
        }
        else {
          _51_else_clock_IfBlock1 = nid_message == 9;
          /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
            kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
              &_L191_IfBlock1,
              Header_In);
            /* 1 */
            C_header_to_M009_TM_RBC_conversions(
              &_L191_IfBlock1,
              &_L393_IfBlock1);
            /* 1 */
            M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
              &_L393_IfBlock1,
              &_L292_IfBlock1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_28_header_sheet1,
              &_L292_IfBlock1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_25_header_sheet1,
              &_28_header_sheet1);
          }
          else {
            _50_else_clock_IfBlock1 = nid_message == 15;
            /* ck_anon_activ */ if (_50_else_clock_IfBlock1) {
              kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                &_L396_IfBlock1,
                Header_In);
              /* 1 */
              C_header_to_M015_TM_RBC_conversions(
                &_L396_IfBlock1,
                &_L194_IfBlock1);
              /* 2 */
              M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                &_L194_IfBlock1,
                &_L295_IfBlock1);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_30_header_sheet1,
                &_L295_IfBlock1);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_27_header_sheet1,
                &_30_header_sheet1);
            }
            else {
              _49_else_clock_IfBlock1 = nid_message == 16;
              /* ck_anon_activ */ if (_49_else_clock_IfBlock1) {
                kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                  &_L399_IfBlock1,
                  Header_In);
                /* 1 */
                C_header_to_M016_TM_RBC_conversions(
                  &_L399_IfBlock1,
                  &_L197_IfBlock1);
                /* 2 */
                M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                  &_L197_IfBlock1,
                  &_L298_IfBlock1);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_32_header_sheet1,
                  &_L298_IfBlock1);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_29_header_sheet1,
                  &_32_header_sheet1);
              }
              else {
                _48_else_clock_IfBlock1 = nid_message == 18;
                /* ck_anon_activ */ if (_48_else_clock_IfBlock1) {
                  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                    &_L4_IfBlock1,
                    Header_In);
                  /* 1 */
                  C_header_to_M018_TM_RBC_conversions(
                    &_L4_IfBlock1,
                    &_L3101_IfBlock1);
                  /* 2 */
                  M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                    &_L3101_IfBlock1,
                    &_L2100_IfBlock1);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_34_header_sheet1,
                    &_L2100_IfBlock1);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_31_header_sheet1,
                    &_34_header_sheet1);
                }
                else {
                  _47_else_clock_IfBlock1 = nid_message == 24;
                  /* ck_anon_activ */ if (_47_else_clock_IfBlock1) {
                    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                      &_L3104_IfBlock1,
                      Header_In);
                    /* 1 */
                    C_header_to_M024_TM_RBC_conversions(
                      &_L3104_IfBlock1,
                      &_L2103_IfBlock1);
                    /* 9 */
                    M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                      &_L2103_IfBlock1,
                      &_L1102_IfBlock1);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_36_header_sheet1,
                      &_L1102_IfBlock1);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_33_header_sheet1,
                      &_36_header_sheet1);
                  }
                  else {
                    else_clock_IfBlock1 = nid_message == 27;
                    /* ck_anon_activ */ if (else_clock_IfBlock1) {
                      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                        &_L1105_IfBlock1,
                        Header_In);
                      /* 1 */
                      C_header_to_M027_TM_RBC_conversions(
                        &_L1105_IfBlock1,
                        &_L3107_IfBlock1);
                      /* 1 */
                      M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                        &_L3107_IfBlock1,
                        &_L2106_IfBlock1);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_38_header_sheet1,
                        &_L2106_IfBlock1);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_35_header_sheet1,
                        &_38_header_sheet1);
                    }
                    else {
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_L1108_IfBlock1,
                        (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                          &default_header_TM_RBC_conversions_legacy);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_37_header_sheet1,
                        &_L1108_IfBlock1);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_35_header_sheet1,
                        &_37_header_sheet1);
                    }
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_33_header_sheet1,
                      &_35_header_sheet1);
                  }
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_31_header_sheet1,
                    &_33_header_sheet1);
                }
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_29_header_sheet1,
                  &_31_header_sheet1);
              }
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_27_header_sheet1,
                &_29_header_sheet1);
            }
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_25_header_sheet1,
              &_27_header_sheet1);
          }
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_23_header_sheet1,
            &_25_header_sheet1);
        }
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_21_header_sheet1,
          &_23_header_sheet1);
      }
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet1,
        &_21_header_sheet1);
    }
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_110_header_sheet1,
      &header_sheet1);
  }
  IfBlock2_clock = nid_message == 28;
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L1_IfBlock2, Header_In);
    /* 1 */ C_header_to_M028_TM_RBC_conversions(&_L1_IfBlock2, &_L2_IfBlock2);
    /* 1 */
    M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
      &_L2_IfBlock2,
      &_L3_IfBlock2);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_1_header_sheet2,
      &_L3_IfBlock2);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_109_header_sheet2,
      &_1_header_sheet2);
  }
  else {
    _46_else_clock_IfBlock2 = nid_message == 32;
    /* ck_anon_activ */ if (_46_else_clock_IfBlock2) {
      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L4_IfBlock2, Header_In);
      /* 1 */
      C_header_to_M032_TM_RBC_conversions(&_L4_IfBlock2, &_L255_IfBlock2);
      /* 2 */
      M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
        &_L255_IfBlock2,
        &_L356_IfBlock2);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_3_header_sheet2,
        &_L356_IfBlock2);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet2,
        &_3_header_sheet2);
    }
    else {
      _45_else_clock_IfBlock2 = nid_message == 33;
      /* ck_anon_activ */ if (_45_else_clock_IfBlock2) {
        kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
          &_L157_IfBlock2,
          Header_In);
        /* 1 */
        C_header_to_M033_TM_RBC_conversions(&_L157_IfBlock2, &_L359_IfBlock2);
        /* 1 */
        M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
          &_L359_IfBlock2,
          &_L258_IfBlock2);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_5_header_sheet2,
          &_L258_IfBlock2);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_2_header_sheet2,
          &_5_header_sheet2);
      }
      else {
        _44_else_clock_IfBlock2 = nid_message == 34;
        /* ck_anon_activ */ if (_44_else_clock_IfBlock2) {
          kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
            &_L160_IfBlock2,
            Header_In);
          /* 1 */
          C_header_to_M034_TM_RBC_conversions(&_L160_IfBlock2, &_L362_IfBlock2);
          /* 1 */
          M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
            &_L362_IfBlock2,
            &_L261_IfBlock2);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_7_header_sheet2,
            &_L261_IfBlock2);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_4_header_sheet2,
            &_7_header_sheet2);
        }
        else {
          _43_else_clock_IfBlock2 = nid_message == 38;
          /* ck_anon_activ */ if (_43_else_clock_IfBlock2) {
            kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
              &_L163_IfBlock2,
              Header_In);
            /* 1 */
            C_header_to_M038_TM_RBC_conversions(
              &_L163_IfBlock2,
              &_L365_IfBlock2);
            /* 1 */
            M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
              &_L365_IfBlock2,
              &_L264_IfBlock2);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_9_header_sheet2,
              &_L264_IfBlock2);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_6_header_sheet2,
              &_9_header_sheet2);
          }
          else {
            _42_else_clock_IfBlock2 = nid_message == 39;
            /* ck_anon_activ */ if (_42_else_clock_IfBlock2) {
              kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                &_L166_IfBlock2,
                Header_In);
              /* 1 */
              C_header_to_M039_TM_RBC_conversions(
                &_L166_IfBlock2,
                &_L368_IfBlock2);
              /* 1 */
              M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                &_L368_IfBlock2,
                &_L267_IfBlock2);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_11_header_sheet2,
                &_L267_IfBlock2);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_8_header_sheet2,
                &_11_header_sheet2);
            }
            else {
              _41_else_clock_IfBlock2 = nid_message == 40;
              /* ck_anon_activ */ if (_41_else_clock_IfBlock2) {
                kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                  &_L371_IfBlock2,
                  Header_In);
                /* 1 */
                C_header_to_M040_TM_RBC_conversions(
                  &_L371_IfBlock2,
                  &_L169_IfBlock2);
                /* 1 */
                M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                  &_L169_IfBlock2,
                  &_L270_IfBlock2);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_13_header_sheet2,
                  &_L270_IfBlock2);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_10_header_sheet2,
                  &_13_header_sheet2);
              }
              else {
                _40_else_clock_IfBlock2 = nid_message == 41;
                /* ck_anon_activ */ if (_40_else_clock_IfBlock2) {
                  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                    &_L374_IfBlock2,
                    Header_In);
                  /* 1 */
                  C_header_to_M041_TM_RBC_conversions(
                    &_L374_IfBlock2,
                    &_L172_IfBlock2);
                  /* 1 */
                  M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                    &_L172_IfBlock2,
                    &_L273_IfBlock2);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_15_header_sheet2,
                    &_L273_IfBlock2);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_12_header_sheet2,
                    &_15_header_sheet2);
                }
                else {
                  _39_else_clock_IfBlock2 = nid_message == 43;
                  /* ck_anon_activ */ if (_39_else_clock_IfBlock2) {
                    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                      &_L477_IfBlock2,
                      Header_In);
                    /* 1 */
                    C_header_to_M043_TM_RBC_conversions(
                      &_L477_IfBlock2,
                      &_L376_IfBlock2);
                    /* 1 */
                    M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                      &_L376_IfBlock2,
                      &_L275_IfBlock2);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_17_header_sheet2,
                      &_L275_IfBlock2);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_14_header_sheet2,
                      &_17_header_sheet2);
                  }
                  else {
                    else_clock_IfBlock2 = nid_message == 45;
                    /* ck_anon_activ */ if (else_clock_IfBlock2) {
                      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                        &_L380_IfBlock2,
                        Header_In);
                      /* 1 */
                      C_header_to_M045_TM_RBC_conversions(
                        &_L380_IfBlock2,
                        &_L279_IfBlock2);
                      /* 1 */
                      M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                        &_L279_IfBlock2,
                        &_L178_IfBlock2);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_19_header_sheet2,
                        &_L178_IfBlock2);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_16_header_sheet2,
                        &_19_header_sheet2);
                    }
                    else {
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_L181_IfBlock2,
                        (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                          &default_header_TM_RBC_conversions_legacy);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_18_header_sheet2,
                        &_L181_IfBlock2);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_16_header_sheet2,
                        &_18_header_sheet2);
                    }
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_14_header_sheet2,
                      &_16_header_sheet2);
                  }
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_12_header_sheet2,
                    &_14_header_sheet2);
                }
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_10_header_sheet2,
                  &_12_header_sheet2);
              }
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_8_header_sheet2,
                &_10_header_sheet2);
            }
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_6_header_sheet2,
              &_8_header_sheet2);
          }
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_4_header_sheet2,
            &_6_header_sheet2);
        }
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_2_header_sheet2,
          &_4_header_sheet2);
      }
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet2,
        &_2_header_sheet2);
    }
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_109_header_sheet2,
      &header_sheet2);
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L34,
    &_110_header_sheet1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L35,
    &_109_header_sheet2);
  _L36 = nid_message;
  _L38 = 27;
  _L37 = _L36 <= _L38;
  /* 1 */ if (_L37) {
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L39, &_L34);
  }
  else {
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L39, &_L35);
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(Header_Out, &_L39);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

