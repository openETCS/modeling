/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal */
kcg_int convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::inNTotal */ N_TOTAL inNTotal)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _1_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _5_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::then::_L1 */
  static kcg_int _L123_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _4_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _9_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::then::_L1 */
  static kcg_int _L125_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _8_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else */
  static kcg_bool _17_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _13_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L127_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _12_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::else::else::_L2 */
  static kcg_int _L2_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _14_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L128_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _15_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _10_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::then::_L1 */
  static kcg_int _L126_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _11_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _6_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::then::_L1 */
  static kcg_int _L124_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _7_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else */
  static kcg_bool _20_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _2_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::then::_L1 */
  static kcg_int _L122_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _3_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int _29_outTotal;
  
  IfBlock1_clock = inNTotal == N_TOTAL_1_balise_in_the_group;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = 1;
    _1_outTotal = _L1_IfBlock1;
    _29_outTotal = _1_outTotal;
  }
  else {
    _21_else_clock_IfBlock1 = inNTotal == N_TOTAL_2_balises_in_the_group;
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
      _L122_IfBlock1 = 2;
      _3_outTotal = _L122_IfBlock1;
      outTotal = _3_outTotal;
    }
    else {
      _20_else_clock_IfBlock1 = inNTotal == N_TOTAL_3_balises_in_the_group;
      /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
        _L123_IfBlock1 = 3;
        _5_outTotal = _L123_IfBlock1;
        _2_outTotal = _5_outTotal;
      }
      else {
        _19_else_clock_IfBlock1 = inNTotal == N_TOTAL_4_balises_in_the_group;
        /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
          _L124_IfBlock1 = 4;
          _7_outTotal = _L124_IfBlock1;
          _4_outTotal = _7_outTotal;
        }
        else {
          _18_else_clock_IfBlock1 = inNTotal == N_TOTAL_5_balises_in_the_group;
          /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
            _L125_IfBlock1 = 5;
            _9_outTotal = _L125_IfBlock1;
            _6_outTotal = _9_outTotal;
          }
          else {
            _17_else_clock_IfBlock1 = inNTotal ==
              N_TOTAL_6_balises_in_the_group;
            /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
              _L126_IfBlock1 = 6;
              _11_outTotal = _L126_IfBlock1;
              _8_outTotal = _11_outTotal;
            }
            else {
              _16_else_clock_IfBlock1 = inNTotal ==
                N_TOTAL_7_balises_in_the_group;
              /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
                _L127_IfBlock1 = 7;
                _13_outTotal = _L127_IfBlock1;
                _10_outTotal = _13_outTotal;
              }
              else {
                else_clock_IfBlock1 = inNTotal ==
                  N_TOTAL_8_balises_in_the_group;
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  _L128_IfBlock1 = 8;
                  _15_outTotal = _L128_IfBlock1;
                  _12_outTotal = _15_outTotal;
                }
                else {
                  _L2_IfBlock1 = 0;
                  _14_outTotal = _L2_IfBlock1;
                  _12_outTotal = _14_outTotal;
                }
                _10_outTotal = _12_outTotal;
              }
              _8_outTotal = _10_outTotal;
            }
            _6_outTotal = _8_outTotal;
          }
          _4_outTotal = _6_outTotal;
        }
        _2_outTotal = _4_outTotal;
      }
      outTotal = _2_outTotal;
    }
    _29_outTotal = outTotal;
  }
  return _29_outTotal;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

