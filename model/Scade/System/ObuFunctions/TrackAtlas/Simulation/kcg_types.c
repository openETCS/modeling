/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T15:52:43
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array__144(array__144 *kcg_c1, array__144 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__136(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__136(struct__136 *kcg_c1, struct__136 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->q_train_length_corr ==
      kcg_c2->q_train_length_corr);
  kcg_equ = kcg_equ & (kcg_c1->d_static_LRBG == kcg_c2->d_static_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->d_static_abs == kcg_c2->d_static_abs);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-09-04T15:52:43
*************************************************************$ */

