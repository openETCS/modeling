/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */
static const MappingIterator iter_array_224;
static const MappingIterator iter_array_32;
static const MappingIterator iter_mapwi_32;
static const MappingIterator iter_array_224 = { "array", 224, 224, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_mapwi_32 = { "mapwi", 32, 32, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_36, 1);
MAP_DECL(scope_35, 1);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 1);
MAP_DECL(scope_32, 8);
MAP_DECL(scope_27, 6);
MAP_DECL(scope_26, 2);
MAP_DECL(scope_25, 2);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 2);
MAP_DECL(scope_22, 3);
MAP_DECL(scope_21, 3);
MAP_DECL(scope_20, 3);
MAP_DECL(scope_19, 6);
MAP_DECL(scope_18, 2);
MAP_DECL(scope_17, 2);
MAP_DECL(scope_16, 2);
MAP_DECL(scope_15, 3);
MAP_DECL(scope_14, 3);
MAP_DECL(scope_13, 6);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_9, 3);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 6);
MAP_DECL(scope_6, 6);
MAP_DECL(scope_5, 6);
MAP_DECL(scope_4, 6);
MAP_DECL(scope_3, 6);
MAP_DECL(scope_2, 38);
MAP_DECL(scope_1, 11);
MAP_DECL(scope_0, 1);

/* array_int_224_32 */
static const MappingEntry scope_36_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_224), 0, &_Type_array_int_224_Utils, NULL, NULL, &scope_34, 1, 0}
};
static const MappingScope scope_36 = {
  "array_int_224_32",
  scope_36_entries, 1,
};

/* array_int_32 */
static const MappingEntry scope_35_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_35 = {
  "array_int_32",
  scope_35_entries, 1,
};

/* array_int_224 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_224, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_34 = {
  "array_int_224",
  scope_34_entries, 1,
};

/* array__543 */
static const MappingEntry scope_33_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__532), 0, &_Type_struct__532_Utils, NULL, NULL, &scope_32, 1, 0}
};
static const MappingScope scope_33 = {
  "array__543",
  scope_33_entries, 1,
};

/* struct__532 */
static const MappingEntry scope_32_entries[8] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__532, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__532, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__532, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__532, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__532, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__532, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__532, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__532, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_32 = {
  "struct__532",
  scope_32_entries, 8,
};

/* TM_conversions::CAST_Int_to_Q_LOCACC/ CAST_Int_to_Q_LOCACC_TM_conversions */
static const MappingEntry scope_27_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "q_locacc", NULL, sizeof(Q_LOCACC), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, q_locacc), &_Type_Q_LOCACC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_27 = {
  "TM_conversions::CAST_Int_to_Q_LOCACC/ CAST_Int_to_Q_LOCACC_TM_conversions",
  scope_27_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_26_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_26 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then:",
  scope_26_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_25_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_25 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then:",
  scope_25_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L13_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_24 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then:",
  scope_24_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_23_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L14_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else:",
  scope_23_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_22_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_false, &scope_23, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 2}
};
static const MappingScope scope_22 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:",
  scope_22_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_21_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 2}
};
static const MappingScope scope_21 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:",
  scope_21_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1: */
static const MappingEntry scope_20_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_false, &scope_21, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 2}
};
static const MappingScope scope_20 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:",
  scope_20_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions */
static const MappingEntry scope_19_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkreaction_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_19 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions",
  scope_19_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_18_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L4_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_14_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_14_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_18 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then:",
  scope_18_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_17_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L3_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_17 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then:",
  scope_17_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_16_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else:",
  scope_16_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_15_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_false, &scope_16, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_true, &scope_17, 1, 2}
};
static const MappingScope scope_15 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:",
  scope_15_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1: */
static const MappingEntry scope_14_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_kcg_bool_kcg_false, &scope_15, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_kcg_bool_kcg_true, &scope_18, 1, 2}
};
static const MappingScope scope_14 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:",
  scope_14_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions */
static const MappingEntry scope_13_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkorientation_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_13 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions",
  scope_13_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L4_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_12 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then:",
  scope_12_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L3_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_11 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then:",
  scope_11_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L1_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else:",
  scope_10_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_9_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_false, &scope_10, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_9 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:",
  scope_9_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_8 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:",
  scope_8_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions */
static const MappingEntry scope_7_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_newcountry_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_7 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions",
  scope_7_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions */
static const MappingEntry scope_6_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_6 = {
  "TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions",
  scope_6_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_5_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_5 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_5_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_LINK/ CAST_Int_to_D_LINK_TM_conversions */
static const MappingEntry scope_4_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_link", NULL, sizeof(D_LINK), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, d_link), &_Type_D_LINK_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_4 = {
  "TM_conversions::CAST_Int_to_D_LINK/ CAST_Int_to_D_LINK_TM_conversions",
  scope_4_entries, 6,
};

/* TM_lib_internal::C_P005_extract_el_section/ C_P005_extract_el_section_TM_lib_internal */
static const MappingEntry scope_3_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_sections_array_flat_TM), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L2), &_Type_P005_sections_array_flat_TM_Utils, NULL, NULL, &scope_34, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_3 = {
  "TM_lib_internal::C_P005_extract_el_section/ C_P005_extract_el_section_TM_lib_internal",
  scope_3_entries, 6,
};

