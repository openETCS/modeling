/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/WriteP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* TM_lib_internal::SEND_MessageData */
void SEND_MessageData_TM_lib_internal(
  /* TM_lib_internal::SEND_MessageData::StartAddress */kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  /* TM_lib_internal::SEND_MessageData::DataOut */CompressedPacketData_T_Common_Types_Pkg *DataOut)
{
  kcg_bool tmp;
  kcg_int i;
  /* TM_lib_internal::SEND_MessageData::_L402 */ kcg_int _L402;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    SEND_WriteBaliseDataElement_TM_lib_internal(
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
** SEND_MessageData_TM_lib_internal.c
** Generation date: 2015-08-21T16:11:03
*************************************************************$ */

