/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_100;
static const MappingIterator iter_foldwi_100;
static const MappingIterator iter_array_100 = { "array", 100, 100, NULL};
static const MappingIterator iter_foldwi_100 = { "foldwi", 100, 100, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_2, 12);
MAP_DECL(scope_1, 9);
MAP_DECL(scope_0, 1);

/* array_int_100 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_100, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "array_int_100",
  scope_9_entries, 1,
};

/* array__154 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_100, sizeof(struct__149), 0, &_Type_struct__149_Utils, NULL, NULL, &scope_7, 1, 0}
};
static const MappingScope scope_8 = {
  "array__154",
  scope_8_entries, 1,
};

/* struct__149 */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__149, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(struct__149, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_7 = {
  "struct__149",
  scope_7_entries, 2,
};

/* Internal_Tests::TriggerSpecificBaliseLoop/ TriggerSpecificBaliseLoop_Internal_Tests */
static const MappingEntry scope_2_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "TrainPos", NULL, sizeof(kcg_real), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(BPos_Internal_Tests), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L4), &_Type_BPos_Internal_Tests_Utils, NULL, NULL, &scope_8, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(BPos_Single_Internal_Tests), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L5), &_Type_BPos_Single_Internal_Tests_Utils, NULL, NULL, &scope_7, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_TriggerSpecificBaliseLoop_Internal_Tests, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_2 = {
  "Internal_Tests::TriggerSpecificBaliseLoop/ TriggerSpecificBaliseLoop_Internal_Tests",
  scope_2_entries, 12,
};

/* Internal_Tests::TriggerSpecificBalise/ TriggerSpecificBalise_Internal_Tests */
static const MappingEntry scope_1_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "Internal_Tests::TriggerSpecificBaliseLoop 1", &iter_foldwi_100, sizeof(outC_TriggerSpecificBaliseLoop_Internal_Tests), (size_t)&Ctxt_TriggerSpecificBalise_Internal_Tests.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_OUTPUT, "TrainPos", NULL, sizeof(kcg_real), (size_t)&TrainPos, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (size_t)&Ctxt_TriggerSpecificBalise_Internal_Tests._L1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (size_t)&Ctxt_TriggerSpecificBalise_Internal_Tests._L2, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&Ctxt_TriggerSpecificBalise_Internal_Tests._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), (size_t)&Ctxt_TriggerSpecificBalise_Internal_Tests._L4, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), (size_t)&Ctxt_TriggerSpecificBalise_Internal_Tests._L5, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_100), (size_t)&Ctxt_TriggerSpecificBalise_Internal_Tests._L6, &_Type_array_int_100_Utils, NULL, NULL, &scope_9, 1, 6},
  /* 8 */ { MAP_INPUT, "nid_BG_looked_for", NULL, sizeof(kcg_int), (size_t)&_ctx_nid_BG_looked_for_buffer, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_1 = {
  "Internal_Tests::TriggerSpecificBalise/ TriggerSpecificBalise_Internal_Tests",
  scope_1_entries, 9,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Internal_Tests::TriggerSpecificBalise", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

