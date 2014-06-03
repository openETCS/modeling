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
MAP_DECL(scope_39, 1);
MAP_DECL(scope_38, 2);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 2);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 1);
MAP_DECL(scope_31, 10);
MAP_DECL(scope_30, 2);
MAP_DECL(scope_29, 3);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 6);
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

/* array__1048 */
static const MappingEntry scope_39_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(struct__1043), 0, &_Type_struct__1043_Utils, NULL, NULL, &scope_38, 1, 0}
};
static const MappingScope scope_39 = {
  "array__1048",
  scope_39_entries, 1,
};

/* struct__1043 */
static const MappingEntry scope_38_entries[2] = {
  /* 0 */ { MAP_FIELD, ".filteredbgmessage", NULL, sizeof(struct__1034), offsetof(struct__1043, filteredbgmessage), &_Type_struct__1034_Utils, NULL, NULL, &scope_36, 1, 0},
  /* 1 */ { MAP_FIELD, ".position", NULL, sizeof(struct__1039), offsetof(struct__1043, position), &_Type_struct__1039_Utils, NULL, NULL, &scope_37, 1, 1}
};
static const MappingScope scope_38 = {
  "struct__1043",
  scope_38_entries, 2,
};

/* struct__1039 */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_FIELD, ".Position_1", NULL, sizeof(kcg_int), offsetof(struct__1039, Position_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_37 = {
  "struct__1039",
  scope_37_entries, 1,
};

/* struct__1034 */
static const MappingEntry scope_36_entries[2] = {
  /* 0 */ { MAP_FIELD, ".checkedbgmessage", NULL, sizeof(struct__1029), offsetof(struct__1034, checkedbgmessage), &_Type_struct__1029_Utils, NULL, NULL, &scope_35, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_dirlrbg", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1034, q_dirlrbg), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_36 = {
  "struct__1034",
  scope_36_entries, 2,
};

/* struct__1029 */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_FIELD, ".additionalinformation", NULL, sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(struct__1029, additionalinformation), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".headerflag", NULL, sizeof(array__1026), offsetof(struct__1029, headerflag), &_Type_array__1026_Utils, NULL, NULL, &scope_34, 1, 0}
};
static const MappingScope scope_35 = {
  "struct__1029",
  scope_35_entries, 2,
};

/* array__1026 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(struct__1021), 0, &_Type_struct__1021_Utils, NULL, NULL, &scope_33, 1, 0}
};
static const MappingScope scope_34 = {
  "array__1026",
  scope_34_entries, 1,
};

/* struct__1021 */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_FIELD, ".flag", NULL, sizeof(struct__1017), offsetof(struct__1021, flag), &_Type_struct__1017_Utils, NULL, NULL, &scope_32, 1, 1},
  /* 1 */ { MAP_FIELD, ".header", NULL, sizeof(struct__1004), offsetof(struct__1021, header), &_Type_struct__1004_Utils, NULL, NULL, &scope_31, 1, 0}
};
static const MappingScope scope_33 = {
  "struct__1021",
  scope_33_entries, 2,
};

/* struct__1017 */
static const MappingEntry scope_32_entries[1] = {
  /* 0 */ { MAP_FIELD, ".boolean_", NULL, sizeof(kcg_bool), offsetof(struct__1017, boolean_), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_32 = {
  "struct__1017",
  scope_32_entries, 1,
};

/* struct__1004 */
static const MappingEntry scope_31_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, m_dup), &_Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, m_mcount), &_Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, m_version), &_Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, n_pig), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, n_total), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__1004, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__1004, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, q_link), &_Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, q_media), &_Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__1004, q_updown), &_Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_31 = {
  "struct__1004",
  scope_31_entries, 10,
};

