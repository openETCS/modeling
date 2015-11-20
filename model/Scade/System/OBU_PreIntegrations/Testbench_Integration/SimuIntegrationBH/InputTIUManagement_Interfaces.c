/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTIUManagement_Interfaces.h"

/* Interfaces::InputTIUManagement */
void InputTIUManagement_Interfaces(
  /* Interfaces::InputTIUManagement::Data_from_TIU */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_from_TIU,
  /* Interfaces::InputTIUManagement::Cab */ cab_ID_T_TIU_Types_Pkg Cab,
  /* Interfaces::InputTIUManagement::Train_Permitted_NL */ kcg_bool *Train_Permitted_NL,
  /* Interfaces::InputTIUManagement::Train_Permitted_PS */ kcg_bool *Train_Permitted_PS,
  /* Interfaces::InputTIUManagement::Train_Req_SL */ kcg_bool *Train_Req_SL,
  /* Interfaces::InputTIUManagement::All_Desks_Closed */ kcg_bool *All_Desks_Closed,
  /* Interfaces::InputTIUManagement::Desk_Open */ kcg_bool *Desk_Open,
  /* Interfaces::InputTIUManagement::OnBoard_Powered */ kcg_bool *OnBoard_Powered,
  /* Interfaces::InputTIUManagement::Valid_Train_Data_Stored */ kcg_bool *Valid_Train_Data_Stored)
{
  static M_trainintegrity_signal_status_T_TIU_Types_Pkg noname;
  static M_traction_signal_status_T_TIU_Types_Pkg _1_noname;
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _2_noname;
  static kcg_bool _3_noname;
  /* Interfaces::InputTIUManagement::Loc_Sleeping_ST */
  static M_sleeping_signal_status_T_TIU_Types_Pkg Loc_Sleeping_ST;
  /* Interfaces::InputTIUManagement::Loc_PS_ST */
  static M_passiveshunting_signal_status_T_TIU_Types_Pkg Loc_PS_ST;
  /* Interfaces::InputTIUManagement::Loc_NL_ST */
  static M_nonleading_signal_status_T_TIU_Types_Pkg Loc_NL_ST;
  /* Interfaces::InputTIUManagement::Loc_Cab_ST */
  static M_cab_signal_status_T_TIU_Types_Pkg Loc_Cab_ST;
  /* Interfaces::InputTIUManagement::_L20 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L20;
  /* Interfaces::InputTIUManagement::_L36 */
  static kcg_bool _L36;
  /* Interfaces::InputTIUManagement::_L35 */
  static M_sleeping_signal_status_T_TIU_Types_Pkg _L35;
  /* Interfaces::InputTIUManagement::_L34 */
  static M_passiveshunting_signal_status_T_TIU_Types_Pkg _L34;
  /* Interfaces::InputTIUManagement::_L33 */
  static M_nonleading_signal_status_T_TIU_Types_Pkg _L33;
  /* Interfaces::InputTIUManagement::_L32 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L32;
  /* Interfaces::InputTIUManagement::_L31 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L31;
  /* Interfaces::InputTIUManagement::_L30 */
  static M_trainintegrity_signal_status_T_TIU_Types_Pkg _L30;
  /* Interfaces::InputTIUManagement::_L29 */
  static M_traction_signal_status_T_TIU_Types_Pkg _L29;
  /* Interfaces::InputTIUManagement::_L37 */
  static Mode_control_and_train_status_T_TIU_Types_Pkg _L37;
  /* Interfaces::InputTIUManagement::_L49 */
  static M_nonleading_signal_status_T_TIU_Types_Pkg _L49;
  /* Interfaces::InputTIUManagement::_L50 */
  static kcg_bool _L50;
  /* Interfaces::InputTIUManagement::_L51 */
  static kcg_bool _L51;
  /* Interfaces::InputTIUManagement::_L52 */
  static kcg_bool _L52;
  /* Interfaces::InputTIUManagement::_L53 */
  static kcg_bool _L53;
  /* Interfaces::InputTIUManagement::_L60 */
  static kcg_bool _L60;
  /* Interfaces::InputTIUManagement::_L58 */
  static kcg_bool _L58;
  /* Interfaces::InputTIUManagement::_L57 */
  static kcg_bool _L57;
  /* Interfaces::InputTIUManagement::_L62 */
  static M_sleeping_signal_status_T_TIU_Types_Pkg _L62;
  /* Interfaces::InputTIUManagement::_L69 */
  static kcg_bool _L69;
  /* Interfaces::InputTIUManagement::_L68 */
  static kcg_bool _L68;
  /* Interfaces::InputTIUManagement::_L63 */
  static kcg_bool _L63;
  /* Interfaces::InputTIUManagement::_L70 */
  static M_passiveshunting_signal_status_T_TIU_Types_Pkg _L70;
  /* Interfaces::InputTIUManagement::_L71 */
  static kcg_bool _L71;
  /* Interfaces::InputTIUManagement::_L72 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L72;
  /* Interfaces::InputTIUManagement::_L75 */
  static kcg_bool _L75;
  /* Interfaces::InputTIUManagement::_L76 */
  static kcg_bool _L76;
  /* Interfaces::InputTIUManagement::_L77 */
  static kcg_bool _L77;
  /* Interfaces::InputTIUManagement::_L78 */
  static kcg_bool _L78;
  /* Interfaces::InputTIUManagement::_L79 */
  static kcg_bool _L79;
  /* Interfaces::InputTIUManagement::_L81 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L81;
  /* Interfaces::InputTIUManagement::_L82 */
  static kcg_bool _L82;
  /* Interfaces::InputTIUManagement::_L83 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L83;
  /* Interfaces::InputTIUManagement::_L84 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L84;
  /* Interfaces::InputTIUManagement::_L85 */
  static trainData_T_TIU_Types_Pkg _L85;
  /* Interfaces::InputTIUManagement::_L86 */
  static kcg_bool _L86;
  /* Interfaces::InputTIUManagement::_L100 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L100;
  /* Interfaces::InputTIUManagement::_L97 */
  static kcg_bool _L97;
  /* Interfaces::InputTIUManagement::_L96 */
  static kcg_bool _L96;
  /* Interfaces::InputTIUManagement::_L95 */
  static kcg_bool _L95;
  /* Interfaces::InputTIUManagement::_L94 */
  static kcg_bool _L94;
  /* Interfaces::InputTIUManagement::_L101 */
  static kcg_bool _L101;
  /* Interfaces::InputTIUManagement::_L102 */
  static kcg_bool _L102;
  
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L20, Data_from_TIU);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &_L37,
    &_L20.train_status);
  _L29 = _L37.m_traction_st;
  _L30 = _L37.m_trainintegrity_st;
  _L31 = _L37.m_directioncontroller_st;
  _L32 = _L37.m_cab_st;
  _L33 = _L37.m_nonleading_st;
  _L34 = _L37.m_passiveshunting_st;
  _L35 = _L37.m_sleeping_st;
  _L36 = _L37.valid;
  Loc_Sleeping_ST = _L35;
  Loc_PS_ST = _L34;
  Loc_NL_ST = _L33;
  Loc_Cab_ST = _L32;
  noname = _L30;
  _1_noname = _L29;
  _L49 = Loc_NL_ST;
  _L51 = kcg_true;
  _L52 = kcg_false;
  _L53 = kcg_false;
  switch (_L49) {
    case non_leading_permitted_TIU_Types_Pkg :
      _L50 = _L51;
      break;
    case non_leading_not_permitted_TIU_Types_Pkg :
      _L50 = _L52;
      break;
    
    default :
      _L50 = _L53;
  }
  *Train_Permitted_NL = _L50;
  _L62 = Loc_Sleeping_ST;
  _L58 = kcg_true;
  _L57 = kcg_false;
  switch (_L62) {
    case signal_active_TIU_Types_Pkg :
      _L60 = _L58;
      break;
    case signal_not_active_TIU_Types_Pkg :
      _L60 = _L57;
      break;
    
  }
  *Train_Req_SL = _L60;
  _L70 = Loc_PS_ST;
  _L63 = kcg_true;
  _L69 = kcg_false;
  switch (_L70) {
    case passive_shunting_permitted_TIU_Types_Pkg :
      _L68 = _L63;
      break;
    case passive_shunting_not_permitted_TIU_Types_Pkg :
      _L68 = _L69;
      break;
    
  }
  *Train_Permitted_PS = _L68;
  _L81 = Loc_Cab_ST;
  _L83 = both_desks_are_closed_TIU_Types_Pkg;
  _L82 = _L81 == _L83;
  *All_Desks_Closed = _L82;
  _L72 = Loc_Cab_ST;
  _L78 = kcg_false;
  _L76 = Cab == CabA_TIU_Types_Pkg;
  _L77 = Cab == CabB_TIU_Types_Pkg;
  _L75 = kcg_true;
  _L79 = kcg_false;
  switch (_L72) {
    case both_desks_are_closed_TIU_Types_Pkg :
      _L71 = _L78;
      break;
    case desk_A_is_open_TIU_Types_Pkg :
      _L71 = _L76;
      break;
    case desk_B_is_open_TIU_Types_Pkg :
      _L71 = _L77;
      break;
    case both_desks_are_open_TIU_Types_Pkg :
      _L71 = _L75;
      break;
    
    default :
      _L71 = _L79;
  }
  *Desk_Open = _L71;
  _2_noname = _L31;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L84, Data_from_TIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L85, &_L84.train_data_info);
  _L86 = _L85.acknowledgedByDriver;
  *Valid_Train_Data_Stored = _L86;
  _L94 = kcg_false;
  _L95 = kcg_false;
  _L100 = Loc_Cab_ST;
  _L101 = kcg_true;
  _L102 = kcg_true;
  _L97 = kcg_true;
  switch (_L100) {
    case both_desks_are_closed_TIU_Types_Pkg :
      _L96 = _L94;
      break;
    case desk_A_is_open_TIU_Types_Pkg :
      _L96 = _L101;
      break;
    case desk_B_is_open_TIU_Types_Pkg :
      _L96 = _L102;
      break;
    case both_desks_are_open_TIU_Types_Pkg :
      _L96 = _L97;
      break;
    
    default :
      _L96 = _L95;
  }
  *OnBoard_Powered = _L36;
  _3_noname = _L96;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputTIUManagement_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

