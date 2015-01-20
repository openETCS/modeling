/* Test_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "Test_newtype.h"
#include "Test_newmapping.h"

/* iterators */
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_12;
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_12 = { "array", 12, 12, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }
static int isActive_SSM_TR_SM1_SSM_TR_InvisibleState_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_InvisibleState_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_InvisibleState_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_InvisibleState_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_VisibleState_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_VisibleState_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_VisibleState_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_VisibleState_SM1); }
static int isActive_SSM_TR_ShowDistanceToTarget_SSM_TR_InvisibleState_1_ShowDistanceToTarget (void* pHandle) { return (*(SSM_TR_ShowDistanceToTarget*)pHandle == SSM_TR_InvisibleState_1_ShowDistanceToTarget); }
static int isActive_SSM_ST_ShowDistanceToTarget_SSM_st_InvisibleState_ShowDistanceToTarget (void* pHandle) { return (*(SSM_ST_ShowDistanceToTarget*)pHandle == SSM_st_InvisibleState_ShowDistanceToTarget); }
static int isActive_SSM_TR_ShowDistanceToTarget_SSM_TR_VisibleState_1_ShowDistanceToTarget (void* pHandle) { return (*(SSM_TR_ShowDistanceToTarget*)pHandle == SSM_TR_VisibleState_1_ShowDistanceToTarget); }
static int isActive_SSM_ST_ShowDistanceToTarget_SSM_st_VisibleState_ShowDistanceToTarget (void* pHandle) { return (*(SSM_ST_ShowDistanceToTarget*)pHandle == SSM_st_VisibleState_ShowDistanceToTarget); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_46, 1);
MAP_DECL(scope_45, 1);
MAP_DECL(scope_44, 1);
MAP_DECL(scope_39, 1);
MAP_DECL(scope_38, 5);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 8);
MAP_DECL(scope_35, 3);
MAP_DECL(scope_34, 3);
MAP_DECL(scope_33, 3);
MAP_DECL(scope_32, 2);
MAP_DECL(scope_31, 18);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 1);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 3);
MAP_DECL(scope_26, 3);
MAP_DECL(scope_25, 9);
MAP_DECL(scope_24, 34);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 1);
MAP_DECL(scope_20, 2);
MAP_DECL(scope_17, 9);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 2);
MAP_DECL(scope_10, 9);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 1);
MAP_DECL(scope_4, 1);
MAP_DECL(scope_3, 3);
MAP_DECL(scope_2, 3);
MAP_DECL(scope_1, 63);
MAP_DECL(scope_0, 1);

/* array_int_1 */
static const MappingEntry scope_46_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_46 = {
  "array_int_1",
  scope_46_entries, 1,
};

/* array_real_12 */
static const MappingEntry scope_45_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_12, sizeof(kcg_real), 0, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_45 = {
  "array_real_12",
  scope_45_entries, 1,
};

/* array_bool_12 */
static const MappingEntry scope_44_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_12, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_44 = {
  "array_bool_12",
  scope_44_entries, 1,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:then: */
static const MappingEntry scope_39_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L8_IfBlock1), &_Type_kcg_real_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_39 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:then:",
  scope_39_entries, 1,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:then: */
static const MappingEntry scope_38_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L1_IfBlock1), &_Type_kcg_real_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L2_IfBlock1), &_Type_kcg_real_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L3_IfBlock1), &_Type_kcg_real_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L4_IfBlock1), &_Type_kcg_real_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L5_IfBlock1), &_Type_kcg_real_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_38 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:then:",
  scope_38_entries, 5,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:else:then: */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L12_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_37 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:else:then:",
  scope_37_entries, 1,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:else:else: */
static const MappingEntry scope_36_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L10_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 7},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L24_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L35_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L56_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L6_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L7_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L83_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, _L9_IfBlock1), &_Type_kcg_real_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 6}
};
static const MappingScope scope_36 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:else:else:",
  scope_36_entries, 8,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:else: */
static const MappingEntry scope_35_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CalculateDistanceToTarget, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_35_entries[0], isActive_kcg_bool_kcg_false, &scope_36, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_35_entries[0], isActive_kcg_bool_kcg_true, &scope_37, 1, 2}
};
static const MappingScope scope_35 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:else:",
  scope_35_entries, 3,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else: */
