/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_18;
static const MappingIterator iter_array_56;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_444;
static const MappingIterator iter_array_24;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_32;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_mapwi_32;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_array_18 = { "array", 18, 18, NULL};
static const MappingIterator iter_array_56 = { "array", 56, 56, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_444 = { "array", 444, 444, NULL};
static const MappingIterator iter_array_24 = { "array", 24, 24, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};
static const MappingIterator iter_mapwi_32 = { "mapwi", 32, 32, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_113, 1);
MAP_DECL(scope_112, 1);
MAP_DECL(scope_111, 1);
MAP_DECL(scope_110, 1);
MAP_DECL(scope_109, 1);
MAP_DECL(scope_108, 1);
MAP_DECL(scope_107, 1);
MAP_DECL(scope_106, 24);
MAP_DECL(scope_105, 1);
MAP_DECL(scope_104, 2);
MAP_DECL(scope_103, 1);
MAP_DECL(scope_102, 2);
MAP_DECL(scope_101, 1);
MAP_DECL(scope_100, 1);
MAP_DECL(scope_99, 5);
MAP_DECL(scope_98, 26);
MAP_DECL(scope_97, 1);
MAP_DECL(scope_92, 6);
MAP_DECL(scope_91, 4);
MAP_DECL(scope_90, 14);
MAP_DECL(scope_89, 9);
MAP_DECL(scope_88, 12);
MAP_DECL(scope_87, 11);
MAP_DECL(scope_86, 6);
MAP_DECL(scope_85, 15);
MAP_DECL(scope_84, 10);
MAP_DECL(scope_83, 12);
MAP_DECL(scope_82, 17);
MAP_DECL(scope_81, 6);
MAP_DECL(scope_80, 2);
MAP_DECL(scope_79, 2);
MAP_DECL(scope_78, 2);
MAP_DECL(scope_77, 3);
MAP_DECL(scope_76, 3);
MAP_DECL(scope_75, 6);
MAP_DECL(scope_74, 2);
MAP_DECL(scope_73, 2);
MAP_DECL(scope_72, 2);
MAP_DECL(scope_71, 3);
MAP_DECL(scope_70, 3);
MAP_DECL(scope_69, 6);
MAP_DECL(scope_68, 6);
MAP_DECL(scope_67, 2);
MAP_DECL(scope_66, 2);
MAP_DECL(scope_65, 2);
MAP_DECL(scope_64, 2);
MAP_DECL(scope_63, 3);
MAP_DECL(scope_62, 3);
MAP_DECL(scope_61, 3);
MAP_DECL(scope_60, 6);
MAP_DECL(scope_59, 6);
MAP_DECL(scope_58, 2);
MAP_DECL(scope_57, 2);
MAP_DECL(scope_56, 2);
MAP_DECL(scope_55, 3);
MAP_DECL(scope_54, 3);
MAP_DECL(scope_53, 6);
MAP_DECL(scope_52, 6);
MAP_DECL(scope_51, 6);
MAP_DECL(scope_50, 8);
MAP_DECL(scope_49, 8);
MAP_DECL(scope_48, 2);
MAP_DECL(scope_47, 2);
MAP_DECL(scope_46, 2);
MAP_DECL(scope_45, 3);
MAP_DECL(scope_44, 3);
MAP_DECL(scope_43, 6);
MAP_DECL(scope_42, 6);
MAP_DECL(scope_41, 8);
MAP_DECL(scope_40, 8);
MAP_DECL(scope_39, 8);
MAP_DECL(scope_38, 8);
MAP_DECL(scope_37, 8);
MAP_DECL(scope_36, 6);
MAP_DECL(scope_35, 9);
MAP_DECL(scope_34, 2);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 2);
MAP_DECL(scope_31, 2);
MAP_DECL(scope_30, 3);
MAP_DECL(scope_29, 3);
MAP_DECL(scope_28, 3);
MAP_DECL(scope_27, 6);
MAP_DECL(scope_26, 50);
MAP_DECL(scope_25, 12);
MAP_DECL(scope_24, 26);
MAP_DECL(scope_23, 14);
MAP_DECL(scope_22, 6);
MAP_DECL(scope_21, 2);
MAP_DECL(scope_20, 2);
MAP_DECL(scope_19, 2);
MAP_DECL(scope_18, 2);
MAP_DECL(scope_17, 3);
MAP_DECL(scope_16, 3);
MAP_DECL(scope_15, 3);
MAP_DECL(scope_14, 6);
MAP_DECL(scope_13, 6);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_5, 6);
MAP_DECL(scope_4, 83);
MAP_DECL(scope_3, 17);
MAP_DECL(scope_2, 7);
MAP_DECL(scope_1, 8);
MAP_DECL(scope_0, 1);

