/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"
#include "ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::outOld */ outOld;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg */
extern void ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::inNew */ M_TrainTrack_Message_T_TM_radio_messages *inNew,
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToOldRadioTrainTrackMsg_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

