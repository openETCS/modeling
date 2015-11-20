/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMapper_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intVectorMapper */
void Kv_intVectorMapper_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intVectorMapper::Kv_int */mv_Map_t_SDMConversionModelPkg *Kv_int,
  /* SDMConversionModelPkg::Kv_intVectorMapper::A_brake_em */av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intVectorMapper::A_brake_safe */av_MergedMap_t_SDMConversionModelPkg *A_brake_safe)
{
  static array_int_2 tmp;
  static kcg_int i;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L13 */
  static array_int_13 _L13;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L12 */
  static array_int_2 _L12;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L19 */
  static array_int_13 _L19;
  
  for (i = 0; i < 2; i++) {
    _L12[i] = 0;
  }
  for (i = 0; i < 13; i++) {
    kcg_copy_array_int_2(&tmp, &_L12);
    /* 1 */
    Kv_intVectorMerger_SDMConversionModelPkg(
      &tmp,
      Kv_int,
      A_brake_em,
      &_L12,
      &_L19[i],
      &_L13[i]);
  }
  kcg_copy_a_MergedSteps_t_SDMConversionModelPkg(&(*A_brake_safe).a, &_L19);
  kcg_copy_v_MergedSteps_t_SDMConversionModelPkg(&(*A_brake_safe).v, &_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Kv_intVectorMapper_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

