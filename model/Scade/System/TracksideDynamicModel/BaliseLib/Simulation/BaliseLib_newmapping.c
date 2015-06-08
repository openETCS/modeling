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

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_15, 6);
MAP_DECL(scope_14, 2);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 5);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 10);
MAP_DECL(scope_5, 5);
MAP_DECL(scope_4, 6);
MAP_DECL(scope_3, 15);
MAP_DECL(scope_2, 5);
MAP_DECL(scope_1, 31);
MAP_DECL(scope_0, 1);

/* struct__390 */
static const MappingEntry scope_15_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(struct__390, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(struct__390, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(struct__390, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(struct__358), offsetof(struct__390, header), &_Type_struct__358_Utils, NULL, NULL, &scope_10, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__385), offsetof(struct__390, packets), &_Type_struct__385_Utils, NULL, NULL, &scope_14, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(struct__390, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_15 = {
  "struct__390",
  scope_15_entries, 6,
};

/* struct__385 */
static const MappingEntry scope_14_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__385, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_11, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__382), offsetof(struct__385, PacketHeaders), &_Type_array__382_Utils, NULL, NULL, &scope_13, 1, 0}
};
static const MappingScope scope_14 = {
  "struct__385",
  scope_14_entries, 2,
};

/* array__382 */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__374), 0, &_Type_struct__374_Utils, NULL, NULL, &scope_12, 1, 0}
};
static const MappingScope scope_13 = {
  "array__382",
  scope_13_entries, 1,
};

/* struct__374 */
static const MappingEntry scope_12_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__374, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__374, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__374, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__374, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__374, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_12 = {
  "struct__374",
  scope_12_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "array_int_500",
  scope_11_entries, 1,
};

/* struct__358 */
static const MappingEntry scope_10_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(struct__358, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__358, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__358, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(struct__358, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(struct__358, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__358, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__358, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(struct__358, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(struct__358, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(struct__358, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "struct__358",
  scope_10_entries, 10,
};

/* TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions */
static const MappingEntry scope_5_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Loc_real", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, Loc_real), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_5 = {
  "TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions",
  scope_5_entries, 5,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/ */
static const MappingEntry scope_4_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_InfraLib, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_4 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/",
  scope_4_entries, 6,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib */
static const MappingEntry scope_3_entries[15] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_InfraLib, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_OUTPUT, "distance_BB", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, distance_BB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 0}
};
static const MappingScope scope_3 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib",
  scope_3_entries, 15,
};

/* InfraLib::Balise_Localisation/ Balise_Localisation_InfraLibmath::Min 1/ */
static const MappingEntry scope_2_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), (int)&outputs_ctx.Mi_Output_1, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), (int)&outputs_ctx._L21_1, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), (int)&outputs_ctx._L22_1, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), (int)&outputs_ctx._L24_1, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L25_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_2 = {
  "InfraLib::Balise_Localisation/ Balise_Localisation_InfraLibmath::Min 1/",
  scope_2_entries, 5,
};

/* InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib */
static const MappingEntry scope_1_entries[31] = {
  /* 0 */ { MAP_INPUT, "B_data_in", NULL, sizeof(B_data_internal_T_InfraLib), (int)&inputs_ctx.B_data_in, &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 28},
  /* 1 */ { MAP_INPUT, "Header", NULL, sizeof(BaliseTelegramHeader_int_T_TM), (int)&inputs_ctx.Header, &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_10, 1, 29},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Interdistance 1", NULL, sizeof(outC_Balise_Interdistance_InfraLib), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_3, 1, 0},
  /* 3 */ { MAP_OUTPUT, "PIG_0_out", NULL, sizeof(kcg_int), (int)&outputs_ctx.PIG_0_out, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 4 */ { MAP_INPUT, "PIG_nom", NULL, sizeof(kcg_int), (int)&inputs_ctx.PIG_nom, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::TOOLS_convert_engineering_location 1", NULL, sizeof(outC_TOOLS_convert_engineering_TM_conversions), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_5, 1, 1},
  /* 6 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), (int)&outputs_ctx.TrainPass, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (int)&outputs_ctx._L15, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(BaliseTelegramHeader_int_T_TM), (int)&outputs_ctx._L16, &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_10, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), (int)&outputs_ctx._L47, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), (int)&outputs_ctx._L48, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L50, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), (int)&outputs_ctx._L51, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), (int)&outputs_ctx._L52, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L65", NULL, sizeof(B_data_internal_T_InfraLib), (int)&outputs_ctx._L65, &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), (int)&outputs_ctx._L66, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), (int)&outputs_ctx._L68, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L71", NULL, sizeof(B_data_internal_T_InfraLib), (int)&outputs_ctx._L71, &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_15, 1, 13},
  /* 18 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_real), (int)&outputs_ctx._L73, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 19 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), (int)&outputs_ctx._L75, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 20 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), (int)&outputs_ctx._L76, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_real), (int)&outputs_ctx._L77, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 22 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_real), (int)&outputs_ctx._L82, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_real), (int)&outputs_ctx._L90, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_real), (int)&outputs_ctx._L91, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 25 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_real), (int)&outputs_ctx._L92, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 26 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_real), (int)&outputs_ctx._L93, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 27 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L94, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 28 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L95, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 29 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L96, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 30 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 2}
};
static const MappingScope scope_1 = {
  "InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib",
  scope_1_entries, 31,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "InfraLib::Balise_Localisation", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

