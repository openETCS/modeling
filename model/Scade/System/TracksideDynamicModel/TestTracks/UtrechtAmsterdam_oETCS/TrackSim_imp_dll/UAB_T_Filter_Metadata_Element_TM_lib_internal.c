/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_T_Filter_Metadata_Element_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata_Element */
kcg_bool UAB_T_Filter_Metadata_Element_TM_lib_internal(
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
** UAB_T_Filter_Metadata_Element_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

