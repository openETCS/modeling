/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_1, 12);
MAP_DECL(scope_0, 1);

/* TOOLS_Int_To_Q_DIR/ TOOLS_Int_To_Q_DIR */
static const MappingEntry scope_1_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "QDIR", NULL, sizeof(Q_DIR), (int)&outputs_ctx.QDIR, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_INPUT, "Q_DIR_as_sInt", NULL, sizeof(kcg_int), (int)&inputs_ctx.Q_DIR_as_sInt, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L10, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L11, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L3, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L6, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L8, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), (int)&outputs_ctx._L9, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_1 = {
  "TOOLS_Int_To_Q_DIR/ TOOLS_Int_To_Q_DIR",
  scope_1_entries, 12,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TOOLS_Int_To_Q_DIR", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

