/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal */
kcg_bool Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_1 */ M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_2 */ M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L7 */
  static M_DUP _L7;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L6 */
  static kcg_bool _L6;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L5 */
  static M_DUP _L5;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L4 */
  static kcg_bool _L4;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L3 */
  static M_DUP _L3;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L9 */
  static M_DUP _L9;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L10 */
  static kcg_bool _L10;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L17 */
  static kcg_bool _L17;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L14 */
  static M_DUP _L14;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L13 */
  static M_DUP _L13;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L12 */
  static kcg_bool _L12;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L11 */
  static M_DUP _L11;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L24 */
  static kcg_bool _L24;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L23 */
  static M_DUP _L23;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L19 */
  static M_DUP _L19;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L25 */
  static kcg_bool _L25;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L26 */
  static M_DUP _L26;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L29 */
  static M_DUP _L29;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L28 */
  static kcg_bool _L28;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L27 */
  static M_DUP _L27;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L32 */
  static M_DUP _L32;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L31 */
  static kcg_bool _L31;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L30 */
  static M_DUP _L30;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L33 */
  static kcg_bool _L33;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L34 */
  static kcg_bool _L34;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L35 */
  static kcg_bool _L35;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L36 */
  static kcg_bool _L36;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L37 */
  static kcg_bool _L37;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L38 */
  static kcg_bool _L38;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L39 */
  static kcg_bool _L39;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::valid */
  static kcg_bool valid;
  
  _L3 = m_dup_1;
  _L7 = M_DUP_No_duplicates;
  _L4 = _L3 == _L7;
  _L5 = m_dup_2;
  _L9 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  _L6 = _L5 == _L9;
  _L35 = crcCheck_1;
  _L36 = crcCheck_2;
  _L10 = _L4 & _L6 & _L35 & _L36;
  _L11 = m_dup_2;
  _L14 = m_dup_1;
  _L13 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  _L17 = _L14 == _L13;
  _L26 = M_DUP_No_duplicates;
  _L15 = _L11 == _L26;
  _L37 = crcCheck_2;
  _L12 = _L17 & _L15 & _L37;
  _L19 = m_dup_1;
  _L23 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  _L24 = _L19 == _L23;
  _L38 = crcCheck_2;
  _L29 = m_dup_2;
  _L27 = M_DUP_No_duplicates;
  _L28 = _L29 == _L27;
  _L39 = _L38 & _L28;
  _L32 = m_dup_2;
  _L30 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  _L31 = _L32 == _L30;
  _L33 = _L39 | _L31;
  _L34 = _L24 & _L33;
  _L25 = _L10 | _L12 | _L34;
  valid = _L25;
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