/* struct__999 */
static const MappingEntry scope_30_entries[2] = {
  /* 0 */ { MAP_FIELD, ".m_leveltr", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__999, m_leveltr), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".m_mode", NULL, sizeof(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__999, m_mode), &_Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_30 = {
  "struct__999",
  scope_30_entries, 2,
};

/* struct__993 */
static const MappingEntry scope_29_entries[3] = {
  /* 0 */ { MAP_FIELD, ".L_MESSAGE", NULL, sizeof(kcg_real), offsetof(struct__993, L_MESSAGE), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_MESSAGE", NULL, sizeof(kcg_int), offsetof(struct__993, NID_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".T_TRAIN", NULL, sizeof(kcg_real), offsetof(struct__993, T_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_29 = {
  "struct__993",
  scope_29_entries, 3,
};

/* struct__989 */
static const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_FIELD, ".assignment_of_coordinate_system", NULL, sizeof(struct__980), offsetof(struct__989, assignment_of_coordinate_system), &_Type_struct__980_Utils, NULL, NULL, &scope_27, 1, 0}
};
static const MappingScope scope_28 = {
  "struct__989",
  scope_28_entries, 1,
};

/* struct__980 */
static const MappingEntry scope_27_entries[6] = {
  /* 0 */ { MAP_FIELD, ".L_MESSAGE", NULL, sizeof(kcg_real), offsetof(struct__980, L_MESSAGE), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".M_ACK", NULL, sizeof(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__980, M_ACK), &_Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__980, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".NID_MESSAGE", NULL, sizeof(kcg_int), offsetof(struct__980, NID_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_FIELD, ".Q_ORIENTATION", NULL, sizeof(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__980, Q_ORIENTATION), &_Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".T_TRAIN", NULL, sizeof(kcg_real), offsetof(struct__980, T_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_27 = {
  "struct__980",
  scope_27_entries, 6,
};

/* DetermineBGOrientation_LRBG::ArrCheck/ ArrCheck_DetermineBGOrientation_LRBG */
static const MappingEntry scope_22_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Orientation", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, Orientation), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L13), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L17), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L34", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L34), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L37", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L37), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L38", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L38), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_22 = {
  "DetermineBGOrientation_LRBG::ArrCheck/ ArrCheck_DetermineBGOrientation_LRBG",
  scope_22_entries, 7,
};

/* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup/ CheckSingleBaliseGroup_DetermineBGOrientation_LRBG */
static const MappingEntry scope_21_entries[105] = {
  /* 0 */ { MAP_OUTPUT, "Orientation", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, Orientation), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 104},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L1), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L124", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L124), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_36, 1, 26},
  /* 3 */ { MAP_LOCAL, "_L125", NULL, sizeof(Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L125), &_Type_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_37, 1, 25},
  /* 4 */ { MAP_LOCAL, "_L126", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L126), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_36, 1, 27},
  /* 5 */ { MAP_LOCAL, "_L127", NULL, sizeof(Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L127), &_Type_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_37, 1, 28},
  /* 6 */ { MAP_LOCAL, "_L130", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L130), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 30},
  /* 7 */ { MAP_LOCAL, "_L131", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L131), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_35, 1, 29},
  /* 8 */ { MAP_LOCAL, "_L132", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L132), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 31},
  /* 9 */ { MAP_LOCAL, "_L133", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L133), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_35, 1, 32},
  /* 10 */ { MAP_LOCAL, "_L135", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L135), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 33},
  /* 11 */ { MAP_LOCAL, "_L172", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L172), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 35},
  /* 12 */ { MAP_LOCAL, "_L173", NULL, sizeof(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L173), &_Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 34},
  /* 13 */ { MAP_LOCAL, "_L174", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L174), &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_30, 1, 36},
  /* 14 */ { MAP_LOCAL, "_L175", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L175), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 100},
  /* 15 */ { MAP_LOCAL, "_L176", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L176), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 99},
  /* 16 */ { MAP_LOCAL, "_L178", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L178), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 37},
  /* 17 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 18 */ { MAP_LOCAL, "_L182", NULL, sizeof(HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L182), &_Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_34, 1, 40},
  /* 19 */ { MAP_LOCAL, "_L183", NULL, sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L183), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, NULL, 1, 39},
  /* 20 */ { MAP_LOCAL, "_L192", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L192), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 48},
  /* 21 */ { MAP_LOCAL, "_L193", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L193), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 47},
  /* 22 */ { MAP_LOCAL, "_L194", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L194), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 46},
  /* 23 */ { MAP_LOCAL, "_L195", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L195), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 45},
  /* 24 */ { MAP_LOCAL, "_L196", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L196), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 44},
  /* 25 */ { MAP_LOCAL, "_L197", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L197), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 43},
  /* 26 */ { MAP_LOCAL, "_L198", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L198), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L199", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L199), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L2", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L2), &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_39, 1, 1},
  /* 29 */ { MAP_LOCAL, "_L202", NULL, sizeof(Header_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L202), &_Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, &scope_31, 1, 50},
  /* 30 */ { MAP_LOCAL, "_L203", NULL, sizeof(Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L203), &_Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_32, 1, 49},
  /* 31 */ { MAP_LOCAL, "_L216", NULL, sizeof(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L216), &_Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 60},
  /* 32 */ { MAP_LOCAL, "_L217", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L217), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 59},
  /* 33 */ { MAP_LOCAL, "_L218", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L218), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 58},
  /* 34 */ { MAP_LOCAL, "_L219", NULL, sizeof(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L219), &_Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 57},
  /* 35 */ { MAP_LOCAL, "_L220", NULL, sizeof(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L220), &_Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 56},
  /* 36 */ { MAP_LOCAL, "_L221", NULL, sizeof(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L221), &_Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 55},
  /* 37 */ { MAP_LOCAL, "_L222", NULL, sizeof(NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L222), &_Type_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 54},
  /* 38 */ { MAP_LOCAL, "_L223", NULL, sizeof(NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L223), &_Type_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 53},
  /* 39 */ { MAP_LOCAL, "_L224", NULL, sizeof(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L224), &_Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 52},
  /* 40 */ { MAP_LOCAL, "_L225", NULL, sizeof(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L225), &_Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 51},
  /* 41 */ { MAP_LOCAL, "_L226", NULL, sizeof(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L226), &_Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 61},
  /* 42 */ { MAP_LOCAL, "_L251", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L251), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 98},
  /* 43 */ { MAP_LOCAL, "_L252", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L252), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 62},
  /* 44 */ { MAP_LOCAL, "_L253", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L253), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63},
  /* 45 */ { MAP_LOCAL, "_L254", NULL, sizeof(Header_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L254), &_Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, &scope_31, 1, 84},
  /* 46 */ { MAP_LOCAL, "_L255", NULL, sizeof(Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L255), &_Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_32, 1, 85},
  /* 47 */ { MAP_LOCAL, "_L256", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L256), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 76},
  /* 48 */ { MAP_LOCAL, "_L257", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L257), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 77},
  /* 49 */ { MAP_LOCAL, "_L258", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L258), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 78},
  /* 50 */ { MAP_LOCAL, "_L259", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L259), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 79},
  /* 51 */ { MAP_LOCAL, "_L260", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L260), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 80},
  /* 52 */ { MAP_LOCAL, "_L261", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L261), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 81},
  /* 53 */ { MAP_LOCAL, "_L262", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L262), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 82},
  /* 54 */ { MAP_LOCAL, "_L263", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L263), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 83},
  /* 55 */ { MAP_LOCAL, "_L264", NULL, sizeof(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L264), &_Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 66},
  /* 56 */ { MAP_LOCAL, "_L265", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L265), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 67},
  /* 57 */ { MAP_LOCAL, "_L266", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L266), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 68},
  /* 58 */ { MAP_LOCAL, "_L267", NULL, sizeof(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L267), &_Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 69},
  /* 59 */ { MAP_LOCAL, "_L268", NULL, sizeof(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L268), &_Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 70},
  /* 60 */ { MAP_LOCAL, "_L269", NULL, sizeof(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L269), &_Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 71},
  /* 61 */ { MAP_LOCAL, "_L270", NULL, sizeof(NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L270), &_Type_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 72},
  /* 62 */ { MAP_LOCAL, "_L271", NULL, sizeof(NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L271), &_Type_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 73},
  /* 63 */ { MAP_LOCAL, "_L272", NULL, sizeof(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L272), &_Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 74},
  /* 64 */ { MAP_LOCAL, "_L273", NULL, sizeof(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L273), &_Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 75},
  /* 65 */ { MAP_LOCAL, "_L274", NULL, sizeof(HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L274), &_Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_34, 1, 64},
  /* 66 */ { MAP_LOCAL, "_L275", NULL, sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L275), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, NULL, 1, 65},
  /* 67 */ { MAP_LOCAL, "_L276", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L276), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 86},
  /* 68 */ { MAP_LOCAL, "_L277", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L277), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 87},
  /* 69 */ { MAP_LOCAL, "_L278", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L278), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 88},
  /* 70 */ { MAP_LOCAL, "_L282", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L282), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 89},
  /* 71 */ { MAP_LOCAL, "_L283", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L283), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 90},
  /* 72 */ { MAP_LOCAL, "_L286", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L286), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 91},
  /* 73 */ { MAP_LOCAL, "_L287", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L287), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 92},
  /* 74 */ { MAP_LOCAL, "_L296", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L296), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 96},
  /* 75 */ { MAP_LOCAL, "_L297", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L297), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 95},
  /* 76 */ { MAP_LOCAL, "_L298", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L298), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 94},
  /* 77 */ { MAP_LOCAL, "_L299", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L299), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 93},
  /* 78 */ { MAP_LOCAL, "_L300", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L300), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 97},
  /* 79 */ { MAP_LOCAL, "_L306", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L306), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 101},
  /* 80 */ { MAP_LOCAL, "_L307", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L307), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 102},
  /* 81 */ { MAP_LOCAL, "_L308", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L308), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 103},
  /* 82 */ { MAP_LOCAL, "_L38", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L38), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 21},
  /* 83 */ { MAP_LOCAL, "_L39", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L39), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 20},
  /* 84 */ { MAP_LOCAL, "_L40", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L40), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 19},
  /* 85 */ { MAP_LOCAL, "_L41", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L41), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 18},
  /* 86 */ { MAP_LOCAL, "_L42", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L42), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 17},
  /* 87 */ { MAP_LOCAL, "_L43", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L43), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 16},
  /* 88 */ { MAP_LOCAL, "_L44", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L44), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 15},
  /* 89 */ { MAP_LOCAL, "_L45", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L45), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 14},
  /* 90 */ { MAP_LOCAL, "_L46", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L46), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 13},
  /* 91 */ { MAP_LOCAL, "_L47", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L47), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 12},
  /* 92 */ { MAP_LOCAL, "_L48", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L48), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 11},
  /* 93 */ { MAP_LOCAL, "_L49", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L49), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 10},
  /* 94 */ { MAP_LOCAL, "_L50", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L50), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 9},
  /* 95 */ { MAP_LOCAL, "_L51", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L51), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 8},
  /* 96 */ { MAP_LOCAL, "_L52", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L52), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 7},
  /* 97 */ { MAP_LOCAL, "_L53", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L53), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 6},
  /* 98 */ { MAP_LOCAL, "_L54", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L54), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 5},
  /* 99 */ { MAP_LOCAL, "_L55", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L55), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 4},
  /* 100 */ { MAP_LOCAL, "_L56", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L56), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 3},
  /* 101 */ { MAP_LOCAL, "_L57", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L57), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 2},
  /* 102 */ { MAP_LOCAL, "_L79", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L79), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 22},
  /* 103 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L81), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 104 */ { MAP_LOCAL, "_L82", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L82), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_21 = {
  "DetermineBGOrientation_LRBG::CheckSingleBaliseGroup/ CheckSingleBaliseGroup_DetermineBGOrientation_LRBG",
  scope_21_entries, 105,
};

