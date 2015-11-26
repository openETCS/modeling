/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* EnvSim::Internal::cEMPTY_EVC2DMI */
extern const EVC_to_DMI_Message_T_API_DMI_Pkg cEMPTY_EVC2DMI_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_DMI2EVC */
extern const DMI_to_EVC_Message_T_API_DMI_Pkg cEMPTY_DMI2EVC_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_TIU2DMI */
extern const TIU_Input_msg_API_TIU_Pkg cEMPTY_TIU2DMI_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_EVC2GUI */
extern const EVC_to_GUI_EnvSim cEMPTY_EVC2GUI_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_EVC2DMI_BUS */
extern const EVC_to_DMI_Message_int_T_API_DMI_Pkg cEMPTY_EVC2DMI_BUS_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_DMI2EVC_BUS */
extern const DMI_to_EVC_Message_int_T_API_DMI_Pkg cEMPTY_DMI2EVC_BUS_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_TARGET_COLLECTION */
extern const TargetCollection_T_TargetManagement_types cEMPTY_TARGET_COLLECTION_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_CURVE_COLLECTION */
extern const CurveCollection_T_CalcBrakingCurves_types cEMPTY_CURVE_COLLECTION_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_TARGET */
extern const Target_T_TargetManagement_types cEMPTY_TARGET_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_BALISE_MESSAGE */
extern const CompressedBaliseMessage_TM cEMPTY_BALISE_MESSAGE_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_RADIO_MESSAGE */
extern const CompressedRadioMessage_TM cEMPTY_RADIO_MESSAGE_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_TRAIN_MESSAGE */
extern const M_TrainTrack_Message_T_TM_radio_messages cEMPTY_TRAIN_MESSAGE_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_MESSAGE_ERRORS */
extern const MSG_Errors_T_Common_Types_Pkg cEMPTY_MESSAGE_ERRORS_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_POSITION_ERRORS */
extern const positionErrors_T_TrainPosition_Types_Pck cEMPTY_POSITION_ERRORS_EnvSim_Internal;

/* EnvSim::Internal::cEMPTY_MORC_STATUS */
extern const morcStatus_T_RCM_Session_Types_Pkg cEMPTY_MORC_STATUS_EnvSim_Internal;

/* DMI_Messages_Bothways_Pkg::cDiverIdentifierLength */
#define cDiverIdentifierLength_DMI_Messages_Bothways_Pkg 9

/* DMI_Types_Pkg::cDMI_maxSpeedProfile */
#define cDMI_maxSpeedProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxGradientProfile */
#define cDMI_maxGradientProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxTrackCondProfile */
#define cDMI_maxTrackCondProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_charsInText */
#define cDMI_charsInText_DMI_Types_Pkg 255

/* DMI_Types_Pkg::cDMI_maxLevels */
#define cDMI_maxLevels_DMI_Types_Pkg 32

/* API_DMI_Pkg::cMessage_DMI_to_EVC_size */
#define cMessage_DMI_to_EVC_size_API_DMI_Pkg 311

/* API_DMI_Pkg::cMessage_EVC_to_DMI_size */
#define cMessage_EVC_to_DMI_size_API_DMI_Pkg 999

/* Packet_TrainTypes_Pkg::cMaxNationalSystem */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg 5

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg 4

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* TM_radio_messages::DIM_max_payload */
#define DIM_max_payload_TM_radio_messages 50

/* TrackAtlasTypes::MRSPMaxSections */
#define MRSPMaxSections_TrackAtlasTypes 110

/* CalcBrakingCurves_types::cMAX_BC_ARCS */
#define cMAX_BC_ARCS_CalcBrakingCurves_types (cMAX_DISTANCE_STEPS_CalcBrakingCurves_types + cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types)

/* CalcBrakingCurves_types::cMAX_DISTANCE_STEPS */
#define cMAX_DISTANCE_STEPS_CalcBrakingCurves_types GradientMaxSectionsTrainlengthCompensated_SDM_GradientAcceleration_types

/* SDM_GradientAcceleration_types::GradientMaxSectionsTrainlengthCompensated */
#define GradientMaxSectionsTrainlengthCompensated_SDM_GradientAcceleration_types (GradientMaxSections_TrackAtlasTypes * 2)

/* TrackAtlasTypes::GradientMaxSections */
#define GradientMaxSections_TrackAtlasTypes DIM_GP_TrackAtlasTypes

/* TrackAtlasTypes::DIM_GP */
#define DIM_GP_TrackAtlasTypes 50

/* CalcBrakingCurves_types::cMAX_SPEED_VALUE_STEP */
#define cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types (cNIterMax_Packet_Types_Pkg + 6 + 1)

/* Packet_Types_Pkg::cNIterMax */
#define cNIterMax_Packet_Types_Pkg 7

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 33

#endif /* _KCG_CONSTS_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_consts.h
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */

