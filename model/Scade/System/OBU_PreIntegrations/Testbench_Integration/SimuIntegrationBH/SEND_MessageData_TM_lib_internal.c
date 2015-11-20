/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* TM_lib_internal::SEND_MessageData */
void SEND_MessageData_TM_lib_internal(
  /* TM_lib_internal::SEND_MessageData::StartAddress */ kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */ kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */ CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */ CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  /* TM_lib_internal::SEND_MessageData::DataOut */ CompressedPacketData_T_Common_Types_Pkg *DataOut)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TM_lib_internal::SEND_MessageData */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TM_lib_internal::SEND_MessageData::_L1 */
  static CompressedPacketData_T_Common_Types_Pkg _L1;
  /* TM_lib_internal::SEND_MessageData::_L402 */
  static kcg_int _L402;
  /* TM_lib_internal::SEND_MessageData::_L403 */
  static kcg_bool _L403;
  /* TM_lib_internal::SEND_MessageData::_L404 */
  static CompressedPacketData_T_Common_Types_Pkg _L404;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static CompressedPacketData_T_Common_Types_Pkg _L406;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _L407;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _L408;
  /* TM_lib_internal::SEND_MessageData::_L413 */
  static array_int_500_500 _L413;
  /* TM_lib_internal::SEND_MessageData::_L414 */
  static CompressedPacketData_T_Common_Types_Pkg _L414;
  /* TM_lib_internal::SEND_MessageData::_L415 */
  static CompressedPacketData_T_Common_Types_Pkg _L415;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L1, DataIn);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L404, DataElementIn);
  /* pow */ for (i3 = 0; i3 < 500; i3++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L413[i3], &_L404);
  }
  _L407 = StartAddress;
  /* pow */ for (i2 = 0; i2 < 500; i2++) {
    _L414[i2] = _L407;
  }
  _L408 = EndAddress;
  /* pow */ for (i1 = 0; i1 < 500; i1++) {
    _L415[i1] = _L408;
  }
  _L403 = kcg_true;
  if (_L403) {
    for (i = 0; i < 500; i++) {
      /* 1 */
      SEND_WriteBaliseDataElement_TM_lib_internal(
        i,
        _L1[i],
        &_L413[i],
        _L414[i],
        _L415[i],
        &cond_iterw,
        &_L406[i]);
      _L402 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L402 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L402; i < 500; i++) {
    _L406[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(DataOut, &_L406);
  noname = _L402;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MessageData_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

