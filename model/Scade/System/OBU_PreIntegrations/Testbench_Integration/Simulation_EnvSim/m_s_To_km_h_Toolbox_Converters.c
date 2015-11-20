/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

/* Toolbox::Converters::m_s_To_km_h */
kcg_real m_s_To_km_h_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_km_h::m_s */kcg_real m_s)
{
  /* Toolbox::Converters::m_s_To_km_h::km_h */
  static kcg_real km_h;
  
  km_h = m_s * 3.6;
  return km_h;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** m_s_To_km_h_Toolbox_Converters.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

