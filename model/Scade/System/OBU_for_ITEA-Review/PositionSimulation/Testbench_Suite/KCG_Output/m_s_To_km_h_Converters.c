/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_km_h_Converters.h"

/* Converters::m_s_To_km_h */
kcg_real m_s_To_km_h_Converters(/* Converters::m_s_To_km_h::m_s */ kcg_real m_s)
{
  /* Converters::m_s_To_km_h::km_h */ kcg_real km_h;
  
  km_h = m_s * 3.6;
  return km_h;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** m_s_To_km_h_Converters.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

