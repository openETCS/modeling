/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

void SEND_WriteBaliseDataElement_reset_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
{
}

/* TM_lib_internal::SEND_WriteBaliseDataElement */
void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Index */kcg_int Index,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataIn */kcg_int DataIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::ElementIn */CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::StartAddress */kcg_int StartAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::EndAddress */kcg_int EndAddress,
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
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
** SEND_WriteBaliseDataElement_TM_lib_internal.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

