/* SoftwareBGO_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "SmuMapping.h"
#include "SoftwareBGO_newtype.h"
#include "SoftwareBGO_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 5);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 1);
MAP_DECL(scope_2, 2);
MAP_DECL(scope_1, 5);
MAP_DECL(scope_0, 1);

/* DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:On:<1 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK SM1_fired_strong */, NULL}
};
static const MappingScope scope_8 = {
  "DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:On:<1",
  scope_8_entries, 1,
};

/* DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:On: */
static const MappingEntry scope_7_entries[5] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_8},
  /* 1 */ { MAP_LOCAL, "Signal1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Signal1_SM1_On, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK SM1_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_SM1_On, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK SM1_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_SM1_On, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK SM1_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (int)&outputs_ctx._L4_SM1_On, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK SM1_state_act */, NULL}
};
static const MappingScope scope_7 = {
  "DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:On:",
  scope_7_entries, 5,
};

/* DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:Off:<1 */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK SM1_fired_strong */, NULL}
};
static const MappingScope scope_6 = {
  "DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:Off:<1",
  scope_6_entries, 1,
};

/* DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:Off: */
static const MappingEntry scope_5_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_6}
};
static const MappingScope scope_5 = {
  "DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:Off:",
  scope_5_entries, 1,
};

/* DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1: */
static const MappingEntry scope_2_entries[2] = {
  /* 0 */ { MAP_STATE, "Off:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK SM1_state_act */, &scope_5},
  /* 1 */ { MAP_STATE, "On:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK SM1_state_act */, &scope_7}
};
static const MappingScope scope_2 = {
  "DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBGSM1:",
  scope_2_entries, 2,
};

/* DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBG */
static const MappingEntry scope_1_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_INPUT, "Input1", NULL, sizeof(kcg_int), (int)&inputs_ctx.Input1, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 2 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_int), (int)&outputs_ctx.Output1, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 3 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2},
  /* 4 */ { MAP_INPUT, "in", NULL, sizeof(kcg_bool), (int)&inputs_ctx.in, &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_1 = {
  "DetermineBGOrientation_LRBG::Operator7/ Operator7_DetermineBGOrientation_LRBG",
  scope_1_entries, 5,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "DetermineBGOrientation_LRBG::Operator7", NULL, 0, 0, NULL, NULL, NULL, &scope_1}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

