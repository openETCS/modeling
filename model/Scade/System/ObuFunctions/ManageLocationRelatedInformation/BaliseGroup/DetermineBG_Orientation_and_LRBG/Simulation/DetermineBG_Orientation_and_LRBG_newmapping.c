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

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 1);
MAP_DECL(scope_20, 2);
MAP_DECL(scope_19, 2);
MAP_DECL(scope_18, 1);
MAP_DECL(scope_17, 2);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 10);
MAP_DECL(scope_14, 2);
MAP_DECL(scope_13, 3);
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 6);
MAP_DECL(scope_6, 7);
MAP_DECL(scope_5, 105);
MAP_DECL(scope_4, 36);
MAP_DECL(scope_3, 31);
MAP_DECL(scope_2, 15);
MAP_DECL(scope_1, 19);
MAP_DECL(scope_0, 1);

/* array__823 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(struct__818), 0, &_Type_struct__818_Utils, NULL, NULL, &scope_22, 1, 0}
};
static const MappingScope scope_23 = {
  "array__823",
  scope_23_entries, 1,
};

/* struct__818 */
static const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_FIELD, ".filteredbgmessage", NULL, sizeof(struct__809), offsetof(struct__818, filteredbgmessage), &_Type_struct__809_Utils, NULL, NULL, &scope_20, 1, 0},
  /* 1 */ { MAP_FIELD, ".position", NULL, sizeof(struct__814), offsetof(struct__818, position), &_Type_struct__814_Utils, NULL, NULL, &scope_21, 1, 1}
};
static const MappingScope scope_22 = {
  "struct__818",
  scope_22_entries, 2,
};

/* struct__814 */
static const MappingEntry scope_21_entries[1] = {
  /* 0 */ { MAP_FIELD, ".Position_1", NULL, sizeof(kcg_int), offsetof(struct__814, Position_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "struct__814",
  scope_21_entries, 1,
};

/* struct__809 */
static const MappingEntry scope_20_entries[2] = {
  /* 0 */ { MAP_FIELD, ".checkedbgmessage", NULL, sizeof(struct__804), offsetof(struct__809, checkedbgmessage), &_Type_struct__804_Utils, NULL, NULL, &scope_19, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_dirlrbg", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__809, q_dirlrbg), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "struct__809",
  scope_20_entries, 2,
};

/* struct__804 */
static const MappingEntry scope_19_entries[2] = {
  /* 0 */ { MAP_FIELD, ".additionalinformation", NULL, sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(struct__804, additionalinformation), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".headerflag", NULL, sizeof(array__801), offsetof(struct__804, headerflag), &_Type_array__801_Utils, NULL, NULL, &scope_18, 1, 0}
};
static const MappingScope scope_19 = {
  "struct__804",
  scope_19_entries, 2,
};

/* array__801 */
static const MappingEntry scope_18_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(struct__796), 0, &_Type_struct__796_Utils, NULL, NULL, &scope_17, 1, 0}
};
static const MappingScope scope_18 = {
  "array__801",
  scope_18_entries, 1,
};

/* struct__796 */
static const MappingEntry scope_17_entries[2] = {
  /* 0 */ { MAP_FIELD, ".flag", NULL, sizeof(struct__792), offsetof(struct__796, flag), &_Type_struct__792_Utils, NULL, NULL, &scope_16, 1, 1},
  /* 1 */ { MAP_FIELD, ".header", NULL, sizeof(struct__779), offsetof(struct__796, header), &_Type_struct__779_Utils, NULL, NULL, &scope_15, 1, 0}
};
static const MappingScope scope_17 = {
  "struct__796",
  scope_17_entries, 2,
};

/* struct__792 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_FIELD, ".boolean_", NULL, sizeof(kcg_bool), offsetof(struct__792, boolean_), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "struct__792",
  scope_16_entries, 1,
};

/* struct__779 */
static const MappingEntry scope_15_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, m_dup), &_Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, m_mcount), &_Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, m_version), &_Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, n_pig), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, n_total), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__779, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__779, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, q_link), &_Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, q_media), &_Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__779, q_updown), &_Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_15 = {
  "struct__779",
  scope_15_entries, 10,
};

