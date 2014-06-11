/* DetermineBG_Orientation_and_LRBG_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "DetermineBG_Orientation_and_LRBG_newtype.h"
#include "DetermineBG_Orientation_and_LRBG_newmapping.h"

/* iterators */
static const MappingIterator iter_array_20;
static const MappingIterator iter_array_8;
static const MappingIterator iter_array_20 = { "array", 20, 20, NULL};
static const MappingIterator iter_array_8 = { "array", 8, 8, NULL};

/* clock active helper functions */
static int isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_Level2or3*)pHandle == SSM_st_NoAck_SM1_Level2or3_SM2); }
static int isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_Level2or3*)pHandle == SSM_st_Ack_SM1_Level2or3_SM2); }
static int isActive_SSM_TR_SM2_SM1_Level2or3_SSM_TR_Init_2_SM2_SM1_Level2or3 (void* pHandle) { return (*(SSM_TR_SM2_SM1_Level2or3*)pHandle == SSM_TR_Init_2_SM2_SM1_Level2or3); }
static int isActive_SSM_TR_SM2_SM1_Level2or3_SSM_TR_Init_1_SM2_SM1_Level2or3 (void* pHandle) { return (*(SSM_TR_SM2_SM1_Level2or3*)pHandle == SSM_TR_Init_1_SM2_SM1_Level2or3); }
static int isActive_SSM_ST_SM1_SSM_st_Level2or3_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_Level2or3_SM1); }
static int isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Init_SM1_Level2or3_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_Level2or3*)pHandle == SSM_st_Init_SM1_Level2or3_SM2); }
static int isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_Level0or1_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_2_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_Initial_2_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_Initial_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_Initial_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_Initial_SM1); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_35, 6);
MAP_DECL(scope_34, 6);
MAP_DECL(scope_33, 1);
MAP_DECL(scope_32, 1);
MAP_DECL(scope_31, 1);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 10);
MAP_DECL(scope_28, 2);
MAP_DECL(scope_27, 1);
MAP_DECL(scope_26, 2);
MAP_DECL(scope_25, 2);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 2);
MAP_DECL(scope_22, 7);
MAP_DECL(scope_21, 105);
MAP_DECL(scope_20, 36);
MAP_DECL(scope_19, 3);
MAP_DECL(scope_18, 16);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_12, 12);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 3);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_4, 10);
MAP_DECL(scope_3, 5);
MAP_DECL(scope_2, 15);
MAP_DECL(scope_1, 19);
MAP_DECL(scope_0, 1);

