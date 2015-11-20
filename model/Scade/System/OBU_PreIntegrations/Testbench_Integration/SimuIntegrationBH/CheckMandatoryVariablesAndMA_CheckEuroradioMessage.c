/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMandatoryVariablesAndMA_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckMandatoryVariablesAndMA */
kcg_bool CheckMandatoryVariablesAndMA_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L17 */
  static kcg_bool _L17_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L16 */
  static ReceivedMessage_T_Common_Types_Pkg _L16_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L15 */
  static RadioMetadata_T_Common_Types_Pkg _L15_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L12 */
  static kcg_bool _L12_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid5;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L6 */
  static RadioMetadata_T_Common_Types_Pkg _L642_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L7 */
  static kcg_bool _L743_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L16 */
  static kcg_bool _L1644_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L15 */
  static kcg_bool _L1545_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L14 */
  static kcg_bool _L1446_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L13 */
  static kcg_bool _L1347_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L12 */
  static kcg_bool _L1248_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L11 */
  static kcg_bool _L1149_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L10 */
  static kcg_bool _L1050_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L9 */
  static kcg_bool _L951_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L8 */
  static kcg_bool _L852_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L17 */
  static kcg_bool _L1753_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L18 */
  static kcg_bool _L1854_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L19 */
  static ReceivedMessage_T_Common_Types_Pkg _L19_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L20 */
  static kcg_bool _L20_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid4;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid9;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L52 */
  static kcg_bool _L52_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L38 */
  static RadioMetadata_T_Common_Types_Pkg _L38_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L39 */
  static kcg_bool _L39_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L41 */
  static kcg_bool _L41_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L50 */
  static kcg_bool _L50_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L49 */
  static kcg_bool _L49_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L48 */
  static kcg_bool _L48_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L47 */
  static kcg_bool _L47_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L46 */
  static kcg_bool _L46_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L45 */
  static kcg_bool _L45_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L44 */
  static kcg_bool _L44_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L43 */
  static kcg_bool _L43_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L42 */
  static kcg_bool _L42_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid8;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else */
  static kcg_bool _26_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid13;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L11 */
  static RadioMetadata_T_Common_Types_Pkg _L1184_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L20 */
  static kcg_bool _L2085_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L19 */
  static kcg_bool _L1986_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L18 */
  static kcg_bool _L1887_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L17 */
  static kcg_bool _L1788_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L16 */
  static kcg_bool _L1689_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L15 */
  static kcg_bool _L1590_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L14 */
  static kcg_bool _L1491_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L13 */
  static kcg_bool _L1392_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L12 */
  static kcg_bool _L1293_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L21 */
  static kcg_bool _L2194_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid12;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _24_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid17;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L20 */
  static kcg_bool _L20108_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L17 */
  static kcg_bool _L17109_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L10 */
  static kcg_bool _L10110_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L9 */
  static kcg_bool _L9111_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L8 */
  static kcg_bool _L8112_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L7 */
  static kcg_bool _L7113_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L6 */
  static kcg_bool _L6114_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L5 */
  static kcg_bool _L5115_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4116_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3117_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2118_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L11 */
  static kcg_bool _L11119_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L12 */
  static kcg_bool _L12120_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L13 */
  static kcg_bool _L13121_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L14 */
  static ReceivedMessage_T_Common_Types_Pkg _L14122_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L15 */
  static RadioMetadata_T_Common_Types_Pkg _L15123_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L16 */
  static kcg_bool _L16124_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid16;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid21;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L7 */
  static kcg_bool _L7129_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L8 */
  static kcg_bool _L8130_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L17 */
  static kcg_bool _L17131_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L16 */
  static kcg_bool _L16132_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L15 */
  static kcg_bool _L15133_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L14 */
  static kcg_bool _L14134_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L13 */
  static kcg_bool _L13135_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L12 */
  static kcg_bool _L12136_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L11 */
  static kcg_bool _L11137_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L10 */
  static kcg_bool _L10138_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L9 */
  static kcg_bool _L9139_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L18 */
  static RadioMetadata_T_Common_Types_Pkg _L18140_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid20;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid18;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2128_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L3 */
  static M_ACK _L3127_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4126_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L5 */
  static M_ACK _L5125_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid19;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid14;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L14 */
  static kcg_bool _L14107_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L13 */
  static RadioMetadata_T_Common_Types_Pkg _L13106_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4105_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L5 */
  static kcg_bool _L5104_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L6 */
  static kcg_bool _L6103_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L7 */
  static kcg_bool _L7102_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L8 */
  static kcg_bool _L8101_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L9 */
  static kcg_bool _L9100_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L10 */
  static kcg_bool _L1099_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L11 */
  static kcg_bool _L1198_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L12 */
  static kcg_bool _L1297_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L296_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L15 */
  static kcg_bool _L1595_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid15;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _25_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid10;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L14 */
  static RadioMetadata_T_Common_Types_Pkg _L1483_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L13 */
  static kcg_bool _L1382_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L481_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L5 */
  static kcg_bool _L580_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L6 */
  static kcg_bool _L679_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L7 */
  static kcg_bool _L778_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L8 */
  static kcg_bool _L877_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L9 */
  static kcg_bool _L976_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L10 */
  static kcg_bool _L1075_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L11 */
  static kcg_bool _L1174_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L12 */
  static kcg_bool _L1273_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L3 */
  static kcg_bool _L372_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_bool _L271_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid11;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else */
  static kcg_bool _27_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid6;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L14 */
  static RadioMetadata_T_Common_Types_Pkg _L1470_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L13 */
  static kcg_bool _L1369_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L368_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L467_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L5 */
  static kcg_bool _L566_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L6 */
  static kcg_bool _L665_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L7 */
  static kcg_bool _L764_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L8 */
  static kcg_bool _L863_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L9 */
  static kcg_bool _L962_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L10 */
  static kcg_bool _L1061_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L11 */
  static kcg_bool _L1160_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L2 */
  static kcg_bool _L259_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L16 */
  static kcg_bool _L1658_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L18 */
  static kcg_bool _L1857_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L19 */
  static kcg_bool _L1956_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L20 */
  static kcg_bool _L2055_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid7;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid2;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L12 */
  static kcg_bool _L1241_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L4 */
  static kcg_bool _L440_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L6 */
  static kcg_bool _L639_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L7 */
  static kcg_bool _L738_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L8 */
  static kcg_bool _L837_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L9 */
  static kcg_bool _L936_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L10 */
  static kcg_bool _L1035_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L11 */
  static kcg_bool _L1134_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L2 */
  static kcg_bool _L233_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L13 */
  static RadioMetadata_T_Common_Types_Pkg _L1332_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L14 */
  static kcg_bool _L1431_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid3;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::nid_message */
  static kcg_int nid_message;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg radioMetadata;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::_L2 */
  static NID_MESSAGE _L2;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::_L3 */
  static RadioMetadata_T_Common_Types_Pkg _L3;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid141;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, rtmMessage);
  _L2 = _L1.Radio_Common_Header.nid_message;
  nid_message = _L2;
  IfBlock1_clock = nid_message == 3;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _30_else_clock_IfBlock1 = nid_message == 8;
    /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
    }
    else {
      _29_else_clock_IfBlock1 = nid_message == 9;
      /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
      }
      else {
        _28_else_clock_IfBlock1 = nid_message == 15;
        /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
        }
        else {
          _27_else_clock_IfBlock1 = nid_message == 16;
          /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
          }
          else {
            _26_else_clock_IfBlock1 = nid_message == 18;
            /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
            }
            else {
              _25_else_clock_IfBlock1 = nid_message == 24;
              /* ck_anon_activ */ if (_25_else_clock_IfBlock1) {
              }
              else {
                _24_else_clock_IfBlock1 = nid_message == 32;
                /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
                }
                else {
                  _23_else_clock_IfBlock1 = nid_message == 33;
                  /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
                  }
                  else {
                    _22_else_clock_IfBlock1 = nid_message == 39;
                    /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
                    }
                    else {
                      else_clock_IfBlock1 = nid_message == 41;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                      }
                      else {
                        _L1_IfBlock1 = kcg_false;
                        valid20 = _L1_IfBlock1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L3, &_L1.radioMetadata);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&radioMetadata, &_L3);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L15_IfBlock1, &radioMetadata);
    _L14_IfBlock1 = _L15_IfBlock1.t_train_reference;
    _L13_IfBlock1 = _L15_IfBlock1.nid_em;
    _L12_IfBlock1 = _L15_IfBlock1.q_scale;
    _L11_IfBlock1 = _L15_IfBlock1.d_sr;
    _L10_IfBlock1 = _L15_IfBlock1.t_sh_rqst;
    _L9_IfBlock1 = _L15_IfBlock1.d_ref;
    _L8_IfBlock1 = _L15_IfBlock1.q_dir;
    _L7_IfBlock1 = _L15_IfBlock1.d_emergencystop;
    _L6_IfBlock1 = _L15_IfBlock1.m_version;
    _L2_IfBlock1 = _L14_IfBlock1 | _L13_IfBlock1 | _L12_IfBlock1 |
      _L11_IfBlock1 | _L10_IfBlock1 | _L9_IfBlock1 | _L8_IfBlock1 |
      _L7_IfBlock1 | _L6_IfBlock1;
    _L4_IfBlock1 = !_L2_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L16_IfBlock1, rtmMessage);
    _L17_IfBlock1 = /* 1 */
      CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
        &_L16_IfBlock1);
    _L18_IfBlock1 = _L4_IfBlock1 & _L17_IfBlock1;
    valid1 = _L18_IfBlock1;
    valid141 = valid1;
  }
  else {
    /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &_L1332_IfBlock1,
        &radioMetadata);
      _L3_IfBlock1 = _L1332_IfBlock1.t_train_reference;
      _L1431_IfBlock1 = !_L3_IfBlock1;
      _L440_IfBlock1 = _L1332_IfBlock1.nid_em;
      _L5_IfBlock1 = _L1332_IfBlock1.q_scale;
      _L639_IfBlock1 = _L1332_IfBlock1.d_sr;
      _L738_IfBlock1 = _L1332_IfBlock1.t_sh_rqst;
      _L837_IfBlock1 = _L1332_IfBlock1.d_ref;
      _L936_IfBlock1 = _L1332_IfBlock1.q_dir;
      _L1035_IfBlock1 = _L1332_IfBlock1.d_emergencystop;
      _L1134_IfBlock1 = _L1332_IfBlock1.m_version;
      _L233_IfBlock1 = _L1431_IfBlock1 | _L440_IfBlock1 | _L5_IfBlock1 |
        _L639_IfBlock1 | _L738_IfBlock1 | _L837_IfBlock1 | _L936_IfBlock1 |
        _L1035_IfBlock1 | _L1134_IfBlock1;
      _L1241_IfBlock1 = !_L233_IfBlock1;
      valid3 = _L1241_IfBlock1;
      valid = valid3;
    }
    else {
      /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_L642_IfBlock1,
          &radioMetadata);
        _L852_IfBlock1 = _L642_IfBlock1.t_train_reference;
        _L951_IfBlock1 = _L642_IfBlock1.nid_em;
        _L1050_IfBlock1 = _L642_IfBlock1.q_scale;
        _L1149_IfBlock1 = _L642_IfBlock1.d_sr;
        _L1248_IfBlock1 = _L642_IfBlock1.t_sh_rqst;
        _L1347_IfBlock1 = _L642_IfBlock1.d_ref;
        _L1446_IfBlock1 = _L642_IfBlock1.q_dir;
        _L1545_IfBlock1 = _L642_IfBlock1.d_emergencystop;
        _L1644_IfBlock1 = _L642_IfBlock1.m_version;
        _L20_IfBlock1 = _L852_IfBlock1 | _L951_IfBlock1 | _L1050_IfBlock1 |
          _L1149_IfBlock1 | _L1248_IfBlock1 | _L1347_IfBlock1 |
          _L1446_IfBlock1 | _L1545_IfBlock1 | _L1644_IfBlock1;
        _L1854_IfBlock1 = !_L20_IfBlock1;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L19_IfBlock1, rtmMessage);
        _L743_IfBlock1 = /* 3 */
          CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
            &_L19_IfBlock1);
        _L1753_IfBlock1 = _L1854_IfBlock1 & _L743_IfBlock1;
        valid5 = _L1753_IfBlock1;
        valid2 = valid5;
      }
      else {
        /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_L1470_IfBlock1,
            &radioMetadata);
          _L368_IfBlock1 = _L1470_IfBlock1.t_train_reference;
          _L467_IfBlock1 = _L1470_IfBlock1.nid_em;
          _L1658_IfBlock1 = !_L467_IfBlock1;
          _L566_IfBlock1 = _L1470_IfBlock1.q_scale;
          _L1857_IfBlock1 = !_L566_IfBlock1;
          _L665_IfBlock1 = _L1470_IfBlock1.d_sr;
          _L764_IfBlock1 = _L1470_IfBlock1.t_sh_rqst;
          _L863_IfBlock1 = _L1470_IfBlock1.d_ref;
          _L1956_IfBlock1 = !_L863_IfBlock1;
          _L962_IfBlock1 = _L1470_IfBlock1.q_dir;
          _L2055_IfBlock1 = !_L962_IfBlock1;
          _L1061_IfBlock1 = _L1470_IfBlock1.d_emergencystop;
          _L21_IfBlock1 = !_L1061_IfBlock1;
          _L1160_IfBlock1 = _L1470_IfBlock1.m_version;
          _L1369_IfBlock1 = _L368_IfBlock1 | _L1658_IfBlock1 | _L1857_IfBlock1 |
            _L665_IfBlock1 | _L764_IfBlock1 | _L1956_IfBlock1 |
            _L2055_IfBlock1 | _L21_IfBlock1 | _L1160_IfBlock1;
          _L259_IfBlock1 = !_L1369_IfBlock1;
          valid7 = _L259_IfBlock1;
          valid4 = valid7;
        }
        else {
          /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &_L38_IfBlock1,
              &radioMetadata);
            _L42_IfBlock1 = _L38_IfBlock1.t_train_reference;
            _L43_IfBlock1 = _L38_IfBlock1.nid_em;
            _L52_IfBlock1 = !_L43_IfBlock1;
            _L44_IfBlock1 = _L38_IfBlock1.q_scale;
            _L45_IfBlock1 = _L38_IfBlock1.d_sr;
            _L46_IfBlock1 = _L38_IfBlock1.t_sh_rqst;
            _L47_IfBlock1 = _L38_IfBlock1.d_ref;
            _L48_IfBlock1 = _L38_IfBlock1.q_dir;
            _L49_IfBlock1 = _L38_IfBlock1.d_emergencystop;
            _L50_IfBlock1 = _L38_IfBlock1.m_version;
            _L41_IfBlock1 = _L42_IfBlock1 | _L52_IfBlock1 | _L44_IfBlock1 |
              _L45_IfBlock1 | _L46_IfBlock1 | _L47_IfBlock1 | _L48_IfBlock1 |
              _L49_IfBlock1 | _L50_IfBlock1;
            _L39_IfBlock1 = !_L41_IfBlock1;
            valid9 = _L39_IfBlock1;
            valid6 = valid9;
          }
          else {
            /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &_L1483_IfBlock1,
                &radioMetadata);
              _L481_IfBlock1 = _L1483_IfBlock1.t_train_reference;
              _L580_IfBlock1 = _L1483_IfBlock1.nid_em;
              _L1382_IfBlock1 = !_L580_IfBlock1;
              _L679_IfBlock1 = _L1483_IfBlock1.q_scale;
              _L778_IfBlock1 = _L1483_IfBlock1.d_sr;
              _L877_IfBlock1 = _L1483_IfBlock1.t_sh_rqst;
              _L976_IfBlock1 = _L1483_IfBlock1.d_ref;
              _L1075_IfBlock1 = _L1483_IfBlock1.q_dir;
              _L1174_IfBlock1 = _L1483_IfBlock1.d_emergencystop;
              _L1273_IfBlock1 = _L1483_IfBlock1.m_version;
              _L372_IfBlock1 = _L481_IfBlock1 | _L1382_IfBlock1 |
                _L679_IfBlock1 | _L778_IfBlock1 | _L877_IfBlock1 |
                _L976_IfBlock1 | _L1075_IfBlock1 | _L1174_IfBlock1 |
                _L1273_IfBlock1;
              _L271_IfBlock1 = !_L372_IfBlock1;
              valid11 = _L271_IfBlock1;
              valid8 = valid11;
            }
            else {
              /* ck_anon_activ */ if (_25_else_clock_IfBlock1) {
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &_L1184_IfBlock1,
                  &radioMetadata);
                _L1293_IfBlock1 = _L1184_IfBlock1.t_train_reference;
                _L1392_IfBlock1 = _L1184_IfBlock1.nid_em;
                _L1491_IfBlock1 = _L1184_IfBlock1.q_scale;
                _L1590_IfBlock1 = _L1184_IfBlock1.d_sr;
                _L1689_IfBlock1 = _L1184_IfBlock1.t_sh_rqst;
                _L1788_IfBlock1 = _L1184_IfBlock1.d_ref;
                _L1887_IfBlock1 = _L1184_IfBlock1.q_dir;
                _L1986_IfBlock1 = _L1184_IfBlock1.d_emergencystop;
                _L2085_IfBlock1 = _L1184_IfBlock1.m_version;
                _L2194_IfBlock1 = _L1293_IfBlock1 | _L1392_IfBlock1 |
                  _L1491_IfBlock1 | _L1590_IfBlock1 | _L1689_IfBlock1 |
                  _L1788_IfBlock1 | _L1887_IfBlock1 | _L1986_IfBlock1 |
                  _L2085_IfBlock1;
                _L22_IfBlock1 = !_L2194_IfBlock1;
                valid13 = _L22_IfBlock1;
                valid10 = valid13;
              }
              else {
                /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &_L13106_IfBlock1,
                    &radioMetadata);
                  _L4105_IfBlock1 = _L13106_IfBlock1.t_train_reference;
                  _L5104_IfBlock1 = _L13106_IfBlock1.nid_em;
                  _L6103_IfBlock1 = _L13106_IfBlock1.q_scale;
                  _L7102_IfBlock1 = _L13106_IfBlock1.d_sr;
                  _L8101_IfBlock1 = _L13106_IfBlock1.t_sh_rqst;
                  _L9100_IfBlock1 = _L13106_IfBlock1.d_ref;
                  _L1099_IfBlock1 = _L13106_IfBlock1.q_dir;
                  _L1198_IfBlock1 = _L13106_IfBlock1.d_emergencystop;
                  _L1297_IfBlock1 = _L13106_IfBlock1.m_version;
                  _L1595_IfBlock1 = !_L1297_IfBlock1;
                  _L14107_IfBlock1 = _L4105_IfBlock1 | _L5104_IfBlock1 |
                    _L6103_IfBlock1 | _L7102_IfBlock1 | _L8101_IfBlock1 |
                    _L9100_IfBlock1 | _L1099_IfBlock1 | _L1198_IfBlock1 |
                    _L1595_IfBlock1;
                  _L296_IfBlock1 = !_L14107_IfBlock1;
                  valid15 = _L296_IfBlock1;
                  valid12 = valid15;
                }
                else {
                  /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &_L15123_IfBlock1,
                      &radioMetadata);
                    _L2118_IfBlock1 = _L15123_IfBlock1.t_train_reference;
                    _L3117_IfBlock1 = _L15123_IfBlock1.nid_em;
                    _L4116_IfBlock1 = _L15123_IfBlock1.q_scale;
                    _L17109_IfBlock1 = !_L4116_IfBlock1;
                    _L5115_IfBlock1 = _L15123_IfBlock1.d_sr;
                    _L6114_IfBlock1 = _L15123_IfBlock1.t_sh_rqst;
                    _L7113_IfBlock1 = _L15123_IfBlock1.d_ref;
                    _L20108_IfBlock1 = !_L7113_IfBlock1;
                    _L8112_IfBlock1 = _L15123_IfBlock1.q_dir;
                    _L9111_IfBlock1 = _L15123_IfBlock1.d_emergencystop;
                    _L10110_IfBlock1 = _L15123_IfBlock1.m_version;
                    _L16124_IfBlock1 = _L2118_IfBlock1 | _L3117_IfBlock1 |
                      _L17109_IfBlock1 | _L5115_IfBlock1 | _L6114_IfBlock1 |
                      _L20108_IfBlock1 | _L8112_IfBlock1 | _L9111_IfBlock1 |
                      _L10110_IfBlock1;
                    _L12120_IfBlock1 = !_L16124_IfBlock1;
                    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
                      &_L14122_IfBlock1,
                      rtmMessage);
                    _L11119_IfBlock1 = /* 5 */
                      CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
                        &_L14122_IfBlock1);
                    _L13121_IfBlock1 = _L12120_IfBlock1 & _L11119_IfBlock1;
                    valid17 = _L13121_IfBlock1;
                    valid14 = valid17;
                  }
                  else {
                    /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
                      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
                        &_L2128_IfBlock1,
                        rtmMessage);
                      _L3127_IfBlock1 =
                        _L2128_IfBlock1.Radio_Common_Header.m_ack;
                      _L5125_IfBlock1 = M_ACK_No_acknowledgement_required;
                      _L4126_IfBlock1 = _L3127_IfBlock1 == _L5125_IfBlock1;
                      valid19 = _L4126_IfBlock1;
                      valid16 = valid19;
                    }
                    else {
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &_L18140_IfBlock1,
                          &radioMetadata);
                        _L9139_IfBlock1 = _L18140_IfBlock1.t_train_reference;
                        _L10138_IfBlock1 = _L18140_IfBlock1.nid_em;
                        _L11137_IfBlock1 = _L18140_IfBlock1.q_scale;
                        _L12136_IfBlock1 = _L18140_IfBlock1.d_sr;
                        _L13135_IfBlock1 = _L18140_IfBlock1.t_sh_rqst;
                        _L14134_IfBlock1 = _L18140_IfBlock1.d_ref;
                        _L15133_IfBlock1 = _L18140_IfBlock1.q_dir;
                        _L16132_IfBlock1 = _L18140_IfBlock1.d_emergencystop;
                        _L17131_IfBlock1 = _L18140_IfBlock1.m_version;
                        _L7129_IfBlock1 = _L9139_IfBlock1 | _L10138_IfBlock1 |
                          _L11137_IfBlock1 | _L12136_IfBlock1 |
                          _L13135_IfBlock1 | _L14134_IfBlock1 |
                          _L15133_IfBlock1 | _L16132_IfBlock1 |
                          _L17131_IfBlock1;
                        _L8130_IfBlock1 = !_L7129_IfBlock1;
                        valid21 = _L8130_IfBlock1;
                        valid18 = valid21;
                      }
                      else {
                        valid18 = valid20;
                      }
                      valid16 = valid18;
                    }
                    valid14 = valid16;
                  }
                  valid12 = valid14;
                }
                valid10 = valid12;
              }
              valid8 = valid10;
            }
            valid6 = valid8;
          }
          valid4 = valid6;
        }
        valid2 = valid4;
      }
      valid = valid2;
    }
    valid141 = valid;
  }
  return valid141;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMandatoryVariablesAndMA_CheckEuroradioMessage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

