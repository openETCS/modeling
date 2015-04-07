/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array__153(array__153 *kcg_c1, array__153 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 88; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__147(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__147(struct__147 *kcg_c1, struct__147 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Loc == kcg_c2->Loc);
  kcg_equ = kcg_equ & (kcg_c1->Pos_Index == kcg_c2->Pos_Index);
  kcg_equ = kcg_equ & (kcg_c1->Category_Index == kcg_c2->Category_Index);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

