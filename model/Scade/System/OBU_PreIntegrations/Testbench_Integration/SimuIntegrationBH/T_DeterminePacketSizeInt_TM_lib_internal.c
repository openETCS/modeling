/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"

/* TM_lib_internal::T_DeterminePacketSizeInt */
kcg_int T_DeterminePacketSizeInt_TM_lib_internal(
  /* TM_lib_internal::T_DeterminePacketSizeInt::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_body */ kcg_int size_body,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_section */ kcg_int size_section)
{
  /* TM_lib_internal::T_DeterminePacketSizeInt::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::T_DeterminePacketSizeInt::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::T_DeterminePacketSizeInt::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::T_DeterminePacketSizeInt::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::T_DeterminePacketSizeInt::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::T_DeterminePacketSizeInt::p_size */
  static kcg_int p_size;
  
  _L1 = n_iter;
  _L2 = size_body;
  _L3 = size_section;
  _L6 = _L1 * _L3;
  _L7 = _L2 + _L6;
  p_size = _L7;
  return p_size;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_DeterminePacketSizeInt_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

