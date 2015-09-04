/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.h"

void CAST_Int_to_D_ENDTIMERSTARTLOC_reset_TM_conversions(
  outC_CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC */
void CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::d_endtimerstartloc_int */kcg_int d_endtimerstartloc_int,
  outC_CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L1 = d_endtimerstartloc_int;
  outC->_L8 = DIM_D_min_TM_conversions;
  outC->_L11 = outC->_L1 < outC->_L8;
  _1_noname = outC->_L11;
  outC->_L10 = DIM_D_max_TM_conversions;
  outC->_L9 = outC->_L1 > outC->_L10;
  noname = outC->_L9;
  outC->d_endtimerstartloc = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

