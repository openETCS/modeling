/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen */
void RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    RadiaDataIn,
    &tmp);
  /* 1 */
  RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &tmp,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

