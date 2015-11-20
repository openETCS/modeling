/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacketLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacketLoop */
void RECV_LookupPacketLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacketLoop::Index */ kcg_int Index,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderInit */ MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* TM_lib_internal::RECV_LookupPacketLoop::Message_in */ MetadataElement_T_Common_Types_Pkg *Message_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::ID_in */ kcg_int ID_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacketLoop::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int _1_noname;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L4 */
  static MetadataElement_T_Common_Types_Pkg _L4;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L27 */
  static NID_PACKET _L27;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L29 */
  static kcg_bool _L29;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L31 */
  static kcg_int _L31;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L32 */
  static kcg_bool _L32;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L33 */
  static kcg_bool _L33;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L34 */
  static kcg_bool _L34;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L39 */
  static kcg_int _L39;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L38 */
  static kcg_int _L38;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L37 */
  static kcg_bool _L37;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L36 */
  static Q_DIR _L36;
  /* TM_lib_internal::RECV_LookupPacketLoop::_L35 */
  static NID_PACKET _L35;
  
  _L3 = ID_in;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L4, Message_in);
  _L27 = _L4.nid_packet;
  _L33 = F_version;
  _L34 = F_id;
  _L32 = /* 1 */ T_Filter_Metadata_TM_lib_internal(_L3, _L27, _L33, _L34);
  _L29 = !_L32;
  *Cont = _L29;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, &_L4);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L30, HeaderInit);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &_L30);
  _L31 = Index;
  _1_noname = _L31;
  _L39 = _L4.endAddress;
  _L38 = _L4.startAddress;
  _L37 = _L4.valid;
  _L36 = _L4.q_dir;
  _L35 = _L4.nid_packet;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_LookupPacketLoop_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

