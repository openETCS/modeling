/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_OutputManagement.h"

#ifndef KCG_USER_DEFINED_INIT
void Output_To_DMI_init_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC)
{
  outC->init = kcg_true;
  outC->rem_needsAckFromDriver = kcg_true;
  outC->Data_To_DMI_Ack.valid = kcg_true;
  outC->Data_To_DMI_Ack.whichMode = M_MODE_Full_Supervision;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC = kcg_true;
  outC->Data_To_DMI_Ack.LevelNeedsAck = kcg_true;
  outC->announcedLevel.LevelTransition.is_set = kcg_true;
  outC->announcedLevel.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevel.LevelTransition.transition.position = 0;
  outC->announcedLevel.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevel.LevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevel.LevelTransition.transition.AckLength = 0;
  outC->announcedLevel.LevelTransition.LRBG = 0;
  outC->announcedLevel.LevelTransition.referenceLocation = 0;
  outC->announcedLevel.IsAvailableForUse = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_To_DMI_reset_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputManagement::Output_To_DMI */
void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::announcedLevelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* OutputManagement::Output_To_DMI::isAvailableForUse */ kcg_bool isAvailableForUse,
  outC_Output_To_DMI_OutputManagement *outC)
{
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _2_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _1_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::then::_L1 */
  static M_MODE _L1_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::else */
  static kcg_bool _36_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _10_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _9_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L237_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::then::_L1 */
  static M_MODE _L138_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _8_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _7_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else */
  static kcg_bool _34_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _18_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _17_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_bool _L240_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::then::_L1 */
  static M_MODE _L141_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _16_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _15_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else */
  static kcg_bool _32_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _26_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _25_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L244_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static M_MODE _L145_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _24_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _23_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::else::else::_L1 */
  static M_MODE _L149_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::else::else::_L3 */
  static kcg_bool _L348_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _27_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _28_Loc_Valid;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static M_MODE _L147_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L346_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _29_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _30_Loc_Valid;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _31_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _19_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _20_Loc_Valid;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::then::_L1 */
  static M_MODE _L143_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::then::_L3 */
  static kcg_bool _L342_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _21_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _22_Loc_Valid;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else */
  static kcg_bool _33_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _11_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _12_Loc_Valid;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::then::_L1 */
  static M_MODE _L139_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _13_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _14_Loc_Valid;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else */
  static kcg_bool _35_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _3_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _4_Loc_Valid;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::then::_L6 */
  static M_MODE _L6_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _5_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _6_Loc_Valid;
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */
  static kcg_bool last_needsAckFromDriver;
  /* OutputManagement::Output_To_DMI::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* OutputManagement::Output_To_DMI::Loc_Selected_Mode_For_Ack */
  static M_MODE _51_Loc_Selected_Mode_For_Ack;
  /* OutputManagement::Output_To_DMI::Loc_Valid */
  static kcg_bool _50_Loc_Valid;
  /* OutputManagement::Output_To_DMI::Loc_SH_Refused_By_RBC_To_DMI */
  static kcg_bool Loc_SH_Refused_By_RBC_To_DMI;
  /* OutputManagement::Output_To_DMI::Loc_Ack_UN_Req_To_Driver */
  static kcg_bool Loc_Ack_UN_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::Loc_Ack_TR_Req_To_Driver */
  static kcg_bool Loc_Ack_TR_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::Loc_Ack_SR_Req_To_Driver */
  static kcg_bool Loc_Ack_SR_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::Loc_Ack_SN_Req_To_Driver */
  static kcg_bool Loc_Ack_SN_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::Loc_Ack_SH_Req_To_Driver */
  static kcg_bool Loc_Ack_SH_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::Loc_Ack_RV_Req_To_Driver */
  static kcg_bool Loc_Ack_RV_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::Loc_Ack_OS_Req_To_Driver */
  static kcg_bool Loc_Ack_OS_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::Loc_Ack_LS_Req_To_Driver */
  static kcg_bool Loc_Ack_LS_Req_To_Driver;
  /* OutputManagement::Output_To_DMI::_L35 */
  static kcg_bool _L35;
  /* OutputManagement::Output_To_DMI::_L32 */
  static kcg_bool _L32;
  /* OutputManagement::Output_To_DMI::_L23 */
  static kcg_bool _L23;
  /* OutputManagement::Output_To_DMI::_L24 */
  static kcg_bool _L24;
  /* OutputManagement::Output_To_DMI::_L25 */
  static kcg_bool _L25;
  /* OutputManagement::Output_To_DMI::_L26 */
  static kcg_bool _L26;
  /* OutputManagement::Output_To_DMI::_L27 */
  static kcg_bool _L27;
  /* OutputManagement::Output_To_DMI::_L28 */
  static kcg_bool _L28;
  /* OutputManagement::Output_To_DMI::_L29 */
  static kcg_bool _L29;
  /* OutputManagement::Output_To_DMI::_L30 */
  static kcg_bool _L30;
  /* OutputManagement::Output_To_DMI::_L31 */
  static kcg_bool _L31;
  /* OutputManagement::Output_To_DMI::_L22 */
  static kcg_bool _L22;
  /* OutputManagement::Output_To_DMI::_L21 */
  static kcg_bool _L21;
  /* OutputManagement::Output_To_DMI::_L20 */
  static kcg_bool _L20;
  /* OutputManagement::Output_To_DMI::_L19 */
  static M_MODE _L19;
  /* OutputManagement::Output_To_DMI::_L18 */
  static T_Data_To_DMI_Level_And_Mode_Types_Pkg _L18;
  /* OutputManagement::Output_To_DMI::_L37 */
  static kcg_bool _L37;
  /* OutputManagement::Output_To_DMI::_L39 */
  static kcg_bool _L39;
  /* OutputManagement::Output_To_DMI::_L40 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L40;
  /* OutputManagement::Output_To_DMI::_L41 */
  static kcg_bool _L41;
  /* OutputManagement::Output_To_DMI::_L42 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L42;
  /* OutputManagement::Output_To_DMI::_L43 */
  static T_AnnouncedLevel_Level_And_Mode_Types_Pkg _L43;
  /* OutputManagement::Output_To_DMI::_L44 */
  static kcg_bool _L44;
  /* OutputManagement::Output_To_DMI::_L45 */
  static kcg_bool _L45;
  /* OutputManagement::Output_To_DMI::_L46 */
  static kcg_bool _L46;
  
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(&_L18, Data_To_DMI_From_Mode);
  _L23 = _L18.Ack_LS;
  Loc_Ack_LS_Req_To_Driver = _L23;
  IfBlock1_clock = Loc_Ack_LS_Req_To_Driver;
  _L24 = _L18.Ack_OS;
  Loc_Ack_OS_Req_To_Driver = _L24;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _36_else_clock_IfBlock1 = Loc_Ack_OS_Req_To_Driver;
  }
  _L25 = _L18.Ack_RV;
  Loc_Ack_RV_Req_To_Driver = _L25;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
  }
  else {
    _35_else_clock_IfBlock1 = Loc_Ack_RV_Req_To_Driver;
  }
  _L26 = _L18.Ack_SH;
  Loc_Ack_SH_Req_To_Driver = _L26;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
  }
  else {
    _34_else_clock_IfBlock1 = Loc_Ack_SH_Req_To_Driver;
  }
  _L27 = _L18.Ack_SN;
  Loc_Ack_SN_Req_To_Driver = _L27;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
  }
  else {
    _33_else_clock_IfBlock1 = Loc_Ack_SN_Req_To_Driver;
  }
  _L28 = _L18.Ack_SR;
  Loc_Ack_SR_Req_To_Driver = _L28;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
  }
  else {
    _32_else_clock_IfBlock1 = Loc_Ack_SR_Req_To_Driver;
  }
  _L29 = _L18.Ack_TR;
  Loc_Ack_TR_Req_To_Driver = _L29;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
  }
  else {
    _31_else_clock_IfBlock1 = Loc_Ack_TR_Req_To_Driver;
  }
  _L30 = _L18.Ack_UN;
  Loc_Ack_UN_Req_To_Driver = _L30;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = M_MODE_Limited_Supervision;
    _1_Loc_Selected_Mode_For_Ack = _L1_IfBlock1;
    _51_Loc_Selected_Mode_For_Ack = _1_Loc_Selected_Mode_For_Ack;
  }
  else {
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
      _L6_IfBlock1 = M_MODE_On_Sight;
      _5_Loc_Selected_Mode_For_Ack = _L6_IfBlock1;
      Loc_Selected_Mode_For_Ack = _5_Loc_Selected_Mode_For_Ack;
    }
    else {
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
        _L138_IfBlock1 = M_MODE_Reversing;
        _9_Loc_Selected_Mode_For_Ack = _L138_IfBlock1;
        _3_Loc_Selected_Mode_For_Ack = _9_Loc_Selected_Mode_For_Ack;
      }
      else {
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
          _L139_IfBlock1 = M_MODE_Shunting;
          _13_Loc_Selected_Mode_For_Ack = _L139_IfBlock1;
          _7_Loc_Selected_Mode_For_Ack = _13_Loc_Selected_Mode_For_Ack;
        }
        else {
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
            _L141_IfBlock1 = M_MODE_National_System;
            _17_Loc_Selected_Mode_For_Ack = _L141_IfBlock1;
            _11_Loc_Selected_Mode_For_Ack = _17_Loc_Selected_Mode_For_Ack;
          }
          else {
            /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
              _L143_IfBlock1 = M_MODE_Staff_Responsible;
              _21_Loc_Selected_Mode_For_Ack = _L143_IfBlock1;
              _15_Loc_Selected_Mode_For_Ack = _21_Loc_Selected_Mode_For_Ack;
            }
            else {
              /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
                _L145_IfBlock1 = M_MODE_Trip;
                _25_Loc_Selected_Mode_For_Ack = _L145_IfBlock1;
                _19_Loc_Selected_Mode_For_Ack = _25_Loc_Selected_Mode_For_Ack;
              }
              else {
                else_clock_IfBlock1 = Loc_Ack_UN_Req_To_Driver;
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  _L147_IfBlock1 = M_MODE_Unfitted;
                  _29_Loc_Selected_Mode_For_Ack = _L147_IfBlock1;
                  _23_Loc_Selected_Mode_For_Ack = _29_Loc_Selected_Mode_For_Ack;
                }
                else {
                  _L149_IfBlock1 = M_MODE_Stand_By;
                  _27_Loc_Selected_Mode_For_Ack = _L149_IfBlock1;
                  _23_Loc_Selected_Mode_For_Ack = _27_Loc_Selected_Mode_For_Ack;
                }
                _19_Loc_Selected_Mode_For_Ack = _23_Loc_Selected_Mode_For_Ack;
              }
              _15_Loc_Selected_Mode_For_Ack = _19_Loc_Selected_Mode_For_Ack;
            }
            _11_Loc_Selected_Mode_For_Ack = _15_Loc_Selected_Mode_For_Ack;
          }
          _7_Loc_Selected_Mode_For_Ack = _11_Loc_Selected_Mode_For_Ack;
        }
        _3_Loc_Selected_Mode_For_Ack = _7_Loc_Selected_Mode_For_Ack;
      }
      Loc_Selected_Mode_For_Ack = _3_Loc_Selected_Mode_For_Ack;
    }
    _51_Loc_Selected_Mode_For_Ack = Loc_Selected_Mode_For_Ack;
  }
  _L19 = _51_Loc_Selected_Mode_For_Ack;
  _L35 = Level_Mode_Compatible;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = kcg_true;
    _2_Loc_Valid = _L2_IfBlock1;
    _50_Loc_Valid = _2_Loc_Valid;
  }
  else {
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
      _L9_IfBlock1 = kcg_true;
      _6_Loc_Valid = _L9_IfBlock1;
      Loc_Valid = _6_Loc_Valid;
    }
    else {
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
        _L237_IfBlock1 = kcg_true;
        _10_Loc_Valid = _L237_IfBlock1;
        _4_Loc_Valid = _10_Loc_Valid;
      }
      else {
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
          _L3_IfBlock1 = kcg_true;
          _14_Loc_Valid = _L3_IfBlock1;
          _8_Loc_Valid = _14_Loc_Valid;
        }
        else {
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
            _L240_IfBlock1 = kcg_true;
            _18_Loc_Valid = _L240_IfBlock1;
            _12_Loc_Valid = _18_Loc_Valid;
          }
          else {
            /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
              _L342_IfBlock1 = kcg_true;
              _22_Loc_Valid = _L342_IfBlock1;
              _16_Loc_Valid = _22_Loc_Valid;
            }
            else {
              /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
                _L244_IfBlock1 = kcg_true;
                _26_Loc_Valid = _L244_IfBlock1;
                _20_Loc_Valid = _26_Loc_Valid;
              }
              else {
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  _L346_IfBlock1 = kcg_true;
                  _30_Loc_Valid = _L346_IfBlock1;
                  _24_Loc_Valid = _30_Loc_Valid;
                }
                else {
                  _L348_IfBlock1 = needsAckFromDriver;
                  _28_Loc_Valid = _L348_IfBlock1;
                  _24_Loc_Valid = _28_Loc_Valid;
                }
                _20_Loc_Valid = _24_Loc_Valid;
              }
              _16_Loc_Valid = _20_Loc_Valid;
            }
            _12_Loc_Valid = _16_Loc_Valid;
          }
          _8_Loc_Valid = _12_Loc_Valid;
        }
        _4_Loc_Valid = _8_Loc_Valid;
      }
      Loc_Valid = _4_Loc_Valid;
    }
    _50_Loc_Valid = Loc_Valid;
  }
  _L22 = _50_Loc_Valid;
  _L45 = needsAckFromDriver;
  /* last_init_ck_needsAckFromDriver */ if (outC->init) {
    last_needsAckFromDriver = kcg_false;
  }
  else {
    last_needsAckFromDriver = outC->rem_needsAckFromDriver;
  }
  _L46 = last_needsAckFromDriver;
  _L44 = _L45 != _L46;
  _L31 = _L18.SH_Refused_By_RBC;
  Loc_SH_Refused_By_RBC_To_DMI = _L31;
  _L39 = Loc_SH_Refused_By_RBC_To_DMI;
  _L37 = _L22 | _L44 | _L39;
  _L20 = _L35 & _L37;
  _L21 = Loc_SH_Refused_By_RBC_To_DMI;
  _L32 = needsAckFromDriver;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L40,
    announcedLevelTransition);
  _L41 = isAvailableForUse;
  _L42.valid = _L20;
  _L42.whichMode = _L19;
  _L42.SH_Req_RefusedByRBC = _L21;
  _L42.LevelNeedsAck = _L32;
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &_L42);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L43.LevelTransition,
    &_L40);
  _L43.IsAvailableForUse = _L41;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &_L43);
  outC->rem_needsAckFromDriver = needsAckFromDriver;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_DMI_OutputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

