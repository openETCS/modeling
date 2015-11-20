/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Send_M154_TM_radio_messages_H_
#define _Send_M154_TM_radio_messages_H_

#include "kcg_types.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"
#include "C_M154_to_header_TM_RBC_conversions.h"
#include "BufferMsg_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_radio_messages::Send_M154::MessageBus_out */ MessageBus_out;
  kcg_int /* TM_radio_messages::Send_M154::t_train_assigned */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferMsg_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Send_M154_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M154 */
extern void Send_M154_TM_radio_messages(
  /* TM_radio_messages::Send_M154::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M154::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M154::Message_154_in */ M_154_T_TM_radio_messages *Message_154_in,
  /* TM_radio_messages::Send_M154::m_version */ M_VERSION m_version,
  outC_Send_M154_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M154_reset_TM_radio_messages(
  outC_Send_M154_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M154_init_TM_radio_messages(
  outC_Send_M154_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Send_M154_TM_radio_messages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M154_TM_radio_messages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

