/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_MoRC_withSimplified_IF_H_
#define _MoRC_MoRC_withSimplified_IF_H_

#include "kcg_types.h"
#include "MoRC_managementOfRadioCommunication.h"
#include "MoRC_FallingEdge_digital.h"

/* ========================  input structure  ====================== */
typedef struct {
  MoRC_NID_MESSAGE_Type /* MoRC_withSimplified_IF::messageFromRBC */ messageFromRBC;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_setUpEstablished */ safeRadioCommunication_setUpEstablished;
  MoRC_NID_RBC_Type /* MoRC_withSimplified_IF::NID_RBC_ID */ NID_RBC_ID;
  MoRC_radioHoleStatus_Type /* MoRC_withSimplified_IF::radioHole_status */ radioHole_status;
  MoRC_onBoardOrder_Type /* MoRC_withSimplified_IF::orderFromOnBoard */ orderFromOnBoard;
  kcg_bool /* MoRC_withSimplified_IF::systemVersionIsCompatible */ systemVersionIsCompatible;
  MoRC_M_LEVEL_Type /* MoRC_withSimplified_IF::M_Level */ M_Level;
  MoRC_M_MODE_Type /* MoRC_withSimplified_IF::M_Mode */ M_Mode;
  MoRC_time_Type /* MoRC_withSimplified_IF::actualTime */ actualTime;
  MoRC_radioNetworkID_Type /* MoRC_withSimplified_IF::RadioNetworkID_memorized */ RadioNetworkID_memorized;
  MoRC_radioNetworkID_Type /* MoRC_withSimplified_IF::RadioNetworkID_fromDriver */ RadioNetworkID_fromDriver;
  MoRC_radioNetworkID_Type /* MoRC_withSimplified_IF::RadioNetworkID_fromTrackside */ RadioNetworkID_fromTrackside;
  kcg_bool /* MoRC_withSimplified_IF::powerAvailable */ powerAvailable;
  MoRC_mobileHWConnectionStatus_Type /* MoRC_withSimplified_IF::mobileHWConnectionStatus */ mobileHWConnectionStatus;
} MoRC_inC_MoRC_withSimplified_IF;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MoRC_NID_MESSAGE_Type /* MoRC_withSimplified_IF::messageToRBC */ messageToRBC;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_requestSetUp */ safeRadioCommunication_requestSetUp;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_releaseSetUp */ safeRadioCommunication_releaseSetUp;
  kcg_bool /* MoRC_withSimplified_IF::radioComSesssionEstablished */ radioComSesssionEstablished;
  MoRC_radioNetworkID_Type /* MoRC_withSimplified_IF::actualRadioNetworkID */ actualRadioNetworkID;
  MoRC_mobileHWAction_Type /* MoRC_withSimplified_IF::mobileHWCmd */ mobileHWCmd;
  kcg_bool /* MoRC_withSimplified_IF::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  MoRC_mobileSWConnectionStatus_Type /* MoRC_withSimplified_IF::mobileSWStatus */ mobileSWStatus;
  kcg_bool /* MoRC_withSimplified_IF::ready */ ready;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_PowerUpSequencer /* MoRC_withSimplified_IF::PowerUpSequencer */ PowerUpSequencer_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_FallingEdge_digital /* 1 */ _1_Context_1;
  MoRC_outC_managementOfRadioCommunication /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_MoRC_withSimplified_IF;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_withSimplified_IF */
extern void MoRC_MoRC_withSimplified_IF(
  MoRC_inC_MoRC_withSimplified_IF *inC,
  MoRC_outC_MoRC_withSimplified_IF *outC);

extern void MoRC_MoRC_withSimplified_IF_reset(
  MoRC_outC_MoRC_withSimplified_IF *outC);
extern void MoRC_MoRC_withSimplified_IF_init(
  MoRC_outC_MoRC_withSimplified_IF *outC);

#endif /* _MoRC_MoRC_withSimplified_IF_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_MoRC_withSimplified_IF.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

