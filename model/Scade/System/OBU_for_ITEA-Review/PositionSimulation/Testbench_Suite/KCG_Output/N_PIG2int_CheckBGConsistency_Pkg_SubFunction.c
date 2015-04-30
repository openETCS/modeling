/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int */
kcg_int N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig */ N_PIG n_pig)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig2int */ kcg_int n_pig2int;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** N_PIG2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

