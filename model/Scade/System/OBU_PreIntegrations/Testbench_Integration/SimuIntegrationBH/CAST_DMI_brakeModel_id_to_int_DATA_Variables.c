/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_brakeModel_id_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_brakeModel_id_to_int */
DMI_brakeModel_id_INT_T_DATA CAST_DMI_brakeModel_id_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::dmi_brakeModel_id_ct */ DMI_brakeModel_id_T_DMI_Types_Pkg *dmi_brakeModel_id_ct)
{
  static kcg_bool noname;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L1 */
  static DMI_brakeModel_id_T_DMI_Types_Pkg _L1;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L7 */
  static kcg_int _L7;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L6 */
  static BCD_DMI_Types_Pkg _L6;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L5 */
  static BCD_DMI_Types_Pkg _L5;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L4 */
  static BCD_DMI_Types_Pkg _L4;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L8 */
  static kcg_int _L8;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L9 */
  static kcg_int _L9;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L11 */
  static kcg_int _L11;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L10 */
  static kcg_int _L10;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L13 */
  static kcg_int _L13;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L12 */
  static kcg_int _L12;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L22 */
  static kcg_int _L22;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L24 */
  static kcg_bool _L24;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L23 */
  static kcg_int _L23;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L26 */
  static kcg_bool _L26;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L25 */
  static kcg_int _L25;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L29 */
  static kcg_bool _L29;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L28 */
  static kcg_int _L28;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L37 */
  static kcg_bool _L37;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L38 */
  static kcg_bool _L38;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L39 */
  static kcg_int _L39;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L40 */
  static kcg_int _L40;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::_L41 */
  static kcg_bool _L41;
  /* DATA::Variables::CAST_DMI_brakeModel_id_to_int::dmi_brakeModel_id_int */
  static DMI_brakeModel_id_INT_T_DATA dmi_brakeModel_id_int;
  
  kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg(&_L1, dmi_brakeModel_id_ct);
  _L4 = _L1.dig3;
  _L5 = _L1.dig2;
  _L6 = _L1.dig1;
  _L7 = _L1.number;
  /* 1 */ BCD_to_Int_Utilities(_L6, &_L23, &_L24);
  _L9 = 10;
  _L8 = _L23 * _L9;
  /* 2 */ BCD_to_Int_Utilities(_L5, &_L25, &_L26);
  _L11 = 100;
  _L10 = _L25 * _L11;
  /* 3 */ BCD_to_Int_Utilities(_L4, &_L28, &_L29);
  _L13 = 1000;
  _L12 = _L28 * _L13;
  _L22 = _L7 + _L8 + _L10 + _L12;
  dmi_brakeModel_id_int = _L22;
  _L40 = 5;
  _L39 = 0;
  _L38 = /* 1 */ Int_Check_Utilities(_L7, _L40, _L39);
  _L37 = _L24 | _L26 | _L29 | _L38;
  error = _L37;
  _L41 = error;
  noname = _L41;
  return dmi_brakeModel_id_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_brakeModel_id_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

