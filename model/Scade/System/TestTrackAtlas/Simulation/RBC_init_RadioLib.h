/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */
#ifndef _RBC_init_RadioLib_H_
#define _RBC_init_RadioLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* RadioLib::RBC_init::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* RadioLib::RBC_init::_L1 */ _L1;
  M_TrackTrain_Radio_T_TM_radio_messages /* RadioLib::RBC_init::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* RadioLib::RBC_init::_L3 */ _L3;
  kcg_int /* RadioLib::RBC_init::_L4 */ _L4;
  kcg_bool /* RadioLib::RBC_init::_L6 */ _L6;
} outC_RBC_init_RadioLib;

/* ===========  node initialization and cycle functions  =========== */
/* RadioLib::RBC_init */
extern void RBC_init_RadioLib(
  /* RadioLib::RBC_init::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* RadioLib::RBC_init::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* RadioLib::RBC_init::Trigger_in */kcg_int Trigger_in,
  /* RadioLib::RBC_init::Message_sent */kcg_bool Message_sent,
  outC_RBC_init_RadioLib *outC);

extern void RBC_init_reset_RadioLib(outC_RBC_init_RadioLib *outC);

#endif /* _RBC_init_RadioLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_init_RadioLib.h
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

