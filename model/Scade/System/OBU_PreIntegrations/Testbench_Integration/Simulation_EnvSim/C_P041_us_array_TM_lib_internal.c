/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P041_us_array */
void C_P041_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P041_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P041_us_array::flat */P041_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P041_us_array::cont */kcg_bool *cont,
  /* TM_lib_internal::C_P041_us_array::sections */P041_section_enum_T_TM *sections)
{
  static L_ACKLEVELTR tmp;
  
  (*sections).valid = kcg_true;
  *cont = n_iter_int > i;
  tmp = i * DIM_P041_n_sections_TM_lib_internal;
  (*sections).m_leveltr = /* 1 */
    CAST_Int_to_M_LEVELTR_TM_conversions(
      /* 3 */ C_P041_extract_el_section_TM_lib_internal(tmp, flat, 0));
  (*sections).nid_ntc = /* 1 */
    CAST_Int_to_NID_NTC_TM_conversions(
      /* 2 */ C_P041_extract_el_section_TM_lib_internal(tmp, flat, 1));
  (*sections).l_ackleveltr = /* 1 */
    CAST_Int_to_L_ACKLEVELTR_TM_conversions(
      /* 1 */ C_P041_extract_el_section_TM_lib_internal(tmp, flat, 2));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_us_array_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

