/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P005_us_array */
void C_P005_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P005_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P005_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P005_us_array::flat */P005_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P005_us_array::cont */kcg_bool *cont,
  /* TM_lib_internal::C_P005_us_array::sections */P005_section_enum_T_TM *sections)
{
  static Q_LOCACC tmp;
  
  (*sections).valid = kcg_true;
  *cont = n_iter_int > i;
  tmp = i * DIM_P005_n_sections_TM_lib_internal;
  (*sections).d_link = /* 1 */
    CAST_Int_to_D_LINK_TM_conversions(
      /* 1 */ C_P005_extract_el_section_TM_lib_internal(tmp, flat, 0));
  (*sections).q_newcountry = /* 1 */
    CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(
      /* 2 */ C_P005_extract_el_section_TM_lib_internal(tmp, flat, 1));
  (*sections).nid_c = /* 1 */
    CAST_Int_to_NID_C_TM_conversions(
      /* 3 */ C_P005_extract_el_section_TM_lib_internal(tmp, flat, 2));
  (*sections).nid_bg = /* 1 */
    CAST_Int_to_NID_BG_TM_conversions(
      /* 4 */ C_P005_extract_el_section_TM_lib_internal(tmp, flat, 3));
  (*sections).q_linkorientation = /* 1 */
    CAST_Int_to_Q_LINKORIENTATION_TM_conversions(
      /* 5 */ C_P005_extract_el_section_TM_lib_internal(tmp, flat, 4));
  (*sections).q_linkreaction = /* 1 */
    CAST_Int_to_Q_LINKREACTION_TM_conversions(
      /* 6 */ C_P005_extract_el_section_TM_lib_internal(tmp, flat, 5));
  (*sections).q_locacc = /* 1 */
    CAST_Int_to_Q_LOCACC_TM_conversions(
      /* 7 */ C_P005_extract_el_section_TM_lib_internal(tmp, flat, 6));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_us_array_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

