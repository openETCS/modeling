/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_395;
static const MappingIterator iter_array_444;
static const MappingIterator iter_array_430;
static const MappingIterator iter_array_66;
static const MappingIterator iter_array_2;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_99;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_395 = { "array", 395, 395, NULL};
static const MappingIterator iter_array_444 = { "array", 444, 444, NULL};
static const MappingIterator iter_array_430 = { "array", 430, 430, NULL};
static const MappingIterator iter_array_66 = { "array", 66, 66, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_38, 1);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 1);
MAP_DECL(scope_35, 5);
MAP_DECL(scope_34, 26);
MAP_DECL(scope_33, 1);
MAP_DECL(scope_32, 9);
MAP_DECL(scope_31, 8);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 1);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 1);
MAP_DECL(scope_26, 2);
MAP_DECL(scope_25, 1);
MAP_DECL(scope_24, 11);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 1);
MAP_DECL(scope_21, 1);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 3);
MAP_DECL(scope_18, 1);
MAP_DECL(scope_17, 5);
MAP_DECL(scope_16, 2);
MAP_DECL(scope_15, 6);
MAP_DECL(scope_14, 5);
MAP_DECL(scope_13, 2);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 10);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 5);
MAP_DECL(scope_7, 1);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_1, 2);
MAP_DECL(scope_0, 1);

/* UAB_array_int_395 */
static const MappingEntry scope_38_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_395, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_38 = {
  "UAB_array_int_395",
  scope_38_entries, 1,
};

/* UAB_array_int_444 */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_444, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_37 = {
  "UAB_array_int_444",
  scope_37_entries, 1,
};

/* UAB_array_int_430 */
static const MappingEntry scope_36_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_430, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_36 = {
  "UAB_array_int_430",
  scope_36_entries, 1,
};

