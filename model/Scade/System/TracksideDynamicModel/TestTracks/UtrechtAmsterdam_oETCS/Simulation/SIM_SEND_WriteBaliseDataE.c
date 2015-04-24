/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SIM_SEND_WriteBaliseDataE.h"

void SIM_SEND_WriteBaliseDataE_reset(outC_SIM_SEND_WriteBaliseDataE *outC)
{
}

/* SIM_SEND_WriteBaliseDataElement */
void SIM_SEND_WriteBaliseDataE(
  /* SIM_SEND_WriteBaliseDataElement::Index */kcg_int Index,
  /* SIM_SEND_WriteBaliseDataElement::DataIn */kcg_int DataIn,
  /* SIM_SEND_WriteBaliseDataElement::ElementIn */CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* SIM_SEND_WriteBaliseDataElement::StartAddress */kcg_int StartAddress,
  /* SIM_SEND_WriteBaliseDataElement::EndAddress */kcg_int EndAddress,
  outC_SIM_SEND_WriteBaliseDataE *outC)
{
  outC->_L10 = Index;
  outC->_L16 = StartAddress;
  outC->_L17 = outC->_L10 - outC->_L16;
  outC->_L5 = EndAddress;
  outC->_L1 = Index;
  outC->_L6 = outC->_L5 >= outC->_L1;
  outC->_L4 = StartAddress;
  outC->_L7 = outC->_L1 >= outC->_L4;
  outC->_L8 = outC->_L6 & outC->_L7;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L3, ElementIn);
  if ((0 <= outC->_L17) & (outC->_L17 < 500)) {
    outC->_L9 = outC->_L3[outC->_L17];
  }
  else {
    outC->_L9 = 0;
  }
  outC->_L2 = DataIn;
  if (outC->_L8) {
    outC->_L14 = outC->_L9;
  }
  else {
    outC->_L14 = outC->_L2;
  }
  outC->DataOut = outC->_L14;
  outC->Cont = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_SEND_WriteBaliseDataE.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

