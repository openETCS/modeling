/* TestTrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TestTrackAtlas_newtype.h"
#include "TestTrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_104;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_396;
static const MappingIterator iter_array_231;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_99;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_50;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_231;
static const MappingIterator iter_mapwi_33;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_foldi_33;
static const MappingIterator iter_array_104 = { "array", 104, 104, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_396 = { "array", 396, 396, NULL};
static const MappingIterator iter_array_231 = { "array", 231, 231, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_50 = { "array", 50, 50, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_231 = { "foldi", 231, 231, NULL};
static const MappingIterator iter_mapwi_33 = { "mapwi", 33, 33, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_foldi_33 = { "foldi", 33, 33, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
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
MAP_DECL(scope_91, 1);
MAP_DECL(scope_90, 1);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 1);
MAP_DECL(scope_87, 1);
MAP_DECL(scope_86, 1);
MAP_DECL(scope_85, 1);
MAP_DECL(scope_84, 1);
MAP_DECL(scope_83, 5);
MAP_DECL(scope_82, 1);
MAP_DECL(scope_81, 10);
MAP_DECL(scope_80, 1);
MAP_DECL(scope_79, 3);
MAP_DECL(scope_78, 5);
MAP_DECL(scope_77, 1);
MAP_DECL(scope_76, 4);
MAP_DECL(scope_75, 1);
MAP_DECL(scope_74, 5);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 2);
MAP_DECL(scope_67, 2);
MAP_DECL(scope_66, 3);
MAP_DECL(scope_65, 3);
MAP_DECL(scope_64, 6);
MAP_DECL(scope_63, 6);
MAP_DECL(scope_62, 6);
MAP_DECL(scope_61, 6);
MAP_DECL(scope_60, 7);
MAP_DECL(scope_59, 13);
MAP_DECL(scope_58, 6);
MAP_DECL(scope_57, 10);
MAP_DECL(scope_56, 22);
MAP_DECL(scope_55, 14);
MAP_DECL(scope_54, 19);
MAP_DECL(scope_53, 12);
MAP_DECL(scope_52, 19);
MAP_DECL(scope_51, 8);
MAP_DECL(scope_50, 6);
MAP_DECL(scope_49, 15);
MAP_DECL(scope_48, 10);
MAP_DECL(scope_47, 9);
MAP_DECL(scope_46, 12);
MAP_DECL(scope_45, 25);
MAP_DECL(scope_44, 9);
MAP_DECL(scope_43, 3);
MAP_DECL(scope_42, 3);
MAP_DECL(scope_41, 3);
MAP_DECL(scope_40, 3);
MAP_DECL(scope_39, 3);
MAP_DECL(scope_38, 4);
MAP_DECL(scope_37, 2);
MAP_DECL(scope_36, 2);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 2);
MAP_DECL(scope_33, 3);
MAP_DECL(scope_32, 3);
MAP_DECL(scope_31, 3);
MAP_DECL(scope_30, 6);
MAP_DECL(scope_29, 37);
MAP_DECL(scope_28, 12);
MAP_DECL(scope_27, 26);
MAP_DECL(scope_26, 6);
MAP_DECL(scope_25, 2);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 2);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 3);
MAP_DECL(scope_20, 3);
MAP_DECL(scope_19, 3);
MAP_DECL(scope_18, 6);
MAP_DECL(scope_17, 6);
MAP_DECL(scope_16, 2);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_14, 2);
MAP_DECL(scope_13, 2);
MAP_DECL(scope_12, 3);
MAP_DECL(scope_11, 3);
MAP_DECL(scope_10, 3);
MAP_DECL(scope_9, 6);
MAP_DECL(scope_8, 23);
MAP_DECL(scope_7, 17);
MAP_DECL(scope_6, 36);
MAP_DECL(scope_5, 17);
MAP_DECL(scope_4, 9);
MAP_DECL(scope_3, 10);
MAP_DECL(scope_2, 9);
MAP_DECL(scope_1, 5);
MAP_DECL(scope_0, 1);

/* array__2042 */
static const MappingEntry scope_103_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(Q_SCALE), 0, &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_103 = {
  "array__2042",
  scope_103_entries, 1,
};

