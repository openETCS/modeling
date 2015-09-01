/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_68;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_432;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_494;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_64;
static const MappingIterator iter_array_2;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_32;
static const MappingIterator iter_map_32;
static const MappingIterator iter_foldi_32;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_mapwi_32;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_mapwi_33;
static const MappingIterator iter_array_68 = { "array", 68, 68, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_432 = { "array", 432, 432, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_494 = { "array", 494, 494, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_map_32 = { "map", 32, 32, NULL};
static const MappingIterator iter_foldi_32 = { "foldi", 32, 32, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};
static const MappingIterator iter_mapwi_32 = { "mapwi", 32, 32, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};
static const MappingIterator iter_mapwi_33 = { "mapwi", 33, 33, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_106, 1);
MAP_DECL(scope_105, 1);
MAP_DECL(scope_104, 1);
MAP_DECL(scope_103, 1);
MAP_DECL(scope_102, 1);
MAP_DECL(scope_101, 1);
MAP_DECL(scope_100, 1);
MAP_DECL(scope_99, 1);
MAP_DECL(scope_98, 1);
MAP_DECL(scope_97, 1);
MAP_DECL(scope_96, 1);
MAP_DECL(scope_95, 1);
MAP_DECL(scope_94, 1);
MAP_DECL(scope_93, 1);
MAP_DECL(scope_92, 1);
MAP_DECL(scope_91, 4);
MAP_DECL(scope_90, 1);
MAP_DECL(scope_89, 6);
MAP_DECL(scope_88, 1);
MAP_DECL(scope_87, 3);
MAP_DECL(scope_86, 3);
MAP_DECL(scope_85, 1);
MAP_DECL(scope_84, 1);
MAP_DECL(scope_83, 2);
MAP_DECL(scope_82, 1);
MAP_DECL(scope_81, 1);
MAP_DECL(scope_80, 1);
MAP_DECL(scope_79, 1);
MAP_DECL(scope_78, 5);
MAP_DECL(scope_77, 1);
MAP_DECL(scope_76, 12);
MAP_DECL(scope_75, 1);
MAP_DECL(scope_74, 5);
MAP_DECL(scope_73, 1);
MAP_DECL(scope_72, 2);
MAP_DECL(scope_67, 5);
MAP_DECL(scope_66, 10);
MAP_DECL(scope_65, 7);
MAP_DECL(scope_64, 13);
MAP_DECL(scope_63, 8);
MAP_DECL(scope_62, 6);
MAP_DECL(scope_61, 6);
MAP_DECL(scope_60, 6);
MAP_DECL(scope_59, 8);
MAP_DECL(scope_58, 14);
MAP_DECL(scope_57, 19);
MAP_DECL(scope_56, 12);
MAP_DECL(scope_55, 11);
MAP_DECL(scope_54, 2);
MAP_DECL(scope_53, 2);
MAP_DECL(scope_52, 2);
MAP_DECL(scope_51, 3);
MAP_DECL(scope_50, 3);
MAP_DECL(scope_49, 6);
MAP_DECL(scope_48, 6);
MAP_DECL(scope_47, 18);
MAP_DECL(scope_46, 19);
MAP_DECL(scope_45, 15);
MAP_DECL(scope_44, 10);
MAP_DECL(scope_43, 28);
MAP_DECL(scope_42, 12);
MAP_DECL(scope_41, 25);
MAP_DECL(scope_40, 6);
MAP_DECL(scope_39, 9);
MAP_DECL(scope_38, 23);
MAP_DECL(scope_37, 4);
MAP_DECL(scope_36, 2);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 2);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 3);
MAP_DECL(scope_31, 3);
MAP_DECL(scope_30, 3);
MAP_DECL(scope_29, 6);
MAP_DECL(scope_28, 39);
MAP_DECL(scope_27, 12);
MAP_DECL(scope_26, 26);
MAP_DECL(scope_25, 21);
MAP_DECL(scope_24, 17);
MAP_DECL(scope_23, 15);
MAP_DECL(scope_22, 26);
MAP_DECL(scope_21, 7);
MAP_DECL(scope_20, 2);
MAP_DECL(scope_19, 2);
MAP_DECL(scope_18, 2);
MAP_DECL(scope_17, 2);
MAP_DECL(scope_16, 3);
MAP_DECL(scope_15, 3);
MAP_DECL(scope_14, 3);
MAP_DECL(scope_13, 6);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_5, 6);
MAP_DECL(scope_4, 6);
MAP_DECL(scope_3, 21);
MAP_DECL(scope_2, 20);
MAP_DECL(scope_1, 9);
MAP_DECL(scope_0, 1);

