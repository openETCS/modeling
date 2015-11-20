/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets */
void MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegramACC */ Telegram_T_BG_Types_Pkg *telegramACC,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg *_14_telegram_out)
{
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */
  static Telegram_T_BG_Types_Pkg _1_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L4 */
  static CompressedPacketData_T_Common_Types_Pkg _L4_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L3 */
  static Telegram_T_BG_Types_Pkg _L3_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L2 */
  static Telegram_T_BG_Types_Pkg _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L1 */
  static Telegram_T_BG_Types_Pkg _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */
  static Telegram_T_BG_Types_Pkg telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */
  static Telegram_T_BG_Types_Pkg _5_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L20 */
  static Telegram_T_BG_Types_Pkg _L20_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L19 */
  static Telegram_T_BG_Types_Pkg _L19_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L18 */
  static Telegram_T_BG_Types_Pkg _L18_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L17 */
  static CompressedPacketData_T_Common_Types_Pkg _L17_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L16 */
  static CompressedPacketData_T_Common_Types_Pkg _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L15 */
  static Telegram_T_BG_Types_Pkg _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L14 */
  static kcg_int _L14_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L13 */
  static kcg_int _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L11 */
  static kcg_int _L11_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L12 */
  static kcg_int _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L10 */
  static Metadata_T_Common_Types_Pkg _L10_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L8 */
  static Metadata_T_Common_Types_Pkg _L8_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L4 */
  static Telegram_T_BG_Types_Pkg _L410_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L3 */
  static CompressedPacketData_T_Common_Types_Pkg _L311_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L2 */
  static Metadata_T_Common_Types_Pkg _L212_IfBlock1;
  static kcg_int noname;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */
  static Telegram_T_BG_Types_Pkg _4_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::else::_L1 */
  static Telegram_T_BG_Types_Pkg _L113_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */
  static Telegram_T_BG_Types_Pkg _2_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L5 */
  static Telegram_T_BG_Types_Pkg _L5_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L4 */
  static Telegram_T_BG_Types_Pkg _L49_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L3 */
  static Telegram_T_BG_Types_Pkg _L38_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L2 */
  static CompressedPacketData_T_Common_Types_Pkg _L27_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */
  static Telegram_T_BG_Types_Pkg _3_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::mDup1 */
  static M_DUP mDup1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::mDup2 */
  static M_DUP mDup2;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::diff */
  static kcg_int diff;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::nominal */
  static kcg_bool nominal;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::revers */
  static kcg_bool revers;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::metadata */
  static Metadata_T_Common_Types_Pkg metadata;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::packetlist */
  static CompressedPacketData_T_Common_Types_Pkg packetlist;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L10 */
  static kcg_bool _L10;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L54 */
  static kcg_bool _L54;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L53 */
  static M_DUP _L53;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L52 */
  static M_DUP _L52;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L51 */
  static kcg_bool _L51;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L50 */
  static kcg_bool _L50;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L49 */
  static kcg_bool _L49;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L48 */
  static kcg_bool _L48;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L47 */
  static M_DUP _L47;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L46 */
  static M_DUP _L46;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L45 */
  static M_DUP _L45;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L44 */
  static kcg_bool _L44;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L43 */
  static M_DUP _L43;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L42 */
  static M_DUP _L42;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L41 */
  static M_DUP _L41;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L68 */
  static Telegram_T_BG_Types_Pkg _L68;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L67 */
  static M_DUP _L67;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L66 */
  static kcg_int _L66;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L65 */
  static M_DUP _L65;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L64 */
  static N_PIG _L64;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L63 */
  static TelegramHeader_T_BG_Types_Pkg _L63;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L62 */
  static TelegramHeader_T_BG_Types_Pkg _L62;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L61 */
  static kcg_int _L61;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L60 */
  static Telegram_T_BG_Types_Pkg _L60;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L59 */
  static N_PIG _L59;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L58 */
  static kcg_int _L58;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L72 */
  static Metadata_T_Common_Types_Pkg _L72;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L71 */
  static Telegram_T_BG_Types_Pkg _L71;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L70 */
  static CompressedPackets_T_Common_Types_Pkg _L70;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L69 */
  static CompressedPacketData_T_Common_Types_Pkg _L69;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L73 */
  static Telegram_T_BG_Types_Pkg _L73;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L73, telegram);
  _L10 = _L73.valid;
  *go_on = _L10;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L68, telegramACC);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L62, &_L68.telegramheader);
  _L67 = _L62.m_dup;
  mDup1 = _L67;
  _L53 = mDup1;
  _L41 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  _L51 = _L53 == _L41;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L60, telegram);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L63, &_L60.telegramheader);
  _L65 = _L63.m_dup;
  mDup2 = _L65;
  _L43 = mDup2;
  _L47 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  _L44 = _L43 == _L47;
  _L49 = _L51 & _L44;
  nominal = _L49;
  _L42 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  _L45 = mDup1;
  _L46 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  _L52 = mDup2;
  _L48 = _L52 == _L46;
  _L50 = _L45 == _L42;
  _L54 = _L50 & _L48;
  revers = _L54;
  _L59 = _L62.n_pig;
  _L58 = /* 4 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L59);
  _L64 = _L63.n_pig;
  _L61 = /* 3 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L64);
  _L66 = _L58 - _L61;
  diff = _L66;
  IfBlock1_clock = (diff == - 1) & nominal & *go_on;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _6_else_clock_IfBlock1 = (diff == 1) & revers & *go_on;
    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
    }
    else {
      else_clock_IfBlock1 = *go_on;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_Telegram_T_BG_Types_Pkg(&_L18_IfBlock1, telegram);
      }
      else {
        kcg_copy_Telegram_T_BG_Types_Pkg(&_L113_IfBlock1, telegramACC);
        kcg_copy_Telegram_T_BG_Types_Pkg(&_4_telegram_out, &_L113_IfBlock1);
      }
    }
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L71, telegramACC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L70, &_L71.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L72, &_L70.PacketHeaders);
  kcg_copy_Metadata_T_Common_Types_Pkg(&metadata, &_L72);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L8_IfBlock1, &metadata);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L410_IfBlock1, telegram);
    /* 1 */
    Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &_L8_IfBlock1,
      &_L410_IfBlock1,
      &_L212_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L19_IfBlock1, &_L18_IfBlock1);
    if (kcg_true) {
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L19_IfBlock1.packets.PacketHeaders,
        &_L212_IfBlock1);
    }
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L69, &_L70.PacketData);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&packetlist, &_L69);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L2_IfBlock1, telegram);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L1_IfBlock1, telegramACC);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L4_IfBlock1,
      &_L1_IfBlock1.packets.PacketData);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L3_IfBlock1, &_L2_IfBlock1);
    if (kcg_true) {
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_IfBlock1.packets.PacketData,
        &_L4_IfBlock1);
    }
    kcg_copy_Telegram_T_BG_Types_Pkg(&_1_telegram_out, &_L3_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(_14_telegram_out, &_1_telegram_out);
  }
  else {
    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L5_IfBlock1, telegram);
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L49_IfBlock1, telegramACC);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L27_IfBlock1,
        &_L49_IfBlock1.packets.PacketData);
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L38_IfBlock1, &_L5_IfBlock1);
      if (kcg_true) {
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &_L38_IfBlock1.packets.PacketData,
          &_L27_IfBlock1);
      }
      kcg_copy_Telegram_T_BG_Types_Pkg(&_3_telegram_out, &_L38_IfBlock1);
      kcg_copy_Telegram_T_BG_Types_Pkg(&telegram_out, &_3_telegram_out);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &_L9_IfBlock1,
          &packetlist);
        kcg_copy_Metadata_T_Common_Types_Pkg(&_L10_IfBlock1, &metadata);
        /* 1 */
        FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &_L10_IfBlock1,
          &_L11_IfBlock1,
          &_L12_IfBlock1);
        _L14_IfBlock1 = 1;
        _L13_IfBlock1 = _L12_IfBlock1 + _L14_IfBlock1;
        /* pow */ for (i = 0; i < 500; i++) {
          _L17_IfBlock1[i] = _L13_IfBlock1;
        }
        kcg_copy_Telegram_T_BG_Types_Pkg(&_L15_IfBlock1, telegram);
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &_L16_IfBlock1,
          &_L15_IfBlock1.packets.PacketData);
        /* 1 */
        Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &_L9_IfBlock1,
          &_L17_IfBlock1,
          &_L16_IfBlock1,
          &_L311_IfBlock1);
        kcg_copy_Telegram_T_BG_Types_Pkg(&_L20_IfBlock1, &_L19_IfBlock1);
        if (kcg_true) {
          kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
            &_L20_IfBlock1.packets.PacketData,
            &_L311_IfBlock1);
        }
        kcg_copy_Telegram_T_BG_Types_Pkg(&_5_telegram_out, &_L20_IfBlock1);
        kcg_copy_Telegram_T_BG_Types_Pkg(&_2_telegram_out, &_5_telegram_out);
      }
      else {
        kcg_copy_Telegram_T_BG_Types_Pkg(&_2_telegram_out, &_4_telegram_out);
      }
      kcg_copy_Telegram_T_BG_Types_Pkg(&telegram_out, &_2_telegram_out);
    }
    kcg_copy_Telegram_T_BG_Types_Pkg(_14_telegram_out, &telegram_out);
    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
    }
    else /* ck_anon_activ */ if (else_clock_IfBlock1) {
      noname = _L11_IfBlock1;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

