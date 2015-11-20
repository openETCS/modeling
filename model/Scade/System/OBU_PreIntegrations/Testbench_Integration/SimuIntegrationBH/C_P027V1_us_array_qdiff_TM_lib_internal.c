/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_us_array_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_us_array_qdiff */
void C_P027V1_us_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_us_array_qdiff::i */ kcg_int i,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::flat */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::sections */ P027V1_section_enum_qdiff_T_TM_baseline2 *sections)
{
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L1 */
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 _L1;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L4 */
  static P027V1_section_enum_qdiff_T_TM_baseline2 _L4;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L15 */
  static kcg_int _L15;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L16 */
  static kcg_int _L16;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L18 */
  static kcg_int _L18;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L19 */
  static kcg_int _L19;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L25 */
  static NC_DIFF _L25;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L28 */
  static V_DIFF _L28;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L32 */
  static kcg_bool _L32;
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L33 */
  static kcg_bool _L33;
  
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&_L1, flat);
  _L32 = kcg_true;
  _L5 = i;
  _L18 = DIM_P027V1_n_sections_qdiff_TM_lib_internal;
  _L16 = _L5 * _L18;
  _L15 = /* 1 */ C_P027V1_extract_el_section_TM_lib_internal(_L16, &_L1, 0);
  _L25 = /* 1 */ CAST_Int_to_NC_DIFF_TM_conversions(_L15);
  _L19 = /* 2 */ C_P027V1_extract_el_section_TM_lib_internal(_L16, &_L1, 1);
  _L28 = /* 1 */ CAST_Int_to_V_DIFF_TM_conversions(_L19);
  _L4.valid = _L32;
  _L4.nc_diff = _L25;
  _L4.v_diff = _L28;
  kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(sections, &_L4);
  _L3 = n_iter_int;
  _L33 = _L3 > _L5;
  *cont = _L33;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_us_array_qdiff_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