/* array_int_68 */
static const MappingEntry scope_106_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_68, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_106 = {
  "array_int_68",
  scope_106_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_105_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_105 = {
  "array_int_4",
  scope_105_entries, 1,
};

/* array_int_432 */
static const MappingEntry scope_104_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_432, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_104 = {
  "array_int_432",
  scope_104_entries, 1,
};

/* array_int_2_32_32 */
static const MappingEntry scope_103_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2_32), 0, &_Type_array_int_2_32_Utils, NULL, NULL, &scope_80, 1, 0}
};
static const MappingScope scope_103 = {
  "array_int_2_32_32",
  scope_103_entries, 1,
};

/* array__2438 */
static const MappingEntry scope_102_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__2314), 0, &_Type_struct__2314_Utils, NULL, NULL, &scope_74, 1, 0}
};
static const MappingScope scope_102 = {
  "array__2438",
  scope_102_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_101_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_101 = {
  "array_int_6",
  scope_101_entries, 1,
};

/* array_int_494 */
static const MappingEntry scope_100_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_494, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_100 = {
  "array_int_494",
  scope_100_entries, 1,
};

/* array__2429 */
static const MappingEntry scope_99_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__2363), 0, &_Type_struct__2363_Utils, NULL, NULL, &scope_83, 1, 0}
};
static const MappingScope scope_99 = {
  "array__2429",
  scope_99_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_98_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_98 = {
  "array_int_33",
  scope_98_entries, 1,
};

/* array_int_64_32 */
static const MappingEntry scope_97_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_64), 0, &_Type_array_int_64_Utils, NULL, NULL, &scope_81, 1, 0}
};
static const MappingScope scope_97 = {
  "array_int_64_32",
  scope_97_entries, 1,
};

/* array_int_32 */
static const MappingEntry scope_96_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_96 = {
  "array_int_32",
  scope_96_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_95_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 0}
};
static const MappingScope scope_95 = {
  "array_int_500_500",
  scope_95_entries, 1,
};

/* array_bool_30 */
static const MappingEntry scope_94_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_94 = {
  "array_bool_30",
  scope_94_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_93_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_93 = {
  "array_int_30",
  scope_93_entries, 1,
};

/* array_int_3 */
static const MappingEntry scope_92_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_92 = {
  "array_int_3",
  scope_92_entries, 1,
};

/* struct__2401 */
static const MappingEntry scope_91_entries[4] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__2401, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__2401, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".sections", NULL, sizeof(array__2398), offsetof(struct__2401, sections), &_Type_array__2398_Utils, NULL, NULL, &scope_90, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2401, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_91 = {
  "struct__2401",
  scope_91_entries, 4,
};

/* array__2398 */
static const MappingEntry scope_90_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__2389), 0, &_Type_struct__2389_Utils, NULL, NULL, &scope_89, 1, 0}
};
static const MappingScope scope_90 = {
  "array__2398",
  scope_90_entries, 1,
};

/* struct__2389 */
static const MappingEntry scope_89_entries[6] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__2386), offsetof(struct__2389, SECTIONS_q_diff), &_Type_array__2386_Utils, NULL, NULL, &scope_88, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_static", NULL, sizeof(kcg_int), offsetof(struct__2389, d_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__2389, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".q_front", NULL, sizeof(Q_FRONT), offsetof(struct__2389, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".v_static", NULL, sizeof(kcg_int), offsetof(struct__2389, v_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2389, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_89 = {
  "struct__2389",
  scope_89_entries, 6,
};

