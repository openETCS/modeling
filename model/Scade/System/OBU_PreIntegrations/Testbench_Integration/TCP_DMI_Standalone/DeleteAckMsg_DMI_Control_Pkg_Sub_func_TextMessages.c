/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg */
void DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::localQueue */array__31788 *localQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::Delete */kcg_bool Delete,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::hh_array */array_real_5 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::mm_array */array_real_5 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_num_ack */kcg_int local_num_ack,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_ack_empty */kcg_bool local_ack_empty,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::queue */array__31788 *queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::NumE */kcg_int *NumE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::new_mm */array_real_5 *new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::new_hh */array_real_5 *new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::ack_is_Empty */kcg_bool *ack_is_Empty)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L110 */ array_real_5 _L110;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L109 */ array_real_5 _L109;
  
  /* 1 */
  FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
    hh_array,
    mm_array,
    &_L109,
    &_L110);
  if (Delete) {
    kcg_copy_array_real_5(new_hh, &_L110);
    *NumE = local_num_ack - 1;
    kcg_copy_array_real_5(new_mm, &_L109);
    /* 1 */
    FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
      0,
      localQueue,
      queue);
  }
  else {
    kcg_copy_array_real_5(new_hh, hh_array);
    *NumE = local_num_ack;
    kcg_copy_array_real_5(new_mm, mm_array);
    kcg_copy_array__31788(queue, localQueue);
  }
  if (local_ack_empty) {
    *ack_is_Empty = local_ack_empty;
  }
  else {
    *ack_is_Empty = *NumE <= 0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

