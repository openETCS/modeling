/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseDataElement */
void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Index */ kcg_int Index,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataIn */ kcg_int DataIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::ElementIn */ CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::StartAddress */ kcg_int StartAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::EndAddress */ kcg_int EndAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataOut */ kcg_int *DataOut)
{
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L3 */
  static CompressedPacketData_T_Common_Types_Pkg _L3;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L6 */
  static kcg_bool _L6;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L7 */
  static kcg_bool _L7;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L8 */
  static kcg_bool _L8;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L9 */
  static kcg_int _L9;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L14 */
  static kcg_int _L14;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L16 */
  static kcg_int _L16;
  /* TM_lib_internal::SEND_WriteBaliseDataElement::_L17 */
  static kcg_int _L17;
  
  _L1 = Index;
  _L2 = DataIn;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L3, ElementIn);
  _L5 = EndAddress;
  _L6 = _L5 >= _L1;
  *Cont = _L6;
  _L4 = StartAddress;
  _L7 = _L1 >= _L4;
  _L8 = _L6 & _L7;
  _L10 = Index;
  _L16 = StartAddress;
  _L17 = _L10 - _L16;
  if ((0 <= _L17) & (_L17 < 500)) {
    _L9 = _L3[_L17];
  }
  else {
    _L9 = 0;
  }
  /* 1 */ if (_L8) {
    _L14 = _L9;
  }
  else {
    _L14 = _L2;
  }
  *DataOut = _L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_WriteBaliseDataElement_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

