/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13 */
void RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13(
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13(
    RadiaDataIn,
    354002753,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13(
    &tmp,
    351000549,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13(
    &tmp1,
    359000300,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

