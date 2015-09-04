/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"

void CAST_T_TRAIN_to_int_reset_TM_conversions(
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_T_TRAIN_to_int */
void CAST_T_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train */T_TRAIN t_train,
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L1 = t_train;
  outC->_L12 = 100.0;
  outC->_L11 = outC->_L1 * outC->_L12;
  outC->_L17 = (kcg_int) outC->_L11;
  outC->_L13 = 4294967295;
  outC->_L16 = outC->_L17 > outC->_L13;
  _1_noname = outC->_L16;
  outC->_L15 = 0;
  outC->_L14 = outC->_L17 < outC->_L15;
  noname = outC->_L14;
  outC->t_train_int = outC->_L17;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_T_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

