/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P138_to_legacy_t_TM_conversions.h"

void C_P138_to_legacy_t_reset_TM_conversions(
  outC_C_P138_to_legacy_t_TM_conversions *outC)
{
}

/* TM_conversions::C_P138_to_legacy_t */
void C_P138_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P138_to_legacy_t::P138_in */P138_OBU_T_TM *P138_in,
  outC_C_P138_to_legacy_t_TM_conversions *outC)
{
  kcg_copy_P138_OBU_T_TM(&outC->_L1, P138_in);
  outC->_L7 = outC->_L1.l_reversearea;
  outC->_L6 = outC->_L1.d_startreverse;
  outC->_L5 = outC->_L1.q_scale;
  outC->_L4 = outC->_L1.q_dir;
  outC->_L3 = outC->_L1.valid;
  outC->_L2.valid = outC->_L3;
  outC->_L2.q_dir = outC->_L4;
  outC->_L2.q_scale = outC->_L5;
  outC->_L2.d_startreverse = outC->_L6;
  outC->_L2.l_reversearea = outC->_L7;
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->P138_legacy_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P138_to_legacy_t_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

