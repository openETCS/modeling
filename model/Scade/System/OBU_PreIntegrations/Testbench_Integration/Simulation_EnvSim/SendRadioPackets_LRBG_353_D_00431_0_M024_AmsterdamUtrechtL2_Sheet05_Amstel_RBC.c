/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024 */
void SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::Radio_packets_out */CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp;
  
  /* 1 */
  Send_P057_MessageLibBaseline2(
    Radio_packets_in,
    (P057_trackside_int_T_TM *) &LRBG353_P057_Packets426,
    &tmp);
  /* 1 */
  Send_P058_MessageLibBaseline2(
    &tmp,
    (P058_trackside_int_T_TM *) &LRBG353_P058_Packets426,
    Radio_packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

