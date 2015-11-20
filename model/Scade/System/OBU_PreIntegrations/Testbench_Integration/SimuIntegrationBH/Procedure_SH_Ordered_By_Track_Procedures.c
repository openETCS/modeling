/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Ordered_By_Track_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Ordered_By_Track_init_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  outC->Service_Brake_Command = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition50 = kcg_true;
  /* 1 */ Procedure_With_Mode_Profile_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Ordered_By_Track_reset_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_SH_Ordered_By_Track */
void Procedure_SH_Ordered_By_Track_Procedures(
  /* Procedures::Procedure_SH_Ordered_By_Track::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Ordered_By_Track::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_SH_Ordered_By_Track::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  static kcg_bool noname;
  /* Procedures::Procedure_SH_Ordered_By_Track::Loc_Procedure_Possible */
  static kcg_bool Loc_Procedure_Possible;
  /* Procedures::Procedure_SH_Ordered_By_Track::Loc_Supervision_Mode */
  static kcg_bool Loc_Supervision_Mode;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L98 */
  static kcg_bool _L98;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L95 */
  static kcg_bool _L95;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L89 */
  static kcg_bool _L89;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L86 */
  static kcg_bool _L86;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L82 */
  static kcg_bool _L82;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L78 */
  static kcg_bool _L78;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L72 */
  static kcg_bool _L72;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L66 */
  static T_Mode_Level_And_Mode_Types_Pkg _L66;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L64 */
  static kcg_bool _L64;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L61 */
  static kcg_bool _L61;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L51 */
  static kcg_bool _L51;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L130 */
  static T_Mode_Level_And_Mode_Types_Pkg _L130;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L131 */
  static kcg_bool _L131;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L134 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L134;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L135 */
  static Speed_T_Obu_BasicTypes_Pkg _L135;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L136 */
  static kcg_bool _L136;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L138 */
  static T_MA_Level_And_Mode_Types_Pkg _L138;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L143 */
  static T_Mode_Level_And_Mode_Types_Pkg _L143;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L142 */
  static kcg_bool _L142;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L141 */
  static kcg_bool _L141;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L140 */
  static kcg_bool _L140;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L139 */
  static kcg_bool _L139;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L144 */
  static kcg_bool _L144;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L145 */
  static kcg_bool _L145;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L166 */
  static kcg_bool _L166;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L165 */
  static kcg_bool _L165;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L164 */
  static kcg_bool _L164;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L163 */
  static kcg_bool _L163;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L162 */
  static kcg_bool _L162;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L167 */
  static kcg_bool _L167;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L169 */
  static trainPosition_T_TrainPosition_Types_Pck _L169;
  /* Procedures::Procedure_SH_Ordered_By_Track::_L170 */
  static T_Mode_Level_And_Mode_Types_Pkg _L170;
  
  _L51 = kcg_true;
  _L66 = Current_Mode;
  _L64 = kcg_true;
  _L78 = kcg_true;
  _L61 = kcg_true;
  _L82 = kcg_true;
  _L89 = kcg_true;
  _L72 = kcg_false;
  _L86 = kcg_false;
  _L98 = kcg_false;
  switch (_L66) {
    case FS_Level_And_Mode_Types_Pkg :
      _L95 = _L51;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L95 = _L64;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L95 = _L78;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L95 = _L61;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L95 = _L82;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L95 = _L89;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L95 = _L72;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L95 = _L86;
      break;
    
    default :
      _L95 = _L98;
  }
  Loc_Procedure_Possible = _L95;
  _L130 = Current_Mode;
  _L131 = Driver_Ack_SH;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L134,
    Mode_Profile_On_Board);
  _L135 = Train_Speed;
  _L136 = Loc_Procedure_Possible;
  _L138 = Profile_SH_Level_And_Mode_Types_Pkg;
  _L170 = SH_Level_And_Mode_Types_Pkg;
  _L143 = Current_Mode;
  _L141 = kcg_true;
  _L140 = kcg_true;
  _L144 = kcg_true;
  _L139 = kcg_false;
  switch (_L143) {
    case FS_Level_And_Mode_Types_Pkg :
      _L142 = _L141;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L142 = _L140;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L142 = _L144;
      break;
    
    default :
      _L142 = _L139;
  }
  Loc_Supervision_Mode = _L142;
  _L145 = Loc_Supervision_Mode;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L169, Train_Position);
  /* 1 */
  Procedure_With_Mode_Profile_Procedures(
    _L130,
    _L131,
    &_L134,
    _L136,
    _L138,
    _L170,
    _L145,
    &_L169,
    _L135,
    &outC->Context_1);
  _L162 = outC->Context_1.Condition_15_50_70;
  _L163 = outC->Context_1.Condition_34_61_71;
  _L164 = outC->Context_1.Condition_40_51_72;
  _L165 = outC->Context_1.Condition_73_74;
  _L166 = outC->Context_1.Service_Brake_Command;
  _L167 = outC->Context_1.Ack_Req_To_Driver;
  outC->Condition50 = _L162;
  outC->Condition51 = _L164;
  outC->Condition61 = _L163;
  outC->Ack_SH_Req_To_Driver = _L166;
  outC->Service_Brake_Command = _L167;
  noname = _L165;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Ordered_By_Track_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

