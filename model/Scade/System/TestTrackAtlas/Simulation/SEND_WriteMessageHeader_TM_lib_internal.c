/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteMessageHeader_TM_lib_internal.h"

void SEND_WriteMessageHeader_reset_TM_lib_internal(
  outC_SEND_WriteMessageHeader_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ SEND_FindSlot_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::SEND_WriteMessageHeader */
void SEND_WriteMessageHeader_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteMessageHeader::HeadersIn */Metadata_T_Common_Types_Pkg *HeadersIn,
  /* TM_lib_internal::SEND_WriteMessageHeader::NewHeader */MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SEND_WriteMessageHeader_TM_lib_internal *outC)
{
  kcg_int tmp;
  kcg_int i;
  
  outC->_L5 = 0;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, HeadersIn);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L8,
    (Metadata_T_Common_Types_Pkg *) &DEFAULT_Headers_TM);
  outC->_L4 = kcg_true;
  outC->_L7 = outC->_L5;
  if (outC->_L4) {
    for (i = 0; i < 30; i++) {
      tmp = outC->_L7;
      /* 1 */
      SEND_FindSlot_TM_lib_internal(
        tmp,
        &outC->_L1[i],
        &outC->_L8[i],
        &outC->Context_1[i]);
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
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L9, NewHeader);
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
** SEND_WriteMessageHeader_TM_lib_internal.c
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

