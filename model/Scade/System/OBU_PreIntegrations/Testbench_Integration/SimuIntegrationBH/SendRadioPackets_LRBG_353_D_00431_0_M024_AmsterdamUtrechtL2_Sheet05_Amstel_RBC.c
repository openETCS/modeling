/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024 */
void SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::Radio_packets_in */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::Radio_packets_out */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::_L32 */
  static CompressedPackets_T_Common_Types_Pkg _L32;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L32, Radio_packets_in);
  /* 1 */
  Send_P057_MessageLibBaseline2(
    &_L32,
    (P057_trackside_int_T_TM *) &LRBG353_P057_Packets426,
    &_L11);
  /* 1 */
  Send_P058_MessageLibBaseline2(
    &_L11,
    (P058_trackside_int_T_TM *) &LRBG353_P058_Packets426,
    &_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Radio_packets_out, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

