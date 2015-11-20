/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int */
kcg_int N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::n_total */ N_TOTAL n_total)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L10 */
  static kcg_int _L10;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L9 */
  static kcg_int _L9;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L8 */
  static kcg_int _L8;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L7 */
  static kcg_int _L7;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L6 */
  static kcg_int _L6;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L2 */
  static kcg_int _L2;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L1 */
  static kcg_int _L1;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::_L11 */
  static N_TOTAL _L11;
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::n_total2int */
  static kcg_int n_total2int;
  
  _L1 = 4;
  _L2 = 3;
  _L11 = n_total;
  _L9 = 1;
  _L7 = 2;
  _L10 = 5;
  _L4 = 6;
  _L6 = 7;
  _L8 = 8;
  switch (_L11) {
    case N_TOTAL_1_balise_in_the_group :
      _L3 = _L9;
      break;
    case N_TOTAL_2_balises_in_the_group :
      _L3 = _L7;
      break;
    case N_TOTAL_3_balises_in_the_group :
      _L3 = _L2;
      break;
    case N_TOTAL_4_balises_in_the_group :
      _L3 = _L1;
      break;
    case N_TOTAL_5_balises_in_the_group :
      _L3 = _L10;
      break;
    case N_TOTAL_6_balises_in_the_group :
      _L3 = _L4;
      break;
    case N_TOTAL_7_balises_in_the_group :
      _L3 = _L6;
      break;
    case N_TOTAL_8_balises_in_the_group :
      _L3 = _L8;
      break;
    
  }
  n_total2int = _L3;
  return n_total2int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

