/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_417_D_00052_4_M003_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003 */
void SendRadioPackets_LRBG_417_D_00052_4_M003_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::Radio_packets_in */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::Radio_packets_out */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::_L4 */
  static CompressedPackets_T_Common_Types_Pkg _L4;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::_L32 */
  static CompressedPackets_T_Common_Types_Pkg _L32;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::SendRadioPackets_LRBG_417_D_00052_4_M003::_L33 */
  static CompressedPackets_T_Common_Types_Pkg _L33;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L32, Radio_packets_in);
  /* 1 */
  Send_P015_MessageLibBaseline2(
    &_L32,
    (P015_trackside_int_T_TM *) &LRBG416_P015_Packets426,
    &_L11);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &_L11,
    (P021_trackside_int_T_TM *) &LRBG416_P021_Packets426,
    &_L2);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &_L2,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG416_P027_Packets426,
    &_L3);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &_L3,
    (P005_trackside_int_T_TM *) &LRBG416_P005_Packets426,
    &_L4);
  /* 1 */
  Send_P041_MessageLibBaseline2(
    &_L4,
    (P041_trackside_int_T_TM *) &LRBG416_P041_Packets426,
    &_L33);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Radio_packets_out, &_L33);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SendRadioPackets_LRBG_417_D_00052_4_M003_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