/* Assignment_of_coordinate_system_Radio_TrackToTrain */
static const MappingEntry scope_35_entries[6] = {
  /* 0 */ { MAP_FIELD, ".L_MESSAGE", NULL, sizeof(kcg_int), offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain, L_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".M_ACK", NULL, sizeof(kcg_int), offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain, M_ACK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".NID_MESSAGE", NULL, sizeof(kcg_int), offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain, NID_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_FIELD, ".Q_ORIENTATION", NULL, sizeof(kcg_int), offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain, Q_ORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".T_TRAIN", NULL, sizeof(kcg_real), offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain, T_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_35 = {
  "Assignment_of_coordinate_system_Radio_TrackToTrain",
  scope_35_entries, 6,
};

/* Train_Position_Report_Radio_TrainToTrack */
static const MappingEntry scope_34_entries[6] = {
  /* 0 */ { MAP_FIELD, ".L_MESSAGE", NULL, sizeof(kcg_int), offsetof(Train_Position_Report_Radio_TrainToTrack, L_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_ENGINE", NULL, sizeof(kcg_int), offsetof(Train_Position_Report_Radio_TrainToTrack, NID_ENGINE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_MESSAGE", NULL, sizeof(kcg_int), offsetof(Train_Position_Report_Radio_TrainToTrack, NID_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".PADDING3", NULL, sizeof(kcg_int), offsetof(Train_Position_Report_Radio_TrainToTrack, PADDING3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".T_TRAIN", NULL, sizeof(kcg_real), offsetof(Train_Position_Report_Radio_TrainToTrack, T_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".Train_Position_Report_OptionalPackets", NULL, sizeof(kcg_int), offsetof(Train_Position_Report_Radio_TrainToTrack, Train_Position_Report_OptionalPackets), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_34 = {
  "Train_Position_Report_Radio_TrainToTrack",
  scope_34_entries, 6,
};

/* RBCOrientationReport */
static const MappingEntry scope_33_entries[1] = {
  /* 0 */ { MAP_FIELD, ".assignment_of_coordinate_system", NULL, sizeof(Assignment_of_coordinate_system_Radio_TrackToTrain), offsetof(RBCOrientationReport, assignment_of_coordinate_system), &_Type_Assignment_of_coordinate_system_Radio_TrackToTrain_Utils, NULL, NULL, &scope_35, 1, 0}
};
static const MappingScope scope_33 = {
  "RBCOrientationReport",
  scope_33_entries, 1,
};

/* ListOfBGs */
static const MappingEntry scope_32_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(CurrentLRBG), 0, &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 0}
};
static const MappingScope scope_32 = {
  "ListOfBGs",
  scope_32_entries, 1,
};

/* Position */
static const MappingEntry scope_31_entries[1] = {
  /* 0 */ { MAP_FIELD, ".Position_1", NULL, sizeof(kcg_int), offsetof(Position, Position_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_31 = {
  "Position",
  scope_31_entries, 1,
};

/* Flag */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_FIELD, ".boolean_", NULL, sizeof(kcg_bool), offsetof(Flag, boolean_), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_30 = {
  "Flag",
  scope_30_entries, 1,
};

/* Header */
static const MappingEntry scope_29_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP), offsetof(Header, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(M_MCOUNT), offsetof(Header, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(Header, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG), offsetof(Header, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(Header, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(NID_BG), offsetof(Header, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(Header, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(Header, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(Header, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(Header, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_29 = {
  "Header",
  scope_29_entries, 10,
};

/* HeaderFlag */
static const MappingEntry scope_28_entries[2] = {
  /* 0 */ { MAP_FIELD, ".flag", NULL, sizeof(Flag), offsetof(HeaderFlag, flag), &_Type_Flag_Utils, NULL, NULL, &scope_30, 1, 1},
  /* 1 */ { MAP_FIELD, ".header", NULL, sizeof(Header), offsetof(HeaderFlag, header), &_Type_Header_Utils, NULL, NULL, &scope_29, 1, 0}
};
static const MappingScope scope_28 = {
  "HeaderFlag",
  scope_28_entries, 2,
};

/* HederArray */
static const MappingEntry scope_27_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(HeaderFlag), 0, &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 0}
};
static const MappingScope scope_27 = {
  "HederArray",
  scope_27_entries, 1,
};

/* CheckedBGMessage */
static const MappingEntry scope_26_entries[2] = {
  /* 0 */ { MAP_FIELD, ".additionalinformation", NULL, sizeof(AdditionalInformation), offsetof(CheckedBGMessage, additionalinformation), &_Type_AdditionalInformation_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".headerflag", NULL, sizeof(HederArray), offsetof(CheckedBGMessage, headerflag), &_Type_HederArray_Utils, NULL, NULL, &scope_27, 1, 0}
};
static const MappingScope scope_26 = {
  "CheckedBGMessage",
  scope_26_entries, 2,
};

/* FilteredBGMessage */
static const MappingEntry scope_25_entries[2] = {
  /* 0 */ { MAP_FIELD, ".checkedbgmessage", NULL, sizeof(CheckedBGMessage), offsetof(FilteredBGMessage, checkedbgmessage), &_Type_CheckedBGMessage_Utils, NULL, NULL, &scope_26, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_dirlrbg", NULL, sizeof(Q_DIRTRAIN), offsetof(FilteredBGMessage, q_dirlrbg), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_25 = {
  "FilteredBGMessage",
  scope_25_entries, 2,
};

/* CurrentLRBG */
static const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_FIELD, ".filteredbgmessage", NULL, sizeof(FilteredBGMessage), offsetof(CurrentLRBG, filteredbgmessage), &_Type_FilteredBGMessage_Utils, NULL, NULL, &scope_25, 1, 0},
  /* 1 */ { MAP_FIELD, ".position", NULL, sizeof(Position), offsetof(CurrentLRBG, position), &_Type_Position_Utils, NULL, NULL, &scope_31, 1, 1}
};
static const MappingScope scope_24 = {
  "CurrentLRBG",
  scope_24_entries, 2,
};

/* TrainInfo */
static const MappingEntry scope_23_entries[2] = {
  /* 0 */ { MAP_FIELD, ".m_leveltr", NULL, sizeof(M_LEVELTR), offsetof(TrainInfo, m_leveltr), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".m_mode", NULL, sizeof(M_MODE), offsetof(TrainInfo, m_mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_23 = {
  "TrainInfo",
  scope_23_entries, 2,
};

/* DetermineBGOrientation_LRBG::ArrCheck/ ArrCheck_DetermineBGOrientation_LRBG */
static const MappingEntry scope_22_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Orientation_", NULL, sizeof(Orientation), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, Orientation_), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L17", NULL, sizeof(Orientation), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L17), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L21", NULL, sizeof(N_PIG), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L21), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(Orientation), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L22), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L24", NULL, sizeof(Orientation), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L24), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(N_PIG), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L27), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_22 = {
  "DetermineBGOrientation_LRBG::ArrCheck/ ArrCheck_DetermineBGOrientation_LRBG",
  scope_22_entries, 7,
};

/* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup/ CheckSingleBaliseGroup_DetermineBGOrientation_LRBG */
static const MappingEntry scope_21_entries[105] = {
  /* 0 */ { MAP_OUTPUT, "Orientation_", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, Orientation_), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 104},
  /* 1 */ { MAP_LOCAL, "_L414", NULL, sizeof(M_LEVELTR), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L414), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 98},
  /* 2 */ { MAP_LOCAL, "_L415", NULL, sizeof(M_MODE), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L415), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 99},
  /* 3 */ { MAP_LOCAL, "_L416", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L416), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 97},
  /* 4 */ { MAP_LOCAL, "_L417", NULL, sizeof(FilteredBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L417), &_Type_FilteredBGMessage_Utils, NULL, NULL, &scope_25, 1, 95},
  /* 5 */ { MAP_LOCAL, "_L418", NULL, sizeof(Position), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L418), &_Type_Position_Utils, NULL, NULL, &scope_31, 1, 96},
  /* 6 */ { MAP_LOCAL, "_L419", NULL, sizeof(Q_LINK), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L419), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 94},
  /* 7 */ { MAP_LOCAL, "_L420", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L420), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 93},
  /* 8 */ { MAP_LOCAL, "_L421", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L421), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 92},
  /* 9 */ { MAP_LOCAL, "_L422", NULL, sizeof(N_TOTAL), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L422), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 91},
  /* 10 */ { MAP_LOCAL, "_L424", NULL, sizeof(Header), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L424), &_Type_Header_Utils, NULL, NULL, &scope_29, 1, 89},
  /* 11 */ { MAP_LOCAL, "_L425", NULL, sizeof(Flag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L425), &_Type_Flag_Utils, NULL, NULL, &scope_30, 1, 90},
  /* 12 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L426), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 103},
  /* 13 */ { MAP_LOCAL, "_L427", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L427), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 69},
  /* 14 */ { MAP_LOCAL, "_L428", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L428), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 70},
  /* 15 */ { MAP_LOCAL, "_L429", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L429), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 71},
  /* 16 */ { MAP_LOCAL, "_L430", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L430), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 72},
  /* 17 */ { MAP_LOCAL, "_L431", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L431), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 73},
  /* 18 */ { MAP_LOCAL, "_L432", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L432), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 74},
  /* 19 */ { MAP_LOCAL, "_L433", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L433), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 75},
  /* 20 */ { MAP_LOCAL, "_L434", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L434), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 76},
  /* 21 */ { MAP_LOCAL, "_L435", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L435), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 77},
  /* 22 */ { MAP_LOCAL, "_L436", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L436), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 78},
  /* 23 */ { MAP_LOCAL, "_L437", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L437), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 79},
  /* 24 */ { MAP_LOCAL, "_L438", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L438), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 80},
  /* 25 */ { MAP_LOCAL, "_L439", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L439), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 81},
  /* 26 */ { MAP_LOCAL, "_L440", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L440), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 82},
  /* 27 */ { MAP_LOCAL, "_L441", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L441), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 83},
  /* 28 */ { MAP_LOCAL, "_L442", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L442), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 84},
  /* 29 */ { MAP_LOCAL, "_L443", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L443), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 85},
  /* 30 */ { MAP_LOCAL, "_L444", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L444), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 86},
  /* 31 */ { MAP_LOCAL, "_L445", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L445), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 87},
  /* 32 */ { MAP_LOCAL, "_L446", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L446), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 88},
  /* 33 */ { MAP_LOCAL, "_L447", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L447), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 67},
  /* 34 */ { MAP_LOCAL, "_L448", NULL, sizeof(CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L448), &_Type_CheckedBGMessage_Utils, NULL, NULL, &scope_26, 1, 68},
  /* 35 */ { MAP_LOCAL, "_L449", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L449), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66},
  /* 36 */ { MAP_LOCAL, "_L450", NULL, sizeof(M_LEVELTR), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L450), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 65},
  /* 37 */ { MAP_LOCAL, "_L451", NULL, sizeof(Header), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L451), &_Type_Header_Utils, NULL, NULL, &scope_29, 1, 63},
  /* 38 */ { MAP_LOCAL, "_L452", NULL, sizeof(Flag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L452), &_Type_Flag_Utils, NULL, NULL, &scope_30, 1, 64},
  /* 39 */ { MAP_LOCAL, "_L453", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L453), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 62},
  /* 40 */ { MAP_LOCAL, "_L455", NULL, sizeof(HederArray), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L455), &_Type_HederArray_Utils, NULL, NULL, &scope_27, 1, 60},
  /* 41 */ { MAP_LOCAL, "_L456", NULL, sizeof(AdditionalInformation), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L456), &_Type_AdditionalInformation_Utils, NULL, NULL, NULL, 1, 61},
  /* 42 */ { MAP_LOCAL, "_L457", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L457), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 59},
  /* 43 */ { MAP_LOCAL, "_L458", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L458), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 58},
  /* 44 */ { MAP_LOCAL, "_L459", NULL, sizeof(FilteredBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L459), &_Type_FilteredBGMessage_Utils, NULL, NULL, &scope_25, 1, 56},
  /* 45 */ { MAP_LOCAL, "_L460", NULL, sizeof(Position), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L460), &_Type_Position_Utils, NULL, NULL, &scope_31, 1, 57},
  /* 46 */ { MAP_LOCAL, "_L461", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L461), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 55},
  /* 47 */ { MAP_LOCAL, "_L462", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L462), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54},
  /* 48 */ { MAP_LOCAL, "_L463", NULL, sizeof(HederArray), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L463), &_Type_HederArray_Utils, NULL, NULL, &scope_27, 1, 52},
  /* 49 */ { MAP_LOCAL, "_L464", NULL, sizeof(AdditionalInformation), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L464), &_Type_AdditionalInformation_Utils, NULL, NULL, NULL, 1, 53},
  /* 50 */ { MAP_LOCAL, "_L465", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L465), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 51},
  /* 51 */ { MAP_LOCAL, "_L466", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L466), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50},
  /* 52 */ { MAP_LOCAL, "_L467", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L467), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 49},
  /* 53 */ { MAP_LOCAL, "_L468", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L468), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 41},
  /* 54 */ { MAP_LOCAL, "_L469", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L469), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 42},
  /* 55 */ { MAP_LOCAL, "_L470", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L470), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 43},
  /* 56 */ { MAP_LOCAL, "_L471", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L471), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 44},
  /* 57 */ { MAP_LOCAL, "_L472", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L472), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 45},
  /* 58 */ { MAP_LOCAL, "_L473", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L473), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 46},
  /* 59 */ { MAP_LOCAL, "_L474", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L474), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 47},
  /* 60 */ { MAP_LOCAL, "_L475", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L475), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 48},
  /* 61 */ { MAP_LOCAL, "_L476", NULL, sizeof(M_VERSION), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L476), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 31},
  /* 62 */ { MAP_LOCAL, "_L477", NULL, sizeof(N_TOTAL), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L477), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 32},
  /* 63 */ { MAP_LOCAL, "_L478", NULL, sizeof(N_PIG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L478), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 33},
  /* 64 */ { MAP_LOCAL, "_L479", NULL, sizeof(Q_MEDIA), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L479), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 34},
  /* 65 */ { MAP_LOCAL, "_L480", NULL, sizeof(Q_UPDOWN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L480), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 35},
  /* 66 */ { MAP_LOCAL, "_L481", NULL, sizeof(Q_LINK), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L481), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 36},
  /* 67 */ { MAP_LOCAL, "_L482", NULL, sizeof(NID_BG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L482), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 37},
  /* 68 */ { MAP_LOCAL, "_L483", NULL, sizeof(NID_C), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L483), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 38},
  /* 69 */ { MAP_LOCAL, "_L484", NULL, sizeof(M_MCOUNT), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L484), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 39},
  /* 70 */ { MAP_LOCAL, "_L485", NULL, sizeof(M_DUP), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L485), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 40},
  /* 71 */ { MAP_LOCAL, "_L486", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L486), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 30},
  /* 72 */ { MAP_LOCAL, "_L487", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L487), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 29},
  /* 73 */ { MAP_LOCAL, "_L488", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L488), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 74 */ { MAP_LOCAL, "_L489", NULL, sizeof(M_LEVELTR), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L489), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 27},
  /* 75 */ { MAP_LOCAL, "_L490", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L490), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 26},
  /* 76 */ { MAP_LOCAL, "_L491", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L491), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 25},
  /* 77 */ { MAP_LOCAL, "_L493", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L493), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 23},
  /* 78 */ { MAP_LOCAL, "_L494", NULL, sizeof(CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L494), &_Type_CheckedBGMessage_Utils, NULL, NULL, &scope_26, 1, 24},
  /* 79 */ { MAP_LOCAL, "_L495", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L495), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 80 */ { MAP_LOCAL, "_L496", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L496), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 81 */ { MAP_LOCAL, "_L497", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L497), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 20},
  /* 82 */ { MAP_LOCAL, "_L498", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L498), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 12},
  /* 83 */ { MAP_LOCAL, "_L499", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L499), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 13},
  /* 84 */ { MAP_LOCAL, "_L500", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L500), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 14},
  /* 85 */ { MAP_LOCAL, "_L501", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L501), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 15},
  /* 86 */ { MAP_LOCAL, "_L502", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L502), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 16},
  /* 87 */ { MAP_LOCAL, "_L503", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L503), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 17},
  /* 88 */ { MAP_LOCAL, "_L504", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L504), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 18},
  /* 89 */ { MAP_LOCAL, "_L505", NULL, sizeof(HeaderFlag), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L505), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 19},
  /* 90 */ { MAP_LOCAL, "_L506", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L506), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 91 */ { MAP_LOCAL, "_L507", NULL, sizeof(M_VERSION), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L507), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 92 */ { MAP_LOCAL, "_L508", NULL, sizeof(N_TOTAL), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L508), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 2},
  /* 93 */ { MAP_LOCAL, "_L509", NULL, sizeof(N_PIG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L509), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 94 */ { MAP_LOCAL, "_L510", NULL, sizeof(Q_MEDIA), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L510), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 4},
  /* 95 */ { MAP_LOCAL, "_L511", NULL, sizeof(Q_UPDOWN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L511), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 5},
  /* 96 */ { MAP_LOCAL, "_L512", NULL, sizeof(Q_LINK), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L512), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 6},
  /* 97 */ { MAP_LOCAL, "_L513", NULL, sizeof(NID_BG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L513), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 7},
  /* 98 */ { MAP_LOCAL, "_L514", NULL, sizeof(NID_C), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L514), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 8},
  /* 99 */ { MAP_LOCAL, "_L515", NULL, sizeof(M_MCOUNT), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L515), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 9},
  /* 100 */ { MAP_LOCAL, "_L516", NULL, sizeof(M_DUP), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L516), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 10},
  /* 101 */ { MAP_LOCAL, "_L517", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L517), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 0},
  /* 102 */ { MAP_LOCAL, "_L528", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L528), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 100},
  /* 103 */ { MAP_LOCAL, "_L529", NULL, sizeof(ListOfBGs), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L529), &_Type_ListOfBGs_Utils, NULL, NULL, &scope_32, 1, 101},
  /* 104 */ { MAP_LOCAL, "_L530", NULL, sizeof(TrainInfo), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L530), &_Type_TrainInfo_Utils, NULL, NULL, &scope_23, 1, 102}
};
static const MappingScope scope_21 = {
  "DetermineBGOrientation_LRBG::CheckSingleBaliseGroup/ CheckSingleBaliseGroup_DetermineBGOrientation_LRBG",
  scope_21_entries, 105,
};

