/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"

void RBC_Sheet09_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  outC_RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC *outC)
{
  /* 1 */
  Send_RBC_LRBG_396_D_00077_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_3_Context_1);
  /* 1 */
  Send_RBC_LRBG_393_D_00064_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_391_D_00371_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_1_Context_1);
  /* 1 */
  Send_RBC_LRBG_390_D_00067_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen */
void RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_390_D_00067_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_L13,
    390000674,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_391_D_00371_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_L1,
    391003714,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_393_D_00064_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_L2,
    393000648,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->_2_Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_396_D_00077_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_L3,
    396000777,
    &outC->_3_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_3_Context_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

