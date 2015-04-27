/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SIM_SEND_WriteBaliseMessageHeader.h"

/* SIM_SEND_WriteBaliseMessageHeader */
void SIM_SEND_WriteBaliseMessageHeader(
  /* SIM_SEND_WriteBaliseMessageHeader::HeadersIn */ Metadata_T_Common_Types_Pkg *HeadersIn,
  /* SIM_SEND_WriteBaliseMessageHeader::NewHeader */ MetadataElement_T_Common_Types_Pkg *NewHeader,
  /* SIM_SEND_WriteBaliseMessageHeader::HeadersOut */ Metadata_T_Common_Types_Pkg *HeadersOut,
  /* SIM_SEND_WriteBaliseMessageHeader::NewStartAddr */ kcg_int *NewStartAddr,
  /* SIM_SEND_WriteBaliseMessageHeader::NewEndAddr */ kcg_int *NewEndAddr)
{
  kcg_int tmp2;
  kcg_bool tmp1;
  kcg_int i;
  MetadataElement_T_Common_Types_Pkg tmp;
  /* SIM_SEND_WriteBaliseMessageHeader::_L3 */ kcg_int _L3;
  /* SIM_SEND_WriteBaliseMessageHeader::_L7 */ kcg_int _L7;
  
  _L7 = 0;
  for (i = 0; i < 30; i++) {
    tmp2 = _L7;
    /* 1 */
    SEND_FindSlot(
      tmp2,
      &(*HeadersIn)[i],
      (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_Headers[i],
      &tmp1,
      &_L7);
    _L3 = i + 1;
    if (!tmp1) {
      break;
    }
  }
  if (_L7 == 0) {
    *NewStartAddr = 0;
  }
  else {
    *NewStartAddr = _L7 + 1;
  }
  *NewEndAddr = *NewStartAddr + ((*NewHeader).endAddress -
      (*NewHeader).startAddress);
  kcg_copy_Metadata_T_Common_Types_Pkg(HeadersOut, HeadersIn);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, NewHeader);
  tmp.startAddress = *NewStartAddr;
  tmp.endAddress = *NewEndAddr;
  if ((0 <= _L3 - 1) & (_L3 - 1 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&(*HeadersOut)[_L3 - 1], &tmp);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SIM_SEND_WriteBaliseMessageHeader.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

