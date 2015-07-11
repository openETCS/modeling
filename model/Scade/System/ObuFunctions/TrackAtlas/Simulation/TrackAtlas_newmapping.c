/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_33;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_foldi_33;
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};
static const MappingIterator iter_foldi_33 = { "foldi", 33, 33, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_5, 17);
MAP_DECL(scope_4, 5);
MAP_DECL(scope_3, 10);
MAP_DECL(scope_2, 13);
MAP_DECL(scope_1, 11);
MAP_DECL(scope_0, 1);

/* array_int_33 */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "array_int_33",
  scope_13_entries, 1,
};

/* array__254 */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__251), 0, &_Type_array__251_Utils, NULL, NULL, &scope_11, 1, 0}
};
static const MappingScope scope_12 = {
  "array__254",
  scope_12_entries, 1,
};

/* array__251 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__246), 0, &_Type_struct__246_Utils, NULL, NULL, &scope_10, 1, 0}
};
static const MappingScope scope_11 = {
  "array__251",
  scope_11_entries, 1,
};

/* struct__246 */
static const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_FIELD, ".speed", NULL, sizeof(kcg_int), offsetof(struct__246, speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__246, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "struct__246",
  scope_10_entries, 2,
};

/* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop/ FindFirstRelevantForNewLR_TA_Lib_internal */
static const MappingEntry scope_5_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L169), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L170", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L170), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L172", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L172), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_10, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L173", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L173), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L174), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L175", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L175), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L177", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L177), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L178", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L178), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, _L182), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLR_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_5 = {
  "TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop/ FindFirstRelevantForNewLR_TA_Lib_internal",
  scope_5_entries, 17,
};

/* TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal */
static const MappingEntry scope_4_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, Out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_NormalizePos_TA_Lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_4 = {
  "TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal",
  scope_4_entries, 5,
};

/* TA_Lib_internal::FindFirstRelevantForNewLRBG/ FindFirstRelevantForNewLRBG_TA_Lib_internal */
static const MappingEntry scope_3_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop 3", &iter_foldwi_33, sizeof(outC_FindFirstRelevantForNewLR_TA_Lib_internal), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, Context_3), NULL, NULL, NULL, &scope_5, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L169", NULL, sizeof(array__254), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L169), &_Type_array__254_Utils, NULL, NULL, &scope_12, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_13, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L93", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L93), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_3 = {
  "TA_Lib_internal::FindFirstRelevantForNewLRBG/ FindFirstRelevantForNewLRBG_TA_Lib_internal",
  scope_3_entries, 10,
};

/* TA_Lib_internal::MoveSectionsToNewLRBG_Loop/ MoveSectionsToNewLRBG_Loop_TA_Lib_internal */
static const MappingEntry scope_2_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, ProfileOut), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 12},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::NormalizePos 2", NULL, sizeof(outC_NormalizePos_TA_Lib_internal), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, Context_2), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L6), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_10, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L7), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L8), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal, _L9), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_10, 1, 9}
};
static const MappingScope scope_2 = {
  "TA_Lib_internal::MoveSectionsToNewLRBG_Loop/ MoveSectionsToNewLRBG_Loop_TA_Lib_internal",
  scope_2_entries, 13,
};

/* TA_Lib_internal::MoveSectionsToNewLRBG/ MoveSectionsToNewLRBG_TA_Lib_internal */
static const MappingEntry scope_1_entries[11] = {
  /* 0 */ { MAP_INPUT, "Distance_2LRBGs", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.Distance_2LRBGs, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_INPUT, "ProfileIn", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&inputs_ctx.ProfileIn, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 9},
  /* 2 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx.ProfileOut, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 8},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantForNewLRBG 1", NULL, sizeof(outC_FindFirstRelevantForNewLRBG_TA_Lib_internal), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSectionsToNewLRBG_Loop 1", &iter_foldi_33, sizeof(outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx._L2, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx._L4, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_11, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), (size_t)&outputs_ctx._L5, &_Type_array_int_33_Utils, NULL, NULL, &scope_13, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_33), (size_t)&outputs_ctx._L6, &_Type_array_int_33_Utils, NULL, NULL, &scope_13, 1, 7}
};
static const MappingScope scope_1 = {
  "TA_Lib_internal::MoveSectionsToNewLRBG/ MoveSectionsToNewLRBG_TA_Lib_internal",
  scope_1_entries, 11,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TA_Lib_internal::MoveSectionsToNewLRBG", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

