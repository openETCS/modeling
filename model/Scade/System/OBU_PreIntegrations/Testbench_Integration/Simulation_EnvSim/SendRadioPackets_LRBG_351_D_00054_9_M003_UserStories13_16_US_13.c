/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_351_D_00054_9_M003_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::SendRadioPackets_LRBG_351_D_00054_9_M003 */
void SendRadioPackets_LRBG_351_D_00054_9_M003_UserStories13_16_US_13(
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_351_D_00054_9_M003::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_351_D_00054_9_M003::Radio_packets_out */CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp1;
  static CompressedPackets_T_Common_Types_Pkg tmp;
  
  /* 1 */
  Send_P015_MessageLibBaseline2(
    Radio_packets_in,
    (P015_trackside_int_T_TM *) &LRBG354_P015_2_UserStories13_16_US_13,
    &tmp);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &tmp,
    (P021_trackside_int_T_TM *) &LRBG354_P021_2_UserStories13_16_US_13,
    &tmp1);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &tmp1,
    (P027V1_trackside_int_T_TM_baseline2 *)
      &LRBG354_P027_2_UserStories13_16_US_13,
    &tmp);
  /* 1 */
  Send_P003V1_MessageLibBaseline2(
    &tmp,
    (P003V1_trackside_int_T_TM_baseline2 *)
      &LRBG354_P003_2_UserStories13_16_US_13,
    &tmp1);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &tmp1,
    (P005_trackside_int_T_TM *) &LRBG354_P005_2_UserStories13_16_US_13,
    &tmp);
  /* 1 */
  Send_P041_MessageLibBaseline2(
    &tmp,
    (P041_trackside_int_T_TM *) &LRBG354_P041_2_Packets426,
    &tmp1);
  /* 1 */
  Send_P065_MessageLibBaseline2(
    &tmp1,
    (P065_trackside_int_T_TM *) &LRBG354_P065_2_UserStories13_16_US_13,
    Radio_packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_351_D_00054_9_M003_UserStories13_16_US_13.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

