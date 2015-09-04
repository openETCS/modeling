/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_unflatten_sections_TM_lib_internal.h"

void C_P015_unflatten_sections_reset_TM_lib_internal(
  outC_C_P015_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 32; i++) {
    /* 1 */ C_P015_us_array_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::C_P015_unflatten_sections */
void C_P015_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P015_unflatten_sections::nid_packet_ok */kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P015_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P015_unflatten_sections::flat */P015_sections_array_flat_T_TM *flat,
  outC_C_P015_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  outC->_L11 = nid_packet_ok;
  outC->_L13 = 0;
  outC->_L3 = n_iter;
  outC->_L12 = outC->_L13 < outC->_L3;
  outC->_L14 = outC->_L11 & outC->_L12;
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L5[i2] = outC->_L3;
  }
  kcg_copy_P015_sections_array_flat_T_TM(&outC->_L1, flat);
  for (i1 = 0; i1 < 32; i1++) {
    kcg_copy_P015_sections_array_flat_T_TM(&outC->_L6[i1], &outC->_L1);
  }
  if (outC->_L14) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      C_P015_us_array_TM_lib_internal(
        i,
        outC->_L5[i],
        &outC->_L6[i],
        &outC->Context_1[i]);
      kcg_copy_P015_section_enum_T_TM(
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
  
  for (i = outC->_L7; i < 32; i++) {
    kcg_copy_P015_section_enum_T_TM(
      &outC->_L9[i],
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L7;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->sections, &outC->_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

