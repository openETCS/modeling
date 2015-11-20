/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader */
kcg_bool CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L48 */
  static kcg_int _L48;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::isConsistent */
  static kcg_bool isConsistent;
  
  _L48 = /* 1 */
    N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegramHeader_in).n_total);
  isConsistent = (/* 1 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        (*telegramHeader_in).n_pig) <= _L48) & (_L48 > 0) &
    (cTheTelegramFitsWithAll_CheckBGConsistency_Pkg >=
      (*telegramHeader_in).m_mcount) & ((*telegramHeader_in).m_mcount !=
      cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg);
  return isConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

