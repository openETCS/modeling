/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_350;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_15;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_128;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_350 = { "array", 350, 350, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_15 = { "array", 15, 15, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_128 = { "array", 128, 128, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_21, 1);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 22);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 5);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 5);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 24);
MAP_DECL(scope_7, 1);
MAP_DECL(scope_6, 4);
MAP_DECL(scope_1, 1);
MAP_DECL(scope_0, 1);

/* UAB_array_int_350 */
static const MappingEntry scope_21_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_350, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "UAB_array_int_350",
  scope_21_entries, 1,
};

/* UAB_array_int_6 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "UAB_array_int_6",
  scope_20_entries, 1,
};

/* UAB_array_int_15 */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_15, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_19 = {
  "UAB_array_int_15",
  scope_19_entries, 1,
};

/* UAB_struct__2695 */
static const MappingEntry scope_18_entries[22] = {
  /* 0 */ { MAP_FIELD, ".d_dp", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, d_dp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_FIELD, ".d_endtimerstartloc", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, d_endtimerstartloc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_FIELD, ".d_ol", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, d_ol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 3 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".d_startol", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, d_startol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 5 */ { MAP_FIELD, ".l_endsection", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, l_endsection), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".q_dangerpoint", NULL, sizeof(UAB_Q_DANGERPOINT), offsetof(UAB_struct__2695, q_dangerpoint), &_Type_UAB_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(UAB_Q_DIR), offsetof(UAB_struct__2695, q_dir), &_Type_UAB_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".q_endtimer", NULL, sizeof(UAB_Q_ENDTIMER), offsetof(UAB_struct__2695, q_endtimer), &_Type_UAB_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".q_overlap", NULL, sizeof(UAB_Q_OVERLAP), offsetof(UAB_struct__2695, q_overlap), &_Type_UAB_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_FIELD, ".q_scale", NULL, sizeof(UAB_Q_SCALE), offsetof(UAB_struct__2695, q_scale), &_Type_UAB_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(UAB_Q_SECTIONTIMER), offsetof(UAB_struct__2695, q_sectiontimer), &_Type_UAB_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_FIELD, ".sections", NULL, sizeof(UAB_array__2692), offsetof(UAB_struct__2695, sections), &_Type_UAB_array__2692_Utils, NULL, NULL, &scope_17, 1, 6},
  /* 14 */ { MAP_FIELD, ".t_endtimer", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, t_endtimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_FIELD, ".t_loa", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, t_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_FIELD, ".t_ol", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, t_ol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 18 */ { MAP_FIELD, ".v_loa", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, v_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 19 */ { MAP_FIELD, ".v_releasedp", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, v_releasedp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 20 */ { MAP_FIELD, ".v_releaseol", NULL, sizeof(kcg_int), offsetof(UAB_struct__2695, v_releaseol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__2695, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_18 = {
  "UAB_struct__2695",
  scope_18_entries, 22,
};

/* UAB_array__2692 */
static const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(UAB_struct__2684), 0, &_Type_UAB_struct__2684_Utils, NULL, NULL, &scope_16, 1, 0}
};
static const MappingScope scope_17 = {
  "UAB_array__2692",
  scope_17_entries, 1,
};

/* UAB_struct__2684 */
static const MappingEntry scope_16_entries[5] = {
  /* 0 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(UAB_struct__2684, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".l_section", NULL, sizeof(kcg_int), offsetof(UAB_struct__2684, l_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(UAB_Q_SECTIONTIMER), offsetof(UAB_struct__2684, q_sectiontimer), &_Type_UAB_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(UAB_struct__2684, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__2684, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "UAB_struct__2684",
  scope_16_entries, 5,
};

/* UAB_struct__2679 */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(UAB_array_int_500), offsetof(UAB_struct__2679, PacketData), &_Type_UAB_array_int_500_Utils, NULL, NULL, &scope_9, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(UAB_array__2676), offsetof(UAB_struct__2679, PacketHeaders), &_Type_UAB_array__2676_Utils, NULL, NULL, &scope_14, 1, 0}
};
static const MappingScope scope_15 = {
  "UAB_struct__2679",
  scope_15_entries, 2,
};

/* UAB_array__2676 */
static const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(UAB_struct__2659), 0, &_Type_UAB_struct__2659_Utils, NULL, NULL, &scope_10, 1, 0}
};
static const MappingScope scope_14 = {
  "UAB_array__2676",
  scope_14_entries, 1,
};

/* UAB_array_int_128 */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "UAB_array_int_128",
  scope_13_entries, 1,
};

