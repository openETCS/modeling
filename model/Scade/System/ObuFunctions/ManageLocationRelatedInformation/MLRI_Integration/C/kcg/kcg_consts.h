/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__KCG_CONSTS_H_
#define _MLRI__KCG_CONSTS_H_

#include "kcg_types.h"

/* BG_Types_Pkg::cMaxListBGs */
#define MLRI__cMaxListBGs_BG_Types_Pkg 20

/* BG_Types_Pkg::cInvalidIndex */
#define MLRI__cInvalidIndex_BG_Types_Pkg (- 1)

/* BG_Types_Pkg::cInitOrientation */
#define MLRI__cInitOrientation_BG_Types_Pkg MLRI__Q_DIRTRAIN_Unknown

/* BG_Types_Pkg::cEmptyHeader */
extern const MLRI__TelegramHeader_T_BG_Types_Pkg MLRI__cEmptyHeader_BG_Types_Pkg;

/* BG_Types_Pkg::cEmptyBGMessage */
extern const MLRI__BG_Message_T_BG_Types_Pkg MLRI__cEmptyBGMessage_BG_Types_Pkg;

/* BG_Types_Pkg::cAddInfo */
extern const MLRI__AdditionalInformation_T_BG_Types_Pkg MLRI__cAddInfo_BG_Types_Pkg;

/* BG_Types_Pkg::cMaxNoOfLevelTransitionOrders */
#define MLRI__cMaxNoOfLevelTransitionOrders_BG_Types_Pkg 4

/* Packet_Types_Pkg::cNIterMax */
#define MLRI__cNIterMax_Packet_Types_Pkg 31

/* CheckBGConsistency_Pkg::NoLinkedBG */
extern const MLRI__LinkedBG_T_BG_Types_Pkg MLRI__NoLinkedBG_CheckBGConsistency_Pkg;

/* ProvidePositionReport_Pkg::cTrainPosition */
extern const MLRI__trainPosition_T_TrainPosition_Types_Pck MLRI__cTrainPosition_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cUnknownLRBG */
#define MLRI__cUnknownLRBG_ProvidePositionReport_Pkg 16777215

/* BuildBGMessage_Pkg::cemptyStore */
extern const MLRI__TelegramStore_T_BuildBGMessage_Pkg MLRI__cemptyStore_BuildBGMessage_Pkg;

/* BG_Types_Pkg::cemptyHeaderArray */
extern const MLRI__TelegramArray_T_BG_Types_Pkg MLRI__cemptyHeaderArray_BG_Types_Pkg;

/* BuildBGMessage_Pkg::cCollectorInit */
extern const MLRI__BGCollector_T_BuildBGMessage_Pkg MLRI__cCollectorInit_BuildBGMessage_Pkg;

/* BG_Types_Pkg::cMaxDistanceBalisesInGroup */
extern const MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg MLRI__cMaxDistanceBalisesInGroup_BG_Types_Pkg;

/* CheckBGConsistency_Pkg::NoStoredBG */
extern const MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__NoStoredBG_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::NoPassedBG */
extern const MLRI__passedBG_T_BG_Types_Pkg MLRI__NoPassedBG_CheckBGConsistency_Pkg;

/* BG_Types_Pkg::cMaxNoBalises */
#define MLRI__cMaxNoBalises_BG_Types_Pkg 8

/* CheckBGConsistency_Pkg::InConsistentTelegram1 */
extern const MLRI__Telegram_T_BG_Types_Pkg MLRI__InConsistentTelegram1_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::theTelegramNeverFitsAnyMessage */
#define MLRI__theTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg 254

/* CheckBGConsistency_Pkg::theTelegramFitsWithAll */
#define MLRI__theTelegramFitsWithAll_CheckBGConsistency_Pkg 255

/* BG_Types_Pkg::cemptyPosition */
extern const MLRI__centerOfBalisePosition_T_BG_Types_Pkg MLRI__cemptyPosition_BG_Types_Pkg;

/* BG_Types_Pkg::cEmpty_BaliseTlg */
extern const MLRI__Telegram_T_BG_Types_Pkg MLRI__cEmpty_BaliseTlg_BG_Types_Pkg;

/* BG_Types_Pkg::cEmptyPassedBG */
extern const MLRI__passedBG_T_BG_Types_Pkg MLRI__cEmptyPassedBG_BG_Types_Pkg;

/* TrainPosition_Integration_Pkg::cNoTrainPosInfo */
extern const MLRI__trainPositionInfo_T_TrainPosition_Types_Pck MLRI__cNoTrainPosInfo_TrainPosition_Integration_Pkg;

/* CalculateTrainPosition_Pkg::cNoPositionErrors */
extern const MLRI__positionErrors_T_TrainPosition_Types_Pck MLRI__cNoPositionErrors_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoRefPrevBGs */
extern const MLRI__refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoLinkedBG_index */
extern const MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::noValidIndex */
#define MLRI__noValidIndex_CalculateTrainPosition_Pkg_gp_functions_Pkg (- 1)

/* TrainPosition_Types_Pck::cQLOCACC_resolution */
#define MLRI__cQLOCACC_resolution_TrainPosition_Types_Pck 100

