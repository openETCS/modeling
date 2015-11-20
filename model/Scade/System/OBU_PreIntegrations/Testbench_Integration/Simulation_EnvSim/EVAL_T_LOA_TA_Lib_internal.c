/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_T_LOA */
void EVAL_T_LOA_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_T_LOA::t_loa */P015_OBU_T_TM *t_loa,
  /* TA_Lib_internal::EVAL_T_LOA::t_loa_unlimited */kcg_bool *t_loa_unlimited,
  /* TA_Lib_internal::EVAL_T_LOA::t_loa_out */T_internal_Type_Obu_BasicTypes_Pkg *t_loa_out)
{
  static kcg_int tmp;
  
  *t_loa_unlimited = 1023 == (*t_loa).t_loa;
  if ((*t_loa).t_loa < 1023) {
    tmp = 1000;
  }
  else {
    tmp = 0;
  }
  *t_loa_out = (*t_loa).t_loa * tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_T_LOA_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

