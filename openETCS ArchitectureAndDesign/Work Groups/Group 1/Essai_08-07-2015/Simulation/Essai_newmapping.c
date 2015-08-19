/* Essai_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "Essai_newtype.h"
#include "Essai_newmapping.h"

/* iterators */
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_24;
static const MappingIterator iter_array_25;
static const MappingIterator iter_array_8;
static const MappingIterator iter_array_2;
static const MappingIterator iter_foldwi_2;
static const MappingIterator iter_foldwi_8;
static const MappingIterator iter_map_25;
static const MappingIterator iter_mapfold_25;
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_24 = { "array", 24, 24, NULL};
static const MappingIterator iter_array_25 = { "array", 25, 25, NULL};
static const MappingIterator iter_array_8 = { "array", 8, 8, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_foldwi_2 = { "foldwi", 2, 2, NULL};
static const MappingIterator iter_foldwi_8 = { "foldwi", 8, 8, NULL};
static const MappingIterator iter_map_25 = { "map", 25, 25, NULL};
static const MappingIterator iter_mapfold_25 = { "mapfold", 25, 25, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_64, 1);
MAP_DECL(scope_63, 1);
MAP_DECL(scope_62, 1);
MAP_DECL(scope_61, 1);
MAP_DECL(scope_60, 1);
MAP_DECL(scope_59, 1);
MAP_DECL(scope_58, 1);
MAP_DECL(scope_57, 1);
MAP_DECL(scope_56, 1);
MAP_DECL(scope_55, 1);
MAP_DECL(scope_54, 1);
MAP_DECL(scope_53, 1);
MAP_DECL(scope_52, 1);
MAP_DECL(scope_51, 1);
MAP_DECL(scope_50, 1);
MAP_DECL(scope_49, 2);
MAP_DECL(scope_48, 2);
MAP_DECL(scope_47, 2);
MAP_DECL(scope_46, 2);
MAP_DECL(scope_41, 5);
MAP_DECL(scope_40, 19);
MAP_DECL(scope_39, 18);
MAP_DECL(scope_38, 5);
MAP_DECL(scope_37, 19);
MAP_DECL(scope_36, 5);
MAP_DECL(scope_35, 19);
MAP_DECL(scope_34, 13);
MAP_DECL(scope_33, 13);
MAP_DECL(scope_32, 13);
MAP_DECL(scope_31, 13);
MAP_DECL(scope_30, 14);
MAP_DECL(scope_29, 14);
MAP_DECL(scope_28, 6);
MAP_DECL(scope_27, 4);
MAP_DECL(scope_22, 3);
MAP_DECL(scope_21, 3);
MAP_DECL(scope_20, 3);
MAP_DECL(scope_19, 7);
MAP_DECL(scope_18, 14);
MAP_DECL(scope_17, 14);
MAP_DECL(scope_13, 3);
MAP_DECL(scope_12, 3);
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 10);
MAP_DECL(scope_9, 3);
MAP_DECL(scope_8, 20);
MAP_DECL(scope_7, 4);
MAP_DECL(scope_6, 27);
MAP_DECL(scope_5, 5);
MAP_DECL(scope_4, 18);
MAP_DECL(scope_3, 9);
MAP_DECL(scope_2, 41);
MAP_DECL(scope_1, 19);
MAP_DECL(scope_0, 1);

/* array__1589 */
static const MappingEntry scope_64_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(struct__1532), 0, &_Type_struct__1532_Utils, NULL, NULL, &scope_47, 1, 0}
};
static const MappingScope scope_64 = {
  "array__1589",
  scope_64_entries, 1,
};

/* array__1586 */
static const MappingEntry scope_63_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(array__1550), 0, &_Type_array__1550_Utils, NULL, NULL, &scope_51, 1, 0}
};
static const MappingScope scope_63 = {
  "array__1586",
  scope_63_entries, 1,
};

/* array_bool_24 */
static const MappingEntry scope_62_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_62 = {
  "array_bool_24",
  scope_62_entries, 1,
};

/* array_bool_1 */
static const MappingEntry scope_61_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_61 = {
  "array_bool_1",
  scope_61_entries, 1,
};

/* array_bool_25 */
static const MappingEntry scope_60_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_60 = {
  "array_bool_25",
  scope_60_entries, 1,
};

/* array__1574 */
static const MappingEntry scope_59_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(array__1547), 0, &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 0}
};
static const MappingScope scope_59 = {
  "array__1574",
  scope_59_entries, 1,
};

/* array_real_2 */
static const MappingEntry scope_58_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_real), 0, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_58 = {
  "array_real_2",
  scope_58_entries, 1,
};

/* array_real_1 */
static const MappingEntry scope_57_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_real), 0, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_57 = {
  "array_real_1",
  scope_57_entries, 1,
};

/* array_real_24 */
static const MappingEntry scope_56_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_real), 0, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_56 = {
  "array_real_24",
  scope_56_entries, 1,
};

/* array__1562 */
static const MappingEntry scope_55_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(array__1553), 0, &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 0}
};
static const MappingScope scope_55 = {
  "array__1562",
  scope_55_entries, 1,
};

