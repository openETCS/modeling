/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseDataElement */
void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Index */kcg_int Index,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataIn */kcg_int DataIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::ElementIn */CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::StartAddress */kcg_int StartAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::EndAddress */kcg_int EndAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Cont */kcg_bool *Cont,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataOut */kcg_int *DataOut)
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_WriteBaliseDataElement_TM_lib_internal.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

