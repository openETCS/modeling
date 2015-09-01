/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_C_P015_unflatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P015_unflatten_sections */
void UAB_C_P015_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P015_unflatten_sections::nid_packet_ok */kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P015_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P015_unflatten_sections::flat */UAB_P015_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P015_unflatten_sections::sections */UAB_P015_OBU_sectionlist_enum_T_TM *sections)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* TM_lib_internal::C_P015_unflatten_sections::_L7 */
  static kcg_int _L7;
  
  if (nid_packet_ok & (0 < n_iter)) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      UAB_C_P015_us_array_TM_lib_internal(
        i,
        n_iter,
        flat,
        &tmp,
        &(*sections)[i]);
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
    UAB_kcg_copy_P015_section_enum_T_TM(
      &(*sections)[i],
      (UAB_P015_section_enum_T_TM *) &UAB_DEFAULT_P015_OBU_section_TM);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_C_P015_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

