/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_C_P015_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P015_us_array */
void UAB_C_P015_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P015_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P015_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P015_us_array::flat */UAB_P015_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P015_us_array::cont */kcg_bool *cont,
  /* TM_lib_internal::C_P015_us_array::sections */UAB_P015_section_enum_T_TM *sections)
{
  static UAB_D_SECTIONTIMERSTOPLOC tmp;
  
  (*sections).valid = kcg_true;
  *cont = n_iter_int > i;
  tmp = i * UAB_DIM_P015_n_sections_TM_lib_internal;
  (*sections).l_section = /* 1 */
    UAB_CAST_Int_to_L_SECTION_TM_conversions(
      /* 1 */ UAB_C_P015_extract_el_section_TM_lib_internal(tmp, flat, 0));
  (*sections).q_sectiontimer = /* 1 */
    UAB_CAST_Int_to_Q_SECTIONTIMER_TM_conversions(
      /* 2 */ UAB_C_P015_extract_el_section_TM_lib_internal(tmp, flat, 1));
  (*sections).t_sectiontimer = /* 1 */
    UAB_CAST_Int_to_T_SECTIONTIMER_TM_conversions(
      /* 3 */ UAB_C_P015_extract_el_section_TM_lib_internal(tmp, flat, 2));
  (*sections).d_sectiontimerstoploc = /* 2 */
    UAB_CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(
      /* 4 */ UAB_C_P015_extract_el_section_TM_lib_internal(tmp, flat, 3));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_C_P015_us_array_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

