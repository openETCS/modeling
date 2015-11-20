/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_airtightSystem_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_airtightSystem */
void CAST_int_to_DMI_airtightSystem_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::dmi_airtightSystem_int */ DMI_airtightSystem_INT_T_DATA dmi_airtightSystem_int,
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::dmi_airtightSystem_ct */ DMI_airtightSystem_T_DMI_Types_Pkg *dmi_airtightSystem_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L54 */
  static kcg_int _L54;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L53 */
  static kcg_int _L53;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L52 */
  static kcg_int _L52;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L51 */
  static kcg_int _L51;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L50 */
  static kcg_int _L50;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L49 */
  static kcg_int _L49;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L48 */
  static kcg_int _L48;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L47 */
  static kcg_int _L47;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L46 */
  static kcg_int _L46;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L45 */
  static kcg_int _L45;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L44 */
  static DMI_airtightSystem_T_DMI_Types_Pkg _L44;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L43 */
  static kcg_int _L43;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L55 */
  static DMI_airtightSystem_INT_T_DATA _L55;
  
  _L55 = dmi_airtightSystem_int;
  _L45 = 10;
  _L47 = _L55 % _L45;
  _L50 = 10;
  _L49 = _L55 / _L50;
  _L46 = _L49 % _L50;
  _L54 = 10;
  _L48 = _L49 / _L54;
  _L43 = _L48 % _L54;
  _L53 = 10;
  _L52 = _L48 / _L53;
  _L51 = _L52 % _L53;
  _L44.number = _L47;
  _L44.dig1 = _L46;
  _L44.dig2 = _L43;
  _L44.dig3 = _L51;
  kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg(dmi_airtightSystem_ct, &_L44);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_airtightSystem_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

