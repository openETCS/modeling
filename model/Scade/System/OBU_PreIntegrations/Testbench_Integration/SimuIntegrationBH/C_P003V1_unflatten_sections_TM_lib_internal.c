/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_unflatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P003V1_unflatten_sections */
void C_P003V1_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_unflatten_sections::nid_packet_ok */ kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P003V1_unflatten_sections::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::C_P003V1_unflatten_sections::flat */ P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  /* TM_lib_internal::C_P003V1_unflatten_sections::sections */ P003V1_sectionlist_enum_T_TM_baseline2 *sections)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TM_lib_internal::C_P003V1_unflatten_sections */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L1 */
  static P003V1_OBU_sectionlist_int_T_TM_baseline2 _L1;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L5 */
  static array_int_32 _L5;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L6 */
  static array_int_32_32 _L6;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L9 */
  static array_168647 _L9;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L11 */
  static kcg_bool _L11;
  
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&_L1, flat);
  _L3 = n_iter;
  /* pow */ for (i2 = 0; i2 < 32; i2++) {
    _L5[i2] = _L3;
  }
  /* pow */ for (i1 = 0; i1 < 32; i1++) {
    kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&_L6[i1], &_L1);
  }
  _L11 = nid_packet_ok;
  /* 1 */ if (_L11) {
    /* 1 */ for (i = 0; i < 32; i++) {
      /* 1 */
      C_P003V1_us_array_TM_lib_internal(
        i,
        _L5[i],
        &_L6[i],
        &cond_iterw,
        &_L9[i]);
      _L7 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L7; i < 32; i++) {
    kcg_copy_P003V1_section_enum_T_TM_baseline2(
      &_L9[i],
      (P003V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P003V1_OBU_section_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(sections, &_L9);
  noname = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

