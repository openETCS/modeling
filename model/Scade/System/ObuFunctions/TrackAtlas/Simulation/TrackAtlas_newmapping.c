/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_33;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_2, 17);
MAP_DECL(scope_1, 13);
MAP_DECL(scope_0, 1);

/* array_int_33 */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "array_int_33",
  scope_10_entries, 1,
};

/* array__184 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__181), 0, &_Type_array__181_Utils, NULL, NULL, &scope_8, 1, 0}
};
static const MappingScope scope_9 = {
  "array__184",
  scope_9_entries, 1,
};

/* array__181 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__176), 0, &_Type_struct__176_Utils, NULL, NULL, &scope_7, 1, 0}
};
static const MappingScope scope_8 = {
  "array__181",
  scope_8_entries, 1,
};

/* struct__176 */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_FIELD, ".speed", NULL, sizeof(kcg_int), offsetof(struct__176, speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__176, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_7 = {
  "struct__176",
  scope_7_entries, 2,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP/ FindStartOfNewSpeedProfil_TA_Lib_internal */
static const MappingEntry scope_2_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_STATIC), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L1), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_8, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L4), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_7, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L5), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_2 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP/ FindStartOfNewSpeedProfil_TA_Lib_internal",
  scope_2_entries, 17,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfile/ FindStartOfNewSpeedProfile_TA_Lib_internal */
static const MappingEntry scope_1_entries[13] = {
  /* 0 */ { MAP_INPUT, "New_Profile", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&inputs_ctx.New_Profile, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_8, 1, 12},
  /* 1 */ { MAP_INPUT, "Profile_in", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&inputs_ctx.Profile_in, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_8, 1, 11},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP 1", &iter_foldwi_33, sizeof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx._L1, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_8, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L100, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L167", NULL, sizeof(array_int_33), (size_t)&outputs_ctx._L167, &_Type_array_int_33_Utils, NULL, NULL, &scope_10, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_section_t_TA_MRSP), (size_t)&outputs_ctx._L2, &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L93", NULL, sizeof(SSP_cat_t_TA_MRSP), (size_t)&outputs_ctx._L93, &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_8, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L94, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L96, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L98", NULL, sizeof(array__184), (size_t)&outputs_ctx._L98, &_Type_array__184_Utils, NULL, NULL, &scope_9, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L99, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.relevant_section, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_1 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfile/ FindStartOfNewSpeedProfile_TA_Lib_internal",
  scope_1_entries, 13,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TA_Lib_internal::FindStartOfNewSpeedProfile", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

