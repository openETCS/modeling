/* EnvSim_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "EnvSim_newtype.h"
#include "EnvSim_newmapping.h"

/* iterators */
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_114;
static const MappingIterator iter_array_110;
static const MappingIterator iter_array_50;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_9;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_255;
static const MappingIterator iter_array_999;
static const MappingIterator iter_array_311;
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_114 = { "array", 114, 114, NULL};
static const MappingIterator iter_array_110 = { "array", 110, 110, NULL};
static const MappingIterator iter_array_50 = { "array", 50, 50, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_9 = { "array", 9, 9, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_255 = { "array", 255, 255, NULL};
static const MappingIterator iter_array_999 = { "array", 999, 999, NULL};
static const MappingIterator iter_array_311 = { "array", 311, 311, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_111, 1);
MAP_DECL(scope_110, 2);
MAP_DECL(scope_109, 4);
MAP_DECL(scope_104, 7);
MAP_DECL(scope_103, 5);
MAP_DECL(scope_102, 5);
MAP_DECL(scope_101, 3);
MAP_DECL(scope_100, 6);
MAP_DECL(scope_99, 9);
MAP_DECL(scope_98, 9);
MAP_DECL(scope_97, 1);
MAP_DECL(scope_96, 15);
MAP_DECL(scope_95, 3);
MAP_DECL(scope_94, 11);
MAP_DECL(scope_93, 1);
MAP_DECL(scope_92, 4);
MAP_DECL(scope_91, 1);
MAP_DECL(scope_90, 5);
MAP_DECL(scope_89, 4);
MAP_DECL(scope_88, 3);
MAP_DECL(scope_87, 1);
MAP_DECL(scope_86, 4);
MAP_DECL(scope_85, 1);
MAP_DECL(scope_84, 8);
MAP_DECL(scope_83, 2);
MAP_DECL(scope_82, 9);
MAP_DECL(scope_81, 1);
MAP_DECL(scope_80, 5);
MAP_DECL(scope_79, 1);
MAP_DECL(scope_78, 2);
MAP_DECL(scope_77, 15);
MAP_DECL(scope_76, 2);
MAP_DECL(scope_75, 10);
MAP_DECL(scope_74, 2);
MAP_DECL(scope_73, 2);
MAP_DECL(scope_72, 1);
MAP_DECL(scope_71, 1);
MAP_DECL(scope_70, 3);
MAP_DECL(scope_69, 3);
MAP_DECL(scope_68, 15);
MAP_DECL(scope_67, 2);
MAP_DECL(scope_66, 6);
MAP_DECL(scope_65, 8);
MAP_DECL(scope_64, 6);
MAP_DECL(scope_63, 2);
MAP_DECL(scope_62, 9);
MAP_DECL(scope_61, 3);
MAP_DECL(scope_60, 3);
MAP_DECL(scope_59, 3);
MAP_DECL(scope_58, 3);
MAP_DECL(scope_57, 7);
MAP_DECL(scope_56, 5);
MAP_DECL(scope_55, 8);
MAP_DECL(scope_54, 9);
MAP_DECL(scope_53, 3);
MAP_DECL(scope_52, 3);
MAP_DECL(scope_51, 23);
MAP_DECL(scope_50, 3);
MAP_DECL(scope_49, 3);
MAP_DECL(scope_48, 9);
MAP_DECL(scope_47, 3);
MAP_DECL(scope_46, 1);
MAP_DECL(scope_45, 3);
MAP_DECL(scope_44, 1);
MAP_DECL(scope_43, 2);
MAP_DECL(scope_42, 2);
MAP_DECL(scope_41, 1);
MAP_DECL(scope_40, 2);
MAP_DECL(scope_39, 4);
MAP_DECL(scope_38, 1);
MAP_DECL(scope_37, 2);
MAP_DECL(scope_36, 4);
MAP_DECL(scope_35, 1);
MAP_DECL(scope_34, 2);
MAP_DECL(scope_33, 5);
MAP_DECL(scope_32, 6);
MAP_DECL(scope_31, 30);
MAP_DECL(scope_30, 2);
MAP_DECL(scope_29, 1);
MAP_DECL(scope_28, 4);
MAP_DECL(scope_27, 3);
MAP_DECL(scope_26, 7);
MAP_DECL(scope_25, 3);
MAP_DECL(scope_24, 3);
MAP_DECL(scope_23, 3);
MAP_DECL(scope_22, 4);
MAP_DECL(scope_21, 2);
MAP_DECL(scope_20, 3);
MAP_DECL(scope_19, 7);
MAP_DECL(scope_18, 4);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 17);
MAP_DECL(scope_14, 13);
MAP_DECL(scope_13, 11);
MAP_DECL(scope_12, 10);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 1);
MAP_DECL(scope_4, 3);
MAP_DECL(scope_3, 2);
MAP_DECL(scope_2, 1);
MAP_DECL(scope_1, 44);
MAP_DECL(scope_0, 1);

/* array_real_114 */
static const MappingEntry scope_111_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_114, sizeof(kcg_real), 0, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_111 = {
  "array_real_114",
  scope_111_entries, 1,
};