/* TM_lib_internal::C_P005_us_array/ C_P005_us_array_TM_lib_internal */
static const MappingEntry scope_2_entries[38] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_LINK 1", NULL, sizeof(outC_CAST_Int_to_D_LINK_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _7_Context_1), NULL, NULL, NULL, &scope_4, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_BG 1", NULL, sizeof(outC_CAST_Int_to_NID_BG_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _4_Context_1), NULL, NULL, NULL, &scope_6, 1, 9},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 1", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _5_Context_1), NULL, NULL, NULL, &scope_5, 1, 8},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKORIENTATION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_13, 1, 11},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKREACTION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_19, 1, 12},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LOCACC 1", NULL, sizeof(outC_CAST_Int_to_Q_LOCACC_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_27, 1, 13},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY 1", NULL, sizeof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _3_Context_1), NULL, NULL, NULL, &scope_7, 1, 10},
  /* 7 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 1", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, _6_Context_1), NULL, NULL, NULL, &scope_3, 1, 0},
  /* 8 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 2", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_3, 1, 1},
  /* 9 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 3", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_3, 1, 2},
  /* 10 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 4", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_4), NULL, NULL, NULL, &scope_3, 1, 3},
  /* 11 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 5", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_5), NULL, NULL, NULL, &scope_3, 1, 4},
  /* 12 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 6", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_6), NULL, NULL, NULL, &scope_3, 1, 5},
  /* 13 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 7", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_7), NULL, NULL, NULL, &scope_3, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_TM), offsetof(outC_C_P005_us_array_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_TM_Utils, NULL, NULL, &scope_34, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 20 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 21 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 22 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 23 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 24 */ { MAP_LOCAL, "_L25", NULL, sizeof(D_LINK), offsetof(outC_C_P005_us_array_TM_lib_internal, _L25), &_Type_D_LINK_Utils, NULL, NULL, NULL, 1, 27},
  /* 25 */ { MAP_LOCAL, "_L26", NULL, sizeof(NID_C), offsetof(outC_C_P005_us_array_TM_lib_internal, _L26), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 28},
  /* 26 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_BG), offsetof(outC_C_P005_us_array_TM_lib_internal, _L27), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 29},
  /* 27 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_C_P005_us_array_TM_lib_internal, _L28), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 30},
  /* 28 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_C_P005_us_array_TM_lib_internal, _L29), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 31},
  /* 29 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 30 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_LINKREACTION), offsetof(outC_C_P005_us_array_TM_lib_internal, _L30), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 32},
  /* 31 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_LOCACC), offsetof(outC_C_P005_us_array_TM_lib_internal, _L31), &_Type_Q_LOCACC_Utils, NULL, NULL, NULL, 1, 33},
  /* 32 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_us_array_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 33 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_us_array_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L4", NULL, sizeof(P005_OBU_section_TM), offsetof(outC_C_P005_us_array_TM_lib_internal, _L4), &_Type_P005_OBU_section_TM_Utils, NULL, NULL, &scope_32, 1, 16},
  /* 35 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 36 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_OUTPUT, "sections", NULL, sizeof(P005_OBU_section_TM), offsetof(outC_C_P005_us_array_TM_lib_internal, sections), &_Type_P005_OBU_section_TM_Utils, NULL, NULL, &scope_32, 1, 37}
};
static const MappingScope scope_2 = {
  "TM_lib_internal::C_P005_us_array/ C_P005_us_array_TM_lib_internal",
  scope_2_entries, 38,
};

/* TM_lib_internal::C_P005_unflatten_sections/ C_P005_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_1_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_us_array 1", &iter_mapwi_32, sizeof(outC_C_P005_us_array_TM_lib_internal), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_TM), (int)&outputs_ctx._L1, &_Type_P005_sections_array_flat_TM_Utils, NULL, NULL, &scope_34, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L10, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), (int)&outputs_ctx._L5, &_Type_array_int_32_Utils, NULL, NULL, &scope_35, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_224_32), (int)&outputs_ctx._L6, &_Type_array_int_224_32_Utils, NULL, NULL, &scope_36, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__543), (int)&outputs_ctx._L9, &_Type_array__543_Utils, NULL, NULL, &scope_33, 1, 6},
  /* 8 */ { MAP_INPUT, "flat", NULL, sizeof(P005_sections_array_flat_TM), (int)&inputs_ctx.flat, &_Type_P005_sections_array_flat_TM_Utils, NULL, NULL, &scope_34, 1, 10},
  /* 9 */ { MAP_INPUT, "n_iter", NULL, sizeof(kcg_int), (int)&inputs_ctx.n_iter, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_OUTPUT, "sections", NULL, sizeof(P005_OBU_sectionlist_TM), (int)&outputs_ctx.sections, &_Type_P005_OBU_sectionlist_TM_Utils, NULL, NULL, &scope_33, 1, 8}
};
static const MappingScope scope_1 = {
  "TM_lib_internal::C_P005_unflatten_sections/ C_P005_unflatten_sections_TM_lib_internal",
  scope_1_entries, 11,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_lib_internal::C_P005_unflatten_sections", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

