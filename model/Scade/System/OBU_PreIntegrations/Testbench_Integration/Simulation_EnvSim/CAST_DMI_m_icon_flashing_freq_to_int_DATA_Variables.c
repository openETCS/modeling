/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int */
DMI_m_icon_flashing_freq_INT_T_DATA CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::dmi_m_icon_flashing_freq_ct */kcg_real dmi_m_icon_flashing_freq_ct)
{
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::dmi_m_icon_flashing_freq_int */
  static DMI_m_icon_flashing_freq_INT_T_DATA dmi_m_icon_flashing_freq_int;
  
  dmi_m_icon_flashing_freq_int = /* 1 */
    Real_to_Int_Utilities(dmi_m_icon_flashing_freq_ct, 0.1, 1.0, 22, 0);
  return dmi_m_icon_flashing_freq_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

