/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SIM_SEND_WriteBaliseDataElement_H_
#define _SIM_SEND_WriteBaliseDataElement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* SIM_SEND_WriteBaliseDataElement */
extern void SIM_SEND_WriteBaliseDataElement(
  /* SIM_SEND_WriteBaliseDataElement::Index */ kcg_int Index,
  /* SIM_SEND_WriteBaliseDataElement::DataIn */ kcg_int DataIn,
  /* SIM_SEND_WriteBaliseDataElement::ElementIn */ CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* SIM_SEND_WriteBaliseDataElement::StartAddress */ kcg_int StartAddress,
  /* SIM_SEND_WriteBaliseDataElement::EndAddress */ kcg_int EndAddress,
  /* SIM_SEND_WriteBaliseDataElement::Cont */ kcg_bool *Cont,
  /* SIM_SEND_WriteBaliseDataElement::DataOut */ kcg_int *DataOut);

#endif /* _SIM_SEND_WriteBaliseDataElement_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SIM_SEND_WriteBaliseDataElement.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

