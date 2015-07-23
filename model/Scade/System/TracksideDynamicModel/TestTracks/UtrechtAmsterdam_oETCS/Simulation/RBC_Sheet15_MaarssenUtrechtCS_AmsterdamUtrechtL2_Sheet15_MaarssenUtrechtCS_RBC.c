/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC.h"

void RBC_Sheet15_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
  outC_RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_441_D_00052_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_440_D_00295_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_439_D_00050_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS */
void RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_439_D_00050_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_L13,
    432000409,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_440_D_00295_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_L1,
    439000509,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_441_D_00052_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_L2,
    410000521,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