/* struct_2019 */
static const MappingEntry scope_110_entries[2] = {
  /* 0 */ { MAP_FIELD, ".distance", NULL, sizeof(kcg_int), offsetof(struct_2019, distance), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".now", NULL, sizeof(kcg_int), offsetof(struct_2019, now), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_110 = {
  "struct_2019",
  scope_110_entries, 2,
};

/* struct_1940 */
static const MappingEntry scope_109_entries[4] = {
  /* 0 */ { MAP_FIELD, ".dig1", NULL, sizeof(kcg_int), offsetof(struct_1940, dig1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".dig2", NULL, sizeof(kcg_int), offsetof(struct_1940, dig2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".dig3", NULL, sizeof(kcg_int), offsetof(struct_1940, dig3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int), offsetof(struct_1940, number), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_109 = {
  "struct_1940",
  scope_109_entries, 4,
};

/* mobileConnectionContext_T_RCM_Types_Pkg */
static const MappingEntry scope_104_entries[7] = {
  /* 0 */ { MAP_FIELD, ".connectionLost", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, connectionLost), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".isInRadioHole", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, isInRadioHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".mobileDeviceNo", NULL, sizeof(kcg_int), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, mobileDeviceNo), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".settingUpConnectionHasFailed", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, settingUpConnectionHasFailed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".status", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, status), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_104 = {
  "mobileConnectionContext_T_RCM_Types_Pkg",
  scope_104_entries, 7,
};

/* mobileRegistrationContext_T_RCM_Types_Pkg */
static const MappingEntry scope_103_entries[5] = {
  /* 0 */ { MAP_FIELD, ".healthStatus", NULL, sizeof(mobileHealthStatus_T_RCM_Types_Pkg), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, healthStatus), &_Type_mobileHealthStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".mobileDeviceNo", NULL, sizeof(kcg_int), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, mobileDeviceNo), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_mn", NULL, sizeof(NID_MN), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, nid_mn), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".status", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, status), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_103 = {
  "mobileRegistrationContext_T_RCM_Types_Pkg",
  scope_103_entries, 5,
};

/* sessionStatus_T_RCM_Session_Types_Pkg */
static const MappingEntry scope_102_entries[5] = {
  /* 0 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_rbc", NULL, sizeof(NID_RBC), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, nid_rbc), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".phase", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, phase), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_102 = {
  "sessionStatus_T_RCM_Session_Types_Pkg",
  scope_102_entries, 5,
};

/* morcStatus_T_RCM_Session_Types_Pkg */
static const MappingEntry scope_101_entries[3] = {
  /* 0 */ { MAP_FIELD, ".connection", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(morcStatus_T_RCM_Session_Types_Pkg, connection), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_104, 1, 1},
  /* 1 */ { MAP_FIELD, ".registration", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(morcStatus_T_RCM_Session_Types_Pkg, registration), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_103, 1, 0},
  /* 2 */ { MAP_FIELD, ".session", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(morcStatus_T_RCM_Session_Types_Pkg, session), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_102, 1, 2}
};
static const MappingScope scope_101 = {
  "morcStatus_T_RCM_Session_Types_Pkg",
  scope_101_entries, 3,
};

/* infoFromLinking_T_TrainPosition_Types_Pck */
static const MappingEntry scope_100_entries[6] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(infoFromLinking_T_TrainPosition_Types_Pck, d_link), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_25, 1, 4},
  /* 1 */ { MAP_FIELD, ".expectedLocation", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(infoFromLinking_T_TrainPosition_Types_Pck, expectedLocation), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_25, 1, 3},
  /* 2 */ { MAP_FIELD, ".linkingInfo", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(infoFromLinking_T_TrainPosition_Types_Pck, linkingInfo), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_94, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_bg_fromLinkingBG", NULL, sizeof(NID_BG), offsetof(infoFromLinking_T_TrainPosition_Types_Pck, nid_bg_fromLinkingBG), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".nid_c_fromLinkingBG", NULL, sizeof(NID_C), offsetof(infoFromLinking_T_TrainPosition_Types_Pck, nid_c_fromLinkingBG), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(infoFromLinking_T_TrainPosition_Types_Pck, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_100 = {
  "infoFromLinking_T_TrainPosition_Types_Pck",
  scope_100_entries, 6,
};

/* positionedBG_T_TrainPosition_Types_Pck */
static const MappingEntry scope_99_entries[9] = {
  /* 0 */ { MAP_FIELD, ".infoFromLinking", NULL, sizeof(infoFromLinking_T_TrainPosition_Types_Pck), offsetof(positionedBG_T_TrainPosition_Types_Pck, infoFromLinking), &_Type_infoFromLinking_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_100, 1, 6},
  /* 1 */ { MAP_FIELD, ".infoFromPassing", NULL, sizeof(passedBG_T_BG_Types_Pkg), offsetof(positionedBG_T_TrainPosition_Types_Pck, infoFromPassing), &_Type_passedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_95, 1, 7},
  /* 2 */ { MAP_FIELD, ".location", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(positionedBG_T_TrainPosition_Types_Pck, location), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_25, 1, 4},
  /* 3 */ { MAP_FIELD, ".missed", NULL, sizeof(kcg_bool), offsetof(positionedBG_T_TrainPosition_Types_Pck, missed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(NID_BG), offsetof(positionedBG_T_TrainPosition_Types_Pck, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(positionedBG_T_TrainPosition_Types_Pck, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(positionedBG_T_TrainPosition_Types_Pck, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".seqNoOnTrack", NULL, sizeof(kcg_int), offsetof(positionedBG_T_TrainPosition_Types_Pck, seqNoOnTrack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(positionedBG_T_TrainPosition_Types_Pck, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_99 = {
  "positionedBG_T_TrainPosition_Types_Pck",
  scope_99_entries, 9,
};

/* positionErrors_T_TrainPosition_Types_Pck */
static const MappingEntry scope_98_entries[9] = {
  /* 0 */ { MAP_FIELD, ".BG_LinkingConsistencyError", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, BG_LinkingConsistencyError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".BGpassedInUnexpectedDirection", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, BGpassedInUnexpectedDirection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".bg", NULL, sizeof(positionedBG_T_TrainPosition_Types_Pck), offsetof(positionErrors_T_TrainPosition_Types_Pck, bg), &_Type_positionedBG_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_99, 1, 8},
  /* 3 */ { MAP_FIELD, ".doubleRepositioningError", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, doubleRepositioningError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".linkedBGMissed", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, linkedBGMissed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".outOfMemSpace", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, outOfMemSpace), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_FIELD, ".passedBG_foundNotWhereExpected", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, passedBG_foundNotWhereExpected), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".positionCalculation_inconsistent", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, positionCalculation_inconsistent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".twoConsecutiveLinkedBGs_missed", NULL, sizeof(kcg_bool), offsetof(positionErrors_T_TrainPosition_Types_Pck, twoConsecutiveLinkedBGs_missed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_98 = {
  "positionErrors_T_TrainPosition_Types_Pck",
  scope_98_entries, 9,
};

/* LinkedBGs_T_BG_Types_Pkg */
static const MappingEntry scope_97_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(LinkedBG_T_BG_Types_Pkg), 0, &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_94, 1, 0}
};
static const MappingScope scope_97 = {
  "LinkedBGs_T_BG_Types_Pkg",
  scope_97_entries, 1,
};

/* BG_Header_T_BG_Types_Pkg */
static const MappingEntry scope_96_entries[15] = {
  /* 0 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(BG_Header_T_BG_Types_Pkg, BG_centerDetectionInaccuraccuracies), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_25, 1, 10},
  /* 1 */ { MAP_FIELD, ".bgPosition", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(BG_Header_T_BG_Types_Pkg, bgPosition), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_26, 1, 9},
  /* 2 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(M_MCOUNT), offsetof(BG_Header_T_BG_Types_Pkg, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(BG_Header_T_BG_Types_Pkg, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(BG_Header_T_BG_Types_Pkg, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(NID_BG), offsetof(BG_Header_T_BG_Types_Pkg, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(BG_Header_T_BG_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(BG_Header_T_BG_Types_Pkg, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(BG_Header_T_BG_Types_Pkg, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(BG_Header_T_BG_Types_Pkg, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(Q_NVLOCACC), offsetof(BG_Header_T_BG_Types_Pkg, q_nvlocacc), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(BG_Header_T_BG_Types_Pkg, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".trainOrientationToBG", NULL, sizeof(Q_DIRLRBG), offsetof(BG_Header_T_BG_Types_Pkg, trainOrientationToBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_FIELD, ".trainRunningDirectionToBG", NULL, sizeof(Q_DIRTRAIN), offsetof(BG_Header_T_BG_Types_Pkg, trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(BG_Header_T_BG_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_96 = {
  "BG_Header_T_BG_Types_Pkg",
  scope_96_entries, 15,
};

/* passedBG_T_BG_Types_Pkg */
static const MappingEntry scope_95_entries[3] = {
  /* 0 */ { MAP_FIELD, ".BG_Header", NULL, sizeof(BG_Header_T_BG_Types_Pkg), offsetof(passedBG_T_BG_Types_Pkg, BG_Header), &_Type_BG_Header_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_96, 1, 1},
  /* 1 */ { MAP_FIELD, ".linkedBGs", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(passedBG_T_BG_Types_Pkg, linkedBGs), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_97, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(passedBG_T_BG_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_95 = {
  "passedBG_T_BG_Types_Pkg",
  scope_95_entries, 3,
};

/* LinkedBG_T_BG_Types_Pkg */
static const MappingEntry scope_94_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(D_LINK), offsetof(LinkedBG_T_BG_Types_Pkg, d_link), &_Type_D_LINK_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_LRBG", NULL, sizeof(NID_LRBG), offsetof(LinkedBG_T_BG_Types_Pkg, nid_LRBG), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(NID_BG), offsetof(LinkedBG_T_BG_Types_Pkg, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(LinkedBG_T_BG_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(LinkedBG_T_BG_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(LinkedBG_T_BG_Types_Pkg, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(LinkedBG_T_BG_Types_Pkg, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(Q_LOCACC), offsetof(LinkedBG_T_BG_Types_Pkg, q_locacc), &_Type_Q_LOCACC_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(LinkedBG_T_BG_Types_Pkg, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(LinkedBG_T_BG_Types_Pkg, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(LinkedBG_T_BG_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_94 = {
  "LinkedBG_T_BG_Types_Pkg",
  scope_94_entries, 11,
};

/* ParabolaCurveValid_T_CalcBrakingCurves_types */
static const MappingEntry scope_93_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_114, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_93 = {
  "ParabolaCurveValid_T_CalcBrakingCurves_types",
  scope_93_entries, 1,
};

/* ParabolaCurve_T_CalcBrakingCurves_types */
static const MappingEntry scope_92_entries[4] = {
  /* 0 */ { MAP_FIELD, ".accelerations", NULL, sizeof(ParabolaCurveAccelerations_T_CalcBrakingCurves_types), offsetof(ParabolaCurve_T_CalcBrakingCurves_types, accelerations), &_Type_ParabolaCurveAccelerations_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_111, 1, 2},
  /* 1 */ { MAP_FIELD, ".distances", NULL, sizeof(ParabolaCurveDistances_T_CalcBrakingCurves_types), offsetof(ParabolaCurve_T_CalcBrakingCurves_types, distances), &_Type_ParabolaCurveDistances_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_111, 1, 0},
  /* 2 */ { MAP_FIELD, ".speeds", NULL, sizeof(ParabolaCurveSpeeds_T_CalcBrakingCurves_types), offsetof(ParabolaCurve_T_CalcBrakingCurves_types, speeds), &_Type_ParabolaCurveSpeeds_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_111, 1, 1},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(ParabolaCurveValid_T_CalcBrakingCurves_types), offsetof(ParabolaCurve_T_CalcBrakingCurves_types, valid), &_Type_ParabolaCurveValid_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_93, 1, 3}
};
static const MappingScope scope_92 = {
  "ParabolaCurve_T_CalcBrakingCurves_types",
  scope_92_entries, 4,
};

/* ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */
static const MappingEntry scope_91_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_110, sizeof(ParabolaCurve_T_CalcBrakingCurves_types), 0, &_Type_ParabolaCurve_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_92, 1, 0}
};
static const MappingScope scope_91 = {
  "ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types",
  scope_91_entries, 1,
};

/* CurveCollection_T_CalcBrakingCurves_types */
static const MappingEntry scope_90_entries[5] = {
  /* 0 */ { MAP_FIELD, ".EOA_SBD_curve", NULL, sizeof(ParabolaCurve_T_CalcBrakingCurves_types), offsetof(CurveCollection_T_CalcBrakingCurves_types, EOA_SBD_curve), &_Type_ParabolaCurve_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_92, 1, 1},
  /* 1 */ { MAP_FIELD, ".GUI_curve", NULL, sizeof(ParabolaCurve_T_CalcBrakingCurves_types), offsetof(CurveCollection_T_CalcBrakingCurves_types, GUI_curve), &_Type_ParabolaCurve_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_92, 1, 3},
  /* 2 */ { MAP_FIELD, ".GUI_curve_enabled", NULL, sizeof(kcg_bool), offsetof(CurveCollection_T_CalcBrakingCurves_types, GUI_curve_enabled), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".MRSP_EBD_curves", NULL, sizeof(ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types), offsetof(CurveCollection_T_CalcBrakingCurves_types, MRSP_EBD_curves), &_Type_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_91, 1, 0},
  /* 4 */ { MAP_FIELD, ".SvL_LoA_EBD_curve", NULL, sizeof(ParabolaCurve_T_CalcBrakingCurves_types), offsetof(CurveCollection_T_CalcBrakingCurves_types, SvL_LoA_EBD_curve), &_Type_ParabolaCurve_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_92, 1, 2}
};
static const MappingScope scope_90 = {
  "CurveCollection_T_CalcBrakingCurves_types",
  scope_90_entries, 5,
};

/* Target_T_TargetManagement_types */
static const MappingEntry scope_89_entries[4] = {
  /* 0 */ { MAP_FIELD, ".distance", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(Target_T_TargetManagement_types, distance), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".speed", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(Target_T_TargetManagement_types, speed), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".targetType", NULL, sizeof(TargetType_T_TargetManagement_types), offsetof(Target_T_TargetManagement_types, targetType), &_Type_TargetType_T_TargetManagement_types_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(Target_T_TargetManagement_types, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_89 = {
  "Target_T_TargetManagement_types",
  scope_89_entries, 4,
};

/* Target_real_T_TargetManagement_types */
static const MappingEntry scope_88_entries[3] = {
  /* 0 */ { MAP_FIELD, ".distance", NULL, sizeof(L_internal_real_Type_SDM_Types_Pkg), offsetof(Target_real_T_TargetManagement_types, distance), &_Type_L_internal_real_Type_SDM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".speed", NULL, sizeof(V_internal_real_Type_SDM_Types_Pkg), offsetof(Target_real_T_TargetManagement_types, speed), &_Type_V_internal_real_Type_SDM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".targetType", NULL, sizeof(TargetType_T_TargetManagement_types), offsetof(Target_real_T_TargetManagement_types, targetType), &_Type_TargetType_T_TargetManagement_types_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_88 = {
  "Target_real_T_TargetManagement_types",
  scope_88_entries, 3,
};

/* Target_list_MRSP_real_T_TargetManagement_types */
static const MappingEntry scope_87_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_110, sizeof(Target_real_T_TargetManagement_types), 0, &_Type_Target_real_T_TargetManagement_types_Utils, NULL, NULL, &scope_88, 1, 0}
};
static const MappingScope scope_87 = {
  "Target_list_MRSP_real_T_TargetManagement_types",
  scope_87_entries, 1,
};

/* TargetCollection_T_TargetManagement_types */
static const MappingEntry scope_86_entries[4] = {
  /* 0 */ { MAP_FIELD, ".EOA_target", NULL, sizeof(Target_real_T_TargetManagement_types), offsetof(TargetCollection_T_TargetManagement_types, EOA_target), &_Type_Target_real_T_TargetManagement_types_Utils, NULL, NULL, &scope_88, 1, 2},
  /* 1 */ { MAP_FIELD, ".MRSP_targetList", NULL, sizeof(Target_list_MRSP_real_T_TargetManagement_types), offsetof(TargetCollection_T_TargetManagement_types, MRSP_targetList), &_Type_Target_list_MRSP_real_T_TargetManagement_types_Utils, NULL, NULL, &scope_87, 1, 1},
  /* 2 */ { MAP_FIELD, ".SvL_LoA_target", NULL, sizeof(Target_real_T_TargetManagement_types), offsetof(TargetCollection_T_TargetManagement_types, SvL_LoA_target), &_Type_Target_real_T_TargetManagement_types_Utils, NULL, NULL, &scope_88, 1, 3},
  /* 3 */ { MAP_FIELD, ".updatedTargetList", NULL, sizeof(kcg_bool), offsetof(TargetCollection_T_TargetManagement_types, updatedTargetList), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_86 = {
  "TargetCollection_T_TargetManagement_types",
  scope_86_entries, 4,
};

/* M_TrainTrack_compressed_packets_T_TM_radio_messages */
static const MappingEntry scope_85_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_85 = {
  "M_TrainTrack_compressed_packets_T_TM_radio_messages",
  scope_85_entries, 1,
};

/* M_TrainTrack_MessageHd_T_TM_radio_messages */
static const MappingEntry scope_84_entries[8] = {
  /* 0 */ { MAP_FIELD, ".field1", NULL, sizeof(kcg_int), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, field1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".field2", NULL, sizeof(kcg_int), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, field2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".field3", NULL, sizeof(kcg_int), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, field3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(M_TrainTrack_MessageHd_T_TM_radio_messages, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_84 = {
  "M_TrainTrack_MessageHd_T_TM_radio_messages",
  scope_84_entries, 8,
};

/* M_TrainTrack_Message_T_TM_radio_messages */
static const MappingEntry scope_83_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Message", NULL, sizeof(M_TrainTrack_MessageHd_T_TM_radio_messages), offsetof(M_TrainTrack_Message_T_TM_radio_messages, Message), &_Type_M_TrainTrack_MessageHd_T_TM_radio_messages_Utils, NULL, NULL, &scope_84, 1, 0},
  /* 1 */ { MAP_FIELD, ".OptionalPackets", NULL, sizeof(M_TrainTrack_compressed_packets_T_TM_radio_messages), offsetof(M_TrainTrack_Message_T_TM_radio_messages, OptionalPackets), &_Type_M_TrainTrack_compressed_packets_T_TM_radio_messages_Utils, NULL, NULL, &scope_85, 1, 1}
};
static const MappingScope scope_83 = {
  "M_TrainTrack_Message_T_TM_radio_messages",
  scope_83_entries, 2,
};

/* MSG_Errors_T_Common_Types_Pkg */
static const MappingEntry scope_82_entries[9] = {
  /* 0 */ { MAP_FIELD, ".BG_versionIncompatible", NULL, sizeof(kcg_bool), offsetof(MSG_Errors_T_Common_Types_Pkg, BG_versionIncompatible), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".linkedBGError", NULL, sizeof(kcg_bool), offsetof(MSG_Errors_T_Common_Types_Pkg, linkedBGError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(MSG_Errors_T_Common_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_errorbg", NULL, sizeof(NID_ERRORBG_BG_Types_Pkg), offsetof(MSG_Errors_T_Common_Types_Pkg, nid_errorbg), &_Type_NID_ERRORBG_BG_Types_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_FIELD, ".otherTimingError", NULL, sizeof(kcg_bool), offsetof(MSG_Errors_T_Common_Types_Pkg, otherTimingError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".radioMessageConsistencyError", NULL, sizeof(kcg_bool), offsetof(MSG_Errors_T_Common_Types_Pkg, radioMessageConsistencyError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".radioSequenceError", NULL, sizeof(kcg_bool), offsetof(MSG_Errors_T_Common_Types_Pkg, radioSequenceError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".tNvContactError", NULL, sizeof(kcg_bool), offsetof(MSG_Errors_T_Common_Types_Pkg, tNvContactError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".unlinkedBGError", NULL, sizeof(kcg_bool), offsetof(MSG_Errors_T_Common_Types_Pkg, unlinkedBGError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_82 = {
  "MSG_Errors_T_Common_Types_Pkg",
  scope_82_entries, 9,
};

/* CompressedPacketData_T_Common_Types_Pkg */
static const MappingEntry scope_81_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_81 = {
  "CompressedPacketData_T_Common_Types_Pkg",
  scope_81_entries, 1,
};

/* MetadataElement_T_Common_Types_Pkg */
static const MappingEntry scope_80_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(MetadataElement_T_Common_Types_Pkg, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(NID_PACKET), offsetof(MetadataElement_T_Common_Types_Pkg, nid_packet), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(MetadataElement_T_Common_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(MetadataElement_T_Common_Types_Pkg, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(MetadataElement_T_Common_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_80 = {
  "MetadataElement_T_Common_Types_Pkg",
  scope_80_entries, 5,
};

/* Metadata_T_Common_Types_Pkg */
static const MappingEntry scope_79_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(MetadataElement_T_Common_Types_Pkg), 0, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_80, 1, 0}
};
static const MappingScope scope_79 = {
  "Metadata_T_Common_Types_Pkg",
  scope_79_entries, 1,
};

/* CompressedPackets_T_Common_Types_Pkg */
static const MappingEntry scope_78_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketData), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_81, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketHeaders), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_79, 1, 0}
};
static const MappingScope scope_78 = {
  "CompressedPackets_T_Common_Types_Pkg",
  scope_78_entries, 2,
};

/* Radio_TrackTrain_Header_T_TM */
static const MappingEntry scope_77_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, q_dir), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, q_scale), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, t_sh_rqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_TM, t_train_reference), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_77 = {
  "Radio_TrackTrain_Header_T_TM",
  scope_77_entries, 15,
};

/* CompressedRadioMessage_TM */
static const MappingEntry scope_76_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(Radio_TrackTrain_Header_T_TM), offsetof(CompressedRadioMessage_TM, Header), &_Type_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_77, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(CompressedRadioMessage_TM, Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 1}
};
static const MappingScope scope_76 = {
  "CompressedRadioMessage_TM",
  scope_76_entries, 2,
};

/* BaliseTelegramHeader_int_T_TM */
static const MappingEntry scope_75_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_75 = {
  "BaliseTelegramHeader_int_T_TM",
  scope_75_entries, 10,
};

/* CompressedBaliseMessage_TM */
static const MappingEntry scope_74_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(CompressedBaliseMessage_TM, Header), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_75, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(CompressedBaliseMessage_TM, Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_78, 1, 1}
};
static const MappingScope scope_74 = {
  "CompressedBaliseMessage_TM",
  scope_74_entries, 2,
};

/* sTractionIdentity_T_Packet_TrainTypes_Pkg */
static const MappingEntry scope_73_entries[2] = {
  /* 0 */ { MAP_FIELD, ".m_voltage", NULL, sizeof(M_VOLTAGE), offsetof(sTractionIdentity_T_Packet_TrainTypes_Pkg, m_voltage), &_Type_M_VOLTAGE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".nid_ctraction", NULL, sizeof(NID_CTRACTION), offsetof(sTractionIdentity_T_Packet_TrainTypes_Pkg, nid_ctraction), &_Type_NID_CTRACTION_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_73 = {
  "sTractionIdentity_T_Packet_TrainTypes_Pkg",
  scope_73_entries, 2,
};

/* aTractionIdentity_T_Packet_TrainTypes_Pkg */
static const MappingEntry scope_72_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(sTractionIdentity_T_Packet_TrainTypes_Pkg), 0, &_Type_sTractionIdentity_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_73, 1, 0}
};
static const MappingScope scope_72 = {
  "aTractionIdentity_T_Packet_TrainTypes_Pkg",
  scope_72_entries, 1,
};

/* aNID_NTC_T_Packet_TrainTypes_Pkg */
static const MappingEntry scope_71_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(NID_NTC), 0, &_Type_NID_NTC_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_71 = {
  "aNID_NTC_T_Packet_TrainTypes_Pkg",
  scope_71_entries, 1,
};

/* nothing_to_resume_profile_follow_T_TIU_Types_Pkg */
static const MappingEntry scope_70_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_test_trackcond", NULL, sizeof(D_test_trackcond_T_TIU_Types_Pkg), offsetof(nothing_to_resume_profile_follow_T_TIU_Types_Pkg, d_test_trackcond), &_Type_D_test_trackcond_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_110, 1, 0},
  /* 1 */ { MAP_FIELD, ".l_test_trackcond", NULL, sizeof(L_test_trackcond_T_TIU_Types_Pkg), offsetof(nothing_to_resume_profile_follow_T_TIU_Types_Pkg, l_test_trackcond), &_Type_L_test_trackcond_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_110, 1, 1},
  /* 2 */ { MAP_FIELD, ".m_trackcond", NULL, sizeof(M_trackcond_T_TIU_Types_Pkg), offsetof(nothing_to_resume_profile_follow_T_TIU_Types_Pkg, m_trackcond), &_Type_M_trackcond_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_70 = {
  "nothing_to_resume_profile_follow_T_TIU_Types_Pkg",
  scope_70_entries, 3,
};

/* Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */
static const MappingEntry scope_69_entries[3] = {
  /* 0 */ { MAP_FIELD, ".empty_profile_initial_state_to_be_resumed", NULL, sizeof(D_test_trackinit_T_TIU_Types_Pkg), offsetof(Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg, empty_profile_initial_state_to_be_resumed), &_Type_D_test_trackinit_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_110, 1, 2},
  /* 1 */ { MAP_FIELD, ".nothing_to_resume_profile_follow", NULL, sizeof(nothing_to_resume_profile_follow_T_TIU_Types_Pkg), offsetof(Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg, nothing_to_resume_profile_follow), &_Type_nothing_to_resume_profile_follow_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_70, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_69 = {
  "Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg",
  scope_69_entries, 3,
};

/* trainData_T_TIU_Types_Pkg */
static const MappingEntry scope_68_entries[15] = {
  /* 0 */ { MAP_FIELD, ".acknowledgedByDriver", NULL, sizeof(kcg_bool), offsetof(trainData_T_TIU_Types_Pkg, acknowledgedByDriver), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".airtightSystem", NULL, sizeof(M_AIRTIGHT), offsetof(trainData_T_TIU_Types_Pkg, airtightSystem), &_Type_M_AIRTIGHT_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_FIELD, ".axleLoadCategory", NULL, sizeof(M_AXLELOADCAT), offsetof(trainData_T_TIU_Types_Pkg, axleLoadCategory), &_Type_M_AXLELOADCAT_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".axleNumber", NULL, sizeof(kcg_int), offsetof(trainData_T_TIU_Types_Pkg, axleNumber), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".brakePerctage", NULL, sizeof(kcg_int), offsetof(trainData_T_TIU_Types_Pkg, brakePerctage), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".cantDeficientcy", NULL, sizeof(NC_CDTRAIN), offsetof(trainData_T_TIU_Types_Pkg, cantDeficientcy), &_Type_NC_CDTRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".loadingGauge", NULL, sizeof(M_LOADINGGAUGE), offsetof(trainData_T_TIU_Types_Pkg, loadingGauge), &_Type_M_LOADINGGAUGE_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".maxTrainSpeed", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(trainData_T_TIU_Types_Pkg, maxTrainSpeed), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_FIELD, ".nationSystems", NULL, sizeof(aNID_NTC_T_Packet_TrainTypes_Pkg), offsetof(trainData_T_TIU_Types_Pkg, nationSystems), &_Type_aNID_NTC_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_71, 1, 12},
  /* 9 */ { MAP_FIELD, ".numberNationalSystems", NULL, sizeof(kcg_int), offsetof(trainData_T_TIU_Types_Pkg, numberNationalSystems), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".numberTractionSystems", NULL, sizeof(kcg_int), offsetof(trainData_T_TIU_Types_Pkg, numberTractionSystems), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_FIELD, ".tractionSystem", NULL, sizeof(aTractionIdentity_T_Packet_TrainTypes_Pkg), offsetof(trainData_T_TIU_Types_Pkg, tractionSystem), &_Type_aTractionIdentity_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_72, 1, 14},
  /* 12 */ { MAP_FIELD, ".trainCategory", NULL, sizeof(NC_TRAIN), offsetof(trainData_T_TIU_Types_Pkg, trainCategory), &_Type_NC_TRAIN_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_FIELD, ".trainLength", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(trainData_T_TIU_Types_Pkg, trainLength), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(trainData_T_TIU_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_68 = {
  "trainData_T_TIU_Types_Pkg",
  scope_68_entries, 15,
};

/* Brake_pressure_value_T_TIU_Types_Pkg */
static const MappingEntry scope_67_entries[2] = {
  /* 0 */ { MAP_FIELD, ".pressure", NULL, sizeof(kcg_int), offsetof(Brake_pressure_value_T_TIU_Types_Pkg, pressure), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(Brake_pressure_value_T_TIU_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_67 = {
  "Brake_pressure_value_T_TIU_Types_Pkg",
  scope_67_entries, 2,
};

/* Brake_status_T_TIU_Types_Pkg */
static const MappingEntry scope_66_entries[6] = {
  /* 0 */ { MAP_FIELD, ".m_additionalbrake_st", NULL, sizeof(M_brake_status_T_TIU_Types_Pkg), offsetof(Brake_status_T_TIU_Types_Pkg, m_additionalbrake_st), &_Type_M_brake_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_eddycurrentbrake_st", NULL, sizeof(M_brake_status_T_TIU_Types_Pkg), offsetof(Brake_status_T_TIU_Types_Pkg, m_eddycurrentbrake_st), &_Type_M_brake_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".m_electropneumaticbrake_st", NULL, sizeof(M_brake_status_T_TIU_Types_Pkg), offsetof(Brake_status_T_TIU_Types_Pkg, m_electropneumaticbrake_st), &_Type_M_brake_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".m_magneticshoebrake_st", NULL, sizeof(M_brake_status_T_TIU_Types_Pkg), offsetof(Brake_status_T_TIU_Types_Pkg, m_magneticshoebrake_st), &_Type_M_brake_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".m_regenerativebrake_st", NULL, sizeof(M_brake_status_T_TIU_Types_Pkg), offsetof(Brake_status_T_TIU_Types_Pkg, m_regenerativebrake_st), &_Type_M_brake_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(Brake_status_T_TIU_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_66 = {
  "Brake_status_T_TIU_Types_Pkg",
  scope_66_entries, 6,
};

/* Mode_control_and_train_status_T_TIU_Types_Pkg */
static const MappingEntry scope_65_entries[8] = {
  /* 0 */ { MAP_FIELD, ".m_cab_st", NULL, sizeof(M_cab_signal_status_T_TIU_Types_Pkg), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, m_cab_st), &_Type_M_cab_signal_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".m_directioncontroller_st", NULL, sizeof(M_directioncontroller_signal_status_T_TIU_Types_Pkg), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, m_directioncontroller_st), &_Type_M_directioncontroller_signal_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".m_nonleading_st", NULL, sizeof(M_nonleading_signal_status_T_TIU_Types_Pkg), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, m_nonleading_st), &_Type_M_nonleading_signal_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_passiveshunting_st", NULL, sizeof(M_passiveshunting_signal_status_T_TIU_Types_Pkg), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, m_passiveshunting_st), &_Type_M_passiveshunting_signal_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".m_sleeping_st", NULL, sizeof(M_sleeping_signal_status_T_TIU_Types_Pkg), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, m_sleeping_st), &_Type_M_sleeping_signal_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".m_traction_st", NULL, sizeof(M_traction_signal_status_T_TIU_Types_Pkg), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, m_traction_st), &_Type_M_traction_signal_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".m_trainintegrity_st", NULL, sizeof(M_trainintegrity_signal_status_T_TIU_Types_Pkg), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, m_trainintegrity_st), &_Type_M_trainintegrity_signal_status_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(Mode_control_and_train_status_T_TIU_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_65 = {
  "Mode_control_and_train_status_T_TIU_Types_Pkg",
  scope_65_entries, 8,
};

/* Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */
static const MappingEntry scope_64_entries[6] = {
  /* 0 */ { MAP_FIELD, ".brake_pressure", NULL, sizeof(Brake_pressure_value_T_TIU_Types_Pkg), offsetof(Message_Train_Interface_to_EVC_T_TIU_Types_Pkg, brake_pressure), &_Type_Brake_pressure_value_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_67, 1, 2},
  /* 1 */ { MAP_FIELD, ".brake_status", NULL, sizeof(Brake_status_T_TIU_Types_Pkg), offsetof(Message_Train_Interface_to_EVC_T_TIU_Types_Pkg, brake_status), &_Type_Brake_status_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_66, 1, 1},
  /* 2 */ { MAP_FIELD, ".train_data_entry_type", NULL, sizeof(M_train_data_entry_type_T_TIU_Types_Pkg), offsetof(Message_Train_Interface_to_EVC_T_TIU_Types_Pkg, train_data_entry_type), &_Type_M_train_data_entry_type_T_TIU_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".train_data_info", NULL, sizeof(trainData_T_TIU_Types_Pkg), offsetof(Message_Train_Interface_to_EVC_T_TIU_Types_Pkg, train_data_info), &_Type_trainData_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_68, 1, 4},
  /* 4 */ { MAP_FIELD, ".train_status", NULL, sizeof(Mode_control_and_train_status_T_TIU_Types_Pkg), offsetof(Message_Train_Interface_to_EVC_T_TIU_Types_Pkg, train_status), &_Type_Mode_control_and_train_status_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_65, 1, 0},
  /* 5 */ { MAP_FIELD, ".type_I_train_and_brake_inhibition", NULL, sizeof(Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg), offsetof(Message_Train_Interface_to_EVC_T_TIU_Types_Pkg, type_I_train_and_brake_inhibition), &_Type_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_69, 1, 5}
};
static const MappingScope scope_64 = {
  "Message_Train_Interface_to_EVC_T_TIU_Types_Pkg",
  scope_64_entries, 6,
};

/* TIU_Input_msg_API_TIU_Pkg */
static const MappingEntry scope_63_entries[2] = {
  /* 0 */ { MAP_FIELD, ".info", NULL, sizeof(Message_Train_Interface_to_EVC_T_TIU_Types_Pkg), offsetof(TIU_Input_msg_API_TIU_Pkg, info), &_Type_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_Utils, NULL, NULL, &scope_64, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(TIU_Input_msg_API_TIU_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_63 = {
  "TIU_Input_msg_API_TIU_Pkg",
  scope_63_entries, 2,
};

/* DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_62_entries[9] = {
  /* 0 */ { MAP_FIELD, ".DMI_m_icon_control_flag", NULL, sizeof(Icon_control_flag_T_DMI_Types_Pkg), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, DMI_m_icon_control_flag), &_Type_Icon_control_flag_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".DMI_m_icon_flashing_freq", NULL, sizeof(kcg_real), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, DMI_m_icon_flashing_freq), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".DMI_nid_area_group", NULL, sizeof(Area_group_T_DMI_Types_Pkg), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, DMI_nid_area_group), &_Type_Area_group_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".DMI_nid_area_rank", NULL, sizeof(kcg_int), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, DMI_nid_area_rank), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".DMI_nid_icon_group", NULL, sizeof(Icon_group_T_DMI_Types_Pkg), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, DMI_nid_icon_group), &_Type_Icon_group_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".DMI_nid_icon_identifier", NULL, sizeof(kcg_int), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, DMI_nid_icon_identifier), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".DMI_nid_icon_rank", NULL, sizeof(kcg_int), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, DMI_nid_icon_rank), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_62 = {
  "DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_62_entries, 9,
};

/* DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_61_entries[3] = {
  /* 0 */ { MAP_FIELD, ".nid_mn", NULL, sizeof(NID_MN), offsetof(DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg, nid_mn), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_61 = {
  "DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_61_entries, 3,
};

/* DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_60_entries[3] = {
  /* 0 */ { MAP_FIELD, ".levelList", NULL, sizeof(DMI_LevelList_T_DMI_Types_Pkg), offsetof(DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg, levelList), &_Type_DMI_LevelList_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 2},
  /* 1 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_60 = {
  "DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_60_entries, 3,
};

/* DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_59_entries[3] = {
  /* 0 */ { MAP_FIELD, ".cab_is_active", NULL, sizeof(kcg_bool), offsetof(DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg, cab_is_active), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_59 = {
  "DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_59_entries, 3,
};

/* DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_58_entries[3] = {
  /* 0 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".system_version", NULL, sizeof(M_VERSION), offsetof(DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg, system_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_58 = {
  "DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_58_entries, 3,
};

/* DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_57_entries[7] = {
  /* 0 */ { MAP_FIELD, ".ERTMS_Version", NULL, sizeof(M_VERSION), offsetof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg, ERTMS_Version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".EVC_Version", NULL, sizeof(M_VERSION), offsetof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg, EVC_Version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".l_extra", NULL, sizeof(L_TEXT), offsetof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg, l_extra), &_Type_L_TEXT_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".l_name", NULL, sizeof(L_TEXT), offsetof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg, l_name), &_Type_L_TEXT_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_FIELD, ".x_name", NULL, sizeof(DMI_TEXT_DMI_Types_Pkg), offsetof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg, x_name), &_Type_DMI_TEXT_DMI_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 5}
};
static const MappingScope scope_57 = {
  "DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_57_entries, 7,
};

/* DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_56_entries[5] = {
  /* 0 */ { MAP_FIELD, ".gradientProfiles", NULL, sizeof(DMI_gradientProfile_T_DMI_Types_Pkg), offsetof(DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg, gradientProfiles), &_Type_DMI_gradientProfile_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_37, 1, 3},
  /* 1 */ { MAP_FIELD, ".speedProfiles", NULL, sizeof(DMI_speedProfile_T_DMI_Types_Pkg), offsetof(DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg, speedProfiles), &_Type_DMI_speedProfile_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_34, 1, 2},
  /* 2 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".trackConditions", NULL, sizeof(DMI_trackCondition_T_DMI_Types_Pkg), offsetof(DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg, trackConditions), &_Type_DMI_trackCondition_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 4},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_56 = {
  "DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_56_entries, 5,
};

/* DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_55_entries[8] = {
  /* 0 */ { MAP_FIELD, ".l_text", NULL, sizeof(L_TEXT), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, l_text), &_Type_L_TEXT_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".q_text", NULL, sizeof(DMI_Q_TEXT_DMI_Types_Pkg), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, q_text), &_Type_DMI_Q_TEXT_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".q_textClass", NULL, sizeof(Q_TEXTCLASS), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, q_textClass), &_Type_Q_TEXTCLASS_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".q_textConfirm", NULL, sizeof(Q_TEXTCONFIRM), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, q_textConfirm), &_Type_Q_TEXTCONFIRM_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".textMessage_ID", NULL, sizeof(DMI_TextMessage_ID_T_DMI_Types_Pkg), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, textMessage_ID), &_Type_DMI_TextMessage_ID_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 7 */ { MAP_FIELD, ".x_text", NULL, sizeof(DMI_TEXT_DMI_Types_Pkg), offsetof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg, x_text), &_Type_DMI_TEXT_DMI_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 5}
};
static const MappingScope scope_55 = {
  "DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_55_entries, 8,
};

/* DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_54_entries[9] = {
  /* 0 */ { MAP_FIELD, ".airTightSystem", NULL, sizeof(DMI_airtightSystem_T_DMI_Types_Pkg), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, airTightSystem), &_Type_DMI_airtightSystem_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_109, 1, 7},
  /* 1 */ { MAP_FIELD, ".brakeModel", NULL, sizeof(DMI_brakeModel_id_T_DMI_Types_Pkg), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, brakeModel), &_Type_DMI_brakeModel_id_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_109, 1, 4},
  /* 2 */ { MAP_FIELD, ".mAxleLoad", NULL, sizeof(M_AXLELOADCAT), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, mAxleLoad), &_Type_M_AXLELOADCAT_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".mLoadingGauge", NULL, sizeof(DMI_loadingGauge_T_DMI_Types_Pkg), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, mLoadingGauge), &_Type_DMI_loadingGauge_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_109, 1, 8},
  /* 4 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".trainID", NULL, sizeof(DMI_train_id_T_DMI_Types_Pkg), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, trainID), &_Type_DMI_train_id_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_32, 1, 2},
  /* 6 */ { MAP_FIELD, ".trainLength", NULL, sizeof(DMI_train_length_T_DMI_Types_Pkg), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, trainLength), &_Type_DMI_train_length_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_33, 1, 3},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".vmax", NULL, sizeof(DMI_vMax_id_T_DMI_Types_Pkg), offsetof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg, vmax), &_Type_DMI_vMax_id_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_109, 1, 5}
};
static const MappingScope scope_54 = {
  "DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_54_entries, 9,
};

/* DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_53_entries[3] = {
  /* 0 */ { MAP_FIELD, ".entry_request", NULL, sizeof(DMI_List_Entry_Request_T_DMI_Types_Pkg), offsetof(DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg, entry_request), &_Type_DMI_List_Entry_Request_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_53 = {
  "DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_53_entries, 3,
};

/* DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_52_entries[3] = {
  /* 0 */ { MAP_FIELD, ".available_menu", NULL, sizeof(DMI_Available_Menu_T_DMI_Types_Pkg), offsetof(DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg, available_menu), &_Type_DMI_Available_Menu_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_31, 1, 2},
  /* 1 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_52 = {
  "DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_52_entries, 3,
};

/* DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */
static const MappingEntry scope_51_entries[23] = {
  /* 0 */ { MAP_FIELD, ".distanceIndicationPoint", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, distanceIndicationPoint), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_FIELD, ".distance_KP_Balise", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, distance_KP_Balise), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 2 */ { MAP_FIELD, ".distance_to_TSA", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, distance_to_TSA), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 20},
  /* 3 */ { MAP_FIELD, ".level", NULL, sizeof(DMI_level_T_DMI_Types_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, level), &_Type_DMI_level_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_30, 1, 11},
  /* 4 */ { MAP_FIELD, ".location_KP_Balise_Track", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, location_KP_Balise_Track), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 5 */ { MAP_FIELD, ".location_LOA", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, location_LOA), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 6 */ { MAP_FIELD, ".location_brake_curve_starting_point", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, location_brake_curve_starting_point), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_FIELD, ".location_brake_target", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, location_brake_target), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".location_front_train", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, location_front_train), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_FIELD, ".m_warning", NULL, sizeof(M_SupervisionDisplay_T_DMI_Types_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, m_warning), &_Type_M_SupervisionDisplay_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_FIELD, ".nid_c_valid", NULL, sizeof(kcg_bool), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, nid_c_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_FIELD, ".radioConnectionStatus", NULL, sizeof(connectionStatusRadioUnit_T_API_RadioCommunication_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, radioConnectionStatus), &_Type_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_Utils, NULL, NULL, NULL, 1, 21},
  /* 14 */ { MAP_FIELD, ".sup_status", NULL, sizeof(M_SUPERVISION_STATUS_DMI_Types_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, sup_status), &_Type_M_SUPERVISION_STATUS_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_FIELD, ".system_clock", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, system_clock), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 16 */ { MAP_FIELD, ".v_LOA", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, v_LOA), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_FIELD, ".v_intervention", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, v_intervention), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 18 */ { MAP_FIELD, ".v_permitted", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, v_permitted), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 19 */ { MAP_FIELD, ".v_release", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, v_release), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 20 */ { MAP_FIELD, ".v_target", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, v_target), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 21 */ { MAP_FIELD, ".v_train", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, v_train), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 22 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_51 = {
  "DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg",
  scope_51_entries, 23,
};

/* DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */
static const MappingEntry scope_50_entries[3] = {
  /* 0 */ { MAP_FIELD, ".level", NULL, sizeof(DMI_level_T_DMI_Types_Pkg), offsetof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg, level), &_Type_DMI_level_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_30, 1, 2},
  /* 1 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_50 = {
  "DMI_Level_Data_T_DMI_Messages_Bothways_Pkg",
  scope_50_entries, 3,
};

/* DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */
static const MappingEntry scope_49_entries[3] = {
  /* 0 */ { MAP_FIELD, ".adhesionFactor", NULL, sizeof(M_ADHESION), offsetof(DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg, adhesionFactor), &_Type_M_ADHESION_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_49 = {
  "DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg",
  scope_49_entries, 3,
};

/* DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */
static const MappingEntry scope_48_entries[9] = {
  /* 0 */ { MAP_FIELD, ".l_train", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, l_train), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".m_airTight", NULL, sizeof(M_AIRTIGHT), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, m_airTight), &_Type_M_AIRTIGHT_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".m_axleLoad", NULL, sizeof(M_AXLELOADCAT), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, m_axleLoad), &_Type_M_AXLELOADCAT_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".m_brakeperct", NULL, sizeof(M_BRAKEPERCT_DMI_Types_Pkg), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, m_brakeperct), &_Type_M_BRAKEPERCT_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_loadingGauge", NULL, sizeof(M_LOADINGGAUGE), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, m_loadingGauge), &_Type_M_LOADINGGAUGE_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".trainCategory", NULL, sizeof(NC_TRAIN), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, trainCategory), &_Type_NC_TRAIN_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".v_maxTrain", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, v_maxTrain), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_48 = {
  "DMI_Train_Data_T_DMI_Messages_Bothways_Pkg",
  scope_48_entries, 9,
};

/* DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */
static const MappingEntry scope_47_entries[3] = {
  /* 0 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".trainRunningNumber", NULL, sizeof(NID_OPERATIONAL), offsetof(DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg, trainRunningNumber), &_Type_NID_OPERATIONAL_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_47 = {
  "DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg",
  scope_47_entries, 3,
};

/* driverIdentifier_T_DMI_Messages_Bothways_Pkg */
static const MappingEntry scope_46_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_9, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_46 = {
  "driverIdentifier_T_DMI_Messages_Bothways_Pkg",
  scope_46_entries, 1,
};

/* DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */
static const MappingEntry scope_45_entries[3] = {
  /* 0 */ { MAP_FIELD, ".driverIdentifier", NULL, sizeof(driverIdentifier_T_DMI_Messages_Bothways_Pkg), offsetof(DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg, driverIdentifier), &_Type_driverIdentifier_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_46, 1, 2},
  /* 1 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_45 = {
  "DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg",
  scope_45_entries, 3,
};

/* DMI_level_array_T_DMI_Types_Pkg */
static const MappingEntry scope_44_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(DMI_level_T_DMI_Types_Pkg), 0, &_Type_DMI_level_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_30, 1, 0}
};
static const MappingScope scope_44 = {
  "DMI_level_array_T_DMI_Types_Pkg",
  scope_44_entries, 1,
};

