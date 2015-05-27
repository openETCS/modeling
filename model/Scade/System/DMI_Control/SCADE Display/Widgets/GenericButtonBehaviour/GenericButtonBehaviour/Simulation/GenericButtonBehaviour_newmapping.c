/* GenericButtonBehaviour_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "GenericButtonBehaviour_newtype.h"
#include "GenericButtonBehaviour_newmapping.h"

/* iterators */

/* clock active helper functions */
static int isActive_SSM_TR_SM1_SSM_TR_Pressed_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_Pressed_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_Pressed_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_Pressed_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_Released_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_Released_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_Released_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_Released_SM1); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 2);
MAP_DECL(scope_2, 9);
MAP_DECL(scope_1, 5);
MAP_DECL(scope_0, 1);

/* ButtonBehaviour/ ButtonBehaviourSM1:Pressed:<1 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_Pressed_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_8 = {
  "ButtonBehaviour/ ButtonBehaviourSM1:Pressed:<1",
  scope_8_entries, 1,
};

/* ButtonBehaviour/ ButtonBehaviourSM1:Pressed: */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_Pressed_1_SM1, &scope_8, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_SM1_Pressed, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Pressed_SM1, NULL, 1, 0}
};
static const MappingScope scope_7 = {
  "ButtonBehaviour/ ButtonBehaviourSM1:Pressed:",
  scope_7_entries, 2,
};

/* ButtonBehaviour/ ButtonBehaviourSM1:Released:<1 */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_Released_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "ButtonBehaviour/ ButtonBehaviourSM1:Released:<1",
  scope_6_entries, 1,
};

/* ButtonBehaviour/ ButtonBehaviourSM1:Released: */
static const MappingEntry scope_5_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_Released_1_SM1, &scope_6, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_SM1_Released, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Released_SM1, NULL, 1, 0}
};
static const MappingScope scope_5 = {
  "ButtonBehaviour/ ButtonBehaviourSM1:Released:",
  scope_5_entries, 2,
};

/* ButtonBehaviour/ ButtonBehaviourSM1: */
static const MappingEntry scope_2_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (int)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (int)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "Pressed:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Pressed_SM1, &scope_7, 1, 8},
  /* 8 */ { MAP_STATE, "Released:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Released_SM1, &scope_5, 1, 7}
};
static const MappingScope scope_2 = {
  "ButtonBehaviour/ ButtonBehaviourSM1:",
  scope_2_entries, 9,
};

/* ButtonBehaviour/ ButtonBehaviour */
static const MappingEntry scope_1_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 1},
  /* 2 */ { MAP_OUTPUT, "isPressed", NULL, sizeof(kcg_bool), (int)&outputs_ctx.isPressed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_INPUT, "pressed", NULL, sizeof(kcg_bool), (int)&inputs_ctx.pressed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_INPUT, "released", NULL, sizeof(kcg_bool), (int)&inputs_ctx.released, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_1 = {
  "ButtonBehaviour/ ButtonBehaviour",
  scope_1_entries, 5,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "ButtonBehaviour", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

