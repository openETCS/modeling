/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_to_legacy_t_TM_conversions.h"

void C_P041_to_legacy_t_reset_TM_conversions(
  outC_C_P041_to_legacy_t_TM_conversions *outC)
{
  kcg_int i;
  
  for (i = 0; i < 7; i++) {
    /* 1 */ C_P041_to_legacy_loop_reset_TM_conversions(&outC->Context_1[i]);
  }
}

/* TM_conversions::C_P041_to_legacy_t */
void C_P041_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P041_to_legacy_t::P041_in */P041_OBU_T_TM *P041_in,
  outC_C_P041_to_legacy_t_TM_conversions *outC)
{
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  N_ITER noname;
  kcg_bool _5_noname;
  
  kcg_copy_P041_OBU_T_TM(&outC->_L1, P041_in);
  kcg_copy_P041_OBU_sectionlist_enum_T_TM(&outC->_L8, &outC->_L1.sections);
  outC->_L7 = outC->_L1.n_iter;
  outC->_L6 = outC->_L1.d_leveltr;
  outC->_L5 = outC->_L1.q_scale;
  outC->_L4 = outC->_L1.q_dir;
  outC->_L3 = outC->_L1.valid;
  _5_noname = outC->_L3;
  for (i4 = 0; i4 < 7; i4++) {
    outC->_L26[i4] = outC->_L4;
  }
  for (i3 = 0; i3 < 7; i3++) {
    outC->_L25[i3] = outC->_L5;
  }
  for (i2 = 0; i2 < 7; i2++) {
    outC->_L24[i2] = outC->_L6;
  }
  for (i1 = 0; i1 < 7; i1++) {
    kcg_copy_P041_OBU_sectionlist_enum_T_TM(&outC->_L23[i1], &outC->_L8);
  }
  noname = outC->_L7;
  for (i = 0; i < 7; i++) {
    /* 1 */
    C_P041_to_legacy_loop_TM_conversions(
      i,
      outC->_L26[i],
      outC->_L25[i],
      outC->_L24[i],
      &outC->_L23[i],
      &outC->Context_1[i]);
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L20[i],
      &outC->Context_1[i].P041_legacy_out);
  }
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->P041_legacy_out,
    &outC->_L20);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_to_legacy_t_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

