/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

void Send_RBC_LRBG_364_D_00091_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  /* 1 */
  Build_RBC_LRBG_364_D_0009_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003 */
void Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003::TriggerValue */kcg_int TriggerValue,
  outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  R_data_internal_T_InfraLib tmp;
  
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L53, RadiaDataIn);
  outC->_L26 = TriggerValue;
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L23, RadiaDataIn);
  outC->_L27 = outC->_L23.trigger;
  outC->_L52 = outC->_L26 == outC->_L27;
  outC->tmp = outC->_L52;
  if (outC->tmp) {
    /* 1 */
    Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
      &outC->_L53,
      &outC->Context_1);
    kcg_copy_R_data_internal_T_InfraLib(&tmp, &outC->Context_1.R_data_out);
    kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, &outC->_L53);
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

