/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-11T11:38:20
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array__418(array__418 *kcg_c1, array__418 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__413(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__429(array__429 *kcg_c1, array__429 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__421(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__432(array__432 *kcg_c1, array__432 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__421(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_500(array_int_500 *kcg_c1, array_int_500 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_494(array_int_494 *kcg_c1, array_int_494 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 494; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__467(array__467 *kcg_c1, array__467 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__421(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__413(struct__413 *kcg_c1, struct__413 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_DIFF == kcg_c2->V_DIFF);
  kcg_equ = kcg_equ & (kcg_c1->NC_DIFF == kcg_c2->NC_DIFF);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__421(struct__421 *kcg_c1, struct__421 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__418(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__435(struct__435 *kcg_c1, struct__435 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__432(
      &kcg_c1->SECTIONS_SSP,
      &kcg_c2->SECTIONS_SSP);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_k == kcg_c2->N_ITER_k);
  kcg_equ = kcg_equ & kcg_comp_array__418(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_n == kcg_c2->N_ITER_n);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__453(struct__453 *kcg_c1, struct__453 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-06-11T11:38:20
*************************************************************$ */