/* DetermineBGOrientation_LRBG::GetBGMessageOrientation/ GetBGMessageOrientation_DetermineBGOrientation_LRBG */
static const MappingEntry scope_20_entries[36] = {
  /* 0 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::ArrCheck 1", NULL, sizeof(outC_ArrCheck_DetermineBGOrientation_LRBG), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, Context_1), NULL, NULL, NULL, &scope_22, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Orientation", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, Orientation), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 35},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L1), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_35, 1, 23},
  /* 3 */ { MAP_LOCAL, "_L101", NULL, sizeof(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L101), &_Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L102", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L102), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L103", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L103), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L104", NULL, sizeof(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L104), &_Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L105", NULL, sizeof(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L105), &_Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L106", NULL, sizeof(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L106), &_Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L107", NULL, sizeof(NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L107), &_Type_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L108", NULL, sizeof(NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L108), &_Type_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L109", NULL, sizeof(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L109), &_Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L110", NULL, sizeof(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L110), &_Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L12), &_Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_34, 1, 21},
  /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L13), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, NULL, 1, 22},
  /* 15 */ { MAP_LOCAL, "_L24", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L24), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L25", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L25), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L26), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L27", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L27), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L28", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L28), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L29", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L29), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L30), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L31", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L31), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_33, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L310", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L310), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L311", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L311), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 25},
  /* 25 */ { MAP_LOCAL, "_L315", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L315), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 26 */ { MAP_LOCAL, "_L316", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L316), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 27},
  /* 27 */ { MAP_LOCAL, "_L317", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L317), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L318", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L318), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L319", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L319), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 30 */ { MAP_LOCAL, "_L320", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L320), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 31},
  /* 31 */ { MAP_LOCAL, "_L321", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L321), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 32 */ { MAP_LOCAL, "_L323", NULL, sizeof(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L323), &_Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L324", NULL, sizeof(kcg_bool), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L324), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L34", NULL, sizeof(Header_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L34), &_Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, &scope_31, 1, 11},
  /* 35 */ { MAP_LOCAL, "_L35", NULL, sizeof(Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L35), &_Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_32, 1, 12}
};
static const MappingScope scope_20 = {
  "DetermineBGOrientation_LRBG::GetBGMessageOrientation/ GetBGMessageOrientation_DetermineBGOrientation_LRBG",
  scope_20_entries, 36,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:NoAck: */
static const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L1_SM1_Level2or3_SM2_NoAck), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2, &scope_36, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L2_SM1_Level2or3_SM2_NoAck), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L3_SM1_Level2or3_SM2_NoAck), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_NoAck_SM1_Level2or3_SM2, &scope_35, 1, 0}
};
static const MappingScope scope_19 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:NoAck:",
  scope_19_entries, 3,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBGSM1:Level2or3:SM2:Ack: */
