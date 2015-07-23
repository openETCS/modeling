/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_
#define _Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_

#include "kcg_types.h"
#include "Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"
#include "Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"
#include "Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"
#include "Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h"
#include "Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"
#include "Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"
#include "Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.h"
#include "Balises0010_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises.h"
#include "Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"
#include "Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.h"
#include "TrackDiscontinuity_InfraLib.h"
#include "TrackInit_InfraLib.h"
#include "TrackClose_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::BaliseMessage */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackClose_InfraLib /* 1 */ _14_Context_1;
  outC_Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises /* 1 */ _13_Context_1;
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises /* 1 */ _12_Context_1;
  outC_Balises0010_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises /* 1 */ _11_Context_1;
  outC_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises /* 1 */ _10_Context_1;
  outC_Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises /* 1 */ _9_Context_1;
  outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* 1 */ _8_Context_1;
  outC_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises /* 1 */ _7_Context_1;
  outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* 1 */ _6_Context_1;
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises /* 1 */ _5_Context_1;
  outC_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises /* 1 */ _4_Context_1;
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* 1 */ _3_Context_1;
  outC_TrackDiscontinuity_InfraLib /* 2 */ Context_2;
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* 1 */ _2_Context_1;
  outC_TrackDiscontinuity_InfraLib /* 1 */ _1_Context_1;
  outC_TrackInit_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L1 */ _L1;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L2 */ _L2;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L3 */ _L3;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L4 */ _L4;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L5 */ _L5;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L6 */ _L6;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L7 */ _L7;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L8 */ _L8;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L9 */ _L9;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L10 */ _L10;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L11 */ _L11;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L12 */ _L12;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L13 */ _L13;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L14 */ _L14;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L15 */ _L15;
  kcg_real /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L16 */ _L16;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L17 */ _L17;
} outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
extern void Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::TrainPosSim_in */kcg_real TrainPosSim_in,
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);

extern void Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);

#endif /* _Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

