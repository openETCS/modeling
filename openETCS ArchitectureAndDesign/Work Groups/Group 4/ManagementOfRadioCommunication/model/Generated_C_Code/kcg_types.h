/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_KCG_TYPES_H_
#define _MoRC_KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* onBoardOrder_Type */
typedef enum MoRC_kcg_tag_onBoardOrder_Type {
  MoRC_obo_noOrder,
  MoRC_obo_initiateCommunication,
  MoRC_obo_terminateCommunication,
  MoRC_obo_registerNetwork
} MoRC_onBoardOrder_Type;
/* radioHoleStatus_Type */
typedef enum MoRC_kcg_tag_radioHoleStatus_Type {
  MoRC_rhs_none,
  MoRC_rhs_end,
  MoRC_rhs_begin,
  MoRC_rhs_inside
} MoRC_radioHoleStatus_Type;
/* M_MODE_Type */
typedef enum MoRC_kcg_tag_M_MODE_Type {
  MoRC_ETCS_Mode_FullSupervision,
  MoRC_ETCS_Mode_OnSight,
  MoRC_ETCS_Mode_StaffResponsible,
  MoRC_ETCS_Mode_Shunting,
  MoRC_ETCS_Mode_Unfitted,
  MoRC_ETCS_Mode_Sleeping,
  MoRC_ETCS_Mode_StandBy,
  MoRC_ETCS_Mode_Trip,
  MoRC_ETCS_Mode_PostTrip,
  MoRC_ETCS_Mode_SystemFailure,
  MoRC_ETCS_Mode_Isolation,
  MoRC_ETCS_Mode_NonLeading,
  MoRC_ETCS_Mode_LimitedSupervision,
  MoRC_ETCS_Mode_NationalSystem,
  MoRC_ETCS_Mode_Reversing,
  MoRC_ETCS_Mode_PassiveShunting,
  MoRC_ETCS_Mode_EndOfMission
} MoRC_M_MODE_Type;
/* M_LEVEL_Type */
typedef enum MoRC_kcg_tag_M_LEVEL_Type {
  MoRC_ETCS_Level_0,
  MoRC_ETCS_Level_NTC,
  MoRC_ETCS_Level_1,
  MoRC_ETCS_Level_2,
  MoRC_ETCS_Level_3
} MoRC_M_LEVEL_Type;
/* mobileSWConnectionStatus_Type */
typedef enum MoRC_kcg_tag_mobileSWConnectionStatus_Type {
  MoRC_mswc_unregistered,
  MoRC_mswc_registering,
  MoRC_mswc_registered,
  MoRC_mswc_connecting,
  MoRC_mswc_connected,
  MoRC_mswc_establishingSession,
  MoRC_mswc_sessionEstablished
} MoRC_mobileSWConnectionStatus_Type;
/* mobileSWAction_Type */
typedef enum MoRC_kcg_tag_mobileSWAction_Type {
  MoRC_mswa_nop,
  MoRC_mswa_register,
  MoRC_mswa_connect,
  MoRC_mswa_establishRadioConnection,
  MoRC_mswa_terminateRadioConnection,
  MoRC_mswa_disconnect,
  MoRC_mswa_unregister
} MoRC_mobileSWAction_Type;
/* mobileHWConnectionStatus_Type */
typedef enum MoRC_kcg_tag_mobileHWConnectionStatus_Type {
  MoRC_mhwc_notRegistered,
  MoRC_mhwc_registered,
  MoRC_mhwc_connectionSetupInProgress,
  MoRC_mhwc_connected
} MoRC_mobileHWConnectionStatus_Type;
/* mobileHWAction_Type */
typedef enum MoRC_kcg_tag_mobileHWAction_Type {
  MoRC_mhwa_nop,
  MoRC_mhwa_register,
  MoRC_mhwa_connect,
  MoRC_mhwa_disconnect,
  MoRC_mhwa_unregister
} MoRC_mobileHWAction_Type;
/* safeRadioConnectionStatus_Type */
typedef enum MoRC_kcg_tag_safeRadioConnectionStatus_Type {
  MoRC_srcs_NoConnection,
  MoRC_srcs_ConnectionLost_SetupFailed,
  MoRC_srcs_ConnectionUp
} MoRC_safeRadioConnectionStatus_Type;
/* morc_RBC_action_Type */
typedef enum MoRC_kcg_tag_morc_RBC_action_Type {
  MoRC_morc_rbca_noAction,
  MoRC_morc_rbca_establishSession,
  MoRC_morc_rbca_terminateSesssion
} MoRC_morc_RBC_action_Type;
/* sessionStatus_Type */
typedef enum MoRC_kcg_tag_sessionStatus_Type {
  MoRC_morc_st_inactive,
  MoRC_morc_st_establishing,
  MoRC_morc_st_maintaining,
  MoRC_morc_st_terminating
} MoRC_sessionStatus_Type;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */
typedef enum MoRC_kcg_tag_SSM_TR_EstablishmentOfACommunicationSession_SM {
  MoRC_SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_Idle_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_Idle_2_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_2_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_WaitForSystemVersionFromTrackSide_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_WaitForSystemVersionFromTrackSide_2_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_NoCompatibleSystemVersionSupported_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByTrackside_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_1_EstablishmentOfACommunicationSession_SM
} MoRC_SSM_TR_EstablishmentOfACommunicationSession_SM;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */
typedef enum MoRC_kcg_tag_SSM_ST_EstablishmentOfACommunicationSession_SM {
  MoRC_SSM_st_Idle_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM
} MoRC_SSM_ST_EstablishmentOfACommunicationSession_SM;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum MoRC_kcg_tag_SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU {
  MoRC_SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU
} MoRC_SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum MoRC_kcg_tag_SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU {
  MoRC_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM
} MoRC_SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum MoRC_kcg_tag_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPart {
  MoRC_SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPar,
  MoRC_SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPart,
  MoRC_SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPart
} MoRC_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartO;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum MoRC_kcg_tag_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPart {
  MoRC_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetu,
  MoRC_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetu
} MoRC_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartO;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum MoRC_kcg_tag_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotP {
  MoRC_SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNot,
  MoRC_SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotP,
  MoRC_SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotP
} MoRC_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfSta;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum MoRC_kcg_tag_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotP {
  MoRC_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatS,
  MoRC_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatS
} MoRC_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfSta;
/* countDownTimer::TimerStatus_SM */
typedef enum MoRC_kcg_tag_SSM_TR_TimerStatus_SM {
  MoRC_SSM_TR_no_trans_TimerStatus_SM,
  MoRC_SSM_TR_Stopped_1_TimerStatus_SM,
  MoRC_SSM_TR_Stopped_2_TimerStatus_SM,
  MoRC_SSM_TR_Counting_1_TimerStatus_SM,
  MoRC_SSM_TR_Counting_2_TimerStatus_SM,
  MoRC_SSM_TR_Counting_3_TimerStatus_SM,
  MoRC_SSM_TR_Counting_4_TimerStatus_SM,
  MoRC_SSM_TR_Expired_1_TimerStatus_SM,
  MoRC_SSM_TR_Expired_2_TimerStatus_SM
} MoRC_SSM_TR_TimerStatus_SM;
/* countDownTimer::TimerStatus_SM */
typedef enum MoRC_kcg_tag_SSM_ST_TimerStatus_SM {
  MoRC_SSM_st_Stopped_TimerStatus_SM,
  MoRC_SSM_st_Counting_TimerStatus_SM,
  MoRC_SSM_st_Expired_TimerStatus_SM
} MoRC_SSM_ST_TimerStatus_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM */
typedef enum MoRC_kcg_tag_SSM_TR_Maintaining_SM {
  MoRC_SSM_TR_no_trans_Maintaining_SM,
  MoRC_SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM,
  MoRC_SSM_TR_CommunicationSessionEstablished_1_Maintaining_SM
} MoRC_SSM_TR_Maintaining_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM */
typedef enum MoRC_kcg_tag_SSM_ST_Maintaining_SM {
  MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM,
  MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM
} MoRC_SSM_ST_Maintaining_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum MoRC_kcg_tag_SSM_TR_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished {
  MoRC_SSM_TR_no_trans_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_SafeRadio_connected_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_SafeRadio_connected_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_ConnectionLost_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_ConnectionLost_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_ConnecctionLostInAnnouncedRadioHole_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished
} MoRC_SSM_TR_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum MoRC_kcg_tag_SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished {
  MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM
} MoRC_SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum MoRC_kcg_tag_SSM_TR_TerminateTheCommunicationSession_SM {
  MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_Idle_1_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_Idle_2_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_WaitForAcknowledgementMessage_1_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_EstablishingACommunicationSessionAborted_1_TerminateTheCommunicationSession_SM
} MoRC_SSM_TR_TerminateTheCommunicationSession_SM;
/* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum MoRC_kcg_tag_SSM_ST_TerminateTheCommunicationSession_SM {
  MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM,
  MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM,
  MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM,
  MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM
} MoRC_SSM_ST_TerminateTheCommunicationSession_SM;
/* radioNetworkMobile::MobileHW_available_SM */
typedef enum MoRC_kcg_tag_SSM_TR_MobileHW_available_SM {
  MoRC_SSM_TR_no_trans_MobileHW_available_SM,
  MoRC_SSM_TR_MobileHWNotAvailable_1_MobileHW_available_SM,
  MoRC_SSM_TR_MobileHWAvailable_1_MobileHW_available_SM,
  MoRC_SSM_TR_InitialState_1_MobileHW_available_SM
} MoRC_SSM_TR_MobileHW_available_SM;
/* radioNetworkMobile::MobileHW_available_SM */
typedef enum MoRC_kcg_tag_SSM_ST_MobileHW_available_SM {
  MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM,
  MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM,
  MoRC_SSM_st_InitialState_MobileHW_available_SM
} MoRC_SSM_ST_MobileHW_available_SM;
/* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum MoRC_kcg_tag_SSM_TR_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable {
  MoRC_SSM_TR_no_trans_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_UnregisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteringToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteringToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteringToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteredToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteredToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectingToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectingToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_4_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_EstablishingASession_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_SessionEstablished_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_SessionEstablished_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable
} MoRC_SSM_TR_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum MoRC_kcg_tag_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable {
  MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM
} MoRC_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* safeRadioConnectionIndication::connectionStatus_SM */
typedef enum MoRC_kcg_tag_SSM_TR_connectionStatus_SM {
  MoRC_SSM_TR_no_trans_connectionStatus_SM,
  MoRC_SSM_TR_NoConnection_1_connectionStatus_SM,
  MoRC_SSM_TR_NoConnection_2_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionUp_1_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionUp_2_connectionStatus_SM
} MoRC_SSM_TR_connectionStatus_SM;
/* safeRadioConnectionIndication::connectionStatus_SM */
typedef enum MoRC_kcg_tag_SSM_ST_connectionStatus_SM {
  MoRC_SSM_st_NoConnection_connectionStatus_SM,
  MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  MoRC_SSM_st_ConnectionUp_connectionStatus_SM
} MoRC_SSM_ST_connectionStatus_SM;
/* initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum MoRC_kcg_tag_SSM_TR_TrainExitedFromRBCArea_SM {
  MoRC_SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  MoRC_SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  MoRC_SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  MoRC_SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} MoRC_SSM_TR_TrainExitedFromRBCArea_SM;
/* initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum MoRC_kcg_tag_SSM_ST_TrainExitedFromRBCArea_SM {
  MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM,
  MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} MoRC_SSM_ST_TrainExitedFromRBCArea_SM;
/* terminateAndEstablishSession::SM1 */
typedef enum MoRC_kcg_tag_SSM_TR_SM1 {
  MoRC_SSM_TR_no_trans_SM1,
  MoRC_SSM_TR_NoTerminationInProgress_1_SM1,
  MoRC_SSM_TR_TerminationInProgress_1_SM1,
  MoRC_SSM_TR_EstablishNewSession_1_SM1
} MoRC_SSM_TR_SM1;
/* terminateAndEstablishSession::SM1 */
typedef enum MoRC_kcg_tag_SSM_ST_SM1 {
  MoRC_SSM_st_NoTerminationInProgress_SM1,
  MoRC_SSM_st_TerminationInProgress_SM1,
  MoRC_SSM_st_EstablishNewSession_SM1
} MoRC_SSM_ST_SM1;
/* managementOfRadioCommunication::CommunicationSession_SM */
typedef enum MoRC_kcg_tag_SSM_TR_CommunicationSession_SM {
  MoRC_SSM_TR_no_trans_CommunicationSession_SM,
  MoRC_SSM_TR_NoSession_1_CommunicationSession_SM,
  MoRC_SSM_TR_Establishing_1_CommunicationSession_SM,
  MoRC_SSM_TR_Establishing_2_CommunicationSession_SM,
  MoRC_SSM_TR_Maintaining_1_CommunicationSession_SM,
  MoRC_SSM_TR_Terminating_1_CommunicationSession_SM
} MoRC_SSM_TR_CommunicationSession_SM;
/* managementOfRadioCommunication::CommunicationSession_SM */
typedef enum MoRC_kcg_tag_SSM_ST_CommunicationSession_SM {
  MoRC_SSM_st_NoSession_CommunicationSession_SM,
  MoRC_SSM_st_Establishing_CommunicationSession_SM,
  MoRC_SSM_st_Maintaining_CommunicationSession_SM,
  MoRC_SSM_st_Terminating_CommunicationSession_SM
} MoRC_SSM_ST_CommunicationSession_SM;
/* MoRC_withSimplified_IF::PowerUpSequencer */
typedef enum MoRC_kcg_tag_SSM_TR_PowerUpSequencer {
  MoRC_SSM_TR_no_trans_PowerUpSequencer,
  MoRC_SSM_TR_TheVeryFirstCycle_1_PowerUpSequencer,
  MoRC_SSM_TR_AtPowerUpState_1_PowerUpSequencer,
  MoRC_SSM_TR_AfterPowerUp_1_PowerUpSequencer
} MoRC_SSM_TR_PowerUpSequencer;
/* MoRC_withSimplified_IF::PowerUpSequencer */
typedef enum MoRC_kcg_tag_SSM_ST_PowerUpSequencer {
  MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer,
  MoRC_SSM_st_AtPowerUpState_PowerUpSequencer,
  MoRC_SSM_st_AfterPowerUp_PowerUpSequencer
} MoRC_SSM_ST_PowerUpSequencer;
/* mobileHWStatus_Type */
typedef struct MoRC_kcg_tag_mobileHWStatus_Type {
  kcg_bool valid;
  MoRC_mobileHWConnectionStatus_Type connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
} MoRC_mobileHWStatus_Type;

