/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */
static const MappingIterator iter_array_68;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_432;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_494;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_2;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_64;
static const MappingIterator iter_array_500;
static const MappingIterator iter_map_32;
static const MappingIterator iter_foldi_32;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_array_68 = { "array", 68, 68, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_432 = { "array", 432, 432, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_494 = { "array", 494, 494, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_map_32 = { "map", 32, 32, NULL};
static const MappingIterator iter_foldi_32 = { "foldi", 32, 32, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_47, 1);
MAP_DECL(scope_46, 1);
MAP_DECL(scope_45, 1);
MAP_DECL(scope_44, 1);
MAP_DECL(scope_43, 1);
MAP_DECL(scope_42, 1);
MAP_DECL(scope_41, 1);
MAP_DECL(scope_40, 1);
MAP_DECL(scope_39, 1);
MAP_DECL(scope_38, 12);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 1);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 1);
MAP_DECL(scope_32, 1);
MAP_DECL(scope_31, 5);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 2);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 5);
MAP_DECL(scope_26, 1);
MAP_DECL(scope_21, 5);
MAP_DECL(scope_20, 10);
MAP_DECL(scope_19, 6);
MAP_DECL(scope_18, 8);
MAP_DECL(scope_17, 11);
MAP_DECL(scope_16, 15);
MAP_DECL(scope_15, 10);
MAP_DECL(scope_14, 28);
MAP_DECL(scope_13, 2);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_9, 3);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 6);
MAP_DECL(scope_5, 37);
MAP_DECL(scope_4, 12);
MAP_DECL(scope_3, 26);
MAP_DECL(scope_2, 20);
MAP_DECL(scope_1, 26);
MAP_DECL(scope_0, 1);

/* array_int_33 */
static const MappingEntry scope_47_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_47 = {
  "array_int_33",
  scope_47_entries, 1,
};

/* array_int_68 */
static const MappingEntry scope_46_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_68, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_46 = {
  "array_int_68",
  scope_46_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_45_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_45 = {
  "array_int_4",
  scope_45_entries, 1,
};

/* array_int_432 */
static const MappingEntry scope_44_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_432, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_44 = {
  "array_int_432",
  scope_44_entries, 1,
};

/* array_int_2_32_32 */
static const MappingEntry scope_43_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2_32), 0, &_Type_array_int_2_32_Utils, NULL, NULL, &scope_33, 1, 0}
};
static const MappingScope scope_43 = {
  "array_int_2_32_32",
  scope_43_entries, 1,
};

/* array__933 */
static const MappingEntry scope_42_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__881), 0, &_Type_struct__881_Utils, NULL, NULL, &scope_31, 1, 0}
};
static const MappingScope scope_42 = {
  "array__933",
  scope_42_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_41_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_41 = {
  "array_int_6",
  scope_41_entries, 1,
};

/* array_int_494 */
static const MappingEntry scope_40_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_494, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_40 = {
  "array_int_494",
  scope_40_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_39_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_26, 1, 0}
};
static const MappingScope scope_39 = {
  "array_int_500_500",
  scope_39_entries, 1,
};

/* struct__909 */
static const MappingEntry scope_38_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__909, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__909, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__909, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(struct__909, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(struct__909, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__909, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__909, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__909, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(array__906), offsetof(struct__909, SECTIONS_SSP), &_Type_array__906_Utils, NULL, NULL, &scope_37, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__878), offsetof(struct__909, SECTIONS_q_diff), &_Type_array__878_Utils, NULL, NULL, &scope_30, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__909, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__909, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_38 = {
  "struct__909",
  scope_38_entries, 12,
};

/* array__906 */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__881), 0, &_Type_struct__881_Utils, NULL, NULL, &scope_31, 1, 0}
};
static const MappingScope scope_37 = {
  "array__906",
  scope_37_entries, 1,
};

/* array__903 */
static const MappingEntry scope_36_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__881), 0, &_Type_struct__881_Utils, NULL, NULL, &scope_31, 1, 0}
};
static const MappingScope scope_36 = {
  "array__903",
  scope_36_entries, 1,
};

/* struct__898 */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__898, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_26, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__895), offsetof(struct__898, PacketHeaders), &_Type_array__895_Utils, NULL, NULL, &scope_34, 1, 0}
};
static const MappingScope scope_35 = {
  "struct__898",
  scope_35_entries, 2,
};

/* array__895 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__862), 0, &_Type_struct__862_Utils, NULL, NULL, &scope_27, 1, 0}
};
static const MappingScope scope_34 = {
  "array__895",
  scope_34_entries, 1,
};

/* array_int_2_32 */
static const MappingEntry scope_33_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2), 0, &_Type_array_int_2_Utils, NULL, NULL, &scope_32, 1, 0}
};
static const MappingScope scope_33 = {
  "array_int_2_32",
  scope_33_entries, 1,
};

