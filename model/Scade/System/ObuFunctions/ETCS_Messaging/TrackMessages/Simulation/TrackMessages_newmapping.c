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
MAP_DECL(scope_1, 5);
MAP_DECL(scope_0, 1);

/* TM_lib_internal::T_Extract_NID_packet_from_Meta/ T_Extract_NID_packet_from_TM_lib_internal */
static const MappingEntry scope_1_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "nid_packet_int", NULL, sizeof(kcg_int), (int)&outputs_ctx.nid_packet_int, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_INPUT, "nid_packet_meta", NULL, sizeof(kcg_int), (int)&inputs_ctx.nid_packet_meta, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_1 = {
  "TM_lib_internal::T_Extract_NID_packet_from_Meta/ T_Extract_NID_packet_from_TM_lib_internal",
  scope_1_entries, 5,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_lib_internal::T_Extract_NID_packet_from_Meta", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