/* safeRadioConnectionStatusValid_Type */
typedef struct MoRC_kcg_tag_safeRadioConnectionStatusValid_Type {
  kcg_bool valid;
  MoRC_safeRadioConnectionStatus_Type status;
} MoRC_safeRadioConnectionStatusValid_Type;

/* rbc_id_Type */
typedef kcg_int MoRC_rbc_id_Type;

/* rbc_phoneNo_Type */
typedef kcg_int MoRC_rbc_phoneNo_Type;

/* orderToContactAnRBC_Type */
typedef struct MoRC_kcg_tag_orderToContactAnRBC_Type {
  kcg_bool valid;
  MoRC_rbc_id_Type rbc_id;
  MoRC_rbc_phoneNo_Type telephoneNoOfTheRBC;
  MoRC_morc_RBC_action_Type actionToBePerformed;
  kcg_bool appliesAlsoToSleepingUnits;
} MoRC_orderToContactAnRBC_Type;

/* NID_MESSAGE_Type */
typedef kcg_int MoRC_NID_MESSAGE_Type;

/* radioNetworkID_Type */
typedef kcg_int MoRC_radioNetworkID_Type;

/* mobileSWStatus_Type */
typedef struct MoRC_kcg_tag_mobileSWStatus_Type {
  kcg_bool valid;
  kcg_bool mobileHW_available;
  MoRC_mobileSWConnectionStatus_Type connectionStatus;
  MoRC_radioNetworkID_Type registeredRadioNetworkID;
  kcg_bool settingUpConnectionHasFailed;
} MoRC_mobileSWStatus_Type;

