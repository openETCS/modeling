/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_convert_engineering.h"

void TOOLS_convert_engineering_reset(outC_TOOLS_convert_engineering *outC)
{
}

/* TOOLS_convert_engineering_location */
void TOOLS_convert_engineering(
  /* TOOLS_convert_engineering_location::Loc_int */kcg_int Loc_int,
  outC_TOOLS_convert_engineering *outC)
{
  outC->_L1 = Loc_int;
  outC->_L2 = (kcg_real) outC->_L1;
  outC->_L3 = DIM_scale_eng_location;
  outC->_L4 = outC->_L2 * outC->_L3;
  outC->Loc_real = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_convert_engineering.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