static const MappingEntry scope_34_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CalculateDistanceToTarget, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_34_entries[0], isActive_kcg_bool_kcg_false, &scope_35, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_34_entries[0], isActive_kcg_bool_kcg_true, &scope_38, 1, 2}
};
static const MappingScope scope_34 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:else:",
  scope_34_entries, 3,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1: */
static const MappingEntry scope_33_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CalculateDistanceToTarget, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_false, &scope_34, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_true, &scope_39, 1, 2}
};
static const MappingScope scope_33 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTargetIfBlock1:",
  scope_33_entries, 3,
};

/* CalculateDistanceToTarget/ CalculateDistanceToTarget */
static const MappingEntry scope_32_entries[2] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 0},
  /* 1 */ { MAP_OUTPUT, "InterpolatedDistanceToTarget", NULL, sizeof(kcg_real), offsetof(outC_CalculateDistanceToTarget, InterpolatedDistanceToTarget), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_32 = {
  "CalculateDistanceToTarget/ CalculateDistanceToTarget",
  scope_32_entries, 2,
};

/* SpeedToDigit/ SpeedToDigit */
static const MappingEntry scope_31_entries[18] = {
  /* 0 */ { MAP_OUTPUT, "SpeedDigitOne", NULL, sizeof(kcg_real), offsetof(outC_SpeedToDigit, SpeedDigitOne), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "SpeedDigitThree", NULL, sizeof(kcg_real), offsetof(outC_SpeedToDigit, SpeedDigitThree), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 2 */ { MAP_OUTPUT, "SpeedDigitTwo", NULL, sizeof(kcg_real), offsetof(outC_SpeedToDigit, SpeedDigitTwo), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_SpeedToDigit, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_SpeedToDigit, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_SpeedToDigit, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_SpeedToDigit, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SpeedToDigit, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_31 = {
  "SpeedToDigit/ SpeedToDigit",
  scope_31_entries, 18,
};

/* Train/ TrainIfBlock1:then: */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Train, _L1_IfBlock1), &_Type_kcg_real_Utils, &scope_26_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_30 = {
  "Train/ TrainIfBlock1:then:",
  scope_30_entries, 1,
};

/* Train/ TrainIfBlock1:else:then: */
static const MappingEntry scope_29_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Train, _L11_IfBlock1), &_Type_kcg_real_Utils, &scope_27_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_29 = {
  "Train/ TrainIfBlock1:else:then:",
  scope_29_entries, 1,
};

/* Train/ TrainIfBlock1:else:else: */
static const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Train, _L12_IfBlock1), &_Type_kcg_real_Utils, &scope_27_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_28 = {
  "Train/ TrainIfBlock1:else:else:",
  scope_28_entries, 1,
};

/* Train/ TrainIfBlock1:else: */
static const MappingEntry scope_27_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Train, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_27_entries[0], isActive_kcg_bool_kcg_false, &scope_28, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_27_entries[0], isActive_kcg_bool_kcg_true, &scope_29, 1, 2}
};
static const MappingScope scope_27 = {
  "Train/ TrainIfBlock1:else:",
  scope_27_entries, 3,
};

/* Train/ TrainIfBlock1: */
static const MappingEntry scope_26_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Train, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_26_entries[0], isActive_kcg_bool_kcg_false, &scope_27, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_26_entries[0], isActive_kcg_bool_kcg_true, &scope_30, 1, 2}
};
static const MappingScope scope_26 = {
  "Train/ TrainIfBlock1:",
  scope_26_entries, 3,
};

