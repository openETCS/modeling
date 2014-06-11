/* DetermineBG_Orientation_and_LRBG_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "DetermineBG_Orientation_and_LRBG_newtype.h"
#include "DetermineBG_Orientation_and_LRBG_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_1, 5);
MAP_DECL(scope_0, 1);

/* DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBG */
static const MappingEntry scope_1_entries[5] = {
  /* 0 */ { MAP_INPUT, "Input1", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Input1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Output1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_1 = {
  "DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBG",
  scope_1_entries, 5,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "DetermineBGOrientation_LRBG::Operator7", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