/* array_real_25 */
static const MappingEntry scope_54_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(kcg_real), 0, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_54 = {
  "array_real_25",
  scope_54_entries, 1,
};

/* array_real_8 */
static const MappingEntry scope_53_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(kcg_real), 0, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_53 = {
  "array_real_8",
  scope_53_entries, 1,
};

/* array__1553 */
static const MappingEntry scope_52_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(struct__1542), 0, &_Type_struct__1542_Utils, NULL, NULL, &scope_49, 1, 0}
};
static const MappingScope scope_52 = {
  "array__1553",
  scope_52_entries, 1,
};

/* array__1550 */
static const MappingEntry scope_51_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(struct__1537), 0, &_Type_struct__1537_Utils, NULL, NULL, &scope_48, 1, 0}
};
static const MappingScope scope_51 = {
  "array__1550",
  scope_51_entries, 1,
};

/* array__1547 */
static const MappingEntry scope_50_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(struct__1542), 0, &_Type_struct__1542_Utils, NULL, NULL, &scope_49, 1, 0}
};
static const MappingScope scope_50 = {
  "array__1547",
  scope_50_entries, 1,
};

/* struct__1542 */
static const MappingEntry scope_49_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Distance", NULL, sizeof(kcg_real), offsetof(struct__1542, Distance), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Value", NULL, sizeof(kcg_real), offsetof(struct__1542, Value), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_49 = {
  "struct__1542",
  scope_49_entries, 2,
};

/* struct__1537 */
static const MappingEntry scope_48_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Adh", NULL, sizeof(kcg_bool), offsetof(struct__1537, Adh), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".Distance", NULL, sizeof(kcg_real), offsetof(struct__1537, Distance), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_48 = {
  "struct__1537",
  scope_48_entries, 2,
};

/* struct__1532 */
static const MappingEntry scope_47_entries[2] = {
  /* 0 */ { MAP_FIELD, ".EB", NULL, sizeof(kcg_real), offsetof(struct__1532, EB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".EB_reduit", NULL, sizeof(kcg_real), offsetof(struct__1532, EB_reduit), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_47 = {
  "struct__1532",
  scope_47_entries, 2,
};

/* struct__1527 */
static const MappingEntry scope_46_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_real), offsetof(struct__1527, Pos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".Size", NULL, sizeof(kcg_real), offsetof(struct__1527, Size), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_46 = {
  "struct__1527",
  scope_46_entries, 2,
};

/* ScanSSP/ ScanSSP_8math::Min 1/ */
static const MappingEntry scope_41_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, Mi_Output_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L21_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L22_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L24_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_8, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_41 = {
  "ScanSSP/ ScanSSP_8math::Min 1/",
  scope_41_entries, 5,
};

/* ScanSSP/ ScanSSP_8 */
static const MappingEntry scope_40_entries[19] = {
  /* 0 */ { MAP_OUTPUT, "Continue", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_8, Continue), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 1 */ { MAP_OUTPUT, "Updated_MRS", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, Updated_MRS), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(TY_DistValue), offsetof(outC_ScanSSP_8, _L1), &_Type_TY_DistValue_Utils, NULL, NULL, &scope_49, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_8, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_8, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_ScanSSP_8, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_8, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_ScanSSP_8, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_8, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_8, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_8, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 18 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 0}
};
static const MappingScope scope_40 = {
  "ScanSSP/ ScanSSP_8",
  scope_40_entries, 19,
};

/* ScanAdh/ ScanAdh_2 */
static const MappingEntry scope_39_entries[18] = {
  /* 0 */ { MAP_OUTPUT, "Continue", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, Continue), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 1 */ { MAP_OUTPUT, "Updated_MRS", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, Updated_MRS), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(TY_Adh), offsetof(outC_ScanAdh_2, _L1), &_Type_TY_Adh_Utils, NULL, NULL, &scope_48, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_ScanAdh_2, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_ScanAdh_2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_ScanAdh_2, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_ScanAdh_2, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_ScanAdh_2, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_ScanAdh_2, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_39 = {
  "ScanAdh/ ScanAdh_2",
  scope_39_entries, 18,
};

/* ScanSSP/ ScanSSP_2math::Min 1/ */
static const MappingEntry scope_38_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, Mi_Output_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L21_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L22_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L24_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_2, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_38 = {
  "ScanSSP/ ScanSSP_2math::Min 1/",
  scope_38_entries, 5,
};

/* ScanSSP/ ScanSSP_2 */
static const MappingEntry scope_37_entries[19] = {
  /* 0 */ { MAP_OUTPUT, "Continue", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_2, Continue), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 1 */ { MAP_OUTPUT, "Updated_MRS", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, Updated_MRS), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(TY_DistValue), offsetof(outC_ScanSSP_2, _L1), &_Type_TY_DistValue_Utils, NULL, NULL, &scope_49, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_2, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_2, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_ScanSSP_2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_2, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_ScanSSP_2, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_2, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_2, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_2, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 18 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 0}
};
static const MappingScope scope_37 = {
  "ScanSSP/ ScanSSP_2",
  scope_37_entries, 19,
};

/* ScanSSP/ ScanSSP_4math::Min 1/ */
static const MappingEntry scope_36_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, Mi_Output_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L21_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L22_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L24_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_4, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_36 = {
  "ScanSSP/ ScanSSP_4math::Min 1/",
  scope_36_entries, 5,
};

/* ScanSSP/ ScanSSP_4 */
static const MappingEntry scope_35_entries[19] = {
  /* 0 */ { MAP_OUTPUT, "Continue", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_4, Continue), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 1 */ { MAP_OUTPUT, "Updated_MRS", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, Updated_MRS), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(TY_DistValue), offsetof(outC_ScanSSP_4, _L1), &_Type_TY_DistValue_Utils, NULL, NULL, &scope_49, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_4, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_4, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_ScanSSP_4, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_4, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_ScanSSP_4, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_4, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_ScanSSP_4, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_ScanSSP_4, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 18 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 0}
};
static const MappingScope scope_35 = {
  "ScanSSP/ ScanSSP_4",
  scope_35_entries, 19,
};

/* ScanPositions/ ScanPositions_8_8 */
static const MappingEntry scope_34_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "MRS", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_8, MRS), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 1 */ { MAP_OUTPUT, "Pos_i_next", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_8, Pos_i_next), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_INSTANCE, "ScanSSP 1", &iter_foldwi_8, sizeof(outC_ScanSSP_8), offsetof(outC_ScanPositions_8_8, Context_1), NULL, NULL, NULL, &scope_40, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1553), offsetof(outC_ScanPositions_8_8, _L2), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_8, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_8, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_8, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_ScanPositions_8_8, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_ScanPositions_8_8, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_8, _L29), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(array_real_8), offsetof(outC_ScanPositions_8_8, _L30), &_Type_array_real_8_Utils, NULL, NULL, &scope_53, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(array_real_8), offsetof(outC_ScanPositions_8_8, _L31), &_Type_array_real_8_Utils, NULL, NULL, &scope_53, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_8, _L32), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_34 = {
  "ScanPositions/ ScanPositions_8_8",
  scope_34_entries, 13,
};

