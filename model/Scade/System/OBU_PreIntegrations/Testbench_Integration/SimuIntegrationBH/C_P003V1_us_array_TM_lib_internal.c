/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P003V1_us_array */
void C_P003V1_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P003V1_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P003V1_us_array::flat */ P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  /* TM_lib_internal::C_P003V1_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P003V1_us_array::sections */ P003V1_section_enum_T_TM_baseline2 *sections)
{
  /* TM_lib_internal::C_P003V1_us_array::_L41 */
  static NID_C _L41;
  /* TM_lib_internal::C_P003V1_us_array::_L40 */
  static kcg_bool _L40;
  /* TM_lib_internal::C_P003V1_us_array::_L39 */
  static kcg_bool _L39;
  /* TM_lib_internal::C_P003V1_us_array::_L38 */
  static P003V1_section_enum_T_TM_baseline2 _L38;
  /* TM_lib_internal::C_P003V1_us_array::_L37 */
  static P003V1_OBU_sectionlist_int_T_TM_baseline2 _L37;
  /* TM_lib_internal::C_P003V1_us_array::_L36 */
  static kcg_int _L36;
  /* TM_lib_internal::C_P003V1_us_array::_L35 */
  static kcg_int _L35;
  /* TM_lib_internal::C_P003V1_us_array::_L34 */
  static kcg_int _L34;
  
  _L35 = i;
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&_L37, flat);
  _L34 = /* 2 */ C_P003V1_extract_el_section_TM_lib_internal(_L35, &_L37);
  _L40 = kcg_true;
  _L41 = /* 2 */ CAST_Int_to_NID_C_TM_conversions(_L34);
  _L38.valid = _L40;
  _L38.nid_c = _L41;
  kcg_copy_P003V1_section_enum_T_TM_baseline2(sections, &_L38);
  _L36 = n_iter_int;
  _L39 = _L36 > _L35;
  *cont = _L39;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_us_array_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