/* DMI_LevelList_T_DMI_Types_Pkg */
static const MappingEntry scope_43_entries[2] = {
  /* 0 */ { MAP_FIELD, ".levelList", NULL, sizeof(DMI_level_array_T_DMI_Types_Pkg), offsetof(DMI_LevelList_T_DMI_Types_Pkg, levelList), &_Type_DMI_level_array_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_44, 1, 1},
  /* 1 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int), offsetof(DMI_LevelList_T_DMI_Types_Pkg, number), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_43 = {
  "DMI_LevelList_T_DMI_Types_Pkg",
  scope_43_entries, 2,
};

/* DMI_trackConditionElement_T_DMI_Types_Pkg */
static const MappingEntry scope_42_entries[2] = {
  /* 0 */ { MAP_FIELD, ".d_trackcond", NULL, sizeof(D_TRACKCOND), offsetof(DMI_trackConditionElement_T_DMI_Types_Pkg, d_trackcond), &_Type_D_TRACKCOND_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".m_trackcond", NULL, sizeof(M_TRACKCOND), offsetof(DMI_trackConditionElement_T_DMI_Types_Pkg, m_trackcond), &_Type_M_TRACKCOND_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_42 = {
  "DMI_trackConditionElement_T_DMI_Types_Pkg",
  scope_42_entries, 2,
};

/* DMI_trackConditionArray_T_DMI_Types_Pkg */
static const MappingEntry scope_41_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(DMI_trackConditionElement_T_DMI_Types_Pkg), 0, &_Type_DMI_trackConditionElement_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 0}
};
static const MappingScope scope_41 = {
  "DMI_trackConditionArray_T_DMI_Types_Pkg",
  scope_41_entries, 1,
};

/* DMI_trackCondition_T_DMI_Types_Pkg */
static const MappingEntry scope_40_entries[2] = {
  /* 0 */ { MAP_FIELD, ".nIter", NULL, sizeof(kcg_int), offsetof(DMI_trackCondition_T_DMI_Types_Pkg, nIter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".trackCondition", NULL, sizeof(DMI_trackConditionArray_T_DMI_Types_Pkg), offsetof(DMI_trackCondition_T_DMI_Types_Pkg, trackCondition), &_Type_DMI_trackConditionArray_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 1}
};
static const MappingScope scope_40 = {
  "DMI_trackCondition_T_DMI_Types_Pkg",
  scope_40_entries, 2,
};

/* DMI_gradientProfileElement_T_DMI_Types_Pkg */
static const MappingEntry scope_39_entries[4] = {
  /* 0 */ { MAP_FIELD, ".begin_section", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_gradientProfileElement_T_DMI_Types_Pkg, begin_section), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".end_section", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_gradientProfileElement_T_DMI_Types_Pkg, end_section), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".gradient", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_gradientProfileElement_T_DMI_Types_Pkg, gradient), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_gradientProfileElement_T_DMI_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_39 = {
  "DMI_gradientProfileElement_T_DMI_Types_Pkg",
  scope_39_entries, 4,
};

/* DMI_gradientProfileArray_T_DMI_Types_Pkg */
static const MappingEntry scope_38_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(DMI_gradientProfileElement_T_DMI_Types_Pkg), 0, &_Type_DMI_gradientProfileElement_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 0}
};
static const MappingScope scope_38 = {
  "DMI_gradientProfileArray_T_DMI_Types_Pkg",
  scope_38_entries, 1,
};

