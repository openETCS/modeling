/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_SEND_WriteBaliseMessageHeader_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseMessageHeader */
void UAB_SEND_WriteBaliseMessageHeader_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersIn */UAB_Metadata_T_Common_Types_Pkg *HeadersIn,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewHeader */UAB_MetadataElement_T_Common_Types_Pkg *NewHeader,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersOut */UAB_Metadata_T_Common_Types_Pkg *HeadersOut,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewStartAddr */kcg_int *NewStartAddr,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewEndAddr */kcg_int *NewEndAddr)
{
  static kcg_int tmp2;
  static kcg_bool tmp1;
  static kcg_int i;
  static UAB_MetadataElement_T_Common_Types_Pkg tmp;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3;
  
  _L7 = 0;
  for (i = 0; i < 30; i++) {
    tmp2 = _L7;
    /* 1 */
    UAB_SEND_FindSlot_TM_lib_internal(
      tmp2,
      &(*HeadersIn)[i],
      (UAB_MetadataElement_T_Common_Types_Pkg *) &UAB_DEFAULT_Headers_TM[i],
      &tmp1,
      &_L7);
    _L3 = i + 1;
    if (!tmp1) {
      break;
    }
  }
  if (_L7 == 0) {
    *NewStartAddr = 0;
  }
  else {
    *NewStartAddr = _L7 + 1;
  }
  *NewEndAddr = *NewStartAddr + ((*NewHeader).endAddress -
      (*NewHeader).startAddress);
  UAB_kcg_copy_Metadata_T_Common_Types_Pkg(HeadersOut, HeadersIn);
  UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, NewHeader);
  tmp.startAddress = *NewStartAddr;
  tmp.endAddress = *NewEndAddr;
  if ((0 <= _L3 - 1) & (_L3 - 1 < 30)) {
    UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &(*HeadersOut)[_L3 - 1],
      &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_SEND_WriteBaliseMessageHeader_TM_lib_internal.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

