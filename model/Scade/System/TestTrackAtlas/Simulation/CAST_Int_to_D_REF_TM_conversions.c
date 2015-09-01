/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_REF_TM_conversions.h"

void CAST_Int_to_D_REF_reset_TM_conversions(
  outC_CAST_Int_to_D_REF_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_D_REF */
void CAST_Int_to_D_REF_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_REF::d_ref_int */kcg_int d_ref_int,
  outC_CAST_Int_to_D_REF_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L10 = DIM_D_max_neg_TM_conversions;
  outC->_L1 = d_ref_int;
  outC->_L7 = DIM_D_max_TM_conversions;
  outC->_L9 = outC->_L1 > outC->_L7;
  outC->_L8 = outC->_L1 < outC->_L10;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->d_ref = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_REF_TM_conversions.c
** Generation date: 2015-09-02T01:48:41
*************************************************************$ */

