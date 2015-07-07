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
MAP_DECL(scope_1, 14);
MAP_DECL(scope_0, 1);

/* TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal */
static const MappingEntry scope_1_entries[14] = {
  /* 0 */ { MAP_INPUT, "Metadata_in", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.Metadata_in, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L10, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L11, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L4, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L5, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L6, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L7, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L8, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L9, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_OUTPUT, "id", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.id, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_OUTPUT, "m_version", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.m_version, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.nid_packet, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_1 = {
  "TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal",
  scope_1_entries, 14,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_lib_internal::T_Decode_metadata_new", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