/* array_int_18 */
static const MappingEntry scope_113_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_18, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_113 = {
  "array_int_18",
  scope_113_entries, 1,
};

/* array_int_56 */
static const MappingEntry scope_112_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_56, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_112 = {
  "array_int_56",
  scope_112_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_111_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_111 = {
  "array_int_6",
  scope_111_entries, 1,
};

/* array_int_444 */
static const MappingEntry scope_110_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_444, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_110 = {
  "array_int_444",
  scope_110_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_109_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 0}
};
static const MappingScope scope_109 = {
  "array_int_500_500",
  scope_109_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_108_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_108 = {
  "array_int_30",
  scope_108_entries, 1,
};

/* array_int_32_32 */
static const MappingEntry scope_107_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_32), 0, &_Type_array_int_32_Utils, NULL, NULL, &scope_97, 1, 0}
};
static const MappingScope scope_107 = {
  "array_int_32_32",
  scope_107_entries, 1,
};

/* struct__2252 */
static const MappingEntry scope_106_entries[24] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__2249), offsetof(struct__2252, SECTIONS), &_Type_array__2249_Utils, NULL, NULL, &scope_105, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__2252, d_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 2 */ { MAP_FIELD, ".d_nvpotrp", NULL, sizeof(kcg_int), offsetof(struct__2252, d_nvpotrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 3 */ { MAP_FIELD, ".d_nvroll", NULL, sizeof(kcg_int), offsetof(struct__2252, d_nvroll), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_FIELD, ".d_nvstff", NULL, sizeof(kcg_int), offsetof(struct__2252, d_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 5 */ { MAP_FIELD, ".d_validnv", NULL, sizeof(kcg_int), offsetof(struct__2252, d_validnv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(struct__2252, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 19},
  /* 7 */ { MAP_FIELD, ".m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(struct__2252, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 21},
  /* 8 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__2252, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__2252, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_FIELD, ".q_nvdriver_adhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(struct__2252, q_nvdriver_adhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 23},
  /* 11 */ { MAP_FIELD, ".q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(struct__2252, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(struct__2252, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__2252, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_FIELD, ".t_nvcontact", NULL, sizeof(kcg_int), offsetof(struct__2252, t_nvcontact), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_FIELD, ".t_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__2252, t_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_FIELD, ".v_nvallowovtrp", NULL, sizeof(kcg_int), offsetof(struct__2252, v_nvallowovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_FIELD, ".v_nvonsight", NULL, sizeof(kcg_int), offsetof(struct__2252, v_nvonsight), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 18 */ { MAP_FIELD, ".v_nvrel", NULL, sizeof(kcg_int), offsetof(struct__2252, v_nvrel), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 19 */ { MAP_FIELD, ".v_nvshunt", NULL, sizeof(kcg_int), offsetof(struct__2252, v_nvshunt), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 20 */ { MAP_FIELD, ".v_nvsopovtrp", NULL, sizeof(kcg_int), offsetof(struct__2252, v_nvsopovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 21 */ { MAP_FIELD, ".v_nvstff", NULL, sizeof(kcg_int), offsetof(struct__2252, v_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 22 */ { MAP_FIELD, ".v_nvunfit", NULL, sizeof(kcg_int), offsetof(struct__2252, v_nvunfit), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2252, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_106 = {
  "struct__2252",
  scope_106_entries, 24,
};

/* array__2249 */
static const MappingEntry scope_105_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__2244), 0, &_Type_struct__2244_Utils, NULL, NULL, &scope_104, 1, 0}
};
static const MappingScope scope_105 = {
  "array__2249",
  scope_105_entries, 1,
};

/* struct__2244 */
static const MappingEntry scope_104_entries[2] = {
  /* 0 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__2244, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2244, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_104 = {
  "struct__2244",
  scope_104_entries, 2,
};

/* array_int_24 */
static const MappingEntry scope_103_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_103 = {
  "array_int_24",
  scope_103_entries, 1,
};

/* struct__2236 */
static const MappingEntry scope_102_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__2236, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__2230), offsetof(struct__2236, PacketHeaders), &_Type_array__2230_Utils, NULL, NULL, &scope_100, 1, 0}
};
static const MappingScope scope_102 = {
  "struct__2236",
  scope_102_entries, 2,
};

/* array_int_500 */
static const MappingEntry scope_101_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_101 = {
  "array_int_500",
  scope_101_entries, 1,
};

/* array__2230 */
static const MappingEntry scope_100_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__2222), 0, &_Type_struct__2222_Utils, NULL, NULL, &scope_99, 1, 0}
};
static const MappingScope scope_100 = {
  "array__2230",
  scope_100_entries, 1,
};

/* struct__2222 */
static const MappingEntry scope_99_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__2222, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__2222, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__2222, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__2222, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2222, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_99 = {
  "struct__2222",
  scope_99_entries, 5,
};

/* struct__2193 */
static const MappingEntry scope_98_entries[26] = {
  /* 0 */ { MAP_FIELD, ".D_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__2193, D_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 1 */ { MAP_FIELD, ".D_NVPOTRP", NULL, sizeof(kcg_int), offsetof(struct__2193, D_NVPOTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 2 */ { MAP_FIELD, ".D_NVROLL", NULL, sizeof(kcg_int), offsetof(struct__2193, D_NVROLL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".D_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__2193, D_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_FIELD, ".D_VALIDNV", NULL, sizeof(kcg_int), offsetof(struct__2193, D_VALIDNV), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__2193, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".M_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__2193, M_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 7 */ { MAP_FIELD, ".M_NVDERUN", NULL, sizeof(kcg_int), offsetof(struct__2193, M_NVDERUN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 8 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__2193, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__2193, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__2193, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_NVDRIVER_ADHES", NULL, sizeof(kcg_int), offsetof(struct__2193, Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 12 */ { MAP_FIELD, ".Q_NVEMRRLS", NULL, sizeof(kcg_int), offsetof(struct__2193, Q_NVEMRRLS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_FIELD, ".Q_NVSRBKTRG", NULL, sizeof(kcg_int), offsetof(struct__2193, Q_NVSRBKTRG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__2193, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array_int_32), offsetof(struct__2193, SECTIONS), &_Type_array_int_32_Utils, NULL, NULL, &scope_97, 1, 7},
  /* 16 */ { MAP_FIELD, ".T_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__2193, T_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_FIELD, ".T_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__2193, T_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_FIELD, ".V_NVALLOWOVTRP", NULL, sizeof(kcg_int), offsetof(struct__2193, V_NVALLOWOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_FIELD, ".V_NVONSIGHT", NULL, sizeof(kcg_int), offsetof(struct__2193, V_NVONSIGHT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_FIELD, ".V_NVREL", NULL, sizeof(kcg_int), offsetof(struct__2193, V_NVREL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 21 */ { MAP_FIELD, ".V_NVSHUNT", NULL, sizeof(kcg_int), offsetof(struct__2193, V_NVSHUNT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 22 */ { MAP_FIELD, ".V_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__2193, V_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".V_NVSUPOVTRP", NULL, sizeof(kcg_int), offsetof(struct__2193, V_NVSUPOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_FIELD, ".V_NVUNFIT", NULL, sizeof(kcg_int), offsetof(struct__2193, V_NVUNFIT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 25 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2193, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_98 = {
  "struct__2193",
  scope_98_entries, 26,
};

/* array_int_32 */
static const MappingEntry scope_97_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_97 = {
  "array_int_32",
  scope_97_entries, 1,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_92_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_92 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_92_entries, 6,
};

/* TM_lib_internal::C_P003V1_extract_el_section/ C_P003V1_extract_el_section_TM_lib_internal */
static const MappingEntry scope_91_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L2), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_97, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_91 = {
  "TM_lib_internal::C_P003V1_extract_el_section/ C_P003V1_extract_el_section_TM_lib_internal",
  scope_91_entries, 4,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_90_entries[14] = {
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
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 3}
};
static const MappingScope scope_90 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_90_entries, 14,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_89_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 1}
};
static const MappingScope scope_89 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_89_entries, 9,
};

/* TM_lib_internal::C_P003V1_us_array/ C_P003V1_us_array_TM_lib_internal */
static const MappingEntry scope_88_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 2", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_92, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_extract_el_section 2", NULL, sizeof(outC_C_P003V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P003V1_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_91, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L37", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L37), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_97, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L38", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L38), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_104, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L41", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L41), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_OUTPUT, "sections", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, sections), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_104, 1, 11}
};
static const MappingScope scope_88 = {
  "TM_lib_internal::C_P003V1_us_array/ C_P003V1_us_array_TM_lib_internal",
  scope_88_entries, 12,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_87_entries[11] = {
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
static const MappingScope scope_87 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_87_entries, 11,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_86_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_86 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_86_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_85_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_85 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_85_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_84_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 2}
};
static const MappingScope scope_84 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_84_entries, 10,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_83_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_90, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_109, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_83 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_83_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_82_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 16},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_89, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_108, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_82 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_82_entries, 17,
};

/* TM_conversions::CAST_Int_to_D_NVSTFF/ CAST_Int_to_D_NVSTFF_TM_conversions */
static const MappingEntry scope_81_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvstff", NULL, sizeof(D_NVSTFF), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, d_nvstff), &_Type_D_NVSTFF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_81 = {
  "TM_conversions::CAST_Int_to_D_NVSTFF/ CAST_Int_to_D_NVSTFF_TM_conversions",
  scope_81_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_80_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L4_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_80 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:then:",
  scope_80_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_79_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L3_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_79 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:then:",
  scope_79_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_78_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L1_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_78 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:else:",
  scope_78_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_77_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_false, &scope_78, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_true, &scope_79, 1, 2}
};
static const MappingScope scope_77 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:",
  scope_77_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1: */
static const MappingEntry scope_76_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_77, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_80, 1, 2}
};
static const MappingScope scope_76 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:",
  scope_76_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions */
static const MappingEntry scope_75_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_76, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "q_nvdriver_adhes_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, q_nvdriver_adhes_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "q_nvdriveradhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, q_nvdriveradhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_75 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions",
  scope_75_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_74_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_70_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L8_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_70_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_74 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:then:",
  scope_74_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_73_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L71_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_73 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:then:",
  scope_73_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_72_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L1_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_72 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:else:",
  scope_72_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_71_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_false, &scope_72, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_73, 1, 2}
};
static const MappingScope scope_71 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:",
  scope_71_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1: */
static const MappingEntry scope_70_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_70_entries[0], isActive_kcg_bool_kcg_false, &scope_71, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_70_entries[0], isActive_kcg_bool_kcg_true, &scope_74, 1, 2}
};
static const MappingScope scope_70 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:",
  scope_70_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversions */
static const MappingEntry scope_69_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_70, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_nvderun_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, m_nvderun_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_69 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversions",
  scope_69_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_NVCONTACT/ CAST_Int_to_T_NVCONTACT_TM_conversions */
static const MappingEntry scope_68_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_nvcontact", NULL, sizeof(T_NVCONTACT), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, t_nvcontact), &_Type_T_NVCONTACT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_68 = {
  "TM_conversions::CAST_Int_to_T_NVCONTACT/ CAST_Int_to_T_NVCONTACT_TM_conversions",
  scope_68_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_67_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L4_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_61_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_61_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_67 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:then:",
  scope_67_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_66_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L3_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_62_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L42_IfBlock1), &_Type_kcg_bool_Utils, &scope_62_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_66 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:then:",
  scope_66_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_65_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L2_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L33_IfBlock1), &_Type_kcg_bool_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_65 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:then:",
  scope_65_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_64_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L25_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L34_IfBlock1), &_Type_kcg_bool_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_64 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:else:",
  scope_64_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_63_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_false, &scope_64, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_true, &scope_65, 1, 2}
};
static const MappingScope scope_63 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:",
  scope_63_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_62_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_false, &scope_63, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_true, &scope_66, 1, 2}
};
static const MappingScope scope_62 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:",
  scope_62_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1: */
