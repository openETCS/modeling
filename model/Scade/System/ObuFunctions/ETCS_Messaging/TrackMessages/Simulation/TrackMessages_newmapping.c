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
MAP_DECL(scope_10, 11);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 2);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_6, 2);
MAP_DECL(scope_5, 3);
MAP_DECL(scope_4, 3);
MAP_DECL(scope_3, 3);
MAP_DECL(scope_2, 6);
MAP_DECL(scope_1, 38);
MAP_DECL(scope_0, 1);

/* array__467 */
static const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__421), 0, &_Type_struct__421_Utils, NULL, NULL, &scope_17, 1, 0}
};
static const MappingScope scope_25 = {
  "array__467",
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

/* struct__453 */
static const MappingEntry scope_22_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__453, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__453, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__453, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__453, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__453, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_22 = {
  "struct__453",
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

/* struct__435 */
static const MappingEntry scope_20_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__435, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__435, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__435, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(struct__435, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(struct__435, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__435, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__435, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__435, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(array__432), offsetof(struct__435, SECTIONS_SSP), &_Type_array__432_Utils, NULL, NULL, &scope_19, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__418), offsetof(struct__435, SECTIONS_q_diff), &_Type_array__418_Utils, NULL, NULL, &scope_16, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__435, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__435, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "struct__435",
  scope_20_entries, 12,
};

/* array__432 */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__421), 0, &_Type_struct__421_Utils, NULL, NULL, &scope_17, 1, 0}
};
static const MappingScope scope_19 = {
  "array__432",
  scope_19_entries, 1,
};

/* array__429 */
static const MappingEntry scope_18_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__421), 0, &_Type_struct__421_Utils, NULL, NULL, &scope_17, 1, 0}
};
static const MappingScope scope_18 = {
  "array__429",
  scope_18_entries, 1,
};

/* struct__421 */
static const MappingEntry scope_17_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__421, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__421, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__421, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__418), offsetof(struct__421, SECTIONS_q_diff), &_Type_array__418_Utils, NULL, NULL, &scope_16, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__421, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_17 = {
  "struct__421",
  scope_17_entries, 5,
};

/* array__418 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__413), 0, &_Type_struct__413_Utils, NULL, NULL, &scope_15, 1, 0}
};
static const MappingScope scope_16 = {
  "array__418",
  scope_16_entries, 1,
};

/* struct__413 */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(struct__413, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(struct__413, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_15 = {
  "struct__413",
  scope_15_entries, 2,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_10_entries[11] = {
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
static const MappingScope scope_10 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_10_entries, 11,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L4_13_IfBlock1, &_Type_Q_DIR_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5_14_IfBlock1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_9 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_9_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_8_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L3_1_IfBlock1, &_Type_Q_DIR_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5_1_IfBlock1, &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_8 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_8_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L2_11_IfBlock1, &_Type_Q_DIR_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_1_IfBlock1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_7 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_7_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_6_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_1_IfBlock1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L2_1_IfBlock1, &_Type_Q_DIR_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_6_entries, 2,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_5_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.else_clock_1_IfBlock1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_false, &scope_6, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_7, 1, 2}
};
static const MappingScope scope_5 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_5_entries, 3,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_4_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (int)&outputs_ctx._2_else_clock_1_IfBlock1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_false, &scope_5, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_8, 1, 2}
};
static const MappingScope scope_4 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_4_entries, 3,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_3_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.IfBlock1_clock_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_9, 1, 2}
};
static const MappingScope scope_3 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_3_entries, 3,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_2_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), (int)&outputs_ctx.error_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), (int)&outputs_ctx.q_dir_1, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), (int)&outputs_ctx.q_dir_in_1, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_2 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_2_entries, 6,
};

/* TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions */
static const MappingEntry scope_1_entries[38] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), (int)&outputs_ctx.Header, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 33},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), (int)&outputs_ctx.P027V1_body_compressed, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_21, 1, 34},
  /* 2 */ { MAP_INPUT, "P027V1_from_track", NULL, sizeof(P027V1_trackside_int_T_TM), (int)&inputs_ctx.P027V1_from_track, &_Type_P027V1_trackside_int_T_TM_Utils, NULL, NULL, &scope_20, 1, 37},
  /* 3 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(P027V1_OBU_sectionlist_int_T_TM), (int)&outputs_ctx.P027V1_sections, &_Type_P027V1_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_18, 1, 35},
  /* 4 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_10, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM), (int)&outputs_ctx._L1, &_Type_P027V1_trackside_int_T_TM_Utils, NULL, NULL, &scope_20, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), (int)&outputs_ctx._L204, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), (int)&outputs_ctx._L206, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), (int)&outputs_ctx._L209, &_Type_array_int_494_Utils, NULL, NULL, &scope_23, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), (int)&outputs_ctx._L212, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), (int)&outputs_ctx._L213, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L214, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), (int)&outputs_ctx._L215, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), (int)&outputs_ctx._L216, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), (int)&outputs_ctx._L217, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), (int)&outputs_ctx._L218, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), (int)&outputs_ctx._L219, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), (int)&outputs_ctx._L336, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), (int)&outputs_ctx._L356, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 16},
  /* 20 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackide_sectionlist_T_TM), (int)&outputs_ctx._L367, &_Type_P027V1_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_19, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), (int)&outputs_ctx._L368, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackide_qdifflist_T_TM), (int)&outputs_ctx._L369, &_Type_P027V1_trackide_qdifflist_T_TM_Utils, NULL, NULL, &scope_16, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), (int)&outputs_ctx._L370, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 24 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), (int)&outputs_ctx._L371, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 25 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), (int)&outputs_ctx._L373, &_Type_array_int_6_Utils, NULL, NULL, &scope_24, 1, 22},
  /* 26 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), (int)&outputs_ctx._L383, &_Type_array_int_500_Utils, NULL, NULL, &scope_21, 1, 23},
  /* 27 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__429), (int)&outputs_ctx._L385, &_Type_array__429_Utils, NULL, NULL, &scope_18, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__467), (int)&outputs_ctx._L386, &_Type_array__467_Utils, NULL, NULL, &scope_25, 1, 24},
  /* 29 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), (int)&outputs_ctx._L387, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 30 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), (int)&outputs_ctx._L391, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 31 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM), (int)&outputs_ctx._L394, &_Type_P027V1_section_int_T_TM_Utils, NULL, NULL, &scope_17, 1, 28},
  /* 32 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), (int)&outputs_ctx._L396, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 33 */ { MAP_LOCAL, "_L397", NULL, sizeof(nid_packet_meta_TM), (int)&outputs_ctx._L397, &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 30},
  /* 34 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), (int)&outputs_ctx._L400, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 35 */ { MAP_LOCAL, "_L401", NULL, sizeof(kcg_int), (int)&outputs_ctx._L401, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 36 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), (int)&outputs_ctx.n_iter_k, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 37 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), (int)&outputs_ctx.n_iter_k_out, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36}
};
static const MappingScope scope_1 = {
  "TM_conversions::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions",
  scope_1_entries, 38,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_conversions::C_P027V1_tracksim_compr_body", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

