/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_88;
static const MappingIterator iter_foldwi_88;
static const MappingIterator iter_array_88 = { "array", 88, 88, NULL};
static const MappingIterator iter_foldwi_88 = { "foldwi", 88, 88, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_2, 10);
MAP_DECL(scope_1, 9);
MAP_DECL(scope_0, 1);

/* array__153 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_88, sizeof(struct__147), 0, &_Type_struct__147_Utils, NULL, NULL, &scope_7, 1, 0}
};
static const MappingScope scope_8 = {
  "array__153",
  scope_8_entries, 1,
};

/* struct__147 */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_FIELD, ".Category_Index", NULL, sizeof(kcg_int), offsetof(struct__147, Category_Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Loc", NULL, sizeof(kcg_int), offsetof(struct__147, Loc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Pos_Index", NULL, sizeof(kcg_int), offsetof(struct__147, Pos_Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_7 = {
  "struct__147",
  scope_7_entries, 3,
};

/* Determine_LengthOfTargetList_LOOP/ Determine_LengthOfTargetL */
static const MappingEntry scope_2_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Determine_LengthOfTargetL, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(SSP_target_t), offsetof(outC_Determine_LengthOfTargetL, _L10), &_Type_SSP_target_t_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Determine_LengthOfTargetL, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Determine_LengthOfTargetL, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_Determine_LengthOfTargetL, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Determine_LengthOfTargetL, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Determine_LengthOfTargetL, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_indexed_matrix_element), offsetof(outC_Determine_LengthOfTargetL, _L3), &_Type_SSP_t_indexed_matrix_element_Utils, NULL, NULL, &scope_7, 1, 2},
  /* 8 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_Determine_LengthOfTargetL, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_OUTPUT, "length", NULL, sizeof(kcg_int), offsetof(outC_Determine_LengthOfTargetL, length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_2 = {
  "Determine_LengthOfTargetList_LOOP/ Determine_LengthOfTargetL",
  scope_2_entries, 10,
};

/* Determine_LengthOfTargetList/ Determine_LengthOfTargetList */
static const MappingEntry scope_1_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "Determine_LengthOfTargetList_LOOP 1", &iter_foldwi_88, sizeof(outC_Determine_LengthOfTargetL), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_INPUT, "SSP_t_list_in", NULL, sizeof(SSP_t_list_t), (int)&inputs_ctx.SSP_t_list_in, &_Type_SSP_t_list_t_Utils, NULL, NULL, &scope_8, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L179", NULL, sizeof(SSP_t_list_t), (int)&outputs_ctx._L179, &_Type_SSP_t_list_t_Utils, NULL, NULL, &scope_8, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_int), (int)&outputs_ctx._L180, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L181, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_int), (int)&outputs_ctx._L182, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L183", NULL, sizeof(kcg_int), (int)&outputs_ctx._L183, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_list_t), (int)&outputs_ctx._L2, &_Type_SSP_t_list_t_Utils, NULL, NULL, &scope_8, 1, 1},
  /* 8 */ { MAP_OUTPUT, "length", NULL, sizeof(kcg_int), (int)&outputs_ctx.length, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_1 = {
  "Determine_LengthOfTargetList/ Determine_LengthOfTargetList",
  scope_1_entries, 9,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Determine_LengthOfTargetList", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

