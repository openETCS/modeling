/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_39;
static const MappingIterator iter_array_7;
static const MappingIterator iter_array_4;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_39 = { "array", 39, 39, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_60, 1);
MAP_DECL(scope_59, 1);
MAP_DECL(scope_58, 2);
MAP_DECL(scope_57, 1);
MAP_DECL(scope_56, 1);
MAP_DECL(scope_55, 1);
MAP_DECL(scope_54, 5);
MAP_DECL(scope_53, 1);
MAP_DECL(scope_52, 1);
MAP_DECL(scope_51, 1);
MAP_DECL(scope_50, 11);
MAP_DECL(scope_45, 6);
MAP_DECL(scope_44, 2);
MAP_DECL(scope_43, 2);
MAP_DECL(scope_42, 2);
MAP_DECL(scope_41, 2);
MAP_DECL(scope_40, 3);
MAP_DECL(scope_39, 3);
MAP_DECL(scope_38, 3);
MAP_DECL(scope_37, 6);
MAP_DECL(scope_36, 2);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 2);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 3);
MAP_DECL(scope_31, 3);
MAP_DECL(scope_30, 3);
MAP_DECL(scope_29, 6);
MAP_DECL(scope_28, 2);
MAP_DECL(scope_27, 2);
MAP_DECL(scope_26, 2);
MAP_DECL(scope_25, 3);
MAP_DECL(scope_24, 3);
MAP_DECL(scope_23, 6);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 2);
MAP_DECL(scope_20, 2);
MAP_DECL(scope_19, 3);
MAP_DECL(scope_18, 3);
MAP_DECL(scope_17, 6);
MAP_DECL(scope_16, 2);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_14, 2);
MAP_DECL(scope_13, 2);
MAP_DECL(scope_12, 3);
MAP_DECL(scope_11, 3);
MAP_DECL(scope_10, 3);
MAP_DECL(scope_9, 6);
MAP_DECL(scope_8, 14);
MAP_DECL(scope_7, 9);
MAP_DECL(scope_6, 31);
MAP_DECL(scope_5, 12);
MAP_DECL(scope_4, 17);
MAP_DECL(scope_3, 61);
MAP_DECL(scope_2, 14);
MAP_DECL(scope_1, 11);
MAP_DECL(scope_0, 1);

/* array_int_500_500 */
static const MappingEntry scope_60_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 0}
};
static const MappingScope scope_60 = {
  "array_int_500_500",
  scope_60_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_59_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_59 = {
  "array_int_30",
  scope_59_entries, 1,
};

/* struct__993 */
static const MappingEntry scope_58_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__993, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__990), offsetof(struct__993, PacketHeaders), &_Type_array__990_Utils, NULL, NULL, &scope_57, 1, 0}
};
static const MappingScope scope_58 = {
  "struct__993",
  scope_58_entries, 2,
};

/* array__990 */
static const MappingEntry scope_57_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__976), 0, &_Type_struct__976_Utils, NULL, NULL, &scope_54, 1, 0}
};
static const MappingScope scope_57 = {
  "array__990",
  scope_57_entries, 1,
};

/* array_int_500 */
static const MappingEntry scope_56_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_56 = {
  "array_int_500",
  scope_56_entries, 1,
};

/* array_int_39 */
static const MappingEntry scope_55_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_39, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_55 = {
  "array_int_39",
  scope_55_entries, 1,
};

/* struct__976 */
static const MappingEntry scope_54_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__976, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__976, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__976, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__976, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__976, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_54 = {
  "struct__976",
  scope_54_entries, 5,
};

/* array_int_4 */
static const MappingEntry scope_53_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_53 = {
  "array_int_4",
  scope_53_entries, 1,
};

/* array_int_7 */
static const MappingEntry scope_52_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_52 = {
  "array_int_7",
  scope_52_entries, 1,
};

/* array__967 */
static const MappingEntry scope_51_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(struct__953), 0, &_Type_struct__953_Utils, NULL, NULL, &scope_50, 1, 0}
};
static const MappingScope scope_51 = {
  "array__967",
  scope_51_entries, 1,
};

