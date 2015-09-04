/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_50;
static const MappingIterator iter_array_50 = { "array", 50, 50, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_7, 1);
MAP_DECL(scope_6, 5);
MAP_DECL(scope_1, 18);
MAP_DECL(scope_0, 1);

/* array__144 */
static const MappingEntry scope_7_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(struct__136), 0, &_Type_struct__136_Utils, NULL, NULL, &scope_6, 1, 0}
};
static const MappingScope scope_7 = {
  "array__144",
  scope_7_entries, 1,
};

/* struct__136 */
static const MappingEntry scope_6_entries[5] = {
  /* 0 */ { MAP_FIELD, ".d_static_LRBG", NULL, sizeof(kcg_int), offsetof(struct__136, d_static_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_static_abs", NULL, sizeof(kcg_int), offsetof(struct__136, d_static_abs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_train_length_corr", NULL, sizeof(kcg_bool), offsetof(struct__136, q_train_length_corr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".v_static", NULL, sizeof(kcg_int), offsetof(struct__136, v_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__136, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "struct__136",
  scope_6_entries, 5,
};

/* TA_Lib_internal::TrainLength_Correction/ TrainLength_Correction_TA_Lib_internal */
static const MappingEntry scope_1_entries[18] = {
  /* 0 */ { MAP_INPUT, "Static_Speed_Profile", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), (size_t)&inputs_ctx.Static_Speed_Profile, &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_7, 1, 13},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L1, &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_7, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L10, &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L12, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L13, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L2, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L4, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), (size_t)&outputs_ctx._L5, &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_6, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L6, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L7, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L9, &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_OUTPUT, "corrected_distance", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx.corrected_distance, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_INPUT, "distance", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.distance, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_INPUT, "i", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.i, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_INPUT, "train_length", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.train_length, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_INPUT, "v_static", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.v_static, &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_1 = {
  "TA_Lib_internal::TrainLength_Correction/ TrainLength_Correction_TA_Lib_internal",
  scope_1_entries, 18,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TA_Lib_internal::TrainLength_Correction", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

