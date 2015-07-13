/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_32;
static const MappingIterator iter_foldi_33;
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_foldi_33 = { "foldi", 33, 33, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 1);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 1);
MAP_DECL(scope_26, 1);
MAP_DECL(scope_25, 1);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 4);
MAP_DECL(scope_22, 1);
MAP_DECL(scope_21, 6);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 3);
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 3);
MAP_DECL(scope_11, 4);
MAP_DECL(scope_10, 3);
MAP_DECL(scope_9, 3);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_5, 4);
MAP_DECL(scope_4, 17);
MAP_DECL(scope_3, 18);
MAP_DECL(scope_2, 30);
MAP_DECL(scope_1, 29);
MAP_DECL(scope_0, 1);

/* array__503 */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__464), 0, &_Type_struct__464_Utils, NULL, NULL, &scope_21, 1, 0}
};
static const MappingScope scope_30 = {
  "array__503",
  scope_30_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_29_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_29 = {
  "array_int_33",
  scope_29_entries, 1,
};

/* array__497 */
static const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(Q_SCALE), 0, &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_28 = {
  "array__497",
  scope_28_entries, 1,
};

/* array__494 */
static const MappingEntry scope_27_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__473), 0, &_Type_array__473_Utils, NULL, NULL, &scope_22, 1, 0}
};
static const MappingScope scope_27 = {
  "array__494",
  scope_27_entries, 1,
};

/* array__491 */
static const MappingEntry scope_26_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__464), 0, &_Type_struct__464_Utils, NULL, NULL, &scope_21, 1, 0}
};
static const MappingScope scope_26 = {
  "array__491",
  scope_26_entries, 1,
};

/* array__488 */
static const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__483), 0, &_Type_struct__483_Utils, NULL, NULL, &scope_24, 1, 0}
};
static const MappingScope scope_25 = {
  "array__488",
  scope_25_entries, 1,
};

/* struct__483 */
static const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_FIELD, ".speed", NULL, sizeof(kcg_int), offsetof(struct__483, speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__483, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_24 = {
  "struct__483",
  scope_24_entries, 2,
};

/* struct__476 */
static const MappingEntry scope_23_entries[4] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__476, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__476, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".sections", NULL, sizeof(array__473), offsetof(struct__476, sections), &_Type_array__473_Utils, NULL, NULL, &scope_22, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__476, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "struct__476",
  scope_23_entries, 4,
};

/* array__473 */
static const MappingEntry scope_22_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__464), 0, &_Type_struct__464_Utils, NULL, NULL, &scope_21, 1, 0}
};
static const MappingScope scope_22 = {
  "array__473",
  scope_22_entries, 1,
};

/* struct__464 */
static const MappingEntry scope_21_entries[6] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__461), offsetof(struct__464, SECTIONS_q_diff), &_Type_array__461_Utils, NULL, NULL, &scope_20, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_static", NULL, sizeof(kcg_int), offsetof(struct__464, d_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__464, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".q_front", NULL, sizeof(Q_FRONT), offsetof(struct__464, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".v_static", NULL, sizeof(kcg_int), offsetof(struct__464, v_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__464, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "struct__464",
  scope_21_entries, 6,
};

/* array__461 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__455), 0, &_Type_struct__455_Utils, NULL, NULL, &scope_19, 1, 0}
};
static const MappingScope scope_20 = {
  "array__461",
  scope_20_entries, 1,
};

/* struct__455 */
static const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_FIELD, ".nc_diff", NULL, sizeof(kcg_int), offsetof(struct__455, nc_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".v_diff", NULL, sizeof(kcg_int), offsetof(struct__455, v_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__455, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_19 = {
  "struct__455",
  scope_19_entries, 3,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_14 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then:",
  scope_14_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else:",
  scope_13_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_12_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_Front_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_false, &scope_13, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_true, &scope_14, 1, 2}
};
static const MappingScope scope_12 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:",
  scope_12_entries, 3,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal */
static const MappingEntry scope_11_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "added_train_length", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Eval_Q_Front_TA_Lib_internal, added_train_length), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, q_front_in), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_11 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal",
  scope_11_entries, 4,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_10_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_10 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then:",
  scope_10_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_9_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L22_IfBlock1), &_Type_kcg_int_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L33_IfBlock1), &_Type_kcg_int_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then:",
  scope_9_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L25_IfBlock1), &_Type_kcg_int_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L36_IfBlock1), &_Type_kcg_int_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_8 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else:",
  scope_8_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, &scope_8, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_9, 1, 2}
};
static const MappingScope scope_7 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:",
  scope_7_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2}
};
static const MappingScope scope_6 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:",
  scope_6_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal */
