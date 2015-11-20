/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel */
void RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_353_D_00319_2_M032_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    RadiaDataIn,
    353003192,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &tmp,
    353004219,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &tmp1,
    353004310,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