/* array__2039 */
static const MappingEntry scope_102_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__1939), 0, &_Type_array__1939_Utils, NULL, NULL, &scope_77, 1, 0}
};
static const MappingScope scope_102 = {
  "array__2039",
  scope_102_entries, 1,
};

/* array__2036 */
static const MappingEntry scope_101_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__1950), 0, &_Type_struct__1950_Utils, NULL, NULL, &scope_79, 1, 0}
};
static const MappingScope scope_101 = {
  "array__2036",
  scope_101_entries, 1,
};

/* array_int_104 */
static const MappingEntry scope_100_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_104, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_100 = {
  "array_int_104",
  scope_100_entries, 1,
};

/* array_int_1 */
static const MappingEntry scope_99_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_99 = {
  "array_int_1",
  scope_99_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_98_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_98 = {
  "array_int_4",
  scope_98_entries, 1,
};

/* array_int_396 */
static const MappingEntry scope_97_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_396, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_97 = {
  "array_int_396",
  scope_97_entries, 1,
};

/* array_int_3_33_231 */
static const MappingEntry scope_96_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_85, 1, 0}
};
static const MappingScope scope_96 = {
  "array_int_3_33_231",
  scope_96_entries, 1,
};

/* array_int_99_33 */
static const MappingEntry scope_95_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_99), 0, &_Type_array_int_99_Utils, NULL, NULL, &scope_86, 1, 0}
};
static const MappingScope scope_95 = {
  "array_int_99_33",
  scope_95_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_94_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_94 = {
  "array_int_33",
  scope_94_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_93_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 0}
};
static const MappingScope scope_93 = {
  "array_int_500_500",
  scope_93_entries, 1,
};

/* array_bool_30 */
static const MappingEntry scope_92_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_92 = {
  "array_bool_30",
  scope_92_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_91_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_91 = {
  "array_int_30",
  scope_91_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_90_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_90 = {
  "array_int_5",
  scope_90_entries, 1,
};

/* struct__1998 */
static const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__1998, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__1995), offsetof(struct__1998, PacketHeaders), &_Type_array__1995_Utils, NULL, NULL, &scope_88, 1, 0}
};
static const MappingScope scope_89 = {
  "struct__1998",
  scope_89_entries, 2,
};

/* array__1995 */
static const MappingEntry scope_88_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__1975), 0, &_Type_struct__1975_Utils, NULL, NULL, &scope_83, 1, 0}
};
static const MappingScope scope_88 = {
  "array__1995",
  scope_88_entries, 1,
};

/* array__1992 */
static const MappingEntry scope_87_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__1950), 0, &_Type_struct__1950_Utils, NULL, NULL, &scope_79, 1, 0}
};
static const MappingScope scope_87 = {
  "array__1992",
  scope_87_entries, 1,
};

/* array_int_99 */
static const MappingEntry scope_86_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_86 = {
  "array_int_99",
  scope_86_entries, 1,
};

/* array_int_3_33 */
static const MappingEntry scope_85_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_3), 0, &_Type_array_int_3_Utils, NULL, NULL, &scope_84, 1, 0}
};
static const MappingScope scope_85 = {
  "array_int_3_33",
  scope_85_entries, 1,
};

/* array_int_3 */
static const MappingEntry scope_84_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_84 = {
  "array_int_3",
  scope_84_entries, 1,
};

/* struct__1975 */
static const MappingEntry scope_83_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__1975, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__1975, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__1975, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__1975, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__1975, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_83 = {
  "struct__1975",
  scope_83_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_82_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_82 = {
  "array_int_500",
  scope_82_entries, 1,
};

/* struct__1959 */
static const MappingEntry scope_81_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__1959, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__1959, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__1959, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__1959, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__1959, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__1959, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__1959, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__1959, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__1956), offsetof(struct__1959, SECTIONS), &_Type_array__1956_Utils, NULL, NULL, &scope_80, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__1959, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_81 = {
  "struct__1959",
  scope_81_entries, 10,
};

