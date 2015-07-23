/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

void SendRadioPackets_LRBG_353_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  /* 2 */ Send_P255_reset_MessageLibBaseline2(&outC->Context_2);
  /* 1 */ Send_P058_reset_MessageLibBaseline2(&outC->_1_Context_1);
  /* 1 */ Send_P057_reset_MessageLibBaseline2(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024 */
void SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L32, Radio_packets_in);
  /* 1 */
  Send_P057_MessageLibBaseline2(
    &outC->_L32,
    (P057_trackside_int_T_TM *) &LRBG353_P057_Packets426,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_1.B_data_out);
  /* 1 */
  Send_P058_MessageLibBaseline2(
    &outC->_L11,
    (P058_trackside_int_T_TM *) &LRBG353_P058_Packets426,
    &outC->_1_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->_1_Context_1.B_data_out);
  /* 2 */
  Send_P255_MessageLibBaseline2(
    &outC->_L2,
    (P255_trackside_int_T_TM *) &BGxxx_P255_Packets426,
    &outC->Context_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_2.packet_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Radio_packets_out,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

