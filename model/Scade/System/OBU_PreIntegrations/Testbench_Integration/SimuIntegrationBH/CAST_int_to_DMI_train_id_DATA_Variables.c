/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_train_id_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_train_id */
void CAST_int_to_DMI_train_id_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_train_id::dmi_train_id_int */ DMI_train_id_INT_T_DATA dmi_train_id_int,
  /* DATA::Variables::CAST_int_to_DMI_train_id::dmi_train_id_ct */ DMI_train_id_T_DMI_Types_Pkg *dmi_train_id_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L42 */
  static DMI_train_id_INT_T_DATA _L42;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L44 */
  static kcg_int _L44;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L45 */
  static kcg_int _L45;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L46 */
  static DMI_train_id_T_DMI_Types_Pkg _L46;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L47 */
  static kcg_int _L47;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L48 */
  static kcg_int _L48;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L49 */
  static kcg_int _L49;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L52 */
  static kcg_int _L52;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L51 */
  static kcg_int _L51;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L50 */
  static kcg_int _L50;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L55 */
  static kcg_int _L55;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L54 */
  static kcg_int _L54;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L53 */
  static kcg_int _L53;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L58 */
  static kcg_int _L58;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L57 */
  static kcg_int _L57;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L56 */
  static kcg_int _L56;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L61 */
  static kcg_int _L61;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L60 */
  static kcg_int _L60;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L59 */
  static kcg_int _L59;
  
  _L42 = dmi_train_id_int;
  _L45 = 10;
  _L44 = _L42 % _L45;
  _L48 = 10;
  _L47 = _L42 / _L48;
  _L49 = _L47 % _L48;
  _L50 = 10;
  _L51 = _L47 / _L50;
  _L52 = _L51 % _L50;
  _L54 = 10;
  _L55 = _L51 / _L54;
  _L53 = _L55 % _L54;
  _L58 = 10;
  _L56 = _L55 / _L58;
  _L57 = _L56 % _L58;
  _L61 = 10;
  _L60 = _L56 / _L61;
  _L59 = _L60 % _L61;
  _L46.number = _L44;
  _L46.dig1 = _L49;
  _L46.dig2 = _L52;
  _L46.dig3 = _L53;
  _L46.dig4 = _L57;
  _L46.dig5 = _L59;
  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(dmi_train_id_ct, &_L46);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_train_id_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