/* mobileSWCmd_Type */
typedef struct MoRC_kcg_tag_mobileSWCmd_Type {
  kcg_bool valid;
  MoRC_mobileSWAction_Type action;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_mobileSWCmd_Type;

/* validRadioNetworkID_Type */
typedef struct MoRC_kcg_tag_validRadioNetworkID_Type {
  kcg_bool valid;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_validRadioNetworkID_Type;

/* mobileHWCmd_Type */
typedef struct MoRC_kcg_tag_mobileHWCmd_Type {
  kcg_bool valid;
  MoRC_mobileHWAction_Type action;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_mobileHWCmd_Type;

/* time_Type */
typedef kcg_int MoRC_time_Type;

/* NID_RBC_Type */
typedef kcg_int MoRC_NID_RBC_Type;

#ifndef MoRC_kcg_copy_validRadioNetworkID_Type
#define MoRC_kcg_copy_validRadioNetworkID_Type(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_validRadioNetworkID_Type)))
#endif /* MoRC_kcg_copy_validRadioNetworkID_Type */

#ifndef MoRC_kcg_copy_orderToContactAnRBC_Type
#define MoRC_kcg_copy_orderToContactAnRBC_Type(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_orderToContactAnRBC_Type)))
#endif /* MoRC_kcg_copy_orderToContactAnRBC_Type */

#ifndef MoRC_kcg_copy_mobileSWCmd_Type
#define MoRC_kcg_copy_mobileSWCmd_Type(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_mobileSWCmd_Type)))
#endif /* MoRC_kcg_copy_mobileSWCmd_Type */

#ifndef MoRC_kcg_copy_mobileHWCmd_Type
#define MoRC_kcg_copy_mobileHWCmd_Type(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_mobileHWCmd_Type)))
#endif /* MoRC_kcg_copy_mobileHWCmd_Type */

#ifndef MoRC_kcg_copy_safeRadioConnectionStatusValid_Type
#define MoRC_kcg_copy_safeRadioConnectionStatusValid_Type(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_safeRadioConnectionStatusValid_Type)))
#endif /* MoRC_kcg_copy_safeRadioConnectionStatusValid_Type */

#ifndef MoRC_kcg_copy_mobileSWStatus_Type
#define MoRC_kcg_copy_mobileSWStatus_Type(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_mobileSWStatus_Type)))
#endif /* MoRC_kcg_copy_mobileSWStatus_Type */

#ifndef MoRC_kcg_copy_mobileHWStatus_Type
#define MoRC_kcg_copy_mobileHWStatus_Type(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_mobileHWStatus_Type)))
#endif /* MoRC_kcg_copy_mobileHWStatus_Type */

#ifdef MoRC_kcg_use_validRadioNetworkID_Type
#ifndef MoRC_kcg_comp_validRadioNetworkID_Type
extern kcg_bool MoRC_kcg_comp_validRadioNetworkID_Type(
  MoRC_validRadioNetworkID_Type *kcg_c1,
  MoRC_validRadioNetworkID_Type *kcg_c2);
#endif /* MoRC_kcg_comp_validRadioNetworkID_Type */
#endif /* MoRC_kcg_use_validRadioNetworkID_Type */

#ifdef MoRC_kcg_use_orderToContactAnRBC_Type
#ifndef MoRC_kcg_comp_orderToContactAnRBC_Type
extern kcg_bool MoRC_kcg_comp_orderToContactAnRBC_Type(
  MoRC_orderToContactAnRBC_Type *kcg_c1,
  MoRC_orderToContactAnRBC_Type *kcg_c2);
#endif /* MoRC_kcg_comp_orderToContactAnRBC_Type */
#endif /* MoRC_kcg_use_orderToContactAnRBC_Type */

#ifdef MoRC_kcg_use_mobileSWCmd_Type
#ifndef MoRC_kcg_comp_mobileSWCmd_Type
extern kcg_bool MoRC_kcg_comp_mobileSWCmd_Type(
  MoRC_mobileSWCmd_Type *kcg_c1,
  MoRC_mobileSWCmd_Type *kcg_c2);
#endif /* MoRC_kcg_comp_mobileSWCmd_Type */
#endif /* MoRC_kcg_use_mobileSWCmd_Type */

#ifdef MoRC_kcg_use_mobileHWCmd_Type
#ifndef MoRC_kcg_comp_mobileHWCmd_Type
extern kcg_bool MoRC_kcg_comp_mobileHWCmd_Type(
  MoRC_mobileHWCmd_Type *kcg_c1,
  MoRC_mobileHWCmd_Type *kcg_c2);
#endif /* MoRC_kcg_comp_mobileHWCmd_Type */
#endif /* MoRC_kcg_use_mobileHWCmd_Type */

#ifdef MoRC_kcg_use_safeRadioConnectionStatusValid_Type
#ifndef MoRC_kcg_comp_safeRadioConnectionStatusValid_Type
extern kcg_bool MoRC_kcg_comp_safeRadioConnectionStatusValid_Type(
  MoRC_safeRadioConnectionStatusValid_Type *kcg_c1,
  MoRC_safeRadioConnectionStatusValid_Type *kcg_c2);
#endif /* MoRC_kcg_comp_safeRadioConnectionStatusValid_Type */
#endif /* MoRC_kcg_use_safeRadioConnectionStatusValid_Type */

#ifndef MoRC_kcg_comp_mobileSWStatus_Type
extern kcg_bool MoRC_kcg_comp_mobileSWStatus_Type(
  MoRC_mobileSWStatus_Type *kcg_c1,
  MoRC_mobileSWStatus_Type *kcg_c2);
#define MoRC_kcg_use_mobileSWStatus_Type
#endif /* MoRC_kcg_comp_mobileSWStatus_Type */

#ifdef MoRC_kcg_use_mobileHWStatus_Type
#ifndef MoRC_kcg_comp_mobileHWStatus_Type
extern kcg_bool MoRC_kcg_comp_mobileHWStatus_Type(
  MoRC_mobileHWStatus_Type *kcg_c1,
  MoRC_mobileHWStatus_Type *kcg_c2);
#endif /* MoRC_kcg_comp_mobileHWStatus_Type */
#endif /* MoRC_kcg_use_mobileHWStatus_Type */

#endif /* _MoRC_KCG_TYPES_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** kcg_types.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

