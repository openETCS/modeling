/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Build_RBC_LRBG_427_D_00047_5_M003 */
void Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Build_RBC_LRBG_427_D_00047_5_M003::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Build_RBC_LRBG_427_D_00047_5_M003::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, RadiaDataIn);
  /* 1 */
  SendRadioPackets_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &(*RadiaDataIn).packets,
    &(*R_data_out).packets);
  /* 1 */
  Send_M003_JRU_MessageLibBaseline2(
    (M_003_int_T_TM_radio_messages *) &LRBG_427_D_00047_5_M003_Messages_426,
    &(*R_data_out).message);
  (*R_data_out).message_sent = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

