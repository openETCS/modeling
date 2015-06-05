/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */
static const MappingIterator iter_array_229;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_271;
static const MappingIterator iter_array_231;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_224;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_7;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_231;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_array_229 = { "array", 229, 229, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_271 = { "array", 271, 271, NULL};
static const MappingIterator iter_array_231 = { "array", 231, 231, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_224 = { "array", 224, 224, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_231 = { "foldi", 231, 231, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_41, 1);
MAP_DECL(scope_40, 1);
MAP_DECL(scope_39, 1);
MAP_DECL(scope_38, 1);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 1);
MAP_DECL(scope_35, 1);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 1);
MAP_DECL(scope_31, 14);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 5);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 1);
MAP_DECL(scope_26, 1);
MAP_DECL(scope_25, 1);
MAP_DECL(scope_24, 7);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_18, 10);
MAP_DECL(scope_17, 10);
MAP_DECL(scope_16, 8);
MAP_DECL(scope_15, 6);
MAP_DECL(scope_14, 15);
MAP_DECL(scope_13, 10);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_5, 6);
MAP_DECL(scope_4, 39);
MAP_DECL(scope_3, 12);
MAP_DECL(scope_2, 26);
MAP_DECL(scope_1, 19);
MAP_DECL(scope_0, 1);

/* array__793 */
static const MappingEntry scope_41_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__714), 0, &_Type_struct__714_Utils, NULL, NULL, &scope_24, 1, 0}
};
static const MappingScope scope_41 = {
  "array__793",
  scope_41_entries, 1,
};

/* array_int_229 */
static const MappingEntry scope_40_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_229, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_40 = {
  "array_int_229",
  scope_40_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_39_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_39 = {
  "array_int_5",
  scope_39_entries, 1,
};

/* array_int_1 */
static const MappingEntry scope_38_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_38 = {
  "array_int_1",
  scope_38_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_37 = {
  "array_int_4",
  scope_37_entries, 1,
};

/* array_int_271 */
static const MappingEntry scope_36_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_271, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_36 = {
  "array_int_271",
  scope_36_entries, 1,
};

/* array_int_7_33_231 */
static const MappingEntry scope_35_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_7_33), 0, &_Type_array_int_7_33_Utils, NULL, NULL, &scope_25, 1, 0}
};
static const MappingScope scope_35 = {
  "array_int_7_33_231",
  scope_35_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_28, 1, 0}
};
static const MappingScope scope_34 = {
  "array_int_500_500",
  scope_34_entries, 1,
};

/* struct__767 */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__767, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_28, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__764), offsetof(struct__767, PacketHeaders), &_Type_array__764_Utils, NULL, NULL, &scope_32, 1, 0}
};
static const MappingScope scope_33 = {
  "struct__767",
  scope_33_entries, 2,
};

/* array__764 */
static const MappingEntry scope_32_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__736), 0, &_Type_struct__736_Utils, NULL, NULL, &scope_29, 1, 0}
};
static const MappingScope scope_32 = {
  "array__764",
  scope_32_entries, 1,
};

/* struct__747 */
static const MappingEntry scope_31_entries[14] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__747, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__747, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__747, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__747, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__747, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__747, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__747, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__747, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__747, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__747, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__747, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__747, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__744), offsetof(struct__747, SECTIONS), &_Type_array__744_Utils, NULL, NULL, &scope_30, 1, 13},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__747, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_31 = {
  "struct__747",
  scope_31_entries, 14,
};

/* array__744 */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__714), 0, &_Type_struct__714_Utils, NULL, NULL, &scope_24, 1, 0}
};
static const MappingScope scope_30 = {
  "array__744",
  scope_30_entries, 1,
};

/* struct__736 */
static const MappingEntry scope_29_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__736, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__736, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__736, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__736, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__736, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_29 = {
  "struct__736",
  scope_29_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_28 = {
  "array_int_500",
  scope_28_entries, 1,
};

/* array__730 */
static const MappingEntry scope_27_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__714), 0, &_Type_struct__714_Utils, NULL, NULL, &scope_24, 1, 0}
};
static const MappingScope scope_27 = {
  "array__730",
  scope_27_entries, 1,
};

/* array_int_224 */
static const MappingEntry scope_26_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_224, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_26 = {
  "array_int_224",
  scope_26_entries, 1,
};

/* array_int_7_33 */
static const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_7), 0, &_Type_array_int_7_Utils, NULL, NULL, &scope_23, 1, 0}
};
static const MappingScope scope_25 = {
  "array_int_7_33",
  scope_25_entries, 1,
};

/* struct__714 */
static const MappingEntry scope_24_entries[7] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__714, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__714, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__714, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__714, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__714, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__714, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__714, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_24 = {
  "struct__714",
  scope_24_entries, 7,
};