static const MappingEntry scope_61_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_false, &scope_62, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_true, &scope_67, 1, 2}
};
static const MappingScope scope_61 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:",
  scope_61_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversions */
static const MappingEntry scope_60_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_61, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_nvcontact_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, m_nvcontact_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_60 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversions",
  scope_60_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVPOTRP/ CAST_Int_to_D_NVPOTRP_TM_conversions */
static const MappingEntry scope_59_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvpotrp", NULL, sizeof(D_NVPOTRP), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, d_nvpotrp), &_Type_D_NVPOTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_59 = {
  "TM_conversions::CAST_Int_to_D_NVPOTRP/ CAST_Int_to_D_NVPOTRP_TM_conversions",
  scope_59_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_58_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L4_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_54_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_54_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_58 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:then:",
  scope_58_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_57_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L3_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_57 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:then:",
  scope_57_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_56_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L1_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_56 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:else:",
  scope_56_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_55_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_false, &scope_56, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_57, 1, 2}
};
static const MappingScope scope_55 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:",
  scope_55_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1: */
static const MappingEntry scope_54_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_54_entries[0], isActive_kcg_bool_kcg_false, &scope_55, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_54_entries[0], isActive_kcg_bool_kcg_true, &scope_58, 1, 2}
};
static const MappingScope scope_54 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:",
  scope_54_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversions */
