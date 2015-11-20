/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P021_us_array */
void C_P021_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P021_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P021_us_array::flat */ P021_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P021_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P021_us_array::sections */ P021_section_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P021_us_array::_L1 */
  static P021_sections_array_flat_T_TM _L1;
  /* TM_lib_internal::C_P021_us_array::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P021_us_array::_L4 */
  static P021_section_enum_T_TM _L4;
  /* TM_lib_internal::C_P021_us_array::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::C_P021_us_array::_L15 */
  static kcg_int _L15;
  /* TM_lib_internal::C_P021_us_array::_L16 */
  static kcg_int _L16;
  /* TM_lib_internal::C_P021_us_array::_L18 */
  static kcg_int _L18;
  /* TM_lib_internal::C_P021_us_array::_L19 */
  static kcg_int _L19;
  /* TM_lib_internal::C_P021_us_array::_L20 */
  static kcg_int _L20;
  /* TM_lib_internal::C_P021_us_array::_L25 */
  static D_GRADIENT _L25;
  /* TM_lib_internal::C_P021_us_array::_L26 */
  static G_A _L26;
  /* TM_lib_internal::C_P021_us_array::_L28 */
  static Q_GDIR _L28;
  /* TM_lib_internal::C_P021_us_array::_L32 */
  static kcg_bool _L32;
  /* TM_lib_internal::C_P021_us_array::_L33 */
  static kcg_bool _L33;
  
  kcg_copy_P021_sections_array_flat_T_TM(&_L1, flat);
  _L32 = kcg_true;
  _L5 = i;
  _L18 = DIM_P021_n_sections_TM_lib_internal;
  _L16 = _L5 * _L18;
  _L15 = /* 1 */ C_P021_extract_el_section_TM_lib_internal(_L16, &_L1, 0);
  _L25 = /* 1 */ CAST_Int_to_D_GRADIENT_TM_conversions(_L15);
  _L19 = /* 2 */ C_P021_extract_el_section_TM_lib_internal(_L16, &_L1, 1);
  _L28 = /* 1 */ CAST_Int_to_Q_GDIR_TM_conversions(_L19);
  _L20 = /* 3 */ C_P021_extract_el_section_TM_lib_internal(_L16, &_L1, 2);
  _L26 = /* 1 */ CAST_Int_to_G_A_TM_conversions(_L20);
  _L4.valid = _L32;
  _L4.d_gradient = _L25;
  _L4.q_gdir = _L28;
  _L4.g_a = _L26;
  kcg_copy_P021_section_enum_T_TM(sections, &_L4);
  _L3 = n_iter_int;
  _L33 = _L3 > _L5;
  *cont = _L33;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_us_array_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