static const MappingEntry scope_5_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "d_internal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, d_internal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_5 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal",
  scope_5_entries, 4,
};

/* TA_Lib_internal::DetectSpeedIncrease/ DetectSpeedIncrease_TA_Lib_internal */
static const MappingEntry scope_4_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L1), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 15},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(V_STATIC), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L11), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L15), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_22, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L16), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_22, 1, 0},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L2), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(V_STATIC), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L3), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L6), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L9), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "q_speed_increase", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, q_speed_increase), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_4 = {
  "TA_Lib_internal::DetectSpeedIncrease/ DetectSpeedIncrease_TA_Lib_internal",
  scope_4_entries, 17,
};

/* TA_SSP::Convert_P27_to_DistanceProfile_1st_section/ _2_Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_3_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_Q_Front 2", NULL, sizeof(outC_Eval_Q_Front_TA_Lib_internal), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _1_Context_2), NULL, NULL, NULL, &scope_11, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 2", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, Context_2), NULL, NULL, NULL, &scope_5, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L86", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 13},
  /* 3 */ { MAP_LOCAL, "_L87", NULL, sizeof(D_STATIC), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L87), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_LOCAL, "_L88", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L88), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L89", NULL, sizeof(Q_SCALE), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L89), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L90", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L90), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L91", NULL, sizeof(Q_FRONT), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L91), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_int), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L92), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L93", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L93), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L94", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L94), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L95", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L95), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L96", NULL, sizeof(V_STATIC), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L96), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L97", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L97), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L98", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, _L98), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 14},
  /* 15 */ { MAP_OUTPUT, "section1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, section1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 17},
  /* 16 */ { MAP_OUTPUT, "section1_delay", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, section1_delay), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 16},
  /* 17 */ { MAP_OUTPUT, "v_static_section1", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__2_Convert_P27_to_DistancePr_TA_SSP, v_static_section1), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15}
};
static const MappingScope scope_3 = {
  "TA_SSP::Convert_P27_to_DistanceProfile_1st_section/ _2_Convert_P27_to_DistancePr_TA_SSP",
  scope_3_entries, 18,
};

