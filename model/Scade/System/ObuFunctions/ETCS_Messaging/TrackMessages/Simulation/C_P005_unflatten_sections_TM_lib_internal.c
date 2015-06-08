/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T10:39:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_unflatten_sections_TM_lib_internal.h"

void C_P005_unflatten_sections_reset_TM_lib_internal(
  outC_C_P005_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ C_P005_us_array_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::C_P005_unflatten_sections */
void C_P005_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P005_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P005_unflatten_sections::flat */P005_sections_array_flat_T_TM *flat,
  outC_C_P005_unflatten_sections_TM_lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  outC->_L10 = kcg_true;
  outC->_L3 = n_iter;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L5[i2] = outC->_L3;
  }
  kcg_copy_P005_sections_array_flat_T_TM(&outC->_L1, flat);
  for (i1 = 0; i1 < 33; i1++) {
    kcg_copy_P005_sections_array_flat_T_TM(&outC->_L6[i1], &outC->_L1);
  }
  if (outC->_L10) {
    for (i = 0; i < 33; i++) {
      /* 1 */
      C_P005_us_array_TM_lib_internal(
        i,
        outC->_L5[i],
        &outC->_L6[i],
        &outC->Context_1[i]);
      kcg_copy_P005_section_enum_T_TM(
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
    kcg_copy_P005_section_enum_T_TM(
      &outC->_L9[i],
      (P005_section_enum_T_TM *) &DEFAULT_OBU_section_TM_lib_internal);
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L7;
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&outC->sections, &outC->_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-06-05T10:39:17
*************************************************************$ */