/* BooleanScanPositions/ BooleanScanPositions_2 */
static const MappingEntry scope_33_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "MRS", NULL, sizeof(kcg_bool), offsetof(outC_BooleanScanPositions_2, MRS), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 1 */ { MAP_OUTPUT, "Pos_i_next", NULL, sizeof(kcg_real), offsetof(outC_BooleanScanPositions_2, Pos_i_next), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_INSTANCE, "ScanAdh 1", &iter_foldwi_2, sizeof(outC_ScanAdh_2), offsetof(outC_BooleanScanPositions_2, Context_1), NULL, NULL, NULL, &scope_39, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1550), offsetof(outC_BooleanScanPositions_2, _L2), &_Type_array__1550_Utils, NULL, NULL, &scope_51, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_BooleanScanPositions_2, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_BooleanScanPositions_2, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_BooleanScanPositions_2, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_BooleanScanPositions_2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_BooleanScanPositions_2, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_real), offsetof(outC_BooleanScanPositions_2, _L29), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(array_real_2), offsetof(outC_BooleanScanPositions_2, _L30), &_Type_array_real_2_Utils, NULL, NULL, &scope_58, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(array_real_2), offsetof(outC_BooleanScanPositions_2, _L31), &_Type_array_real_2_Utils, NULL, NULL, &scope_58, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_BooleanScanPositions_2, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_33 = {
  "BooleanScanPositions/ BooleanScanPositions_2",
  scope_33_entries, 13,
};

/* ScanPositions/ ScanPositions_2_2 */
static const MappingEntry scope_32_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "MRS", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_2_2, MRS), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 1 */ { MAP_OUTPUT, "Pos_i_next", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_2_2, Pos_i_next), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_INSTANCE, "ScanSSP 1", &iter_foldwi_8, sizeof(outC_ScanSSP_2), offsetof(outC_ScanPositions_2_2, Context_1), NULL, NULL, NULL, &scope_37, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1547), offsetof(outC_ScanPositions_2_2, _L2), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_2_2, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_2_2, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_2_2, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_ScanPositions_2_2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_ScanPositions_2_2, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_2_2, _L29), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(array_real_2), offsetof(outC_ScanPositions_2_2, _L30), &_Type_array_real_2_Utils, NULL, NULL, &scope_58, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(array_real_2), offsetof(outC_ScanPositions_2_2, _L31), &_Type_array_real_2_Utils, NULL, NULL, &scope_58, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_2_2, _L32), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_32 = {
  "ScanPositions/ ScanPositions_2_2",
  scope_32_entries, 13,
};