/* Train/ Trainpwlinear::LimiterUnSymmetrical 2/ */
static const MappingEntry scope_25_entries[9] = {
  /* 0 */ { MAP_ASSUME, "A1", NULL, sizeof(kcg_bool), offsetof(outC_Train, A1_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_OUTPUT, "LUS_Output", NULL, sizeof(kcg_real), offsetof(outC_Train, LUS_Output_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Train, _L1_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_Train, _L11_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_Train, _L13_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_Train, _L15_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Train, _L2_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Train, _L3_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), offsetof(outC_Train, _L9_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_25 = {
  "Train/ Trainpwlinear::LimiterUnSymmetrical 2/",
  scope_25_entries, 9,
};

/* Train/ Train */
static const MappingEntry scope_24_entries[34] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Train, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_real), offsetof(outC_Train, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Train, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_real), offsetof(outC_Train, _L19), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Train, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 6},
  /* 5 */ { MAP_LOCAL, "Acceleration", NULL, sizeof(kcg_real), offsetof(outC_Train, Acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 8},
  /* 7 */ { MAP_LOCAL, "SpeedGap", NULL, sizeof(kcg_real), offsetof(outC_Train, SpeedGap), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_OUTPUT, "TrainPosition", NULL, sizeof(kcg_real), offsetof(outC_Train, TrainPosition), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 32},
  /* 9 */ { MAP_OUTPUT, "TrainSpeed", NULL, sizeof(kcg_real), offsetof(outC_Train, TrainSpeed), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 33},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Train, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_Train, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_Train, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Train, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_Train, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 15 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_Train, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 16 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_real), offsetof(outC_Train, _L17), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 17 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_real), offsetof(outC_Train, _L18), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 18 */ { MAP_LOCAL, "_L19@mem", NULL, sizeof(kcg_real), offsetof(outC_Train, _L19), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 5},
  /* 19 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_Train, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_Train, _L21), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 24},
  /* 21 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_Train, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_real), offsetof(outC_Train, _L23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 26},
  /* 23 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_Train, _L24), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 27},
  /* 24 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_real), offsetof(outC_Train, _L25), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 28},
  /* 25 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_Train, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 29},
  /* 26 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_real), offsetof(outC_Train, _L27), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 30},
  /* 27 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Train, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 28 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Train, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 31},
  /* 29 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_Train, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 30 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_Train, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L8@mem", NULL, sizeof(kcg_real), offsetof(outC_Train, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 4},
  /* 32 */ { MAP_LOCAL, "localTrainSpeed", NULL, sizeof(kcg_real), offsetof(outC_Train, localTrainSpeed), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 33 */ { MAP_EXPANDED, "pwlinear::LimiterUnSymmetrical 2", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 7}
};
static const MappingScope scope_24 = {
  "Train/ Train",
  scope_24_entries, 34,
};

/* Test_DMI/ Test_DMISM1:InvisibleState:<1 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_17_entries[1], isActive_SSM_TR_SM1_SSM_TR_InvisibleState_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "Test_DMI/ Test_DMISM1:InvisibleState:<1",
  scope_23_entries, 1,
};

/* Test_DMI/ Test_DMISM1:InvisibleState: */
static const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_17_entries[1], isActive_SSM_TR_SM1_SSM_TR_InvisibleState_1_SM1, &scope_23, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_SM1_InvisibleState, &_Type_kcg_bool_Utils, &scope_17_entries[0], isActive_SSM_ST_SM1_SSM_st_InvisibleState_SM1, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "Test_DMI/ Test_DMISM1:InvisibleState:",
  scope_22_entries, 2,
};

/* Test_DMI/ Test_DMISM1:VisibleState:<1 */
static const MappingEntry scope_21_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_17_entries[1], isActive_SSM_TR_SM1_SSM_TR_VisibleState_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "Test_DMI/ Test_DMISM1:VisibleState:<1",
  scope_21_entries, 1,
};

/* Test_DMI/ Test_DMISM1:VisibleState: */
static const MappingEntry scope_20_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_17_entries[1], isActive_SSM_TR_SM1_SSM_TR_VisibleState_1_SM1, &scope_21, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_SM1_VisibleState, &_Type_kcg_bool_Utils, &scope_17_entries[0], isActive_SSM_ST_SM1_SSM_st_VisibleState_SM1, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "Test_DMI/ Test_DMISM1:VisibleState:",
  scope_20_entries, 2,
};

/* Test_DMI/ Test_DMISM1: */
static const MappingEntry scope_17_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (int)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (int)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (int)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "InvisibleState:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_SSM_ST_SM1_SSM_st_InvisibleState_SM1, &scope_22, 1, 8},
  /* 8 */ { MAP_STATE, "VisibleState:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_SSM_ST_SM1_SSM_st_VisibleState_SM1, &scope_20, 1, 7}
};
static const MappingScope scope_17 = {
  "Test_DMI/ Test_DMISM1:",
  scope_17_entries, 9,
};

