/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* TM::T_extract_nid_packet_from_metadata_selector */
kcg_int T_extract_nid_packet_from_metadata_selector_TM(
  /* TM::T_extract_nid_packet_from_metadata_selector::Metadata_in */ kcg_int Metadata_in)
{
  /* TM::T_extract_nid_packet_from_metadata_selector::_L1 */
  static kcg_int _L1;
  /* TM::T_extract_nid_packet_from_metadata_selector::_L3 */
  static kcg_int _L3;
  /* TM::T_extract_nid_packet_from_metadata_selector::_L4 */
  static kcg_int _L4;
  /* TM::T_extract_nid_packet_from_metadata_selector::nid_packet */
  static kcg_int nid_packet;
  
  _L1 = Metadata_in;
  _L3 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  _L4 = _L1 / _L3;
  nid_packet = _L4;
  return nid_packet;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_extract_nid_packet_from_metadata_selector_TM.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

