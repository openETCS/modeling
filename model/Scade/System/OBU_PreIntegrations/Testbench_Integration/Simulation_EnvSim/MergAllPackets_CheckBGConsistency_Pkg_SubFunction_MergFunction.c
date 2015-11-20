/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets */
void MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegramACC */Telegram_T_BG_Types_Pkg *telegramACC,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram */Telegram_T_BG_Types_Pkg *telegram,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::go_on */kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */Telegram_T_BG_Types_Pkg *telegram_out)
{
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L17 */
  static array_int_500 _L17_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L13 */
  static kcg_int _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L11 */
  static kcg_int _L11_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L12 */
  static kcg_int _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::diff */
  static kcg_int diff;
  
  i = /* 3 */
    N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegram).telegramheader.n_pig);
  diff = /* 4 */
    N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegramACC).telegramheader.n_pig) - i;
  *go_on = (*telegram).valid;
  IfBlock1_clock = (diff == - 1) & (((*telegramACC).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_next_balise) &
      ((*telegram).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise)) & *go_on;
  if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &(*telegram_out).packets.PacketData,
      &(*telegramACC).packets.PacketData);
  }
  else {
    else_clock_IfBlock1 = (diff == 1) & (((*telegramACC).telegramheader.m_dup ==
          M_DUP_This_balise_is_a_duplicate_of_the_previous_balise) &
        ((*telegram).telegramheader.m_dup ==
          M_DUP_This_balise_is_a_duplicate_of_the_next_balise)) & *go_on;
    if (else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &(*telegram_out).packets.PacketData,
        &(*telegramACC).packets.PacketData);
    }
    else if (*go_on) {
      /* 1 */
      FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &(*telegramACC).packets.PacketHeaders,
        &_L11_IfBlock1,
        &_L12_IfBlock1);
      _L13_IfBlock1 = _L12_IfBlock1 + 1;
      for (i = 0; i < 500; i++) {
        _L17_IfBlock1[i] = _L13_IfBlock1;
      }
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram);
      /* 1 */
      Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &(*telegramACC).packets.PacketHeaders,
        telegram,
        &(*telegram_out).packets.PacketHeaders);
      /* 1 */
      Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &(*telegramACC).packets.PacketData,
        &_L17_IfBlock1,
        &(*telegram).packets.PacketData,
        &(*telegram_out).packets.PacketData);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegramACC);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

