/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"

void RBC_Sheet08B_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  outC_RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_387_D_00302_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_3_Context_1);
  /* 1 */
  Send_RBC_LRBG_385_D_00101_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_383_D_00105_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_382_D_00191_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::RBC_Sheet08B_Abcoude */
void RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::RBC_Sheet08B_Abcoude::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_382_D_00191_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_L13,
    380001918,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_383_D_00105_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_L1,
    383001054,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_385_D_00101_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_L2,
    385001011,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_387_D_00302_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_L3,
    387003027,
    &outC->_3_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_3_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

