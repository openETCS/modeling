/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SIM_SEND_WriteRadioMessag.h"

void SIM_SEND_WriteRadioMessag_reset(outC_SIM_SEND_WriteRadioMessag *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ SEND_FindSlot_reset(&outC->Context_1[i]);
  }
}

/* SIM_SEND_WriteRadioMessageHeader */
void SIM_SEND_WriteRadioMessag(
  /* SIM_SEND_WriteRadioMessageHeader::HeadersIn */Metadata_T_Common_Types_Pkg *HeadersIn,
  /* SIM_SEND_WriteRadioMessageHeader::NewHeader */MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SIM_SEND_WriteRadioMessag *outC)
{
  kcg_int tmp;
  kcg_int i;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L9, NewHeader);
  outC->_L5 = 0;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, HeadersIn);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L8,
    (Metadata_T_Common_Types_Pkg *) &DEFAULT_Headers);
  outC->_L4 = kcg_true;
  outC->_L7 = outC->_L5;
  if (outC->_L4) {
    for (i = 0; i < 30; i++) {
      tmp = outC->_L7;
      /* 1 */
      SEND_FindSlot(tmp, &outC->_L1[i], &outC->_L8[i], &outC->Context_1[i]);
      outC->_L7 = outC->Context_1[i].Acc;
      outC->_L3 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = 0;
  }
  outC->_L33 = 0;
  outC->_L32 = outC->_L7 == outC->_L33;
  outC->_L34 = 1;
  outC->_L35 = outC->_L7 + outC->_L34;
  if (outC->_L32) {
    outC->_L31 = outC->_L33;
  }
  else {
    outC->_L31 = outC->_L35;
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L43, &outC->_L9);
  if (kcg_true) {
    outC->_L43.startAddress = outC->_L31;
  }
  outC->_L37 = outC->_L9.endAddress;
  outC->_L36 = outC->_L9.startAddress;
  outC->_L18 = outC->_L37 - outC->_L36;
  outC->_L22 = outC->_L31 + outC->_L18;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L44, &outC->_L43);
  if (kcg_true) {
    outC->_L44.endAddress = outC->_L22;
  }
  outC->NewEndAddr = outC->_L22;
  outC->NewStartAddr = outC->_L31;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L24, HeadersIn);
  outC->_L16 = 1;
  outC->_L17 = outC->_L3 - outC->_L16;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L23, &outC->_L24);
  if ((0 <= outC->_L17) & (outC->_L17 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L23[outC->_L17],
      &outC->_L44);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->HeadersOut, &outC->_L23);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_SEND_WriteRadioMessag.c
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

