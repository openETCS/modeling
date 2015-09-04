/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_6, 4);
MAP_DECL(scope_1, 14);
MAP_DECL(scope_0, 1);

/* struct__129 */
static const MappingEntry scope_6_entries[4] = {
  /* 0 */ { MAP_FIELD, ".Loc_Abs", NULL, sizeof(kcg_int), offsetof(struct__129, Loc_Abs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__129, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".MRS", NULL, sizeof(kcg_int), offsetof(struct__129, MRS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__129, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "struct__129",
  scope_6_entries, 4,
};

/* TA_Export::MRSP_to_MRSP_to_DMI/ MRSP_to_MRSP_to_DMI_TA_Export */
static const MappingEntry scope_1_entries[14] = {
  /* 0 */ { MAP_INPUT, "MRSP_in", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), (size_t)&inputs_ctx.MRSP_in, &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_6, 1, 13},
  /* 1 */ { MAP_OUTPUT, "MRSP_to_DMI", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), (size_t)&outputs_ctx.MRSP_to_DMI, &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_6, 1, 11},
  /* 2 */ { MAP_LOCAL, "_L420", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L420, &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L429", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L429, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L430", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L430, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L431", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L431, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L432", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L432, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L433", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L433, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L434", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), (size_t)&outputs_ctx._L434, &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_6, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L435", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), (size_t)&outputs_ctx._L435, &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_6, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L444", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L444, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), (size_t)&outputs_ctx._L5, &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_6, 1, 0},
  /* 12 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.cont, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_INPUT, "i", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.i, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_1 = {
  "TA_Export::MRSP_to_MRSP_to_DMI/ MRSP_to_MRSP_to_DMI_TA_Export",
  scope_1_entries, 14,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TA_Export::MRSP_to_MRSP_to_DMI", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

