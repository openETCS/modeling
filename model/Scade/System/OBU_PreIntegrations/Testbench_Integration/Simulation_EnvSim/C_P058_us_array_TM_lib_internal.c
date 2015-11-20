/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P058_us_array */
void C_P058_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P058_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P058_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P058_us_array::flat */P058_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P058_us_array::cont */kcg_bool *cont,
  /* TM_lib_internal::C_P058_us_array::sections */P058_section_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P058_us_array::_L16 */
  static kcg_int _L16;
  
  (*sections).valid = kcg_true;
  *cont = n_iter_int > i;
  _L16 = i * DIM_P058_n_sections_TM_lib_internal;
  (*sections).d_loc = /* 1 */
    CAST_Int_to_D_LOC_TM_conversions(
      /* 1 */ C_P058_extract_el_section_TM_lib_internal(_L16, flat, 0));
  (*sections).q_lgtloc = /* 1 */
    CAST_Int_to_Q_LGTLOC_TM_conversions(
      /* 2 */ C_P058_extract_el_section_TM_lib_internal(_L16, flat, 1));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P058_us_array_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

