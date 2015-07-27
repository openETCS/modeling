/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_LRBG_400_D_0037_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h"

void Build_RBC_LRBG_400_D_0037_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_Build_RBC_LRBG_400_D_0037_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  /* 1 */ Send_M003_JRU_reset_MessageLibBaseline2(&outC->_1_Context_1);
  /* 1 */
  SendRadioPackets_LRBG_400_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Build_RBC_LRBG_400_D_00371_2_M003 */
void Build_RBC_LRBG_400_D_0037_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Build_RBC_LRBG_400_D_00371_2_M003::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Build_RBC_LRBG_400_D_0037_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  outC->_L44 = kcg_true;
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, RadiaDataIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L38,
    &outC->_L1.packets);
  /* 1 */
  SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L38,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.Radio_packets_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L39, &outC->_L1);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L39.packets,
      &outC->_L3);
  }
  /* 1 */
  Send_M003_JRU_MessageLibBaseline2(
    (M_003_int_T_TM_radio_messages *) &LRBG_400_D_00371_2_M003_Messages_426,
    &outC->_1_Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L42,
    &outC->_1_Context_1.Message_Out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L40, &outC->_L39);
  if (kcg_true) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L40.message,
      &outC->_L42);
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L43, &outC->_L40);
  if (kcg_true) {
    outC->_L43.message_sent = outC->_L44;
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L43);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_RBC_LRBG_400_D_0037_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
