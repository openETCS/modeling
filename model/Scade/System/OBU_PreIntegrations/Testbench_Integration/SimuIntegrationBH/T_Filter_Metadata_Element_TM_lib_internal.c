/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_Element_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata_Element */
kcg_bool T_Filter_Metadata_Element_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata_Element::value2 */ kcg_int value2,
  /* TM_lib_internal::T_Filter_Metadata_Element::value1 */ kcg_int value1,
  /* TM_lib_internal::T_Filter_Metadata_Element::do_filter */ kcg_bool do_filter)
{
  /* TM_lib_internal::T_Filter_Metadata_Element::_L6 */
  static kcg_bool _L6;
  /* TM_lib_internal::T_Filter_Metadata_Element::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::T_Filter_Metadata_Element::_L4 */
  static kcg_bool _L4;
  /* TM_lib_internal::T_Filter_Metadata_Element::_L3 */
  static kcg_bool _L3;
  /* TM_lib_internal::T_Filter_Metadata_Element::_L2 */
  static kcg_bool _L2;
  /* TM_lib_internal::T_Filter_Metadata_Element::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::T_Filter_Metadata_Element::data_match */
  static kcg_bool data_match;
  
  _L1 = value2;
  _L2 = do_filter;
  _L5 = value1;
  _L4 = _L5 == _L1;
  _L6 = !_L2;
  _L3 = _L4 | _L6;
  data_match = _L3;
  return data_match;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Filter_Metadata_Element_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

