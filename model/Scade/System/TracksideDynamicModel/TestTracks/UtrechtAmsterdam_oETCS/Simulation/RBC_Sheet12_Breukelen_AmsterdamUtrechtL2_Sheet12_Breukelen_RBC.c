/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"

void RBC_Sheet12_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  outC_RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_476_D_00251_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_3_Context_1);
  /* 1 */
  Send_RBC_LRBG_419_D_00053_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_418_D_00204_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_417_D_00052_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen */
void RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_417_D_00052_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_L13,
    486002514,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_418_D_00204_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_L1,
    417000524,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_419_D_00053_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_L2,
    418002040,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_476_D_00251_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_L3,
    419000535,
    &outC->_3_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_3_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

