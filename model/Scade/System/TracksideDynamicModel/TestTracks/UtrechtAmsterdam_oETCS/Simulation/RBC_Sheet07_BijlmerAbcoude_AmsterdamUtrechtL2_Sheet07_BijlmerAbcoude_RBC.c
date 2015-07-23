/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"

void RBC_Sheet07_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_372_D_00059_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_371_D_00163_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_371_D_00105_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->Context_1);
  /* 2 */
  Send_RBC_LRBG_371_D_00024_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->Context_2);
}

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude */
void RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 2 */
  Send_RBC_LRBG_371_D_00024_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_L13,
    371000241,
    &outC->Context_2);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_2.R_data_out);
  /* 1 */
  Send_RBC_LRBG_371_D_00105_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_L1,
    371001052,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L2, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_371_D_00163_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_L2,
    371001634,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_372_D_00059_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_L3,
    372000594,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_2_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

