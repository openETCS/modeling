/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SIM_SEND_WriteBaliseMessageData.h"

/* SIM_SEND_WriteBaliseMessageData */
void SIM_SEND_WriteBaliseMessageData(
  /* SIM_SEND_WriteBaliseMessageData::StartAddress */ kcg_int StartAddress,
  /* SIM_SEND_WriteBaliseMessageData::EndAddress */ kcg_int EndAddress,
  /* SIM_SEND_WriteBaliseMessageData::DataElementIn */ CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  /* SIM_SEND_WriteBaliseMessageData::DataIn */ CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* SIM_SEND_WriteBaliseMessageData::DataOut */ CompressedPacketData_T_Common_Types_Pkg *DataOut)
{
  kcg_bool tmp;
  kcg_int i;
  /* SIM_SEND_WriteBaliseMessageData::_L402 */ kcg_int _L402;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    SIM_SEND_WriteBaliseDataElement(
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SIM_SEND_WriteBaliseMessageData.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

