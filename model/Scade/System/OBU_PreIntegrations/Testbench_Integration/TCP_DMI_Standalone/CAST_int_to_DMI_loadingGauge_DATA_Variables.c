/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_loadingGauge_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_loadingGauge */
void CAST_int_to_DMI_loadingGauge_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::dmi_loadingGauge_int */DMI_loadingGauge_INT_T_DATA dmi_loadingGauge_int,
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::dmi_loadingGauge_ct */DMI_loadingGauge_T_DMI_Types_Pkg *dmi_loadingGauge_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L48 */ kcg_int _L48;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L43 */ kcg_int _L43;
  
  (*dmi_loadingGauge_ct).number = dmi_loadingGauge_int % 10;
  _L43 = dmi_loadingGauge_int / 10;
  (*dmi_loadingGauge_ct).dig1 = _L43 % 10;
  _L48 = _L43 / 10;
  (*dmi_loadingGauge_ct).dig2 = _L48 % 10;
  (*dmi_loadingGauge_ct).dig3 = _L48 / 10 % 10;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_loadingGauge_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

