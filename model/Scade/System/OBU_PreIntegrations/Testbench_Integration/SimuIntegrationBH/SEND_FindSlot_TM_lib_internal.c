/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_FindSlot_TM_lib_internal.h"

/* TM_lib_internal::SEND_FindSlot */
void SEND_FindSlot_TM_lib_internal(
  /* TM_lib_internal::SEND_FindSlot::a */ kcg_int a,
  /* TM_lib_internal::SEND_FindSlot::MessageIn */ MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* TM_lib_internal::SEND_FindSlot::EmptyHeader */ MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  /* TM_lib_internal::SEND_FindSlot::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::SEND_FindSlot::Acc */ kcg_int *Acc)
{
  /* TM_lib_internal::SEND_FindSlot::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::SEND_FindSlot::_L2 */
  static MetadataElement_T_Common_Types_Pkg _L2;
  /* TM_lib_internal::SEND_FindSlot::_L3 */
  static MetadataElement_T_Common_Types_Pkg _L3;
  /* TM_lib_internal::SEND_FindSlot::_L17 */
  static kcg_bool _L17;
  /* TM_lib_internal::SEND_FindSlot::_L19 */
  static kcg_int _L19;
  /* TM_lib_internal::SEND_FindSlot::_L27 */
  static NID_PACKET _L27;
  /* TM_lib_internal::SEND_FindSlot::_L28 */
  static kcg_int _L28;
  /* TM_lib_internal::SEND_FindSlot::_L29 */
  static NID_PACKET _L29;
  
  _L1 = a;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L2, MessageIn);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L3, EmptyHeader);
  _L29 = _L2.nid_packet;
  _L27 = _L3.nid_packet;
  _L17 = _L29 != _L27;
  *Cont = _L17;
  _L28 = _L2.endAddress;
  /* 1 */ if (_L17) {
    _L19 = _L28;
  }
  else {
    _L19 = _L1;
  }
  *Acc = _L19;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_FindSlot_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

