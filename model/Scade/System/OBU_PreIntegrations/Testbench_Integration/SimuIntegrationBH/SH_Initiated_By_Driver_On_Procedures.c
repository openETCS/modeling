/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void SH_Initiated_By_Driver_On_init_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  outC->init = kcg_true;
  outC->SM_SH_Initiated_By_Driver_reset_nxt = kcg_true;
  outC->SM_SH_Initiated_By_Driver_reset_act = kcg_true;
  outC->SM_SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void SH_Initiated_By_Driver_On_reset_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  outC->init = kcg_true;
}

/* Procedures::SH_Initiated_By_Driver_On */
void SH_Initiated_By_Driver_On_Procedures(
  /* Procedures::SH_Initiated_By_Driver_On::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::SH_Initiated_By_Driver_On::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::SH_Initiated_By_Driver_On::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::SH_Initiated_By_Driver_On::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _24_SM_SH_Initiated_By_Driver_fired;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool _23_SM_SH_Initiated_By_Driver_reset_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver _22_SM_SH_Initiated_By_Driver_state_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::Request_For_SH_To_RBC */
  static kcg_bool _21_Request_For_SH_To_RBC;
  /* Procedures::SH_Initiated_By_Driver_On::End_Of_Mission_Procedure_Req */
  static kcg_bool _20_End_Of_Mission_Procedure_Req;
  /* Procedures::SH_Initiated_By_Driver_On::Condition6 */
  static kcg_bool _19_Condition6;
  /* Procedures::SH_Initiated_By_Driver_On::Condition5 */
  static kcg_bool _18_Condition5;
  /* Procedures::SH_Initiated_By_Driver_On::Clean_BG_List_SH_Area */
  static kcg_bool _17_Clean_BG_List_SH_Area;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _16_SM_SH_Initiated_By_Driver_fired;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool _15_SM_SH_Initiated_By_Driver_reset_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver _14_SM_SH_Initiated_By_Driver_state_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::Request_For_SH_To_RBC */
  static kcg_bool _13_Request_For_SH_To_RBC;
  /* Procedures::SH_Initiated_By_Driver_On::End_Of_Mission_Procedure_Req */
  static kcg_bool _12_End_Of_Mission_Procedure_Req;
  /* Procedures::SH_Initiated_By_Driver_On::Condition6 */
  static kcg_bool _11_Condition6;
  /* Procedures::SH_Initiated_By_Driver_On::Condition5 */
  static kcg_bool _10_Condition5;
  /* Procedures::SH_Initiated_By_Driver_On::Clean_BG_List_SH_Area */
  static kcg_bool _9_Clean_BG_List_SH_Area;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::Issue_SH_Request_L2_L3::_L1 */
  static kcg_bool _L1_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _8_SM_SH_Initiated_By_Driver_fired;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool _7_SM_SH_Initiated_By_Driver_reset_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver _6_SM_SH_Initiated_By_Driver_state_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::Request_For_SH_To_RBC */
  static kcg_bool _5_Request_For_SH_To_RBC;
  /* Procedures::SH_Initiated_By_Driver_On::End_Of_Mission_Procedure_Req */
  static kcg_bool _4_End_Of_Mission_Procedure_Req;
  /* Procedures::SH_Initiated_By_Driver_On::Condition6 */
  static kcg_bool _3_Condition6;
  /* Procedures::SH_Initiated_By_Driver_On::Condition5 */
  static kcg_bool _2_Condition5;
  /* Procedures::SH_Initiated_By_Driver_On::Clean_BG_List_SH_Area */
  static kcg_bool _1_Clean_BG_List_SH_Area;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_Authorized_L0_L1_LNTC::_L3 */
  static kcg_bool _L3_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_Authorized_L0_L1_LNTC::_L2 */
  static kcg_bool _L2_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_Authorized_L0_L1_LNTC::_L1 */
  static kcg_bool _L1_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_fired;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_nxt;
  /* Procedures::SH_Initiated_By_Driver_On::Request_For_SH_To_RBC */
  static kcg_bool Request_For_SH_To_RBC;
  /* Procedures::SH_Initiated_By_Driver_On::End_Of_Mission_Procedure_Req */
  static kcg_bool End_Of_Mission_Procedure_Req;
  /* Procedures::SH_Initiated_By_Driver_On::Condition6 */
  static kcg_bool Condition6;
  /* Procedures::SH_Initiated_By_Driver_On::Condition5 */
  static kcg_bool Condition5;
  /* Procedures::SH_Initiated_By_Driver_On::Clean_BG_List_SH_Area */
  static kcg_bool Clean_BG_List_SH_Area;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_Authorized_L2_L3::_L3 */
  static kcg_bool _L3_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_Authorized_L2_L3::_L2 */
  static kcg_bool _L2_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_Authorized_L2_L3::_L1 */
  static kcg_bool _L1_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _36_SM_SH_Initiated_By_Driver_fired_strong;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool _35_SM_SH_Initiated_By_Driver_reset_act;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver _34_SM_SH_Initiated_By_Driver_state_act;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _33_SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_procedure_possible */
  static kcg_bool br_2_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_procedure_possible */
  static kcg_bool _41_br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_procedure_possible */
  static kcg_bool br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _32_SM_SH_Initiated_By_Driver_fired_strong;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool _31_SM_SH_Initiated_By_Driver_reset_act;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver _30_SM_SH_Initiated_By_Driver_state_act;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _29_SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::Issue_SH_Request_L2_L3 */
  static kcg_bool br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::Issue_SH_Request_L2_L3 */
  static kcg_bool br_1_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::Issue_SH_Request_L2_L3 */
  static kcg_bool br_1_clock_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _40_SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _39_SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::Issue_SH_Request_L2_L3 */
  static kcg_bool br_2_clock_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _37_SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _38_SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _28_SM_SH_Initiated_By_Driver_fired_strong;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool _27_SM_SH_Initiated_By_Driver_reset_act;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver _26_SM_SH_Initiated_By_Driver_state_act;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _25_SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_fired_strong;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_act;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_act;
  /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */
  static kcg_bool SH_Refused_By_RBC_To_DMI;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_sel;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver _44_SM_SH_Initiated_By_Driver_state_act;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_sel;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_prv;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _43_SM_SH_Initiated_By_Driver_fired_strong;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_TR_SM_SH_Initiated_By_Driver _42_SM_SH_Initiated_By_Driver_fired;
  /* Procedures::SH_Initiated_By_Driver_On::Loc_Level_2_3 */
  static kcg_bool Loc_Level_2_3;
  /* Procedures::SH_Initiated_By_Driver_On::_L14 */
  static M_LEVEL _L14;
  /* Procedures::SH_Initiated_By_Driver_On::_L13 */
  static kcg_bool _L13;
  /* Procedures::SH_Initiated_By_Driver_On::_L7 */
  static kcg_bool _L7;
  /* Procedures::SH_Initiated_By_Driver_On::_L4 */
  static kcg_bool _L4;
  /* Procedures::SH_Initiated_By_Driver_On::_L2 */
  static kcg_bool _L2;
  
  _L2 = kcg_true;
  _L4 = kcg_false;
  _L14 = Current_Level;
  _L13 = kcg_true;
  switch (_L14) {
    case M_LEVEL_Level_2 :
      _L7 = _L2;
      break;
    case M_LEVEL_Level_3 :
      _L7 = _L13;
      break;
    
    default :
      _L7 = _L4;
  }
  Loc_Level_2_3 = _L7;
  /* init_SM_SH_Initiated_By_Driver */ if (outC->init) {
    SM_SH_Initiated_By_Driver_state_sel =
      SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  }
  else {
    SM_SH_Initiated_By_Driver_state_sel =
      outC->SM_SH_Initiated_By_Driver_state_nxt;
  }
  /* init_SM_SH_Initiated_By_Driver */ if (outC->init) {
    SM_SH_Initiated_By_Driver_reset_sel = kcg_false;
  }
  else {
    SM_SH_Initiated_By_Driver_reset_sel =
      outC->SM_SH_Initiated_By_Driver_reset_nxt;
  }
  /* init_SM_SH_Initiated_By_Driver */ if (outC->init) {
    SM_SH_Initiated_By_Driver_reset_prv = kcg_false;
  }
  else {
    SM_SH_Initiated_By_Driver_reset_prv =
      outC->SM_SH_Initiated_By_Driver_reset_act;
  }
  /* sel_SM_SH_Initiated_By_Driver */ switch (SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      _33_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _33_SH_Refused_By_RBC_To_DMI;
      _41_br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible =
        !Loc_Level_2_3;
      br_2_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible =
        Loc_Level_2_3;
      br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible =
        Driver_Req_SH &
        (_41_br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible |
          br_2_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible);
      if (br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible) {
        if (_41_br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible) {
          _34_SM_SH_Initiated_By_Driver_state_act =
            SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
        }
        else {
          _34_SM_SH_Initiated_By_Driver_state_act =
            SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
        }
      }
      else {
        _34_SM_SH_Initiated_By_Driver_state_act =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      _44_SM_SH_Initiated_By_Driver_state_act =
        _34_SM_SH_Initiated_By_Driver_state_act;
      _35_SM_SH_Initiated_By_Driver_reset_act =
        br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible;
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _35_SM_SH_Initiated_By_Driver_reset_act;
      if (br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible) {
        if (_41_br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible) {
          _36_SM_SH_Initiated_By_Driver_fired_strong =
            SSM_TR_SH_procedure_possible_1_1_SM_SH_Initiated_By_Driver;
        }
        else {
          _36_SM_SH_Initiated_By_Driver_fired_strong =
            SSM_TR_SH_procedure_possible_1_2_SM_SH_Initiated_By_Driver;
        }
      }
      else {
        _36_SM_SH_Initiated_By_Driver_fired_strong =
          SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      }
      _43_SM_SH_Initiated_By_Driver_fired_strong =
        _36_SM_SH_Initiated_By_Driver_fired_strong;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      br_1_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3 =
        Shunting_Granted_By_RBC;
      br_1_clock_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3 =
        br_1_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
      br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3 =
        !Shunting_Granted_By_RBC;
      /* cb_anon_sm */ if (br_1_clock_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
        _38_SH_Refused_By_RBC_To_DMI = kcg_false;
        _29_SH_Refused_By_RBC_To_DMI = _38_SH_Refused_By_RBC_To_DMI;
      }
      else {
        br_2_clock_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3 =
          br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
        /* cb_anon_sm */ if (br_2_clock_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
          _40_SH_Refused_By_RBC_To_DMI = kcg_true;
          _37_SH_Refused_By_RBC_To_DMI = _40_SH_Refused_By_RBC_To_DMI;
        }
        else {
          _39_SH_Refused_By_RBC_To_DMI = kcg_false;
          _37_SH_Refused_By_RBC_To_DMI = _39_SH_Refused_By_RBC_To_DMI;
        }
        _29_SH_Refused_By_RBC_To_DMI = _37_SH_Refused_By_RBC_To_DMI;
      }
      outC->SH_Refused_By_RBC_To_DMI = _29_SH_Refused_By_RBC_To_DMI;
      if (br_1_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
        _30_SM_SH_Initiated_By_Driver_state_act =
          SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else if (br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
        _30_SM_SH_Initiated_By_Driver_state_act =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      else {
        _30_SM_SH_Initiated_By_Driver_state_act =
          SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      _44_SM_SH_Initiated_By_Driver_state_act =
        _30_SM_SH_Initiated_By_Driver_state_act;
      if (br_1_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
        _31_SM_SH_Initiated_By_Driver_reset_act = kcg_true;
      }
      else {
        _31_SM_SH_Initiated_By_Driver_reset_act =
          br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
      }
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _31_SM_SH_Initiated_By_Driver_reset_act;
      if (br_1_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
        _32_SM_SH_Initiated_By_Driver_fired_strong =
          SSM_TR_Issue_SH_Request_L2_L3_1_SM_SH_Initiated_By_Driver;
      }
      else if (br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
        _32_SM_SH_Initiated_By_Driver_fired_strong =
          SSM_TR_Issue_SH_Request_L2_L3_2_SM_SH_Initiated_By_Driver;
      }
      else {
        _32_SM_SH_Initiated_By_Driver_fired_strong =
          SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      }
      _43_SM_SH_Initiated_By_Driver_fired_strong =
        _32_SM_SH_Initiated_By_Driver_fired_strong;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _25_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _25_SH_Refused_By_RBC_To_DMI;
      _26_SM_SH_Initiated_By_Driver_state_act =
        SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      _44_SM_SH_Initiated_By_Driver_state_act =
        _26_SM_SH_Initiated_By_Driver_state_act;
      _27_SM_SH_Initiated_By_Driver_reset_act = kcg_false;
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _27_SM_SH_Initiated_By_Driver_reset_act;
      _28_SM_SH_Initiated_By_Driver_fired_strong =
        SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      _43_SM_SH_Initiated_By_Driver_fired_strong =
        _28_SM_SH_Initiated_By_Driver_fired_strong;
      break;
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI;
      SM_SH_Initiated_By_Driver_state_act =
        SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      _44_SM_SH_Initiated_By_Driver_state_act =
        SM_SH_Initiated_By_Driver_state_act;
      SM_SH_Initiated_By_Driver_reset_act = kcg_false;
      outC->SM_SH_Initiated_By_Driver_reset_act =
        SM_SH_Initiated_By_Driver_reset_act;
      SM_SH_Initiated_By_Driver_fired_strong =
        SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      _43_SM_SH_Initiated_By_Driver_fired_strong =
        SM_SH_Initiated_By_Driver_fired_strong;
      break;
    
  }
  /* act_SM_SH_Initiated_By_Driver */ switch (_44_SM_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      _17_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _17_Clean_BG_List_SH_Area;
      _18_Condition5 = kcg_false;
      outC->Condition5 = _18_Condition5;
      _19_Condition6 = kcg_false;
      outC->Condition6 = _19_Condition6;
      _20_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _20_End_Of_Mission_Procedure_Req;
      _21_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _21_Request_For_SH_To_RBC;
      _22_SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        _22_SM_SH_Initiated_By_Driver_state_nxt;
      _23_SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        _23_SM_SH_Initiated_By_Driver_reset_nxt;
      _24_SM_SH_Initiated_By_Driver_fired =
        _43_SM_SH_Initiated_By_Driver_fired_strong;
      _42_SM_SH_Initiated_By_Driver_fired = _24_SM_SH_Initiated_By_Driver_fired;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      _9_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _9_Clean_BG_List_SH_Area;
      _10_Condition5 = kcg_false;
      outC->Condition5 = _10_Condition5;
      _11_Condition6 = kcg_false;
      outC->Condition6 = _11_Condition6;
      _12_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _12_End_Of_Mission_Procedure_Req;
      _L1_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3 = kcg_true;
      _13_Request_For_SH_To_RBC =
        _L1_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
      outC->Request_For_SH_To_RBC = _13_Request_For_SH_To_RBC;
      _14_SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        _14_SM_SH_Initiated_By_Driver_state_nxt;
      _15_SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        _15_SM_SH_Initiated_By_Driver_reset_nxt;
      _16_SM_SH_Initiated_By_Driver_fired =
        _43_SM_SH_Initiated_By_Driver_fired_strong;
      _42_SM_SH_Initiated_By_Driver_fired = _16_SM_SH_Initiated_By_Driver_fired;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _L3_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC = kcg_true;
      _1_Clean_BG_List_SH_Area =
        _L3_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC;
      outC->Clean_BG_List_SH_Area = _1_Clean_BG_List_SH_Area;
      _L1_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC = kcg_true;
      _2_Condition5 = _L1_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC;
      outC->Condition5 = _2_Condition5;
      _3_Condition6 = kcg_false;
      outC->Condition6 = _3_Condition6;
      _L2_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC = On_Going_Mission;
      _4_End_Of_Mission_Procedure_Req =
        _L2_SM_SH_Initiated_By_Driver_SH_Authorized_L0_L1_LNTC;
      outC->End_Of_Mission_Procedure_Req = _4_End_Of_Mission_Procedure_Req;
      _5_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _5_Request_For_SH_To_RBC;
      _6_SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        _6_SM_SH_Initiated_By_Driver_state_nxt;
      _7_SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        _7_SM_SH_Initiated_By_Driver_reset_nxt;
      _8_SM_SH_Initiated_By_Driver_fired =
        _43_SM_SH_Initiated_By_Driver_fired_strong;
      _42_SM_SH_Initiated_By_Driver_fired = _8_SM_SH_Initiated_By_Driver_fired;
      break;
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _L3_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3 = kcg_true;
      Clean_BG_List_SH_Area = _L3_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area;
      Condition5 = kcg_false;
      outC->Condition5 = Condition5;
      _L1_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3 = kcg_true;
      Condition6 = _L1_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3;
      outC->Condition6 = Condition6;
      _L2_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3 = On_Going_Mission;
      End_Of_Mission_Procedure_Req =
        _L2_SM_SH_Initiated_By_Driver_SH_Authorized_L2_L3;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req;
      Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC;
      SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        SM_SH_Initiated_By_Driver_state_nxt;
      SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        SM_SH_Initiated_By_Driver_reset_nxt;
      SM_SH_Initiated_By_Driver_fired =
        _43_SM_SH_Initiated_By_Driver_fired_strong;
      _42_SM_SH_Initiated_By_Driver_fired = SM_SH_Initiated_By_Driver_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SH_Initiated_By_Driver_On_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