static const MappingEntry scope_53_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_54, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_nvemrrls_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, q_nvemrrls_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_53 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversions",
  scope_53_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_NVOVTRP/ CAST_Int_to_T_NVOVTRP_TM_conversions */
static const MappingEntry scope_52_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_nvovtrp", NULL, sizeof(T_NVOVTRP), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, t_nvovtrp), &_Type_T_NVOVTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_52 = {
  "TM_conversions::CAST_Int_to_T_NVOVTRP/ CAST_Int_to_T_NVOVTRP_TM_conversions",
  scope_52_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVOVTRP/ CAST_Int_to_D_NVOVTRP_TM_conversions */
static const MappingEntry scope_51_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvovtrp", NULL, sizeof(D_NVOVTRP), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, d_nvovtrp), &_Type_D_NVOVTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_51 = {
  "TM_conversions::CAST_Int_to_D_NVOVTRP/ CAST_Int_to_D_NVOVTRP_TM_conversions",
  scope_51_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_NVSUPOVTRP/ CAST_Int_to_V_NVSUPOVTRP_TM_conversions */
static const MappingEntry scope_50_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvsupovtrp", NULL, sizeof(V_NVSUPOVTRP), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, v_nvsupovtrp), &_Type_V_NVSUPOVTRP_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_50 = {
  "TM_conversions::CAST_Int_to_V_NVSUPOVTRP/ CAST_Int_to_V_NVSUPOVTRP_TM_conversions",
  scope_50_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVALLOWOVTRP/ CAST_Int_to_V_NVALLOWOVTRP_TM_conversions */
