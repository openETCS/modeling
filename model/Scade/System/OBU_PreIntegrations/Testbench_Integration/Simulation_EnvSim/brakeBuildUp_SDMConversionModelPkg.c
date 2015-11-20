/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakeBuildUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakeBuildUp */
void brakeBuildUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakeBuildUp::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakeBuildUp::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::brakeBuildUp::T_b */t_Brake_t_SDMModelPkg *T_b)
{
  static kcg_int i;
  /* SDMConversionModelPkg::brakeBuildUp::_L15 */
  static t_Brake_t_SDMModelPkg _L15;
  
  /* 1 */ brakePosition_SDMConversionModelPkg(trainData, &_L15);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&(*T_b).service, &_L15.service);
  for (i = 0; i < 2; i++) {
    (*T_b).emergency[i] = (*NationalValues).m_nvktint * _L15.emergency[i];
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** brakeBuildUp_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