/* array__1956 */
static const MappingEntry scope_80_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__1950), 0, &_Type_struct__1950_Utils, NULL, NULL, &scope_79, 1, 0}
};
static const MappingScope scope_80 = {
  "array__1956",
  scope_80_entries, 1,
};

/* struct__1950 */
static const MappingEntry scope_79_entries[3] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__1950, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__1950, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__1950, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_79 = {
  "struct__1950",
  scope_79_entries, 3,
};

/* struct__1942 */
static const MappingEntry scope_78_entries[5] = {
  /* 0 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__1942, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__1942, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__1942, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".sections", NULL, sizeof(array__1939), offsetof(struct__1942, sections), &_Type_array__1939_Utils, NULL, NULL, &scope_77, 1, 4},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__1942, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_78 = {
  "struct__1942",
  scope_78_entries, 5,
};

/* array__1939 */
static const MappingEntry scope_77_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__1932), 0, &_Type_struct__1932_Utils, NULL, NULL, &scope_76, 1, 0}
};
static const MappingScope scope_77 = {
  "array__1939",
  scope_77_entries, 1,
};

/* struct__1932 */
static const MappingEntry scope_76_entries[4] = {
  /* 0 */ { MAP_FIELD, ".d_gradient", NULL, sizeof(kcg_int), offsetof(struct__1932, d_gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".g_a", NULL, sizeof(kcg_int), offsetof(struct__1932, g_a), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".q_gdir", NULL, sizeof(Q_GDIR), offsetof(struct__1932, q_gdir), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__1932, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_76 = {
  "struct__1932",
  scope_76_entries, 4,
};

/* array__1929 */
static const MappingEntry scope_75_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(struct__1921), 0, &_Type_struct__1921_Utils, NULL, NULL, &scope_74, 1, 0}
};
static const MappingScope scope_75 = {
  "array__1929",
  scope_75_entries, 1,
};

/* struct__1921 */
static const MappingEntry scope_74_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Gradient", NULL, sizeof(kcg_int), offsetof(struct__1921, Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_Gradient", NULL, sizeof(kcg_int), offsetof(struct__1921, L_Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".Loc_Absolute", NULL, sizeof(kcg_int), offsetof(struct__1921, Loc_Absolute), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__1921, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__1921, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_74 = {
  "struct__1921",
  scope_74_entries, 5,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L4_IfBlock1), &_Type_Q_GDIR_Utils, &scope_65_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_69 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:then:",
  scope_69_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_68_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L3_IfBlock1), &_Type_Q_GDIR_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_68 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:then:",
  scope_68_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_67_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L1_IfBlock1), &_Type_Q_GDIR_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_67 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:else:",
  scope_67_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_66_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_67, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_true, &scope_68, 1, 2}
};
static const MappingScope scope_66 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:",
  scope_66_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1: */
static const MappingEntry scope_65_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_65_entries[0], isActive_kcg_bool_kcg_false, &scope_66, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_65_entries[0], isActive_kcg_bool_kcg_true, &scope_69, 1, 2}
};
static const MappingScope scope_65 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:",
  scope_65_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversions */
static const MappingEntry scope_64_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_gdir", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, q_gdir), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_gdir_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, q_gdir_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_64 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversions",
  scope_64_entries, 6,
};

/* TM_conversions::CAST_Int_to_G_A/ CAST_Int_to_G_A_TM_conversions */
static const MappingEntry scope_63_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "g_a", NULL, sizeof(G_A), offsetof(outC_CAST_Int_to_G_A_TM_conversions, g_a), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_63 = {
  "TM_conversions::CAST_Int_to_G_A/ CAST_Int_to_G_A_TM_conversions",
  scope_63_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_GRADIENT/ CAST_Int_to_D_GRADIENT_TM_conversions */
static const MappingEntry scope_62_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_gradient", NULL, sizeof(D_GRADIENT), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, d_gradient), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_62 = {
  "TM_conversions::CAST_Int_to_D_GRADIENT/ CAST_Int_to_D_GRADIENT_TM_conversions",
  scope_62_entries, 6,
};