static const MappingEntry scope_49_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvallowovtrp", NULL, sizeof(V_NVALLOWOVTRP), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, v_nvallowovtrp), &_Type_V_NVALLOWOVTRP_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_49 = {
  "TM_conversions::CAST_Int_to_V_NVALLOWOVTRP/ CAST_Int_to_V_NVALLOWOVTRP_TM_conversions",
  scope_49_entries, 8,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_48_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L4_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_48 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:then:",
  scope_48_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_47_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L3_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_47 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:then:",
  scope_47_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_46_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L1_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_46 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:else:",
  scope_46_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_45_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_45_entries[0], isActive_kcg_bool_kcg_false, &scope_46, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_45_entries[0], isActive_kcg_bool_kcg_true, &scope_47, 1, 2}
};
static const MappingScope scope_45 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:",
  scope_45_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1: */
static const MappingEntry scope_44_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_false, &scope_45, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_48, 1, 2}
};
static const MappingScope scope_44 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:",
  scope_44_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversions */
static const MappingEntry scope_43_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_nvsbtsmperm_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, q_nvsbtsmperm_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_43 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversions",
  scope_43_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVROLL/ CAST_Int_to_D_NVROLL_TM_conversions */
static const MappingEntry scope_42_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvroll", NULL, sizeof(D_NVROLL), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, d_nvroll), &_Type_D_NVROLL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_42 = {
  "TM_conversions::CAST_Int_to_D_NVROLL/ CAST_Int_to_D_NVROLL_TM_conversions",
  scope_42_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_NVREL/ CAST_Int_to_V_NVREL_TM_conversions */
static const MappingEntry scope_41_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvrel", NULL, sizeof(V_NVREL), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, v_nvrel), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_41 = {
  "TM_conversions::CAST_Int_to_V_NVREL/ CAST_Int_to_V_NVREL_TM_conversions",
  scope_41_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVUNFIT/ CAST_Int_to_V_NVUNFIT_TM_conversions */
static const MappingEntry scope_40_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvunfit", NULL, sizeof(V_NVUNFIT), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, v_nvunfit), &_Type_V_NVUNFIT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_40 = {
  "TM_conversions::CAST_Int_to_V_NVUNFIT/ CAST_Int_to_V_NVUNFIT_TM_conversions",
  scope_40_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVONSIGHT/ CAST_Int_to_V_NVONSIGHT_TM_conversions */
static const MappingEntry scope_39_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvonsight", NULL, sizeof(V_NVONSIGHT), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, v_nvonsight), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_39 = {
  "TM_conversions::CAST_Int_to_V_NVONSIGHT/ CAST_Int_to_V_NVONSIGHT_TM_conversions",
  scope_39_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVSTFF/ CAST_Int_to_V_NVSTFF_TM_conversions */
static const MappingEntry scope_38_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvstff", NULL, sizeof(V_NVSTFF), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, v_nvstff), &_Type_V_NVSTFF_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_38 = {
  "TM_conversions::CAST_Int_to_V_NVSTFF/ CAST_Int_to_V_NVSTFF_TM_conversions",
  scope_38_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVSHUNT/ CAST_Int_to_V_NVSHUNT_TM_conversions */
static const MappingEntry scope_37_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvshunt", NULL, sizeof(V_NVSHUNT), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, v_nvshunt), &_Type_V_NVSHUNT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_37 = {
  "TM_conversions::CAST_Int_to_V_NVSHUNT/ CAST_Int_to_V_NVSHUNT_TM_conversions",
  scope_37_entries, 8,
};

/* TM_conversions::CAST_Int_to_D_VALIDNV/ CAST_Int_to_D_VALIDNV_TM_conversions */
static const MappingEntry scope_36_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_validnv", NULL, sizeof(D_VALIDNV), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, d_validnv), &_Type_D_VALIDNV_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_36 = {
  "TM_conversions::CAST_Int_to_D_VALIDNV/ CAST_Int_to_D_VALIDNV_TM_conversions",
  scope_36_entries, 6,
};