/* DMI_gradientProfile_T_DMI_Types_Pkg */
static const MappingEntry scope_37_entries[2] = {
  /* 0 */ { MAP_FIELD, ".gradientProfiles", NULL, sizeof(DMI_gradientProfileArray_T_DMI_Types_Pkg), offsetof(DMI_gradientProfile_T_DMI_Types_Pkg, gradientProfiles), &_Type_DMI_gradientProfileArray_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_38, 1, 1},
  /* 1 */ { MAP_FIELD, ".profileChanged", NULL, sizeof(kcg_bool), offsetof(DMI_gradientProfile_T_DMI_Types_Pkg, profileChanged), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_37 = {
  "DMI_gradientProfile_T_DMI_Types_Pkg",
  scope_37_entries, 2,
};

/* DMI_speedProfileElement_T_DMI_Types_Pkg */
static const MappingEntry scope_36_entries[4] = {
  /* 0 */ { MAP_FIELD, ".Loc_Abs", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_speedProfileElement_T_DMI_Types_Pkg, Loc_Abs), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_speedProfileElement_T_DMI_Types_Pkg, Loc_LRBG), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".MRS", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_speedProfileElement_T_DMI_Types_Pkg, MRS), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_speedProfileElement_T_DMI_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_36 = {
  "DMI_speedProfileElement_T_DMI_Types_Pkg",
  scope_36_entries, 4,
};

/* DMI_SpeedProfileArray_T_DMI_Types_Pkg */
static const MappingEntry scope_35_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(DMI_speedProfileElement_T_DMI_Types_Pkg), 0, &_Type_DMI_speedProfileElement_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_36, 1, 0}
};
static const MappingScope scope_35 = {
  "DMI_SpeedProfileArray_T_DMI_Types_Pkg",
  scope_35_entries, 1,
};

/* DMI_speedProfile_T_DMI_Types_Pkg */
static const MappingEntry scope_34_entries[2] = {
  /* 0 */ { MAP_FIELD, ".profileChanged", NULL, sizeof(kcg_bool), offsetof(DMI_speedProfile_T_DMI_Types_Pkg, profileChanged), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".speedProfiles", NULL, sizeof(DMI_SpeedProfileArray_T_DMI_Types_Pkg), offsetof(DMI_speedProfile_T_DMI_Types_Pkg, speedProfiles), &_Type_DMI_SpeedProfileArray_T_DMI_Types_Pkg_Utils, NULL, NULL, &scope_35, 1, 1}
};
static const MappingScope scope_34 = {
  "DMI_speedProfile_T_DMI_Types_Pkg",
  scope_34_entries, 2,
};

/* DMI_train_length_T_DMI_Types_Pkg */
static const MappingEntry scope_33_entries[5] = {
  /* 0 */ { MAP_FIELD, ".dig1", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_length_T_DMI_Types_Pkg, dig1), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".dig2", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_length_T_DMI_Types_Pkg, dig2), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".dig3", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_length_T_DMI_Types_Pkg, dig3), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".dig4", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_length_T_DMI_Types_Pkg, dig4), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int), offsetof(DMI_train_length_T_DMI_Types_Pkg, number), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_33 = {
  "DMI_train_length_T_DMI_Types_Pkg",
  scope_33_entries, 5,
};

/* DMI_train_id_T_DMI_Types_Pkg */
static const MappingEntry scope_32_entries[6] = {
  /* 0 */ { MAP_FIELD, ".dig1", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_id_T_DMI_Types_Pkg, dig1), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".dig2", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_id_T_DMI_Types_Pkg, dig2), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".dig3", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_id_T_DMI_Types_Pkg, dig3), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".dig4", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_id_T_DMI_Types_Pkg, dig4), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".dig5", NULL, sizeof(BCD_DMI_Types_Pkg), offsetof(DMI_train_id_T_DMI_Types_Pkg, dig5), &_Type_BCD_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int), offsetof(DMI_train_id_T_DMI_Types_Pkg, number), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_32 = {
  "DMI_train_id_T_DMI_Types_Pkg",
  scope_32_entries, 6,
};

/* DMI_Available_Menu_T_DMI_Types_Pkg */
static const MappingEntry scope_31_entries[30] = {
  /* 0 */ { MAP_FIELD, ".Button_switch_for_train_data", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Button_switch_for_train_data), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 1 */ { MAP_FIELD, ".Fix_train_data_entry", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Fix_train_data_entry), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 2 */ { MAP_FIELD, ".Menu_button_ETCS_level", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_ETCS_level), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".Menu_button_Remove_VBC", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_Remove_VBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 4 */ { MAP_FIELD, ".Menu_button_Set_VBC", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_Set_VBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 5 */ { MAP_FIELD, ".Menu_button_adhesion_factor", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_adhesion_factor), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 6 */ { MAP_FIELD, ".Menu_button_contact_last_RBC", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_contact_last_RBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 7 */ { MAP_FIELD, ".Menu_button_driver_ID", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_driver_ID), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_FIELD, ".Menu_button_enter_RBC_data", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_enter_RBC_data), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 9 */ { MAP_FIELD, ".Menu_button_exit_non_leading", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_exit_non_leading), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_FIELD, ".Menu_button_isolation", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_isolation), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 11 */ { MAP_FIELD, ".Menu_button_language_selection", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_language_selection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_FIELD, ".Menu_button_luminance", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_luminance), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 13 */ { MAP_FIELD, ".Menu_button_maintain_shunting", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_maintain_shunting), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 14 */ { MAP_FIELD, ".Menu_button_non_leading", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_non_leading), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_FIELD, ".Menu_button_override_EOA", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_override_EOA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_FIELD, ".Menu_button_override_route_suitability", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_override_route_suitability), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_FIELD, ".Menu_button_radio_network_ID", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_radio_network_ID), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 18 */ { MAP_FIELD, ".Menu_button_shunting", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_shunting), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 19 */ { MAP_FIELD, ".Menu_button_shunting_exit", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_shunting_exit), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_FIELD, ".Menu_button_staff_responsible_data", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_staff_responsible_data), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 21 */ { MAP_FIELD, ".Menu_button_start_of_mission", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_start_of_mission), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 22 */ { MAP_FIELD, ".Menu_button_system_version", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_system_version), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 23 */ { MAP_FIELD, ".Menu_button_train_data_modification", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_train_data_modification), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 24 */ { MAP_FIELD, ".Menu_button_train_data_view", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_train_data_view), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 25 */ { MAP_FIELD, ".Menu_button_train_integrity", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_train_integrity), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 26 */ { MAP_FIELD, ".Menu_button_train_running_number", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_train_running_number), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 27 */ { MAP_FIELD, ".Menu_button_use_short_number", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_use_short_number), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 28 */ { MAP_FIELD, ".Menu_button_volume", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Menu_button_volume), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 29 */ { MAP_FIELD, ".Show_hourglass", NULL, sizeof(kcg_bool), offsetof(DMI_Available_Menu_T_DMI_Types_Pkg, Show_hourglass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21}
};
static const MappingScope scope_31 = {
  "DMI_Available_Menu_T_DMI_Types_Pkg",
  scope_31_entries, 30,
};

/* DMI_level_T_DMI_Types_Pkg */
static const MappingEntry scope_30_entries[2] = {
  /* 0 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(DMI_level_T_DMI_Types_Pkg, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".nid_stm", NULL, sizeof(NID_STM_DMI_Types_Pkg), offsetof(DMI_level_T_DMI_Types_Pkg, nid_stm), &_Type_NID_STM_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_30 = {
  "DMI_level_T_DMI_Types_Pkg",
  scope_30_entries, 2,
};

/* DMI_TEXT_DMI_Types_Pkg */
static const MappingEntry scope_29_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_255, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_29 = {
  "DMI_TEXT_DMI_Types_Pkg",
  scope_29_entries, 1,
};

/* OdometrySpeeds_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_28_entries[4] = {
  /* 0 */ { MAP_FIELD, ".v_lower", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_lower), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".v_rawNominal", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_rawNominal), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".v_safeNominal", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_safeNominal), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".v_upper", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_upper), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_28 = {
  "OdometrySpeeds_T_Obu_BasicTypes_Pkg",
  scope_28_entries, 4,
};

