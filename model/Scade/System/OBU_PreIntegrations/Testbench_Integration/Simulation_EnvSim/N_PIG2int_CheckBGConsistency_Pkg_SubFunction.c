/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int */
kcg_int N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig */N_PIG n_pig)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig2int */
  static kcg_int n_pig2int;
  
  switch (n_pig) {
    case N_PIG_I_am_the_1st :
      n_pig2int = 1;
      break;
    case N_PIG_I_am_the_2nd :
      n_pig2int = 2;
      break;
    case N_PIG_I_am_the_3rd :
      n_pig2int = 3;
      break;
    case N_PIG_I_am_the_4th :
      n_pig2int = 4;
      break;
    case N_PIG_I_am_the_5th :
      n_pig2int = 5;
      break;
    case N_PIG_I_am_the_6th :
      n_pig2int = 6;
      break;
    case N_PIG_I_am_the_7th :
      n_pig2int = 7;
      break;
    case N_PIG_I_am_the_8th :
      n_pig2int = 8;
      break;
    
  }
  return n_pig2int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** N_PIG2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

