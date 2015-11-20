/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup */
kcg_bool CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::isTheFirst */
  static kcg_bool isTheFirst;
  
  _L4 = /* 1 */
    N_PIG2int_CheckBGConsistency_Pkg_SubFunction((*telegramHeader_in).n_pig);
  isTheFirst = (/* 1 */
      N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
        (*telegramHeader_in).n_total) == _L4) | (_L4 == 1);
  return isTheFirst;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

