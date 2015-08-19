/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_15;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_15 = { "array", 15, 15, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_25, 3);
MAP_DECL(scope_24, 9);
MAP_DECL(scope_23, 7);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 16);
MAP_DECL(scope_20, 2);
MAP_DECL(scope_19, 17);
MAP_DECL(scope_18, 3);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 2);
MAP_DECL(scope_15, 1);
MAP_DECL(scope_14, 2);
MAP_DECL(scope_13, 2);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 13);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 7);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_1, 6);
MAP_DECL(scope_0, 1);

/* struct__577 */
static const MappingEntry scope_25_entries[3] = {
  /* 0 */ { MAP_FIELD, ".header", NULL, sizeof(struct__565), offsetof(struct__577, header), &_Type_struct__565_Utils, NULL, NULL, &scope_24, 1, 1},
  /* 1 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__555), offsetof(struct__577, packets), &_Type_struct__555_Utils, NULL, NULL, &scope_23, 1, 2},
  /* 2 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__577, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_25 = {
  "struct__577",
  scope_25_entries, 3,
};

/* struct__565 */
static const MappingEntry scope_24_entries[9] = {
  /* 0 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(struct__565, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__565, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__565, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__565, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".xNID_EM", NULL, sizeof(kcg_int), offsetof(struct__565, xNID_EM), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".xNID_TEXTMESSAGE", NULL, sizeof(kcg_int), offsetof(struct__565, xNID_TEXTMESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".xQ_EMERGENCYSTOP", NULL, sizeof(Q_EMERGENCYSTOP), offsetof(struct__565, xQ_EMERGENCYSTOP), &_Type_Q_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".xQ_MARQSTREASON", NULL, sizeof(Q_MARQSTREASON), offsetof(struct__565, xQ_MARQSTREASON), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".xT_TRAIN", NULL, sizeof(kcg_real), offsetof(struct__565, xT_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_24 = {
  "struct__565",
  scope_24_entries, 9,
};

/* struct__555 */
static const MappingEntry scope_23_entries[7] = {
  /* 0 */ { MAP_FIELD, ".p0", NULL, sizeof(struct__550), offsetof(struct__555, p0), &_Type_struct__550_Utils, NULL, NULL, &scope_22, 1, 0},
  /* 1 */ { MAP_FIELD, ".p1", NULL, sizeof(struct__526), offsetof(struct__555, p1), &_Type_struct__526_Utils, NULL, NULL, &scope_20, 1, 1},
  /* 2 */ { MAP_FIELD, ".p11", NULL, sizeof(struct__458), offsetof(struct__555, p11), &_Type_struct__458_Utils, NULL, NULL, &scope_11, 1, 6},
  /* 3 */ { MAP_FIELD, ".p3", NULL, sizeof(struct__500), offsetof(struct__555, p3), &_Type_struct__500_Utils, NULL, NULL, &scope_18, 1, 2},
  /* 4 */ { MAP_FIELD, ".p4", NULL, sizeof(struct__484), offsetof(struct__555, p4), &_Type_struct__484_Utils, NULL, NULL, &scope_14, 1, 3},
  /* 5 */ { MAP_FIELD, ".p5", NULL, sizeof(struct__479), offsetof(struct__555, p5), &_Type_struct__479_Utils, NULL, NULL, &scope_13, 1, 4},
  /* 6 */ { MAP_FIELD, ".p9", NULL, sizeof(struct__474), offsetof(struct__555, p9), &_Type_struct__474_Utils, NULL, NULL, &scope_12, 1, 5}
};
static const MappingScope scope_23 = {
  "struct__555",
  scope_23_entries, 7,
};

/* struct__550 */
static const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_FIELD, ".packet0", NULL, sizeof(struct__531), offsetof(struct__550, packet0), &_Type_struct__531_Utils, NULL, NULL, &scope_21, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__550, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "struct__550",
  scope_22_entries, 2,
};

/* struct__531 */
static const MappingEntry scope_21_entries[16] = {
  /* 0 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int), offsetof(struct__531, D_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int), offsetof(struct__531, L_DOUBTOVER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int), offsetof(struct__531, L_DOUBTUNDER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__531, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int), offsetof(struct__531, L_TRAININT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__531, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__531, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__531, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int), offsetof(struct__531, V_TRAIN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(struct__531, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__531, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(struct__531, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(struct__531, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__531, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(struct__531, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(struct__531, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_21 = {
  "struct__531",
  scope_21_entries, 16,
};

/* struct__526 */
static const MappingEntry scope_20_entries[2] = {
  /* 0 */ { MAP_FIELD, ".packet1", NULL, sizeof(struct__506), offsetof(struct__526, packet1), &_Type_struct__506_Utils, NULL, NULL, &scope_19, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__526, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "struct__526",
  scope_20_entries, 2,
};

/* struct__506 */
static const MappingEntry scope_19_entries[17] = {
  /* 0 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int), offsetof(struct__506, D_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int), offsetof(struct__506, L_DOUBTOVER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int), offsetof(struct__506, L_DOUBTUNDER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__506, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int), offsetof(struct__506, L_TRAININT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__506, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__506, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__506, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".NID_PRVLRBG", NULL, sizeof(kcg_int), offsetof(struct__506, NID_PRVLRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int), offsetof(struct__506, V_TRAIN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(struct__506, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__506, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(struct__506, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(struct__506, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 10},
  /* 14 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__506, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(struct__506, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(struct__506, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_19 = {
  "struct__506",
  scope_19_entries, 17,
};

/* struct__500 */
static const MappingEntry scope_18_entries[3] = {
  /* 0 */ { MAP_FIELD, ".aNID_RADIO", NULL, sizeof(array__497), offsetof(struct__500, aNID_RADIO), &_Type_array__497_Utils, NULL, NULL, &scope_17, 1, 2},
  /* 1 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int), offsetof(struct__500, number), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__500, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_18 = {
  "struct__500",
  scope_18_entries, 3,
};

/* array__497 */
static const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__492), 0, &_Type_struct__492_Utils, NULL, NULL, &scope_16, 1, 0}
};
static const MappingScope scope_17 = {
  "array__497",
  scope_17_entries, 1,
};

/* struct__492 */
static const MappingEntry scope_16_entries[2] = {
  /* 0 */ { MAP_FIELD, ".telephoneNumber", NULL, sizeof(array_int_15), offsetof(struct__492, telephoneNumber), &_Type_array_int_15_Utils, NULL, NULL, &scope_15, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__492, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "struct__492",
  scope_16_entries, 2,
};

/* array_int_15 */
static const MappingEntry scope_15_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_15, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_15 = {
  "array_int_15",
  scope_15_entries, 1,
};

/* struct__484 */
static const MappingEntry scope_14_entries[2] = {
  /* 0 */ { MAP_FIELD, ".M_ERROR", NULL, sizeof(M_ERROR), offsetof(struct__484, M_ERROR), &_Type_M_ERROR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__484, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_14 = {
  "struct__484",
  scope_14_entries, 2,
};

/* struct__479 */
static const MappingEntry scope_13_entries[2] = {
  /* 0 */ { MAP_FIELD, ".TrainRunningNumber", NULL, sizeof(kcg_int), offsetof(struct__479, TrainRunningNumber), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__479, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "struct__479",
  scope_13_entries, 2,
};

/* struct__474 */
static const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_FIELD, ".transitionInformation", NULL, sizeof(kcg_int), offsetof(struct__474, transitionInformation), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__474, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_12 = {
  "struct__474",
  scope_12_entries, 2,
};

/* struct__458 */
static const MappingEntry scope_11_entries[13] = {
  /* 0 */ { MAP_FIELD, ".NC_CDTRAIN", NULL, sizeof(NC_CDTRAIN), offsetof(struct__458, NC_CDTRAIN), &_Type_NC_CDTRAIN_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NC_TRAIN", NULL, sizeof(NC_TRAIN), offsetof(struct__458, NC_TRAIN), &_Type_NC_TRAIN_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".l_train", NULL, sizeof(kcg_int), offsetof(struct__458, l_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_airtight", NULL, sizeof(M_AIRTIGHT), offsetof(struct__458, m_airtight), &_Type_M_AIRTIGHT_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".m_axleloadcat", NULL, sizeof(M_AXLELOADCAT), offsetof(struct__458, m_axleloadcat), &_Type_M_AXLELOADCAT_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".m_loadinggoage", NULL, sizeof(M_LOADINGGAUGE), offsetof(struct__458, m_loadinggoage), &_Type_M_LOADINGGAUGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nIter_ntc", NULL, sizeof(kcg_int), offsetof(struct__458, nIter_ntc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_FIELD, ".nIter_tractionIdentity", NULL, sizeof(kcg_int), offsetof(struct__458, nIter_tractionIdentity), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".n_axle", NULL, sizeof(kcg_int), offsetof(struct__458, n_axle), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(array_int_3), offsetof(struct__458, nid_ntc), &_Type_array_int_3_Utils, NULL, NULL, &scope_8, 1, 12},
  /* 10 */ { MAP_FIELD, ".tractionIdentity", NULL, sizeof(array__455), offsetof(struct__458, tractionIdentity), &_Type_array__455_Utils, NULL, NULL, &scope_10, 1, 10},
  /* 11 */ { MAP_FIELD, ".v_maxtrain", NULL, sizeof(kcg_int), offsetof(struct__458, v_maxtrain), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__458, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "struct__458",
  scope_11_entries, 13,
};

/* array__455 */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(struct__450), 0, &_Type_struct__450_Utils, NULL, NULL, &scope_9, 1, 0}
};
static const MappingScope scope_10 = {
  "array__455",
  scope_10_entries, 1,
};

/* struct__450 */
static const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_FIELD, ".m_voltage", NULL, sizeof(M_VOLTAGE), offsetof(struct__450, m_voltage), &_Type_M_VOLTAGE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".nid_ctraction", NULL, sizeof(kcg_int), offsetof(struct__450, nid_ctraction), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_9 = {
  "struct__450",
  scope_9_entries, 2,
};

/* array_int_3 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_8 = {
  "array_int_3",
  scope_8_entries, 1,
};

/* struct__437 */
static const MappingEntry scope_7_entries[7] = {
  /* 0 */ { MAP_FIELD, ".centerDetectionAcc_DefaultValue", NULL, sizeof(struct__431), offsetof(struct__437, centerDetectionAcc_DefaultValue), &_Type_struct__431_Utils, NULL, NULL, &scope_6, 1, 6},
  /* 1 */ { MAP_FIELD, ".d_baliseAntenna_2_frontend", NULL, sizeof(struct__431), offsetof(struct__437, d_baliseAntenna_2_frontend), &_Type_struct__431_Utils, NULL, NULL, &scope_6, 1, 3},
  /* 2 */ { MAP_FIELD, ".d_frontend_2_rearend", NULL, sizeof(struct__431), offsetof(struct__437, d_frontend_2_rearend), &_Type_struct__431_Utils, NULL, NULL, &scope_6, 1, 4},
  /* 3 */ { MAP_FIELD, ".l_train", NULL, sizeof(kcg_int), offsetof(struct__437, l_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".locationAccuracy_DefaultValue", NULL, sizeof(struct__431), offsetof(struct__437, locationAccuracy_DefaultValue), &_Type_struct__431_Utils, NULL, NULL, &scope_6, 1, 5},
  /* 5 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(struct__437, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_FIELD, ".nid_operational", NULL, sizeof(kcg_int), offsetof(struct__437, nid_operational), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_7 = {
  "struct__437",
  scope_7_entries, 7,
};

/* struct__431 */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_max", NULL, sizeof(kcg_int), offsetof(struct__431, d_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(kcg_int), offsetof(struct__431, d_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nominal", NULL, sizeof(kcg_int), offsetof(struct__431, nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_6 = {
  "struct__431",
  scope_6_entries, 3,
};

/* MA_Request::Build_MA_request/ Build_MA_request_MA_Request */
static const MappingEntry scope_1_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "message132", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&outputs_ctx.message132, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_25, 1, 0},
  /* 1 */ { MAP_INPUT, "packet0", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), (size_t)&inputs_ctx.packet0, &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_22, 1, 3},
  /* 2 */ { MAP_INPUT, "packet1", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), (size_t)&inputs_ctx.packet1, &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_20, 1, 4},
  /* 3 */ { MAP_INPUT, "t_train", NULL, sizeof(T_TRAIN), (size_t)&inputs_ctx.t_train, &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_INPUT, "trackDescrDeleted", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.trackDescrDeleted, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_INPUT, "trainProps", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), (size_t)&inputs_ctx.trainProps, &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_7, 1, 2}
};
static const MappingScope scope_1 = {
  "MA_Request::Build_MA_request/ Build_MA_request_MA_Request",
  scope_1_entries, 6,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "MA_Request::Build_MA_request", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