/* ScanPositions/ ScanPositions_8_4 */
static const MappingEntry scope_31_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "MRS", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_4, MRS), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 1 */ { MAP_OUTPUT, "Pos_i_next", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_4, Pos_i_next), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_INSTANCE, "ScanSSP 1", &iter_foldwi_8, sizeof(outC_ScanSSP_4), offsetof(outC_ScanPositions_8_4, Context_1), NULL, NULL, NULL, &scope_35, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1553), offsetof(outC_ScanPositions_8_4, _L2), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_4, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_4, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_4, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_ScanPositions_8_4, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_ScanPositions_8_4, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_4, _L29), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(array_real_8), offsetof(outC_ScanPositions_8_4, _L30), &_Type_array_real_8_Utils, NULL, NULL, &scope_53, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(array_real_8), offsetof(outC_ScanPositions_8_4, _L31), &_Type_array_real_8_Utils, NULL, NULL, &scope_53, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), offsetof(outC_ScanPositions_8_4, _L32), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_31 = {
  "ScanPositions/ ScanPositions_8_4",
  scope_31_entries, 13,
};

/* Spreader_Operator/ Spreader_Operator_8_8 */
static const MappingEntry scope_30_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "SSP_100", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_8, SSP_100), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 13},
  /* 1 */ { MAP_INSTANCE, "ScanPositions 1", &iter_mapfold_25, sizeof(outC_ScanPositions_8_8), offsetof(outC_Spreader_Operator_8_8, Context_1), NULL, NULL, NULL, &scope_34, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_8, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(array__1553), offsetof(outC_Spreader_Operator_8_8, _L11), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_8, _L12), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_real_24), offsetof(outC_Spreader_Operator_8_8, _L13), &_Type_array_real_24_Utils, NULL, NULL, &scope_56, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_8, _L14), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(array_real_1), offsetof(outC_Spreader_Operator_8_8, _L15), &_Type_array_real_1_Utils, NULL, NULL, &scope_57, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_8, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1562), offsetof(outC_Spreader_Operator_8_8, _L2), &_Type_array__1562_Utils, NULL, NULL, &scope_55, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_8, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_8, _L5), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_8, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_8, _L9), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 1}
};
static const MappingScope scope_30 = {
  "Spreader_Operator/ Spreader_Operator_8_8",
  scope_30_entries, 14,
};

/* Bool_Spreader_Operator/ Bool_Spreader_Operator_2 */
static const MappingEntry scope_29_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "BooleanScanPositions 1", &iter_mapfold_25, sizeof(outC_BooleanScanPositions_2), offsetof(outC_Bool_Spreader_Operator_2, Context_1), NULL, NULL, NULL, &scope_33, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Values_100", NULL, sizeof(array_bool_25), offsetof(outC_Bool_Spreader_Operator_2, Values_100), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 13},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Bool_Spreader_Operator_2, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Bool_Spreader_Operator_2, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(array__1550), offsetof(outC_Bool_Spreader_Operator_2, _L11), &_Type_array__1550_Utils, NULL, NULL, &scope_51, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(array_real_25), offsetof(outC_Bool_Spreader_Operator_2, _L12), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1586), offsetof(outC_Bool_Spreader_Operator_2, _L2), &_Type_array__1586_Utils, NULL, NULL, &scope_63, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_bool_24), offsetof(outC_Bool_Spreader_Operator_2, _L3), &_Type_array_bool_24_Utils, NULL, NULL, &scope_62, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Bool_Spreader_Operator_2, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_bool_25), offsetof(outC_Bool_Spreader_Operator_2, _L5), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_bool_1), offsetof(outC_Bool_Spreader_Operator_2, _L6), &_Type_array_bool_1_Utils, NULL, NULL, &scope_61, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_Bool_Spreader_Operator_2, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(array_bool_25), offsetof(outC_Bool_Spreader_Operator_2, _L8), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_bool_25), offsetof(outC_Bool_Spreader_Operator_2, _L9), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_29 = {
  "Bool_Spreader_Operator/ Bool_Spreader_Operator_2",
  scope_29_entries, 14,
};

