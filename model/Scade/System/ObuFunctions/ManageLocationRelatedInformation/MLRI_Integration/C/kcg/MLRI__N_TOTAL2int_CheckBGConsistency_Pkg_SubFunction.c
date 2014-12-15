/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int */
kcg_int MLRI__N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::n_total */MLRI__N_TOTAL n_total)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::n_total2int */ kcg_int n_total2int;
  
  switch (n_total) {
    case MLRI__N_TOTAL_1_balise_in_the_group :
      n_total2int = 1;
      break;
    case MLRI__N_TOTAL_2_balises_in_the_group :
      n_total2int = 2;
      break;
    case MLRI__N_TOTAL_3_balises_in_the_group :
      n_total2int = 3;
      break;
    case MLRI__N_TOTAL_4_balises_in_the_group :
      n_total2int = 4;
      break;
    case MLRI__N_TOTAL_5_balises_in_the_group :
      n_total2int = 5;
      break;
    case MLRI__N_TOTAL_6_balises_in_the_group :
      n_total2int = 6;
      break;
    case MLRI__N_TOTAL_7_balises_in_the_group :
      n_total2int = 7;
      break;
    case MLRI__N_TOTAL_8_balises_in_the_group :
      n_total2int = 8;
      break;
    
  }
  return n_total2int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

