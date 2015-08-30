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
MAP_DECL(scope_1, 13);
MAP_DECL(scope_0, 1);

/* digital::FlipFlopSet/ FlipFlopSet_digital */
static const MappingEntry scope_1_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_OUTPUT, "FFS_Output", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.FFS_Output, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_INPUT, "Init", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 3 */ { MAP_INPUT, "Reset", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Reset, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_INPUT, "Set", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Set, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L10, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_1 = {
  "digital::FlipFlopSet/ FlipFlopSet_digital",
  scope_1_entries, 13,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "digital::FlipFlopSet", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

