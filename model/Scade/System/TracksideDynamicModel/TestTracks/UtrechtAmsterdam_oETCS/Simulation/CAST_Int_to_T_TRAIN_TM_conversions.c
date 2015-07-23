/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"

void CAST_Int_to_T_TRAIN_reset_TM_conversions(
  outC_CAST_Int_to_T_TRAIN_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_T_TRAIN */
void CAST_Int_to_T_TRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_TRAIN::t_train_int */kcg_int t_train_int,
  outC_CAST_Int_to_T_TRAIN_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  
  outC->_L12 = 100.0;
  outC->_L1 = t_train_int;
  outC->_L10 = (kcg_real) outC->_L1;
  outC->_L11 = outC->_L10 / outC->_L12;
  outC->_L7 = 4294967295;
  outC->_L9 = outC->_L1 > outC->_L7;
  outC->_L6 = 0;
  outC->_L8 = outC->_L1 < outC->_L6;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->t_train = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_TRAIN_TM_conversions.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