/* Test_DMI/ Test_DMIShowDistanceToTarget:InvisibleState:<1 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[1], isActive_SSM_TR_ShowDistanceToTarget_SSM_TR_InvisibleState_1_ShowDistanceToTarget, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "Test_DMI/ Test_DMIShowDistanceToTarget:InvisibleState:<1",
  scope_16_entries, 1,
};

/* Test_DMI/ Test_DMIShowDistanceToTarget:InvisibleState: */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_10_entries[1], isActive_SSM_TR_ShowDistanceToTarget_SSM_TR_InvisibleState_1_ShowDistanceToTarget, &scope_16, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_ShowDistanceToTarget_InvisibleState, &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive_SSM_ST_ShowDistanceToTarget_SSM_st_InvisibleState_ShowDistanceToTarget, NULL, 1, 0}
};
static const MappingScope scope_15 = {
  "Test_DMI/ Test_DMIShowDistanceToTarget:InvisibleState:",
  scope_15_entries, 2,
};

/* Test_DMI/ Test_DMIShowDistanceToTarget:VisibleState:<1 */
static const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[1], isActive_SSM_TR_ShowDistanceToTarget_SSM_TR_VisibleState_1_ShowDistanceToTarget, NULL, 1, 0}
};
static const MappingScope scope_14 = {
  "Test_DMI/ Test_DMIShowDistanceToTarget:VisibleState:<1",
  scope_14_entries, 1,
};

/* Test_DMI/ Test_DMIShowDistanceToTarget:VisibleState: */
static const MappingEntry scope_13_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_10_entries[1], isActive_SSM_TR_ShowDistanceToTarget_SSM_TR_VisibleState_1_ShowDistanceToTarget, &scope_14, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_ShowDistanceToTarget_VisibleState, &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive_SSM_ST_ShowDistanceToTarget_SSM_st_VisibleState_ShowDistanceToTarget, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "Test_DMI/ Test_DMIShowDistanceToTarget:VisibleState:",
  scope_13_entries, 2,
};

/* Test_DMI/ Test_DMIShowDistanceToTarget: */
static const MappingEntry scope_10_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_ShowDistanceToTarget), (int)&outputs_ctx.ShowDistanceToTarget_state_act, &_Type_SSM_ST_ShowDistanceToTarget_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_ShowDistanceToTarget), (int)&outputs_ctx.ShowDistanceToTarget_fired_strong, &_Type_SSM_TR_ShowDistanceToTarget_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_ShowDistanceToTarget), (int)&outputs_ctx.ShowDistanceToTarget_fired, &_Type_SSM_TR_ShowDistanceToTarget_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_ShowDistanceToTarget), (int)&outputs_ctx.ShowDistanceToTarget_state_nxt, &_Type_SSM_ST_ShowDistanceToTarget_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ShowDistanceToTarget_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ShowDistanceToTarget_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_ShowDistanceToTarget), (int)&outputs_ctx.ShowDistanceToTarget_state_sel, &_Type_SSM_ST_ShowDistanceToTarget_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "InvisibleState:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_SSM_ST_ShowDistanceToTarget_SSM_st_InvisibleState_ShowDistanceToTarget, &scope_15, 1, 8},
  /* 8 */ { MAP_STATE, "VisibleState:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_SSM_ST_ShowDistanceToTarget_SSM_st_VisibleState_ShowDistanceToTarget, &scope_13, 1, 7}
};
static const MappingScope scope_10 = {
  "Test_DMI/ Test_DMIShowDistanceToTarget:",
  scope_10_entries, 9,
};

/* Test_DMI/ Test_DMIIfBlock1:then: */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_1), (int)&outputs_ctx._L1_IfBlock1, &_Type_array_int_1_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_46, 1, 0}
};
static const MappingScope scope_9 = {
  "Test_DMI/ Test_DMIIfBlock1:then:",
  scope_9_entries, 1,
};

/* Test_DMI/ Test_DMIIfBlock1: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.IfBlock1_clock, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_9, 1, 2}
};
static const MappingScope scope_7 = {
  "Test_DMI/ Test_DMIIfBlock1:",
  scope_7_entries, 3,
};

/* Test_DMI/ Test_DMIPointerColor:then: */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_PointerColor, &_Type_kcg_int_Utils, &scope_2_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "Test_DMI/ Test_DMIPointerColor:then:",
  scope_6_entries, 1,
};

/* Test_DMI/ Test_DMIPointerColor:else:then: */
static const MappingEntry scope_5_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_PointerColor, &_Type_kcg_int_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_5 = {
  "Test_DMI/ Test_DMIPointerColor:else:then:",
  scope_5_entries, 1,
};

/* Test_DMI/ Test_DMIPointerColor:else:else: */
static const MappingEntry scope_4_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L13_PointerColor, &_Type_kcg_int_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_4 = {
  "Test_DMI/ Test_DMIPointerColor:else:else:",
  scope_4_entries, 1,
};