/* array_int_2 */
static const MappingEntry scope_32_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_32 = {
  "array_int_2",
  scope_32_entries, 1,
};

/* struct__881 */
static const MappingEntry scope_31_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__881, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__881, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__881, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__878), offsetof(struct__881, SECTIONS_q_diff), &_Type_array__878_Utils, NULL, NULL, &scope_30, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__881, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_31 = {
  "struct__881",
  scope_31_entries, 5,
};

/* array__878 */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__873), 0, &_Type_struct__873_Utils, NULL, NULL, &scope_29, 1, 0}
};
static const MappingScope scope_30 = {
  "array__878",
  scope_30_entries, 1,
};

/* struct__873 */
static const MappingEntry scope_29_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(struct__873, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(struct__873, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_29 = {
  "struct__873",
  scope_29_entries, 2,
};

/* array_int_64 */
static const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_28 = {
  "array_int_64",
  scope_28_entries, 1,
};

/* struct__862 */
static const MappingEntry scope_27_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__862, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__862, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__862, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__862, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__862, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_27 = {
  "struct__862",
  scope_27_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_26_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_26 = {
  "array_int_500",
  scope_26_entries, 1,
};

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal */
static const MappingEntry scope_21_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_qdiff_T_TM), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L1), &_Type_P027V1_section_int_qdiff_T_TM_Utils, NULL, NULL, &scope_29, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L2), &_Type_array_int_2_Utils, NULL, NULL, &scope_32, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P027V1_section_array_qdiff_T_TM), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, section_arrays), &_Type_P027V1_section_array_qdiff_T_TM_Utils, NULL, NULL, &scope_32, 1, 4}
};
static const MappingScope scope_21 = {
  "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal",
  scope_21_entries, 5,
};

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_20_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_Utils, NULL, NULL, &scope_28, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L2), &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_Utils, NULL, NULL, &scope_33, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L7), &_Type_P027V1_sections_array_flat_qdiff_T_TM_Utils, NULL, NULL, &scope_28, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, flat), &_Type_P027V1_sections_array_flat_qdiff_T_TM_Utils, NULL, NULL, &scope_28, 1, 9}
};
static const MappingScope scope_20 = {
  "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal",
  scope_20_entries, 10,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_19_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_19 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_19_entries, 6,
};

/* TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal */
static const MappingEntry scope_18_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Flattened), &_Type_P027V1_sections_array_flat_qdiff_T_TM_Utils, NULL, NULL, &scope_28, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff 1", &iter_foldi_32, sizeof(outC_C_P027V1_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_20, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff 1", &iter_map_32, sizeof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_21, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_2_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L74), &_Type_array_int_2_32_Utils, NULL, NULL, &scope_33, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L75), &_Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_Utils, NULL, NULL, &scope_30, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L76), &_Type_P027V1_sections_array_flat_qdiff_T_TM_Utils, NULL, NULL, &scope_28, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L83", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L83), &_Type_P027V1_sections_array_flat_qdiff_T_TM_Utils, NULL, NULL, &scope_28, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L84", NULL, sizeof(array_int_2_32_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L84), &_Type_array_int_2_32_32_Utils, NULL, NULL, &scope_43, 1, 6}
};
static const MappingScope scope_18 = {
  "TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal",
  scope_18_entries, 8,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_17_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_PACKET), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L3), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_OUTPUT, "nid_packet_meta", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, nid_packet_meta), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_17 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_17_entries, 11,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_16_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_16 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_16_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_15_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 2}
};
static const MappingScope scope_15 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_15_entries, 10,
};