/* OdometryLocations_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_27_entries[3] = {
  /* 0 */ { MAP_FIELD, ".o_max", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_27 = {
  "OdometryLocations_T_Obu_BasicTypes_Pkg",
  scope_27_entries, 3,
};

/* odometry_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_26_entries[7] = {
  /* 0 */ { MAP_FIELD, ".acceleration", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, acceleration), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".motionDirection", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".motionState", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".odo", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, odo), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_27, 1, 2},
  /* 4 */ { MAP_FIELD, ".speed", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, speed), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_28, 1, 3},
  /* 5 */ { MAP_FIELD, ".timestamp", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, timestamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(odometry_T_Obu_BasicTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_26 = {
  "odometry_T_Obu_BasicTypes_Pkg",
  scope_26_entries, 7,
};

/* LocWithInAcc_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_25_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_max", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, d_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, d_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nominal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_25 = {
  "LocWithInAcc_T_Obu_BasicTypes_Pkg",
  scope_25_entries, 3,
};

/* DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
static const MappingEntry scope_24_entries[3] = {
  /* 0 */ { MAP_FIELD, ".DMI_nid_icon_identifier", NULL, sizeof(kcg_int), offsetof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, DMI_nid_icon_identifier), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_24 = {
  "DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg",
  scope_24_entries, 3,
};

/* DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
static const MappingEntry scope_23_entries[3] = {
  /* 0 */ { MAP_FIELD, ".acknowledged", NULL, sizeof(kcg_bool), offsetof(DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, acknowledged), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg",
  scope_23_entries, 3,
};

/* DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
static const MappingEntry scope_22_entries[4] = {
  /* 0 */ { MAP_FIELD, ".acknowledged", NULL, sizeof(kcg_bool), offsetof(DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, acknowledged), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".textMessage_ID", NULL, sizeof(DMI_TextMessage_ID_T_DMI_Types_Pkg), offsetof(DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, textMessage_ID), &_Type_DMI_TextMessage_ID_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg",
  scope_22_entries, 4,
};

/* DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */
static const MappingEntry scope_21_entries[2] = {
  /* 0 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg",
  scope_21_entries, 2,
};

/* DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */
static const MappingEntry scope_20_entries[3] = {
  /* 0 */ { MAP_FIELD, ".m_request", NULL, sizeof(DMI_Request_T_DMI_Types_Pkg), offsetof(DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg, m_request), &_Type_DMI_Request_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg",
  scope_20_entries, 3,
};

/* DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */
static const MappingEntry scope_19_entries[7] = {
  /* 0 */ { MAP_FIELD, ".Cabin_Identifier", NULL, sizeof(DMI_Cabin_Identifier_T_DMI_Types_Pkg), offsetof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg, Cabin_Identifier), &_Type_DMI_Cabin_Identifier_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".DMI_Identifier", NULL, sizeof(DMI_DMI_Identifier_T_DMI_Types_Pkg), offsetof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg, DMI_Identifier), &_Type_DMI_DMI_Identifier_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".DMI_name", NULL, sizeof(DMI_TEXT_DMI_Types_Pkg), offsetof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg, DMI_name), &_Type_DMI_TEXT_DMI_Types_Pkg_Utils, NULL, NULL, &scope_29, 1, 5},
  /* 3 */ { MAP_FIELD, ".l_name", NULL, sizeof(L_TEXT), offsetof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg, l_name), &_Type_L_TEXT_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_19 = {
  "DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg",
  scope_19_entries, 7,
};

/* DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */
static const MappingEntry scope_18_entries[4] = {
  /* 0 */ { MAP_FIELD, ".nAlive", NULL, sizeof(kcg_int), offsetof(DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg, nAlive), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".statusSet", NULL, sizeof(DMI_StatusSet_T_DMI_Types_Pkg), offsetof(DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg, statusSet), &_Type_DMI_StatusSet_T_DMI_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_18 = {
  "DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg",
  scope_18_entries, 4,
};

/* EVC_to_DMI_Message_int_T_API_DMI_Pkg */
static const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_999, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_17 = {
  "EVC_to_DMI_Message_int_T_API_DMI_Pkg",
  scope_17_entries, 1,
};

/* DMI_to_EVC_Message_int_T_API_DMI_Pkg */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_311, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "DMI_to_EVC_Message_int_T_API_DMI_Pkg",
  scope_16_entries, 1,
};

/* EVC_to_DMI_Message_T_API_DMI_Pkg */
static const MappingEntry scope_15_entries[17] = {
  /* 0 */ { MAP_FIELD, ".EVC_levelData", NULL, sizeof(DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, EVC_levelData), &_Type_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_60, 1, 10},
  /* 1 */ { MAP_FIELD, ".EVC_radioNetData", NULL, sizeof(DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, EVC_radioNetData), &_Type_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_61, 1, 11},
  /* 2 */ { MAP_FIELD, ".adhesionFactor", NULL, sizeof(DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, adhesionFactor), &_Type_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_49, 1, 15},
  /* 3 */ { MAP_FIELD, ".displayControl", NULL, sizeof(DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, displayControl), &_Type_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_59, 1, 9},
  /* 4 */ { MAP_FIELD, ".driverIdentifier", NULL, sizeof(DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, driverIdentifier), &_Type_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_45, 1, 12},
  /* 5 */ { MAP_FIELD, ".dynamic", NULL, sizeof(DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, dynamic), &_Type_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_51, 1, 1},
  /* 6 */ { MAP_FIELD, ".entry_request", NULL, sizeof(DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, entry_request), &_Type_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_53, 1, 3},
  /* 7 */ { MAP_FIELD, ".evc_coded_train_data", NULL, sizeof(DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, evc_coded_train_data), &_Type_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_54, 1, 4},
  /* 8 */ { MAP_FIELD, ".iconRequest", NULL, sizeof(DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, iconRequest), &_Type_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_62, 1, 16},
  /* 9 */ { MAP_FIELD, ".identifierRequest", NULL, sizeof(DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, identifierRequest), &_Type_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_57, 1, 7},
  /* 10 */ { MAP_FIELD, ".menu_request", NULL, sizeof(DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, menu_request), &_Type_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_52, 1, 2},
  /* 11 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 12 */ { MAP_FIELD, ".systemVersion", NULL, sizeof(DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, systemVersion), &_Type_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_58, 1, 8},
  /* 13 */ { MAP_FIELD, ".textMessage", NULL, sizeof(DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, textMessage), &_Type_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_55, 1, 5},
  /* 14 */ { MAP_FIELD, ".trackDescription", NULL, sizeof(DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, trackDescription), &_Type_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_Utils, NULL, NULL, &scope_56, 1, 6},
  /* 15 */ { MAP_FIELD, ".trainData", NULL, sizeof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, trainData), &_Type_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_48, 1, 14},
  /* 16 */ { MAP_FIELD, ".trainRunningNumber", NULL, sizeof(DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg), offsetof(EVC_to_DMI_Message_T_API_DMI_Pkg, trainRunningNumber), &_Type_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_47, 1, 13}
};
static const MappingScope scope_15 = {
  "EVC_to_DMI_Message_T_API_DMI_Pkg",
  scope_15_entries, 17,
};

/* DMI_to_EVC_Message_T_API_DMI_Pkg */
static const MappingEntry scope_14_entries[13] = {
  /* 0 */ { MAP_FIELD, ".adhesionFactor", NULL, sizeof(DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, adhesionFactor), &_Type_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_49, 1, 10},
  /* 1 */ { MAP_FIELD, ".driverIdentifier", NULL, sizeof(DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, driverIdentifier), &_Type_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_45, 1, 4},
  /* 2 */ { MAP_FIELD, ".driverRequest", NULL, sizeof(DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, driverRequest), &_Type_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_Utils, NULL, NULL, &scope_20, 1, 3},
  /* 3 */ { MAP_FIELD, ".iconAck", NULL, sizeof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, iconAck), &_Type_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_Utils, NULL, NULL, &scope_24, 1, 11},
  /* 4 */ { MAP_FIELD, ".identifier", NULL, sizeof(DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, identifier), &_Type_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_Utils, NULL, NULL, &scope_19, 1, 2},
  /* 5 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_FIELD, ".radioNetData", NULL, sizeof(DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, radioNetData), &_Type_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_Utils, NULL, NULL, &scope_21, 1, 6},
  /* 7 */ { MAP_FIELD, ".selectedLevel", NULL, sizeof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, selectedLevel), &_Type_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_50, 1, 12},
  /* 8 */ { MAP_FIELD, ".status", NULL, sizeof(DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, status), &_Type_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_Utils, NULL, NULL, &scope_18, 1, 1},
  /* 9 */ { MAP_FIELD, ".textMessageAck", NULL, sizeof(DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, textMessageAck), &_Type_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_Utils, NULL, NULL, &scope_22, 1, 7},
  /* 10 */ { MAP_FIELD, ".trainData", NULL, sizeof(DMI_Train_Data_T_DMI_Messages_Bothways_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, trainData), &_Type_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_48, 1, 9},
  /* 11 */ { MAP_FIELD, ".trainDataAck", NULL, sizeof(DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, trainDataAck), &_Type_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_Utils, NULL, NULL, &scope_23, 1, 8},
  /* 12 */ { MAP_FIELD, ".trainRunningNumber", NULL, sizeof(DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg), offsetof(DMI_to_EVC_Message_T_API_DMI_Pkg, trainRunningNumber), &_Type_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_Utils, NULL, NULL, &scope_47, 1, 5}
};
static const MappingScope scope_14 = {
  "DMI_to_EVC_Message_T_API_DMI_Pkg",
  scope_14_entries, 13,
};

/* EVC_to_GUI_EnvSim */
static const MappingEntry scope_13_entries[11] = {
  /* 0 */ { MAP_FIELD, ".afbActive", NULL, sizeof(kcg_bool), offsetof(EVC_to_GUI_EnvSim, afbActive), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_FIELD, ".currentPositionInCm", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(EVC_to_GUI_EnvSim, currentPositionInCm), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".currentPositionInM", NULL, sizeof(kcg_real), offsetof(EVC_to_GUI_EnvSim, currentPositionInM), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".currentVelocityInKmH", NULL, sizeof(kcg_real), offsetof(EVC_to_GUI_EnvSim, currentVelocityInKmH), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".emergencyBrake", NULL, sizeof(kcg_bool), offsetof(EVC_to_GUI_EnvSim, emergencyBrake), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_FIELD, ".serviceBrake", NULL, sizeof(kcg_bool), offsetof(EVC_to_GUI_EnvSim, serviceBrake), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(EVC_to_GUI_EnvSim, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".tractionCutOff", NULL, sizeof(kcg_bool), offsetof(EVC_to_GUI_EnvSim, tractionCutOff), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".trainPositionDeltaMax", NULL, sizeof(kcg_real), offsetof(EVC_to_GUI_EnvSim, trainPositionDeltaMax), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".trainPositionDeltaMin", NULL, sizeof(kcg_real), offsetof(EVC_to_GUI_EnvSim, trainPositionDeltaMin), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_FIELD, ".trainPositionNominal", NULL, sizeof(kcg_real), offsetof(EVC_to_GUI_EnvSim, trainPositionNominal), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_13 = {
  "EVC_to_GUI_EnvSim",
  scope_13_entries, 11,
};

/* GUI_to_EVC_EnvSim */
static const MappingEntry scope_12_entries[10] = {
  /* 0 */ { MAP_FIELD, ".brake", NULL, sizeof(kcg_real), offsetof(GUI_to_EVC_EnvSim, brake), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".initialPosition", NULL, sizeof(kcg_real), offsetof(GUI_to_EVC_EnvSim, initialPosition), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".initialVelocity", NULL, sizeof(kcg_real), offsetof(GUI_to_EVC_EnvSim, initialVelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".level", NULL, sizeof(kcg_int), offsetof(GUI_to_EVC_EnvSim, level), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".mobileHWStatus", NULL, sizeof(kcg_int), offsetof(GUI_to_EVC_EnvSim, mobileHWStatus), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".mode", NULL, sizeof(kcg_int), offsetof(GUI_to_EVC_EnvSim, mode), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".openDesk", NULL, sizeof(kcg_bool), offsetof(GUI_to_EVC_EnvSim, openDesk), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".reset", NULL, sizeof(kcg_bool), offsetof(GUI_to_EVC_EnvSim, reset), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".targetSpeed", NULL, sizeof(kcg_real), offsetof(GUI_to_EVC_EnvSim, targetSpeed), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".traction", NULL, sizeof(kcg_real), offsetof(GUI_to_EVC_EnvSim, traction), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_12 = {
  "GUI_to_EVC_EnvSim",
  scope_12_entries, 10,
};

/* EnvSim::InjectRadioMessage/ InjectRadioMessage_EnvSim */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "msgOut", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_InjectRadioMessage_EnvSim, msgOut), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_76, 1, 0}
};
static const MappingScope scope_11 = {
  "EnvSim::InjectRadioMessage/ InjectRadioMessage_EnvSim",
  scope_11_entries, 1,
};

/* EnvSim::ProbeEVC/ ProbeEVC_EnvSim */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "dummyOut", NULL, sizeof(kcg_bool), offsetof(outC_ProbeEVC_EnvSim, dummyOut), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "EnvSim::ProbeEVC/ ProbeEVC_EnvSim",
  scope_10_entries, 1,
};

/* EnvSim::ProbeSDM/ ProbeSDM_EnvSim */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "dummyOut", NULL, sizeof(kcg_bool), offsetof(outC_ProbeSDM_EnvSim, dummyOut), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_9 = {
  "EnvSim::ProbeSDM/ ProbeSDM_EnvSim",
  scope_9_entries, 1,
};

/* EnvSim::ProbeTracksideInput/ ProbeTracksideInput_EnvSim */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "dummyOut", NULL, sizeof(kcg_bool), offsetof(outC_ProbeTracksideInput_EnvSim, dummyOut), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_8 = {
  "EnvSim::ProbeTracksideInput/ ProbeTracksideInput_EnvSim",
  scope_8_entries, 1,
};

/* EnvSim::RemoteEVCBus/ RemoteEVCBus_EnvSim */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "evcToDMI", NULL, sizeof(EVC_to_DMI_Message_int_T_API_DMI_Pkg), offsetof(outC_RemoteEVCBus_EnvSim, evcToDMI), &_Type_EVC_to_DMI_Message_int_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_17, 1, 0},
  /* 1 */ { MAP_OUTPUT, "run", NULL, sizeof(kcg_bool), offsetof(outC_RemoteEVCBus_EnvSim, run), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "tiuToDMI", NULL, sizeof(TIU_Input_msg_API_TIU_Pkg), offsetof(outC_RemoteEVCBus_EnvSim, tiuToDMI), &_Type_TIU_Input_msg_API_TIU_Pkg_Utils, NULL, NULL, &scope_63, 1, 1}
};
static const MappingScope scope_7 = {
  "EnvSim::RemoteEVCBus/ RemoteEVCBus_EnvSim",
  scope_7_entries, 3,
};