/* array_int_7 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "array_int_7",
  scope_23_entries, 1,
};

/* TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_18_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_24, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_7), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_7_Utils, NULL, NULL, &scope_23, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P005_section_array_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P005_section_array_T_TM_Utils, NULL, NULL, &scope_23, 1, 9}
};
static const MappingScope scope_18 = {
  "TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal",
  scope_18_entries, 10,
};

/* TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_17_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_26, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_OBU_sectionlist_array_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L2), &_Type_P005_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_25, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L7), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_26, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, flat), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_26, 1, 9}
};
static const MappingScope scope_17 = {
  "TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal",
  scope_17_entries, 10,
};

/* TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal */
static const MappingEntry scope_16_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Flattened), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_26, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_flatten_array 2", &iter_foldi_231, sizeof(outC_C_P005_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_17, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_struct_to_array 2", &iter_map_33, sizeof(outC_C_P005_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_18, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_7_33), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_7_33_Utils, NULL, NULL, &scope_25, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P005_OBU_sectionlist_int_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L75), &_Type_P005_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_27, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L76), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_26, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L78), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_26, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_7_33_231), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_7_33_231_Utils, NULL, NULL, &scope_35, 1, 6}
};
static const MappingScope scope_16 = {
  "TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal",
  scope_16_entries, 8,
};

/* TM_lib_internal::DeterminePacketSizeInt/ DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_15_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_15 = {
  "TM_lib_internal::DeterminePacketSizeInt/ DeterminePacketSizeInt_TM_lib_internal",
  scope_15_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_14_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_14 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_14_entries, 15,
};

/* DRAFTS::SEND_FindSlot/ SEND_FindSlot_DRAFTS */
static const MappingEntry scope_13_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_DRAFTS, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_DRAFTS, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_DRAFTS, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_DRAFTS, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_DRAFTS, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_DRAFTS, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 2}
};
static const MappingScope scope_13 = {
  "DRAFTS::SEND_FindSlot/ SEND_FindSlot_DRAFTS",
  scope_13_entries, 10,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_12 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_12_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_11 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_11_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_10 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_10_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_9_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2}
};
static const MappingScope scope_8 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_8_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, &scope_8, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_7 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_7_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_6 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_6_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_5_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_5 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_5_entries, 6,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions */
static const MappingEntry scope_4_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 37},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 38},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_flatten_sections 1", NULL, sizeof(outC_C_P005_flatten_sections_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_16, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::DeterminePacketSizeInt 1", NULL, sizeof(outC_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_15, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_31, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_271), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L209), &_Type_array_int_271_Utils, NULL, NULL, &scope_36, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L365", NULL, sizeof(P005_trackide_sectionlist_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L365), &_Type_P005_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_30, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 21 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 24 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 25 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 26 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_37, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L375", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L375), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_24, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_38, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L380", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L380), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_26, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_39, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_28, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_229), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L384), &_Type_array_int_229_Utils, NULL, NULL, &scope_40, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__730), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L385), &_Type_array__730_Utils, NULL, NULL, &scope_27, 1, 35},
  /* 36 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__793), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L386), &_Type_array__793_Utils, NULL, NULL, &scope_41, 1, 34},
  /* 37 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 38 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_4 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions",
  scope_4_entries, 39,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_3_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_14, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_28, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_34, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_28, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_28, 1, 10}
};
static const MappingScope scope_3 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_3_entries, 12,
};

/* DRAFTS::SIM_SEND_WriteBaliseMessageHeader/ SIM_SEND_WriteBaliseMessa_DRAFTS */
static const MappingEntry scope_2_entries[26] = {
  /* 0 */ { MAP_INSTANCE, "DRAFTS::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_DRAFTS), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, Context_1), NULL, NULL, NULL, &scope_13, 1, 0},
  /* 1 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 23},
  /* 2 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 3 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 5}
};
static const MappingScope scope_2 = {
  "DRAFTS::SIM_SEND_WriteBaliseMessageHeader/ SIM_SEND_WriteBaliseMessa_DRAFTS",
  scope_2_entries, 26,
};

/* TM_trackside::Write_P005/ Write_P005_TM_trackside */
static const MappingEntry scope_1_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "DRAFTS::SIM_SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Error, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 2 */ { MAP_INPUT, "Packet05", NULL, sizeof(P005_trackside_int_T_TM), (int)&inputs_ctx.Packet05, &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_31, 1, 17},
  /* 3 */ { MAP_INPUT, "Packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&inputs_ctx.Packets, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_33, 1, 18},
  /* 4 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx.RadioPacketsOut, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_33, 1, 16},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::C_P005_tracksim_compr 1", NULL, sizeof(outC_C_P005_tracksim_compr_TM_conversions), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_4, 1, 2},
  /* 6 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), (int)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), (int)&outputs_ctx._L1, &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_31, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (int)&outputs_ctx._L10, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), (int)&outputs_ctx._L21, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), (int)&outputs_ctx._L22, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L39, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_33, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), (int)&outputs_ctx._L4, &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L40, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_33, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), (int)&outputs_ctx._L41, &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (int)&outputs_ctx._L42, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), (int)&outputs_ctx._L43, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (int)&outputs_ctx._L44, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 13}
};
static const MappingScope scope_1 = {
  "TM_trackside::Write_P005/ Write_P005_TM_trackside",
  scope_1_entries, 19,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_trackside::Write_P005", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