/* TM_conversions::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions */
static const MappingEntry scope_14_entries[28] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 26},
  /* 1 */ { MAP_OUTPUT, "P027V1_sections_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, P027V1_sections_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 27},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027_flatten_sections_qdiff 1", NULL, sizeof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_18, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, Context_1), NULL, NULL, NULL, &scope_19, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_T_TM), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L1), &_Type_P027V1_section_int_T_TM_Utils, NULL, NULL, &scope_31, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_432), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L209), &_Type_array_int_432_Utils, NULL, NULL, &scope_44, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L217", NULL, sizeof(P027V1_trackide_qdifflist_T_TM), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L217), &_Type_P027V1_trackide_qdifflist_T_TM_Utils, NULL, NULL, &scope_30, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_45, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_26, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L385", NULL, sizeof(array_int_68), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L385), &_Type_array_int_68_Utils, NULL, NULL, &scope_46, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L422", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L422), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L423", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L423), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L424", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L424), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L425", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L425), &_Type_P027V1_sections_array_flat_qdiff_T_TM_Utils, NULL, NULL, &scope_28, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L426), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L427", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L427), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L429", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L429), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L430", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, _L430), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_14 = {
  "TM_conversions::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions",
  scope_14_entries, 28,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_13_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_13 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_13_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_12 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_12_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_11 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_11_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_10_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_9_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_false, &scope_10, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_9 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_9_entries, 3,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_8 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_8_entries, 3,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, &scope_8, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_13, 1, 2}
};
static const MappingScope scope_7 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_7_entries, 3,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_6_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_6 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_6_entries, 6,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions */
static const MappingEntry scope_5_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 33},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, P027V1_body_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 34},
  /* 2 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, P027V1_sections), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_36, 1, 35},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, Context_1), NULL, NULL, NULL, &scope_17, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L1), &_Type_P027V1_trackside_int_T_TM_Utils, NULL, NULL, &scope_38, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L209), &_Type_array_int_494_Utils, NULL, NULL, &scope_40, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 17 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 18 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackide_sectionlist_T_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L367), &_Type_P027V1_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_37, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackide_qdifflist_T_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L369), &_Type_P027V1_trackide_qdifflist_T_TM_Utils, NULL, NULL, &scope_30, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_41, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_26, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__903), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L385), &_Type_array__903_Utils, NULL, NULL, &scope_36, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__933), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L386), &_Type_array__933_Utils, NULL, NULL, &scope_42, 1, 24},
  /* 28 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L394), &_Type_P027V1_section_int_T_TM_Utils, NULL, NULL, &scope_31, 1, 28},
  /* 31 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 32 */ { MAP_LOCAL, "_L397", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L397), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 30},
  /* 33 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L401", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, _L401), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 36 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions, n_iter_k_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36}
};
static const MappingScope scope_5 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions",
  scope_5_entries, 37,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_4_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_16, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_26, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_39, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_26, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_26, 1, 10}
};
static const MappingScope scope_4 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_4_entries, 12,
};

/* TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal */
static const MappingEntry scope_3_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_15, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 5}
};
static const MappingScope scope_3 = {
  "TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal",
  scope_3_entries, 26,
};

/* TM_conversions::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions */
static const MappingEntry scope_2_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 19},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P027V1_tracksim_compr_one_section 2", NULL, sizeof(outC_C_P027V1_tracksim_compr_o_TM_conversions), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, Context_2), NULL, NULL, NULL, &scope_14, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_4, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, Context_1), NULL, NULL, NULL, &scope_3, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L431", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L431), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L432", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L432), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L433", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L433), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L434", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L434), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L435", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L435), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L436", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L436), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L437", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L437), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L438", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L438), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L439", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L439), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L440", NULL, sizeof(P027V1_section_int_T_TM), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L440), &_Type_P027V1_section_int_T_TM_Utils, NULL, NULL, &scope_31, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L441", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L441), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L442", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L442), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L443", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L443), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L446", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L446), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L447", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, _L447), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_2 = {
  "TM_conversions::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions",
  scope_2_entries, 20,
};

/* TM_trackside::Write_P027V1/ Write_P027V1_TM_trackside */
static const MappingEntry scope_1_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Error, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_INPUT, "Packet27V1", NULL, sizeof(P027V1_trackside_int_T_TM), (int)&inputs_ctx.Packet27V1, &_Type_P027V1_trackside_int_T_TM_Utils, NULL, NULL, &scope_38, 1, 24},
  /* 2 */ { MAP_INPUT, "Packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&inputs_ctx.Packets, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 25},
  /* 3 */ { MAP_OUTPUT, "PacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx.PacketsOut, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 23},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::C_P027V1_tracksim_compr_body 1", NULL, sizeof(outC_C_P027V1_tracksim_compr_body_TM_conversions), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_5, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::C_P027V1_tracksim_merge_sections 1", &iter_foldwi_33, sizeof(outC_C_P027V1_tracksim_merge_s_TM_conversions), (int)&outputs_ctx._3_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 6 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), (int)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_4, 1, 2},
  /* 7 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM), (int)&outputs_ctx._L1, &_Type_P027V1_trackside_int_T_TM_Utils, NULL, NULL, &scope_38, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (int)&outputs_ctx._L10, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), (int)&outputs_ctx._L21, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), (int)&outputs_ctx._L22, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L39, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), (int)&outputs_ctx._L4, &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 5},
  /* 15 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L40, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), (int)&outputs_ctx._L41, &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (int)&outputs_ctx._L42, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), (int)&outputs_ctx._L43, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (int)&outputs_ctx._L44, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L45", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM), (int)&outputs_ctx._L45, &_Type__2_P027V1_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_36, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), (int)&outputs_ctx._L46, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 22 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), (int)&outputs_ctx._L50, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L51", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L51, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L52, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 25 */ { MAP_LOCAL, "_L54", NULL, sizeof(array_int_33), (int)&outputs_ctx._L54, &_Type_array_int_33_Utils, NULL, NULL, &scope_47, 1, 21}
};
static const MappingScope scope_1 = {
  "TM_trackside::Write_P027V1/ Write_P027V1_TM_trackside",
  scope_1_entries, 26,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_trackside::Write_P027V1", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

