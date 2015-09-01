/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_RECV_ReadPacketKernel_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernel */
void UAB_RECV_ReadPacketKernel_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernel::Header */UAB_MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketData */UAB_CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketOut */UAB_array_int_500 *PacketOut)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L22 */
  static kcg_int _L22;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    UAB_RECV_ReadPacketKernelLoop_TM_lib_internal(
      i,
      PacketData,
      (*Header).startAddress,
      (*Header).endAddress,
      &tmp,
      &(*PacketOut)[i]);
    _L22 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L22; i < 500; i++) {
    (*PacketOut)[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_RECV_ReadPacketKernel_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

