/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T19:50:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MessageData_TM_lib_internal.h"

void SEND_MessageData_reset_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    SEND_WriteBaliseDataElement_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::SEND_MessageData */
void SEND_MessageData_TM_lib_internal(
  /* TM_lib_internal::SEND_MessageData::StartAddress */kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  outC->_L408 = EndAddress;
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L415[i3] = outC->_L408;
  }
  outC->_L407 = StartAddress;
  for (i2 = 0; i2 < 500; i2++) {
    outC->_L414[i2] = outC->_L407;
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L404, DataElementIn);
  for (i1 = 0; i1 < 500; i1++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L413[i1],
      &outC->_L404);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L1, DataIn);
  outC->_L403 = kcg_true;
  if (outC->_L403) {
    for (i = 0; i < 500; i++) {
      /* 1 */
      SEND_WriteBaliseDataElement_TM_lib_internal(
        i,
        outC->_L1[i],
        &outC->_L413[i],
        outC->_L414[i],
        outC->_L415[i],
        &outC->Context_1[i]);
      outC->_L406[i] = outC->Context_1[i].DataOut;
      outC->_L402 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L402 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L402; i < 500; i++) {
    outC->_L406[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L402;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->DataOut,
    &outC->_L406);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_MessageData_TM_lib_internal.c
** Generation date: 2015-06-09T19:50:49
*************************************************************$ */

