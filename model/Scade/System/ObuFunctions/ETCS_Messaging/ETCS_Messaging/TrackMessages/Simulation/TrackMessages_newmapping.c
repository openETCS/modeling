/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */

/* clock active helper functions */
static int isActive_SSM_TR_SM1_SSM_TR_BG_passed_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_BG_passed_1_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_State1_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_State1_1_SM1); }
static int isActive_SSM_TR_SM3_SM1_State1_SSM_TR_B2_1_SM3_SM1_State1 (void* pHandle) { return (*(SSM_TR_SM3_SM1_State1*)pHandle == SSM_TR_B2_1_SM3_SM1_State1); }
static int isActive_SSM_ST_SM1_SSM_st_State1_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_State1_SM1); }
static int isActive_SSM_ST_SM3_SM1_State1_SSM_st_B2_SM1_State1_SM3 (void* pHandle) { return (*(SSM_ST_SM3_SM1_State1*)pHandle == SSM_st_B2_SM1_State1_SM3); }
static int isActive_SSM_ST_SM3_SM1_State1_SSM_st_B2_passed_SM1_State1_SM3 (void* pHandle) { return (*(SSM_ST_SM3_SM1_State1*)pHandle == SSM_st_B2_passed_SM1_State1_SM3); }
static int isActive_SSM_TR_SM2_SM1_State1_SSM_TR_B1_1_SM2_SM1_State1 (void* pHandle) { return (*(SSM_TR_SM2_SM1_State1*)pHandle == SSM_TR_B1_1_SM2_SM1_State1); }
static int isActive_SSM_ST_SM2_SM1_State1_SSM_st_B1_SM1_State1_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_State1*)pHandle == SSM_st_B1_SM1_State1_SM2); }
static int isActive_SSM_ST_SM2_SM1_State1_SSM_st_B1_passed_SM1_State1_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_State1*)pHandle == SSM_st_B1_passed_SM1_State1_SM2); }
static int isActive_SSM_ST_SM1_SSM_st_BG_passed_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_BG_passed_SM1); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_25, 5);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 1);
MAP_DECL(scope_12, 11);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_6, 11);
MAP_DECL(scope_5, 4);
MAP_DECL(scope_2, 9);
MAP_DECL(scope_1, 12);
MAP_DECL(scope_0, 1);

/* struct__371 */
static const MappingEntry scope_25_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__371, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__371, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(OrBG), offsetof(struct__371, Or_BG), &_Type_OrBG_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(OrLine), offsetof(struct__371, Or_Line), &_Type_OrLine_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(struct__371, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_25 = {
  "struct__371",
  scope_25_entries, 5,
};

/* BG_passed/ BG_passedSM1:BG_passed:<1 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_BG_passed_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "BG_passed/ BG_passedSM1:BG_passed:<1",
  scope_20_entries, 1,
};

/* BG_passed/ BG_passedSM1:BG_passed: */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_BG_passed_1_SM1, &scope_20, 1, 0}
};
static const MappingScope scope_19 = {
  "BG_passed/ BG_passedSM1:BG_passed:",
  scope_19_entries, 1,
};

/* BG_passed/ BG_passedSM1:State1:<1 */
static const MappingEntry scope_18_entries[1] = {
  /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[2], isActive_SSM_TR_SM1_SSM_TR_State1_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_18 = {
  "BG_passed/ BG_passedSM1:State1:<1",
  scope_18_entries, 1,
};

/* BG_passed/ BG_passedSM1:State1:SM3:B2:<1 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[1], isActive_SSM_TR_SM3_SM1_State1_SSM_TR_B2_1_SM3_SM1_State1, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "BG_passed/ BG_passedSM1:State1:SM3:B2:<1",
  scope_16_entries, 1,
};

/* BG_passed/ BG_passedSM1:State1:SM3:B2: */
static const MappingEntry scope_15_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[1], isActive_SSM_TR_SM3_SM1_State1_SSM_TR_B2_1_SM3_SM1_State1, &scope_16, 1, 0}
};
static const MappingScope scope_15 = {
  "BG_passed/ BG_passedSM1:State1:SM3:B2:",
  scope_15_entries, 1,
};

/* BG_passed/ BG_passedSM1:State1:SM3: */
static const MappingEntry scope_12_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM3_SM1_State1), (int)&outputs_ctx.SM3_state_act_SM1_State1, &_Type_SSM_ST_SM3_SM1_State1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM3_SM1_State1), (int)&outputs_ctx.SM3_fired_strong_SM1_State1, &_Type_SSM_TR_SM3_SM1_State1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM3_SM1_State1), (int)&outputs_ctx.SM3_fired_SM1_State1, &_Type_SSM_TR_SM3_SM1_State1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(SSM_ST_SM3_SM1_State1), (int)&outputs_ctx._2_SM3_clock_SM1_State1, &_Type_SSM_ST_SM3_SM1_State1_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State1_SM1, NULL, 0, 7},
  /* 4 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(SSM_ST_SM3_SM1_State1), (int)&outputs_ctx.SM3_clock_SM1_State1, &_Type_SSM_ST_SM3_SM1_State1_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State1_SM1, NULL, 0, 8},
  /* 5 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM3_SM1_State1), (int)&outputs_ctx.SM3_state_nxt_SM1_State1, &_Type_SSM_ST_SM3_SM1_State1_Utils, NULL, NULL, NULL, 0, 2},
  /* 6 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM3_reset_act_SM1_State1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 7 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM3_reset_nxt_SM1_State1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 8 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM3_SM1_State1), (int)&outputs_ctx.SM3_state_sel_SM1_State1, &_Type_SSM_ST_SM3_SM1_State1_Utils, NULL, NULL, NULL, 0, 4},
  /* 9 */ { MAP_STATE, "B2:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM3_SM1_State1_SSM_st_B2_SM1_State1_SM3, &scope_15, 1, 9},
  /* 10 */ { MAP_STATE, "B2_passed:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM3_SM1_State1_SSM_st_B2_passed_SM1_State1_SM3, NULL, 1, 10}
};
static const MappingScope scope_12 = {
  "BG_passed/ BG_passedSM1:State1:SM3:",
  scope_12_entries, 11,
};

/* BG_passed/ BG_passedSM1:State1:SM2:B1:<1 */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_State1_SSM_TR_B1_1_SM2_SM1_State1, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "BG_passed/ BG_passedSM1:State1:SM2:B1:<1",
  scope_10_entries, 1,
};