/* DetermineBGOrientation_LRBG::GetBGMessageOrientation/ GetBGMessageOrientation_DetermineBGOrientation_LRBG */
static const MappingEntry scope_20_entries[36] = {
  /* 0 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::ArrCheck 4", NULL, sizeof(outC_ArrCheck_DetermineBGOrientation_LRBG), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, Context_4), NULL, NULL, NULL, &scope_22, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Orientation_", NULL, sizeof(Orientation), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, Orientation_), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 35},
  /* 2 */ { MAP_LOCAL, "_L394", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L394), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 26},
  /* 3 */ { MAP_LOCAL, "_L395", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L395), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 27},
  /* 4 */ { MAP_LOCAL, "_L396", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L396), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 28},
  /* 5 */ { MAP_LOCAL, "_L397", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L397), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 29},
  /* 6 */ { MAP_LOCAL, "_L398", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L398), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 30},
  /* 7 */ { MAP_LOCAL, "_L399", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L399), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 31},
  /* 8 */ { MAP_LOCAL, "_L400", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L400), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 32},
  /* 9 */ { MAP_LOCAL, "_L401", NULL, sizeof(HeaderFlag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L401), &_Type_HeaderFlag_Utils, NULL, NULL, &scope_28, 1, 33},
  /* 10 */ { MAP_LOCAL, "_L402", NULL, sizeof(M_DUP), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L402), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 25},
  /* 11 */ { MAP_LOCAL, "_L403", NULL, sizeof(Orientation), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L403), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 24},
  /* 12 */ { MAP_LOCAL, "_L404", NULL, sizeof(Orientation), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L404), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 23},
  /* 13 */ { MAP_LOCAL, "_L405", NULL, sizeof(HederArray), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L405), &_Type_HederArray_Utils, NULL, NULL, &scope_27, 1, 21},
  /* 14 */ { MAP_LOCAL, "_L406", NULL, sizeof(AdditionalInformation), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L406), &_Type_AdditionalInformation_Utils, NULL, NULL, NULL, 1, 22},
  /* 15 */ { MAP_LOCAL, "_L407", NULL, sizeof(N_TOTAL), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L407), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 20},
  /* 16 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L408), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L409", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L409), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L410", NULL, sizeof(Header), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L410), &_Type_Header_Utils, NULL, NULL, &scope_29, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L411", NULL, sizeof(Flag), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L411), &_Type_Flag_Utils, NULL, NULL, &scope_30, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L412", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L412), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 21 */ { MAP_LOCAL, "_L413", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L413), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 22 */ { MAP_LOCAL, "_L415", NULL, sizeof(N_TOTAL), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L415), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 13},
  /* 23 */ { MAP_LOCAL, "_L416", NULL, sizeof(M_VERSION), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L416), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 3},
  /* 24 */ { MAP_LOCAL, "_L417", NULL, sizeof(N_TOTAL), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L417), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L418", NULL, sizeof(N_PIG), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L418), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 5},
  /* 26 */ { MAP_LOCAL, "_L419", NULL, sizeof(Q_MEDIA), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L419), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 6},
  /* 27 */ { MAP_LOCAL, "_L420", NULL, sizeof(Q_UPDOWN), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L420), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 7},
  /* 28 */ { MAP_LOCAL, "_L421", NULL, sizeof(Q_LINK), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L421), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 8},
  /* 29 */ { MAP_LOCAL, "_L422", NULL, sizeof(NID_BG), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L422), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 9},
  /* 30 */ { MAP_LOCAL, "_L423", NULL, sizeof(NID_C), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L423), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 10},
  /* 31 */ { MAP_LOCAL, "_L424", NULL, sizeof(M_MCOUNT), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L424), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 11},
  /* 32 */ { MAP_LOCAL, "_L425", NULL, sizeof(M_DUP), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L425), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 12},
  /* 33 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L426), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 34 */ { MAP_LOCAL, "_L427", NULL, sizeof(Orientation), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L427), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 1},
  /* 35 */ { MAP_LOCAL, "_L428", NULL, sizeof(CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L428), &_Type_CheckedBGMessage_Utils, NULL, NULL, &scope_26, 1, 34}
};
static const MappingScope scope_20 = {
  "DetermineBGOrientation_LRBG::GetBGMessageOrientation/ GetBGMessageOrientation_DetermineBGOrientation_LRBG",
  scope_20_entries, 36,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:NoAck: */
static const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L4_SM1_Level2or3_SM2_NoAck), &_Type_FilteredBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2, &scope_25, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(CheckedBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L5_SM1_Level2or3_SM2_NoAck), &_Type_CheckedBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2, &scope_26, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L6_SM1_Level2or3_SM2_NoAck), &_Type_Q_DIRTRAIN_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2, NULL, 1, 0}
};
static const MappingScope scope_19 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:NoAck:",
  scope_19_entries, 3,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Ack: */