/* TM_lib_internal::C_P003V1_unflatten_sections/ C_P003V1_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_35_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_us_array 1", &iter_mapwi_32, sizeof(outC_C_P003V1_us_array_TM_lib_internal), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_88, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L1), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_97, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_32_Utils, NULL, NULL, &scope_97, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_32_32), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_32_32_Utils, NULL, NULL, &scope_107, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__2249), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L9), &_Type_array__2249_Utils, NULL, NULL, &scope_105, 1, 6},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, sections), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_105, 1, 8}
};
static const MappingScope scope_35 = {
  "TM_lib_internal::C_P003V1_unflatten_sections/ C_P003V1_unflatten_sections_TM_lib_internal",
  scope_35_entries, 9,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_34_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_28_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_28_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_34 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_34_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_33 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_33_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_32_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_32 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_32_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_31_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_31 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_31_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_30_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_false, &scope_31, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_true, &scope_32, 1, 2}
};
static const MappingScope scope_30 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_30_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_29_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_false, &scope_30, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_true, &scope_33, 1, 2}
};
static const MappingScope scope_29 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_29_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_28_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive_kcg_bool_kcg_false, &scope_29, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive_kcg_bool_kcg_true, &scope_34, 1, 2}
};
static const MappingScope scope_28 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_28_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_27_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_27 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_27_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2 */
static const MappingEntry scope_26_entries[50] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 48},
  /* 1 */ { MAP_OUTPUT, "P003V1_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, P003V1_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 49},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_87, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_86, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_98, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_444), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L209), &_Type_array_int_444_Utils, NULL, NULL, &scope_110, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L365", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L365), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_97, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_111, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 23 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_24), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L381), &_Type_array_int_24_Utils, NULL, NULL, &scope_103, 1, 23},
  /* 24 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 24},
  /* 25 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_56), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L384), &_Type_array_int_56_Utils, NULL, NULL, &scope_112, 1, 25},
  /* 26 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 27 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 28 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 29 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L390), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 30 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 31 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L392), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 32 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 33 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 35 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 36 */ { MAP_LOCAL, "_L397", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L397), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_LOCAL, "_L398", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L398), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 38 */ { MAP_LOCAL, "_L399", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L399), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 39 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 40 */ { MAP_LOCAL, "_L401", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L401), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 41 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 42 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L403), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 43 */ { MAP_LOCAL, "_L404", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L404), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 44 */ { MAP_LOCAL, "_L407", NULL, sizeof(array_int_18), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L407), &_Type_array_int_18_Utils, NULL, NULL, &scope_113, 1, 44},
  /* 45 */ { MAP_LOCAL, "_L408", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L408), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_97, 1, 45},
  /* 46 */ { MAP_LOCAL, "_L409", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L409), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 46},
  /* 47 */ { MAP_LOCAL, "_L410", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L410), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 47},
  /* 48 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 49 */ { MAP_LOCAL, "sections", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, sections), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_97, 1, 4}
};
static const MappingScope scope_26 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2",
  scope_26_entries, 50,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_25_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_85, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_109, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 10}
};
static const MappingScope scope_25 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_25_entries, 12,
};

