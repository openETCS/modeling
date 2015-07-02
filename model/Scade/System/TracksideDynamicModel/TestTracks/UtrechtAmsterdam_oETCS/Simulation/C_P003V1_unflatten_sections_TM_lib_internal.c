/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_unflatten_sections_TM_lib_internal.h"

void C_P003V1_unflatten_sections_reset_TM_lib_internal(
  outC_C_P003V1_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 32; i++) {
    /* 1 */ C_P003V1_us_array_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::C_P003V1_unflatten_sections */
void C_P003V1_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_unflatten_sections::nid_packet_ok */kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P003V1_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P003V1_unflatten_sections::flat */P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  outC->_L11 = nid_packet_ok;
  outC->_L3 = n_iter;
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L5[i2] = outC->_L3;
  }
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&outC->_L1, flat);
  for (i1 = 0; i1 < 32; i1++) {
    kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(
      &outC->_L6[i1],
      &outC->_L1);
  }
  if (outC->_L11) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      C_P003V1_us_array_TM_lib_internal(
        i,
        outC->_L5[i],
        &outC->_L6[i],
        &outC->Context_1[i]);
      kcg_copy_P003V1_section_enum_T_TM_baseline2(
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
    kcg_copy_P003V1_section_enum_T_TM_baseline2(
      &outC->_L9[i],
      (P003V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P003V1_OBU_section_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L7;
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(&outC->sections, &outC->_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

