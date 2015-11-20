/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_OnSight_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_OnSight_init_Procedures(outC_Procedure_OnSight_Procedures *outC)
{
  outC->Service_Brake_Command = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Condition73 = kcg_true;
  outC->Condition40 = kcg_true;
  outC->Condition34 = kcg_true;
  outC->Condition15 = kcg_true;
  /* 1 */ Procedure_With_Mode_Profile_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_OnSight_reset_Procedures(outC_Procedure_OnSight_Procedures *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_OnSight */
void Procedure_OnSight_Procedures(
  /* Procedures::Procedure_OnSight::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_OnSight::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_OnSight::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_OnSight::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_OnSight::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_OnSight_Procedures *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;
  /* Procedures::Procedure_OnSight::Loc_Procedure_Possible */
  static kcg_bool Loc_Procedure_Possible;
  /* Procedures::Procedure_OnSight::Loc_Condition_73 */
  static kcg_bool Loc_Condition_73;
  /* Procedures::Procedure_OnSight::Loc_Supervision_Mode */
  static kcg_bool Loc_Supervision_Mode;
  /* Procedures::Procedure_OnSight::_L80 */
  static kcg_bool _L80;
  /* Procedures::Procedure_OnSight::_L424 */
  static kcg_bool _L424;
  /* Procedures::Procedure_OnSight::_L438 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L438;
  /* Procedures::Procedure_OnSight::_L439 */
  static T_MA_Level_And_Mode_Types_Pkg _L439;
  /* Procedures::Procedure_OnSight::_L474 */
  static kcg_bool _L474;
  /* Procedures::Procedure_OnSight::_L471 */
  static kcg_bool _L471;
  /* Procedures::Procedure_OnSight::_L468 */
  static kcg_bool _L468;
  /* Procedures::Procedure_OnSight::_L457 */
  static kcg_bool _L457;
  /* Procedures::Procedure_OnSight::_L455 */
  static kcg_bool _L455;
  /* Procedures::Procedure_OnSight::_L452 */
  static kcg_bool _L452;
  /* Procedures::Procedure_OnSight::_L449 */
  static kcg_bool _L449;
  /* Procedures::Procedure_OnSight::_L446 */
  static T_Mode_Level_And_Mode_Types_Pkg _L446;
  /* Procedures::Procedure_OnSight::_L445 */
  static kcg_bool _L445;
  /* Procedures::Procedure_OnSight::_L440 */
  static kcg_bool _L440;
  /* Procedures::Procedure_OnSight::_L477 */
  static T_Mode_Level_And_Mode_Types_Pkg _L477;
  /* Procedures::Procedure_OnSight::_L479 */
  static Speed_T_Obu_BasicTypes_Pkg _L479;
  /* Procedures::Procedure_OnSight::_L480 */
  static kcg_bool _L480;
  /* Procedures::Procedure_OnSight::_L489 */
  static T_Mode_Level_And_Mode_Types_Pkg _L489;
  /* Procedures::Procedure_OnSight::_L486 */
  static kcg_bool _L486;
  /* Procedures::Procedure_OnSight::_L484 */
  static kcg_bool _L484;
  /* Procedures::Procedure_OnSight::_L483 */
  static kcg_bool _L483;
  /* Procedures::Procedure_OnSight::_L482 */
  static kcg_bool _L482;
  /* Procedures::Procedure_OnSight::_L491 */
  static kcg_bool _L491;
  /* Procedures::Procedure_OnSight::_L502 */
  static kcg_bool _L502;
  /* Procedures::Procedure_OnSight::_L523 */
  static kcg_bool _L523;
  /* Procedures::Procedure_OnSight::_L522 */
  static kcg_bool _L522;
  /* Procedures::Procedure_OnSight::_L521 */
  static kcg_bool _L521;
  /* Procedures::Procedure_OnSight::_L520 */
  static kcg_bool _L520;
  /* Procedures::Procedure_OnSight::_L519 */
  static kcg_bool _L519;
  /* Procedures::Procedure_OnSight::_L524 */
  static kcg_bool _L524;
  /* Procedures::Procedure_OnSight::_L526 */
  static trainPosition_T_TrainPosition_Types_Pck _L526;
  /* Procedures::Procedure_OnSight::_L529 */
  static kcg_bool _L529;
  /* Procedures::Procedure_OnSight::_L528 */
  static kcg_bool _L528;
  /* Procedures::Procedure_OnSight::_L527 */
  static kcg_bool _L527;
  /* Procedures::Procedure_OnSight::_L530 */
  static T_Mode_Level_And_Mode_Types_Pkg _L530;
  /* Procedures::Procedure_OnSight::_L531 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L531;
  /* Procedures::Procedure_OnSight::_L532 */
  static T_MA_Level_And_Mode_Types_Pkg _L532;
  /* Procedures::Procedure_OnSight::_L533 */
  static trainPosition_T_TrainPosition_Types_Pck _L533;
  /* Procedures::Procedure_OnSight::_L534 */
  static Speed_T_Obu_BasicTypes_Pkg _L534;
  /* Procedures::Procedure_OnSight::_L537 */
  static kcg_bool _L537;
  /* Procedures::Procedure_OnSight::_L538 */
  static T_Mode_Level_And_Mode_Types_Pkg _L538;
  /* Procedures::Procedure_OnSight::_L539 */
  static kcg_bool _L539;
  
  _L530 = LS_Level_And_Mode_Types_Pkg;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L531,
    Mode_Profile_On_Board);
  _L532 = Profile_LS_Level_And_Mode_Types_Pkg;
  _L534 = Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L533, Train_Position);
  /* 1 */
  Mode_Profile_Calculations_Librairies(
    _L530,
    &_L531,
    _L532,
    _L534,
    &_L533,
    &_L527,
    &_L528,
    &_L529,
    &_L537);
  _L539 = !_L537;
  _L477 = Current_Mode;
  _L424 = Driver_Ack_OS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L438,
    Mode_Profile_On_Board);
  _L446 = Current_Mode;
  _L468 = kcg_true;
  _L449 = kcg_true;
  _L452 = kcg_true;
  _L471 = kcg_true;
  _L474 = kcg_true;
  _L440 = kcg_false;
  _L457 = kcg_false;
  _L445 = kcg_false;
  switch (_L446) {
    case FS_Level_And_Mode_Types_Pkg :
      _L455 = _L468;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L455 = _L449;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L455 = _L452;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L455 = _L471;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L455 = _L474;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L455 = _L440;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L455 = _L457;
      break;
    
    default :
      _L455 = _L445;
  }
  Loc_Procedure_Possible = _L455;
  _L480 = Loc_Procedure_Possible;
  _L439 = Profile_OS_Level_And_Mode_Types_Pkg;
  _L538 = OS_Level_And_Mode_Types_Pkg;
  _L489 = Current_Mode;
  _L482 = kcg_true;
  _L486 = kcg_true;
  _L483 = kcg_false;
  switch (_L489) {
    case FS_Level_And_Mode_Types_Pkg :
      _L484 = _L482;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L484 = _L486;
      break;
    
    default :
      _L484 = _L483;
  }
  Loc_Supervision_Mode = _L484;
  _L491 = Loc_Supervision_Mode;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L526, Train_Position);
  _L479 = Train_Speed;
  /* 1 */
  Procedure_With_Mode_Profile_Procedures(
    _L477,
    _L424,
    &_L438,
    _L480,
    _L439,
    _L538,
    _L491,
    &_L526,
    _L479,
    &outC->Context_1);
  _L519 = outC->Context_1.Condition_15_50_70;
  _L520 = outC->Context_1.Condition_34_61_71;
  _L521 = outC->Context_1.Condition_40_51_72;
  _L522 = outC->Context_1.Condition_73_74;
  _L523 = outC->Context_1.Service_Brake_Command;
  _L524 = outC->Context_1.Ack_Req_To_Driver;
  Loc_Condition_73 = _L522;
  _L502 = Loc_Condition_73;
  _L80 = _L539 & _L502;
  outC->Condition15 = _L519;
  outC->Condition34 = _L520;
  outC->Condition40 = _L521;
  outC->Condition73 = _L80;
  outC->Ack_OS_Req_To_Driver = _L524;
  outC->Service_Brake_Command = _L523;
  noname = _L527;
  _1_noname = _L528;
  _2_noname = _L529;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_OnSight_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

