/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_50;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_foldi_33;
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_50 = { "array", 50, 50, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};
static const MappingIterator iter_foldi_33 = { "foldi", 33, 33, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 5);
MAP_DECL(scope_6, 17);
MAP_DECL(scope_5, 5);
MAP_DECL(scope_4, 10);
MAP_DECL(scope_3, 13);
MAP_DECL(scope_2, 20);
MAP_DECL(scope_1, 9);
MAP_DECL(scope_0, 1);

/* array_int_33 */
static const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_14 = {
  "array_int_33",
  scope_14_entries, 1,
};

/* array__307 */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__304), 0, &_Type_array__304_Utils, NULL, NULL, &scope_12, 1, 0}
};
static const MappingScope scope_13 = {
  "array__307",
  scope_13_entries, 1,
};

/* array__304 */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(struct__296), 0, &_Type_struct__296_Utils, NULL, NULL, &scope_11, 1, 0}
};
static const MappingScope scope_12 = {
  "array__304",
  scope_12_entries, 1,
};

/* struct__296 */
static const MappingEntry scope_11_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Gradient", NULL, sizeof(kcg_int), offsetof(struct__296, Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_Gradient", NULL, sizeof(kcg_int), offsetof(struct__296, L_Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".Loc_Absolute", NULL, sizeof(kcg_int), offsetof(struct__296, Loc_Absolute), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__296, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__296, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "struct__296",
  scope_11_entries, 5,
};

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop/ FindFirstRelevantGPForNew_TA_Lib_internal */
static const MappingEntry scope_6_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L169), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L170", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L170), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L172", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L172), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_11, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L173", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L173), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L174), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L175", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L175), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L177", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L177), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L178", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L178), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L182), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_6 = {
  "TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop/ FindFirstRelevantGPForNew_TA_Lib_internal",
  scope_6_entries, 17,
};

/* TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal */
static const MappingEntry scope_5_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, Out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_NormalizePos_TA_Lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_5 = {
  "TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal",
  scope_5_entries, 5,
};

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG/ FindFirstRelevantGPForNewLRBG_TA_Lib_internal */
static const MappingEntry scope_4_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop 1", &iter_foldwi_33, sizeof(outC_FindFirstRelevantGPForNew_TA_Lib_internal), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_6, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L169", NULL, sizeof(array__307), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L169), &_Type_array__307_Utils, NULL, NULL, &scope_13, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_14, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L93", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L93), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_4 = {
  "TA_Lib_internal::FindFirstRelevantGPForNewLRBG/ FindFirstRelevantGPForNewLRBG_TA_Lib_internal",
  scope_4_entries, 10,
};

/* TA_Lib_internal::Trunc_GP_at_BG_Loop/ Trunc_GP_at_BG_Loop_TA_Lib_internal */
static const MappingEntry scope_3_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, ProfileOut), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 12},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::NormalizePos 1", NULL, sizeof(outC_NormalizePos_TA_Lib_internal), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_5, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L6), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_11, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L7), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L8), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal, _L9), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_11, 1, 9}
};
static const MappingScope scope_3 = {
  "TA_Lib_internal::Trunc_GP_at_BG_Loop/ Trunc_GP_at_BG_Loop_TA_Lib_internal",
  scope_3_entries, 13,
};

/* TA_Lib_internal::Trunc_GP_at_BG/ Trunc_GP_at_BG_TA_Lib_internal */
static const MappingEntry scope_2_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, ProfileOut), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 19},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantGPForNewLRBG 1", NULL, sizeof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_4, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Trunc_GP_at_BG_Loop 1", &iter_foldi_33, sizeof(outC_Trunc_GP_at_BG_Loop_TA_Lib_internal), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_3, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L15), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L4), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 5},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_14, 1, 6},
  /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_33), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L6), &_Type_array_int_33_Utils, NULL, NULL, &scope_14, 1, 7},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L7), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 8},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L8), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_11, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Trunc_GP_at_BG_TA_Lib_internal, _L9), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_2 = {
  "TA_Lib_internal::Trunc_GP_at_BG/ Trunc_GP_at_BG_TA_Lib_internal",
  scope_2_entries, 20,
};

/* TA_Gradient::Calc_Distance_from_LRBG/ Calc_Distance_from_LRBG_TA_Gradient */
static const MappingEntry scope_1_entries[9] = {
  /* 0 */ { MAP_INPUT, "ProfileIn", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&inputs_ctx.ProfileIn, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 7},
  /* 1 */ { MAP_OUTPUT, "ProfileLoopOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx.ProfileLoopOut, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 6},
  /* 2 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx.ProfileOut, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 5},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::Trunc_GP_at_BG 1", NULL, sizeof(outC_Trunc_GP_at_BG_TA_Lib_internal), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L1, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L2, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L3, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_12, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_INPUT, "pos_LRBG", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.pos_LRBG, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_1 = {
  "TA_Gradient::Calc_Distance_from_LRBG/ Calc_Distance_from_LRBG_TA_Gradient",
  scope_1_entries, 9,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TA_Gradient::Calc_Distance_from_LRBG", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

