/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "Length_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IndexFixedMsg */ IndexFixedMsg;
  array_char_30_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::ArrayPlainText */ ArrayPlainText;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::Array_hh */ Array_hh;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::Array_mm */ Array_mm;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::FlashingBorderMsg */ FlashingBorderMsg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager */
extern void AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::Queue */array__31788 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_hh_local */array_real_5 *array_hh_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_mm_local */array_real_5 *array_mm_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::numAck */kcg_int numAck,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */

