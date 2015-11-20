/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.h"

/* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq */
kcg_real CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables(
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::dmi_m_icon_flashing_freq_int */ DMI_m_icon_flashing_freq_INT_T_DATA dmi_m_icon_flashing_freq_int)
{
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::_L2 */
  static kcg_real _L2;
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::_L3 */
  static kcg_int _L3;
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::_L4 */
  static kcg_real _L4;
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::_L5 */
  static kcg_real _L5;
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::_L6 */
  static kcg_int _L6;
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::_L8 */
  static DMI_m_icon_flashing_freq_INT_T_DATA _L8;
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::dmi_m_icon_flashing_freq_ct */
  static kcg_real dmi_m_icon_flashing_freq_ct;
  
  _L8 = dmi_m_icon_flashing_freq_int;
  _L5 = 0.1;
  _L4 = 1.0;
  _L6 = 22;
  _L3 = 0;
  _L2 = /* 1 */ Int_to_Real_Utilities(_L8, _L5, _L4, _L6, _L3);
  dmi_m_icon_flashing_freq_ct = _L2;
  return dmi_m_icon_flashing_freq_ct;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