static const MappingEntry scope_18_entries[16] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(Train_Position_Report_Radio_TrainToTrack), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L10_SM1_Level2or3_SM2_Ack), &_Type_Train_Position_Report_Radio_TrainToTrack_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_34, 1, 7},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(Assignment_of_coordinate_system_Radio_TrackToTrain), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L11_SM1_Level2or3_SM2_Ack), &_Type_Assignment_of_coordinate_system_Radio_TrackToTrain_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_35, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L12_SM1_Level2or3_SM2_Ack), &_Type_kcg_int_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L13_SM1_Level2or3_SM2_Ack), &_Type_kcg_int_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L14_SM1_Level2or3_SM2_Ack), &_Type_kcg_real_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L15_SM1_Level2or3_SM2_Ack), &_Type_kcg_int_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L16_SM1_Level2or3_SM2_Ack), &_Type_kcg_int_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L17_SM1_Level2or3_SM2_Ack), &_Type_kcg_int_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L26_SM1_Level2or3_SM2_Ack), &_Type_FilteredBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_25, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L28_SM1_Level2or3_SM2_Ack), &_Type_Q_DIRTRAIN_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L29_SM1_Level2or3_SM2_Ack), &_Type_kcg_bool_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L30_SM1_Level2or3_SM2_Ack), &_Type_Q_DIRTRAIN_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L31_SM1_Level2or3_SM2_Ack), &_Type_Q_DIRTRAIN_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L32_SM1_Level2or3_SM2_Ack), &_Type_kcg_int_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L34", NULL, sizeof(RBCOrientationReport), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L34_SM1_Level2or3_SM2_Ack), &_Type_RBCOrientationReport_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_33, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L36", NULL, sizeof(CheckedBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L36_SM1_Level2or3_SM2_Ack), &_Type_CheckedBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_26, 1, 15}
};
static const MappingScope scope_18 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Ack:",
  scope_18_entries, 16,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Init:<2 */
