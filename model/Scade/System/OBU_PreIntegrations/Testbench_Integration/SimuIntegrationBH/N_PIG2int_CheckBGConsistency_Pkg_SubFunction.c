/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int */
kcg_int N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig */ N_PIG n_pig)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L1 */
  static kcg_int _L1;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L2 */
  static N_PIG _L2;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L5 */
  static kcg_int _L5;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L6 */
  static kcg_int _L6;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L7 */
  static kcg_int _L7;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L8 */
  static kcg_int _L8;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L9 */
  static kcg_int _L9;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L10 */
  static kcg_int _L10;
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig2int */
  static kcg_int n_pig2int;
  
  _L2 = n_pig;
  _L3 = 1;
  _L4 = 2;
  _L5 = 3;
  _L6 = 4;
  _L7 = 5;
  _L8 = 6;
  _L9 = 7;
  _L10 = 8;
  switch (_L2) {
    case N_PIG_I_am_the_1st :
      _L1 = _L3;
      break;
    case N_PIG_I_am_the_2nd :
      _L1 = _L4;
      break;
    case N_PIG_I_am_the_3rd :
      _L1 = _L5;
      break;
    case N_PIG_I_am_the_4th :
      _L1 = _L6;
      break;
    case N_PIG_I_am_the_5th :
      _L1 = _L7;
      break;
    case N_PIG_I_am_the_6th :
      _L1 = _L8;
      break;
    case N_PIG_I_am_the_7th :
      _L1 = _L9;
      break;
    case N_PIG_I_am_the_8th :
      _L1 = _L10;
      break;
    
  }
  n_pig2int = _L1;
  return n_pig2int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** N_PIG2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

