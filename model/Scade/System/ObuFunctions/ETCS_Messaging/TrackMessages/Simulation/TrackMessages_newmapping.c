/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_494;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_494 = { "array", 494, 494, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_25, 1);
MAP_DECL(scope_24, 1);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 5);
MAP_DECL(scope_21, 1);
MAP_DECL(scope_20, 12);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 1);
MAP_DECL(scope_17, 5);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_10, 19);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 2);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_6, 2);
MAP_DECL(scope_5, 3);
MAP_DECL(scope_4, 3);
MAP_DECL(scope_3, 3);
MAP_DECL(scope_2, 6);
MAP_DECL(scope_1, 39);
MAP_DECL(scope_0, 1);

/* array__497 */
static const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__451), 0, &_Type_struct__451_Utils, NULL, NULL, &scope_17, 1, 0}
};
static const MappingScope scope_25 = {
  "array__497",
  scope_25_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_24_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_24 = {
  "array_int_6",
  scope_24_entries, 1,
};

/* array_int_494 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_494, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "array_int_494",
  scope_23_entries, 1,
};

/* struct__483 */
static const MappingEntry scope_22_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__483, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__483, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__483, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__483, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__483, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_22 = {
  "struct__483",
  scope_22_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_21_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "array_int_500",
  scope_21_entries, 1,
};

/* struct__465 */
static const MappingEntry scope_20_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__465, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__465, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__465, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(struct__465, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(struct__465, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__465, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__465, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__465, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(array__462), offsetof(struct__465, SECTIONS_SSP), &_Type_array__462_Utils, NULL, NULL, &scope_19, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__448), offsetof(struct__465, SECTIONS_q_diff), &_Type_array__448_Utils, NULL, NULL, &scope_16, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__465, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__465, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "struct__465",
  scope_20_entries, 12,
};

/* array__462 */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__451), 0, &_Type_struct__451_Utils, NULL, NULL, &scope_17, 1, 0}
};
static const MappingScope scope_19 = {
  "array__462",
  scope_19_entries, 1,
};

/* array__459 */
static const MappingEntry scope_18_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__451), 0, &_Type_struct__451_Utils, NULL, NULL, &scope_17, 1, 0}
};
static const MappingScope scope_18 = {
  "array__459",
  scope_18_entries, 1,
};

/* struct__451 */
static const MappingEntry scope_17_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__451, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__451, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__451, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__448), offsetof(struct__451, SECTIONS_q_diff), &_Type_array__448_Utils, NULL, NULL, &scope_16, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__451, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_17 = {
  "struct__451",
  scope_17_entries, 5,
};

/* array__448 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__443), 0, &_Type_struct__443_Utils, NULL, NULL, &scope_15, 1, 0}
};
static const MappingScope scope_16 = {
  "array__448",
  scope_16_entries, 1,
};

/* struct__443 */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(struct__443, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(struct__443, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_15 = {
  "struct__443",
  scope_15_entries, 2,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID_new/ T_Build_Metadata_Packet_I_TM_lib_internal */
static const MappingEntry scope_10_entries[19] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_PACKET), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L3), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_OUTPUT, "nid_packet_meta", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_T_Build_Metadata_Packet_I_TM_lib_internal, nid_packet_meta), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_10 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID_new/ T_Build_Metadata_Packet_I_TM_lib_internal",
  scope_10_entries, 19,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), (size_t)&outputs_ctx._L4_13_IfBlock1, &_Type_Q_DIR_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_14_IfBlock1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_9 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_9_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_8_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), (size_t)&outputs_ctx._L3_1_IfBlock1, &_Type_Q_DIR_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_1_IfBlock1, &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_8 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_8_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), (size_t)&outputs_ctx._L2_11_IfBlock1, &_Type_Q_DIR_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_1_IfBlock1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_7 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_7_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_6_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_1_IfBlock1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), (size_t)&outputs_ctx._L2_1_IfBlock1, &_Type_Q_DIR_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_6_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_5_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.else_clock_1_IfBlock1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_false, &scope_6, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_7, 1, 2}
};
static const MappingScope scope_5 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_5_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_4_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._2_else_clock_1_IfBlock1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_false, &scope_5, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_8, 1, 2}
};
static const MappingScope scope_4 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_4_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_3_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.IfBlock1_clock_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_9, 1, 2}
};
static const MappingScope scope_3 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_3_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_2_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L12_1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.error_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), (size_t)&outputs_ctx.q_dir_1, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.q_dir_in_1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_2 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_2_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2 */
static const MappingEntry scope_1_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), (size_t)&outputs_ctx.Header, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 34},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (size_t)&outputs_ctx.P027V1_body_compressed, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_21, 1, 35},
  /* 2 */ { MAP_INPUT, "P027V1_from_track", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), (size_t)&inputs_ctx.P027V1_from_track, &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_20, 1, 38},
  /* 3 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(P027V1_OBU_sectionlist_int_T_TM_baseline2), (size_t)&outputs_ctx.P027V1_sections, &_Type_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_18, 1, 36},
  /* 4 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID_new 1", NULL, sizeof(outC_T_Build_Metadata_Packet_I_TM_lib_internal), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_10, 1, 1},
  /* 6 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID_new 3", NULL, sizeof(outC_T_Build_Metadata_Packet_I_TM_lib_internal), (size_t)&outputs_ctx.Context_3, NULL, NULL, NULL, &scope_10, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), (size_t)&outputs_ctx._L1, &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_20, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), (size_t)&outputs_ctx._L204, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L206, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), (size_t)&outputs_ctx._L209, &_Type_array_int_494_Utils, NULL, NULL, &scope_23, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L212, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L213, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L214, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L215, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L216, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L217, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L218, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L219, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L336, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackside_sectionlist_T_TM_baseline2), (size_t)&outputs_ctx._L367, &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_19, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L368, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), (size_t)&outputs_ctx._L369, &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_16, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L370, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 24 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L371, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 25 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), (size_t)&outputs_ctx._L373, &_Type_array_int_6_Utils, NULL, NULL, &scope_24, 1, 22},
  /* 26 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), (size_t)&outputs_ctx._L383, &_Type_array_int_500_Utils, NULL, NULL, &scope_21, 1, 23},
  /* 27 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__459), (size_t)&outputs_ctx._L385, &_Type_array__459_Utils, NULL, NULL, &scope_18, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__497), (size_t)&outputs_ctx._L386, &_Type_array__497_Utils, NULL, NULL, &scope_25, 1, 24},
  /* 29 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L387, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 30 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L391, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 31 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM_baseline2), (size_t)&outputs_ctx._L394, &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_17, 1, 28},
  /* 32 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L396, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 33 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L400, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 34 */ { MAP_LOCAL, "_L402", NULL, sizeof(Q_DIR), (size_t)&outputs_ctx._L402, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 31},
  /* 35 */ { MAP_LOCAL, "_L403", NULL, sizeof(nid_packet_meta_TM), (size_t)&outputs_ctx._L403, &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 32},
  /* 36 */ { MAP_LOCAL, "_L405", NULL, sizeof(nid_packet_meta_TM), (size_t)&outputs_ctx._L405, &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 33},
  /* 37 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.n_iter_k, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 38 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.n_iter_k_out, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37}
};
static const MappingScope scope_1 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2",
  scope_1_entries, 39,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_conversions_baseline2::C_P027V1_tracksim_compr_body", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