/* TM_lib_internal::C_P021_extract_el_section/ C_P021_extract_el_section_TM_lib_internal */
static const MappingEntry scope_61_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L2), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_61 = {
  "TM_lib_internal::C_P021_extract_el_section/ C_P021_extract_el_section_TM_lib_internal",
  scope_61_entries, 6,
};

/* TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal */
static const MappingEntry scope_60_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_60 = {
  "TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal",
  scope_60_entries, 7,
};

/* TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal */
static const MappingEntry scope_59_entries[13] = {
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
static const MappingScope scope_59 = {
  "TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal",
  scope_59_entries, 13,
};

/* TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_58_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_79, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_3), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_3_Utils, NULL, NULL, &scope_84, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P021_section_array_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P021_section_array_T_TM_Utils, NULL, NULL, &scope_84, 1, 5}
};
static const MappingScope scope_58 = {
  "TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal",
  scope_58_entries, 6,
};

/* TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_57_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_sectionlist_array_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L2), &_Type_P021_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_85, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L7), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, flat), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 9}
};
static const MappingScope scope_57 = {
  "TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal",
  scope_57_entries, 10,
};

/* TM_lib_internal::C_P021_us_array/ C_P021_us_array_TM_lib_internal */
static const MappingEntry scope_56_entries[22] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_GRADIENT 1", NULL, sizeof(outC_CAST_Int_to_D_GRADIENT_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, _3_Context_1), NULL, NULL, NULL, &scope_62, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_G_A 1", NULL, sizeof(outC_CAST_Int_to_G_A_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_63, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_GDIR 1", NULL, sizeof(outC_CAST_Int_to_Q_GDIR_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_64, 1, 5},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 1", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_61, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 2", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_61, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 3", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_61, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L25", NULL, sizeof(D_GRADIENT), offsetof(outC_C_P021_us_array_TM_lib_internal, _L25), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(G_A), offsetof(outC_C_P021_us_array_TM_lib_internal, _L26), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_GDIR), offsetof(outC_C_P021_us_array_TM_lib_internal, _L28), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_us_array_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_us_array_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, _L4), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_76, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 20 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_OUTPUT, "sections", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, sections), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_76, 1, 21}
};
static const MappingScope scope_56 = {
  "TM_lib_internal::C_P021_us_array/ C_P021_us_array_TM_lib_internal",
  scope_56_entries, 22,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_55_entries[14] = {
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
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 3}
};
static const MappingScope scope_55 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_55_entries, 14,
};

/* TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal */
static const MappingEntry scope_54_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 1", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_59, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 2", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_59, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 1", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_60, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 3", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_60, 1, 3},
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
static const MappingScope scope_54 = {
  "TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal",
  scope_54_entries, 19,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_53_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 11},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_54, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 2}
};
static const MappingScope scope_53 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_53_entries, 12,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_52_entries[19] = {
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
static const MappingScope scope_52 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_52_entries, 19,
};

/* TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal */
static const MappingEntry scope_51_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Flattened), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_flatten_array 1", &iter_foldi_231, sizeof(outC_C_P021_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_57, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P021_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_58, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_85, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P021_OBU_sectionlist_int_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L75), &_Type_P021_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_87, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L76), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L78), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_231), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_231_Utils, NULL, NULL, &scope_96, 1, 6}
};
static const MappingScope scope_51 = {
  "TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal",
  scope_51_entries, 8,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_50_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_50 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_50_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_49_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_49 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_49_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_48_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 2}
};
static const MappingScope scope_48 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_48_entries, 10,
};