/* ComputeAcc/ ComputeAcc */
static const MappingEntry scope_28_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_real), offsetof(outC_ComputeAcc, Output1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_ComputeAcc, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_ComputeAcc, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_ComputeAcc, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_ComputeAcc, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_ComputeAcc, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_28 = {
  "ComputeAcc/ ComputeAcc",
  scope_28_entries, 6,
};

/* ASB_Operator/ ASB_Operator */
static const MappingEntry scope_27_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_real), offsetof(outC_ASB_Operator, Output1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_ASB_Operator, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ASB_Operator, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_ASB_Operator, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_27 = {
  "ASB_Operator/ ASB_Operator",
  scope_27_entries, 4,
};

/* AEB_Operator/ AEB_OperatorIfBlock1:else:else: */
static const MappingEntry scope_22_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_AEB_Operator, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_22 = {
  "AEB_Operator/ AEB_OperatorIfBlock1:else:else:",
  scope_22_entries, 3,
};

/* AEB_Operator/ AEB_OperatorIfBlock1:else: */
static const MappingEntry scope_21_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_AEB_Operator, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_21 = {
  "AEB_Operator/ AEB_OperatorIfBlock1:else:",
  scope_21_entries, 3,
};

/* AEB_Operator/ AEB_OperatorIfBlock1: */
static const MappingEntry scope_20_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_AEB_Operator, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_false, &scope_21, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_20 = {
  "AEB_Operator/ AEB_OperatorIfBlock1:",
  scope_20_entries, 3,
};

/* AEB_Operator/ AEB_Operator */
static const MappingEntry scope_19_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "EB", NULL, sizeof(kcg_real), offsetof(outC_AEB_Operator, EB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 0},
  /* 2 */ { MAP_LOCAL, "L_EB", NULL, sizeof(kcg_real), offsetof(outC_AEB_Operator, L_EB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_AEB_Operator, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_AEB_Operator, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_AEB_Operator, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_AEB_Operator, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_19 = {
  "AEB_Operator/ AEB_Operator",
  scope_19_entries, 7,
};

/* Spreader_Operator/ Spreader_Operator_2_2 */
static const MappingEntry scope_18_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "SSP_100", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_2_2, SSP_100), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 13},
  /* 1 */ { MAP_INSTANCE, "ScanPositions 1", &iter_mapfold_25, sizeof(outC_ScanPositions_2_2), offsetof(outC_Spreader_Operator_2_2, Context_1), NULL, NULL, NULL, &scope_32, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_2_2, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(array__1547), offsetof(outC_Spreader_Operator_2_2, _L11), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_2_2, _L12), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_real_24), offsetof(outC_Spreader_Operator_2_2, _L13), &_Type_array_real_24_Utils, NULL, NULL, &scope_56, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_2_2, _L14), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(array_real_1), offsetof(outC_Spreader_Operator_2_2, _L15), &_Type_array_real_1_Utils, NULL, NULL, &scope_57, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_2_2, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1574), offsetof(outC_Spreader_Operator_2_2, _L2), &_Type_array__1574_Utils, NULL, NULL, &scope_59, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_2_2, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_2_2, _L5), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_2_2, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_2_2, _L9), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 1}
};
static const MappingScope scope_18 = {
  "Spreader_Operator/ Spreader_Operator_2_2",
  scope_18_entries, 14,
};

/* Spreader_Operator/ Spreader_Operator_8_4 */
static const MappingEntry scope_17_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "SSP_100", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_4, SSP_100), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 13},
  /* 1 */ { MAP_INSTANCE, "ScanPositions 1", &iter_mapfold_25, sizeof(outC_ScanPositions_8_4), offsetof(outC_Spreader_Operator_8_4, Context_1), NULL, NULL, NULL, &scope_31, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_4, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(array__1553), offsetof(outC_Spreader_Operator_8_4, _L11), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_4, _L12), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_real_24), offsetof(outC_Spreader_Operator_8_4, _L13), &_Type_array_real_24_Utils, NULL, NULL, &scope_56, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_4, _L14), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(array_real_1), offsetof(outC_Spreader_Operator_8_4, _L15), &_Type_array_real_1_Utils, NULL, NULL, &scope_57, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_4, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1562), offsetof(outC_Spreader_Operator_8_4, _L2), &_Type_array__1562_Utils, NULL, NULL, &scope_55, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_4, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_4, _L5), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_Spreader_Operator_8_4, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_real_25), offsetof(outC_Spreader_Operator_8_4, _L9), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 1}
};
static const MappingScope scope_17 = {
  "Spreader_Operator/ Spreader_Operator_8_4",
  scope_17_entries, 14,
};

/* dV_Operator/ dV_OperatorIfBlock1:else: */
static const MappingEntry scope_13_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_dV_Operator, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_13_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_13_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_13 = {
  "dV_Operator/ dV_OperatorIfBlock1:else:",
  scope_13_entries, 3,
};

/* dV_Operator/ dV_OperatorIfBlock1: */
static const MappingEntry scope_12_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_dV_Operator, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_false, &scope_13, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_12 = {
  "dV_Operator/ dV_OperatorIfBlock1:",
  scope_12_entries, 3,
};

/* dV_Operator/ dV_Operator */
static const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 0},
  /* 1 */ { MAP_OUTPUT, "dV", NULL, sizeof(kcg_real), offsetof(outC_dV_Operator, dV), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_11 = {
  "dV_Operator/ dV_Operator",
  scope_11_entries, 2,
};

/* math::Min3/ Min3_math_real */
static const MappingEntry scope_10_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Mi3_Output", NULL, sizeof(kcg_real), offsetof(outC_Min3_math_real, Mi3_Output), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Min3_math_real, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Min3_math_real, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Min3_math_real, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Min3_math_real, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_Min3_math_real, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_Min3_math_real, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Min3_math_real, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_Min3_math_real, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), offsetof(outC_Min3_math_real, _L9), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_10 = {
  "math::Min3/ Min3_math_real",
  scope_10_entries, 10,
};

/* SBD_Operator/ SBD_Operator */
static const MappingEntry scope_9_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "Vsbd", NULL, sizeof(array_real_25), offsetof(outC_SBD_Operator, Vsbd), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_real_25), offsetof(outC_SBD_Operator, _L1), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_real_25), offsetof(outC_SBD_Operator, _L2), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 1}
};
static const MappingScope scope_9 = {
  "SBD_Operator/ SBD_Operator",
  scope_9_entries, 3,
};

