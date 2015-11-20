/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Reversing_Calculations_Librairies.h"

/* Librairies::Reversing_Calculations */
void Reversing_Calculations_Librairies(
  /* Librairies::Reversing_Calculations::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* Librairies::Reversing_Calculations::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Librairies::Reversing_Calculations::Max_Safe_Front_In_Reverse_Area */ kcg_bool *Max_Safe_Front_In_Reverse_Area,
  /* Librairies::Reversing_Calculations::RV_Data_Available */ kcg_bool *RV_Data_Available)
{
  static Location_T_Obu_BasicTypes_Pkg noname;
  static Speed_T_Obu_BasicTypes_Pkg _1_noname;
  /* Librairies::Reversing_Calculations::Valid_Train_Position */
  static kcg_bool Valid_Train_Position;
  /* Librairies::Reversing_Calculations::Max_Safe_Front_End */
  static Location_T_Obu_BasicTypes_Pkg Max_Safe_Front_End;
  /* Librairies::Reversing_Calculations::Loc_RV_Dist_Start */
  static Location_T_Obu_BasicTypes_Pkg Loc_RV_Dist_Start;
  /* Librairies::Reversing_Calculations::Loc_RV_Available */
  static kcg_bool Loc_RV_Available;
  /* Librairies::Reversing_Calculations::Loc_RV_Length */
  static Location_T_Obu_BasicTypes_Pkg Loc_RV_Length;
  /* Librairies::Reversing_Calculations::_L30 */
  static kcg_bool _L30;
  /* Librairies::Reversing_Calculations::_L29 */
  static trainPosition_T_TrainPosition_Types_Pck _L29;
  /* Librairies::Reversing_Calculations::_L28 */
  static Location_T_Obu_BasicTypes_Pkg _L28;
  /* Librairies::Reversing_Calculations::_L20 */
  static trainPosition_T_TrainPosition_Types_Pck _L20;
  /* Librairies::Reversing_Calculations::_L36 */
  static kcg_bool _L36;
  /* Librairies::Reversing_Calculations::_L37 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L37;
  /* Librairies::Reversing_Calculations::_L42 */
  static kcg_bool _L42;
  /* Librairies::Reversing_Calculations::_L41 */
  static Location_T_Obu_BasicTypes_Pkg _L41;
  /* Librairies::Reversing_Calculations::_L40 */
  static Location_T_Obu_BasicTypes_Pkg _L40;
  /* Librairies::Reversing_Calculations::_L39 */
  static Location_T_Obu_BasicTypes_Pkg _L39;
  /* Librairies::Reversing_Calculations::_L38 */
  static Speed_T_Obu_BasicTypes_Pkg _L38;
  /* Librairies::Reversing_Calculations::_L43 */
  static kcg_bool _L43;
  /* Librairies::Reversing_Calculations::_L45 */
  static kcg_bool _L45;
  /* Librairies::Reversing_Calculations::_L47 */
  static kcg_bool _L47;
  /* Librairies::Reversing_Calculations::_L48 */
  static kcg_bool _L48;
  /* Librairies::Reversing_Calculations::_L49 */
  static Location_T_Obu_BasicTypes_Pkg _L49;
  /* Librairies::Reversing_Calculations::_L51 */
  static Location_T_Obu_BasicTypes_Pkg _L51;
  /* Librairies::Reversing_Calculations::_L52 */
  static Location_T_Obu_BasicTypes_Pkg _L52;
  /* Librairies::Reversing_Calculations::_L62 */
  static kcg_bool _L62;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L20, Train_Position);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L29, Train_Position);
  _L30 = _L29.valid;
  Valid_Train_Position = _L30;
  _L28 = _L20.maxSafeFrontEndPostion;
  Max_Safe_Front_End = _L28;
  _L49 = Max_Safe_Front_End;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(&_L37, Reversing_Data);
  _L41 = _L37.Dist_Start;
  Loc_RV_Dist_Start = _L41;
  _L51 = Loc_RV_Dist_Start;
  _L40 = _L37.Length;
  Loc_RV_Length = _L40;
  _L52 = Loc_RV_Length;
  _L36 = /* 1 */ Position_In_Area_Librairies(_L49, _L51, _L52);
  _L38 = _L37.Speed;
  _L39 = _L37.Dist_Run;
  _L42 = _L37.Available;
  Loc_RV_Available = _L42;
  _L43 = Loc_RV_Available;
  _L45 = Valid_Train_Position;
  _L62 = _L43 & _L45;
  _L48 = kcg_false;
  /* 1 */ if (_L62) {
    _L47 = _L36;
  }
  else {
    _L47 = _L48;
  }
  *Max_Safe_Front_In_Reverse_Area = _L47;
  noname = _L39;
  _1_noname = _L38;
  *RV_Data_Available = _L43;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Reversing_Calculations_Librairies.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