/* EnvSim::RemoteDMIBus/ RemoteDMIBus_EnvSim */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "dmiToEVC", NULL, sizeof(DMI_to_EVC_Message_int_T_API_DMI_Pkg), offsetof(outC_RemoteDMIBus_EnvSim, dmiToEVC), &_Type_DMI_to_EVC_Message_int_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_16, 1, 0}
};
static const MappingScope scope_6 = {
  "EnvSim::RemoteDMIBus/ RemoteDMIBus_EnvSim",
  scope_6_entries, 1,
};

/* EnvSim::RemoteGUI/ RemoteGUI_EnvSim */
static const MappingEntry scope_5_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "guiToEVC", NULL, sizeof(GUI_to_EVC_EnvSim), offsetof(outC_RemoteGUI_EnvSim, guiToEVC), &_Type_GUI_to_EVC_EnvSim_Utils, NULL, NULL, &scope_12, 1, 0}
};
static const MappingScope scope_5 = {
  "EnvSim::RemoteGUI/ RemoteGUI_EnvSim",
  scope_5_entries, 1,
};

/* EnvSim::RemoteEVC/ RemoteEVC_EnvSim */
static const MappingEntry scope_4_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "evcToDMI", NULL, sizeof(EVC_to_DMI_Message_T_API_DMI_Pkg), offsetof(outC_RemoteEVC_EnvSim, evcToDMI), &_Type_EVC_to_DMI_Message_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_15, 1, 0},
  /* 1 */ { MAP_OUTPUT, "run", NULL, sizeof(kcg_bool), offsetof(outC_RemoteEVC_EnvSim, run), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "tiuToDMI", NULL, sizeof(TIU_Input_msg_API_TIU_Pkg), offsetof(outC_RemoteEVC_EnvSim, tiuToDMI), &_Type_TIU_Input_msg_API_TIU_Pkg_Utils, NULL, NULL, &scope_63, 1, 1}
};
static const MappingScope scope_4 = {
  "EnvSim::RemoteEVC/ RemoteEVC_EnvSim",
  scope_4_entries, 3,
};

/* EnvSim::ScriptedTrack/ ScriptedTrack_EnvSim */
static const MappingEntry scope_3_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "baliseMessage", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_ScriptedTrack_EnvSim, baliseMessage), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_74, 1, 0},
  /* 1 */ { MAP_OUTPUT, "radioMessage", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_ScriptedTrack_EnvSim, radioMessage), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_76, 1, 1}
};
static const MappingScope scope_3 = {
  "EnvSim::ScriptedTrack/ ScriptedTrack_EnvSim",
  scope_3_entries, 2,
};

/* EnvSim::RemoteDMI/ RemoteDMI_EnvSim */
static const MappingEntry scope_2_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "dmiToEVC", NULL, sizeof(DMI_to_EVC_Message_T_API_DMI_Pkg), offsetof(outC_RemoteDMI_EnvSim, dmiToEVC), &_Type_DMI_to_EVC_Message_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_14, 1, 0}
};
static const MappingScope scope_2 = {
  "EnvSim::RemoteDMI/ RemoteDMI_EnvSim",
  scope_2_entries, 1,
};

/* EnvSim::Internal::GenAll/ GenAll_EnvSim_Internal */
static const MappingEntry scope_1_entries[44] = {
  /* 0 */ { MAP_INSTANCE, "EnvSim::InjectRadioMessage 1", NULL, sizeof(outC_InjectRadioMessage_EnvSim), (size_t)&outputs_ctx._9_Context_1, NULL, NULL, NULL, &scope_11, 1, 9},
  /* 1 */ { MAP_INSTANCE, "EnvSim::ProbeEVC 1", NULL, sizeof(outC_ProbeEVC_EnvSim), (size_t)&outputs_ctx._8_Context_1, NULL, NULL, NULL, &scope_10, 1, 8},
  /* 2 */ { MAP_INSTANCE, "EnvSim::ProbeSDM 1", NULL, sizeof(outC_ProbeSDM_EnvSim), (size_t)&outputs_ctx._7_Context_1, NULL, NULL, NULL, &scope_9, 1, 7},
  /* 3 */ { MAP_INSTANCE, "EnvSim::ProbeTracksideInput 1", NULL, sizeof(outC_ProbeTracksideInput_EnvSim), (size_t)&outputs_ctx._6_Context_1, NULL, NULL, NULL, &scope_8, 1, 6},
  /* 4 */ { MAP_INSTANCE, "EnvSim::RemoteDMI 1", NULL, sizeof(outC_RemoteDMI_EnvSim), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_INSTANCE, "EnvSim::RemoteDMIBus 1", NULL, sizeof(outC_RemoteDMIBus_EnvSim), (size_t)&outputs_ctx._4_Context_1, NULL, NULL, NULL, &scope_6, 1, 4},
  /* 6 */ { MAP_INSTANCE, "EnvSim::RemoteEVC 1", NULL, sizeof(outC_RemoteEVC_EnvSim), (size_t)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_4, 1, 2},
  /* 7 */ { MAP_INSTANCE, "EnvSim::RemoteEVCBus 1", NULL, sizeof(outC_RemoteEVCBus_EnvSim), (size_t)&outputs_ctx._5_Context_1, NULL, NULL, NULL, &scope_7, 1, 5},
  /* 8 */ { MAP_INSTANCE, "EnvSim::RemoteGUI 1", NULL, sizeof(outC_RemoteGUI_EnvSim), (size_t)&outputs_ctx._3_Context_1, NULL, NULL, NULL, &scope_5, 1, 3},
  /* 9 */ { MAP_INSTANCE, "EnvSim::ScriptedTrack 1", NULL, sizeof(outC_ScriptedTrack_EnvSim), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(DMI_to_EVC_Message_T_API_DMI_Pkg), (size_t)&outputs_ctx._L1, &_Type_DMI_to_EVC_Message_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_14, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(TIU_Input_msg_API_TIU_Pkg), (size_t)&outputs_ctx._L10, &_Type_TIU_Input_msg_API_TIU_Pkg_Utils, NULL, NULL, &scope_63, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(GUI_to_EVC_EnvSim), (size_t)&outputs_ctx._L11, &_Type_GUI_to_EVC_EnvSim_Utils, NULL, NULL, &scope_12, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(EVC_to_GUI_EnvSim), (size_t)&outputs_ctx._L12, &_Type_EVC_to_GUI_EnvSim_Utils, NULL, NULL, &scope_13, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L14", NULL, sizeof(DMI_to_EVC_Message_int_T_API_DMI_Pkg), (size_t)&outputs_ctx._L14, &_Type_DMI_to_EVC_Message_int_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_16, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L15", NULL, sizeof(TIU_Input_msg_API_TIU_Pkg), (size_t)&outputs_ctx._L15, &_Type_TIU_Input_msg_API_TIU_Pkg_Utils, NULL, NULL, &scope_63, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(EVC_to_DMI_Message_int_T_API_DMI_Pkg), (size_t)&outputs_ctx._L16, &_Type_EVC_to_DMI_Message_int_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_17, 1, 24},
  /* 18 */ { MAP_LOCAL, "_L17", NULL, sizeof(EVC_to_DMI_Message_int_T_API_DMI_Pkg), (size_t)&outputs_ctx._L17, &_Type_EVC_to_DMI_Message_int_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_17, 1, 27},
  /* 19 */ { MAP_LOCAL, "_L18", NULL, sizeof(TIU_Input_msg_API_TIU_Pkg), (size_t)&outputs_ctx._L18, &_Type_TIU_Input_msg_API_TIU_Pkg_Utils, NULL, NULL, &scope_63, 1, 26},
  /* 20 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedBaliseMessage_TM), (size_t)&outputs_ctx._L2, &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_74, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L20", NULL, sizeof(DMI_to_EVC_Message_int_T_API_DMI_Pkg), (size_t)&outputs_ctx._L20, &_Type_DMI_to_EVC_Message_int_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_16, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L22", NULL, sizeof(TargetCollection_T_TargetManagement_types), (size_t)&outputs_ctx._L22, &_Type_TargetCollection_T_TargetManagement_types_Utils, NULL, NULL, &scope_86, 1, 29},
  /* 24 */ { MAP_LOCAL, "_L23", NULL, sizeof(CurveCollection_T_CalcBrakingCurves_types), (size_t)&outputs_ctx._L23, &_Type_CurveCollection_T_CalcBrakingCurves_types_Utils, NULL, NULL, &scope_90, 1, 30},
  /* 25 */ { MAP_LOCAL, "_L24", NULL, sizeof(Target_T_TargetManagement_types), (size_t)&outputs_ctx._L24, &_Type_Target_T_TargetManagement_types_Utils, NULL, NULL, &scope_89, 1, 31},
  /* 26 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedBaliseMessage_TM), (size_t)&outputs_ctx._L25, &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_74, 1, 32},
  /* 27 */ { MAP_LOCAL, "_L26", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L26, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_76, 1, 33},
  /* 28 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L27, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L28, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L29", NULL, sizeof(M_TrainTrack_Message_T_TM_radio_messages), (size_t)&outputs_ctx._L29, &_Type_M_TrainTrack_Message_T_TM_radio_messages_Utils, NULL, NULL, &scope_83, 1, 36},
  /* 31 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L3, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_76, 1, 11},
  /* 32 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L30, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 33 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L31, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 34 */ { MAP_LOCAL, "_L32", NULL, sizeof(MSG_Errors_T_Common_Types_Pkg), (size_t)&outputs_ctx._L32, &_Type_MSG_Errors_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_82, 1, 39},
  /* 35 */ { MAP_LOCAL, "_L33", NULL, sizeof(positionErrors_T_TrainPosition_Types_Pck), (size_t)&outputs_ctx._L33, &_Type_positionErrors_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_98, 1, 40},
  /* 36 */ { MAP_LOCAL, "_L34", NULL, sizeof(morcStatus_T_RCM_Session_Types_Pkg), (size_t)&outputs_ctx._L34, &_Type_morcStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_101, 1, 41},
  /* 37 */ { MAP_LOCAL, "_L35", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L35, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_76, 1, 42},
  /* 38 */ { MAP_LOCAL, "_L36", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L36, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_76, 1, 43},
  /* 39 */ { MAP_LOCAL, "_L5", NULL, sizeof(EVC_to_DMI_Message_T_API_DMI_Pkg), (size_t)&outputs_ctx._L5, &_Type_EVC_to_DMI_Message_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_15, 1, 13},
  /* 40 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L6, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 41 */ { MAP_LOCAL, "_L7", NULL, sizeof(EVC_to_DMI_Message_T_API_DMI_Pkg), (size_t)&outputs_ctx._L7, &_Type_EVC_to_DMI_Message_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_15, 1, 15},
  /* 42 */ { MAP_LOCAL, "_L8", NULL, sizeof(DMI_to_EVC_Message_T_API_DMI_Pkg), (size_t)&outputs_ctx._L8, &_Type_DMI_to_EVC_Message_T_API_DMI_Pkg_Utils, NULL, NULL, &scope_14, 1, 16},
  /* 43 */ { MAP_LOCAL, "_L9", NULL, sizeof(TIU_Input_msg_API_TIU_Pkg), (size_t)&outputs_ctx._L9, &_Type_TIU_Input_msg_API_TIU_Pkg_Utils, NULL, NULL, &scope_63, 1, 17}
};
static const MappingScope scope_1 = {
  "EnvSim::Internal::GenAll/ GenAll_EnvSim_Internal",
  scope_1_entries, 44,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "EnvSim::Internal::GenAll", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