/* ACCeler_Operator/ ACCeler_Operator */
static const MappingEntry scope_8_entries[20] = {
  /* 0 */ { MAP_INSTANCE, "AEB_Operator 1", &iter_map_25, sizeof(outC_AEB_Operator), offsetof(outC_ACCeler_Operator, _2_Context_1), NULL, NULL, NULL, &scope_19, 1, 0},
  /* 1 */ { MAP_INSTANCE, "ASB_Operator 1", &iter_map_25, sizeof(outC_ASB_Operator), offsetof(outC_ACCeler_Operator, Context_1), NULL, NULL, NULL, &scope_27, 1, 1},
  /* 2 */ { MAP_OUTPUT, "Asafe", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, Asafe), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 18},
  /* 3 */ { MAP_OUTPUT, "Aservice", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, Aservice), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 19},
  /* 4 */ { MAP_INSTANCE, "Bool_Spreader_Operator 1", NULL, sizeof(outC_Bool_Spreader_Operator_2), offsetof(outC_ACCeler_Operator, _1_Context_1), NULL, NULL, NULL, &scope_29, 1, 3},
  /* 5 */ { MAP_INSTANCE, "ComputeAcc", &iter_map_25, sizeof(outC_ComputeAcc), offsetof(outC_ACCeler_Operator, Context_ComputeAcc), NULL, NULL, NULL, &scope_28, 1, 2},
  /* 6 */ { MAP_INSTANCE, "Spreader_Operator 2", NULL, sizeof(outC_Spreader_Operator_8_8), offsetof(outC_ACCeler_Operator, Context_2), NULL, NULL, NULL, &scope_30, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L1), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L13), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L14), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(array__1589), offsetof(outC_ACCeler_Operator, _L16), &_Type_array__1589_Utils, NULL, NULL, &scope_64, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L17", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L17), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(array_bool_25), offsetof(outC_ACCeler_Operator, _L19), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__1550), offsetof(outC_ACCeler_Operator, _L2), &_Type_array__1550_Utils, NULL, NULL, &scope_51, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L21", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L21), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L24", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L24), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L25", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L25), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L3", NULL, sizeof(array__1553), offsetof(outC_ACCeler_Operator, _L3), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 7},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_bool_25), offsetof(outC_ACCeler_Operator, _L4), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_real_25), offsetof(outC_ACCeler_Operator, _L5), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 9}
};
static const MappingScope scope_8 = {
  "ACCeler_Operator/ ACCeler_Operator",
  scope_8_entries, 20,
};

/* MRSP_Operator/ MRSP_Operatormath::Min 2/ */
static const MappingEntry scope_7_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_MRSP_Operator, _L21_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_MRSP_Operator, _L22_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_MRSP_Operator, _L24_2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Operator, _L25_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_7 = {
  "MRSP_Operator/ MRSP_Operatormath::Min 2/",
  scope_7_entries, 4,
};

/* MRSP_Operator/ MRSP_Operator */
static const MappingEntry scope_6_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, MRSP), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 25},
  /* 1 */ { MAP_INSTANCE, "Spreader_Operator 1", NULL, sizeof(outC_Spreader_Operator_8_4), offsetof(outC_MRSP_Operator, Context_1), NULL, NULL, NULL, &scope_17, 1, 4},
  /* 2 */ { MAP_INSTANCE, "Spreader_Operator 2", NULL, sizeof(outC_Spreader_Operator_2_2), offsetof(outC_MRSP_Operator, Context_2), NULL, NULL, NULL, &scope_18, 1, 5},
  /* 3 */ { MAP_INSTANCE, "Spreader_Operator 3", NULL, sizeof(outC_Spreader_Operator_2_2), offsetof(outC_MRSP_Operator, _1_Context_3), NULL, NULL, NULL, &scope_18, 1, 6},
  /* 4 */ { MAP_INSTANCE, "Spreader_Operator 4", NULL, sizeof(outC_Spreader_Operator_2_2), offsetof(outC_MRSP_Operator, Context_4), NULL, NULL, NULL, &scope_18, 1, 8},
  /* 5 */ { MAP_INSTANCE, "Spreader_Operator 5", NULL, sizeof(outC_Spreader_Operator_2_2), offsetof(outC_MRSP_Operator, Context_5), NULL, NULL, NULL, &scope_18, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(array__1553), offsetof(outC_MRSP_Operator, _L1), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L10), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L11), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 17},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L13), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 18},
  /* 10 */ { MAP_LOCAL, "_L14", NULL, sizeof(array__1547), offsetof(outC_MRSP_Operator, _L14), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 19},
  /* 11 */ { MAP_LOCAL, "_L15", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L15), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 20},
  /* 12 */ { MAP_LOCAL, "_L16", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L16), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 21},
  /* 13 */ { MAP_LOCAL, "_L17", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L17), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 22},
  /* 14 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L18), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 23},
  /* 15 */ { MAP_LOCAL, "_L19", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L19), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 24},
  /* 16 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L2), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 10},
  /* 17 */ { MAP_LOCAL, "_L4", NULL, sizeof(array__1547), offsetof(outC_MRSP_Operator, _L4), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(array__1547), offsetof(outC_MRSP_Operator, _L5), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 12},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(array__1547), offsetof(outC_MRSP_Operator, _L7), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L8", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L8), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 14},
  /* 21 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, _L9), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 15},
  /* 22 */ { MAP_INSTANCE, "dV_Operator 1", &iter_map_25, sizeof(outC_dV_Operator), offsetof(outC_MRSP_Operator, _3_Context_1), NULL, NULL, NULL, &scope_11, 1, 3},
  /* 23 */ { MAP_OUTPUT, "dV_ebi", NULL, sizeof(array_real_25), offsetof(outC_MRSP_Operator, dV_ebi), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 26},
  /* 24 */ { MAP_EXPANDED, "math::Min 2", &iter_map_25, 0, 0, NULL, NULL, NULL, &scope_7, 1, 2},
  /* 25 */ { MAP_INSTANCE, "math::Min3 2", &iter_map_25, sizeof(outC_Min3_math_real), offsetof(outC_MRSP_Operator, _2_Context_2), NULL, NULL, NULL, &scope_10, 1, 1},
  /* 26 */ { MAP_INSTANCE, "math::Min3 3", &iter_map_25, sizeof(outC_Min3_math_real), offsetof(outC_MRSP_Operator, Context_3), NULL, NULL, NULL, &scope_10, 1, 0}
};
static const MappingScope scope_6 = {
  "MRSP_Operator/ MRSP_Operator",
  scope_6_entries, 27,
};

