/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata */
kcg_bool T_Filter_Metadata_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata::Metadata_from_track */ kcg_int Metadata_from_track,
  /* TM_lib_internal::T_Filter_Metadata::Metadata_looked_for */ kcg_int Metadata_looked_for,
  /* TM_lib_internal::T_Filter_Metadata::F_version */ kcg_bool F_version,
  /* TM_lib_internal::T_Filter_Metadata::F_id */ kcg_bool F_id)
{
  /* TM_lib_internal::T_Filter_Metadata::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::T_Filter_Metadata::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::T_Filter_Metadata::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::T_Filter_Metadata::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::T_Filter_Metadata::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::T_Filter_Metadata::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::T_Filter_Metadata::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::T_Filter_Metadata::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::T_Filter_Metadata::_L11 */
  static kcg_bool _L11;
  /* TM_lib_internal::T_Filter_Metadata::_L17 */
  static kcg_bool _L17;
  /* TM_lib_internal::T_Filter_Metadata::_L18 */
  static kcg_bool _L18;
  /* TM_lib_internal::T_Filter_Metadata::_L19 */
  static kcg_bool _L19;
  /* TM_lib_internal::T_Filter_Metadata::_L20 */
  static kcg_bool _L20;
  /* TM_lib_internal::T_Filter_Metadata::_L22 */
  static kcg_bool _L22;
  /* TM_lib_internal::T_Filter_Metadata::data_match */
  static kcg_bool data_match;
  
  _L1 = Metadata_from_track;
  _L2 = Metadata_looked_for;
  /* 1 */ T_Decode_metadata_new_TM_lib_internal(_L1, &_L3, &_L4, &_L6);
  /* 2 */ T_Decode_metadata_new_TM_lib_internal(_L2, &_L7, &_L8, &_L10);
  _L11 = _L3 == _L7;
  _L17 = F_id;
  _L18 = F_version;
  _L20 = /* 1 */ T_Filter_Metadata_Element_TM_lib_internal(_L4, _L8, _L17);
  _L22 = /* 3 */ T_Filter_Metadata_Element_TM_lib_internal(_L6, _L10, _L18);
  _L19 = _L11 & _L20 & _L22;
  data_match = _L19;
  return data_match;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Filter_Metadata_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

