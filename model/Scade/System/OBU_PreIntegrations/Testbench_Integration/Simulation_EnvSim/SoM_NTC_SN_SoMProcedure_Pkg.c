/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoM_NTC_SN_SoMProcedure_Pkg.h"

void SoM_NTC_SN_reset_SoMProcedure_Pkg(outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SoMProcedure_Pkg::SoM_NTC_SN */
void SoM_NTC_SN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_NTC_SN::Status_Mode_Change_from_Level_and_Mode_Management */T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_sel;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    Level_NTC_and_Mode_SN_state_sel = SSM_st_State1_Level_NTC_and_Mode_SN;
  }
  else {
    Level_NTC_and_Mode_SN_state_sel = outC->Level_NTC_and_Mode_SN_state_nxt;
  }
  switch (Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      Level_NTC_and_Mode_SN_state_act =
        SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      if ((*Status_Mode_Change_from_Level_and_Mode_Management).Mode ==
        M_MODE_National_System) {
        Level_NTC_and_Mode_SN_state_act =
          SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      }
      else {
        Level_NTC_and_Mode_SN_state_act =
          SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      }
      break;
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      Level_NTC_and_Mode_SN_state_act =
        SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      break;
    
  }
  switch (Level_NTC_and_Mode_SN_state_act) {
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      outC->start_ack_to_TIU = kcg_false;
      outC->Level_NTC_and_Mode_SN_state_nxt =
        SSM_st_State1_Level_NTC_and_Mode_SN;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      outC->start_ack_to_TIU = kcg_false;
      outC->Level_NTC_and_Mode_SN_state_nxt =
        SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      break;
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      outC->start_ack_to_TIU = kcg_true;
      outC->Level_NTC_and_Mode_SN_state_nxt =
        SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SoM_NTC_SN_SoMProcedure_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