static const MappingEntry scope_18_entries[16] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L10_SM1_Level2or3_SM2_Ack), &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_29, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L11_SM1_Level2or3_SM2_Ack), &_Type_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_27, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L12_SM1_Level2or3_SM2_Ack), &_Type_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L13_SM1_Level2or3_SM2_Ack), &_Type_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L14_SM1_Level2or3_SM2_Ack), &_Type_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L15_SM1_Level2or3_SM2_Ack), &_Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L16_SM1_Level2or3_SM2_Ack), &_Type_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L17_SM1_Level2or3_SM2_Ack), &_Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L26_SM1_Level2or3_SM2_Ack), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_36, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L28_SM1_Level2or3_SM2_Ack), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L29_SM1_Level2or3_SM2_Ack), &_Type_kcg_bool_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L30_SM1_Level2or3_SM2_Ack), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L31_SM1_Level2or3_SM2_Ack), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L32_SM1_Level2or3_SM2_Ack), &_Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L33_SM1_Level2or3_SM2_Ack), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_35, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L9_SM1_Level2or3_SM2_Ack), &_Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, &scope_12_entries[4], isActive_SSM_ST_SM2_SM1_Level2or3_SSM_st_Ack_SM1_Level2or3_SM2, &scope_28, 1, 0}
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
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L1_SM1_Level0or1), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L2_SM1_Level0or1), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1, &scope_36, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L3_SM1_Level0or1), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_Level0or1_SM1, &scope_35, 1, 2}
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
  /* 2 */ { MAP_OUTPUT, "FilteredBGMessage", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, FilteredBGMessage), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_36, 1, 4},
  /* 3 */ { MAP_OUTPUT, "RBCReport", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, RBCReport), &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_29, 1, 3},
  /* 4 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 2}
};
static const MappingScope scope_3 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBG",
  scope_3_entries, 5,
};

/* DetermineBGOrientation_LRBG::CheckBaliseGroup/ CheckBaliseGroup_DetermineBGOrientation_LRBG */
static const MappingEntry scope_2_entries[15] = {
  /* 0 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::CheckSingleBaliseGroup 1", NULL, sizeof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, Context_1), NULL, NULL, NULL, &scope_21, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Orientation", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, Orientation), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L1), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L3), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L4), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L6), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L7), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _L8), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_LBGOOrientationAndType", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _LBGOOrientationAndType), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_LCurrentLRBG", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _LCurrentLRBG), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 1},
  /* 12 */ { MAP_LOCAL, "_LListOfBGs", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _LListOfBGs), &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_39, 1, 2},
  /* 13 */ { MAP_LOCAL, "_LTrainInfo", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _LTrainInfo), &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_30, 1, 4},
  /* 14 */ { MAP_LOCAL, "_Lchecksinglebalisegroup_Orientation", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _Lchecksinglebalisegroup_Orientation), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_2 = {
  "DetermineBGOrientation_LRBG::CheckBaliseGroup/ CheckBaliseGroup_DetermineBGOrientation_LRBG",
  scope_2_entries, 15,
};

/* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG/ DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG */
static const MappingEntry scope_1_entries[19] = {
  /* 0 */ { MAP_INPUT, "CheckedBGMessage", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), (int)&inputs_ctx.CheckedBGMessage, &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_35, 1, 15},
  /* 1 */ { MAP_INPUT, "CurrentLRBG", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), (int)&inputs_ctx.CurrentLRBG, &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 14},
  /* 2 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::CheckBaliseGroup 1", NULL, sizeof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 3 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::FinalCheck 1", NULL, sizeof(outC_FinalCheck_DetermineBGOrientation_LRBG), (int)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 4 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::GetBGMessageOrientation 1", NULL, sizeof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_20, 1, 2},
  /* 5 */ { MAP_OUTPUT, "FilterBGMessage", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), (int)&outputs_ctx.FilterBGMessage, &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_36, 1, 12},
  /* 6 */ { MAP_INPUT, "ListOfBGs", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), (int)&inputs_ctx.ListOfBGs, &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_39, 1, 16},
  /* 7 */ { MAP_INPUT, "RBCOrientationReport", NULL, sizeof(RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport), (int)&inputs_ctx.RBCOrientationReport, &_Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, NULL, NULL, &scope_28, 1, 18},
  /* 8 */ { MAP_OUTPUT, "RBCReport", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), (int)&outputs_ctx.RBCReport, &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_29, 1, 13},
  /* 9 */ { MAP_INPUT, "TrainInfo", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), (int)&inputs_ctx.TrainInfo, &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_30, 1, 17},
  /* 10 */ { MAP_LOCAL, "_LCheckedBGMessage", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), (int)&outputs_ctx._LCheckedBGMessage, &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_35, 1, 4},
  /* 11 */ { MAP_LOCAL, "_LCurrentLRBG", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), (int)&outputs_ctx._LCurrentLRBG, &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_38, 1, 3},
  /* 12 */ { MAP_LOCAL, "_LListOfBGs", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), (int)&outputs_ctx._LListOfBGs, &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_39, 1, 5},
  /* 13 */ { MAP_LOCAL, "_LRBCOrientationReport", NULL, sizeof(RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport), (int)&outputs_ctx._LRBCOrientationReport, &_Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, NULL, NULL, &scope_28, 1, 7},
  /* 14 */ { MAP_LOCAL, "_LTrainInfo", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), (int)&outputs_ctx._LTrainInfo, &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_30, 1, 6},
  /* 15 */ { MAP_LOCAL, "_Lchecksinglebalisegroup_Orientation", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), (int)&outputs_ctx._Lchecksinglebalisegroup_Orientation, &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 8},
  /* 16 */ { MAP_LOCAL, "_Lfinalcheck_FilteredBGMessage", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), (int)&outputs_ctx._Lfinalcheck_FilteredBGMessage, &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_36, 1, 11},
  /* 17 */ { MAP_LOCAL, "_Lfinalcheck_RBCReport", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), (int)&outputs_ctx._Lfinalcheck_RBCReport, &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_29, 1, 9},
  /* 18 */ { MAP_LOCAL, "_Lgetbgmessageorientation_BGOOrientationAndType", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), (int)&outputs_ctx._Lgetbgmessageorientation_BGOOrientationAndType, &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 10}
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