/* array__2386 */
static const MappingEntry scope_88_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__2380), 0, &_Type_struct__2380_Utils, NULL, NULL, &scope_87, 1, 0}
};
static const MappingScope scope_88 = {
  "array__2386",
  scope_88_entries, 1,
};

/* struct__2380 */
static const MappingEntry scope_87_entries[3] = {
  /* 0 */ { MAP_FIELD, ".nc_diff", NULL, sizeof(kcg_int), offsetof(struct__2380, nc_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".v_diff", NULL, sizeof(kcg_int), offsetof(struct__2380, v_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2380, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_87 = {
  "struct__2380",
  scope_87_entries, 3,
};

/* struct__2374 */
static const MappingEntry scope_86_entries[3] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__2374, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__2374, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2374, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_86 = {
  "struct__2374",
  scope_86_entries, 3,
};

/* array_int_5 */
static const MappingEntry scope_85_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_85 = {
  "array_int_5",
  scope_85_entries, 1,
};

/* array__2368 */
static const MappingEntry scope_84_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__2314), 0, &_Type_struct__2314_Utils, NULL, NULL, &scope_74, 1, 0}
};
static const MappingScope scope_84 = {
  "array__2368",
  scope_84_entries, 1,
};

/* struct__2363 */
static const MappingEntry scope_83_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__2363, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__2360), offsetof(struct__2363, PacketHeaders), &_Type_array__2360_Utils, NULL, NULL, &scope_82, 1, 0}
};
static const MappingScope scope_83 = {
  "struct__2363",
  scope_83_entries, 2,
};

/* array__2360 */
static const MappingEntry scope_82_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__2343), 0, &_Type_struct__2343_Utils, NULL, NULL, &scope_78, 1, 0}
};
static const MappingScope scope_82 = {
  "array__2360",
  scope_82_entries, 1,
};

/* array_int_64 */
static const MappingEntry scope_81_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_81 = {
  "array_int_64",
  scope_81_entries, 1,
};

/* array_int_2_32 */
static const MappingEntry scope_80_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2), 0, &_Type_array_int_2_Utils, NULL, NULL, &scope_79, 1, 0}
};
static const MappingScope scope_80 = {
  "array_int_2_32",
  scope_80_entries, 1,
};

/* array_int_2 */
static const MappingEntry scope_79_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_79 = {
  "array_int_2",
  scope_79_entries, 1,
};

/* struct__2343 */
static const MappingEntry scope_78_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__2343, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__2343, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__2343, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__2343, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2343, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_78 = {
  "struct__2343",
  scope_78_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_77_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_77 = {
  "array_int_500",
  scope_77_entries, 1,
};

/* struct__2325 */
static const MappingEntry scope_76_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__2325, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__2325, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__2325, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(struct__2325, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(struct__2325, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__2325, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__2325, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__2325, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(array__2322), offsetof(struct__2325, SECTIONS_SSP), &_Type_array__2322_Utils, NULL, NULL, &scope_75, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__2311), offsetof(struct__2325, SECTIONS_q_diff), &_Type_array__2311_Utils, NULL, NULL, &scope_73, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__2325, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2325, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_76 = {
  "struct__2325",
  scope_76_entries, 12,
};

/* array__2322 */
static const MappingEntry scope_75_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__2314), 0, &_Type_struct__2314_Utils, NULL, NULL, &scope_74, 1, 0}
};
static const MappingScope scope_75 = {
  "array__2322",
  scope_75_entries, 1,
};

/* struct__2314 */
static const MappingEntry scope_74_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__2314, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__2314, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__2314, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__2311), offsetof(struct__2314, SECTIONS_q_diff), &_Type_array__2311_Utils, NULL, NULL, &scope_73, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__2314, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_74 = {
  "struct__2314",
  scope_74_entries, 5,
};

