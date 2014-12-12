/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int */
kcg_int MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig */MLRI__N_PIG n_pig)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig2int */ kcg_int n_pig2int;
  
  switch (n_pig) {
    case MLRI__N_PIG_I_am_the_1st :
      n_pig2int = 1;
      break;
    case MLRI__N_PIG_I_am_the_2nd :
      n_pig2int = 2;
      break;
    case MLRI__N_PIG_I_am_the_3rd :
      n_pig2int = 3;
      break;
    case MLRI__N_PIG_I_am_the_4th :
      n_pig2int = 4;
      break;
    case MLRI__N_PIG_I_am_the_5th :
      n_pig2int = 5;
      break;
    case MLRI__N_PIG_I_am_the_6th :
      n_pig2int = 6;
      break;
    case MLRI__N_PIG_I_am_the_7th :
      n_pig2int = 7;
      break;
    case MLRI__N_PIG_I_am_the_8th :
      n_pig2int = 8;
      break;
    
  }
  return n_pig2int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

