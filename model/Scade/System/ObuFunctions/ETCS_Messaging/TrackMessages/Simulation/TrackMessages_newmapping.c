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
MAP_DECL(scope_1, 15);
MAP_DECL(scope_0, 1);

/* INFRA_Balise_Localisation/ INFRA_Balise_Localisation */
static const MappingEntry scope_1_entries[15] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_INPUT, "Loc", NULL, sizeof(kcg_int), (int)&inputs_ctx.Loc, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 2 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), (int)&outputs_ctx.TrainPass, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 3 */ { MAP_INPUT, "TrainPos", NULL, sizeof(kcg_real), (int)&inputs_ctx.TrainPos, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), (int)&outputs_ctx._L10, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L14, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx._L2, &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 0},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), (int)&outputs_ctx._L7, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), (int)&outputs_ctx._L8, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), (int)&outputs_ctx._L9, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_INPUT, "accuracy", NULL, sizeof(kcg_int), (int)&inputs_ctx.accuracy, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14}
};
static const MappingScope scope_1 = {
  "INFRA_Balise_Localisation/ INFRA_Balise_Localisation",
  scope_1_entries, 15,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "INFRA_Balise_Localisation", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