static const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[1], isActive_SSM_TR_SM2_SM1_Level2or3_SSM_TR_Init_2_SM2_SM1_Level2or3, NULL, 1, 0}
};
static const MappingScope scope_17 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Init:<2",
  scope_17_entries, 1,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Init:<1 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[1], isActive_SSM_TR_SM2_SM1_Level2or3_SSM_TR_Init_1_SM2_SM1_Level2or3, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Init:<1",
  scope_16_entries, 1,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Init: */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[1], isActive_SSM_TR_SM2_SM1_Level2or3_SSM_TR_Init_1_SM2_SM1_Level2or3, &scope_16, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_12_entries[1], isActive_SSM_TR_SM2_SM1_Level2or3_SSM_TR_Init_2_SM2_SM1_Level2or3, &scope_17, 1, 1}
};
static const MappingScope scope_15 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Init:",
  scope_15_entries, 2,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2: */
static const MappingEntry scope_12_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_SM1_Level2or3), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_state_act_SM1_Level2or3), &_Type_SSM_ST_SM2_SM1_Level2or3_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_SM1_Level2or3), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_fired_strong_SM1_Level2or3), &_Type_SSM_TR_SM2_SM1_Level2or3_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_SM1_Level2or3), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_fired_SM1_Level2or3), &_Type_SSM_TR_SM2_SM1_Level2or3_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_SM2_SM1_Level2or3), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _2_SM2_clock_SM1_Level2or3), &_Type_SSM_ST_SM2_SM1_Level2or3_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level2or3_SM1, NULL, 0, 7},
  /* 4 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(SSM_ST_SM2_SM1_Level2or3), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_clock_SM1_Level2or3), &_Type_SSM_ST_SM2_SM1_Level2or3_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level2or3_SM1, NULL, 0, 8},
  /* 5 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_SM1_Level2or3), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_state_nxt_SM1_Level2or3), &_Type_SSM_ST_SM2_SM1_Level2or3_Utils, NULL, NULL, NULL, 0, 2},
  /* 6 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_reset_act_SM1_Level2or3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 7 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_reset_nxt_SM1_Level2or3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 8 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_SM1_Level2or3), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM2_state_sel_SM1_Level2or3), &_Type_SSM_ST_SM2_SM1_Level2or3_Utils, NULL, NULL, NULL, 0, 4},
  /* 9 */ { MAP_STATE, "Ack:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_18, 1, 10},
  /* 10 */ { MAP_STATE, "Init:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Init_SM1_Level2or3_SM2, &scope_15, 1, 9},
  /* 11 */ { MAP_STATE, "NoAck:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2, &scope_19, 1, 11}
};
static const MappingScope scope_12 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:",
  scope_12_entries, 12,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3: */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 0}
};
static const MappingScope scope_11 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:",
  scope_11_entries, 1,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level0or1: */
