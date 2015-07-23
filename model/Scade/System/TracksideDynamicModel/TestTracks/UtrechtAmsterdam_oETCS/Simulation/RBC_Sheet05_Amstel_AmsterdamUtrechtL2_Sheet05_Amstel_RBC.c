/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

void RBC_Sheet05_Amstel_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_353_D_00431_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_353_D_00421_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_353_D_00319_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel */
void RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_353_D_00319_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L4,
    353003192,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L1,
    353004219,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_353_D_00431_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L2,
    353004310,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

