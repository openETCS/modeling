/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_vMax_id_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_vMax_id */
void CAST_int_to_DMI_vMax_id_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::dmi_vmax_id_int */ DMI_vMax_id_INT_T_DATA dmi_vmax_id_int,
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::dmi_vmax_id_ct */ DMI_vMax_id_T_DMI_Types_Pkg *dmi_vmax_id_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L57 */
  static kcg_int _L57;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L56 */
  static kcg_int _L56;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L55 */
  static kcg_int _L55;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L54 */
  static kcg_int _L54;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L53 */
  static kcg_int _L53;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L52 */
  static kcg_int _L52;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L51 */
  static DMI_vMax_id_T_DMI_Types_Pkg _L51;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L50 */
  static kcg_int _L50;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L49 */
  static kcg_int _L49;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L48 */
  static kcg_int _L48;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L46 */
  static kcg_int _L46;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L44 */
  static kcg_int _L44;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L58 */
  static DMI_vMax_id_INT_T_DATA _L58;
  
  _L58 = dmi_vmax_id_int;
  _L50 = 10;
  _L48 = _L58 % _L50;
  _L57 = 10;
  _L54 = _L58 / _L57;
  _L49 = _L54 % _L57;
  _L44 = 10;
  _L46 = _L54 / _L44;
  _L52 = _L46 % _L44;
  _L55 = 10;
  _L56 = _L46 / _L55;
  _L53 = _L56 % _L55;
  _L51.number = _L48;
  _L51.dig1 = _L49;
  _L51.dig2 = _L52;
  _L51.dig3 = _L53;
  kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg(dmi_vmax_id_ct, &_L51);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_vMax_id_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