/* TM_lib_internal::C_P021_unflatten_sections/ C_P021_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_47_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_us_array 1", &iter_mapwi_33, sizeof(outC_C_P021_us_array_TM_lib_internal), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_56, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_94, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_99_33), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_99_33_Utils, NULL, NULL, &scope_95, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__1939), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L9), &_Type_array__1939_Utils, NULL, NULL, &scope_77, 1, 6},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, sections), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_77, 1, 8}
};
static const MappingScope scope_47 = {
  "TM_lib_internal::C_P021_unflatten_sections/ C_P021_unflatten_sections_TM_lib_internal",
  scope_47_entries, 9,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_46_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_55, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_93, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_46 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_46_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_45_entries[25] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 24},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_53, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_54, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_91, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L38", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L38), &_Type_array_bool_30_Utils, NULL, NULL, &scope_92, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_LOCAL, "_L40", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L40), &_Type_array_bool_30_Utils, NULL, NULL, &scope_92, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_45 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_45_entries, 25,
};

/* TA_Lib_internal::EVAL_Q_GDIR/ EVAL_Q_GDIR_TA_Lib_internal */
static const MappingEntry scope_44_entries[9] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_GDIR), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L1), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(G_A), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L2), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_GDIR), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L3), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_OUTPUT, "gradient", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, gradient), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_44 = {
  "TA_Lib_internal::EVAL_Q_GDIR/ EVAL_Q_GDIR_TA_Lib_internal",
  scope_44_entries, 9,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_43_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_39_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_39_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_39_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_43 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then:",
  scope_43_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_42_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L22_IfBlock1), &_Type_kcg_int_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L33_IfBlock1), &_Type_kcg_int_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_42 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then:",
  scope_42_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_41_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L25_IfBlock1), &_Type_kcg_int_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L36_IfBlock1), &_Type_kcg_int_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_41 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else:",
  scope_41_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_40_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_kcg_bool_kcg_false, &scope_41, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_kcg_bool_kcg_true, &scope_42, 1, 2}
};
static const MappingScope scope_40 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:",
  scope_40_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_39_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_39_entries[0], isActive_kcg_bool_kcg_false, &scope_40, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_39_entries[0], isActive_kcg_bool_kcg_true, &scope_43, 1, 2}
};
static const MappingScope scope_39 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:",
  scope_39_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal */
static const MappingEntry scope_38_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "d_internal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, d_internal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_38 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal",
  scope_38_entries, 4,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_37_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_37 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_37_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_36_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_36 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_36_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_35 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_35_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_34_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_34 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_34_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_33_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_false, &scope_34, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_true, &scope_35, 1, 2}
};
static const MappingScope scope_33 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_33_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_32_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_false, &scope_33, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_true, &scope_36, 1, 2}
};
static const MappingScope scope_32 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_32_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_31_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_false, &scope_32, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_true, &scope_37, 1, 2}
};
static const MappingScope scope_31 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_31_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_30_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_30 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_30_entries, 6,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions */
static const MappingEntry scope_29_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 35},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 36},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_flatten_sections 1", NULL, sizeof(outC_C_P021_flatten_sections_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_51, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_52, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_50, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_81, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_396), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L209), &_Type_array_int_396_Utils, NULL, NULL, &scope_97, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L369", NULL, sizeof(P021_trackide_sectionlist_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L369), &_Type_P021_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_80, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_98, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L375", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L375), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_79, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_99, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L380", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L380), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_86, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_90, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_104), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L384), &_Type_array_int_104_Utils, NULL, NULL, &scope_100, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__1992), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L385), &_Type_array__1992_Utils, NULL, NULL, &scope_87, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__2036), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L386), &_Type_array__2036_Utils, NULL, NULL, &scope_101, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_29 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions",
  scope_29_entries, 37,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_28_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_49, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_93, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 10}
};
static const MappingScope scope_28 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_28_entries, 12,
};