/* TA_SSP::Convert_P27_to_DistanceProfile_loop/ _3_Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_2_entries[30] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 28},
  /* 1 */ { MAP_OUTPUT, "SpeedProfile", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, SpeedProfile), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_25, 1, 29},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::DetectSpeedIncrease 1", NULL, sizeof(outC_DetectSpeedIncrease_TA_Lib_internal), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, Context_1), NULL, &scope_2_entries[0], isActive_kcg_bool_kcg_true, &scope_4, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 1", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_5, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L44", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L44), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_25, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L45", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L45), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_22, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L46", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L46), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(Q_SCALE), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L47), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L48", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L48), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L57", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L57), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_22, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L58), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L65", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L65), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_22, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L66", NULL, sizeof(Q_FRONT), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L66), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L68", NULL, sizeof(Q_FRONT), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L68), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L70", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L70), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L71", NULL, sizeof(D_STATIC), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L71), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L84", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L84), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L85", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L85), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_int), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_int), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L87), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L88", NULL, sizeof(V_STATIC), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L88), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L89", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L89), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L90", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L90), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_25, 1, 24},
  /* 27 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L91), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L92", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L92), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_int), offsetof(outC__3_Convert_P27_to_DistancePr_TA_SSP, _L93), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27}
};
static const MappingScope scope_2 = {
  "TA_SSP::Convert_P27_to_DistanceProfile_loop/ _3_Convert_P27_to_DistancePr_TA_SSP",
  scope_2_entries, 30,
};

/* TA_SSP::Convert_P27_to_DistanceProfile/ Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_1_entries[29] = {
  /* 0 */ { MAP_INPUT, "Packet_in", NULL, sizeof(P027V1_OBU_T_TM_baseline2), (size_t)&inputs_ctx.Packet_in, &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_23, 1, 27},
  /* 1 */ { MAP_OUTPUT, "SpeedProfile", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx.SpeedProfile, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_25, 1, 23},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile_1st_section 3", NULL, sizeof(outC__2_Convert_P27_to_DistancePr_TA_SSP), (size_t)&outputs_ctx.Context_3, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile_loop 3", &iter_foldi_33, sizeof(outC__3_Convert_P27_to_DistancePr_TA_SSP), (size_t)&outputs_ctx._1_Context_3, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 4 */ { MAP_INPUT, "TrainLength", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.TrainLength, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 28},
  /* 5 */ { MAP_LOCAL, "_L62", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), (size_t)&outputs_ctx._L62, &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L63", NULL, sizeof(P027V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L63, &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_23, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L64", NULL, sizeof(array__491), (size_t)&outputs_ctx._L64, &_Type_array__491_Utils, NULL, NULL, &scope_26, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L65", NULL, sizeof(Q_SCALE), (size_t)&outputs_ctx._L65, &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L66", NULL, sizeof(SSP_section_t_TA_MRSP), (size_t)&outputs_ctx._L66, &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L67", NULL, sizeof(SSP_section_t_TA_MRSP), (size_t)&outputs_ctx._L67, &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L68", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L68, &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L69", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L69, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L70", NULL, sizeof(P027V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L70, &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_23, 1, 5},
  /* 14 */ { MAP_LOCAL, "_L71", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), (size_t)&outputs_ctx._L71, &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_22, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L72", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L72, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 16 */ { MAP_LOCAL, "_L73", NULL, sizeof(P027V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L73, &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_23, 1, 2},
  /* 17 */ { MAP_LOCAL, "_L74", NULL, sizeof(array__494), (size_t)&outputs_ctx._L74, &_Type_array__494_Utils, NULL, NULL, &scope_27, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L76", NULL, sizeof(array__497), (size_t)&outputs_ctx._L76, &_Type_array__497_Utils, NULL, NULL, &scope_28, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L77", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx._L77, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_25, 1, 16},
  /* 20 */ { MAP_LOCAL, "_L81", NULL, sizeof(array_int_33), (size_t)&outputs_ctx._L81, &_Type_array_int_33_Utils, NULL, NULL, &scope_29, 1, 17},
  /* 21 */ { MAP_LOCAL, "_L82", NULL, sizeof(array_int_33), (size_t)&outputs_ctx._L82, &_Type_array_int_33_Utils, NULL, NULL, &scope_29, 1, 18},
  /* 22 */ { MAP_LOCAL, "_L83", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx._L83, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_25, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L84", NULL, sizeof(array__473), (size_t)&outputs_ctx._L84, &_Type_array__473_Utils, NULL, NULL, &scope_22, 1, 20},
  /* 24 */ { MAP_LOCAL, "_L85", NULL, sizeof(array__503), (size_t)&outputs_ctx._L85, &_Type_array__503_Utils, NULL, NULL, &scope_30, 1, 21},
  /* 25 */ { MAP_LOCAL, "_L86", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), (size_t)&outputs_ctx._L86, &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_21, 1, 22},
  /* 26 */ { MAP_OUTPUT, "section1", NULL, sizeof(SSP_section_t_TA_MRSP), (size_t)&outputs_ctx.section1, &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 26},
  /* 27 */ { MAP_OUTPUT, "section1_delay", NULL, sizeof(SSP_section_t_TA_MRSP), (size_t)&outputs_ctx.section1_delay, &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_24, 1, 25},
  /* 28 */ { MAP_OUTPUT, "v_static_section1", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx.v_static_section1, &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_1 = {
  "TA_SSP::Convert_P27_to_DistanceProfile/ Convert_P27_to_DistancePr_TA_SSP",
  scope_1_entries, 29,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TA_SSP::Convert_P27_to_DistanceProfile", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

