/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernelLoop */
void RECV_ReadPacketKernelLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Index */ kcg_int Index,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressStart */ kcg_int AddressStart,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressEnd */ kcg_int AddressEnd,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketOut */ kcg_int *PacketOut)
{
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L18 */
  static kcg_bool _L18;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L20 */
  static kcg_int _L20;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L29 */
  static kcg_int _L29;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L30 */
  static kcg_int _L30;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L31 */
  static kcg_int _L31;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L32 */
  static kcg_int _L32;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L33 */
  static kcg_int _L33;
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L34 */
  static kcg_int _L34;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L9, PacketData);
  _L3 = AddressStart;
  _L20 = Index;
  _L29 = _L3 + _L20;
  if ((0 <= _L29) & (_L29 < 500)) {
    _L30 = _L9[_L29];
  }
  else {
    _L30 = 0;
  }
  *PacketOut = _L30;
  _L1 = Index;
  _L4 = AddressEnd;
  _L34 = 1;
  _L33 = _L1 + _L34;
  _L31 = AddressStart;
  _L32 = _L4 - _L31;
  _L18 = _L33 <= _L32;
  *Cont = _L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPacketKernelLoop_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

