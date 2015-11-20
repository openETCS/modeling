/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

/* Toolbox::Converters::m_s_To_km_h */
kcg_real m_s_To_km_h_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_km_h::m_s */ kcg_real m_s)
{
  /* Toolbox::Converters::m_s_To_km_h::_L1 */
  static kcg_real _L1;
  /* Toolbox::Converters::m_s_To_km_h::_L2 */
  static kcg_real _L2;
  /* Toolbox::Converters::m_s_To_km_h::_L3 */
  static kcg_real _L3;
  /* Toolbox::Converters::m_s_To_km_h::km_h */
  static kcg_real km_h;
  
  _L1 = m_s;
  _L3 = 3.6;
  _L2 = _L1 * _L3;
  km_h = _L2;
  return km_h;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** m_s_To_km_h_Toolbox_Converters.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