/* struct__953 */
static const MappingEntry scope_50_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__953, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_LRBG", NULL, sizeof(kcg_int), offsetof(struct__953, nid_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__953, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__953, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__953, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__953, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__953, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__953, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__953, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__953, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__953, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_50 = {
  "struct__953",
  scope_50_entries, 11,
};

/* TM_conversions::TOOLS_evaluate_N_ITER/ TOOLS_evaluate_N_ITER_TM_conversions */
static const MappingEntry scope_45_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "valid", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_45 = {
  "TM_conversions::TOOLS_evaluate_N_ITER/ TOOLS_evaluate_N_ITER_TM_conversions",
  scope_45_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_44_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L2_IfBlock1), &_Type_Q_SCALE_Utils, &scope_38_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_38_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_44 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:then:",
  scope_44_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_43_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_39_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_39_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_43 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:then:",
  scope_43_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_42_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L13_IfBlock1), &_Type_Q_SCALE_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_42 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:then:",
  scope_42_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_41_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L14_IfBlock1), &_Type_Q_SCALE_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_41 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:else:",
  scope_41_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_40_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_kcg_bool_kcg_false, &scope_41, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_kcg_bool_kcg_true, &scope_42, 1, 2}
};
static const MappingScope scope_40 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:",
  scope_40_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_39_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_39_entries[0], isActive_kcg_bool_kcg_false, &scope_40, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_39_entries[0], isActive_kcg_bool_kcg_true, &scope_43, 1, 2}
};
static const MappingScope scope_39 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:",
  scope_39_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1: */
static const MappingEntry scope_38_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_38_entries[0], isActive_kcg_bool_kcg_false, &scope_39, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_38_entries[0], isActive_kcg_bool_kcg_true, &scope_44, 1, 2}
};
static const MappingScope scope_38 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:",
  scope_38_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversions */
static const MappingEntry scope_37_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, q_scale_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_37 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversions",
  scope_37_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_36_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L4_IfBlock1), &_Type_Q_DIR_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_36 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:then:",
  scope_36_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L3_IfBlock1), &_Type_Q_DIR_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L52_IfBlock1), &_Type_kcg_bool_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_35 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:then:",
  scope_35_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_34_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L2_IfBlock1), &_Type_Q_DIR_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L43_IfBlock1), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_34 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:then:",
  scope_34_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L24_IfBlock1), &_Type_Q_DIR_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_33 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:else:",
  scope_33_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_32_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_false, &scope_33, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_true, &scope_34, 1, 2}
};
static const MappingScope scope_32 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:",
  scope_32_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_31_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_false, &scope_32, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_true, &scope_35, 1, 2}
};
static const MappingScope scope_31 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:",
  scope_31_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1: */
static const MappingEntry scope_30_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_false, &scope_31, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_true, &scope_36, 1, 2}
};
static const MappingScope scope_30 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:",
  scope_30_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversions */
static const MappingEntry scope_29_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, q_dir_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_29 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversions",
  scope_29_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_28_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L4_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_24_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_24_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_28 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then:",
  scope_28_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_27_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L3_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_25_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_25_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_27 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then:",
  scope_27_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_26_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L1_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_25_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_25_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_26 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else:",
  scope_26_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_25_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_25_entries[0], isActive_kcg_bool_kcg_false, &scope_26, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_25_entries[0], isActive_kcg_bool_kcg_true, &scope_27, 1, 2}
};
static const MappingScope scope_25 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:",
  scope_25_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1: */
static const MappingEntry scope_24_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_24_entries[0], isActive_kcg_bool_kcg_false, &scope_25, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_24_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 2}
};
static const MappingScope scope_24 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:",
  scope_24_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions */
static const MappingEntry scope_23_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_newcountry_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_23 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions",
  scope_23_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L4_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_22 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then:",
  scope_22_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_21_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L3_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_21 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then:",
  scope_21_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_20_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else:",
  scope_20_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_false, &scope_20, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_true, &scope_21, 1, 2}
};
static const MappingScope scope_19 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:",
  scope_19_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1: */
static const MappingEntry scope_18_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_18_entries[0], isActive_kcg_bool_kcg_false, &scope_19, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_18_entries[0], isActive_kcg_bool_kcg_true, &scope_22, 1, 2}
};
static const MappingScope scope_18 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:",
  scope_18_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions */
