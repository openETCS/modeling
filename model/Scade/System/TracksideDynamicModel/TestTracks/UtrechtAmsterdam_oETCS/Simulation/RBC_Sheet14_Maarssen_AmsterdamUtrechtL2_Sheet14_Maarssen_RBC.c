/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

void RBC_Sheet14_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_432_D_00040_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_3_Context_1);
  /* 1 */
  Send_RBC_LRBG_431_D_00410_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_428_D_00182_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_427_D_00047_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen */
void RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_427_D_00047_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_L13,
    427000475,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_428_D_00182_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_L1,
    428001820,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_431_D_00410_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_L2,
    428001820,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_432_D_00040_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_L3,
    431004102,
    &outC->_3_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_3_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