/* array__2311 */
static const MappingEntry scope_73_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__2306), 0, &_Type_struct__2306_Utils, NULL, NULL, &scope_72, 1, 0}
};
static const MappingScope scope_73 = {
  "array__2311",
  scope_73_entries, 1,
};

/* struct__2306 */
static const MappingEntry scope_72_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(struct__2306, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(struct__2306, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_72 = {
  "struct__2306",
  scope_72_entries, 2,
};

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal */
static const MappingEntry scope_67_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L1), &_Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_72, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L2), &_Type_array_int_2_Utils, NULL, NULL, &scope_79, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, section_arrays), &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_79, 1, 4}
};
static const MappingScope scope_67 = {
  "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal",
  scope_67_entries, 5,
};

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_66_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L2), &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_80, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L7), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, flat), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 9}
};
static const MappingScope scope_66 = {
  "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal",
  scope_66_entries, 10,
};

/* TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal */
static const MappingEntry scope_65_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_65 = {
  "TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal",
  scope_65_entries, 7,
};

/* TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal */
static const MappingEntry scope_64_entries[13] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "id", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_OUTPUT, "m_version", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_64 = {
  "TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal",
  scope_64_entries, 13,
};

/* TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions */
static const MappingEntry scope_63_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_diff", NULL, sizeof(V_DIFF), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, v_diff), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_63 = {
  "TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions",
  scope_63_entries, 8,
};

/* TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions */
static const MappingEntry scope_62_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_OUTPUT, "nc_diff", NULL, sizeof(NC_DIFF), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, nc_diff), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_62 = {
  "TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions",
  scope_62_entries, 6,
};

/* TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal */
static const MappingEntry scope_61_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L2), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_61 = {
  "TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal",
  scope_61_entries, 6,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_60_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_60 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_60_entries, 6,
};

/* TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal */
static const MappingEntry scope_59_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Flattened), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff 1", &iter_foldi_32, sizeof(outC_C_P027V1_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_66, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff 1", &iter_map_32, sizeof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_67, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_2_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L74), &_Type_array_int_2_32_Utils, NULL, NULL, &scope_80, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L75), &_Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_73, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L76), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L83", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L83), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L84", NULL, sizeof(array_int_2_32_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L84), &_Type_array_int_2_32_32_Utils, NULL, NULL, &scope_103, 1, 6}
};
static const MappingScope scope_59 = {
  "TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal",
  scope_59_entries, 8,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_58_entries[14] = {
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
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 3}
};
static const MappingScope scope_58 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_58_entries, 14,
};

/* TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal */
static const MappingEntry scope_57_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 1", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_64, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 2", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_64, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 1", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_65, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 3", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_65, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_57 = {
  "TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal",
  scope_57_entries, 19,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_56_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 11},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_57, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 2}
};
static const MappingScope scope_56 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_56_entries, 12,
};

/* TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions */
static const MappingEntry scope_55_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_OUTPUT, "v_static", NULL, sizeof(V_STATIC), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, v_static), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_55 = {
  "TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions",
  scope_55_entries, 11,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_54_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L4_IfBlock1), &_Type_Q_FRONT_Utils, &scope_50_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_54 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then:",
  scope_54_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_53_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L3_IfBlock1), &_Type_Q_FRONT_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_53 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then:",
  scope_53_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_52_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L1_IfBlock1), &_Type_Q_FRONT_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_52 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else:",
  scope_52_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_51_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_false, &scope_52, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_53, 1, 2}
};
static const MappingScope scope_51 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:",
  scope_51_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1: */
static const MappingEntry scope_50_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_false, &scope_51, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_54, 1, 2}
};
static const MappingScope scope_50 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:",
  scope_50_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions */
static const MappingEntry scope_49_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_front", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_49 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions",
  scope_49_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions */
static const MappingEntry scope_48_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_static", NULL, sizeof(D_STATIC), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, d_static), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_48 = {
  "TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions",
  scope_48_entries, 6,
};

/* TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal */
static const MappingEntry scope_47_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NC_DIFF 1", NULL, sizeof(outC_CAST_Int_to_NC_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_62, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_DIFF 1", NULL, sizeof(outC_CAST_Int_to_V_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_63, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 1", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_61, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 2", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_61, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(NC_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L25), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(V_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L28), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L4), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_87, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_OUTPUT, "sections", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, sections), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_87, 1, 17}
};
static const MappingScope scope_47 = {
  "TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal",
  scope_47_entries, 18,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_46_entries[19] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_PACKET), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L3), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_OUTPUT, "nid_packet_meta", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, nid_packet_meta), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_46 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_46_entries, 19,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_45_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_45 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_45_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_44_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 2}
};
static const MappingScope scope_44 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_44_entries, 10,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2 */
static const MappingEntry scope_43_entries[28] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 26},
  /* 1 */ { MAP_OUTPUT, "P027V1_sections_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, P027V1_sections_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 27},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027_flatten_sections_qdiff 1", NULL, sizeof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_59, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_60, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L1), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_74, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_432), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L209), &_Type_array_int_432_Utils, NULL, NULL, &scope_104, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L217", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L217), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_73, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_105, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L385", NULL, sizeof(array_int_68), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L385), &_Type_array_int_68_Utils, NULL, NULL, &scope_106, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L422", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L422), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L423", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L423), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L424", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L424), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L425", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L425), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L426), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L429", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L429), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L430", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L430), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L431", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L431), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_43 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2",
  scope_43_entries, 28,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_42_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_58, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_95, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_42 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_42_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_41_entries[25] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 24},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_56, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_57, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_93, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L38", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L38), &_Type_array_bool_30_Utils, NULL, NULL, &scope_94, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_LOCAL, "_L40", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L40), &_Type_array_bool_30_Utils, NULL, NULL, &scope_94, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_41 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_41_entries, 25,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_40_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L1_15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _4__L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9_13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _6_n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_40 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/",
  scope_40_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/ */
static const MappingEntry scope_39_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_us_array_qdiff 1", &iter_mapwi_32, sizeof(outC_C_P027V1_us_array_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, Context_1_1), NULL, NULL, NULL, &scope_47, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L1_1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_81, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L11_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L5_1), &_Type_array_int_32_Utils, NULL, NULL, &scope_96, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_64_32), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L6_1), &_Type_array_int_64_32_Utils, NULL, NULL, &scope_97, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L7_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__2386), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9_1), &_Type_array__2386_Utils, NULL, NULL, &scope_88, 1, 7},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, sections_1), &_Type__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_88, 1, 0}
};
static const MappingScope scope_39 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/",
  scope_39_entries, 9,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2 */
static const MappingEntry scope_38_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_section_onbard", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, P027V1_section_onbard), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_89, 1, 22},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_STATIC 1", NULL, sizeof(outC_CAST_Int_to_D_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_48, 1, 1},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 4},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_FRONT 1", NULL, sizeof(outC_CAST_Int_to_Q_FRONT_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_49, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_STATIC 1", NULL, sizeof(outC_CAST_Int_to_V_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_55, 1, 3},
  /* 5 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L10), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_89, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(array_int_64), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L29), &_Type_array_int_64_Utils, NULL, NULL, &scope_81, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(D_STATIC), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L30), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_FRONT), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L31), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(V_STATIC), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L32), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L33), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L5), &_Type__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_88, 1, 11},
  /* 21 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_3), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L6), &_Type_array_int_3_Utils, NULL, NULL, &scope_92, 1, 10},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 9}
};
static const MappingScope scope_38 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2",
  scope_38_entries, 23,
};

/* TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal */
static const MappingEntry scope_37_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_37 = {
  "TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal",
  scope_37_entries, 4,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_36_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_36 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_36_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_35 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_35_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_34_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_34 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_34_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_33 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_33_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_32_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_false, &scope_33, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_true, &scope_34, 1, 2}
};
static const MappingScope scope_32 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_32_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_31_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_false, &scope_32, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_true, &scope_35, 1, 2}
};
static const MappingScope scope_31 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_31_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_30_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_false, &scope_31, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_true, &scope_36, 1, 2}
};
static const MappingScope scope_30 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_30_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_29_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_29 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_29_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2 */
static const MappingEntry scope_28_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 34},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_body_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 35},
  /* 2 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_sections), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_84, 1, 36},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_46, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 3", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_3), NULL, NULL, NULL, &scope_46, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_76, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L209), &_Type_array_int_494_Utils, NULL, NULL, &scope_100, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 19 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackside_sectionlist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L367), &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_75, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L369), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_73, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_101, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__2368), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L385), &_Type_array__2368_Utils, NULL, NULL, &scope_84, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__2438), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L386), &_Type_array__2438_Utils, NULL, NULL, &scope_102, 1, 24},
  /* 28 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L394), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_74, 1, 28},
  /* 31 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 32 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 33 */ { MAP_LOCAL, "_L402", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L402), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L403", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L403), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L405", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L405), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 33},
  /* 36 */ { MAP_OUTPUT, "meta_first_section", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, meta_first_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 37 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 38 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37}
};
static const MappingScope scope_28 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2",
  scope_28_entries, 39,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_27_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_45, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_95, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 10}
};
static const MappingScope scope_27 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_27_entries, 12,
};

/* TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal */
static const MappingEntry scope_26_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_44, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 5}
};
static const MappingScope scope_26 = {
  "TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal",
  scope_26_entries, 26,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2 */
static const MappingEntry scope_25_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 20},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section 2", NULL, sizeof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_43, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_27, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_26, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L431", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L431), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L432", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L432), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L433", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L433), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L434", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L434), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L435", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L435), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L436", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L436), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L437", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L437), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L438", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L438), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L439", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L439), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L440", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L440), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_74, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L441", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L441), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L442", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L442), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L443", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L443), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L446", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L446), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L447", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L447), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L448", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L448), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19}
};
static const MappingScope scope_25 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2",
  scope_25_entries, 21,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_24_entries[17] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 14},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_41, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_24_entries[0], isActive_kcg_bool_kcg_true, &scope_42, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_24 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_24_entries, 17,
};

/* TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2 */
static const MappingEntry scope_23_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_section_out", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, P027V1_OBU_section_out), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_89, 1, 14},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 1", NULL, sizeof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_38, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_24, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_Metadata_L2 1", NULL, sizeof(outC_T_Decode_Metadata_L2_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_37, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L172", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L172), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L173", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L173), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L174), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L175", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L175), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L177", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L177), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_89, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L179), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_23 = {
  "TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2",
  scope_23_entries, 15,
};

/* TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2 */
static const MappingEntry scope_22_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 1 */ { MAP_OUTPUT, "PacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, PacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 25},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_body 1", NULL, sizeof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_28, 1, 3},
  /* 3 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections 1", &iter_foldwi_33, sizeof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_25, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_27, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_26, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_76, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L45), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_84, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L51", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L51), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L54", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L54), &_Type_array_int_33_Utils, NULL, NULL, &scope_98, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L55", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L55), &_Type_array_int_33_Utils, NULL, NULL, &scope_98, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L56), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_22 = {
  "TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2",
  scope_22_entries, 26,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/ */
