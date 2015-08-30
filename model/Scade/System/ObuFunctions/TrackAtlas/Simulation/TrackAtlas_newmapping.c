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
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 5);
MAP_DECL(scope_4, 17);
MAP_DECL(scope_3, 11);
MAP_DECL(scope_2, 9);
MAP_DECL(scope_1, 13);
MAP_DECL(scope_0, 1);

/* array_int_33 */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_12 = {
  "array_int_33",
  scope_12_entries, 1,
};

/* array__248 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__245), 0, &_Type_array__245_Utils, NULL, NULL, &scope_10, 1, 0}
};
static const MappingScope scope_11 = {
  "array__248",
  scope_11_entries, 1,
};

/* array__245 */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(struct__237), 0, &_Type_struct__237_Utils, NULL, NULL, &scope_9, 1, 0}
};
static const MappingScope scope_10 = {
  "array__245",
  scope_10_entries, 1,
};

/* struct__237 */
static const MappingEntry scope_9_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Gradient", NULL, sizeof(kcg_int), offsetof(struct__237, Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_Gradient", NULL, sizeof(kcg_int), offsetof(struct__237, L_Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".Loc_Absolute", NULL, sizeof(kcg_int), offsetof(struct__237, Loc_Absolute), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__237, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__237, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "struct__237",
  scope_9_entries, 5,
};

/* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP/ FindStartOfNewGradientPro_TA_Lib_internal */
static const MappingEntry scope_4_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L4), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_9, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L5), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_4 = {
  "TA_Lib_internal::FindStartOfNewGradientProfile_LOOP/ FindStartOfNewGradientPro_TA_Lib_internal",
  scope_4_entries, 17,
};

/* TA_Lib_internal::FindStartOfNewGradientProfile/ FindStartOfNewGradientProfile_TA_Lib_internal */
static const MappingEntry scope_3_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewGradientProfile_LOOP 1", &iter_foldwi_33, sizeof(outC_FindStartOfNewGradientPro_TA_Lib_internal), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L198", NULL, sizeof(array_int_33), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L198), &_Type_array_int_33_Utils, NULL, NULL, &scope_12, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L2), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L93", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L93), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L98", NULL, sizeof(array__248), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L98), &_Type_array__248_Utils, NULL, NULL, &scope_11, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_3 = {
  "TA_Lib_internal::FindStartOfNewGradientProfile/ FindStartOfNewGradientProfile_TA_Lib_internal",
  scope_3_entries, 11,
};

/* TA_Lib_internal::Update_GP_per_LRBG_loop/ Update_GP_per_LRBG_loop_TA_Lib_internal */
static const MappingEntry scope_2_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, GradientProfile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L15), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_9, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L19), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L20), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L6), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_2 = {
  "TA_Lib_internal::Update_GP_per_LRBG_loop/ Update_GP_per_LRBG_loop_TA_Lib_internal",
  scope_2_entries, 9,
};

/* TA_Lib_internal::Update_GP_per_LRBG/ Update_GP_per_LRBG_TA_Lib_internal */
static const MappingEntry scope_1_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tmp, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 9},
  /* 1 */ { MAP_OUTPUT, "GradientdProfile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx.GradientdProfile_out, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 10},
  /* 2 */ { MAP_INPUT, "Last_GradientProfile_in", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&inputs_ctx.Last_GradientProfile_in, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 12},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewGradientProfile 1", NULL, sizeof(outC_FindStartOfNewGradientProfile_TA_Lib_internal), (size_t)&outputs_ctx.Context_1, NULL, &scope_1_entries[0], isActive_kcg_bool_kcg_true, &scope_3, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG_loop 1", &iter_foldi_33, sizeof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L14, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L148", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L148, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L45", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L45, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L47", NULL, sizeof(array__248), (size_t)&outputs_ctx._L47, &_Type_array__248_Utils, NULL, NULL, &scope_11, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L5, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int_33), (size_t)&outputs_ctx._L9, &_Type_array_int_33_Utils, NULL, NULL, &scope_12, 1, 4},
  /* 12 */ { MAP_INPUT, "new_GP", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&inputs_ctx.new_GP, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_10, 1, 11}
};
static const MappingScope scope_1 = {
  "TA_Lib_internal::Update_GP_per_LRBG/ Update_GP_per_LRBG_TA_Lib_internal",
  scope_1_entries, 13,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TA_Lib_internal::Update_GP_per_LRBG", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

