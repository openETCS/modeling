/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003 */
void SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003::Radio_packets_out */CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp1;
  static CompressedPackets_T_Common_Types_Pkg tmp;
  
  /* 1 */
  Send_P015_MessageLibBaseline2(
    Radio_packets_in,
    (P015_trackside_int_T_TM *) &LRBG354_P015_1_Packets426,
    &tmp);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &tmp,
    (P021_trackside_int_T_TM *) &LRBG354_P021_1_Packets426,
    &tmp1);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &tmp1,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG354_P027_1_Packets426,
    &tmp);
  /* 1 */
  Send_P003V1_MessageLibBaseline2(
    &tmp,
    (P003V1_trackside_int_T_TM_baseline2 *) &LRBG354_P003_1_Packets426,
    &tmp1);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &tmp1,
    (P005_trackside_int_T_TM *) &LRBG354_P005_1_Packets426,
    &tmp);
  /* 1 */
  Send_P041_MessageLibBaseline2(
    &tmp,
    (P041_trackside_int_T_TM *) &LRBG354_P041_1_Packets426,
    &tmp1);
  /* 1 */
  Send_P065_MessageLibBaseline2(
    &tmp1,
    (P065_trackside_int_T_TM *) &LRBG354_P065_1_Packets426,
    &tmp);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &tmp,
    (P255_trackside_int_T_TM *) &BGXXX_P255_Packets426,
    Radio_packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

