/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */
#ifndef _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"
#include "ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* =====================  no input structure  ====================== */

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
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::inNew */M_TrainTrack_Message_T_TM_radio_messages *inNew,
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

extern void ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#endif /* _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */

