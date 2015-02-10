/* ETCS_Messaging_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "ETCS_Messaging_newtype.h"
#include "ETCS_Messaging_newmapping.h"

/* iterators */
static const MappingIterator iter_array_20;
static const MappingIterator iter_array_20 = { "array", 20, 20, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_6, 1);
MAP_DECL(scope_1, 4);
MAP_DECL(scope_0, 1);

/* array_int_20 */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "array_int_20",
  scope_6_entries, 1,
};

/* Decode_Packets::Decode_Packet_000/ Decode_Packet_000_Decode_Packets */
static const MappingEntry scope_1_entries[4] = {
  /* 0 */ { MAP_INPUT, "PacketInfoIn", NULL, sizeof(Information_T_BM_Types_Flat), (int)&inputs_ctx.PacketInfoIn, &_Type_Information_T_BM_Types_Flat_Utils, NULL, NULL, &scope_6, 1, 3},
  /* 1 */ { MAP_OUTPUT, "VBCMK", NULL, sizeof(NID_VBCMK_T_Types_Notfound), (int)&outputs_ctx.VBCMK, &_Type_NID_VBCMK_T_Types_Notfound_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L41", NULL, sizeof(Information_T_BM_Types_Flat), (int)&outputs_ctx._L41, &_Type_Information_T_BM_Types_Flat_Utils, NULL, NULL, &scope_6, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L43", NULL, sizeof(InfoElement_T_BM_Types_Flat), (int)&outputs_ctx._L43, &_Type_InfoElement_T_BM_Types_Flat_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_1 = {
  "Decode_Packets::Decode_Packet_000/ Decode_Packet_000_Decode_Packets",
  scope_1_entries, 4,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Decode_Packets::Decode_Packet_000", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

