/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Initiated_By_Driver_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Initiated_By_Driver_init_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  outC->init = kcg_true;
  outC->SH_Initiated_By_Driver_reset_nxt = kcg_true;
  outC->SH_Initiated_By_Driver_reset_act = kcg_true;
  outC->SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Initiated_By_Driver_reset_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_SH_Initiated_By_Driver */
void Procedure_SH_Initiated_By_Driver_Procedures(
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_SH_Initiated_By_Driver::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Train_Standstill */ kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_TR_SH_Initiated_By_Driver _9_SH_Initiated_By_Driver_fired;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool _8_SH_Initiated_By_Driver_reset_nxt;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver _7_SH_Initiated_By_Driver_state_nxt;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _6_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Request_For_SH_To_RBC */
  static kcg_bool _5_Request_For_SH_To_RBC;
  /* Procedures::Procedure_SH_Initiated_By_Driver::End_Of_Mission_Procedure_Req */
  static kcg_bool _4_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Clean_BG_List_SH_Area */
  static kcg_bool _3_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Condition6 */
  static kcg_bool _2_Condition6;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Condition5 */
  static kcg_bool _1_Condition5;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_TR_SH_Initiated_By_Driver SH_Initiated_By_Driver_fired;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool SH_Initiated_By_Driver_reset_nxt;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_nxt;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Refused_By_RBC_To_DMI */
  static kcg_bool SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Request_For_SH_To_RBC */
  static kcg_bool Request_For_SH_To_RBC;
  /* Procedures::Procedure_SH_Initiated_By_Driver::End_Of_Mission_Procedure_Req */
  static kcg_bool End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Clean_BG_List_SH_Area */
  static kcg_bool Clean_BG_List_SH_Area;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Condition6 */
  static kcg_bool Condition6;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Condition5 */
  static kcg_bool Condition5;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L14 */
  static kcg_bool _L14_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L13 */
  static kcg_bool _L13_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L12 */
  static kcg_bool _L12_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L11 */
  static M_LEVEL _L11_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L1 */
  static kcg_bool _L1_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L2 */
  static kcg_bool _L2_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L3 */
  static kcg_bool _L3_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L4 */
  static kcg_bool _L4_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L5 */
  static kcg_bool _L5_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on::_L6 */
  static kcg_bool _L6_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_TR_SH_Initiated_By_Driver _12_SH_Initiated_By_Driver_fired_strong;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool _11_SH_Initiated_By_Driver_reset_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver _10_SH_Initiated_By_Driver_state_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::SH_initiated_by_driver_procedure_off */
  static kcg_bool br_1_guard_SH_Initiated_By_Driver_SH_initiated_by_driver_procedure_off;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_TR_SH_Initiated_By_Driver SH_Initiated_By_Driver_fired_strong;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool SH_Initiated_By_Driver_reset_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver::S0_SH_initiated_by_driver_procedure_on */
  static kcg_bool br_1_guard_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_sel;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver _15_SH_Initiated_By_Driver_state_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool SH_Initiated_By_Driver_reset_sel;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool SH_Initiated_By_Driver_reset_prv;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_TR_SH_Initiated_By_Driver _14_SH_Initiated_By_Driver_fired_strong;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_TR_SH_Initiated_By_Driver _13_SH_Initiated_By_Driver_fired;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Loc_Procedure_Possible */
  static kcg_bool Loc_Procedure_Possible;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L49 */
  static T_Mode_Level_And_Mode_Types_Pkg _L49;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L47 */
  static kcg_bool _L47;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L44 */
  static kcg_bool _L44;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L34 */
  static kcg_bool _L34;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L32 */
  static kcg_bool _L32;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L29 */
  static kcg_bool _L29;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L23 */
  static kcg_bool _L23;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L20 */
  static kcg_bool _L20;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L16 */
  static kcg_bool _L16;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L12 */
  static kcg_bool _L12;
  /* Procedures::Procedure_SH_Initiated_By_Driver::_L6 */
  static kcg_bool _L6;
  
  _L6 = kcg_true;
  _L12 = kcg_true;
  _L16 = kcg_true;
  _L20 = kcg_true;
  _L23 = kcg_true;
  _L49 = Current_Mode;
  _L34 = kcg_true;
  _L47 = kcg_true;
  _L44 = kcg_true;
  _L32 = kcg_false;
  switch (_L49) {
    case FS_Level_And_Mode_Types_Pkg :
      _L29 = _L34;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L29 = _L47;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L29 = _L12;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L29 = _L44;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L29 = _L16;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L29 = _L23;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L29 = _L6;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L29 = _L20;
      break;
    
    default :
      _L29 = _L32;
  }
  Loc_Procedure_Possible = _L29;
  /* init_SH_Initiated_By_Driver */ if (outC->init) {
    SH_Initiated_By_Driver_state_sel =
      SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  }
  else {
    SH_Initiated_By_Driver_state_sel = outC->SH_Initiated_By_Driver_state_nxt;
  }
  /* init_SH_Initiated_By_Driver */ if (outC->init) {
    SH_Initiated_By_Driver_reset_sel = kcg_false;
  }
  else {
    SH_Initiated_By_Driver_reset_sel = outC->SH_Initiated_By_Driver_reset_nxt;
  }
  /* init_SH_Initiated_By_Driver */ if (outC->init) {
    SH_Initiated_By_Driver_reset_prv = kcg_false;
  }
  else {
    SH_Initiated_By_Driver_reset_prv = outC->SH_Initiated_By_Driver_reset_act;
  }
  /* sel_SH_Initiated_By_Driver */ switch (SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      br_1_guard_SH_Initiated_By_Driver_SH_initiated_by_driver_procedure_off =
        Loc_Procedure_Possible & Train_Standstill;
      if (br_1_guard_SH_Initiated_By_Driver_SH_initiated_by_driver_procedure_off) {
        _10_SH_Initiated_By_Driver_state_act =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      else {
        _10_SH_Initiated_By_Driver_state_act =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      _15_SH_Initiated_By_Driver_state_act =
        _10_SH_Initiated_By_Driver_state_act;
      _11_SH_Initiated_By_Driver_reset_act =
        br_1_guard_SH_Initiated_By_Driver_SH_initiated_by_driver_procedure_off;
      outC->SH_Initiated_By_Driver_reset_act =
        _11_SH_Initiated_By_Driver_reset_act;
      if (br_1_guard_SH_Initiated_By_Driver_SH_initiated_by_driver_procedure_off) {
        _12_SH_Initiated_By_Driver_fired_strong =
          SSM_TR_SH_initiated_by_driver_procedure_off_1_SH_Initiated_By_Driver;
      }
      else {
        _12_SH_Initiated_By_Driver_fired_strong =
          SSM_TR_no_trans_SH_Initiated_By_Driver;
      }
      _14_SH_Initiated_By_Driver_fired_strong =
        _12_SH_Initiated_By_Driver_fired_strong;
      break;
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      br_1_guard_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        !Loc_Procedure_Possible | !Train_Standstill;
      if (br_1_guard_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on) {
        SH_Initiated_By_Driver_state_act =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_state_act =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      _15_SH_Initiated_By_Driver_state_act = SH_Initiated_By_Driver_state_act;
      SH_Initiated_By_Driver_reset_act =
        br_1_guard_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
      outC->SH_Initiated_By_Driver_reset_act = SH_Initiated_By_Driver_reset_act;
      if (br_1_guard_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on) {
        SH_Initiated_By_Driver_fired_strong =
          SSM_TR_S0_SH_initiated_by_driver_procedure_on_1_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_fired_strong =
          SSM_TR_no_trans_SH_Initiated_By_Driver;
      }
      _14_SH_Initiated_By_Driver_fired_strong =
        SH_Initiated_By_Driver_fired_strong;
      break;
    
  }
  /* act_SH_Initiated_By_Driver */ switch (_15_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      _1_Condition5 = kcg_false;
      outC->Condition5 = _1_Condition5;
      _2_Condition6 = kcg_false;
      outC->Condition6 = _2_Condition6;
      _3_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _3_Clean_BG_List_SH_Area;
      _4_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _4_End_Of_Mission_Procedure_Req;
      _5_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _5_Request_For_SH_To_RBC;
      _6_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _6_SH_Refused_By_RBC_To_DMI;
      _7_SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      outC->SH_Initiated_By_Driver_state_nxt =
        _7_SH_Initiated_By_Driver_state_nxt;
      _8_SH_Initiated_By_Driver_reset_nxt = kcg_false;
      outC->SH_Initiated_By_Driver_reset_nxt =
        _8_SH_Initiated_By_Driver_reset_nxt;
      _9_SH_Initiated_By_Driver_fired = _14_SH_Initiated_By_Driver_fired_strong;
      _13_SH_Initiated_By_Driver_fired = _9_SH_Initiated_By_Driver_fired;
      break;
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      _L11_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        Current_Level;
      _L12_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        Driver_Req_SH;
      _L13_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        On_Going_Mission;
      _L14_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        Shunting_Granted_By_RBC;
      if (outC->SH_Initiated_By_Driver_reset_act) {
        /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->Context_1);
      }
      /* 1 */
      SH_Initiated_By_Driver_On_Procedures(
        _L11_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on,
        _L12_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on,
        _L13_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on,
        _L14_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on,
        &outC->Context_1);
      _L1_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        outC->Context_1.Clean_BG_List_SH_Area;
      _L3_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        outC->Context_1.Condition5;
      _L2_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        outC->Context_1.Condition6;
      _L4_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        outC->Context_1.End_Of_Mission_Procedure_Req;
      _L5_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        outC->Context_1.SH_Refused_By_RBC_To_DMI;
      _L6_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on =
        outC->Context_1.Request_For_SH_To_RBC;
      Condition5 =
        _L3_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
      outC->Condition5 = Condition5;
      Condition6 =
        _L2_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
      outC->Condition6 = Condition6;
      Clean_BG_List_SH_Area =
        _L1_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area;
      End_Of_Mission_Procedure_Req =
        _L4_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req;
      Request_For_SH_To_RBC =
        _L6_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC;
      SH_Refused_By_RBC_To_DMI =
        _L5_SH_Initiated_By_Driver_S0_SH_initiated_by_driver_procedure_on;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI;
      SH_Initiated_By_Driver_state_nxt =
        SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      outC->SH_Initiated_By_Driver_state_nxt = SH_Initiated_By_Driver_state_nxt;
      SH_Initiated_By_Driver_reset_nxt = kcg_false;
      outC->SH_Initiated_By_Driver_reset_nxt = SH_Initiated_By_Driver_reset_nxt;
      SH_Initiated_By_Driver_fired = _14_SH_Initiated_By_Driver_fired_strong;
      _13_SH_Initiated_By_Driver_fired = SH_Initiated_By_Driver_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Initiated_By_Driver_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