/* UAB_struct__21426 */
static const MappingEntry scope_35_entries[5] = {
  /* 0 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21426, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".NID_MN", NULL, sizeof(kcg_int), offsetof(UAB_struct__21426, NID_MN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21426, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21426, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21426, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_35 = {
  "UAB_struct__21426",
  scope_35_entries, 5,
};

/* UAB_struct__21397 */
static const MappingEntry scope_34_entries[26] = {
  /* 0 */ { MAP_FIELD, ".D_NVOVTRP", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, D_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 1 */ { MAP_FIELD, ".D_NVPOTRP", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, D_NVPOTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 2 */ { MAP_FIELD, ".D_NVROLL", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, D_NVROLL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".D_NVSTFF", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, D_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_FIELD, ".D_VALIDNV", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, D_VALIDNV), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".M_NVCONTACT", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, M_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 7 */ { MAP_FIELD, ".M_NVDERUN", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, M_NVDERUN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 8 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_NVDRIVER_ADHES", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 12 */ { MAP_FIELD, ".Q_NVEMRRLS", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, Q_NVEMRRLS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_FIELD, ".Q_NVSRBKTRG", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, Q_NVSRBKTRG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(UAB_array_int_32), offsetof(UAB_struct__21397, SECTIONS), &_Type_UAB_array_int_32_Utils, NULL, NULL, &scope_33, 1, 7},
  /* 16 */ { MAP_FIELD, ".T_NVCONTACT", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, T_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_FIELD, ".T_NVOVTRP", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, T_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_FIELD, ".V_NVALLOWOVTRP", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, V_NVALLOWOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_FIELD, ".V_NVONSIGHT", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, V_NVONSIGHT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_FIELD, ".V_NVREL", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, V_NVREL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 21 */ { MAP_FIELD, ".V_NVSHUNT", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, V_NVSHUNT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 22 */ { MAP_FIELD, ".V_NVSTFF", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, V_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".V_NVSUPOVTRP", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, V_NVSUPOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_FIELD, ".V_NVUNFIT", NULL, sizeof(kcg_int), offsetof(UAB_struct__21397, V_NVUNFIT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 25 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21397, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_34 = {
  "UAB_struct__21397",
  scope_34_entries, 26,
};

/* UAB_array_int_32 */
static const MappingEntry scope_33_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_33 = {
  "UAB_array_int_32",
  scope_33_entries, 1,
};

/* UAB_struct__21382 */
static const MappingEntry scope_32_entries[9] = {
  /* 0 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".NID_RADIO", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, NID_RADIO), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".NID_RBC", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, NID_RBC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_RBC", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, Q_RBC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_FIELD, ".Q_SLEEPSESSION", NULL, sizeof(kcg_int), offsetof(UAB_struct__21382, Q_SLEEPSESSION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21382, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_32 = {
  "UAB_struct__21382",
  scope_32_entries, 9,
};

/* UAB_struct__21371 */
static const MappingEntry scope_31_entries[8] = {
  /* 0 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21371, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21371, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(UAB_struct__21371, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21371, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(UAB_struct__21371, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21371, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(UAB_array__21368), offsetof(UAB_struct__21371, SECTIONS), &_Type_UAB_array__21368_Utils, NULL, NULL, &scope_30, 1, 7},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21371, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_31 = {
  "UAB_struct__21371",
  scope_31_entries, 8,
};

/* UAB_array__21368 */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(UAB_struct__21354), 0, &_Type_UAB_struct__21354_Utils, NULL, NULL, &scope_26, 1, 0}
};
static const MappingScope scope_30 = {
  "UAB_array__21368",
  scope_30_entries, 1,
};

/* UAB_array__21365 */
static const MappingEntry scope_29_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(UAB_struct__21354), 0, &_Type_UAB_struct__21354_Utils, NULL, NULL, &scope_26, 1, 0}
};
static const MappingScope scope_29 = {
  "UAB_array__21365",
  scope_29_entries, 1,
};

/* UAB_array_int_66 */
static const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_66, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_28 = {
  "UAB_array_int_66",
  scope_28_entries, 1,
};

/* UAB_array_int_2_33 */
static const MappingEntry scope_27_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(UAB_array_int_2), 0, &_Type_UAB_array_int_2_Utils, NULL, NULL, &scope_25, 1, 0}
};
static const MappingScope scope_27 = {
  "UAB_array_int_2_33",
  scope_27_entries, 1,
};

/* UAB_struct__21354 */
static const MappingEntry scope_26_entries[2] = {
  /* 0 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21354, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(UAB_struct__21354, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_26 = {
  "UAB_struct__21354",
  scope_26_entries, 2,
};

/* UAB_array_int_2 */
static const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_25 = {
  "UAB_array_int_2",
  scope_25_entries, 1,
};

/* UAB_struct__21337 */
static const MappingEntry scope_24_entries[11] = {
  /* 0 */ { MAP_FIELD, ".D_LEVELTR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, D_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(UAB_struct__21337, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(UAB_array__21334), offsetof(UAB_struct__21337, SECTIONS), &_Type_UAB_array__21334_Utils, NULL, NULL, &scope_23, 1, 10},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21337, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_24 = {
  "UAB_struct__21337",
  scope_24_entries, 11,
};

/* UAB_array__21334 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(UAB_struct__21319), 0, &_Type_UAB_struct__21319_Utils, NULL, NULL, &scope_19, 1, 0}
};
static const MappingScope scope_23 = {
  "UAB_array__21334",
  scope_23_entries, 1,
};

/* UAB_array__21331 */
static const MappingEntry scope_22_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(UAB_struct__21319), 0, &_Type_UAB_struct__21319_Utils, NULL, NULL, &scope_19, 1, 0}
};
static const MappingScope scope_22 = {
  "UAB_array__21331",
  scope_22_entries, 1,
};

/* UAB_array_int_99 */
static const MappingEntry scope_21_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "UAB_array_int_99",
  scope_21_entries, 1,
};

/* UAB_array_int_3_33 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(UAB_array_int_3), 0, &_Type_UAB_array_int_3_Utils, NULL, NULL, &scope_18, 1, 0}
};
static const MappingScope scope_20 = {
  "UAB_array_int_3_33",
  scope_20_entries, 1,
};

/* UAB_struct__21319 */
static const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21319, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21319, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(UAB_struct__21319, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_19 = {
  "UAB_struct__21319",
  scope_19_entries, 3,
};

/* UAB_array_int_3 */
static const MappingEntry scope_18_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_18 = {
  "UAB_array_int_3",
  scope_18_entries, 1,
};

/* UAB_struct__21308 */
static const MappingEntry scope_17_entries[5] = {
  /* 0 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21308, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21308, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(UAB_struct__21308, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".Q_SRSTOP", NULL, sizeof(kcg_int), offsetof(UAB_struct__21308, Q_SRSTOP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21308, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_17 = {
  "UAB_struct__21308",
  scope_17_entries, 5,
};

/* UAB_struct__21303 */
static const MappingEntry scope_16_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__21303, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21303, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "UAB_struct__21303",
  scope_16_entries, 2,
};

/* UAB_struct__21294 */
static const MappingEntry scope_15_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(UAB_struct__21294, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21294, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(UAB_struct__21294, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(UAB_struct__21263), offsetof(UAB_struct__21294, header), &_Type_UAB_struct__21263_Utils, NULL, NULL, &scope_11, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(UAB_struct__21258), offsetof(UAB_struct__21294, packets), &_Type_UAB_struct__21258_Utils, NULL, NULL, &scope_10, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(UAB_struct__21294, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_15 = {
  "UAB_struct__21294",
  scope_15_entries, 6,
};

/* UAB_struct__21286 */
static const MappingEntry scope_14_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(UAB_struct__21286, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(UAB_struct__21286, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(UAB_OrBG_TM), offsetof(UAB_struct__21286, Or_BG), &_Type_UAB_OrBG_TM_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(UAB_OrLine_TM), offsetof(UAB_struct__21286, Or_Line), &_Type_UAB_OrLine_TM_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(UAB_struct__21286, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_14 = {
  "UAB_struct__21286",
  scope_14_entries, 5,
};

/* UAB_struct__21281 */
static const MappingEntry scope_13_entries[2] = {
  /* 0 */ { MAP_FIELD, ".BG_Message", NULL, sizeof(UAB_struct__21276), offsetof(UAB_struct__21281, BG_Message), &_Type_UAB_struct__21276_Utils, NULL, NULL, &scope_12, 1, 1},
  /* 1 */ { MAP_FIELD, ".TrainPosRaw", NULL, sizeof(UAB_struct__21238), offsetof(UAB_struct__21281, TrainPosRaw), &_Type_UAB_struct__21238_Utils, NULL, NULL, &scope_6, 1, 0}
};
static const MappingScope scope_13 = {
  "UAB_struct__21281",
  scope_13_entries, 2,
};

/* UAB_struct__21276 */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(UAB_struct__21263), offsetof(UAB_struct__21276, Header), &_Type_UAB_struct__21263_Utils, NULL, NULL, &scope_11, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(UAB_struct__21258), offsetof(UAB_struct__21276, Messages), &_Type_UAB_struct__21258_Utils, NULL, NULL, &scope_10, 1, 1}
};
static const MappingScope scope_12 = {
  "UAB_struct__21276",
  scope_12_entries, 2,
};

/* UAB_struct__21263 */
static const MappingEntry scope_11_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(UAB_struct__21263, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "UAB_struct__21263",
  scope_11_entries, 10,
};

/* UAB_struct__21258 */
static const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(UAB_array_int_500), offsetof(UAB_struct__21258, PacketData), &_Type_UAB_array_int_500_Utils, NULL, NULL, &scope_7, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(UAB_array__21255), offsetof(UAB_struct__21258, PacketHeaders), &_Type_UAB_array__21255_Utils, NULL, NULL, &scope_9, 1, 0}
};
static const MappingScope scope_10 = {
  "UAB_struct__21258",
  scope_10_entries, 2,
};

/* UAB_array__21255 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(UAB_struct__21247), 0, &_Type_UAB_struct__21247_Utils, NULL, NULL, &scope_8, 1, 0}
};
static const MappingScope scope_9 = {
  "UAB_array__21255",
  scope_9_entries, 1,
};

/* UAB_struct__21247 */
static const MappingEntry scope_8_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(UAB_struct__21247, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(UAB_struct__21247, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(UAB_Q_DIR), offsetof(UAB_struct__21247, q_dir), &_Type_UAB_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(UAB_struct__21247, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__21247, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_8 = {
  "UAB_struct__21247",
  scope_8_entries, 5,
};

/* UAB_array_int_500 */
static const MappingEntry scope_7_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_7 = {
  "UAB_array_int_500",
  scope_7_entries, 1,
};

/* UAB_struct__21238 */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_FIELD, ".OffsetTotal", NULL, sizeof(kcg_int), offsetof(UAB_struct__21238, OffsetTotal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".TrainPosCalibrated", NULL, sizeof(kcg_real), offsetof(UAB_struct__21238, TrainPosCalibrated), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".TrainPos_in", NULL, sizeof(kcg_real), offsetof(UAB_struct__21238, TrainPos_in), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "UAB_struct__21238",
  scope_6_entries, 3,
};

/* Amsterdam_Utrecht_Lijn1_balises/ UAB_Amsterdam_Utrecht_Lijn1_balises */
static const MappingEntry scope_1_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "BaliseMessage", NULL, sizeof(UAB_CompressedBaliseMessage_TM), (size_t)&UAB_BaliseMessage, &_Type_UAB_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_12, 1, 0},
  /* 1 */ { MAP_INPUT, "TrainPosSim_in", NULL, sizeof(kcg_real), (size_t)&_ctx_UAB_TrainPosSim_in_buffer, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_1 = {
  "Amsterdam_Utrecht_Lijn1_balises/ UAB_Amsterdam_Utrecht_Lijn1_balises",
  scope_1_entries, 2,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Amsterdam_Utrecht_Lijn1_balises", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

