/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_359_D_00030_0_M003_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003 */
void SendRadioPackets_LRBG_359_D_00030_0_M003_UserStories13_16_US_13(
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::Radio_packets_in */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::Radio_packets_out */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2;
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::_L5 */
  static CompressedPackets_T_Common_Types_Pkg _L5;
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _L7;
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::_L32 */
  static CompressedPackets_T_Common_Types_Pkg _L32;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L32, Radio_packets_in);
  /* 1 */
  Send_P015_MessageLibBaseline2(
    &_L32,
    (P015_trackside_int_T_TM *) &LRBG354_P015_3_UserStories13_16_US_13,
    &_L11);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &_L11,
    (P021_trackside_int_T_TM *) &LRBG354_P021_3_UserStories13_16_US_13,
    &_L2);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &_L2,
    (P027V1_trackside_int_T_TM_baseline2 *)
      &LRBG354_P027_3_UserStories13_16_US_13,
    &_L3);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &_L3,
    (P005_trackside_int_T_TM *) &LRBG354_P005_3_UserStories13_16_US_13,
    &_L5);
  /* 1 */
  Send_P065_MessageLibBaseline2(
    &_L5,
    (P065_trackside_int_T_TM *) &LRBG362_P065_1_Packets426,
    &_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Radio_packets_out, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SendRadioPackets_LRBG_359_D_00030_0_M003_UserStories13_16_US_13.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

