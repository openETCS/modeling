/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13 */
void RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13(
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::_L13 */
  static R_data_internal_T_InfraLib _L13;
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::_L14 */
  static R_data_internal_T_InfraLib _L14;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13(
    &_L13,
    354002753,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13(
    &_L1,
    351000549,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13(
    &_L2,
    359000300,
    &_L14);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