/* EBD_Operator/ EBD_Operatormath::Min 1/ */
static const MappingEntry scope_5_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, Mi_Output_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L21_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L22_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L24_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_EBD_Operator, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_5 = {
  "EBD_Operator/ EBD_Operatormath::Min 1/",
  scope_5_entries, 5,
};

/* EBD_Operator/ EBD_Operator */
static const MappingEntry scope_4_entries[18] = {
  /* 0 */ { MAP_OUTPUT, "Ceilling_Mode", NULL, sizeof(kcg_bool), offsetof(outC_EBD_Operator, Ceilling_Mode), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 1 */ { MAP_OUTPUT, "Vebd", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, Vebd), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 2 */ { MAP_OUTPUT, "Vebd_Table", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, Vebd_Table), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L11), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_EBD_Operator, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 16 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), offsetof(outC_EBD_Operator, _L9), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 17 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 0}
};
static const MappingScope scope_4 = {
  "EBD_Operator/ EBD_Operator",
  scope_4_entries, 18,
};

/* Step_Operator/ Step_Operator */
static const MappingEntry scope_3_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "Next_SizePos", NULL, sizeof(TY_SizePos), offsetof(outC_Step_Operator, Next_SizePos), &_Type_TY_SizePos_Utils, NULL, NULL, &scope_46, 1, 6},
  /* 1 */ { MAP_OUTPUT, "POS", NULL, sizeof(kcg_real), offsetof(outC_Step_Operator, POS), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_OUTPUT, "SIZE", NULL, sizeof(kcg_real), offsetof(outC_Step_Operator, SIZE), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Step_Operator, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_Step_Operator, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_Step_Operator, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(TY_SizePos), offsetof(outC_Step_Operator, _L14), &_Type_TY_SizePos_Utils, NULL, NULL, &scope_46, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Step_Operator, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Step_Operator, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_3 = {
  "Step_Operator/ Step_Operator",
  scope_3_entries, 9,
};

/* Root_SDM/ Root_SDM */
static const MappingEntry scope_2_entries[41] = {
  /* 0 */ { MAP_INSTANCE, "ACCeler_Operator", NULL, sizeof(outC_ACCeler_Operator), offsetof(outC_Root_SDM, Context_ACCeler_Operator), NULL, NULL, NULL, &scope_8, 1, 3},
  /* 1 */ { MAP_OUTPUT, "C_Mode", NULL, sizeof(array_bool_25), offsetof(outC_Root_SDM, C_Mode), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 38},
  /* 2 */ { MAP_INSTANCE, "EBD_Operator 1", &iter_mapfold_25, sizeof(outC_EBD_Operator), offsetof(outC_Root_SDM, _2_Context_1), NULL, NULL, NULL, &scope_4, 1, 1},
  /* 3 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, MRSP), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 39},
  /* 4 */ { MAP_INSTANCE, "MRSP_Operator 1", NULL, sizeof(outC_MRSP_Operator), offsetof(outC_Root_SDM, _1_Context_1), NULL, NULL, NULL, &scope_6, 1, 2},
  /* 5 */ { MAP_OUTPUT, "Position", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, Position), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 40},
  /* 6 */ { MAP_INSTANCE, "SBD_Operator 1", NULL, sizeof(outC_SBD_Operator), offsetof(outC_Root_SDM, _3_Context_1), NULL, NULL, NULL, &scope_9, 1, 4},
  /* 7 */ { MAP_INSTANCE, "Step_Operator 1", &iter_mapfold_25, sizeof(outC_Step_Operator), offsetof(outC_Root_SDM, Context_1), NULL, NULL, NULL, &scope_3, 1, 0},
  /* 8 */ { MAP_OUTPUT, "Vebd", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, Vebd), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 36},
  /* 9 */ { MAP_OUTPUT, "Vsbd", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, Vsbd), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 37},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L1), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L10), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(TY_SizePos), offsetof(outC_Root_SDM, _L11), &_Type_TY_SizePos_Utils, NULL, NULL, &scope_46, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L14", NULL, sizeof(TY_SizePos), offsetof(outC_Root_SDM, _L14), &_Type_TY_SizePos_Utils, NULL, NULL, &scope_46, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_Root_SDM, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_real), offsetof(outC_Root_SDM, _L17), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L19", NULL, sizeof(array__1550), offsetof(outC_Root_SDM, _L19), &_Type_array__1550_Utils, NULL, NULL, &scope_51, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L2), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 7},
  /* 18 */ { MAP_LOCAL, "_L20", NULL, sizeof(array__1553), offsetof(outC_Root_SDM, _L20), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L21", NULL, sizeof(array__1553), offsetof(outC_Root_SDM, _L21), &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 19},
  /* 20 */ { MAP_LOCAL, "_L22", NULL, sizeof(array__1547), offsetof(outC_Root_SDM, _L22), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L23", NULL, sizeof(array__1547), offsetof(outC_Root_SDM, _L23), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L24", NULL, sizeof(array__1547), offsetof(outC_Root_SDM, _L24), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 22},
  /* 23 */ { MAP_LOCAL, "_L25", NULL, sizeof(array__1547), offsetof(outC_Root_SDM, _L25), &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 23},
  /* 24 */ { MAP_LOCAL, "_L26", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L26), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 24},
  /* 25 */ { MAP_LOCAL, "_L27", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L27), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 25},
  /* 26 */ { MAP_LOCAL, "_L28", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L28), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 26},
  /* 27 */ { MAP_LOCAL, "_L29", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L29), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 27},
  /* 28 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L3), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 6},
  /* 29 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Root_SDM, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L31", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L31), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L32", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L32), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L34", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L34), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_real), offsetof(outC_Root_SDM, _L35), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L38", NULL, sizeof(array_bool_25), offsetof(outC_Root_SDM, _L38), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L39", NULL, sizeof(array_bool_25), offsetof(outC_Root_SDM, _L39), &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L4), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 8},
  /* 37 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L5), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 12},
  /* 38 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_Root_SDM, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 39 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, _L9), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 10},
  /* 40 */ { MAP_OUTPUT, "dV_ebi", NULL, sizeof(array_real_25), offsetof(outC_Root_SDM, dV_ebi), &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 35}
};
static const MappingScope scope_2 = {
  "Root_SDM/ Root_SDM",
  scope_2_entries, 41,
};

