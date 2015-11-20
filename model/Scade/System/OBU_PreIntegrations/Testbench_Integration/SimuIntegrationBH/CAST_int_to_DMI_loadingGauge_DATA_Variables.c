/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_loadingGauge_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_loadingGauge */
void CAST_int_to_DMI_loadingGauge_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::dmi_loadingGauge_int */ DMI_loadingGauge_INT_T_DATA dmi_loadingGauge_int,
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::dmi_loadingGauge_ct */ DMI_loadingGauge_T_DMI_Types_Pkg *dmi_loadingGauge_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L54 */
  static kcg_int _L54;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L53 */
  static kcg_int _L53;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L52 */
  static kcg_int _L52;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L51 */
  static kcg_int _L51;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L50 */
  static kcg_int _L50;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L49 */
  static kcg_int _L49;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L48 */
  static kcg_int _L48;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L47 */
  static kcg_int _L47;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L46 */
  static kcg_int _L46;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L45 */
  static kcg_int _L45;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L44 */
  static DMI_loadingGauge_T_DMI_Types_Pkg _L44;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L43 */
  static kcg_int _L43;
  /* DATA::Variables::CAST_int_to_DMI_loadingGauge::_L55 */
  static DMI_loadingGauge_INT_T_DATA _L55;
  
  _L55 = dmi_loadingGauge_int;
  _L45 = 10;
  _L47 = _L55 % _L45;
  _L52 = 10;
  _L43 = _L55 / _L52;
  _L46 = _L43 % _L52;
  _L50 = 10;
  _L48 = _L43 / _L50;
  _L53 = _L48 % _L50;
  _L54 = 10;
  _L51 = _L48 / _L54;
  _L49 = _L51 % _L54;
  _L44.number = _L47;
  _L44.dig1 = _L46;
  _L44.dig2 = _L53;
  _L44.dig3 = _L49;
  kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg(dmi_loadingGauge_ct, &_L44);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_loadingGauge_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

