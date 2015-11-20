/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_cm_s_Toolbox_Converters.h"

/* Toolbox::Converters::m_s_To_cm_s */
OdometrySpeed_T_Toolbox m_s_To_cm_s_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_cm_s::speedIn */kcg_real speedIn)
{
  /* Toolbox::Converters::m_s_To_cm_s::speedOut */
  static OdometrySpeed_T_Toolbox speedOut;
  
  speedOut = (kcg_int) (speedIn * 100.0);
  return speedOut;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** m_s_To_cm_s_Toolbox_Converters.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

