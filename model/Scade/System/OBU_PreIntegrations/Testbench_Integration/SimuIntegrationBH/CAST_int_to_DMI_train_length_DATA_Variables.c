/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_train_length_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_train_length */
void CAST_int_to_DMI_train_length_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_train_length::dmi_train_length_int */ DMI_train_length_INT_T_DATA dmi_train_length_int,
  /* DATA::Variables::CAST_int_to_DMI_train_length::dmi_train_length_ct */ DMI_train_length_T_DMI_Types_Pkg *dmi_train_length_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L58 */
  static kcg_int _L58;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L57 */
  static DMI_train_length_T_DMI_Types_Pkg _L57;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L56 */
  static kcg_int _L56;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L55 */
  static kcg_int _L55;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L54 */
  static kcg_int _L54;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L53 */
  static kcg_int _L53;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L52 */
  static kcg_int _L52;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L51 */
  static kcg_int _L51;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L50 */
  static kcg_int _L50;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L49 */
  static kcg_int _L49;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L48 */
  static kcg_int _L48;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L47 */
  static kcg_int _L47;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L46 */
  static kcg_int _L46;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L45 */
  static kcg_int _L45;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L43 */
  static kcg_int _L43;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L61 */
  static DMI_train_length_INT_T_DATA _L61;
  
  _L61 = dmi_train_length_int;
  _L58 = 10;
  _L43 = _L61 % _L58;
  _L55 = 10;
  _L56 = _L61 / _L55;
  _L54 = _L56 % _L55;
  _L53 = 10;
  _L52 = _L56 / _L53;
  _L51 = _L52 % _L53;
  _L49 = 10;
  _L48 = _L52 / _L49;
  _L50 = _L48 % _L49;
  _L45 = 10;
  _L47 = _L48 / _L45;
  _L46 = _L47 % _L45;
  _L57.number = _L43;
  _L57.dig1 = _L54;
  _L57.dig2 = _L51;
  _L57.dig3 = _L50;
  _L57.dig4 = _L46;
  kcg_copy_DMI_train_length_T_DMI_Types_Pkg(dmi_train_length_ct, &_L57);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_train_length_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