/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal */
static const MappingEntry scope_27_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_48, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 5}
};
static const MappingScope scope_27 = {
  "TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal",
  scope_27_entries, 26,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_26_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_120), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_118), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_119), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P021_compr_onboard_TM_conversions, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_26 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_26_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_25_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_116_IfBlock1), &_Type_Q_DIR_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_117_IfBlock1), &_Type_kcg_bool_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_25 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_25_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_19_IfBlock1), &_Type_Q_DIR_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_24 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_24_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_23_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_113_IfBlock1), &_Type_Q_DIR_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_114_IfBlock1), &_Type_kcg_bool_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_23 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_23_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_112_IfBlock1), &_Type_kcg_bool_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_111_IfBlock1), &_Type_Q_DIR_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_22_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_21_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _10_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 2}
};
static const MappingScope scope_21 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_21_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_20_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _15_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_false, &scope_21, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 2}
};
static const MappingScope scope_20 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_20_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _8_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_false, &scope_20, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 2}
};
static const MappingScope scope_19 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_19_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_18_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _6__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _7_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_18 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_18_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_17_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L9_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P021_compr_onboard_TM_conversions, n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_17 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/",
  scope_17_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_16_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_14_IfBlock1), &_Type_Q_SCALE_Utils, &scope_10_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_16 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_16_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_11_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_15 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_15_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_14_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_12_IfBlock1), &_Type_Q_SCALE_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_14 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_14_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_13_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_11_IfBlock1), &_Type_Q_SCALE_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_13_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_12_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_false, &scope_13, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_true, &scope_14, 1, 2}
};
static const MappingScope scope_12 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_12_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_11_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_kcg_bool_kcg_false, &scope_12, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_kcg_bool_kcg_true, &scope_15, 1, 2}
};
static const MappingScope scope_11 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_11_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_10_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_kcg_bool_kcg_false, &scope_11, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_kcg_bool_kcg_true, &scope_16, 1, 2}
};
static const MappingScope scope_10 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_10_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_9_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_9 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_9_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversions */
static const MappingEntry scope_8_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P021_onboard", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, P021_onboard), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 22},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 4},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 2},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 3},
  /* 4 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_unflatten_sections 1", NULL, sizeof(outC_C_P021_unflatten_sections_TM_lib_internal), offsetof(outC_C_P021_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_47, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_5), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1), &_Type_array_int_5_Utils, NULL, NULL, &scope_90, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L10), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(array_int_99), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L32), &_Type_array_int_99_Utils, NULL, NULL, &scope_86, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 11},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_77, 1, 10},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 9},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 8}
};
static const MappingScope scope_8 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversions",
  scope_8_entries, 23,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_7_entries[17] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 14},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_45, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_46, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_89, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_7 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_7_entries, 17,
};

/* TA_Gradient::Convert_P21_to_DistanceProfile_loop/ Convert_P21_to_DistancePr_TA_Gradient */
static const MappingEntry scope_6_entries[36] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, GradientProfile), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 35},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_Q_GDIR 2", NULL, sizeof(outC_EVAL_Q_GDIR_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_2), NULL, NULL, NULL, &scope_44, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 3", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_3), NULL, NULL, NULL, &scope_38, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 4", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_4), NULL, NULL, NULL, &scope_38, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L121", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L121), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_77, 1, 22},
  /* 5 */ { MAP_LOCAL, "_L122", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L122), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 21},
  /* 6 */ { MAP_LOCAL, "_L123", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L123), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_76, 1, 20},
  /* 7 */ { MAP_LOCAL, "_L124", NULL, sizeof(G_A), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L124), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 19},
  /* 8 */ { MAP_LOCAL, "_L125", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L125), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 18},
  /* 9 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L126), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 10 */ { MAP_LOCAL, "_L127", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L127), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 11 */ { MAP_LOCAL, "_L128", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L128), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_77, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L129", NULL, sizeof(Q_GDIR), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L129), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_bool), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L130), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L131), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L133", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L133), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L134), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 17 */ { MAP_LOCAL, "_L135", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L135), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 18 */ { MAP_LOCAL, "_L136", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L136), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_74, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L137", NULL, sizeof(D_GRADIENT), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L137), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 7},
  /* 20 */ { MAP_LOCAL, "_L138", NULL, sizeof(D_GRADIENT), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L138), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 6},
  /* 21 */ { MAP_LOCAL, "_L139", NULL, sizeof(Q_SCALE), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L139), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 22 */ { MAP_LOCAL, "_L140", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L140), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_76, 1, 4},
  /* 23 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L141), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 24 */ { MAP_LOCAL, "_L142", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L142), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L143", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L143), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_74, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L144), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L145", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L145), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L146", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L146), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L147", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L147), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L148", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L148), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L149", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L149), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L150", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L150), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L151", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L151), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L152", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L152), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L153", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L153), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34}
};
static const MappingScope scope_6 = {
  "TA_Gradient::Convert_P21_to_DistanceProfile_loop/ Convert_P21_to_DistancePr_TA_Gradient",
  scope_6_entries, 36,
};

