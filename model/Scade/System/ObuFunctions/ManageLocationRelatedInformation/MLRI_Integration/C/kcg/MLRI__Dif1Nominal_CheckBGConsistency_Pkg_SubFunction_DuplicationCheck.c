/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal */
kcg_bool MLRI__Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::m_dup_1 */MLRI__M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::m_dup_2 */MLRI__M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::crcCheck_2 */kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::_L6 */ kcg_bool _L6;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::valid */ kcg_bool valid;
  
  _L6 = m_dup_2 == MLRI__M_DUP_No_duplicates;
  valid = ((m_dup_1 == MLRI__M_DUP_No_duplicates) & _L6 & crcCheck_1 &
      crcCheck_2) | ((crcCheck_1 | crcCheck_2) & (m_dup_1 ==
        MLRI__M_DUP_This_balise_is_a_duplicate_of_the_next_balise) & (m_dup_2 ==
        MLRI__M_DUP_This_balise_is_a_duplicate_of_the_previous_balise)) |
    ((m_dup_1 ==
        MLRI__M_DUP_This_balise_is_a_duplicate_of_the_previous_balise) &
      ((m_dup_2 == MLRI__M_DUP_This_balise_is_a_duplicate_of_the_next_balise) |
        (_L6 & crcCheck_2)));
  return valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

