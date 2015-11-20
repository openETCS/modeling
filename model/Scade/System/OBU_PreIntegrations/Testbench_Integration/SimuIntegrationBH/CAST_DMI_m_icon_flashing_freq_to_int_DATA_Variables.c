/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int */
DMI_m_icon_flashing_freq_INT_T_DATA CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::dmi_m_icon_flashing_freq_ct */ kcg_real dmi_m_icon_flashing_freq_ct)
{
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::_L1 */
  static kcg_real _L1;
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::_L2 */
  static kcg_int _L2;
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::_L3 */
  static kcg_int _L3;
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::_L4 */
  static kcg_real _L4;
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::_L5 */
  static kcg_real _L5;
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::_L6 */
  static kcg_int _L6;
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::dmi_m_icon_flashing_freq_int */
  static DMI_m_icon_flashing_freq_INT_T_DATA dmi_m_icon_flashing_freq_int;
  
  _L1 = dmi_m_icon_flashing_freq_ct;
  _L5 = 0.1;
  _L4 = 1.0;
  _L6 = 22;
  _L3 = 0;
  _L2 = /* 1 */ Real_to_Int_Utilities(_L1, _L5, _L4, _L6, _L3);
  dmi_m_icon_flashing_freq_int = _L2;
  return dmi_m_icon_flashing_freq_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

