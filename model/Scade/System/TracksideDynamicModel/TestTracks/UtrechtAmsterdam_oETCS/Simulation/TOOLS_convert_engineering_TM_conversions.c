/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_convert_engineering_TM_conversions.h"

void TOOLS_convert_engineering_reset_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
}

/* TM_conversions::TOOLS_convert_engineering_location */
void TOOLS_convert_engineering_TM_conversions(
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_int */kcg_int Loc_int,
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
  outC->_L1 = Loc_int;
  outC->_L2 = (kcg_real) outC->_L1;
  outC->_L3 = DIM_scale_eng_location_TM;
  outC->_L4 = outC->_L2 * outC->_L3;
  outC->Loc_real = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_convert_engineering_TM_conversions.c
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

