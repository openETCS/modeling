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
MAP_DECL(scope_1, 28);
MAP_DECL(scope_0, 1);

/* TM_lib_internal::T_Build_Metadata_Packet_ID_new/ T_Build_Metadata_Packet_I_TM_lib_internal */
static const MappingEntry scope_1_entries[28] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L10, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L11, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L12, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L13, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L14, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L15, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L16, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L17, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L18, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L19, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L2, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L20, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L21, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L22, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 15 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L23, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_PACKET), (size_t)&outputs_ctx._L3, &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 17 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 19 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L8, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 20 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L9, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 21 */ { MAP_INPUT, "counter", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.counter, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_INPUT, "id", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.id, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 23 */ { MAP_INPUT, "m_version", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.m_version, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 24 */ { MAP_INPUT, "nid_packet_defined", NULL, sizeof(NID_PACKET), (size_t)&inputs_ctx.nid_packet_defined, &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 26},
  /* 25 */ { MAP_INPUT, "nid_packet_in", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.nid_packet_in, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 26 */ { MAP_OUTPUT, "nid_packet_meta", NULL, sizeof(nid_packet_meta_TM), (size_t)&outputs_ctx.nid_packet_meta, &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 21},
  /* 27 */ { MAP_INPUT, "q_dir", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.q_dir, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_1 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID_new/ T_Build_Metadata_Packet_I_TM_lib_internal",
  scope_1_entries, 28,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_lib_internal::T_Build_Metadata_Packet_ID_new", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

