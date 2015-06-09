/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MCOUNT_TM_conversions.h"

void CAST_Int_to_M_MCOUNT_reset_TM_conversions(
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_MCOUNT */
void CAST_Int_to_M_MCOUNT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount_int */kcg_int m_mcount_int,
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L11 = 255;
  outC->_L10 = 0;
  outC->_L1 = m_mcount_int;
  outC->_L9 = outC->_L1 > outC->_L11;
  outC->_L8 = outC->_L1 < outC->_L10;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->m_mcount = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_MCOUNT_TM_conversions.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

