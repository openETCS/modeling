/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_radioNetworkMobile_H_
#define _MoRC_radioNetworkMobile_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MoRC_mobileHWCmd_Type /* radioNetworkMobile::mobileHWCmd */ mobileHWCmd;
  MoRC_mobileSWStatus_Type /* radioNetworkMobile::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable;
  MoRC_SSM_ST_MobileHW_available_SM /* radioNetworkMobile::MobileHW_available_SM */ MobileHW_available_SM_state_nxt;
  MoRC_radioNetworkID_Type /* radioNetworkMobile::registeredRadioNetworkID */ registeredRadioNetworkID;
  MoRC_mobileHWStatus_Type /* radioNetworkMobile::_L2 */ _L2;
  MoRC_mobileSWCmd_Type /* radioNetworkMobile::_L18 */ _L18;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_radioNetworkMobile;

/* ===========  node initialization and cycle functions  =========== */
/* radioNetworkMobile */
extern void MoRC_radioNetworkMobile(
  /* radioNetworkMobile::mobileHWStatus */ MoRC_mobileHWStatus_Type *mobileHWStatus,
  /* radioNetworkMobile::mobileSWCmd */ MoRC_mobileSWCmd_Type *mobileSWCmd,
  MoRC_outC_radioNetworkMobile *outC);

extern void MoRC_radioNetworkMobile_reset(MoRC_outC_radioNetworkMobile *outC);
extern void MoRC_radioNetworkMobile_init(MoRC_outC_radioNetworkMobile *outC);

#endif /* _MoRC_radioNetworkMobile_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_radioNetworkMobile.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