/* BG_passed/ BG_passedSM1:State1:SM2:B1: */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_State1_SSM_TR_B1_1_SM2_SM1_State1, &scope_10, 1, 0}
};
static const MappingScope scope_9 = {
  "BG_passed/ BG_passedSM1:State1:SM2:B1:",
  scope_9_entries, 1,
};

/* BG_passed/ BG_passedSM1:State1:SM2: */
static const MappingEntry scope_6_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_SM1_State1), (int)&outputs_ctx.SM2_state_act_SM1_State1, &_Type_SSM_ST_SM2_SM1_State1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_SM1_State1), (int)&outputs_ctx.SM2_fired_strong_SM1_State1, &_Type_SSM_TR_SM2_SM1_State1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_SM1_State1), (int)&outputs_ctx.SM2_fired_SM1_State1, &_Type_SSM_TR_SM2_SM1_State1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_SM2_SM1_State1), (int)&outputs_ctx._3_SM2_clock_SM1_State1, &_Type_SSM_ST_SM2_SM1_State1_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State1_SM1, NULL, 0, 7},
  /* 4 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(SSM_ST_SM2_SM1_State1), (int)&outputs_ctx.SM2_clock_SM1_State1, &_Type_SSM_ST_SM2_SM1_State1_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State1_SM1, NULL, 0, 8},
  /* 5 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_SM1_State1), (int)&outputs_ctx.SM2_state_nxt_SM1_State1, &_Type_SSM_ST_SM2_SM1_State1_Utils, NULL, NULL, NULL, 0, 2},
  /* 6 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM2_reset_act_SM1_State1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 7 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM2_reset_nxt_SM1_State1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 8 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_SM1_State1), (int)&outputs_ctx.SM2_state_sel_SM1_State1, &_Type_SSM_ST_SM2_SM1_State1_Utils, NULL, NULL, NULL, 0, 4},
  /* 9 */ { MAP_STATE, "B1:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_State1_SSM_st_B1_SM1_State1_SM2, &scope_9, 1, 9},
  /* 10 */ { MAP_STATE, "B1_passed:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_State1_SSM_st_B1_passed_SM1_State1_SM2, NULL, 1, 10}
};
static const MappingScope scope_6 = {
  "BG_passed/ BG_passedSM1:State1:SM2:",
  scope_6_entries, 11,
};

/* BG_passed/ BG_passedSM1:State1: */
static const MappingEntry scope_5_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[2], isActive_SSM_TR_SM1_SSM_TR_State1_1_SM1, &scope_18, 1, 3},
  /* 1 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), (int)&outputs_ctx.State1_weakb_clock_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State1_SM1, NULL, 0, 2},
  /* 2 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 0},
  /* 3 */ { MAP_AUTOMATON, "SM3:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 1}
};
static const MappingScope scope_5 = {
  "BG_passed/ BG_passedSM1:State1:",
  scope_5_entries, 4,
};

/* BG_passed/ BG_passedSM1: */
static const MappingEntry scope_2_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (int)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (int)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "BG_passed:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_BG_passed_SM1, &scope_19, 1, 8},
  /* 8 */ { MAP_STATE, "State1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State1_SM1, &scope_5, 1, 7}
};
static const MappingScope scope_2 = {
  "BG_passed/ BG_passedSM1:",
  scope_2_entries, 9,
};

/* BG_passed/ BG_passed */
static const MappingEntry scope_1_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State1_SM1, NULL, 0, 1},
  /* 2 */ { MAP_INPUT, "B1passed", NULL, sizeof(kcg_bool), (int)&inputs_ctx.B1passed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_INPUT, "B2passed", NULL, sizeof(kcg_bool), (int)&inputs_ctx.B2passed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_INPUT, "BG", NULL, sizeof(BaliseGroupData), (int)&inputs_ctx.BG, &_Type_BaliseGroupData_Utils, NULL, NULL, &scope_25, 1, 9},
  /* 5 */ { MAP_OUTPUT, "BG_passed", NULL, sizeof(kcg_bool), (int)&outputs_ctx.BG_passed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_OUTPUT, "LRBG", NULL, sizeof(kcg_int), (int)&outputs_ctx.LRBG, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(BaliseGroupData), (int)&outputs_ctx._L1, &_Type_BaliseGroupData_Utils, NULL, NULL, &scope_25, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (int)&outputs_ctx._L4, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_SIGNAL, "passed", NULL, sizeof(kcg_bool), (int)&outputs_ctx.passed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_1 = {
  "BG_passed/ BG_passed",
  scope_1_entries, 12,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "BG_passed", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

