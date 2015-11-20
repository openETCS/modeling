/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal */
kcg_bool Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_1 */ M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_2 */ M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L7 */
  static M_DUP _L7;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L6 */
  static kcg_bool _L6;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L5 */
  static M_DUP _L5;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L4 */
  static kcg_bool _L4;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L3 */
  static M_DUP _L3;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L9 */
  static M_DUP _L9;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L10 */
  static kcg_bool _L10;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L35 */
  static kcg_bool _L35;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L36 */
  static kcg_bool _L36;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::valid */
  static kcg_bool valid;
  
  _L3 = m_dup_1;
  _L7 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  _L4 = _L3 == _L7;
  _L5 = m_dup_2;
  _L9 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  _L6 = _L5 == _L9;
  _L35 = crcCheck_1;
  _L36 = crcCheck_2;
  _L10 = _L4 & _L6 & _L35 & _L36;
  valid = _L10;
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

