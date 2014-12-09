/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_KCG_CONSTS_H_
#define _MoRC_KCG_CONSTS_H_

#include "kcg_types.h"

/* cNID_MESSAGE_GeneralMessage */
#define MoRC_cNID_MESSAGE_GeneralMessage 24

/* cNID_MESSAGE_GeneralMessage_init */
#define MoRC_cNID_MESSAGE_GeneralMessage_init 25

/* cNID_MESSAGE_RBC_RIU_SystemVersion */
#define MoRC_cNID_MESSAGE_RBC_RIU_SystemVersion 32

/* cNID_MESSAGE_InitiationOfACommunicationSession_track */
#define MoRC_cNID_MESSAGE_InitiationOfACommunicationSession_track 38

/* cNID_MESSAGE_AckOfTerminationOfACommunicationSession */
#define MoRC_cNID_MESSAGE_AckOfTerminationOfACommunicationSession 39

/* cNID_PACKET_131 */
#define MoRC_cNID_PACKET_131 131

/* cNID_MESSAGE_registerNetwork */
#define MoRC_cNID_MESSAGE_registerNetwork 45

/* cTerminateOrderFromTrackside */
extern const MoRC_orderToContactAnRBC_Type MoRC_cTerminateOrderFromTrackside;

/* cEstablishOrderFromTrackside */
extern const MoRC_orderToContactAnRBC_Type MoRC_cEstablishOrderFromTrackside;

/* cSampleRadioNetworkID */
extern const MoRC_validRadioNetworkID_Type MoRC_cSampleRadioNetworkID;

/* cConnectionStatusTimerInterval */
#define MoRC_cConnectionStatusTimerInterval 15000

/* cNID_MESSAGE_noMessage */
#define MoRC_cNID_MESSAGE_noMessage 255

/* cNID_MESSAGE_SessionEstablished */
#define MoRC_cNID_MESSAGE_SessionEstablished 159

/* cNID_MESSAGE_NoCompatibleVersionSupported */
#define MoRC_cNID_MESSAGE_NoCompatibleVersionSupported 154

/* cNID_MESSAGE_terminationOfACommunicationSession */
#define MoRC_cNID_MESSAGE_terminationOfACommunicationSession 156

/* cNID_MESSAGE_InitiationOfACommunicationSession */
#define MoRC_cNID_MESSAGE_InitiationOfACommunicationSession 155

/* cMobileHWStatus_notRegistered */
extern const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_notRegistered;

/* cMobileHWStatus_Registered */
extern const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_Registered;

/* cTerminateSafeRadioConnectionCmd */
extern const MoRC_mobileSWCmd_Type MoRC_cTerminateSafeRadioConnectionCmd;

/* cRegisterSafeRadioConnectionCmd */
extern const MoRC_mobileSWCmd_Type MoRC_cRegisterSafeRadioConnectionCmd;

/* cRBC_id_contactLastKnownRBC */
#define MoRC_cRBC_id_contactLastKnownRBC (- 1)

/* cRBC_phoneNo_UseOnboardStoredShortNo */
#define MoRC_cRBC_phoneNo_UseOnboardStoredShortNo (- 1)

/* cMaxNoOfConnectionRetries */
#define MoRC_cMaxNoOfConnectionRetries 3

/* cRadioConnectionReestablishingTimeout */
#define MoRC_cRadioConnectionReestablishingTimeout 10000

/* cTerminationOfCommunicationSession_MaxNoOfRepetitions */
#define MoRC_cTerminationOfCommunicationSession_MaxNoOfRepetitions 5

/* cTerminationOfCommunicationSessionRepetitionInterval */
#define MoRC_cTerminationOfCommunicationSessionRepetitionInterval 1000

/* cInvalidRadioNetworkID */
extern const MoRC_validRadioNetworkID_Type MoRC_cInvalidRadioNetworkID;

/* cInvalidMobileSWStatus */
extern const MoRC_mobileSWStatus_Type MoRC_cInvalidMobileSWStatus;

/* cInvalidMobileSWCmd */
extern const MoRC_mobileSWCmd_Type MoRC_cInvalidMobileSWCmd;

/* cInvalidMobileHWStatus */
extern const MoRC_mobileHWStatus_Type MoRC_cInvalidMobileHWStatus;

/* cMobileSWStatus_noHW */
extern const MoRC_mobileSWStatus_Type MoRC_cMobileSWStatus_noHW;

/* cInvalidRadioNetworkID_value */
#define MoRC_cInvalidRadioNetworkID_value (- 1)

/* cInvalidmobileHWCmd */
extern const MoRC_mobileHWCmd_Type MoRC_cInvalidmobileHWCmd;

/* cPositionReportRepetitionInterval */
#define MoRC_cPositionReportRepetitionInterval 10000

/* cPositionReoport_MaxNoOfRepetitions */
#define MoRC_cPositionReoport_MaxNoOfRepetitions 5

/* cInvalidOrderToContactAnRBC */
extern const MoRC_orderToContactAnRBC_Type MoRC_cInvalidOrderToContactAnRBC;

#endif /* _MoRC_KCG_CONSTS_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** kcg_consts.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