/* Test_DMI/ Test_DMIPointerColor:else: */
static const MappingEntry scope_3_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.else_clock_PointerColor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_5, 1, 2}
};
static const MappingScope scope_3 = {
  "Test_DMI/ Test_DMIPointerColor:else:",
  scope_3_entries, 3,
};

/* Test_DMI/ Test_DMIPointerColor: */
static const MappingEntry scope_2_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.PointerColor_clock, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_kcg_bool_kcg_false, &scope_3, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_kcg_bool_kcg_true, &scope_6, 1, 2}
};
static const MappingScope scope_2 = {
  "Test_DMI/ Test_DMIPointerColor:",
  scope_2_entries, 3,
};

/* Test_DMI/ Test_DMI */
static const MappingEntry scope_1_entries[63] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_INPUT, "Brake", NULL, sizeof(kcg_real), (int)&inputs_ctx.Brake, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 59},
  /* 2 */ { MAP_INSTANCE, "CalculateDistanceToTarget 2", NULL, sizeof(outC_CalculateDistanceToTarget), (int)&outputs_ctx.Context_2, NULL, NULL, NULL, &scope_32, 1, 4},
  /* 3 */ { MAP_OUTPUT, "DistanceToTarget", NULL, sizeof(kcg_real), (int)&outputs_ctx.DistanceToTarget, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 46},
  /* 4 */ { MAP_OUTPUT, "DistanceToTargetVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.DistanceToTargetVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47},
  /* 5 */ { MAP_OUTPUT, "GradientsEnd", NULL, sizeof(array_real_12), (int)&outputs_ctx.GradientsEnd, &_Type_array_real_12_Utils, NULL, NULL, &scope_45, 1, 44},
  /* 6 */ { MAP_OUTPUT, "GradientsStart", NULL, sizeof(array_real_12), (int)&outputs_ctx.GradientsStart, &_Type_array_real_12_Utils, NULL, NULL, &scope_45, 1, 43},
  /* 7 */ { MAP_OUTPUT, "GradientsValue", NULL, sizeof(array_real_12), (int)&outputs_ctx.GradientsValue, &_Type_array_real_12_Utils, NULL, NULL, &scope_45, 1, 45},
  /* 8 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 6},
  /* 9 */ { MAP_OUTPUT, "InterpolatedDistanceToTarget", NULL, sizeof(kcg_real), (int)&outputs_ctx.InterpolatedDistanceToTarget, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 48},
  /* 10 */ { MAP_INPUT, "MousePressed", NULL, sizeof(kcg_bool), (int)&inputs_ctx.MousePressed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57},
  /* 11 */ { MAP_INPUT, "OverA", NULL, sizeof(kcg_bool), (int)&inputs_ctx.OverA, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56},
  /* 12 */ { MAP_OUTPUT, "PointerColor", NULL, sizeof(kcg_int), (int)&outputs_ctx.PointerColor, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 50},
  /* 13 */ { MAP_IF, "PointerColor:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 5},
  /* 14 */ { MAP_INPUT, "RP_SpeedPermitted", NULL, sizeof(kcg_real), (int)&inputs_ctx.RP_SpeedPermitted, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 54},
  /* 15 */ { MAP_INPUT, "RP_SpeedRelease", NULL, sizeof(kcg_real), (int)&inputs_ctx.RP_SpeedRelease, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 55},
  /* 16 */ { MAP_INPUT, "RP_SpeedTarget", NULL, sizeof(kcg_real), (int)&inputs_ctx.RP_SpeedTarget, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 53},
  /* 17 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 8},
  /* 18 */ { MAP_AUTOMATON, "ShowDistanceToTarget:", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 7},
  /* 19 */ { MAP_OUTPUT, "SpeedDigitOne", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpeedDigitOne, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 37},
  /* 20 */ { MAP_OUTPUT, "SpeedDigitThree", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpeedDigitThree, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 39},
  /* 21 */ { MAP_OUTPUT, "SpeedDigitTwo", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpeedDigitTwo, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 38},
  /* 22 */ { MAP_OUTPUT, "SpeedPermitted", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpeedPermitted, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 41},
  /* 23 */ { MAP_OUTPUT, "SpeedRelease", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpeedRelease, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 42},
  /* 24 */ { MAP_OUTPUT, "SpeedTarget", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpeedTarget, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 40},
  /* 25 */ { MAP_INSTANCE, "SpeedToDigit 1", NULL, sizeof(outC_SpeedToDigit), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_31, 1, 3},
  /* 26 */ { MAP_OUTPUT, "StatusSymbolBrake", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StatusSymbolBrake, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49},
  /* 27 */ { MAP_INSTANCE, "Train 1", NULL, sizeof(outC_Train), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_24, 1, 2},
  /* 28 */ { MAP_OUTPUT, "TrainPosition", NULL, sizeof(kcg_real), (int)&outputs_ctx.TrainPosition, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 35},
  /* 29 */ { MAP_OUTPUT, "TrainSpeed", NULL, sizeof(kcg_real), (int)&outputs_ctx.TrainSpeed, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 36},
  /* 30 */ { MAP_INPUT, "VisibleGradients", NULL, sizeof(array_bool_12), (int)&inputs_ctx.VisibleGradients, &_Type_array_bool_12_Utils, NULL, NULL, &scope_44, 1, 58},
  /* 31 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), (int)&outputs_ctx._L10, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 33 */ { MAP_LOCAL, "_L17", NULL, sizeof(array_real_12), (int)&outputs_ctx._L17, &_Type_array_real_12_Utils, NULL, NULL, &scope_45, 1, 19},
  /* 34 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_real_12), (int)&outputs_ctx._L18, &_Type_array_real_12_Utils, NULL, NULL, &scope_45, 1, 20},
  /* 35 */ { MAP_LOCAL, "_L19", NULL, sizeof(array_real_12), (int)&outputs_ctx._L19, &_Type_array_real_12_Utils, NULL, NULL, &scope_45, 1, 21},
  /* 36 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), (int)&outputs_ctx._L2, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 37 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), (int)&outputs_ctx._L21, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 25},
  /* 38 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), (int)&outputs_ctx._L22, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 39 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_real), (int)&outputs_ctx._L23, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 23},
  /* 40 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_real), (int)&outputs_ctx._L25, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 24},
  /* 41 */ { MAP_LOCAL, "_L26", NULL, sizeof(array_bool_12), (int)&outputs_ctx._L26, &_Type_array_bool_12_Utils, NULL, NULL, &scope_44, 1, 27},
  /* 42 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), (int)&outputs_ctx._L3, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 43 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), (int)&outputs_ctx._L32, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 26},
  /* 44 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), (int)&outputs_ctx._L33, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 28},
  /* 45 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L34, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 46 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_real), (int)&outputs_ctx._L35, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 30},
  /* 47 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L36, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 48 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L37, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 49 */ { MAP_LOCAL, "_L39", NULL, sizeof(array_bool_12), (int)&outputs_ctx._L39, &_Type_array_bool_12_Utils, NULL, NULL, &scope_44, 1, 33},
  /* 50 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), (int)&outputs_ctx._L4, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 51 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L44, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 52 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), (int)&outputs_ctx._L6, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 53 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), (int)&outputs_ctx._L7, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 54 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), (int)&outputs_ctx._L8, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 55 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), (int)&outputs_ctx._L9, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 56 */ { MAP_INPUT, "arraykey", NULL, sizeof(array_bool_12), (int)&inputs_ctx.arraykey, &_Type_array_bool_12_Utils, NULL, NULL, &scope_44, 1, 62},
  /* 57 */ { MAP_OUTPUT, "digit1_view", NULL, sizeof(array_int_1), (int)&outputs_ctx.digit1_view, &_Type_array_int_1_Utils, NULL, NULL, &scope_46, 1, 52},
  /* 58 */ { MAP_INPUT, "insideButton", NULL, sizeof(kcg_bool), (int)&inputs_ctx.insideButton, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 61},
  /* 59 */ { MAP_LOCAL, "isKey1@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.isKey1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 60 */ { MAP_INPUT, "lala", NULL, sizeof(kcg_bool), (int)&inputs_ctx.lala, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 60},
  /* 61 */ { MAP_LOCAL, "localTrainPosition", NULL, sizeof(kcg_real), (int)&outputs_ctx.localTrainPosition, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 62 */ { MAP_OUTPUT, "showlala", NULL, sizeof(kcg_bool), (int)&outputs_ctx.showlala, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51}
};
static const MappingScope scope_1 = {
  "Test_DMI/ Test_DMI",
  scope_1_entries, 63,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Test_DMI", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

