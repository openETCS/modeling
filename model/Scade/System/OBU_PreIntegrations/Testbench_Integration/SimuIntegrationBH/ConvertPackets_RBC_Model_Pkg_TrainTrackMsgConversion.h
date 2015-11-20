/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"
#include "C_compr_P001_TM_TrainToTrack.h"
#include "C_compr_P000_TM_TrainToTrack.h"
#include "C_compr_P011_TM_TrainToTrack.h"
#include "C_compr_P009_TM_TrainToTrack.h"
#include "C_compr_P004_TM_TrainToTrack.h"
#include "C_compr_P005_TM_TrainToTrack.h"
#include "ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "C_compr_P003_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  outPackets_T_Common_Types_Pkg /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::oldPackets */ oldPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_compr_P003_TM_TrainToTrack /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
extern void ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::nid_message */ kcg_int nid_message,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::newPackets */ M_TrainTrack_compressed_packets_T_TM_radio_messages *newPackets,
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertPackets_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

