/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacket */
void RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */ kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */ Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacket::Found */ kcg_bool *Found,
  /* TM_lib_internal::RECV_LookupPacket::Index */ kcg_int *Index,
  /* TM_lib_internal::RECV_LookupPacket::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TM_lib_internal::RECV_LookupPacket */
  static MetadataElement_T_Common_Types_Pkg acc;
  /* TM_lib_internal::RECV_LookupPacket */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::RECV_LookupPacket::_L1 */
  static Metadata_T_Common_Types_Pkg _L1;
  /* TM_lib_internal::RECV_LookupPacket::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::RECV_LookupPacket::_L3 */
  static array_int_30 _L3;
  /* TM_lib_internal::RECV_LookupPacket::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::RECV_LookupPacket::_L23 */
  static MetadataElement_T_Common_Types_Pkg _L23;
  /* TM_lib_internal::RECV_LookupPacket::_L24 */
  static NID_PACKET _L24;
  /* TM_lib_internal::RECV_LookupPacket::_L26 */
  static MetadataElement_T_Common_Types_Pkg _L26;
  /* TM_lib_internal::RECV_LookupPacket::_L22 */
  static MetadataElement_T_Common_Types_Pkg _L22;
  /* TM_lib_internal::RECV_LookupPacket::_L27 */
  static MetadataElement_T_Common_Types_Pkg _L27;
  /* TM_lib_internal::RECV_LookupPacket::_L28 */
  static kcg_int _L28;
  /* TM_lib_internal::RECV_LookupPacket::_L29 */
  static kcg_int _L29;
  /* TM_lib_internal::RECV_LookupPacket::_L30 */
  static kcg_bool _L30;
  /* TM_lib_internal::RECV_LookupPacket::_L31 */
  static kcg_bool _L31;
  /* TM_lib_internal::RECV_LookupPacket::_L32 */
  static kcg_bool _L32;
  /* TM_lib_internal::RECV_LookupPacket::_L34 */
  static kcg_int _L34;
  /* TM_lib_internal::RECV_LookupPacket::_L35 */
  static kcg_bool _L35;
  /* TM_lib_internal::RECV_LookupPacket::_L36 */
  static kcg_bool _L36;
  /* TM_lib_internal::RECV_LookupPacket::_L38 */
  static DMI_Available_Menu_int_T_DATA _L38;
  /* TM_lib_internal::RECV_LookupPacket::_L40 */
  static DMI_Available_Menu_int_T_DATA _L40;
  /* TM_lib_internal::RECV_LookupPacket::_L5 */
  static kcg_bool _L5;
  /* TM_lib_internal::RECV_LookupPacket::_L44 */
  static kcg_bool _L44;
  /* TM_lib_internal::RECV_LookupPacket::_L45 */
  static kcg_bool _L45;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L1, HeadersIN);
  _L2 = Message_ID;
  _L34 = Message_ID;
  /* pow */ for (i3 = 0; i3 < 30; i3++) {
    _L3[i3] = _L34;
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L22,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  _L35 = F_version;
  /* pow */ for (i2 = 0; i2 < 30; i2++) {
    _L38[i2] = _L35;
  }
  _L36 = F_id;
  /* pow */ for (i1 = 0; i1 < 30; i1++) {
    _L40[i1] = _L36;
  }
  _L5 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L23, &_L22);
  if (_L5) {
    for (i = 0; i < 30; i++) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&acc, &_L23);
      /* 1 */
      RECV_LookupPacketLoop_TM_lib_internal(
        i,
        &acc,
        &_L1[i],
        _L3[i],
        _L38[i],
        _L40[i],
        &cond_iterw,
        &_L23);
      _L4 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L4 = 0;
  }
  _L24 = _L23.nid_packet;
  _L45 = _L23.valid;
  _L31 = F_version;
  _L32 = F_id;
  _L30 = /* 1 */ T_Filter_Metadata_TM_lib_internal(_L24, _L2, _L31, _L32);
  _L44 = _L45 & _L30;
  *Found = _L44;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L27,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  /* 1 */ if (_L44) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L26, &_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L26, &_L27);
  }
  _L29 = 1;
  _L28 = _L4 - _L29;
  *Index = _L28;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, &_L26);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_LookupPacket_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

