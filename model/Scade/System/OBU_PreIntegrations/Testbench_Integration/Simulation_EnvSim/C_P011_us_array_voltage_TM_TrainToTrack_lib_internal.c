/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage */
void C_P011_us_array_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::i */kcg_int i,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::n_iter_int */kcg_int n_iter_int,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::flat */P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::cont */kcg_bool *cont,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::sections */P011_voltage_TM_TrainToTrack *sections)
{
  static NID_CTRACTION tmp;
  
  *cont = n_iter_int > i;
  tmp = i * DIM_voltage_list_TM_TrainToTrack;
  (*sections).m_voltage = /* 1 */
    CAST_Int_to_M_VOLTAGE_TM_conversions(
      /* 2 */
      C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal(
        tmp,
        flat,
        0));
  (*sections).nid_ctraction = /* 1 */
    CAST_Int_to_NID_CTRACTION_TM_conversions(
      /* 1 */
      C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal(
        tmp,
        flat,
        1));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

