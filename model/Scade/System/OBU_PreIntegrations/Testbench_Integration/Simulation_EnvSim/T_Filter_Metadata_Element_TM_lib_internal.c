/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_Element_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata_Element */
kcg_bool T_Filter_Metadata_Element_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata_Element::value2 */kcg_int value2,
  /* TM_lib_internal::T_Filter_Metadata_Element::value1 */kcg_int value1,
  /* TM_lib_internal::T_Filter_Metadata_Element::do_filter */kcg_bool do_filter)
{
  /* TM_lib_internal::T_Filter_Metadata_Element::data_match */
  static kcg_bool data_match;
  
  data_match = (value1 == value2) | !do_filter;
  return data_match;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Filter_Metadata_Element_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

