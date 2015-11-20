/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003 */
void SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::Radio_packets_in */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::Radio_packets_out */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::_L5 */
  static CompressedPackets_T_Common_Types_Pkg _L5;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _L7;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::_L32 */
  static CompressedPackets_T_Common_Types_Pkg _L32;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::_L33 */
  static CompressedPackets_T_Common_Types_Pkg _L33;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L32, Radio_packets_in);
  /* 1 */
  Send_P015_MessageLibBaseline2(
    &_L32,
    (P015_trackside_int_T_TM *) &LRBG362_P015_2_Packets426,
    &_L11);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &_L11,
    (P021_trackside_int_T_TM *) &LRBG362_P021_2_Packets426,
    &_L2);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &_L2,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG362_P027_2_Packets426,
    &_L3);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &_L3,
    (P005_trackside_int_T_TM *) &LRBG362_P005_2_Packets426,
    &_L5);
  /* 1 */
  Send_P065_MessageLibBaseline2(
    &_L5,
    (P065_trackside_int_T_TM *) &LRBG362_P065_2_R1_Packets426,
    &_L7);
  /* 2 */
  Send_P065_MessageLibBaseline2(
    &_L7,
    (P065_trackside_int_T_TM *) &LRBG362_P065_2_R2_Packets426,
    &_L33);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Radio_packets_out, &_L33);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

