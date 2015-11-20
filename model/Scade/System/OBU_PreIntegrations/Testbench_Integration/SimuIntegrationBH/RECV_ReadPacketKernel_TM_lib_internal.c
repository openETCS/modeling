/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernel_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernel */
void RECV_ReadPacketKernel_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernel::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketOut */ CompressedPacketData_T_Common_Types_Pkg *PacketOut)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TM_lib_internal::RECV_ReadPacketKernel */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L3 */
  static CompressedPacketData_T_Common_Types_Pkg _L3;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L4 */
  static MetadataElement_T_Common_Types_Pkg _L4;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L6 */
  static CompressedPacketData_T_Common_Types_Pkg _L6;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L7 */
  static CompressedPacketData_T_Common_Types_Pkg _L7;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L8 */
  static kcg_bool _L8;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L10 */
  static CompressedPacketData_T_Common_Types_Pkg _L10;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L18 */
  static array_int_500_500 _L18;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L22 */
  static kcg_int _L22;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L24 */
  static kcg_int _L24;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L23 */
  static kcg_int _L23;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L3, PacketData);
  /* pow */ for (i3 = 0; i3 < 500; i3++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L18[i3], &_L3);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L4, Header);
  _L24 = _L4.startAddress;
  /* pow */ for (i2 = 0; i2 < 500; i2++) {
    _L6[i2] = _L24;
  }
  _L23 = _L4.endAddress;
  /* pow */ for (i1 = 0; i1 < 500; i1++) {
    _L7[i1] = _L23;
  }
  _L8 = kcg_true;
  if (_L8) {
    for (i = 0; i < 500; i++) {
      /* 1 */
      RECV_ReadPacketKernelLoop_TM_lib_internal(
        i,
        &_L18[i],
        _L6[i],
        _L7[i],
        &cond_iterw,
        &_L10[i]);
      _L22 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L22 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L22; i < 500; i++) {
    _L10[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(PacketOut, &_L10);
  noname = _L22;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPacketKernel_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

