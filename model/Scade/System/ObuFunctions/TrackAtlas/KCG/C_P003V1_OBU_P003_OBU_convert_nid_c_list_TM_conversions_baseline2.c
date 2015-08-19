/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list */
void C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::P003V1_onboard */P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::nid_c1 */NID_C *nid_c1,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::n_iter_out */N_ITER *n_iter_out,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::nid_c_list */P003_OBU_nid_c_sectionlist_enum_T_TM *nid_c_list)
{
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L116 */ array__11354 _L116;
  
  kcg_copy_P003V1_section_enum_T_TM_baseline2(
    &_L116[0],
    (P003V1_section_enum_T_TM_baseline2 *)
      &DEFAULT_P003V1_OBU_section_TM_baseline2);
  kcg_copy_array__12168(
    &(*nid_c_list)[0],
    (array__12168 *) &(*P003V1_onboard).SECTIONS[1]);
  kcg_copy_array__11354(&(*nid_c_list)[31], &_L116);
  *nid_c1 = (*P003V1_onboard).SECTIONS[0].nid_c;
  *n_iter_out = (*P003V1_onboard).n_iter;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

