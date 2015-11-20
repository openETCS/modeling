/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTIUManagement_Interfaces.h"

/* Interfaces::InputTIUManagement */
void InputTIUManagement_Interfaces(
  /* Interfaces::InputTIUManagement::Data_from_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_from_TIU,
  /* Interfaces::InputTIUManagement::Cab */cab_ID_T_TIU_Types_Pkg Cab,
  /* Interfaces::InputTIUManagement::Train_Permitted_NL */kcg_bool *Train_Permitted_NL,
  /* Interfaces::InputTIUManagement::Train_Permitted_PS */kcg_bool *Train_Permitted_PS,
  /* Interfaces::InputTIUManagement::Train_Req_SL */kcg_bool *Train_Req_SL,
  /* Interfaces::InputTIUManagement::All_Desks_Closed */kcg_bool *All_Desks_Closed,
  /* Interfaces::InputTIUManagement::Desk_Open */kcg_bool *Desk_Open,
  /* Interfaces::InputTIUManagement::OnBoard_Powered */kcg_bool *OnBoard_Powered,
  /* Interfaces::InputTIUManagement::Valid_Train_Data_Stored */kcg_bool *Valid_Train_Data_Stored)
{
  *Valid_Train_Data_Stored =
    (*Data_from_TIU).train_data_info.acknowledgedByDriver;
  *All_Desks_Closed = (*Data_from_TIU).train_status.m_cab_st ==
    both_desks_are_closed_TIU_Types_Pkg;
  switch ((*Data_from_TIU).train_status.m_cab_st) {
    case both_desks_are_closed_TIU_Types_Pkg :
      *Desk_Open = kcg_false;
      break;
    case desk_A_is_open_TIU_Types_Pkg :
      *Desk_Open = Cab == CabA_TIU_Types_Pkg;
      break;
    case desk_B_is_open_TIU_Types_Pkg :
      *Desk_Open = Cab == CabB_TIU_Types_Pkg;
      break;
    case both_desks_are_open_TIU_Types_Pkg :
      *Desk_Open = kcg_true;
      break;
    
    default :
      *Desk_Open = kcg_false;
  }
  switch ((*Data_from_TIU).train_status.m_passiveshunting_st) {
    case passive_shunting_permitted_TIU_Types_Pkg :
      *Train_Permitted_PS = kcg_true;
      break;
    case passive_shunting_not_permitted_TIU_Types_Pkg :
      *Train_Permitted_PS = kcg_false;
      break;
    
  }
  switch ((*Data_from_TIU).train_status.m_sleeping_st) {
    case signal_active_TIU_Types_Pkg :
      *Train_Req_SL = kcg_true;
      break;
    case signal_not_active_TIU_Types_Pkg :
      *Train_Req_SL = kcg_false;
      break;
    
  }
  switch ((*Data_from_TIU).train_status.m_nonleading_st) {
    case non_leading_permitted_TIU_Types_Pkg :
      *Train_Permitted_NL = kcg_true;
      break;
    case non_leading_not_permitted_TIU_Types_Pkg :
      *Train_Permitted_NL = kcg_false;
      break;
    
    default :
      *Train_Permitted_NL = kcg_false;
  }
  *OnBoard_Powered = (*Data_from_TIU).train_status.valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputTIUManagement_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

