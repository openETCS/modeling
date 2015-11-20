/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg */
void DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::localQueue */array__31785 *localQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::hh_array */array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::mm_array */array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::local_num_ack */kcg_int local_num_ack,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::is_empty */kcg_bool is_empty,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::delete */kcg_bool delete,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::num */kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::NumE */kcg_int *NumE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::new_mm */array_real_10 *new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::new_hh */array_real_10 *new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::msg_is_Empty */kcg_bool *msg_is_Empty,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::MsgQueue */array__31785 *MsgQueue)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L140 */ array_real_10 _L140;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L139 */ array_real_10 _L139;
  
  /* 1 */
  FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    hh_array,
    mm_array,
    &_L139,
    &_L140);
  if (delete) {
    *NumE = num - 1;
    kcg_copy_array_real_10(new_hh, &_L140);
    kcg_copy_array_real_10(new_mm, &_L139);
    /* 1 */
    FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
      0,
      localQueue,
      MsgQueue);
  }
  else {
    *NumE = num;
    kcg_copy_array_real_10(new_hh, hh_array);
    kcg_copy_array_real_10(new_mm, mm_array);
    kcg_copy_array__31785(MsgQueue, localQueue);
  }
  if (is_empty) {
    *msg_is_Empty = is_empty;
  }
  else {
    *msg_is_Empty = *NumE <= 0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

