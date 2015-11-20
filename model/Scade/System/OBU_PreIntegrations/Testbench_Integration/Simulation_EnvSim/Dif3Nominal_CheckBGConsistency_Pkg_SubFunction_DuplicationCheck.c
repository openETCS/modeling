/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal */
kcg_bool Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_2 */kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::valid */
  static kcg_bool valid;
  
  valid = (m_dup_1 == M_DUP_This_balise_is_a_duplicate_of_the_next_balise) &
    (m_dup_2 == M_DUP_This_balise_is_a_duplicate_of_the_previous_balise) &
    crcCheck_1 & crcCheck_2;
  return valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

