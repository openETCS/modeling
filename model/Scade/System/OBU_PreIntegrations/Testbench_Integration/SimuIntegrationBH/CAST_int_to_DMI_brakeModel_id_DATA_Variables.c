/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_brakeModel_id_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_brakeModel_id */
void CAST_int_to_DMI_brakeModel_id_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::dmi_brakeModel_id_int */ DMI_brakeModel_id_INT_T_DATA dmi_brakeModel_id_int,
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::dmi_brakeModel_id_ct */ DMI_brakeModel_id_T_DMI_Types_Pkg *dmi_brakeModel_id_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L57 */
  static kcg_int _L57;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L56 */
  static kcg_int _L56;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L55 */
  static kcg_int _L55;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L52 */
  static kcg_int _L52;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L50 */
  static kcg_int _L50;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L49 */
  static kcg_int _L49;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L48 */
  static kcg_int _L48;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L47 */
  static kcg_int _L47;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L46 */
  static kcg_int _L46;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L45 */
  static kcg_int _L45;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L44 */
  static kcg_int _L44;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L43 */
  static DMI_brakeModel_id_T_DMI_Types_Pkg _L43;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L58 */
  static DMI_brakeModel_id_INT_T_DATA _L58;
  
  _L58 = dmi_brakeModel_id_int;
  _L57 = 10;
  _L55 = _L58 % _L57;
  _L56 = 10;
  _L46 = _L58 / _L56;
  _L45 = _L46 % _L56;
  _L48 = 10;
  _L50 = _L46 / _L48;
  _L44 = _L50 % _L48;
  _L49 = 10;
  _L52 = _L50 / _L49;
  _L47 = _L52 % _L49;
  _L43.number = _L55;
  _L43.dig1 = _L45;
  _L43.dig2 = _L44;
  _L43.dig3 = _L47;
  kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg(dmi_brakeModel_id_ct, &_L43);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_brakeModel_id_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

