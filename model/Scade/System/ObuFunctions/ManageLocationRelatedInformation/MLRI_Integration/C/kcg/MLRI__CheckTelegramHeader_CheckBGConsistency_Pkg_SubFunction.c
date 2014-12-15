/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader */
kcg_bool MLRI__CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::telegramHeader_in */MLRI__TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  kcg_int tmp;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L48 */ kcg_int _L48;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::isConsistent */ kcg_bool isConsistent;
  
  _L48 = /* 1 */
    MLRI__N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegramHeader_in).n_total);
  tmp = /* 1 */
    MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegramHeader_in).n_pig);
  isConsistent = (tmp <= _L48) & (_L48 > 0) &
    (MLRI__theTelegramFitsWithAll_CheckBGConsistency_Pkg >=
      (*telegramHeader_in).m_mcount) & ((*telegramHeader_in).m_mcount !=
      MLRI__theTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg);
  return isConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