/* TrainPosition_Types_Pck::cQ_SCALE_10_cm_resolution */
#define MLRI__cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck 10

/* TrainPosition_Types_Pck::cQ_SCALE_1_m_resolution */
#define MLRI__cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck 100

/* TrainPosition_Types_Pck::cQ_SCALE_10_m_resolution */
#define MLRI__cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck 1000

/* CalculateTrainPosition_Pkg::cNoPassedBG */
extern const MLRI__passedBG_T_BG_Types_Pkg MLRI__cNoPassedBG_CalculateTrainPosition_Pkg;

/* Obu_BasicTypes_Pkg::cLocWithInAcc_0 */
extern const MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg MLRI__cLocWithInAcc_0_Obu_BasicTypes_Pkg;

/* CalculateTrainPosition_Pkg::cNoInfoFromLinking */
extern const MLRI__infoFromLinking_T_TrainPosition_Types_Pck MLRI__cNoInfoFromLinking_CalculateTrainPosition_Pkg;

/* BG_Types_Pkg::cNID_LRBG_unknown */
#define MLRI__cNID_LRBG_unknown_BG_Types_Pkg 16777215

/* BG_Types_Pkg::cNID_LRBG_14Bits_Multiplicator */
#define MLRI__cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg 16384

/* BG_Types_Pkg::cNID_BG_unknown */
#define MLRI__cNID_BG_unknown_BG_Types_Pkg 16383

/* CalculateTrainPosition_Pkg::Pos_Pkg::cSpeed_0 */
#define MLRI__cSpeed_0_CalculateTrainPosition_Pkg_Pos_Pkg 0

/* CalculateTrainPosition_Pkg::Pos_Pkg::cOdometryStartVal */
extern const MLRI__odometry_T_Obu_BasicTypes_Pkg MLRI__cOdometryStartVal_CalculateTrainPosition_Pkg_Pos_Pkg;

/* Obu_BasicTypes_Pkg::cOdometryInitialValue */
extern const MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg MLRI__cOdometryInitialValue_Obu_BasicTypes_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cEmptyPositionedBG */
extern const MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::cNoPositionedBG */
extern const MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBGCounters_0 */
extern const MLRI__BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg MLRI__cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBG_find_0 */
extern const MLRI__BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg MLRI__cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::cNoValidIndex */
#define MLRI__cNoValidIndex_CalculateTrainPosition_Pkg (- 1)

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_8_LRBGs */
#define MLRI__cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg 3

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_x_unlinkedBGs */
#define MLRI__cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg 2

/* ProvidePositionReport_Pkg::cMinSafeRearEnd */
#define MLRI__cMinSafeRearEnd_ProvidePositionReport_Pkg 0

/* ProvidePositionReport_Pkg::cL_MESSAGE */
#define MLRI__cL_MESSAGE_ProvidePositionReport_Pkg 0

/* ProvidePositionReport_Pkg::cT_TRAIN */
#define MLRI__cT_TRAIN_ProvidePositionReport_Pkg 0.0

/* ProvidePositionReport_Pkg::cErrorMessage */
extern const MLRI__ErrorMessage_T_ProvidePositionReport_Pkg MLRI__cErrorMessage_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cTrigger */
#define MLRI__cTrigger_ProvidePositionReport_Pkg kcg_false

/* ProvidePositionReport_Pkg::cQ_SCALE */
#define MLRI__cQ_SCALE_ProvidePositionReport_Pkg MLRI__Q_SCALE_10_cm_scale

/* ProvidePositionReport_Pkg::cTrainPosInfo */
extern const MLRI__trainPositionInfo_T_TrainPosition_Types_Pck MLRI__cTrainPosInfo_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cTrack2TrainStatus */
extern const MLRI__TrainToTrackStatus_T_BG_Types_Pkg MLRI__cTrack2TrainStatus_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cPresentxM_LOC */
extern const MLRI__PresentxMLOC_T_ProvidePositionReport_Pkg MLRI__cPresentxM_LOC_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cNITER_List */
extern const MLRI__IterPacket58List_T_ProvidePositionReport_Pkg MLRI__cNITER_List_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cNITER_Pair */
extern const MLRI__IterPacket58_T_ProvidePositionReport_Pkg MLRI__cNITER_Pair_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cPassedBG */
extern const MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__cPassedBG_ProvidePositionReport_Pkg;

/* CalculateTrainPosition_Pkg::cTrainPosition_0 */
extern const MLRI__trainPosition_T_TrainPosition_Types_Pck MLRI__cTrainPosition_0_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoPositionedBGs */
extern const MLRI__positionedBGs_T_TrainPosition_Types_Pck MLRI__cNoPositionedBGs_CalculateTrainPosition_Pkg;

/* TrainPosition_Types_Pck::cMaxNoOfStoredBGs */
#define MLRI__cMaxNoOfStoredBGs_TrainPosition_Types_Pck (2 * MLRI__cMaxNoOfLinkedBGs_BG_Types_Pkg)

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define MLRI__cMaxNoOfLinkedBGs_BG_Types_Pkg 4

/* ProvidePositionReport_Pkg::cIterPacket58 */
#define MLRI__cIterPacket58_ProvidePositionReport_Pkg 2

#endif /* _MLRI__KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

