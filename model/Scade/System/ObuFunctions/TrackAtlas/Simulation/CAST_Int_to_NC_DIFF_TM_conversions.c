/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_DIFF_TM_conversions.h"

void CAST_Int_to_NC_DIFF_reset_TM_conversions(
  outC_CAST_Int_to_NC_DIFF_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_NC_DIFF */
void CAST_Int_to_NC_DIFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_NC_DIFF::nc_diff_int */kcg_int nc_diff_int,
  outC_CAST_Int_to_NC_DIFF_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L16 = 2;
  outC->_L13 = nc_diff_int;
  outC->nc_diff = outC->_L13;
  outC->_L14 = 0;
  outC->_L15 = outC->_L13 < outC->_L14;
  _1_noname = outC->_L15;
  outC->_L12 = outC->_L13 > outC->_L16;
  noname = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NC_DIFF_TM_conversions.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

