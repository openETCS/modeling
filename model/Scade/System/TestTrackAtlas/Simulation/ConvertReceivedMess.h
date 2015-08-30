/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */
#ifndef _ConvertReceivedMess_H_
#define _ConvertReceivedMess_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* ConvertReceivedMess::Received_Message */ Received_Message;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* ConvertReceivedMess::_L1 */ _L1;
  CompressedRadioMessage_TM /* ConvertReceivedMess::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* ConvertReceivedMess::_L3 */ _L3;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* ConvertReceivedMess::_L4 */ _L4;
  kcg_bool /* ConvertReceivedMess::_L36 */ _L36;
  BG_Header_T_BG_Types_Pkg /* ConvertReceivedMess::_L38 */ _L38;
  RadioMetadata_T_Common_Types_Pkg /* ConvertReceivedMess::_L39 */ _L39;
  MsgSource_T_Common_Types_Pkg /* ConvertReceivedMess::_L40 */ _L40;
  RBC_Id_T_Common_Types_Pkg /* ConvertReceivedMess::_L41 */ _L41;
} outC_ConvertReceivedMess;

/* ===========  node initialization and cycle functions  =========== */
/* ConvertReceivedMess */
extern void ConvertReceivedMess(
  /* ConvertReceivedMess::CompressedRM */CompressedRadioMessage_TM *CompressedRM,
  /* ConvertReceivedMess::CompressedPackets */CompressedPackets_T_Common_Types_Pkg *CompressedPackets,
  /* ConvertReceivedMess::RadioTrackTrainHd */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHd,
  outC_ConvertReceivedMess *outC);

extern void ConvertReceivedMess_reset(outC_ConvertReceivedMess *outC);

#endif /* _ConvertReceivedMess_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertReceivedMess.h
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