static const MappingEntry scope_10_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L2_SM1_Level0or1), &_Type_FilteredBGMessage_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1, &scope_25, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L4_SM1_Level0or1), &_Type_Q_DIRTRAIN_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(CheckedBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L5_SM1_Level0or1), &_Type_CheckedBGMessage_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1, &scope_26, 1, 2}
};
static const MappingScope scope_10 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level0or1:",
  scope_10_entries, 3,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Initial:<2 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[1], isActive_SSM_TR_SM1_SSM_TR_Initial_2_SM1, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Initial:<2",
  scope_9_entries, 1,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Initial:<1 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[1], isActive_SSM_TR_SM1_SSM_TR_Initial_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_8 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Initial:<1",
  scope_8_entries, 1,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Initial: */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[1], isActive_SSM_TR_SM1_SSM_TR_Initial_1_SM1, &scope_8, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_4_entries[1], isActive_SSM_TR_SM1_SSM_TR_Initial_2_SM1, &scope_9, 1, 1}
};
static const MappingScope scope_7 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Initial:",
  scope_7_entries, 2,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1: */
static const MappingEntry scope_4_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "Initial:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Initial_SM1, &scope_7, 1, 7},
  /* 8 */ { MAP_STATE, "Level0or1:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1, &scope_10, 1, 8},
  /* 9 */ { MAP_STATE, "Level2or3:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level2or3_SM1, &scope_11, 1, 9}
};
static const MappingScope scope_4 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:",
  scope_4_entries, 10,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBG */
static const MappingEntry scope_3_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, init1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, init), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level2or3_SM1, NULL, 0, 1},
  /* 2 */ { MAP_OUTPUT, "FilteredBGMessage_", NULL, sizeof(FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, FilteredBGMessage_), &_Type_FilteredBGMessage_Utils, NULL, NULL, &scope_25, 1, 4},
  /* 3 */ { MAP_OUTPUT, "RBCReport_", NULL, sizeof(Train_Position_Report_Radio_TrainToTrack), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, RBCReport_), &_Type_Train_Position_Report_Radio_TrainToTrack_Utils, NULL, NULL, &scope_34, 1, 3},
  /* 4 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 2}
};
static const MappingScope scope_3 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBG",
  scope_3_entries, 5,
};

/* DetermineBGOrientation_LRBG::CheckBaliseGroup/ CheckBaliseGroup_DetermineBGOrientation_LRBG */
static const MappingEntry scope_2_entries[15] = {
  /* 0 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::CheckSingleBaliseGroup 1", NULL, sizeof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, Context_1), NULL, NULL, NULL, &scope_21, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Orientation_", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, Orientation_), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L1), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(CurrentLRBG), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L10), &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(ListOfBGs), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L11), &_Type_ListOfBGs_Utils, NULL, NULL, &scope_32, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(TrainInfo), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L12), &_Type_TrainInfo_Utils, NULL, NULL, &scope_23, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(Orientation), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L13), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L15), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(Orientation), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L16), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L4), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(Orientation), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L7), &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L8), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L9), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_2 = {
  "DetermineBGOrientation_LRBG::CheckBaliseGroup/ CheckBaliseGroup_DetermineBGOrientation_LRBG",
  scope_2_entries, 15,
};

/* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG/ DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG */
static const MappingEntry scope_1_entries[19] = {
  /* 0 */ { MAP_INPUT, "CheckedBGMessage_", NULL, sizeof(CheckedBGMessage), (int)&inputs_ctx.CheckedBGMessage_, &_Type_CheckedBGMessage_Utils, NULL, NULL, &scope_26, 1, 15},
  /* 1 */ { MAP_INPUT, "CurrentLRBG_", NULL, sizeof(CurrentLRBG), (int)&inputs_ctx.CurrentLRBG_, &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 14},
  /* 2 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::CheckBaliseGroup 1", NULL, sizeof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 3 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::FinalCheck 1", NULL, sizeof(outC_FinalCheck_DetermineBGOrientation_LRBG), (int)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 4 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::GetBGMessageOrientation 1", NULL, sizeof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_20, 1, 2},
  /* 5 */ { MAP_OUTPUT, "FilteredBGMessage_", NULL, sizeof(FilteredBGMessage), (int)&outputs_ctx.FilteredBGMessage_, &_Type_FilteredBGMessage_Utils, NULL, NULL, &scope_25, 1, 12},
  /* 6 */ { MAP_INPUT, "ListiOfBGs_", NULL, sizeof(ListOfBGs), (int)&inputs_ctx.ListiOfBGs_, &_Type_ListOfBGs_Utils, NULL, NULL, &scope_32, 1, 16},
  /* 7 */ { MAP_INPUT, "RBCOrientatioReport_", NULL, sizeof(RBCOrientationReport), (int)&inputs_ctx.RBCOrientatioReport_, &_Type_RBCOrientationReport_Utils, NULL, NULL, &scope_33, 1, 18},
  /* 8 */ { MAP_OUTPUT, "RBCReport_", NULL, sizeof(Train_Position_Report_Radio_TrainToTrack), (int)&outputs_ctx.RBCReport_, &_Type_Train_Position_Report_Radio_TrainToTrack_Utils, NULL, NULL, &scope_34, 1, 13},
  /* 9 */ { MAP_INPUT, "TrainInfo_", NULL, sizeof(TrainInfo), (int)&inputs_ctx.TrainInfo_, &_Type_TrainInfo_Utils, NULL, NULL, &scope_23, 1, 17},
  /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(FilteredBGMessage), (int)&outputs_ctx._L10, &_Type_FilteredBGMessage_Utils, NULL, NULL, &scope_25, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(CurrentLRBG), (int)&outputs_ctx._L11, &_Type_CurrentLRBG_Utils, NULL, NULL, &scope_24, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(CheckedBGMessage), (int)&outputs_ctx._L12, &_Type_CheckedBGMessage_Utils, NULL, NULL, &scope_26, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(ListOfBGs), (int)&outputs_ctx._L13, &_Type_ListOfBGs_Utils, NULL, NULL, &scope_32, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(TrainInfo), (int)&outputs_ctx._L14, &_Type_TrainInfo_Utils, NULL, NULL, &scope_23, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L15", NULL, sizeof(RBCOrientationReport), (int)&outputs_ctx._L15, &_Type_RBCOrientationReport_Utils, NULL, NULL, &scope_33, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(Q_DIRTRAIN), (int)&outputs_ctx._L7, &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(Orientation), (int)&outputs_ctx._L8, &_Type_Orientation_Utils, NULL, NULL, NULL, 1, 4},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(Train_Position_Report_Radio_TrainToTrack), (int)&outputs_ctx._L9, &_Type_Train_Position_Report_Radio_TrainToTrack_Utils, NULL, NULL, &scope_34, 1, 5}
};
static const MappingScope scope_1 = {
  "DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG/ DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG",
  scope_1_entries, 19,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

