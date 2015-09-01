/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-27T16:09:02
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array__2311(array__2311 *kcg_c1, array__2311 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2306(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__2322(array__2322 *kcg_c1, array__2322 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2314(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_500(array_int_500 *kcg_c1, array_int_500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2_32(array_int_2_32 *kcg_c1, array_int_2_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_64(array_int_64 *kcg_c1, array_int_64 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__2360(array__2360 *kcg_c1, array__2360 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2343(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__2368(array__2368 *kcg_c1, array__2368 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2314(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__2386(array__2386 *kcg_c1, array__2386 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2380(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__2398(array__2398 *kcg_c1, array__2398 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2389(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_30(array_int_30 *kcg_c1, array_int_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_30(array_bool_30 *kcg_c1, array_bool_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_500(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_32(array_int_32 *kcg_c1, array_int_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_64_32(
  array_int_64_32 *kcg_c1,
  array_int_64_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_64(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_33(array_int_33 *kcg_c1, array_int_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__2429(array__2429 *kcg_c1, array__2429 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2363(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_494(array_int_494 *kcg_c1, array_int_494 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 494; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__2438(array__2438 *kcg_c1, array__2438 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__2314(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_432(array_int_432 *kcg_c1, array_int_432 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 432; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_68(array_int_68 *kcg_c1, array_int_68 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 68; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2306(struct__2306 *kcg_c1, struct__2306 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_DIFF == kcg_c2->V_DIFF);
  kcg_equ = kcg_equ & (kcg_c1->NC_DIFF == kcg_c2->NC_DIFF);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2314(struct__2314 *kcg_c1, struct__2314 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__2311(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2325(struct__2325 *kcg_c1, struct__2325 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__2322(
      &kcg_c1->SECTIONS_SSP,
      &kcg_c2->SECTIONS_SSP);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_k == kcg_c2->N_ITER_k);
  kcg_equ = kcg_equ & kcg_comp_array__2311(
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

kcg_bool kcg_comp_struct__2343(struct__2343 *kcg_c1, struct__2343 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2363(struct__2363 *kcg_c1, struct__2363 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_int_500(
      &kcg_c1->PacketData,
      &kcg_c2->PacketData);
  kcg_equ = kcg_equ & kcg_comp_array__2360(
      &kcg_c1->PacketHeaders,
      &kcg_c2->PacketHeaders);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2374(struct__2374 *kcg_c1, struct__2374 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2380(struct__2380 *kcg_c1, struct__2380 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_diff == kcg_c2->v_diff);
  kcg_equ = kcg_equ & (kcg_c1->nc_diff == kcg_c2->nc_diff);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2389(struct__2389 *kcg_c1, struct__2389 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__2386(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_front == kcg_c2->q_front);
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__2401(struct__2401 *kcg_c1, struct__2401 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__2398(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-08-27T16:09:02
*************************************************************$ */

