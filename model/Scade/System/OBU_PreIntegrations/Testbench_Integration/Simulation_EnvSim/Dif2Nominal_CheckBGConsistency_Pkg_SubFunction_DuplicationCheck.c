/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal */
kcg_bool Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_2 */kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::valid */
  static kcg_bool valid;
  
  _L15 = m_dup_2 == M_DUP_No_duplicates;
  valid = ((m_dup_1 == M_DUP_No_duplicates) & (m_dup_2 ==
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise) & crcCheck_1 &
      crcCheck_2) | ((m_dup_1 ==
        M_DUP_This_balise_is_a_duplicate_of_the_next_balise) & _L15 &
      crcCheck_2) | ((m_dup_1 ==
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise) &
      ((crcCheck_2 & _L15) | (m_dup_2 ==
          M_DUP_This_balise_is_a_duplicate_of_the_next_balise)));
  return valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

