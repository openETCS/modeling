/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_
#define _Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_

#include "kcg_types.h"
#include "RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "RBC_init_RadioLib.h"
#include "RBC_close_RadioLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_out */ Message_out;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Packets_out */ Packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC_close_RadioLib /* 1 */ _1_Context_1;
  outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 2 */ Context_2;
  outC_RBC_init_RadioLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L2 */ _L2;
  M_TrackTrain_Radio_T_TM_radio_messages /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L4 */ _L4;
  kcg_int /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L5 */ _L5;
  kcg_bool /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L6 */ _L6;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L7 */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L9 */ _L9;
  M_TrackTrain_Radio_T_TM_radio_messages /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::_L8 */ _L8;
} outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration */
extern void Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Trigger_in */kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_sent */kcg_bool Message_sent,
  outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC);

extern void Amsterdam_Utrecht_Sheet06_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC);

#endif /* _Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

