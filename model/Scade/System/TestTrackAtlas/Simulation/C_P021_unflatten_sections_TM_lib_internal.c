/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_unflatten_sections_TM_lib_internal.h"

void C_P021_unflatten_sections_reset_TM_lib_internal(
  outC_C_P021_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ C_P021_us_array_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::C_P021_unflatten_sections */
void C_P021_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P021_unflatten_sections::nid_packet_ok */kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P021_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P021_unflatten_sections::flat */P021_sections_array_flat_T_TM *flat,
  outC_C_P021_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  outC->_L11 = nid_packet_ok;
  outC->_L3 = n_iter;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L5[i2] = outC->_L3;
  }
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L1, flat);
  for (i1 = 0; i1 < 33; i1++) {
    kcg_copy_P021_sections_array_flat_T_TM(&outC->_L6[i1], &outC->_L1);
  }
  if (outC->_L11) {
    for (i = 0; i < 33; i++) {
      /* 1 */
      C_P021_us_array_TM_lib_internal(
        i,
        outC->_L5[i],
        &outC->_L6[i],
        &outC->Context_1[i]);
      kcg_copy_P021_section_enum_T_TM(
        &outC->_L9[i],
        &outC->Context_1[i].sections);
      outC->_L7 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L7 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L7; i < 33; i++) {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L9[i],
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L7;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->sections, &outC->_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

