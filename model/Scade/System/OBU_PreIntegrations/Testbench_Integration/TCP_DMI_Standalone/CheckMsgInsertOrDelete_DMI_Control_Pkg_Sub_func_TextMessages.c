/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete */
void CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::isImportant */kcg_bool isImportant,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::insert */kcg_bool *insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::insertAuxi */kcg_bool *insertAuxi,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::insertImp */kcg_bool *insertImp)
{
  *insert = (*msg).valid;
  *insertImp = *insert & isImportant;
  *insertAuxi = *insert & !isImportant;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

