/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P139_to_legacy_t_TM_conversions.h"

void C_P139_to_legacy_t_reset_TM_conversions(
  outC_C_P139_to_legacy_t_TM_conversions *outC)
{
}

/* TM_conversions::C_P139_to_legacy_t */
void C_P139_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P139_to_legacy_t::P139_in */P139_OBU_T_TM *P139_in,
  outC_C_P139_to_legacy_t_TM_conversions *outC)
{
  kcg_copy_P139_OBU_T_TM(&outC->_L1, P139_in);
  outC->_L7 = outC->_L1.v_reverse;
  outC->_L6 = outC->_L1.d_reverse;
  outC->_L5 = outC->_L1.q_scale;
  outC->_L4 = outC->_L1.q_dir;
  outC->_L3 = outC->_L1.valid;
  outC->_L2.valid = outC->_L3;
  outC->_L2.q_dir = outC->_L4;
  outC->_L2.q_scale = outC->_L5;
  outC->_L2.d_reverse = outC->_L6;
  outC->_L2.v_reverse = outC->_L7;
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->P139_legacy_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P139_to_legacy_t_TM_conversions.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

