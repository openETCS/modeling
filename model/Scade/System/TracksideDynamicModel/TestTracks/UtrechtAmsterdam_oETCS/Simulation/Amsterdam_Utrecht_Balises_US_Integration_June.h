/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T22:54:50
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Balises_US_Integration_June_H_
#define _Amsterdam_Utrecht_Balises_US_Integration_June_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CASTLIB_BaliseHeaders_TM_conversions /* 1 */ _1_Context_1;
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::L1 */ L1;
  kcg_real /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::L2 */ L2;
  CompressedPackets_T_Common_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::L3 */ L3;
  BaliseTelegramHeader_int_T_TM /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::L4 */ L4;
  TelegramHeader_T_BG_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::L5 */ L5;
} outC_Amsterdam_Utrecht_Balises_US_Integration_June;

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt */
extern void Amsterdam_Utrecht_Balises_US_Integration_June(void);

extern void Amsterdam_Utrecht_Balises_reset_US_Integration_June(void);

extern outC_Amsterdam_Utrecht_Balises_US_Integration_June Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June;

/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::TrainPos */
extern kcg_real TrainPos;

/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::Packets */
extern CompressedPackets_T_Common_Types_Pkg Packets;
/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt::Header */
extern TelegramHeader_T_BG_Types_Pkg Header;

#endif /* _Amsterdam_Utrecht_Balises_US_Integration_June_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Balises_US_Integration_June.h
** Generation date: 2015-07-12T22:54:50
*************************************************************$ */

