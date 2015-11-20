/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_GDIR_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_GDIR */
G_internal_Type_Obu_BasicTypes_Pkg EVAL_Q_GDIR_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_GDIR::q_gdir */Q_GDIR q_gdir,
  /* TA_Lib_internal::EVAL_Q_GDIR::g_a */G_A g_a)
{
  static kcg_int tmp;
  /* TA_Lib_internal::EVAL_Q_GDIR::gradient */
  static G_internal_Type_Obu_BasicTypes_Pkg gradient;
  
  if (g_a == 255) {
    gradient = 255;
  }
  else {
    if (ENUM_Q_GDIR_uphill_TM_conversions == q_gdir) {
      tmp = 1;
    }
    else {
      tmp = - 1;
    }
    gradient = tmp * g_a;
  }
  return gradient;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_Q_GDIR_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

