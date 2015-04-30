/* BaliseLib_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "BaliseLib_newtype.h"
#include "BaliseLib_newmapping.h"

/* iterators */
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_15, 2);
MAP_DECL(scope_14, 2);
MAP_DECL(scope_13, 10);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 5);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_3, 18);
MAP_DECL(scope_2, 6);
MAP_DECL(scope_1, 28);
MAP_DECL(scope_0, 1);

/* struct__340 */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_FIELD, ".BG_Message", NULL, sizeof(struct__335), offsetof(struct__340, BG_Message), &_Type_struct__335_Utils, NULL, NULL, &scope_14, 1, 1},
  /* 1 */ { MAP_FIELD, ".TrainPosRaw", NULL, sizeof(struct__297), offsetof(struct__340, TrainPosRaw), &_Type_struct__297_Utils, NULL, NULL, &scope_8, 1, 0}
};
static const MappingScope scope_15 = {
  "struct__340",
  scope_15_entries, 2,
};

/* struct__335 */
static const MappingEntry scope_14_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__322), offsetof(struct__335, Header), &_Type_struct__322_Utils, NULL, NULL, &scope_13, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__317), offsetof(struct__335, Messages), &_Type_struct__317_Utils, NULL, NULL, &scope_12, 1, 1}
};
static const MappingScope scope_14 = {
  "struct__335",
  scope_14_entries, 2,
};

/* struct__322 */
static const MappingEntry scope_13_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(struct__322, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__322, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__322, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(struct__322, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(struct__322, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__322, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__322, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(struct__322, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(struct__322, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(struct__322, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "struct__322",
  scope_13_entries, 10,
};

/* struct__317 */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__317, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_9, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__314), offsetof(struct__317, PacketHeaders), &_Type_array__314_Utils, NULL, NULL, &scope_11, 1, 0}
};
static const MappingScope scope_12 = {
  "struct__317",
  scope_12_entries, 2,
};

/* array__314 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__306), 0, &_Type_struct__306_Utils, NULL, NULL, &scope_10, 1, 0}
};
static const MappingScope scope_11 = {
  "array__314",
  scope_11_entries, 1,
};

/* struct__306 */
static const MappingEntry scope_10_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__306, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__306, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__306, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__306, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__306, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_10 = {
  "struct__306",
  scope_10_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "array_int_500",
  scope_9_entries, 1,
};

/* struct__297 */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_FIELD, ".OffsetTotal", NULL, sizeof(kcg_int), offsetof(struct__297, OffsetTotal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".TrainPosCalibrated", NULL, sizeof(kcg_real), offsetof(struct__297, TrainPosCalibrated), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".TrainPos_in", NULL, sizeof(kcg_real), offsetof(struct__297, TrainPos_in), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_8 = {
  "struct__297",
  scope_8_entries, 3,
};

/* InfraLib::TrackDiscontinuity_CalcTrainPos/ TrackDiscontinuity_CalcTr_InfraLib */
static const MappingEntry scope_3_entries[18] = {
  /* 0 */ { MAP_OUTPUT, "TrainPosCalibrated", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, TrainPosCalibrated), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 1 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L24), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L25), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L27), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(TrainPosRaw_T_InfraLib), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L29), &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_8, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L31), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L32), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15}
};
static const MappingScope scope_3 = {
  "InfraLib::TrackDiscontinuity_CalcTrainPos/ TrackDiscontinuity_CalcTr_InfraLib",
  scope_3_entries, 18,
};

/* InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLibmath::Abs 3/ */
static const MappingEntry scope_2_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), (int)&outputs_ctx.A_Output_3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_2 = {
  "InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLibmath::Abs 3/",
  scope_2_entries, 6,
};

/* InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLib */
static const MappingEntry scope_1_entries[28] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.tmp, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 23},
  /* 1 */ { MAP_INPUT, "EndSection", NULL, sizeof(kcg_int), (int)&inputs_ctx.EndSection, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 2 */ { MAP_INSTANCE, "InfraLib::TrackDiscontinuity_CalcTrainPos 2", NULL, sizeof(outC_TrackDiscontinuity_CalcTr_InfraLib), (int)&outputs_ctx.Context_2, NULL, &scope_1_entries[0], isActive_kcg_bool_kcg_true, &scope_3, 1, 1},
  /* 3 */ { MAP_LOCAL, "NewOffset", NULL, sizeof(kcg_int), (int)&outputs_ctx.NewOffset, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_INPUT, "SectionData_in", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&inputs_ctx.SectionData_in, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 25},
  /* 5 */ { MAP_OUTPUT, "SectionData_out", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx.SectionData_out, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 24},
  /* 6 */ { MAP_INPUT, "StartSection", NULL, sizeof(kcg_int), (int)&inputs_ctx.StartSection, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L16, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_int), (int)&outputs_ctx._L49, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), (int)&outputs_ctx._L50, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_int), (int)&outputs_ctx._L57, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_real), (int)&outputs_ctx._L59, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_real), (int)&outputs_ctx._L60, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L61, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L62, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L63, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 18 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_real), (int)&outputs_ctx._L79, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 19 */ { MAP_LOCAL, "_L80", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L80, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 15},
  /* 20 */ { MAP_LOCAL, "_L81", NULL, sizeof(TrainPosRaw_T_InfraLib), (int)&outputs_ctx._L81, &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_8, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_real), (int)&outputs_ctx._L82, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 22 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_int), (int)&outputs_ctx._L83, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L88", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L88, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L89", NULL, sizeof(TrainPosRaw_T_InfraLib), (int)&outputs_ctx._L89, &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_8, 1, 20},
  /* 25 */ { MAP_LOCAL, "_L90", NULL, sizeof(TrainPosRaw_T_InfraLib), (int)&outputs_ctx._L90, &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_8, 1, 21},
  /* 26 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int), (int)&outputs_ctx._L91, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 27 */ { MAP_EXPANDED, "math::Abs 3", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 0}
};
static const MappingScope scope_1 = {
  "InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLib",
  scope_1_entries, 28,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "InfraLib::TrackDiscontinuity", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