/* struct__774 */
static const MappingEntry scope_14_entries[2] = {
  /* 0 */ { MAP_FIELD, ".m_leveltr", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__774, m_leveltr), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".m_mode", NULL, sizeof(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__774, m_mode), &_Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_14 = {
  "struct__774",
  scope_14_entries, 2,
};

/* struct__768 */
static const MappingEntry scope_13_entries[3] = {
  /* 0 */ { MAP_FIELD, ".L_MESSAGE", NULL, sizeof(kcg_real), offsetof(struct__768, L_MESSAGE), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_MESSAGE", NULL, sizeof(kcg_int), offsetof(struct__768, NID_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".T_TRAIN", NULL, sizeof(kcg_real), offsetof(struct__768, T_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_13 = {
  "struct__768",
  scope_13_entries, 3,
};

/* struct__764 */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_FIELD, ".assignment_of_coordinate_system", NULL, sizeof(struct__755), offsetof(struct__764, assignment_of_coordinate_system), &_Type_struct__755_Utils, NULL, NULL, &scope_11, 1, 0}
};
static const MappingScope scope_12 = {
  "struct__764",
  scope_12_entries, 1,
};

/* struct__755 */
static const MappingEntry scope_11_entries[6] = {
  /* 0 */ { MAP_FIELD, ".L_MESSAGE", NULL, sizeof(kcg_real), offsetof(struct__755, L_MESSAGE), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".M_ACK", NULL, sizeof(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__755, M_ACK), &_Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__755, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".NID_MESSAGE", NULL, sizeof(kcg_int), offsetof(struct__755, NID_MESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_FIELD, ".Q_ORIENTATION", NULL, sizeof(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(struct__755, Q_ORIENTATION), &_Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".T_TRAIN", NULL, sizeof(kcg_real), offsetof(struct__755, T_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_11 = {
  "struct__755",
  scope_11_entries, 6,
};

/* DetermineBGOrientation_LRBG::ArrCheck/ ArrCheck_DetermineBGOrientation_LRBG */
static const MappingEntry scope_6_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Orientation", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, Orientation), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L13), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L17), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L34", NULL, sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L34), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L37", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L37), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L38", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_ArrCheck_DetermineBGOrientation_LRBG, _L38), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_6 = {
  "DetermineBGOrientation_LRBG::ArrCheck/ ArrCheck_DetermineBGOrientation_LRBG",
  scope_6_entries, 7,
};

/* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup/ CheckSingleBaliseGroup_DetermineBGOrientation_LRBG */
static const MappingEntry scope_5_entries[105] = {
  /* 0 */ { MAP_OUTPUT, "Orientation", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, Orientation), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 104},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L1), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L124", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L124), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_20, 1, 26},
  /* 3 */ { MAP_LOCAL, "_L125", NULL, sizeof(Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L125), &_Type_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_21, 1, 25},
  /* 4 */ { MAP_LOCAL, "_L126", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L126), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_20, 1, 27},
  /* 5 */ { MAP_LOCAL, "_L127", NULL, sizeof(Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L127), &_Type_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_21, 1, 28},
  /* 6 */ { MAP_LOCAL, "_L130", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L130), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 30},
  /* 7 */ { MAP_LOCAL, "_L131", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L131), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_19, 1, 29},
  /* 8 */ { MAP_LOCAL, "_L132", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L132), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 31},
  /* 9 */ { MAP_LOCAL, "_L133", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L133), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_19, 1, 32},
  /* 10 */ { MAP_LOCAL, "_L135", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L135), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 33},
  /* 11 */ { MAP_LOCAL, "_L172", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L172), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 35},
  /* 12 */ { MAP_LOCAL, "_L173", NULL, sizeof(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L173), &_Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 34},
  /* 13 */ { MAP_LOCAL, "_L174", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L174), &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_14, 1, 36},
  /* 14 */ { MAP_LOCAL, "_L175", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L175), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 100},
  /* 15 */ { MAP_LOCAL, "_L176", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L176), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 99},
  /* 16 */ { MAP_LOCAL, "_L178", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L178), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 37},
  /* 17 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 18 */ { MAP_LOCAL, "_L182", NULL, sizeof(HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L182), &_Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_18, 1, 40},
  /* 19 */ { MAP_LOCAL, "_L183", NULL, sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L183), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, NULL, 1, 39},
  /* 20 */ { MAP_LOCAL, "_L192", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L192), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 48},
  /* 21 */ { MAP_LOCAL, "_L193", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L193), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 47},
  /* 22 */ { MAP_LOCAL, "_L194", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L194), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 46},
  /* 23 */ { MAP_LOCAL, "_L195", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L195), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 45},
  /* 24 */ { MAP_LOCAL, "_L196", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L196), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 44},
  /* 25 */ { MAP_LOCAL, "_L197", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L197), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 43},
  /* 26 */ { MAP_LOCAL, "_L198", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L198), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L199", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L199), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L2", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L2), &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_23, 1, 1},
  /* 29 */ { MAP_LOCAL, "_L202", NULL, sizeof(Header_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L202), &_Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, &scope_15, 1, 50},
  /* 30 */ { MAP_LOCAL, "_L203", NULL, sizeof(Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L203), &_Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_16, 1, 49},
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
  /* 45 */ { MAP_LOCAL, "_L254", NULL, sizeof(Header_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L254), &_Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, &scope_15, 1, 84},
  /* 46 */ { MAP_LOCAL, "_L255", NULL, sizeof(Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L255), &_Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_16, 1, 85},
  /* 47 */ { MAP_LOCAL, "_L256", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L256), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 76},
  /* 48 */ { MAP_LOCAL, "_L257", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L257), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 77},
  /* 49 */ { MAP_LOCAL, "_L258", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L258), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 78},
  /* 50 */ { MAP_LOCAL, "_L259", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L259), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 79},
  /* 51 */ { MAP_LOCAL, "_L260", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L260), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 80},
  /* 52 */ { MAP_LOCAL, "_L261", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L261), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 81},
  /* 53 */ { MAP_LOCAL, "_L262", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L262), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 82},
  /* 54 */ { MAP_LOCAL, "_L263", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L263), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 83},
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
  /* 65 */ { MAP_LOCAL, "_L274", NULL, sizeof(HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L274), &_Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_18, 1, 64},
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
  /* 82 */ { MAP_LOCAL, "_L38", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L38), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 21},
  /* 83 */ { MAP_LOCAL, "_L39", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L39), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 20},
  /* 84 */ { MAP_LOCAL, "_L40", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L40), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 19},
  /* 85 */ { MAP_LOCAL, "_L41", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L41), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 18},
  /* 86 */ { MAP_LOCAL, "_L42", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L42), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 17},
  /* 87 */ { MAP_LOCAL, "_L43", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L43), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 16},
  /* 88 */ { MAP_LOCAL, "_L44", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L44), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 15},
  /* 89 */ { MAP_LOCAL, "_L45", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L45), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 14},
  /* 90 */ { MAP_LOCAL, "_L46", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L46), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 13},
  /* 91 */ { MAP_LOCAL, "_L47", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L47), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 12},
  /* 92 */ { MAP_LOCAL, "_L48", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L48), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 11},
  /* 93 */ { MAP_LOCAL, "_L49", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L49), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 10},
  /* 94 */ { MAP_LOCAL, "_L50", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L50), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 9},
  /* 95 */ { MAP_LOCAL, "_L51", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L51), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 8},
  /* 96 */ { MAP_LOCAL, "_L52", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L52), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 7},
  /* 97 */ { MAP_LOCAL, "_L53", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L53), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 6},
  /* 98 */ { MAP_LOCAL, "_L54", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L54), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 5},
  /* 99 */ { MAP_LOCAL, "_L55", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L55), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 4},
  /* 100 */ { MAP_LOCAL, "_L56", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L56), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 3},
  /* 101 */ { MAP_LOCAL, "_L57", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L57), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 2},
  /* 102 */ { MAP_LOCAL, "_L79", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L79), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 22},
  /* 103 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_bool), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L81), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 104 */ { MAP_LOCAL, "_L82", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG, _L82), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_5 = {
  "DetermineBGOrientation_LRBG::CheckSingleBaliseGroup/ CheckSingleBaliseGroup_DetermineBGOrientation_LRBG",
  scope_5_entries, 105,
};

