/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_LimitedSupervision_Procedures.h"

void Procedure_LimitedSupervision_reset_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_reset_Procedures(&outC->Context_1);
}

/* Procedures::Procedure_LimitedSupervision */
void Procedure_LimitedSupervision_Procedures(
  /* Procedures::Procedure_LimitedSupervision::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_LimitedSupervision::Driver_Ack_LS */kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_LimitedSupervision::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_LimitedSupervision::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_LimitedSupervision::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* Procedures::Procedure_LimitedSupervision::_L504 */
  static kcg_bool _L504;
  /* Procedures::Procedure_LimitedSupervision::_L507 */
  static kcg_bool _L507;
  
  /* 1 */
  Mode_Profile_Calculations_Librairies(
    OS_Level_And_Mode_Types_Pkg,
    Mode_Profile_On_Board,
    Profile_OS_Level_And_Mode_Types_Pkg,
    Train_Speed,
    Train_Position,
    &_L504,
    &tmp1,
    &tmp,
    &_L507);
  switch (Current_Mode) {
    case SN_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_true;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      tmp = kcg_true;
      tmp1 = kcg_true;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_true;
      break;
    case FS_Level_And_Mode_Types_Pkg :
      tmp = kcg_true;
      tmp1 = kcg_true;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    
    default :
      tmp = kcg_false;
      tmp1 = kcg_false;
  }
  /* 1 */
  Procedure_With_Mode_Profile_Procedures(
    Current_Mode,
    Driver_Ack_LS,
    Mode_Profile_On_Board,
    tmp1,
    Profile_LS_Level_And_Mode_Types_Pkg,
    LS_Level_And_Mode_Types_Pkg,
    tmp,
    Train_Position,
    Train_Speed,
    &outC->Context_1);
  outC->Condition70 = outC->Context_1.Condition_15_50_70;
  outC->Condition71 = outC->Context_1.Condition_34_61_71;
  outC->Condition72 = outC->Context_1.Condition_40_51_72;
  outC->Service_Brake_Command = outC->Context_1.Service_Brake_Command;
  outC->Ack_LS_Req_To_Driver = outC->Context_1.Ack_Req_To_Driver;
  outC->Condition74 = !_L507 & outC->Context_1.Condition_73_74;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_LimitedSupervision_Procedures.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

