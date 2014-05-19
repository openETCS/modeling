/* prova_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "prova_newtype.h"
#include "prova_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_1, 8);
MAP_DECL(scope_0, 1);

/* ciao/ ciao */
static const MappingEntry scope_1_entries[8] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_INPUT, "Input1", NULL, sizeof(kcg_int), (int)&inputs_ctx.Input1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_INPUT, "Input2", NULL, sizeof(kcg_int), (int)&inputs_ctx.Input2, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_int), (int)&outputs_ctx.Output1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_1 = {
  "ciao/ ciao",
  scope_1_entries, 8,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "ciao", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

