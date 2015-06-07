/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_65, 6);
MAP_DECL(scope_64, 5);
MAP_DECL(scope_63, 2);
MAP_DECL(scope_62, 2);
MAP_DECL(scope_61, 10);
MAP_DECL(scope_60, 2);
MAP_DECL(scope_59, 1);
MAP_DECL(scope_58, 5);
MAP_DECL(scope_57, 1);
MAP_DECL(scope_56, 3);
MAP_DECL(scope_51, 5);
MAP_DECL(scope_50, 6);
MAP_DECL(scope_49, 15);
MAP_DECL(scope_48, 2);
MAP_DECL(scope_47, 2);
MAP_DECL(scope_46, 2);
MAP_DECL(scope_45, 2);
MAP_DECL(scope_44, 2);
MAP_DECL(scope_43, 2);
MAP_DECL(scope_42, 2);
MAP_DECL(scope_41, 2);
MAP_DECL(scope_40, 2);
MAP_DECL(scope_39, 2);
MAP_DECL(scope_38, 2);
MAP_DECL(scope_37, 2);
MAP_DECL(scope_36, 2);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 2);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 2);
MAP_DECL(scope_31, 2);
MAP_DECL(scope_30, 2);
MAP_DECL(scope_29, 2);
MAP_DECL(scope_28, 52);
MAP_DECL(scope_27, 28);
MAP_DECL(scope_26, 13);
MAP_DECL(scope_25, 13);
MAP_DECL(scope_24, 13);
MAP_DECL(scope_23, 10);
MAP_DECL(scope_22, 9);
MAP_DECL(scope_21, 13);
MAP_DECL(scope_20, 4);
MAP_DECL(scope_19, 4);
MAP_DECL(scope_18, 4);
MAP_DECL(scope_17, 4);
MAP_DECL(scope_16, 4);
MAP_DECL(scope_15, 4);
MAP_DECL(scope_14, 37);
MAP_DECL(scope_13, 4);
MAP_DECL(scope_12, 4);
MAP_DECL(scope_11, 4);
MAP_DECL(scope_10, 4);
MAP_DECL(scope_9, 4);
MAP_DECL(scope_8, 4);
MAP_DECL(scope_7, 37);
MAP_DECL(scope_6, 18);
MAP_DECL(scope_5, 7);
MAP_DECL(scope_4, 7);
MAP_DECL(scope_3, 6);
MAP_DECL(scope_2, 25);
MAP_DECL(scope_1, 11);
MAP_DECL(scope_0, 1);

