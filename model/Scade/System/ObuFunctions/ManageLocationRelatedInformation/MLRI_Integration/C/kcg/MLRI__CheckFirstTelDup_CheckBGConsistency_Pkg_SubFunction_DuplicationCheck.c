/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup */
kcg_bool MLRI__CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::telegramHeader_in */MLRI__TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  kcg_int tmp;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L20 */ kcg_int _L20;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::isTheFirst */ kcg_bool isTheFirst;
  
  _L20 = /* 3 */
    MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegramHeader_in).n_pig);
  tmp = /* 3 */
    MLRI__N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegramHeader_in).n_total);
  isTheFirst = ((MLRI__M_DUP_This_balise_is_a_duplicate_of_the_next_balise ==
        (*telegramHeader_in).m_dup) & (tmp - 1 == _L20)) | ((_L20 == 2) &
      ((*telegramHeader_in).m_dup ==
        MLRI__M_DUP_This_balise_is_a_duplicate_of_the_previous_balise));
  return isTheFirst;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

