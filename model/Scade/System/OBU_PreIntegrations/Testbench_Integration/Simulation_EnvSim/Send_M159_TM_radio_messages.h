/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _Send_M159_TM_radio_messages_H_
#define _Send_M159_TM_radio_messages_H_

#include "kcg_types.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"
#include "C_P003_train_compr_TM_TrainToTrack.h"
#include "C_M159_to_header_TM_RBC_conversions.h"
#include "BufferMsg_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_radio_messages::Send_M159::MessageBus_out */ MessageBus_out;
  kcg_int /* TM_radio_messages::Send_M159::t_train_assigned */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferMsg_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Send_M159_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M159 */
extern void Send_M159_TM_radio_messages(
  /* TM_radio_messages::Send_M159::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M159::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M159::Message_159_in */M_159_T_TM_radio_messages *Message_159_in,
  /* TM_radio_messages::Send_M159::P003 */P003_TM_TrainToTrack *P003,
  /* TM_radio_messages::Send_M159::m_version */M_VERSION m_version,
  outC_Send_M159_TM_radio_messages *outC);

extern void Send_M159_reset_TM_radio_messages(
  outC_Send_M159_TM_radio_messages *outC);

#endif /* _Send_M159_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M159_TM_radio_messages.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