static const MappingEntry scope_21_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_91, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1), &_Type__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_90, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L68", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L68_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_86, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L69_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L70", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L70_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L71", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L71_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L75_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_91, 1, 6}
};
static const MappingScope scope_21 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/",
  scope_21_entries, 7,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_20_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _18__L4_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_14_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _19__L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_14_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_20 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_20_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_19_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _11__L3_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_19 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_19_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_18_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _15__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _16__L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_18 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_18_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_17_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _14__L1_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _13__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_17 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_17_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_16_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _12_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_16_entries[0], isActive_kcg_bool_kcg_false, &scope_17, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_16_entries[0], isActive_kcg_bool_kcg_true, &scope_18, 1, 2}
};
static const MappingScope scope_16 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_16_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_15_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _17_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_false, &scope_16, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_true, &scope_19, 1, 2}
};
static const MappingScope scope_15 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_15_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_14_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _10_IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_kcg_bool_kcg_false, &scope_15, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_kcg_bool_kcg_true, &scope_20, 1, 2}
};
static const MappingScope scope_14 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_14_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_13_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L12_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L13_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _9_error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_1_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_13 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_13_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _7__L2_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _8__L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_12 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_12_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_11 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_11_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _5__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_10 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_10_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _4__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_9_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2}
};
static const MappingScope scope_8 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_8_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _6_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, &scope_8, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_7 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_7_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_6 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_6_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_5_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _3__L2_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _2__L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_1_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_5 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_5_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_4_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, nid_packet_1_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_4 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_4_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/ */
static const MappingEntry scope_3_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_body", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_OBU_body_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_86, 1, 2},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 3},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 5},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L10_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_86, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L14_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L15_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L16_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L18_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L20_1), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L21_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L22_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L24_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L25_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, _L28_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L29_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L30_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_5), offsetof(outC_Read_P027V1_TM_baseline2, _L6_1), &_Type_array_int_5_Utils, NULL, NULL, &scope_85, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L9_1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_77, 1, 10},
  /* 19 */ { MAP_OUTPUT, "meta_qdiff", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, meta_qdiff_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 20 */ { MAP_OUTPUT, "n_iter_sections", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, n_iter_sections_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_3 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/",
  scope_3_entries, 21,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2 */
static const MappingEntry scope_2_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_91, 1, 19},
  /* 1 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1_sections 1", &iter_mapwi_33, sizeof(outC_Read_P027V1_sections_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_23, 1, 0},
  /* 2 */ { MAP_EXPANDED, "TM_conversions_baseline2::C_P027V1_compr_onboard_body 1", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 2},
  /* 3 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_merge_body_sections 1", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_24, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L166", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L166), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_86, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L167), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L169", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L169), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_98, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L171", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L171), &_Type_array_int_33_Utils, NULL, NULL, &scope_98, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L172", NULL, sizeof(array__2429), offsetof(outC_Read_P027V1_TM_baseline2, _L172), &_Type_array__2429_Utils, NULL, NULL, &scope_99, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L178", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L178), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_91, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L182", NULL, sizeof(array__2398), offsetof(outC_Read_P027V1_TM_baseline2, _L182), &_Type_array__2398_Utils, NULL, NULL, &scope_90, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L184", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L184), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L185", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L185), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L186", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L186), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 5},
  /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_TM_baseline2, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_77, 1, 4},
  /* 19 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_2 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2",
  scope_2_entries, 20,
};

/* Internal_Tests::TestP027V1/ TestP027V1_Internal_Tests */
static const MappingEntry scope_1_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(P027V1_OBU_T_TM_baseline2), (size_t)&PacketOut, &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_91, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1 1", NULL, sizeof(outC_Read_P027V1_TM_baseline2), (size_t)&Ctxt_TestP027V1_Internal_Tests._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P027V1 1", NULL, sizeof(outC_Write_P027V1_TM_trackside_baseline2), (size_t)&Ctxt_TestP027V1_Internal_Tests.Context_1, NULL, NULL, NULL, &scope_22, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&Ctxt_TestP027V1_Internal_Tests._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&Ctxt_TestP027V1_Internal_Tests._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&Ctxt_TestP027V1_Internal_Tests._L3, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&Ctxt_TestP027V1_Internal_Tests._L4, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), (size_t)&Ctxt_TestP027V1_Internal_Tests._L5, &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_76, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(P027V1_OBU_T_TM_baseline2), (size_t)&Ctxt_TestP027V1_Internal_Tests._L6, &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_91, 1, 7}
};
static const MappingScope scope_1 = {
  "Internal_Tests::TestP027V1/ TestP027V1_Internal_Tests",
  scope_1_entries, 9,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Internal_Tests::TestP027V1", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

