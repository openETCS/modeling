/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"

/* cTerminateOrderFromTrackside */
const MoRC_orderToContactAnRBC_Type MoRC_cTerminateOrderFromTrackside = {
  kcg_true, 0, 0, MoRC_morc_rbca_terminateSesssion, kcg_false };

/* cEstablishOrderFromTrackside */
const MoRC_orderToContactAnRBC_Type MoRC_cEstablishOrderFromTrackside = {
  kcg_true, 0, 0, MoRC_morc_rbca_establishSession, kcg_false };

/* cSampleRadioNetworkID */
const MoRC_validRadioNetworkID_Type MoRC_cSampleRadioNetworkID = { kcg_true,
  12345 };

/* cMobileHWStatus_notRegistered */
const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_notRegistered = { kcg_true,
  MoRC_mhwc_notRegistered, kcg_false };

/* cMobileHWStatus_Registered */
const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_Registered = { kcg_true,
  MoRC_mhwc_registered, kcg_false };

/* cTerminateSafeRadioConnectionCmd */
const MoRC_mobileSWCmd_Type MoRC_cTerminateSafeRadioConnectionCmd = { kcg_true,
  MoRC_mswa_terminateRadioConnection, 0 };

/* cRegisterSafeRadioConnectionCmd */
const MoRC_mobileSWCmd_Type MoRC_cRegisterSafeRadioConnectionCmd = { kcg_true,
  MoRC_mswa_register, 0 };

/* cInvalidRadioNetworkID */
const MoRC_validRadioNetworkID_Type MoRC_cInvalidRadioNetworkID = { kcg_false,
  0 };

/* cInvalidMobileSWStatus */
const MoRC_mobileSWStatus_Type MoRC_cInvalidMobileSWStatus = { kcg_false,
  kcg_false, MoRC_mswc_unregistered, 0, kcg_false };

/* cInvalidMobileSWCmd */
const MoRC_mobileSWCmd_Type MoRC_cInvalidMobileSWCmd = { kcg_false,
  MoRC_mswa_nop, 0 };

/* cInvalidMobileHWStatus */
const MoRC_mobileHWStatus_Type MoRC_cInvalidMobileHWStatus = { kcg_false,
  MoRC_mhwc_notRegistered, kcg_false };

/* cMobileSWStatus_noHW */
const MoRC_mobileSWStatus_Type MoRC_cMobileSWStatus_noHW = { kcg_true,
  kcg_false, MoRC_mswc_unregistered, MoRC_cInvalidRadioNetworkID_value,
  kcg_false };

/* cInvalidmobileHWCmd */
const MoRC_mobileHWCmd_Type MoRC_cInvalidmobileHWCmd = { kcg_false,
  MoRC_mhwa_nop, 0 };

/* cInvalidOrderToContactAnRBC */
const MoRC_orderToContactAnRBC_Type MoRC_cInvalidOrderToContactAnRBC = {
  kcg_false, 0, 0, MoRC_morc_rbca_noAction, kcg_false };

/* $************* KCG Version 6.4 beta3 (build i9) **************
** kcg_consts.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