/* DetermineBGOrientation_LRBG::GetBGMessageOrientation/ GetBGMessageOrientation_DetermineBGOrientation_LRBG */
static const MappingEntry scope_4_entries[36] = {
  /* 0 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::ArrCheck 1", NULL, sizeof(outC_ArrCheck_DetermineBGOrientation_LRBG), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, Context_1), NULL, NULL, NULL, &scope_6, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Orientation", NULL, sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, Orientation), &_Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, NULL, NULL, NULL, 1, 35},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L1), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_19, 1, 23},
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
  /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L12), &_Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_18, 1, 21},
  /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L13), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, NULL, 1, 22},
  /* 15 */ { MAP_LOCAL, "_L24", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L24), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L25", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L25), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L26), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L27", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L27), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L28", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L28), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L29", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L29), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L30), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L31", NULL, sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L31), &_Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_17, 1, 20},
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
  /* 34 */ { MAP_LOCAL, "_L34", NULL, sizeof(Header_DetermineBGOrientation_LRBG_DataDctionary_BTM), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L34), &_Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, NULL, NULL, &scope_15, 1, 11},
  /* 35 */ { MAP_LOCAL, "_L35", NULL, sizeof(Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG, _L35), &_Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_16, 1, 12}
};
static const MappingScope scope_4 = {
  "DetermineBGOrientation_LRBG::GetBGMessageOrientation/ GetBGMessageOrientation_DetermineBGOrientation_LRBG",
  scope_4_entries, 36,
};

/* DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBG */
static const MappingEntry scope_3_entries[31] = {
  /* 0 */ { MAP_OUTPUT, "FilteredBGMessage", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, FilteredBGMessage), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_20, 1, 30},
  /* 1 */ { MAP_OUTPUT, "RBCReport", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, RBCReport), &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_13, 1, 29},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L1), &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_19, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L2), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L27), &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_13, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L28), &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_20, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L29), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L3), &_Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, NULL, NULL, &scope_12, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L54", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L54), &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_14, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L57", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L57), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L58", NULL, sizeof(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L58), &_Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L60), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L61), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L62), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L63", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L63), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L64", NULL, sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L64), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L66", NULL, sizeof(Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L66), &_Type_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_11, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L85", NULL, sizeof(NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L85), &_Type_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L86", NULL, sizeof(L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L86), &_Type_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L87", NULL, sizeof(T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L87), &_Type_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L88", NULL, sizeof(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L88), &_Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 17},
  /* 21 */ { MAP_LOCAL, "_L89", NULL, sizeof(NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L89), &_Type_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 16},
  /* 22 */ { MAP_LOCAL, "_L90", NULL, sizeof(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L90), &_Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 15},
  /* 23 */ { MAP_LOCAL, "_L91", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L91), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L92), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L93", NULL, sizeof(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L93), &_Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L95", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L95), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 24},
  /* 27 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L97", NULL, sizeof(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L97), &_Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L98", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L98), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L99", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_FinalCheck_DetermineBGOrientation_LRBG, _L99), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 28}
};
static const MappingScope scope_3 = {
  "DetermineBGOrientation_LRBG::FinalCheck/ FinalCheck_DetermineBGOrientation_LRBG",
  scope_3_entries, 31,
};

/* DetermineBGOrientation_LRBG::CheckBaliseGroup/ CheckBaliseGroup_DetermineBGOrientation_LRBG */
static const MappingEntry scope_2_entries[15] = {
  /* 0 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::CheckSingleBaliseGroup 1", NULL, sizeof(outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, Context_1), NULL, NULL, NULL, &scope_5, 1, 0},
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
  /* 11 */ { MAP_LOCAL, "_LCurrentLRBG", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _LCurrentLRBG), &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 1},
  /* 12 */ { MAP_LOCAL, "_LListOfBGs", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _LListOfBGs), &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_23, 1, 2},
  /* 13 */ { MAP_LOCAL, "_LTrainInfo", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _LTrainInfo), &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_14, 1, 4},
  /* 14 */ { MAP_LOCAL, "_Lchecksinglebalisegroup_Orientation", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), offsetof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG, _Lchecksinglebalisegroup_Orientation), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_2 = {
  "DetermineBGOrientation_LRBG::CheckBaliseGroup/ CheckBaliseGroup_DetermineBGOrientation_LRBG",
  scope_2_entries, 15,
};

/* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG/ DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG */
static const MappingEntry scope_1_entries[19] = {
  /* 0 */ { MAP_INPUT, "CheckedBGMessage", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), (int)&inputs_ctx.CheckedBGMessage, &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_19, 1, 15},
  /* 1 */ { MAP_INPUT, "CurrentLRBG", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), (int)&inputs_ctx.CurrentLRBG, &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 14},
  /* 2 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::CheckBaliseGroup 1", NULL, sizeof(outC_CheckBaliseGroup_DetermineBGOrientation_LRBG), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 3 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::FinalCheck 1", NULL, sizeof(outC_FinalCheck_DetermineBGOrientation_LRBG), (int)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 4 */ { MAP_INSTANCE, "DetermineBGOrientation_LRBG::GetBGMessageOrientation 1", NULL, sizeof(outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_4, 1, 2},
  /* 5 */ { MAP_OUTPUT, "FilterBGMessage", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), (int)&outputs_ctx.FilterBGMessage, &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_20, 1, 12},
  /* 6 */ { MAP_INPUT, "ListOfBGs", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), (int)&inputs_ctx.ListOfBGs, &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_23, 1, 16},
  /* 7 */ { MAP_INPUT, "RBCOrientationReport", NULL, sizeof(RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport), (int)&inputs_ctx.RBCOrientationReport, &_Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, NULL, NULL, &scope_12, 1, 18},
  /* 8 */ { MAP_OUTPUT, "RBCReport", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), (int)&outputs_ctx.RBCReport, &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_13, 1, 13},
  /* 9 */ { MAP_INPUT, "TrainInfo", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), (int)&inputs_ctx.TrainInfo, &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_14, 1, 17},
  /* 10 */ { MAP_LOCAL, "_LCheckedBGMessage", NULL, sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage), (int)&outputs_ctx._LCheckedBGMessage, &_Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, NULL, NULL, &scope_19, 1, 4},
  /* 11 */ { MAP_LOCAL, "_LCurrentLRBG", NULL, sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG), (int)&outputs_ctx._LCurrentLRBG, &_Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, NULL, NULL, &scope_22, 1, 3},
  /* 12 */ { MAP_LOCAL, "_LListOfBGs", NULL, sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs), (int)&outputs_ctx._LListOfBGs, &_Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, NULL, NULL, &scope_23, 1, 5},
  /* 13 */ { MAP_LOCAL, "_LRBCOrientationReport", NULL, sizeof(RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport), (int)&outputs_ctx._LRBCOrientationReport, &_Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, NULL, NULL, &scope_12, 1, 7},
  /* 14 */ { MAP_LOCAL, "_LTrainInfo", NULL, sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo), (int)&outputs_ctx._LTrainInfo, &_Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, NULL, NULL, &scope_14, 1, 6},
  /* 15 */ { MAP_LOCAL, "_Lchecksinglebalisegroup_Orientation", NULL, sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable), (int)&outputs_ctx._Lchecksinglebalisegroup_Orientation, &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, NULL, NULL, NULL, 1, 8},
  /* 16 */ { MAP_LOCAL, "_Lfinalcheck_FilteredBGMessage", NULL, sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage), (int)&outputs_ctx._Lfinalcheck_FilteredBGMessage, &_Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, NULL, NULL, &scope_20, 1, 11},
  /* 17 */ { MAP_LOCAL, "_Lfinalcheck_RBCReport", NULL, sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets), (int)&outputs_ctx._Lfinalcheck_RBCReport, &_Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, NULL, NULL, &scope_13, 1, 9},
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

