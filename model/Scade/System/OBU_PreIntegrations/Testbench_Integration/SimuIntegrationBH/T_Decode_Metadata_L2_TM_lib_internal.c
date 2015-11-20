/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"

/* TM_lib_internal::T_Decode_Metadata_L2 */
kcg_int T_Decode_Metadata_L2_TM_lib_internal(
  /* TM_lib_internal::T_Decode_Metadata_L2::Metadata */ kcg_int Metadata,
  /* TM_lib_internal::T_Decode_Metadata_L2::i */ kcg_int i)
{
  /* TM_lib_internal::T_Decode_Metadata_L2::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::T_Decode_Metadata_L2::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::T_Decode_Metadata_L2::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::T_Decode_Metadata_L2::nid_packet */
  static kcg_int nid_packet;
  
  _L1 = i;
  _L2 = Metadata;
  _L3 = _L1 + _L2;
  nid_packet = _L3;
  return nid_packet;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Decode_Metadata_L2_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

