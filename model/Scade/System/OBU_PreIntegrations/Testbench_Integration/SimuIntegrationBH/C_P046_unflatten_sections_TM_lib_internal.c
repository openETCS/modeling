/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_unflatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P046_unflatten_sections */
void C_P046_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P046_unflatten_sections::nid_packet_ok */ kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P046_unflatten_sections::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::C_P046_unflatten_sections::flat */ P046_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P046_unflatten_sections::sections */ P046_OBU_sectionlist_enum_T_TM *sections)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TM_lib_internal::C_P046_unflatten_sections */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TM_lib_internal::C_P046_unflatten_sections::_L1 */
  static P046_sections_array_flat_T_TM _L1;
  /* TM_lib_internal::C_P046_unflatten_sections::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P046_unflatten_sections::_L5 */
  static array_int_33 _L5;
  /* TM_lib_internal::C_P046_unflatten_sections::_L6 */
  static array_int_66_33 _L6;
  /* TM_lib_internal::C_P046_unflatten_sections::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::C_P046_unflatten_sections::_L9 */
  static P046_OBU_sectionlist_enum_T_TM _L9;
  /* TM_lib_internal::C_P046_unflatten_sections::_L11 */
  static kcg_bool _L11;
  
  kcg_copy_P046_sections_array_flat_T_TM(&_L1, flat);
  _L3 = n_iter;
  /* pow */ for (i2 = 0; i2 < 33; i2++) {
    _L5[i2] = _L3;
  }
  /* pow */ for (i1 = 0; i1 < 33; i1++) {
    kcg_copy_P046_sections_array_flat_T_TM(&_L6[i1], &_L1);
  }
  _L11 = nid_packet_ok;
  if (_L11) {
    for (i = 0; i < 33; i++) {
      /* 1 */
      C_P046_us_array_TM_lib_internal(i, _L5[i], &_L6[i], &cond_iterw, &_L9[i]);
      _L7 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L7; i < 33; i++) {
    kcg_copy_P046_section_enum_T_TM(
      &_L9[i],
      (P046_section_enum_T_TM *) &DEFAULT_P046_OBU_section_TM);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(sections, &_L9);
  noname = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

