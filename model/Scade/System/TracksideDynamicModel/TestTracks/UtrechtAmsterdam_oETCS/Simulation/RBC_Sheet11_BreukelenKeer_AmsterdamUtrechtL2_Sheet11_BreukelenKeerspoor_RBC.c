/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet11_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h"

void RBC_Sheet11_BreukelenKeer_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_RBC_Sheet11_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_408_D_00050_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_9_Context_1);
  /* 1 */
  Send_RBC_LRBG_407_D_00167_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_8_Context_1);
  /* 1 */
  Send_RBC_LRBG_405_D_00042_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_7_Context_1);
  /* 1 */
  Send_RBC_LRBG_404_D_00184_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_6_Context_1);
  /* 1 */
  Send_RBC_LRBG_402_D_00063_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_5_Context_1);
  /* 1 */
  Send_RBC_LRBG_401_D_00182_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_4_Context_1);
  /* 1 */
  Send_RBC_LRBG_400_D_00371_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_3_Context_1);
  /* 1 */
  Send_RBC_LRBG_400_D_00106_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_397_D_00382_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_397_D_00169_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::RBC_Sheet11_BreukelenKeerspoor */
void RBC_Sheet11_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::RBC_Sheet11_BreukelenKeerspoor::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet11_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_397_D_00169_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L13,
    397001692,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_397_D_00382_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L1,
    397003820,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_400_D_00106_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L2,
    400001060,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_400_D_00371_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L3,
    400003712,
    &outC->_3_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_3_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_401_D_00182_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L4,
    401001827,
    &outC->_4_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L5,
    &outC->_4_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_402_D_00063_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L5,
    402000633,
    &outC->_5_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L6,
    &outC->_5_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_404_D_00184_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L6,
    404001844,
    &outC->_6_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L7,
    &outC->_6_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_405_D_00042_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L7,
    405000422,
    &outC->_7_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L8,
    &outC->_7_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_407_D_00167_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L8,
    407001673,
    &outC->_8_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L9,
    &outC->_8_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_408_D_00050_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L9,
    408000509,
    &outC->_9_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L10,
    &outC->_9_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet11_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

