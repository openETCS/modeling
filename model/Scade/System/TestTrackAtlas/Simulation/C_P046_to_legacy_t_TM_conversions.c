/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_t_TM_conversions.h"

void C_P046_to_legacy_t_reset_TM_conversions(
  outC_C_P046_to_legacy_t_TM_conversions *outC)
{
  kcg_int i;
  
  for (i = 0; i < 7; i++) {
    /* 1 */ C_P046_to_legacy_loop_reset_TM_conversions(&outC->Context_1[i]);
  }
}

/* TM_conversions::C_P046_to_legacy_t */
void C_P046_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P046_to_legacy_t::P046_in */P046_OBU_T_TM *P046_in,
  outC_C_P046_to_legacy_t_TM_conversions *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  N_ITER noname;
  kcg_bool _3_noname;
  
  kcg_copy_P046_OBU_T_TM(&outC->_L1, P046_in);
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(&outC->_L6, &outC->_L1.sections);
  outC->_L5 = outC->_L1.n_iter;
  outC->_L4 = outC->_L1.q_dir;
  for (i2 = 0; i2 < 7; i2++) {
    outC->_L26[i2] = outC->_L4;
  }
  for (i1 = 0; i1 < 7; i1++) {
    kcg_copy_P046_OBU_sectionlist_enum_T_TM(&outC->_L23[i1], &outC->_L6);
  }
  outC->_L3 = outC->_L1.valid;
  _3_noname = outC->_L3;
  noname = outC->_L5;
  for (i = 0; i < 7; i++) {
    /* 1 */
    C_P046_to_legacy_loop_TM_conversions(
      i,
      outC->_L26[i],
      &outC->_L23[i],
      &outC->Context_1[i]);
    kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L20[i],
      &outC->Context_1[i].P046_legacy_out);
  }
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->P046_legacy_out,
    &outC->_L20);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_to_legacy_t_TM_conversions.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

