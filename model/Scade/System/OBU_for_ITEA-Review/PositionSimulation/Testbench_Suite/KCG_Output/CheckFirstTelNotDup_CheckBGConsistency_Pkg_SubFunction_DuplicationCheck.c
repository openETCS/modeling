/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup */
kcg_bool CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::telegramHeader_in */ TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L4 */ kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::isTheFirst */ kcg_bool isTheFirst;
  
  _L4 = /* 1 */
    N_PIG2int_CheckBGConsistency_Pkg_SubFunction((*telegramHeader_in).n_pig);
  isTheFirst = (/* 1 */
      N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
        (*telegramHeader_in).n_total) == _L4) | (_L4 == 1);
  return isTheFirst;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

