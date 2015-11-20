/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_200_D_00054_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::SendRadioPackets_LRBG_200_D_00054_9_M003 */
void SendRadioPackets_LRBG_200_D_00054_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::SendRadioPackets_LRBG_200_D_00054_9_M003::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::SendRadioPackets_LRBG_200_D_00054_9_M003::Radio_packets_out */CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp1;
  static CompressedPackets_T_Common_Types_Pkg tmp;
  
  /* 1 */
  Send_P015_MessageLibBaseline2(
    Radio_packets_in,
    (P015_trackside_int_T_TM *)
      &LRBG200_P015_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone,
    &tmp);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &tmp,
    (P021_trackside_int_T_TM *)
      &LRBG200_P021_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone,
    &tmp1);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &tmp1,
    (P027V1_trackside_int_T_TM_baseline2 *)
      &LRBG200_P027_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone,
    &tmp);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &tmp,
    (P005_trackside_int_T_TM *)
      &LRBG200_P005_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone,
    &tmp1);
  /* 1 */
  Send_P041_MessageLibBaseline2(
    &tmp1,
    (P041_trackside_int_T_TM *)
      &LRBG200_P041_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone,
    Radio_packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_200_D_00054_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

