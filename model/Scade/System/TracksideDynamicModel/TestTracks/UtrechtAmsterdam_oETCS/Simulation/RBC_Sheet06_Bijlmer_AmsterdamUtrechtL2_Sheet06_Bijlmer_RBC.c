/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

void RBC_Sheet06_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_341_D_00134_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_11_Context_1);
  /* 1 */
  Send_RBC_LRBG_369_D_00231_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_10_Context_1);
  /* 1 */
  Send_RBC_LRBG_364_D_00091_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_9_Context_1);
  /* 1 */
  Send_RBC_LRBG_362_D_00238_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_8_Context_1);
  /* 1 */
  Send_RBC_LRBG_362_D_00230_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_7_Context_1);
  /* 1 */
  Send_RBC_LRBG_362_D_00124_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_6_Context_1);
  /* 1 */
  Send_RBC_LRBG_360_D_00249_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_5_Context_1);
  /* 1 */
  Send_RBC_LRBG_358_D_00123_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_4_Context_1);
  /* 1 */
  Send_RBC_LRBG_356_D_00048_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_3_Context_1);
  /* 1 */
  Send_RBC_LRBG_355_D_00089_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_351_D_00054_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_354_D_00275_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer */
void RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L13,
    354002753,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L1,
    351000549,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L2,
    355000894,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L3,
    356000485,
    &outC->_3_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_3_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L4,
    358001231,
    &outC->_4_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L5,
    &outC->_4_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L5,
    362001249,
    &outC->_5_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L6,
    &outC->_5_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L6,
    360002492,
    &outC->_6_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L7,
    &outC->_6_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L7,
    362002307,
    &outC->_7_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L8,
    &outC->_7_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L8,
    362002307,
    &outC->_8_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L9,
    &outC->_8_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L9,
    364000911,
    &outC->_9_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L10,
    &outC->_9_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L10,
    369002313,
    &outC->_10_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L11,
    &outC->_10_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L11,
    341001344,
    &outC->_11_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L12,
    &outC->_11_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