/* struct__1397 */
static const MappingEntry scope_65_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(struct__1397, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(struct__1397, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(struct__1397, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(struct__1366), offsetof(struct__1397, header), &_Type_struct__1366_Utils, NULL, NULL, &scope_61, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__1361), offsetof(struct__1397, packets), &_Type_struct__1361_Utils, NULL, NULL, &scope_60, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(struct__1397, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_65 = {
  "struct__1397",
  scope_65_entries, 6,
};

/* struct__1389 */
static const MappingEntry scope_64_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__1389, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__1389, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(OrBG_TM), offsetof(struct__1389, Or_BG), &_Type_OrBG_TM_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(OrLine_TM), offsetof(struct__1389, Or_Line), &_Type_OrLine_TM_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(struct__1389, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_64 = {
  "struct__1389",
  scope_64_entries, 5,
};

/* struct__1384 */
static const MappingEntry scope_63_entries[2] = {
  /* 0 */ { MAP_FIELD, ".BG_Message", NULL, sizeof(struct__1379), offsetof(struct__1384, BG_Message), &_Type_struct__1379_Utils, NULL, NULL, &scope_62, 1, 1},
  /* 1 */ { MAP_FIELD, ".TrainPosRaw", NULL, sizeof(struct__1341), offsetof(struct__1384, TrainPosRaw), &_Type_struct__1341_Utils, NULL, NULL, &scope_56, 1, 0}
};
static const MappingScope scope_63 = {
  "struct__1384",
  scope_63_entries, 2,
};

/* struct__1379 */
static const MappingEntry scope_62_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__1366), offsetof(struct__1379, Header), &_Type_struct__1366_Utils, NULL, NULL, &scope_61, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__1361), offsetof(struct__1379, Messages), &_Type_struct__1361_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_62 = {
  "struct__1379",
  scope_62_entries, 2,
};

/* struct__1366 */
static const MappingEntry scope_61_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(struct__1366, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__1366, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__1366, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(struct__1366, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(struct__1366, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__1366, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__1366, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(struct__1366, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(struct__1366, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(struct__1366, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_61 = {
  "struct__1366",
  scope_61_entries, 10,
};

/* struct__1361 */
static const MappingEntry scope_60_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__1361, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_57, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__1358), offsetof(struct__1361, PacketHeaders), &_Type_array__1358_Utils, NULL, NULL, &scope_59, 1, 0}
};
static const MappingScope scope_60 = {
  "struct__1361",
  scope_60_entries, 2,
};

/* array__1358 */
static const MappingEntry scope_59_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__1350), 0, &_Type_struct__1350_Utils, NULL, NULL, &scope_58, 1, 0}
};
static const MappingScope scope_59 = {
  "array__1358",
  scope_59_entries, 1,
};

/* struct__1350 */
static const MappingEntry scope_58_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__1350, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__1350, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__1350, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__1350, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__1350, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_58 = {
  "struct__1350",
  scope_58_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_57_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_57 = {
  "array_int_500",
  scope_57_entries, 1,
};

/* struct__1341 */
static const MappingEntry scope_56_entries[3] = {
  /* 0 */ { MAP_FIELD, ".OffsetTotal", NULL, sizeof(kcg_int), offsetof(struct__1341, OffsetTotal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".TrainPosCalibrated", NULL, sizeof(kcg_real), offsetof(struct__1341, TrainPosCalibrated), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".TrainPos_in", NULL, sizeof(kcg_real), offsetof(struct__1341, TrainPos_in), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_56 = {
  "struct__1341",
  scope_56_entries, 3,
};

/* TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions */
static const MappingEntry scope_51_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Loc_real", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, Loc_real), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_51 = {
  "TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions",
  scope_51_entries, 5,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/ */
static const MappingEntry scope_50_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_InfraLib, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_50 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/",
  scope_50_entries, 6,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib */
static const MappingEntry scope_49_entries[15] = {
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
  /* 14 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 0}
};
static const MappingScope scope_49 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib",
  scope_49_entries, 15,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 11/ */
static const MappingEntry scope_48_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_48 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 11/",
  scope_48_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 12/ */
static const MappingEntry scope_47_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_47 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 12/",
  scope_47_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 13/ */
static const MappingEntry scope_46_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_46 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 13/",
  scope_46_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 14/ */
static const MappingEntry scope_45_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_45 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 14/",
  scope_45_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 15/ */
static const MappingEntry scope_44_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_44 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 15/",
  scope_44_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 16/ */
static const MappingEntry scope_43_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_43 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 16/",
  scope_43_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 17/ */
static const MappingEntry scope_42_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_42 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 17/",
  scope_42_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 18/ */
static const MappingEntry scope_41_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_41 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 18/",
  scope_41_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 19/ */
static const MappingEntry scope_40_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_40 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 19/",
  scope_40_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 20/ */
static const MappingEntry scope_39_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_39 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 20/",
  scope_39_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 0/ */
static const MappingEntry scope_38_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_0), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_0), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_38 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 0/",
  scope_38_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 9/ */
static const MappingEntry scope_37_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_37 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 9/",
  scope_37_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 8/ */
static const MappingEntry scope_36_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_36 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 8/",
  scope_36_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 7/ */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_35 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 7/",
  scope_35_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 6/ */
static const MappingEntry scope_34_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_34 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 6/",
  scope_34_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 5/ */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_33 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 5/",
  scope_33_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 4/ */
static const MappingEntry scope_32_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_32 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 4/",
  scope_32_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 3/ */
static const MappingEntry scope_31_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_31 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 3/",
  scope_31_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 2/ */
static const MappingEntry scope_30_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_30 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 2/",
  scope_30_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 1/ */
static const MappingEntry scope_29_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 1}
};
static const MappingScope scope_29 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLibInfraLib::No_Packet 1/",
  scope_29_entries, 2,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLib */
static const MappingEntry scope_28_entries[52] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, Balise_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 51},
  /* 4 */ { MAP_EXPANDED, "InfraLib::No_Packet 0", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 9},
  /* 5 */ { MAP_EXPANDED, "InfraLib::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 0},
  /* 6 */ { MAP_EXPANDED, "InfraLib::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 19},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 18},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 17},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_45, 1, 16},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 15},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_43, 1, 14},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 13},
  /* 13 */ { MAP_EXPANDED, "InfraLib::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 12},
  /* 14 */ { MAP_EXPANDED, "InfraLib::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 11},
  /* 15 */ { MAP_EXPANDED, "InfraLib::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 1},
  /* 16 */ { MAP_EXPANDED, "InfraLib::No_Packet 20", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 10},
  /* 17 */ { MAP_EXPANDED, "InfraLib::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 2},
  /* 18 */ { MAP_EXPANDED, "InfraLib::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 3},
  /* 19 */ { MAP_EXPANDED, "InfraLib::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 4},
  /* 20 */ { MAP_EXPANDED, "InfraLib::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 5},
  /* 21 */ { MAP_EXPANDED, "InfraLib::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 6},
  /* 22 */ { MAP_EXPANDED, "InfraLib::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 7},
  /* 23 */ { MAP_EXPANDED, "InfraLib::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_37, 1, 8},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L26), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_No_Balise_Packets_InfraLib, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L29), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L31), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 25},
  /* 47 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 26},
  /* 48 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 27},
  /* 49 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 28},
  /* 50 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 29},
  /* 51 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Balise_Packets_InfraLib, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 30}
};
static const MappingScope scope_28 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLib",
  scope_28_entries, 52,
};

/* InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib */
static const MappingEntry scope_27_entries[28] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_INSTANCE, "InfraLib::Balise_Interdistance 1", NULL, sizeof(outC_Balise_Interdistance_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, Context_1), NULL, NULL, NULL, &scope_49, 1, 2},
  /* 2 */ { MAP_OUTPUT, "PIG_0_out", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, PIG_0_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::TOOLS_convert_engineering_location 1", NULL, sizeof(outC_TOOLS_convert_engineering_TM_conversions), offsetof(outC_Balise_Localisation_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_51, 1, 3},
  /* 4 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, TrainPass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Localisation_InfraLib, _L16), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L65", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, _L65), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L70), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L71", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, _L71), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 14},
  /* 19 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L73@mem", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L73), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 0},
  /* 21 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L75), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L76), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L77), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L78), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 25 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L79), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L80", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L80), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 27 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L81), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25}
};
static const MappingScope scope_27 = {
  "InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib",
  scope_27_entries, 28,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_353_0/ Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_26_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, Context_1), NULL, NULL, NULL, &scope_27, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _1_Context_1), NULL, &scope_26_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 4}
};
static const MappingScope scope_26 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_353_0/ Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_26_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_353_1/ Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_25_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, Context_1), NULL, NULL, NULL, &scope_27, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _1_Context_1), NULL, &scope_25_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 4}
};
static const MappingScope scope_25 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_353_1/ Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_25_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_352_0/ Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_24_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, Context_1), NULL, NULL, NULL, &scope_27, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _1_Context_1), NULL, &scope_24_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 4}
};
static const MappingScope scope_24 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_352_0/ Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_24_entries, 13,
};

/* InfraLib::Balise_Group_Close/ Balise_Group_Close_InfraLib */
static const MappingEntry scope_23_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Error_out", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, Error_out), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L2), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L20), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L21", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Close_InfraLib, _L21), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L22), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Close_InfraLib, _L23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L24), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_23 = {
  "InfraLib::Balise_Group_Close/ Balise_Group_Close_InfraLib",
  scope_23_entries, 10,
};

/* InfraLib::Balise_Group_Init/ Balise_Group_Init_InfraLib */
static const MappingEntry scope_22_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "BG_internal_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Init_InfraLib, BG_internal_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_InfraLib, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_Init_InfraLib, _L2), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_64, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Init_InfraLib, _L26), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Init_InfraLib, _L27), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Init_InfraLib, _L28), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_60, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_InfraLib, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_Init_InfraLib, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Init_InfraLib, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_22 = {
  "InfraLib::Balise_Group_Init/ Balise_Group_Init_InfraLib",
  scope_22_entries, 9,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_352_1/ Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_21_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, Context_1), NULL, NULL, NULL, &scope_27, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _1_Context_1), NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 4}
};
static const MappingScope scope_21 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_352_1/ Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_21_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 6/ */
static const MappingEntry scope_20_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_20 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 6/",
  scope_20_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 5/ */
static const MappingEntry scope_19_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_19 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 5/",
  scope_19_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 4/ */
static const MappingEntry scope_18_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_18 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 4/",
  scope_18_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 3/ */
static const MappingEntry scope_17_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_17 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 3/",
  scope_17_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 2/ */
static const MappingEntry scope_16_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_16 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 2/",
  scope_16_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 1/ */
static const MappingEntry scope_15_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_15 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 1/",
  scope_15_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_14_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_353_0 1", NULL, sizeof(outC_Balise_353_0_AmsterdamUtrechtL1_Sheet05_Amstel), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _1_Context_1), NULL, NULL, NULL, &scope_26, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_353_1 1", NULL, sizeof(outC_Balise_353_1_AmsterdamUtrechtL1_Sheet05_Amstel), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _2_Context_1), NULL, NULL, NULL, &scope_25, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _3_Context_1), NULL, NULL, NULL, &scope_23, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, Context_1), NULL, NULL, NULL, &scope_22, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_64, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 19}
};
static const MappingScope scope_14 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353/ Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_14_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 6/ */
static const MappingEntry scope_13_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_13 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 6/",
  scope_13_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 5/ */
static const MappingEntry scope_12_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_12 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 5/",
  scope_12_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 4/ */
static const MappingEntry scope_11_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_11 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 4/",
  scope_11_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 3/ */
static const MappingEntry scope_10_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_10 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 3/",
  scope_10_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 2/ */
static const MappingEntry scope_9_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_9 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 2/",
  scope_9_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 1/ */
static const MappingEntry scope_8_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_61, 1, 3}
};
static const MappingScope scope_8 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_AmstelInfraLib::No_Balise 1/",
  scope_8_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_7_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_352_0 1", NULL, sizeof(outC_Balise_352_0_AmsterdamUtrechtL1_Sheet05_Amstel), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _1_Context_1), NULL, NULL, NULL, &scope_24, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_352_1 1", NULL, sizeof(outC_Balise_352_1_AmsterdamUtrechtL1_Sheet05_Amstel), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _2_Context_1), NULL, NULL, NULL, &scope_21, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _3_Context_1), NULL, NULL, NULL, &scope_23, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, Context_1), NULL, NULL, NULL, &scope_22, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_64, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_65, 1, 19}
};
static const MappingScope scope_7 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352/ Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_7_entries, 37,
};