/* TM_trackside::Write_P021/ Write_P021_TM_trackside */
static const MappingEntry scope_5_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_89, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P021_tracksim_compr 1", NULL, sizeof(outC_C_P021_tracksim_compr_TM_conversions), offsetof(outC_Write_P021_TM_trackside, Context_1), NULL, NULL, NULL, &scope_29, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_28, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_27, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Write_P021_TM_trackside, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_81, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_89, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_89, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_88, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 13}
};
static const MappingScope scope_5 = {
  "TM_trackside::Write_P021/ Write_P021_TM_trackside",
  scope_5_entries, 17,
};

/* TM::Read_P021/ Read_P021_TM */
static const MappingEntry scope_4_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P021_OBU_out", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Read_P021_TM, P021_OBU_out), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P021_compr_onboard 1", NULL, sizeof(outC_C_P021_compr_onboard_TM_conversions), offsetof(outC_Read_P021_TM, _1_Context_1), NULL, NULL, NULL, &scope_8, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P021_TM, Context_1), NULL, NULL, NULL, &scope_7, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Read_P021_TM, _L166), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P021_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P021_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_83, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P021_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_82, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P021_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_89, 1, 3},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P021_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_4 = {
  "TM::Read_P021/ Read_P021_TM",
  scope_4_entries, 9,
};

/* TA_Gradient::Convert_P21_to_DistanceProfile/ _1_Convert_P21_to_DistancePr_TA_Gradient */
static const MappingEntry scope_3_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, GradientProfile), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 9},
  /* 1 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile_loop 1", &iter_foldi_33, sizeof(outC_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_6, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L63", NULL, sizeof(P021_OBU_T_TM), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L63), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L65", NULL, sizeof(Q_SCALE), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L65), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L71", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L71), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_77, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L73", NULL, sizeof(P021_OBU_T_TM), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L73), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L74", NULL, sizeof(array__2039), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L74), &_Type_array__2039_Utils, NULL, NULL, &scope_102, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L76", NULL, sizeof(array__2042), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L76), &_Type_array__2042_Utils, NULL, NULL, &scope_103, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L77", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L77), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L83", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__1_Convert_P21_to_DistancePr_TA_Gradient, _L83), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 8}
};
static const MappingScope scope_3 = {
  "TA_Gradient::Convert_P21_to_DistanceProfile/ _1_Convert_P21_to_DistancePr_TA_Gradient",
  scope_3_entries, 10,
};

/* Internal_Tests::TestP021/ TestP021_Internal_Tests */
static const MappingEntry scope_2_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_TestP021_Internal_Tests, PacketOut), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM::Read_P021 1", NULL, sizeof(outC_Read_P021_TM), offsetof(outC_TestP021_Internal_Tests, _1_Context_1), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P021 1", NULL, sizeof(outC_Write_P021_TM_trackside), offsetof(outC_TestP021_Internal_Tests, Context_1), NULL, NULL, NULL, &scope_5, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_TestP021_Internal_Tests, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_TestP021_Internal_Tests, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestP021_Internal_Tests, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_89, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestP021_Internal_Tests, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_89, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_TestP021_Internal_Tests, _L5), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_81, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_TestP021_Internal_Tests, _L6), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 7}
};
static const MappingScope scope_2 = {
  "Internal_Tests::TestP021/ TestP021_Internal_Tests",
  scope_2_entries, 9,
};

/* TestDistanceConversion/ TestDistanceConversion */
static const MappingEntry scope_1_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx.GradientProfile, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 4},
  /* 1 */ { MAP_INSTANCE, "Internal_Tests::TestP021 1", NULL, sizeof(outC_TestP021_Internal_Tests), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile 1", NULL, sizeof(outC__1_Convert_P21_to_DistancePr_TA_Gradient), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_OBU_T_TM), (size_t)&outputs_ctx._L1, &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_78, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L2, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_75, 1, 3}
};
static const MappingScope scope_1 = {
  "TestDistanceConversion/ TestDistanceConversion",
  scope_1_entries, 5,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TestDistanceConversion", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

