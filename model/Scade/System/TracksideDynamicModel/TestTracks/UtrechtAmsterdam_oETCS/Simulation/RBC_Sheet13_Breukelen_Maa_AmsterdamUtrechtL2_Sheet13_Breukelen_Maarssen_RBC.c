/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet13_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h"

void RBC_Sheet13_Breukelen_Maa_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  outC_RBC_Sheet13_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_422_D_00192_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_421_D_00050_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_420_D_00169_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::RBC_Sheet13_Breukelen_Maarssen */
void RBC_Sheet13_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::RBC_Sheet13_Breukelen_Maarssen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet13_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_420_D_00169_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_L13,
    420001694,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_421_D_00050_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_L1,
    421000500,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_422_D_00192_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_L2,
    422001927,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet13_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

