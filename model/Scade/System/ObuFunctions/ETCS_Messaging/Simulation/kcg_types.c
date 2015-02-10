/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Z:/Documents/projects/openETCS/github/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/Simulation\kcg_s2c_config.txt
** Generation date: 2015-02-07T17:55:09
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array_int_20(array_int_20 *kcg_c1, array_int_20 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-02-07T17:55:09
*************************************************************$ */