/* Root/ Root */
static const MappingEntry scope_1_entries[19] = {
  /* 0 */ { MAP_OUTPUT, "C_Mode", NULL, sizeof(array_bool_25), (int)&outputs_ctx.C_Mode, &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 16},
  /* 1 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(array_real_25), (int)&outputs_ctx.MRSP, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 17},
  /* 2 */ { MAP_OUTPUT, "Position", NULL, sizeof(array_real_25), (int)&outputs_ctx.Position, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 18},
  /* 3 */ { MAP_INSTANCE, "Root_SDM 1", NULL, sizeof(outC_Root_SDM), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 4 */ { MAP_OUTPUT, "Vebd", NULL, sizeof(array_real_25), (int)&outputs_ctx.Vebd, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 14},
  /* 5 */ { MAP_OUTPUT, "Vsbd", NULL, sizeof(array_real_25), (int)&outputs_ctx.Vsbd, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 15},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_real_25), (int)&outputs_ctx._L1, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(array__1553), (int)&outputs_ctx._L10, &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(array__1553), (int)&outputs_ctx._L11, &_Type_array__1553_Utils, NULL, NULL, &scope_52, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(array__1550), (int)&outputs_ctx._L12, &_Type_array__1550_Utils, NULL, NULL, &scope_51, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(array__1547), (int)&outputs_ctx._L13, &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(array_real_25), (int)&outputs_ctx._L14, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L15", NULL, sizeof(array_real_25), (int)&outputs_ctx._L15, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_real_25), (int)&outputs_ctx._L2, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 3},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_real_25), (int)&outputs_ctx._L3, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 2},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_bool_25), (int)&outputs_ctx._L4, &_Type_array_bool_25_Utils, NULL, NULL, &scope_60, 1, 1},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(array__1547), (int)&outputs_ctx._L8, &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 7},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__1547), (int)&outputs_ctx._L9, &_Type_array__1547_Utils, NULL, NULL, &scope_50, 1, 6},
  /* 18 */ { MAP_OUTPUT, "dV_ebi", NULL, sizeof(array_real_25), (int)&outputs_ctx.dV_ebi, &_Type_array_real_25_Utils, NULL, NULL, &scope_54, 1, 13}
};
static const MappingScope scope_1 = {
  "Root/ Root",
  scope_1_entries, 19,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Root", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

