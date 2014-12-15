/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs */
kcg_bool MLRI__Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_1 */MLRI__N_PIG n_pig_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_1 */MLRI__M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_2 */MLRI__N_PIG n_pig_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_2 */MLRI__M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_2 */kcg_bool crcCheck_2)
{
  kcg_int tmp1;
  kcg_int tmp;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::valid */ kcg_bool valid;
  
  tmp1 = /* 2 */ MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(n_pig_2);
  tmp = /* 1 */ MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(n_pig_1);
  switch (tmp1 - tmp) {
    case 1 :
      valid = /* 1 */
        MLRI__Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_1,
          m_dup_2,
          crcCheck_1,
          crcCheck_2);
      break;
    case 2 :
      valid = /* 1 */
        MLRI__Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_1,
          m_dup_2,
          crcCheck_1,
          crcCheck_2);
      break;
    case 3 :
      valid = /* 1 */
        MLRI__Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_1,
          m_dup_2,
          crcCheck_1,
          crcCheck_2);
      break;
    case - 1 :
      valid = /* 2 */
        MLRI__Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_2,
          m_dup_1,
          crcCheck_2,
          crcCheck_1);
      break;
    case - 2 :
      valid = /* 2 */
        MLRI__Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_2,
          m_dup_1,
          crcCheck_2,
          crcCheck_1);
      break;
    case - 3 :
      valid = /* 2 */
        MLRI__Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_2,
          m_dup_1,
          crcCheck_2,
          crcCheck_1);
      break;
    
    default :
      valid = kcg_false;
  }
  return valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

