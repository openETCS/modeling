/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_metadata_new_TM_lib_internal.h"

/* TM_lib_internal::T_Decode_metadata_new */
void T_Decode_metadata_new_TM_lib_internal(
  /* TM_lib_internal::T_Decode_metadata_new::Metadata_in */ kcg_int Metadata_in,
  /* TM_lib_internal::T_Decode_metadata_new::nid_packet */ kcg_int *nid_packet,
  /* TM_lib_internal::T_Decode_metadata_new::id */ kcg_int *id,
  /* TM_lib_internal::T_Decode_metadata_new::m_version */ kcg_int *m_version)
{
  /* TM_lib_internal::T_Decode_metadata_new::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::T_Decode_metadata_new::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::T_Decode_metadata_new::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::T_Decode_metadata_new::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::T_Decode_metadata_new::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::T_Decode_metadata_new::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::T_Decode_metadata_new::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::T_Decode_metadata_new::_L9 */
  static kcg_int _L9;
  /* TM_lib_internal::T_Decode_metadata_new::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::T_Decode_metadata_new::_L11 */
  static kcg_int _L11;
  
  _L1 = Metadata_in;
  _L3 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  _L4 = _L1 / _L3;
  *nid_packet = _L4;
  _L6 = DIM_offset_metadata_q_dir_TM_lib_internal;
  _L5 = _L1 % _L6;
  _L7 = DIM_offset_metadata_m_version_TM_lib_internal;
  _L9 = _L5 % _L7;
  _L11 = DIM_offset_metadata_id_TM_lib_internal;
  _L10 = _L9 / _L11;
  *id = _L10;
  _L8 = _L5 / _L7;
  *m_version = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Decode_metadata_new_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

