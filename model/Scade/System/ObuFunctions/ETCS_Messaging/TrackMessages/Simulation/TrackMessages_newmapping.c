/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_3, 6);
MAP_DECL(scope_2, 6);
MAP_DECL(scope_1, 12);
MAP_DECL(scope_0, 1);

/* TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions */
static const MappingEntry scope_3_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_3 = {
  "TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions",
  scope_3_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_2_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_2 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_2_entries, 6,
};

/* TM_conversions::DECODE_NID_LRBG/ DECODE_NID_LRBG_TM_conversions */
static const MappingEntry scope_1_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_BG 1", NULL, sizeof(outC_CAST_Int_to_NID_BG_TM_conversions), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 1", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), (size_t)&outputs_ctx._L1, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(NID_C), (size_t)&outputs_ctx._L2, &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_BG), (size_t)&outputs_ctx._L3, &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L4, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L5, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(NID_LRBG), (size_t)&outputs_ctx._L6, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L7, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), (size_t)&outputs_ctx.nid_bg, &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), (size_t)&outputs_ctx.nid_c, &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_INPUT, "nid_lrbg", NULL, sizeof(NID_LRBG), (size_t)&inputs_ctx.nid_lrbg, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 11}
};
static const MappingScope scope_1 = {
  "TM_conversions::DECODE_NID_LRBG/ DECODE_NID_LRBG_TM_conversions",
  scope_1_entries, 12,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_conversions::DECODE_NID_LRBG", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

