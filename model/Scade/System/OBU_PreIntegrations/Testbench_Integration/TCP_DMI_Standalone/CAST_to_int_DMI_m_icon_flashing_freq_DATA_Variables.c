/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.h"

/* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq */
kcg_real CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables(
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::dmi_m_icon_flashing_freq_int */DMI_m_icon_flashing_freq_INT_T_DATA dmi_m_icon_flashing_freq_int)
{
  /* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq::dmi_m_icon_flashing_freq_ct */ kcg_real dmi_m_icon_flashing_freq_ct;
  
  dmi_m_icon_flashing_freq_ct = /* 1 */
    Int_to_Real_Utilities(dmi_m_icon_flashing_freq_int, 0.1, 1.0, 22, 0);
  return dmi_m_icon_flashing_freq_ct;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

