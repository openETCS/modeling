/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Reversing_Mode_InputManagement.h"

/* InputManagement::Input_Reversing_Mode */
void Input_Reversing_Mode_InputManagement(
  /* InputManagement::Input_Reversing_Mode::P_138 */ P138_ReversingAreaInformation_T_Packet_Types_Pkg *P_138,
  /* InputManagement::Input_Reversing_Mode::P_139 */ P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P_139,
  /* InputManagement::Input_Reversing_Mode::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::Input_Reversing_Mode::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data)
{
  static Q_DIR noname;
  static Q_SCALE _1_noname;
  static Q_DIR _2_noname;
  static Q_SCALE _3_noname;
  /* InputManagement::Input_Reversing_Mode::_L14 */
  static kcg_bool _L14;
  /* InputManagement::Input_Reversing_Mode::_L13 */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg _L13;
  /* InputManagement::Input_Reversing_Mode::_L12 */
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg _L12;
  /* InputManagement::Input_Reversing_Mode::_L7 */
  static kcg_bool _L7;
  /* InputManagement::Input_Reversing_Mode::_L8 */
  static Q_DIR _L8;
  /* InputManagement::Input_Reversing_Mode::_L9 */
  static Q_SCALE _L9;
  /* InputManagement::Input_Reversing_Mode::_L10 */
  static D_STARTREVERSE _L10;
  /* InputManagement::Input_Reversing_Mode::_L11 */
  static L_REVERSEAREA _L11;
  /* InputManagement::Input_Reversing_Mode::_L2 */
  static kcg_bool _L2;
  /* InputManagement::Input_Reversing_Mode::_L3 */
  static Q_DIR _L3;
  /* InputManagement::Input_Reversing_Mode::_L4 */
  static Q_SCALE _L4;
  /* InputManagement::Input_Reversing_Mode::_L5 */
  static D_REVERSE _L5;
  /* InputManagement::Input_Reversing_Mode::_L6 */
  static V_REVERSE _L6;
  /* InputManagement::Input_Reversing_Mode::_L1 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L1;
  /* InputManagement::Input_Reversing_Mode::_L15 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L15;
  /* InputManagement::Input_Reversing_Mode::_L16 */
  static kcg_int _L16;
  /* InputManagement::Input_Reversing_Mode::_L17 */
  static kcg_int _L17;
  
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(&_L12, P_138);
  _L8 = _L12.q_dir;
  noname = _L8;
  _L7 = _L12.valid;
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &_L13,
    P_139);
  _L2 = _L13.valid;
  _L14 = _L7 & _L2;
  _L10 = _L12.d_startreverse;
  _L15 = referenceLocation;
  _L16 = _L10 + _L15;
  _L11 = _L12.l_reversearea;
  _L5 = _L13.d_reverse;
  _L17 = _L15 + _L5;
  _L6 = _L13.v_reverse;
  _L1.Available = _L14;
  _L1.Dist_Start = _L16;
  _L1.Length = _L11;
  _L1.Dist_Run = _L17;
  _L1.Speed = _L6;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(Reversing_Data, &_L1);
  _L4 = _L13.q_scale;
  _1_noname = _L4;
  _L3 = _L13.q_dir;
  _L9 = _L12.q_scale;
  _2_noname = _L3;
  _3_noname = _L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Reversing_Mode_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

