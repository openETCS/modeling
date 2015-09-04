/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _RBC_close_RadioLib_H_
#define _RBC_close_RadioLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* RadioLib::RBC_close::Message_out */ Message_out;
  CompressedPackets_T_Common_Types_Pkg /* RadioLib::RBC_close::Packets_out */ Packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* RadioLib::RBC_close::_L1 */ _L1;
  kcg_bool /* RadioLib::RBC_close::_L5 */ _L5;
  kcg_int /* RadioLib::RBC_close::_L4 */ _L4;
  CompressedPackets_T_Common_Types_Pkg /* RadioLib::RBC_close::_L3 */ _L3;
  M_TrackTrain_Radio_T_TM_radio_messages /* RadioLib::RBC_close::_L2 */ _L2;
} outC_RBC_close_RadioLib;

/* ===========  node initialization and cycle functions  =========== */
/* RadioLib::RBC_close */
extern void RBC_close_RadioLib(
  /* RadioLib::RBC_close::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_close_RadioLib *outC);

extern void RBC_close_reset_RadioLib(outC_RBC_close_RadioLib *outC);

#endif /* _RBC_close_RadioLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_close_RadioLib.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

