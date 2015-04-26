/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SIM_SEND_WriteBaliseMessageData_H_
#define _SIM_SEND_WriteBaliseMessageData_H_

#include "kcg_types.h"
#include "SIM_SEND_WriteBaliseDataElement.h"

/* =====================  no input structure  ====================== */


/* SIM_SEND_WriteBaliseMessageData */
extern void SIM_SEND_WriteBaliseMessageData(
  /* SIM_SEND_WriteBaliseMessageData::StartAddress */ kcg_int StartAddress,
  /* SIM_SEND_WriteBaliseMessageData::EndAddress */ kcg_int EndAddress,
  /* SIM_SEND_WriteBaliseMessageData::DataElementIn */ CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  /* SIM_SEND_WriteBaliseMessageData::DataIn */ CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* SIM_SEND_WriteBaliseMessageData::DataOut */ CompressedPacketData_T_Common_Types_Pkg *DataOut);

#endif /* _SIM_SEND_WriteBaliseMessageData_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SIM_SEND_WriteBaliseMessageData.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

