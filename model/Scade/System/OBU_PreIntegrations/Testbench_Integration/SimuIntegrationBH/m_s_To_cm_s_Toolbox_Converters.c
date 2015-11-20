/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_cm_s_Toolbox_Converters.h"

/* Toolbox::Converters::m_s_To_cm_s */
OdometrySpeed_T_Toolbox m_s_To_cm_s_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_cm_s::speedIn */ kcg_real speedIn)
{
  /* Toolbox::Converters::m_s_To_cm_s::_L1 */
  static kcg_real _L1;
  /* Toolbox::Converters::m_s_To_cm_s::_L6 */
  static kcg_real _L6;
  /* Toolbox::Converters::m_s_To_cm_s::_L7 */
  static kcg_real _L7;
  /* Toolbox::Converters::m_s_To_cm_s::_L8 */
  static kcg_int _L8;
  /* Toolbox::Converters::m_s_To_cm_s::speedOut */
  static OdometrySpeed_T_Toolbox speedOut;
  
  _L1 = speedIn;
  _L7 = 100.0;
  _L6 = _L1 * _L7;
  _L8 = (kcg_int) _L6;
  speedOut = _L8;
  return speedOut;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** m_s_To_cm_s_Toolbox_Converters.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

