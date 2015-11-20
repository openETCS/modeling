/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_LimitedSupervision_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_LimitedSupervision_init_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  outC->Service_Brake_Command = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Condition74 = kcg_true;
  outC->Condition72 = kcg_true;
  outC->Condition71 = kcg_true;
  outC->Condition70 = kcg_true;
  /* 1 */ Procedure_With_Mode_Profile_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_LimitedSupervision_reset_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_LimitedSupervision */
void Procedure_LimitedSupervision_Procedures(
  /* Procedures::Procedure_LimitedSupervision::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_LimitedSupervision::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_LimitedSupervision::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_LimitedSupervision::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_LimitedSupervision::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;
  /* Procedures::Procedure_LimitedSupervision::Loc_Supervision_Mode */
  static kcg_bool Loc_Supervision_Mode;
  /* Procedures::Procedure_LimitedSupervision::Loc_Procedure_Possible */
  static kcg_bool Loc_Procedure_Possible;
  /* Procedures::Procedure_LimitedSupervision::Loc_Condition_74 */
  static kcg_bool Loc_Condition_74;
  /* Procedures::Procedure_LimitedSupervision::_L476 */
  static kcg_bool _L476;
  /* Procedures::Procedure_LimitedSupervision::_L475 */
  static kcg_bool _L475;
  /* Procedures::Procedure_LimitedSupervision::_L473 */
  static Speed_T_Obu_BasicTypes_Pkg _L473;
  /* Procedures::Procedure_LimitedSupervision::_L471 */
  static kcg_bool _L471;
  /* Procedures::Procedure_LimitedSupervision::_L470 */
  static kcg_bool _L470;
  /* Procedures::Procedure_LimitedSupervision::_L467 */
  static kcg_bool _L467;
  /* Procedures::Procedure_LimitedSupervision::_L466 */
  static kcg_bool _L466;
  /* Procedures::Procedure_LimitedSupervision::_L465 */
  static kcg_bool _L465;
  /* Procedures::Procedure_LimitedSupervision::_L464 */
  static T_MA_Level_And_Mode_Types_Pkg _L464;
  /* Procedures::Procedure_LimitedSupervision::_L461 */
  static kcg_bool _L461;
  /* Procedures::Procedure_LimitedSupervision::_L455 */
  static kcg_bool _L455;
  /* Procedures::Procedure_LimitedSupervision::_L454 */
  static kcg_bool _L454;
  /* Procedures::Procedure_LimitedSupervision::_L452 */
  static kcg_bool _L452;
  /* Procedures::Procedure_LimitedSupervision::_L449 */
  static T_Mode_Level_And_Mode_Types_Pkg _L449;
  /* Procedures::Procedure_LimitedSupervision::_L448 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L448;
  /* Procedures::Procedure_LimitedSupervision::_L446 */
  static T_Mode_Level_And_Mode_Types_Pkg _L446;
  /* Procedures::Procedure_LimitedSupervision::_L445 */
  static kcg_bool _L445;
  /* Procedures::Procedure_LimitedSupervision::_L444 */
  static kcg_bool _L444;
  /* Procedures::Procedure_LimitedSupervision::_L442 */
  static T_Mode_Level_And_Mode_Types_Pkg _L442;
  /* Procedures::Procedure_LimitedSupervision::_L436 */
  static kcg_bool _L436;
  /* Procedures::Procedure_LimitedSupervision::_L435 */
  static kcg_bool _L435;
  /* Procedures::Procedure_LimitedSupervision::_L477 */
  static kcg_bool _L477;
  /* Procedures::Procedure_LimitedSupervision::_L499 */
  static kcg_bool _L499;
  /* Procedures::Procedure_LimitedSupervision::_L498 */
  static kcg_bool _L498;
  /* Procedures::Procedure_LimitedSupervision::_L497 */
  static kcg_bool _L497;
  /* Procedures::Procedure_LimitedSupervision::_L496 */
  static kcg_bool _L496;
  /* Procedures::Procedure_LimitedSupervision::_L495 */
  static kcg_bool _L495;
  /* Procedures::Procedure_LimitedSupervision::_L500 */
  static kcg_bool _L500;
  /* Procedures::Procedure_LimitedSupervision::_L511 */
  static T_Mode_Level_And_Mode_Types_Pkg _L511;
  /* Procedures::Procedure_LimitedSupervision::_L510 */
  static kcg_bool _L510;
  /* Procedures::Procedure_LimitedSupervision::_L509 */
  static kcg_bool _L509;
  /* Procedures::Procedure_LimitedSupervision::_L508 */
  static T_MA_Level_And_Mode_Types_Pkg _L508;
  /* Procedures::Procedure_LimitedSupervision::_L504 */
  static kcg_bool _L504;
  /* Procedures::Procedure_LimitedSupervision::_L505 */
  static kcg_bool _L505;
  /* Procedures::Procedure_LimitedSupervision::_L506 */
  static kcg_bool _L506;
  /* Procedures::Procedure_LimitedSupervision::_L507 */
  static kcg_bool _L507;
  /* Procedures::Procedure_LimitedSupervision::_L503 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L503;
  /* Procedures::Procedure_LimitedSupervision::_L502 */
  static trainPosition_T_TrainPosition_Types_Pck _L502;
  /* Procedures::Procedure_LimitedSupervision::_L501 */
  static Speed_T_Obu_BasicTypes_Pkg _L501;
  /* Procedures::Procedure_LimitedSupervision::_L513 */
  static trainPosition_T_TrainPosition_Types_Pck _L513;
  /* Procedures::Procedure_LimitedSupervision::_L514 */
  static T_Mode_Level_And_Mode_Types_Pkg _L514;
  /* Procedures::Procedure_LimitedSupervision::_L515 */
  static kcg_bool _L515;
  
  _L435 = kcg_true;
  _L449 = Current_Mode;
  _L467 = kcg_true;
  _L476 = kcg_true;
  _L445 = kcg_false;
  switch (_L449) {
    case FS_Level_And_Mode_Types_Pkg :
      _L461 = _L467;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L461 = _L476;
      break;
    
    default :
      _L461 = _L445;
  }
  Loc_Supervision_Mode = _L461;
  _L436 = Loc_Supervision_Mode;
  _L442 = Current_Mode;
  _L444 = kcg_false;
  _L446 = Current_Mode;
  _L477 = Driver_Ack_LS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L448,
    Mode_Profile_On_Board);
  _L475 = kcg_true;
  _L454 = kcg_true;
  _L452 = kcg_true;
  _L465 = kcg_true;
  _L466 = kcg_false;
  _L470 = kcg_false;
  switch (_L446) {
    case FS_Level_And_Mode_Types_Pkg :
      _L471 = _L475;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L471 = _L435;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L471 = _L454;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L471 = _L452;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L471 = _L465;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L471 = _L466;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L471 = _L444;
      break;
    
    default :
      _L471 = _L470;
  }
  Loc_Procedure_Possible = _L471;
  _L455 = Loc_Procedure_Possible;
  _L464 = Profile_LS_Level_And_Mode_Types_Pkg;
  _L514 = LS_Level_And_Mode_Types_Pkg;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L513, Train_Position);
  _L473 = Train_Speed;
  /* 1 */
  Procedure_With_Mode_Profile_Procedures(
    _L442,
    _L477,
    &_L448,
    _L455,
    _L464,
    _L514,
    _L436,
    &_L513,
    _L473,
    &outC->Context_1);
  _L495 = outC->Context_1.Condition_15_50_70;
  _L496 = outC->Context_1.Condition_34_61_71;
  _L497 = outC->Context_1.Condition_40_51_72;
  _L498 = outC->Context_1.Condition_73_74;
  _L499 = outC->Context_1.Service_Brake_Command;
  _L500 = outC->Context_1.Ack_Req_To_Driver;
  outC->Ack_LS_Req_To_Driver = _L500;
  outC->Service_Brake_Command = _L499;
  outC->Condition70 = _L495;
  outC->Condition71 = _L496;
  _L511 = OS_Level_And_Mode_Types_Pkg;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L503,
    Mode_Profile_On_Board);
  _L508 = Profile_OS_Level_And_Mode_Types_Pkg;
  _L501 = Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L502, Train_Position);
  /* 1 */
  Mode_Profile_Calculations_Librairies(
    _L511,
    &_L503,
    _L508,
    _L501,
    &_L502,
    &_L504,
    &_L505,
    &_L506,
    &_L507);
  _L515 = !_L507;
  Loc_Condition_74 = _L498;
  _L510 = Loc_Condition_74;
  _L509 = _L515 & _L510;
  outC->Condition74 = _L509;
  outC->Condition72 = _L497;
  noname = _L504;
  _1_noname = _L506;
  _2_noname = _L505;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_LimitedSupervision_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