/* InfraLib::TrackDiscontinuity_CalcTrainPos/ TrackDiscontinuity_CalcTr_InfraLib */
static const MappingEntry scope_6_entries[18] = {
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
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L27), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(TrainPosRaw_T_InfraLib), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L29), &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_56, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L31), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L32), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_CalcTr_InfraLib, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15}
};
static const MappingScope scope_6 = {
  "InfraLib::TrackDiscontinuity_CalcTrainPos/ TrackDiscontinuity_CalcTr_InfraLib",
  scope_6_entries, 18,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617/ Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_5_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_353 2", NULL, sizeof(outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel), offsetof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, Context_2), NULL, NULL, NULL, &scope_14, 1, 0},
  /* 1 */ { MAP_OUTPUT, "SectionData_out", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, SectionData_out), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L1), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L3), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L4), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L6), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 5}
};
static const MappingScope scope_5 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617/ Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_5_entries, 7,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0001_Amstel_UB_Signal_611_to_613/ Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_4_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balise_Group_352 1", NULL, sizeof(outC_Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel), offsetof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, Context_1), NULL, NULL, NULL, &scope_7, 1, 0},
  /* 1 */ { MAP_OUTPUT, "SectionData_out", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, SectionData_out), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L1), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_62, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L15), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel, _L3), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 2}
};
static const MappingScope scope_4 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Balises0001_Amstel_UB_Signal_611_to_613/ Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_4_entries, 7,
};

/* InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLibmath::Abs 3/ */
static const MappingEntry scope_3_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, A_Output_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_TrackDiscontinuity_InfraLib, _L1_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L3_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L5_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L8_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_3 = {
  "InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLibmath::Abs 3/",
  scope_3_entries, 6,
};

/* InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLib */
static const MappingEntry scope_2_entries[25] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_TrackDiscontinuity_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 23},
  /* 1 */ { MAP_INSTANCE, "InfraLib::TrackDiscontinuity_CalcTrainPos 2", NULL, sizeof(outC_TrackDiscontinuity_CalcTr_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, Context_2), NULL, &scope_2_entries[0], isActive_kcg_bool_kcg_true, &scope_6, 1, 1},
  /* 2 */ { MAP_LOCAL, "NewOffset", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, NewOffset), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "SectionData_out", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, SectionData_out), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 24},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, _L16), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L49), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L57), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_InfraLib, _L59), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_InfraLib, _L60), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), offsetof(outC_TrackDiscontinuity_InfraLib, _L61), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_bool), offsetof(outC_TrackDiscontinuity_InfraLib, _L62), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), offsetof(outC_TrackDiscontinuity_InfraLib, _L63), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_InfraLib, _L79), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L80", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, _L80), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L81", NULL, sizeof(TrainPosRaw_T_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, _L81), &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_56, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_real), offsetof(outC_TrackDiscontinuity_InfraLib, _L82), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L83), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L88", NULL, sizeof(TrackSectionData_T_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, _L88), &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L89", NULL, sizeof(TrainPosRaw_T_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, _L89), &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_56, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L90", NULL, sizeof(TrainPosRaw_T_InfraLib), offsetof(outC_TrackDiscontinuity_InfraLib, _L90), &_Type_TrainPosRaw_T_InfraLib_Utils, NULL, NULL, &scope_56, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int), offsetof(outC_TrackDiscontinuity_InfraLib, _L91), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_EXPANDED, "math::Abs 3", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 0}
};
static const MappingScope scope_2 = {
  "InfraLib::TrackDiscontinuity/ TrackDiscontinuity_InfraLib",
  scope_2_entries, 25,
};

/* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel/ Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel */
static const MappingEntry scope_1_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balises0001_Amstel_UB_Signal_611_to_613 1", NULL, sizeof(outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_4, 1, 1},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617 1", NULL, sizeof(outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel), (int)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_5, 1, 2},
  /* 2 */ { MAP_INSTANCE, "InfraLib::TrackDiscontinuity 1", NULL, sizeof(outC_TrackDiscontinuity_InfraLib), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::TrackDiscontinuity 2", NULL, sizeof(outC_TrackDiscontinuity_InfraLib), (int)&outputs_ctx.Context_2, NULL, NULL, NULL, &scope_2, 1, 3},
  /* 4 */ { MAP_INPUT, "SectionData_in", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&inputs_ctx.SectionData_in, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 10},
  /* 5 */ { MAP_OUTPUT, "SectionData_out", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx.SectionData_out, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L1, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L4, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L5, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L6, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(TrackSectionData_T_InfraLib), (int)&outputs_ctx._L7, &_Type_TrackSectionData_T_InfraLib_Utils, NULL, NULL, &scope_63, 1, 8}
};
static const MappingScope scope_1 = {
  "AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel/ Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel",
  scope_1_entries, 11,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

