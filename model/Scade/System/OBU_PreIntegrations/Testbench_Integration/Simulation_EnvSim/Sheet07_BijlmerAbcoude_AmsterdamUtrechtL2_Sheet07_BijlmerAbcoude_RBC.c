/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude */
void Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 2 */
  Send_RBC_LRBG_371_D_00024_1_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    RadiaDataIn,
    371000241,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &tmp1,
    371001052,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_371_D_00163_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &tmp,
    371001634,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_372_D_00059_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &tmp1,
    372000594,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

