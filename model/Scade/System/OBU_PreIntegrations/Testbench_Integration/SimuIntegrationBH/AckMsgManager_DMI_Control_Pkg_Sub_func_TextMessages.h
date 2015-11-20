/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "Length_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages /* 2 */ _5_Context_2[5];
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages /* 2 */ Context_2;
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _4_Context_1[5];
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _3_Context_1;
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _2_Context_1;
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1[27];
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L24 */ _L24_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L23 */ _L23_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L21 */ _L21_IfBlock1;
  P044_other_data_TM_TrainToTrack /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L18 */ _L18_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L17 */ _L17_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L16 */ _L16_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L15 */ _L15_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L14 */ _L14_IfBlock1;
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L13 */ _L13_IfBlock1;
  array_int_4 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L12 */ _L12_IfBlock1;
  DMI_Q_TEXT_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L10 */ _L10_IfBlock1;
  Array_DMI_Q_Text /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L5 */ _L5_IfBlock1;
  Array_DMI_Q_Text /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L8 */ _L8_IfBlock1;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L1 */ _L1_IfBlock1;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L2 */ _L2_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else */ else_clock_IfBlock1;
  array_char_30 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L8 */ _L812_IfBlock1;
  array_char_30 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L7 */ _L7_IfBlock1;
  array_char_30 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L6 */ _L6_IfBlock1;
  array_char_30 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L5 */ _L511_IfBlock1;
  array_char_30_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L4 */ _L410_IfBlock1;
  array_char_30 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L1 */ _L19_IfBlock1;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L12 */ _L128_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L11 */ _L11_IfBlock1;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L10 */ _L107_IfBlock1;
  DMI_TEXT_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::else::then::_L2 */ _L26_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::FixText */ FixText;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::PlainText */ PlainText;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::num_mm */ num_mm;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::num_hh */ num_hh;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L11 */ _L11;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L10 */ _L10;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L12 */ _L12;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L13 */ _L13;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L14 */ _L14;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L18 */ _L18;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L17 */ _L17;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L19 */ _L19;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L20 */ _L20;
  array_real_5_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L33 */ _L33;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L31 */ _L31;
  array_real_5_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L29 */ _L29;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L28 */ _L28;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L23 */ _L23;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L21 */ _L21;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L38 */ _L38;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L37 */ _L37;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L36 */ _L36;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L35 */ _L35;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L34 */ _L34;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L40 */ _L40;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L41 */ _L41;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L46 */ _L46;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L45 */ _L45;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L44 */ _L44;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L43 */ _L43;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L42 */ _L42;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L49 */ _L49;
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L50 */ _L50;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L52 */ _L52;
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L51 */ _L51;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L53 */ _L53;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L54 */ _L54;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L55 */ _L55;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L56 */ _L56;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L58 */ _L58;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L59 */ _L59;
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L60 */ _L60;
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L61 */ _L61;
} outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager */
extern void AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::Queue */ array_170229 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_hh_local */ array_real_5 *array_hh_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_mm_local */ array_real_5 *array_mm_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::numAck */ kcg_int numAck,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void AckMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

