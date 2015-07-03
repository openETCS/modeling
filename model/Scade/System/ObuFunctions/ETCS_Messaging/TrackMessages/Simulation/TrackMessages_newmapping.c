/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 15);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 5);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_1, 13);
MAP_DECL(scope_0, 1);

/* struct__198 */
static const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__180), offsetof(struct__198, Header), &_Type_struct__180_Utils, NULL, NULL, &scope_10, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__175), offsetof(struct__198, Messages), &_Type_struct__175_Utils, NULL, NULL, &scope_9, 1, 1}
};
static const MappingScope scope_11 = {
  "struct__198",
  scope_11_entries, 2,
};

/* struct__180 */
static const MappingEntry scope_10_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__180, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__180, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__180, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__180, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__180, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__180, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__180, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__180, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int), offsetof(struct__180, q_dir), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int), offsetof(struct__180, q_scale), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__180, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__180, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_int), offsetof(struct__180, t_sh_rqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__180, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_int), offsetof(struct__180, t_train_reference), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_10 = {
  "struct__180",
  scope_10_entries, 15,
};

/* struct__175 */
static const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__175, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_6, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__172), offsetof(struct__175, PacketHeaders), &_Type_array__172_Utils, NULL, NULL, &scope_8, 1, 0}
};
static const MappingScope scope_9 = {
  "struct__175",
  scope_9_entries, 2,
};

/* array__172 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__164), 0, &_Type_struct__164_Utils, NULL, NULL, &scope_7, 1, 0}
};
static const MappingScope scope_8 = {
  "array__172",
  scope_8_entries, 1,
};

/* struct__164 */
static const MappingEntry scope_7_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__164, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__164, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__164, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__164, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__164, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_7 = {
  "struct__164",
  scope_7_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "array_int_500",
  scope_6_entries, 1,
};

/* TM_specific::DIRTY_m_version_filter_for_aprobst/ DIRTY_m_version_filter_fo_TM_specific */
static const MappingEntry scope_1_entries[13] = {
  /* 0 */ { MAP_INPUT, "RadioMessage_in", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&inputs_ctx.RadioMessage_in, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_11, 1, 12},
  /* 1 */ { MAP_OUTPUT, "RadioMessage_out", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx.RadioMessage_out, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_11, 1, 11},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L1, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_11, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_TM), (size_t)&outputs_ctx._L2, &_Type_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_10, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L3, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_9, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L37, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L38", NULL, sizeof(Radio_TrackTrain_Header_T_TM), (size_t)&outputs_ctx._L38, &_Type_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_10, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L39, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L40, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L41, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L42, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L43, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L6, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_11, 1, 3}
};
static const MappingScope scope_1 = {
  "TM_specific::DIRTY_m_version_filter_for_aprobst/ DIRTY_m_version_filter_fo_TM_specific",
  scope_1_entries, 13,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_specific::DIRTY_m_version_filter_for_aprobst", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

