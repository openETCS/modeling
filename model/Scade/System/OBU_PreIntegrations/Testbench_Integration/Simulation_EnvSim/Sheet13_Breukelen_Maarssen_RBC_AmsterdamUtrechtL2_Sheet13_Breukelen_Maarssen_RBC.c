/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h"

/* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC */
void Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_420_D_00169_4_M015_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    RadiaDataIn,
    420001694,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_421_D_00050_0_M015_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &tmp,
    421000500,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_422_D_00192_7_M015_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &tmp1,
    422001927,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

