/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_unflatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P003V1_unflatten_sections */
void C_P003V1_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_unflatten_sections::nid_packet_ok */kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P003V1_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P003V1_unflatten_sections::flat */P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  /* TM_lib_internal::C_P003V1_unflatten_sections::sections */P003V1_sectionlist_enum_T_TM_baseline2 *sections)
{
  kcg_bool tmp;
  kcg_int i;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L7 */ kcg_int _L7;
  
  if (nid_packet_ok) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      C_P003V1_us_array_TM_lib_internal(i, n_iter, flat, &tmp, &(*sections)[i]);
      _L7 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L7; i < 32; i++) {
    kcg_copy_P003V1_section_enum_T_TM_baseline2(
      &(*sections)[i],
      (P003V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P003V1_OBU_section_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

