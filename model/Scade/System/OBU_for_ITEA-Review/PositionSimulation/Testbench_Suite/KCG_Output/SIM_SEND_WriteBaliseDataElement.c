/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SIM_SEND_WriteBaliseDataElement.h"

/* SIM_SEND_WriteBaliseDataElement */
void SIM_SEND_WriteBaliseDataElement(
  /* SIM_SEND_WriteBaliseDataElement::Index */ kcg_int Index,
  /* SIM_SEND_WriteBaliseDataElement::DataIn */ kcg_int DataIn,
  /* SIM_SEND_WriteBaliseDataElement::ElementIn */ CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* SIM_SEND_WriteBaliseDataElement::StartAddress */ kcg_int StartAddress,
  /* SIM_SEND_WriteBaliseDataElement::EndAddress */ kcg_int EndAddress,
  /* SIM_SEND_WriteBaliseDataElement::Cont */ kcg_bool *Cont,
  /* SIM_SEND_WriteBaliseDataElement::DataOut */ kcg_int *DataOut)
{
  *Cont = EndAddress >= Index;
  if (*Cont & (Index >= StartAddress)) {
    if ((0 <= Index - StartAddress) & (Index - StartAddress < 500)) {
      *DataOut = (*ElementIn)[Index - StartAddress];
    }
    else {
      *DataOut = 0;
    }
  }
  else {
    *DataOut = DataIn;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SIM_SEND_WriteBaliseDataElement.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