/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal */
static const MappingEntry scope_24_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_84, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 5}
};
static const MappingScope scope_24 = {
  "TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal",
  scope_24_entries, 26,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_23_entries[14] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 12},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 13},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_82, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_23_entries[0], isActive_kcg_bool_kcg_true, &scope_83, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 9}
};
static const MappingScope scope_23 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_23_entries, 14,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_22_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_138), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_136), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_137), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_22_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_21_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_134_IfBlock1), &_Type_Q_DIR_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_135_IfBlock1), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_21 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_21_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_20_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_127_IfBlock1), &_Type_Q_DIR_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_20 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_20_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_19_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_131_IfBlock1), &_Type_Q_DIR_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_132_IfBlock1), &_Type_kcg_bool_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_19 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_19_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_18_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_130_IfBlock1), &_Type_kcg_bool_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_129_IfBlock1), &_Type_Q_DIR_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_18 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_18_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_17_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _28_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_kcg_bool_kcg_false, &scope_18, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_kcg_bool_kcg_true, &scope_19, 1, 2}
};
static const MappingScope scope_17 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_17_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_16_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _33_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_16_entries[0], isActive_kcg_bool_kcg_false, &scope_17, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_16_entries[0], isActive_kcg_bool_kcg_true, &scope_20, 1, 2}
};
static const MappingScope scope_16 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_16_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_15_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _26_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_false, &scope_16, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_true, &scope_21, 1, 2}
};
static const MappingScope scope_15 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_15_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_14_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _24__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _25_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_14 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_14_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_13_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L9_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/",
  scope_13_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_122_IfBlock1), &_Type_Q_SCALE_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_123_IfBlock1), &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_12 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_12_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_11 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_11_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_120_IfBlock1), &_Type_Q_SCALE_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_10 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_10_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_119_IfBlock1), &_Type_Q_SCALE_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_9_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2}
};
static const MappingScope scope_8 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_8_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _21_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, &scope_8, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_7 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_7_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_6 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_6_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_5_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_5 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_5_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2 */
static const MappingEntry scope_4_entries[83] = {
  /* 0 */ { MAP_OUTPUT, "P003V1_onboard", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, P003V1_onboard), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_106, 1, 82},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVOVTRP 1", NULL, sizeof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _7_Context_1), NULL, NULL, NULL, &scope_51, 1, 15},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVPOTRP 2", NULL, sizeof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_59, 1, 18},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVROLL 1", NULL, sizeof(outC_CAST_Int_to_D_NVROLL_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _11_Context_1), NULL, NULL, NULL, &scope_42, 1, 11},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVSTFF 1", NULL, sizeof(outC_CAST_Int_to_D_NVSTFF_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_81, 1, 23},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_VALIDNV 1", NULL, sizeof(outC_CAST_Int_to_D_VALIDNV_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _17_Context_1), NULL, NULL, NULL, &scope_36, 1, 5},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_NVCONTACT 1", NULL, sizeof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _4_Context_1), NULL, NULL, NULL, &scope_60, 1, 19},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_NVDERUN 1", NULL, sizeof(outC_CAST_Int_to_M_NVDERUN_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_69, 1, 21},
  /* 8 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 4},
  /* 9 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 2},
  /* 10 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 3},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES 1", NULL, sizeof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_75, 1, 22},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVEMRRLS 1", NULL, sizeof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _5_Context_1), NULL, NULL, NULL, &scope_53, 1, 17},
  /* 13 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM 1", NULL, sizeof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _10_Context_1), NULL, NULL, NULL, &scope_43, 1, 12},
  /* 14 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 0},
  /* 15 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_NVCONTACT 1", NULL, sizeof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_68, 1, 20},
  /* 16 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_NVOVTRP 1", NULL, sizeof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _6_Context_1), NULL, NULL, NULL, &scope_52, 1, 16},
  /* 17 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVALLOWOVTRP 1", NULL, sizeof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _9_Context_1), NULL, NULL, NULL, &scope_49, 1, 13},
  /* 18 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVONSIGHT 1", NULL, sizeof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _14_Context_1), NULL, NULL, NULL, &scope_39, 1, 8},
  /* 19 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVREL 1", NULL, sizeof(outC_CAST_Int_to_V_NVREL_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _12_Context_1), NULL, NULL, NULL, &scope_41, 1, 10},
  /* 20 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSHUNT 1", NULL, sizeof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _16_Context_1), NULL, NULL, NULL, &scope_37, 1, 6},
  /* 21 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSTFF 1", NULL, sizeof(outC_CAST_Int_to_V_NVSTFF_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _15_Context_1), NULL, NULL, NULL, &scope_38, 1, 7},
  /* 22 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSUPOVTRP 2", NULL, sizeof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _8_Context_2), NULL, NULL, NULL, &scope_50, 1, 14},
  /* 23 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVUNFIT 1", NULL, sizeof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _13_Context_1), NULL, NULL, NULL, &scope_40, 1, 9},
  /* 24 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_unflatten_sections 1", NULL, sizeof(outC_C_P003V1_unflatten_sections_TM_lib_internal), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _18_Context_1), NULL, NULL, NULL, &scope_35, 1, 1},
  /* 25 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_24), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1), &_Type_array_int_24_Utils, NULL, NULL, &scope_103, 1, 33},
  /* 26 */ { MAP_LOCAL, "_L10", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L10), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_106, 1, 28},
  /* 27 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 27},
  /* 28 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_int_32), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L13), &_Type_array_int_32_Utils, NULL, NULL, &scope_97, 1, 25},
  /* 30 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 31 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 32 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 33 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 35 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 36 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 59},
  /* 37 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 58},
  /* 38 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 57},
  /* 39 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 56},
  /* 40 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 55},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 54},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 53},
  /* 43 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 52},
  /* 44 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 51},
  /* 45 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 47 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 48},
  /* 48 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 47},
  /* 49 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 46},
  /* 50 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 45},
  /* 51 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 44},
  /* 52 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L39), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 53 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 32},
  /* 54 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 55 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 56 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 57 */ { MAP_LOCAL, "_L43", NULL, sizeof(D_VALIDNV), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L43), &_Type_D_VALIDNV_Utils, NULL, NULL, NULL, 1, 60},
  /* 58 */ { MAP_LOCAL, "_L45", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L45), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 61},
  /* 59 */ { MAP_LOCAL, "_L46", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L46), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 62},
  /* 60 */ { MAP_LOCAL, "_L47", NULL, sizeof(V_NVSHUNT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L47), &_Type_V_NVSHUNT_Utils, NULL, NULL, NULL, 1, 63},
  /* 61 */ { MAP_LOCAL, "_L48", NULL, sizeof(V_NVSTFF), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L48), &_Type_V_NVSTFF_Utils, NULL, NULL, NULL, 1, 64},
  /* 62 */ { MAP_LOCAL, "_L49", NULL, sizeof(V_NVONSIGHT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L49), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 65},
  /* 63 */ { MAP_LOCAL, "_L5", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_105, 1, 31},
  /* 64 */ { MAP_LOCAL, "_L50", NULL, sizeof(V_NVUNFIT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L50), &_Type_V_NVUNFIT_Utils, NULL, NULL, NULL, 1, 66},
  /* 65 */ { MAP_LOCAL, "_L51", NULL, sizeof(V_NVREL), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L51), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 67},
  /* 66 */ { MAP_LOCAL, "_L52", NULL, sizeof(D_NVROLL), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L52), &_Type_D_NVROLL_Utils, NULL, NULL, NULL, 1, 68},
  /* 67 */ { MAP_LOCAL, "_L53", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L53), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 69},
  /* 68 */ { MAP_LOCAL, "_L54", NULL, sizeof(V_NVALLOWOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L54), &_Type_V_NVALLOWOVTRP_Utils, NULL, NULL, NULL, 1, 70},
  /* 69 */ { MAP_LOCAL, "_L56", NULL, sizeof(V_NVSUPOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L56), &_Type_V_NVSUPOVTRP_Utils, NULL, NULL, NULL, 1, 71},
  /* 70 */ { MAP_LOCAL, "_L57", NULL, sizeof(D_NVOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L57), &_Type_D_NVOVTRP_Utils, NULL, NULL, NULL, 1, 72},
  /* 71 */ { MAP_LOCAL, "_L58", NULL, sizeof(T_NVOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L58), &_Type_T_NVOVTRP_Utils, NULL, NULL, NULL, 1, 73},
  /* 72 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L59), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 74},
  /* 73 */ { MAP_LOCAL, "_L60", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L60), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 75},
  /* 74 */ { MAP_LOCAL, "_L62", NULL, sizeof(D_NVPOTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L62), &_Type_D_NVPOTRP_Utils, NULL, NULL, NULL, 1, 76},
  /* 75 */ { MAP_LOCAL, "_L63", NULL, sizeof(M_NVCONTACT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L63), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 77},
  /* 76 */ { MAP_LOCAL, "_L64", NULL, sizeof(T_NVCONTACT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L64), &_Type_T_NVCONTACT_Utils, NULL, NULL, NULL, 1, 78},
  /* 77 */ { MAP_LOCAL, "_L65", NULL, sizeof(M_NVDERUN), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L65), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 79},
  /* 78 */ { MAP_LOCAL, "_L66", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L66), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 80},
  /* 79 */ { MAP_LOCAL, "_L67", NULL, sizeof(D_NVSTFF), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L67), &_Type_D_NVSTFF_Utils, NULL, NULL, NULL, 1, 81},
  /* 80 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 30},
  /* 81 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 29},
  /* 82 */ { MAP_LOCAL, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, n_iter), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_4 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2",
  scope_4_entries, 83,
};

/* TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2 */
static const MappingEntry scope_3_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_tracksim_compr 1", NULL, sizeof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_26, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_25, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_24, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_98, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_100, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 13}
};
static const MappingScope scope_3 = {
  "TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2",
  scope_3_entries, 17,
};

/* TM_baseline2::Read_P003V1/ Read_P003V1_TM_baseline2 */
static const MappingEntry scope_2_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "P003V1_OBU_out", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, P003V1_OBU_out), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_106, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_compr_onboard 1", NULL, sizeof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P003V1_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_23, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, _L166), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_106, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P003V1_TM_baseline2, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_99, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P003V1_TM_baseline2, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_101, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P003V1_TM_baseline2, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 2}
};
static const MappingScope scope_2 = {
  "TM_baseline2::Read_P003V1/ Read_P003V1_TM_baseline2",
  scope_2_entries, 7,
};

/* Internal::TestP003V1/ TestP003V1_Internal */
static const MappingEntry scope_1_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(P003V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx.PacketOut, &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_106, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_baseline2::Read_P003V1 1", NULL, sizeof(outC_Read_P003V1_TM_baseline2), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P003V1 1", NULL, sizeof(outC_Write_P003V1_TM_trackside_baseline2), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L1, &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_106, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L3, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L4, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), (size_t)&outputs_ctx._L5, &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_98, 1, 6}
};
static const MappingScope scope_1 = {
  "Internal::TestP003V1/ TestP003V1_Internal",
  scope_1_entries, 8,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Internal::TestP003V1", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

