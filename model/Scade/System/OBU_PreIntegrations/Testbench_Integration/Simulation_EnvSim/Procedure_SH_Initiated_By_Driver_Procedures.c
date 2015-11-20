/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Initiated_By_Driver_Procedures.h"

void Procedure_SH_Initiated_By_Driver_reset_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->Context_1);
}

/* Procedures::Procedure_SH_Initiated_By_Driver */
void Procedure_SH_Initiated_By_Driver_Procedures(
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Level */M_LEVEL Current_Level,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Driver_Req_SH */kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_SH_Initiated_By_Driver::On_Going_Mission */kcg_bool On_Going_Mission,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Shunting_Granted_By_RBC */kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Train_Standstill */kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_sel;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool SH_Initiated_By_Driver_reset_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Loc_Procedure_Possible */
  static kcg_bool Loc_Procedure_Possible;
  
  if (outC->init) {
    outC->init = kcg_false;
    SH_Initiated_By_Driver_state_sel =
      SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  }
  else {
    SH_Initiated_By_Driver_state_sel = outC->SH_Initiated_By_Driver_state_nxt;
  }
  switch (Current_Mode) {
    case FS_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    
    default :
      Loc_Procedure_Possible = kcg_false;
  }
  switch (SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      SH_Initiated_By_Driver_reset_act = Loc_Procedure_Possible &
        Train_Standstill;
      if (SH_Initiated_By_Driver_reset_act) {
        SH_Initiated_By_Driver_state_act =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_state_act =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      break;
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      SH_Initiated_By_Driver_reset_act = !Loc_Procedure_Possible |
        !Train_Standstill;
      if (SH_Initiated_By_Driver_reset_act) {
        SH_Initiated_By_Driver_state_act =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_state_act =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      break;
    
  }
  switch (SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      outC->Condition5 = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      break;
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      if (SH_Initiated_By_Driver_reset_act) {
        /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->Context_1);
      }
      /* 1 */
      SH_Initiated_By_Driver_On_Procedures(
        Current_Level,
        Driver_Req_SH,
        On_Going_Mission,
        Shunting_Granted_By_RBC,
        &outC->Context_1);
      outC->SH_Initiated_By_Driver_state_nxt =
        SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      outC->SH_Refused_By_RBC_To_DMI = outC->Context_1.SH_Refused_By_RBC_To_DMI;
      outC->Request_For_SH_To_RBC = outC->Context_1.Request_For_SH_To_RBC;
      outC->End_Of_Mission_Procedure_Req =
        outC->Context_1.End_Of_Mission_Procedure_Req;
      outC->Clean_BG_List_SH_Area = outC->Context_1.Clean_BG_List_SH_Area;
      outC->Condition6 = outC->Context_1.Condition6;
      outC->Condition5 = outC->Context_1.Condition5;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_SH_Initiated_By_Driver_Procedures.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

