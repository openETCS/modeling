/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_SEND_MessageData_TM_lib_internal.h"

/* TM_lib_internal::SEND_MessageData */
void UAB_SEND_MessageData_TM_lib_internal(
  /* TM_lib_internal::SEND_MessageData::StartAddress */kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */UAB_CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */UAB_CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  /* TM_lib_internal::SEND_MessageData::DataOut */UAB_CompressedPacketData_T_Common_Types_Pkg *DataOut)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* TM_lib_internal::SEND_MessageData::_L402 */
  static kcg_int _L402;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    UAB_SEND_WriteBaliseDataElement_TM_lib_internal(
      i,
      (*DataIn)[i],
      DataElementIn,
      StartAddress,
      EndAddress,
      &tmp,
      &(*DataOut)[i]);
    _L402 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L402; i < 500; i++) {
    (*DataOut)[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_SEND_MessageData_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