static const MappingEntry scope_17_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkorientation_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_17 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions",
  scope_17_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_16_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_10_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_16 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then:",
  scope_16_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_11_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_15 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then:",
  scope_15_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_14_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L13_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_14 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then:",
  scope_14_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_13_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L14_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else:",
  scope_13_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_12_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_false, &scope_13, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_true, &scope_14, 1, 2}
};
static const MappingScope scope_12 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:",
  scope_12_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_11_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_kcg_bool_kcg_false, &scope_12, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_kcg_bool_kcg_true, &scope_15, 1, 2}
};
static const MappingScope scope_11 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:",
  scope_11_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1: */
static const MappingEntry scope_10_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_kcg_bool_kcg_false, &scope_11, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_kcg_bool_kcg_true, &scope_16, 1, 2}
};
static const MappingScope scope_10 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:",
  scope_10_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions */
static const MappingEntry scope_9_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkreaction_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_9 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions",
  scope_9_entries, 6,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_8_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 1 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, PacketOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_56, 1, 3}
};
static const MappingScope scope_8 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_8_entries, 14,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_7_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 1}
};
static const MappingScope scope_7 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_7_entries, 9,
};

/* TM_conversions::RECV_ConvertP005afterRead_Element_CT/ RECV_ConvertP005afterRead_TM_conversions */
static const MappingEntry scope_6_entries[31] = {
  /* 0 */ { MAP_OUTPUT, "Linked_BG", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, Linked_BG), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_50, 1, 30},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, sizeof(outC_CAST_Int_to_Q_DIR_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_29, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKORIENTATION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_17, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKREACTION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_9, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY 2", NULL, sizeof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, Context_2), NULL, NULL, NULL, &scope_23, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, sizeof(outC_CAST_Int_to_Q_SCALE_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_37, 1, 4},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::TOOLS_evaluate_N_ITER 1", NULL, sizeof(outC_TOOLS_evaluate_N_ITER_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, Context_1), NULL, NULL, NULL, &scope_45, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(Array4_TM), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L1), &_Type_Array4_TM_Utils, NULL, NULL, &scope_53, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005E_array_T_TM), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L2), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_52, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 11 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L36", NULL, sizeof(Q_LINKREACTION), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L36), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L37", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L37), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L39", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L39), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 20},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_LOCAL, "_L40", NULL, sizeof(Q_DIR), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L40), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L42", NULL, sizeof(NID_LRBG), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L42), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L44", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L44), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_50, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L45", NULL, sizeof(Q_SCALE), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L45), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 25},
  /* 25 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 26 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 27 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 30 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_6 = {
  "TM_conversions::RECV_ConvertP005afterRead_Element_CT/ RECV_ConvertP005afterRead_TM_conversions",
  scope_6_entries, 31,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_5_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_8, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_60, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_56, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_5 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_5_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_4_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 16},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_7, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_57, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_59, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_4 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_4_entries, 17,
};

/* TM_conversions::RECV_ConvertP005afterRead_CT/ _2_RECV_ConvertP005afterRead_TM_conversions */
static const MappingEntry scope_3_entries[61] = {
  /* 0 */ { MAP_OUTPUT, "Packet005_OLD", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, Packet005_OLD), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_51, 1, 60},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 1", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, Context_1), NULL, NULL, NULL, &scope_6, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 2", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, Context_2), NULL, NULL, NULL, &scope_6, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 3", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, Context_3), NULL, NULL, NULL, &scope_6, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 4", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, Context_4), NULL, NULL, NULL, &scope_6, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 5", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, Context_5), NULL, NULL, NULL, &scope_6, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_array_T_TM), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L1), &_Type_P005_array_T_TM_Utils, NULL, NULL, &scope_55, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L107", NULL, sizeof(array__967), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L107), &_Type_array__967_Utils, NULL, NULL, &scope_51, 1, 40},
  /* 8 */ { MAP_LOCAL, "_L115", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L115), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_50, 1, 41},
  /* 9 */ { MAP_LOCAL, "_L118", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L118), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_50, 1, 42},
  /* 10 */ { MAP_LOCAL, "_L119", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L119), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_50, 1, 43},
  /* 11 */ { MAP_LOCAL, "_L120", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L120), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_50, 1, 44},
  /* 12 */ { MAP_LOCAL, "_L122", NULL, sizeof(array_int_4), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L122), &_Type_array_int_4_Utils, NULL, NULL, &scope_53, 1, 45},
  /* 13 */ { MAP_LOCAL, "_L123", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L123), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 46},
  /* 14 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_bool), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L124), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47},
  /* 15 */ { MAP_LOCAL, "_L126", NULL, sizeof(NID_LRBG), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L126), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 48},
  /* 16 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L129), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 53},
  /* 17 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L130), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 52},
  /* 18 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L131), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 51},
  /* 19 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L132), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 50},
  /* 20 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L133), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 21 */ { MAP_LOCAL, "_L134", NULL, sizeof(array_int_7), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L134), &_Type_array_int_7_Utils, NULL, NULL, &scope_52, 1, 54},
  /* 22 */ { MAP_LOCAL, "_L135", NULL, sizeof(array_int_7), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L135), &_Type_array_int_7_Utils, NULL, NULL, &scope_52, 1, 55},
  /* 23 */ { MAP_LOCAL, "_L136", NULL, sizeof(array_int_7), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L136), &_Type_array_int_7_Utils, NULL, NULL, &scope_52, 1, 56},
  /* 24 */ { MAP_LOCAL, "_L137", NULL, sizeof(array_int_7), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L137), &_Type_array_int_7_Utils, NULL, NULL, &scope_52, 1, 57},
  /* 25 */ { MAP_LOCAL, "_L138", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L138), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_50, 1, 58},
  /* 26 */ { MAP_LOCAL, "_L139", NULL, sizeof(array_int_7), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L139), &_Type_array_int_7_Utils, NULL, NULL, &scope_52, 1, 59},
  /* 27 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 28 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L39), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 29 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 30 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 31 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 32 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 33 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L44), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 36 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 37 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 38 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L49), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 39 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 40 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 41 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 42 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L53), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 43 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L54), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 44 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L55), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 45 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L56), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 46 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L57), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 47 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L58), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 48 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L59), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 49 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L60), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 50 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L61), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 51 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L62), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 52 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L63), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 53 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L64), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 54 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L65), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 55 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 56 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L67), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 57 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 58 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L69), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 59 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L70), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 60 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_int), offsetof(outC__2_RECV_ConvertP005afterRead_TM_conversions, _L71), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_3 = {
  "TM_conversions::RECV_ConvertP005afterRead_CT/ _2_RECV_ConvertP005afterRead_TM_conversions",
  scope_3_entries, 61,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_2_entries[14] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 12},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 13},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_2_entries[0], isActive_kcg_bool_kcg_true, &scope_5, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_56, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_58, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_57, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_56, 1, 9}
};
static const MappingScope scope_2 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_2_entries, 14,
};

/* TM::RECV_ReadPacket005_ForCalcTrainPos/ RECV_ReadPacket005_ForCal_TM */
static const MappingEntry scope_1_entries[11] = {
  /* 0 */ { MAP_INPUT, "LRBG", NULL, sizeof(NID_LRBG), (int)&inputs_ctx.LRBG, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_OUTPUT, "LinkedBGsOUT", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), (int)&outputs_ctx.LinkedBGsOUT, &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_51, 1, 8},
  /* 2 */ { MAP_INPUT, "RadioMessage_IN", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&inputs_ctx.RadioMessage_IN, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_58, 1, 9},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_CT 1", NULL, sizeof(outC__2_RECV_ConvertP005afterRead_TM_conversions), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_int_39), (int)&outputs_ctx._L11, &_Type_array_int_39_Utils, NULL, NULL, &scope_55, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L165", NULL, sizeof(NID_LRBG), (int)&outputs_ctx._L165, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L166", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), (int)&outputs_ctx._L166, &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_51, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), (int)&outputs_ctx._L30, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_54, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), (int)&outputs_ctx._L5, &_Type_array_int_500_Utils, NULL, NULL, &scope_56, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L6, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_58, 1, 3}
};
static const MappingScope scope_1 = {
  "TM::RECV_ReadPacket005_ForCalcTrainPos/ RECV_ReadPacket005_ForCal_TM",
  scope_1_entries, 11,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM::RECV_ReadPacket005_ForCalcTrainPos", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