/* UAB_array_int_4_32 */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(UAB_array_int_4), 0, &_Type_UAB_array_int_4_Utils, NULL, NULL, &scope_11, 1, 0}
};
static const MappingScope scope_12 = {
  "UAB_array_int_4_32",
  scope_12_entries, 1,
};

/* UAB_array_int_4 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "UAB_array_int_4",
  scope_11_entries, 1,
};

/* UAB_struct__2659 */
static const MappingEntry scope_10_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(UAB_struct__2659, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(UAB_struct__2659, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(UAB_Q_DIR), offsetof(UAB_struct__2659, q_dir), &_Type_UAB_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(UAB_struct__2659, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__2659, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_10 = {
  "UAB_struct__2659",
  scope_10_entries, 5,
};

/* UAB_array_int_500 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "UAB_array_int_500",
  scope_9_entries, 1,
};

/* UAB_struct__2629 */
static const MappingEntry scope_8_entries[24] = {
  /* 0 */ { MAP_FIELD, ".D_DP", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, D_DP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 1 */ { MAP_FIELD, ".D_ENDTIMERSTARTLOC", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, D_ENDTIMERSTARTLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 2 */ { MAP_FIELD, ".D_OL", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, D_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 3 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_FIELD, ".D_STARTOL", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, D_STARTOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 5 */ { MAP_FIELD, ".L_ENDSECTION", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, L_ENDSECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".Q_DANGERPOINT", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, Q_DANGERPOINT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_ENDTIMER", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, Q_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".Q_OVERLAP", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, Q_OVERLAP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(UAB_array__2626), offsetof(UAB_struct__2629, SECTIONS), &_Type_UAB_array__2626_Utils, NULL, NULL, &scope_7, 1, 8},
  /* 16 */ { MAP_FIELD, ".T_ENDTIMER", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, T_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_FIELD, ".T_LOA", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, T_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_FIELD, ".T_OL", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, T_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_FIELD, ".T_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, T_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 20 */ { MAP_FIELD, ".V_LOA", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, V_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 21 */ { MAP_FIELD, ".V_RELEASEDP", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, V_RELEASEDP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 22 */ { MAP_FIELD, ".V_RELEASEOL", NULL, sizeof(kcg_int), offsetof(UAB_struct__2629, V_RELEASEOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(UAB_struct__2629, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_8 = {
  "UAB_struct__2629",
  scope_8_entries, 24,
};

/* UAB_array__2626 */
static const MappingEntry scope_7_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(UAB_struct__2619), 0, &_Type_UAB_struct__2619_Utils, NULL, NULL, &scope_6, 1, 0}
};
static const MappingScope scope_7 = {
  "UAB_array__2626",
  scope_7_entries, 1,
};

/* UAB_struct__2619 */
static const MappingEntry scope_6_entries[4] = {
  /* 0 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(UAB_struct__2619, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_SECTION", NULL, sizeof(kcg_int), offsetof(UAB_struct__2619, L_SECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(UAB_struct__2619, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".T_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(UAB_struct__2619, T_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_6 = {
  "UAB_struct__2619",
  scope_6_entries, 4,
};

/* Internal_Tests::TestP015/ UAB_TestP015_Internal_Tests */
static const MappingEntry scope_1_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(UAB_P015_OBU_T_TM), (size_t)&UAB_PacketOut, &_Type_UAB_P015_OBU_T_TM_Utils, NULL, NULL, &scope_18, 1, 0}
};
static const MappingScope scope_1 = {
  "Internal_Tests::TestP015/ UAB_TestP015_Internal_Tests",
  scope_1_entries, 1,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Internal_Tests::TestP015", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

