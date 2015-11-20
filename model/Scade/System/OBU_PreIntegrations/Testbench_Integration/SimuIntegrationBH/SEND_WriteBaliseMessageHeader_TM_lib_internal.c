/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseMessageHeader */
void SEND_WriteBaliseMessageHeader_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersIn */ Metadata_T_Common_Types_Pkg *HeadersIn,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewHeader */ MetadataElement_T_Common_Types_Pkg *NewHeader,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersOut */ Metadata_T_Common_Types_Pkg *HeadersOut,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewStartAddr */ kcg_int *NewStartAddr,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewEndAddr */ kcg_int *NewEndAddr)
{
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader */
  static kcg_int acc;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L1 */
  static Metadata_T_Common_Types_Pkg _L1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L4 */
  static kcg_bool _L4;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L8 */
  static Metadata_T_Common_Types_Pkg _L8;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L9 */
  static MetadataElement_T_Common_Types_Pkg _L9;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L16 */
  static kcg_int _L16;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L17 */
  static kcg_int _L17;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L18 */
  static kcg_int _L18;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L22 */
  static kcg_int _L22;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L23 */
  static Metadata_T_Common_Types_Pkg _L23;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L24 */
  static Metadata_T_Common_Types_Pkg _L24;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L31 */
  static kcg_int _L31;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L32 */
  static kcg_bool _L32;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L33 */
  static kcg_int _L33;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L34 */
  static kcg_int _L34;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L35 */
  static kcg_int _L35;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L36 */
  static kcg_int _L36;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L37 */
  static kcg_int _L37;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L44 */
  static MetadataElement_T_Common_Types_Pkg _L44;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L1, HeadersIn);
  _L4 = kcg_true;
  _L5 = 0;
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &_L8,
    (Metadata_T_Common_Types_Pkg *) &DEFAULT_Headers_TM);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L24, HeadersIn);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L9, NewHeader);
  _L7 = _L5;
  if (_L4) {
    for (i = 0; i < 30; i++) {
      acc = _L7;
      /* 1 */
      SEND_FindSlot_TM_lib_internal(acc, &_L1[i], &_L8[i], &cond_iterw, &_L7);
      _L3 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
  _L33 = 0;
  _L32 = _L7 == _L33;
  _L34 = 1;
  _L35 = _L7 + _L34;
  /* 1 */ if (_L32) {
    _L31 = _L33;
  }
  else {
    _L31 = _L35;
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L43, &_L9);
  if (kcg_true) {
    _L43.startAddress = _L31;
  }
  _L37 = _L9.endAddress;
  _L36 = _L9.startAddress;
  _L18 = _L37 - _L36;
  _L22 = _L31 + _L18;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L44, &_L43);
  if (kcg_true) {
    _L44.endAddress = _L22;
  }
  _L16 = 1;
  _L17 = _L3 - _L16;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L23, &_L24);
  if ((0 <= _L17) & (_L17 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L23[_L17], &_L44);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(HeadersOut, &_L23);
  *NewStartAddr = _L31;
  *NewEndAddr = _L22;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_WriteBaliseMessageHeader_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

