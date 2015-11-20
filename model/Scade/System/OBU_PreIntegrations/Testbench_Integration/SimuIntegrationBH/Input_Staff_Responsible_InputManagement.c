/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Staff_Responsible_InputManagement.h"

/* InputManagement::Input_Staff_Responsible */
void Input_Staff_Responsible_InputManagement(
  /* InputManagement::Input_Staff_Responsible::P_63 */ P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *P_63,
  /* InputManagement::Input_Staff_Responsible::P_137 */ P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P_137,
  /* InputManagement::Input_Staff_Responsible::List_BG_Related_SR_Empty */ kcg_bool *List_BG_Related_SR_Empty,
  /* InputManagement::Input_Staff_Responsible::Stop_if_In_SR */ kcg_bool *Stop_if_In_SR)
{
  static Q_NEWCOUNTRY noname;
  static Q_DIR _1_noname;
  static NID_BG _2_noname;
  static NID_C _3_noname;
  static Q_DIR _4_noname;
  /* InputManagement::Input_Staff_Responsible::_L16 */
  static P63_BaliseInSRAuthority_T_Packet_Types_Pkg _L16;
  /* InputManagement::Input_Staff_Responsible::_L15 */
  static kcg_bool _L15;
  /* InputManagement::Input_Staff_Responsible::_L14 */
  static kcg_bool _L14;
  /* InputManagement::Input_Staff_Responsible::_L13 */
  static kcg_bool _L13;
  /* InputManagement::Input_Staff_Responsible::_L12 */
  static P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg _L12;
  /* InputManagement::Input_Staff_Responsible::_L11 */
  static P137_StopIfInStaffResponsible_T_Packet_Types_Pkg _L11;
  /* InputManagement::Input_Staff_Responsible::_L10 */
  static kcg_bool _L10;
  /* InputManagement::Input_Staff_Responsible::_L5 */
  static kcg_bool _L5;
  /* InputManagement::Input_Staff_Responsible::_L6 */
  static Q_DIR _L6;
  /* InputManagement::Input_Staff_Responsible::_L7 */
  static Q_NEWCOUNTRY _L7;
  /* InputManagement::Input_Staff_Responsible::_L8 */
  static NID_C _L8;
  /* InputManagement::Input_Staff_Responsible::_L9 */
  static NID_BG _L9;
  /* InputManagement::Input_Staff_Responsible::_L4 */
  static kcg_bool _L4;
  /* InputManagement::Input_Staff_Responsible::_L1 */
  static kcg_bool _L1;
  /* InputManagement::Input_Staff_Responsible::_L2 */
  static Q_DIR _L2;
  /* InputManagement::Input_Staff_Responsible::_L3 */
  static Q_SRSTOP _L3;
  
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(&_L11, P_137);
  _L3 = _L11.q_srstop;
  _L2 = _L11.q_dir;
  _L1 = _L11.valid;
  _L4 = kcg_true;
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(&_L12, P_63);
  kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(&_L16, &_L12[1]);
  _L5 = _L16.valid;
  _L15 = !_L5;
  *List_BG_Related_SR_Empty = _L15;
  _L9 = _L16.nid_bg;
  _L8 = _L16.nid_c;
  _L7 = _L16.q_newcountry;
  _L6 = _L16.q_dir;
  noname = _L7;
  _L14 = kcg_false;
  switch (_L3) {
    case Q_SRSTOP_Stop_if_in_SR_mode :
      _L10 = _L4;
      break;
    case Q_SRSTOP_Go_if_in_SR_mode :
      _L10 = _L14;
      break;
    
  }
  _L13 = _L1 & _L10;
  *Stop_if_In_SR = _L13;
  _1_noname = _L6;
  _2_noname = _L9;
  _3_noname = _L8;
  _4_noname = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Staff_Responsible_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

