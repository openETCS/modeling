/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_39;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_25;
static const MappingIterator iter_array_18;
static const MappingIterator iter_array_11;
static const MappingIterator iter_array_461;
static const MappingIterator iter_array_7;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_39 = { "array", 39, 39, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_25 = { "array", 25, 25, NULL};
static const MappingIterator iter_array_18 = { "array", 18, 18, NULL};
static const MappingIterator iter_array_11 = { "array", 11, 11, NULL};
static const MappingIterator iter_array_461 = { "array", 461, 461, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_192, 1);
MAP_DECL(scope_191, 1);
MAP_DECL(scope_190, 1);
MAP_DECL(scope_189, 1);
MAP_DECL(scope_188, 1);
MAP_DECL(scope_187, 1);
MAP_DECL(scope_186, 1);
MAP_DECL(scope_185, 1);
MAP_DECL(scope_184, 1);
MAP_DECL(scope_183, 6);
MAP_DECL(scope_182, 1);
MAP_DECL(scope_181, 8);
MAP_DECL(scope_180, 2);
MAP_DECL(scope_179, 6);
MAP_DECL(scope_178, 10);
MAP_DECL(scope_177, 5);
MAP_DECL(scope_176, 2);
MAP_DECL(scope_175, 1);
MAP_DECL(scope_174, 5);
MAP_DECL(scope_173, 1);
MAP_DECL(scope_172, 10);
MAP_DECL(scope_167, 15);
MAP_DECL(scope_166, 10);
MAP_DECL(scope_165, 9);
MAP_DECL(scope_164, 11);
MAP_DECL(scope_163, 11);
MAP_DECL(scope_162, 12);
MAP_DECL(scope_161, 26);
MAP_DECL(scope_160, 43);
MAP_DECL(scope_159, 17);
MAP_DECL(scope_158, 9);
MAP_DECL(scope_157, 5);
MAP_DECL(scope_156, 6);
MAP_DECL(scope_155, 15);
MAP_DECL(scope_154, 2);
MAP_DECL(scope_153, 2);
MAP_DECL(scope_152, 2);
MAP_DECL(scope_151, 2);
MAP_DECL(scope_150, 2);
MAP_DECL(scope_149, 2);
MAP_DECL(scope_148, 2);
MAP_DECL(scope_147, 2);
MAP_DECL(scope_146, 2);
MAP_DECL(scope_145, 2);
MAP_DECL(scope_144, 2);
MAP_DECL(scope_143, 2);
MAP_DECL(scope_142, 2);
MAP_DECL(scope_141, 2);
MAP_DECL(scope_140, 2);
MAP_DECL(scope_139, 2);
MAP_DECL(scope_138, 2);
MAP_DECL(scope_137, 2);
MAP_DECL(scope_136, 2);
MAP_DECL(scope_135, 2);
MAP_DECL(scope_134, 54);
MAP_DECL(scope_133, 2);
MAP_DECL(scope_132, 2);
MAP_DECL(scope_131, 2);
MAP_DECL(scope_130, 2);
MAP_DECL(scope_129, 2);
MAP_DECL(scope_128, 2);
MAP_DECL(scope_127, 2);
MAP_DECL(scope_126, 2);
MAP_DECL(scope_125, 2);
MAP_DECL(scope_124, 2);
MAP_DECL(scope_123, 2);
MAP_DECL(scope_122, 2);
MAP_DECL(scope_121, 2);
MAP_DECL(scope_120, 2);
MAP_DECL(scope_119, 2);
MAP_DECL(scope_118, 2);
MAP_DECL(scope_117, 2);
MAP_DECL(scope_116, 2);
MAP_DECL(scope_115, 2);
MAP_DECL(scope_114, 54);
MAP_DECL(scope_113, 24);
MAP_DECL(scope_112, 13);
MAP_DECL(scope_111, 13);
MAP_DECL(scope_110, 13);
MAP_DECL(scope_109, 13);
MAP_DECL(scope_108, 13);
MAP_DECL(scope_107, 13);
MAP_DECL(scope_106, 13);
MAP_DECL(scope_105, 13);
MAP_DECL(scope_104, 13);
MAP_DECL(scope_103, 13);
MAP_DECL(scope_102, 13);
MAP_DECL(scope_101, 13);
MAP_DECL(scope_100, 13);
MAP_DECL(scope_99, 10);
MAP_DECL(scope_98, 9);
MAP_DECL(scope_97, 13);
MAP_DECL(scope_96, 7);
MAP_DECL(scope_95, 2);
MAP_DECL(scope_94, 2);
MAP_DECL(scope_93, 2);
MAP_DECL(scope_92, 2);
MAP_DECL(scope_91, 3);
MAP_DECL(scope_90, 3);
MAP_DECL(scope_89, 3);
MAP_DECL(scope_88, 4);
MAP_DECL(scope_87, 1);
MAP_DECL(scope_86, 1);
MAP_DECL(scope_85, 1);
MAP_DECL(scope_84, 1);
MAP_DECL(scope_83, 1);
MAP_DECL(scope_82, 1);
MAP_DECL(scope_81, 1);
MAP_DECL(scope_80, 1);
MAP_DECL(scope_79, 3);
MAP_DECL(scope_78, 3);
MAP_DECL(scope_77, 3);
MAP_DECL(scope_76, 3);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 3);
MAP_DECL(scope_73, 3);
MAP_DECL(scope_72, 4);
MAP_DECL(scope_71, 1);
MAP_DECL(scope_70, 1);
MAP_DECL(scope_69, 1);
MAP_DECL(scope_68, 1);
MAP_DECL(scope_67, 1);
MAP_DECL(scope_66, 1);
MAP_DECL(scope_65, 1);
MAP_DECL(scope_64, 1);
MAP_DECL(scope_63, 3);
MAP_DECL(scope_62, 3);
MAP_DECL(scope_61, 3);
MAP_DECL(scope_60, 3);
MAP_DECL(scope_59, 3);
MAP_DECL(scope_58, 3);
MAP_DECL(scope_57, 3);
MAP_DECL(scope_56, 4);
MAP_DECL(scope_55, 7);
MAP_DECL(scope_54, 15);
MAP_DECL(scope_53, 7);
MAP_DECL(scope_52, 4);
MAP_DECL(scope_51, 4);
MAP_DECL(scope_50, 4);
MAP_DECL(scope_49, 4);
MAP_DECL(scope_48, 4);
MAP_DECL(scope_47, 4);
MAP_DECL(scope_46, 37);
MAP_DECL(scope_45, 4);
MAP_DECL(scope_44, 4);
MAP_DECL(scope_43, 4);
MAP_DECL(scope_42, 4);
MAP_DECL(scope_41, 4);
MAP_DECL(scope_40, 4);
MAP_DECL(scope_39, 37);
MAP_DECL(scope_38, 4);
MAP_DECL(scope_37, 4);
MAP_DECL(scope_36, 4);
MAP_DECL(scope_35, 4);
MAP_DECL(scope_34, 4);
MAP_DECL(scope_33, 4);
MAP_DECL(scope_32, 37);
MAP_DECL(scope_31, 4);
MAP_DECL(scope_30, 4);
MAP_DECL(scope_29, 4);
MAP_DECL(scope_28, 4);
MAP_DECL(scope_27, 4);
MAP_DECL(scope_26, 4);
MAP_DECL(scope_25, 37);
MAP_DECL(scope_24, 4);
MAP_DECL(scope_23, 4);
MAP_DECL(scope_22, 4);
MAP_DECL(scope_21, 4);
MAP_DECL(scope_20, 4);
MAP_DECL(scope_19, 4);
MAP_DECL(scope_18, 37);
MAP_DECL(scope_17, 4);
MAP_DECL(scope_16, 4);
MAP_DECL(scope_15, 4);
MAP_DECL(scope_14, 4);
MAP_DECL(scope_13, 4);
MAP_DECL(scope_12, 4);
MAP_DECL(scope_11, 37);
MAP_DECL(scope_10, 4);
MAP_DECL(scope_9, 4);
MAP_DECL(scope_8, 4);
MAP_DECL(scope_7, 4);
MAP_DECL(scope_6, 4);
MAP_DECL(scope_5, 4);
MAP_DECL(scope_4, 37);
MAP_DECL(scope_3, 27);
MAP_DECL(scope_2, 17);
MAP_DECL(scope_1, 10);
MAP_DECL(scope_0, 1);

/* array_int_500_500 */
static const MappingEntry scope_192_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_173, 1, 0}
};
static const MappingScope scope_192 = {
  "array_int_500_500",
  scope_192_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_191_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_191 = {
  "array_int_4",
  scope_191_entries, 1,
};

/* array_int_39 */
static const MappingEntry scope_190_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_39, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_190 = {
  "array_int_39",
  scope_190_entries, 1,
};

/* array_int_32 */
static const MappingEntry scope_189_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_189 = {
  "array_int_32",
  scope_189_entries, 1,
};

/* array_int_25 */
static const MappingEntry scope_188_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_188 = {
  "array_int_25",
  scope_188_entries, 1,
};

/* array_int_18 */
static const MappingEntry scope_187_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_18, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_187 = {
  "array_int_18",
  scope_187_entries, 1,
};

/* array_int_11 */
static const MappingEntry scope_186_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_186 = {
  "array_int_11",
  scope_186_entries, 1,
};

/* array_int_461 */
static const MappingEntry scope_185_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_461, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_185 = {
  "array_int_461",
  scope_185_entries, 1,
};

/* array_int_7 */
static const MappingEntry scope_184_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_184 = {
  "array_int_7",
  scope_184_entries, 1,
};

/* struct__3734 */
static const MappingEntry scope_183_entries[6] = {
  /* 0 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__3734, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__3734, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__3734, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__3734, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__3731), offsetof(struct__3734, SECTIONS), &_Type_array__3731_Utils, NULL, NULL, &scope_182, 1, 5},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__3734, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_183 = {
  "struct__3734",
  scope_183_entries, 6,
};

/* array__3731 */
static const MappingEntry scope_182_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(struct__3720), 0, &_Type_struct__3720_Utils, NULL, NULL, &scope_181, 1, 0}
};
static const MappingScope scope_182 = {
  "array__3731",
  scope_182_entries, 1,
};

/* struct__3720 */
static const MappingEntry scope_181_entries[8] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__3720, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__3720, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__3720, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__3720, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__3720, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__3720, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__3720, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__3720, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_181 = {
  "struct__3720",
  scope_181_entries, 8,
};

/* struct__3715 */
static const MappingEntry scope_180_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__3693), offsetof(struct__3715, Header), &_Type_struct__3693_Utils, NULL, NULL, &scope_178, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__3680), offsetof(struct__3715, Messages), &_Type_struct__3680_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_180 = {
  "struct__3715",
  scope_180_entries, 2,
};

/* struct__3706 */
static const MappingEntry scope_179_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(struct__3706, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(struct__3706, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(struct__3706, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(struct__3693), offsetof(struct__3706, header), &_Type_struct__3693_Utils, NULL, NULL, &scope_178, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__3680), offsetof(struct__3706, packets), &_Type_struct__3680_Utils, NULL, NULL, &scope_176, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(struct__3706, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_179 = {
  "struct__3706",
  scope_179_entries, 6,
};

/* struct__3693 */
static const MappingEntry scope_178_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(struct__3693, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__3693, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__3693, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(struct__3693, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(struct__3693, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__3693, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__3693, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(struct__3693, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(struct__3693, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(struct__3693, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_178 = {
  "struct__3693",
  scope_178_entries, 10,
};

/* struct__3685 */
static const MappingEntry scope_177_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__3685, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__3685, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(TM_OrBG), offsetof(struct__3685, Or_BG), &_Type_TM_OrBG_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(TM_OrLine), offsetof(struct__3685, Or_Line), &_Type_TM_OrLine_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(struct__3685, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_177 = {
  "struct__3685",
  scope_177_entries, 5,
};

/* struct__3680 */
static const MappingEntry scope_176_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__3680, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_173, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__3677), offsetof(struct__3680, PacketHeaders), &_Type_array__3677_Utils, NULL, NULL, &scope_175, 1, 0}
};
static const MappingScope scope_176 = {
  "struct__3680",
  scope_176_entries, 2,
};

/* array__3677 */
static const MappingEntry scope_175_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__3669), 0, &_Type_struct__3669_Utils, NULL, NULL, &scope_174, 1, 0}
};
static const MappingScope scope_175 = {
  "array__3677",
  scope_175_entries, 1,
};

/* struct__3669 */
static const MappingEntry scope_174_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__3669, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__3669, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__3669, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__3669, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__3669, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_174 = {
  "struct__3669",
  scope_174_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_173_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_173 = {
  "array_int_500",
  scope_173_entries, 1,
};

/* struct__3653 */
static const MappingEntry scope_172_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP), offsetof(struct__3653, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__3653, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__3653, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG), offsetof(struct__3653, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__3653, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__3653, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__3653, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__3653, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__3653, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__3653, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_172 = {
  "struct__3653",
  scope_172_entries, 10,
};

/* SIM_SEND_WriteBaliseDataElement/ SIM_SEND_WriteBaliseDataE */
static const MappingEntry scope_167_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseDataE, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseDataE, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_167 = {
  "SIM_SEND_WriteBaliseDataElement/ SIM_SEND_WriteBaliseDataE",
  scope_167_entries, 15,
};

/* SEND_FindSlot/ SEND_FindSlot */
static const MappingEntry scope_166_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 2}
};
static const MappingScope scope_166 = {
  "SEND_FindSlot/ SEND_FindSlot",
  scope_166_entries, 10,
};

/* TOOLS_calculate_L_PACKET/ TOOLS_calculate_L_PACKET */
static const MappingEntry scope_165_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "L_PACKET", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_OUTPUT, "N_ITER_out", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, N_ITER_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_165 = {
  "TOOLS_calculate_L_PACKET/ TOOLS_calculate_L_PACKET",
  scope_165_entries, 9,
};

/* SEND_ConvertP005forWriteSection_IT/ SEND_ConvertP005forWriteS */
static const MappingEntry scope_164_entries[11] = {
  /* 0 */ { MAP_OUTPUT, "SectionArray", NULL, sizeof(TM_P005E_array_T), offsetof(outC_SEND_ConvertP005forWriteS, SectionArray), &_Type_TM_P005E_array_T_Utils, NULL, NULL, &scope_184, 1, 10},
  /* 1 */ { MAP_LOCAL, "_L365", NULL, sizeof(TM_P005E_T), offsetof(outC_SEND_ConvertP005forWriteS, _L365), &_Type_TM_P005E_T_Utils, NULL, NULL, &scope_181, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_bool), offsetof(outC_SEND_ConvertP005forWriteS, _L367), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L372", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS, _L372), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L373", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS, _L373), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L374", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS, _L374), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_7), offsetof(outC_SEND_ConvertP005forWriteS, _L383), &_Type_array_int_7_Utils, NULL, NULL, &scope_184, 1, 9}
};
static const MappingScope scope_164 = {
  "SEND_ConvertP005forWriteSection_IT/ SEND_ConvertP005forWriteS",
  scope_164_entries, 11,
};

/* TOOLS_Int_to_Q_DIR/ TOOLS_Int_to_Q_DIR */
static const MappingEntry scope_163_entries[11] = {
  /* 0 */ { MAP_OUTPUT, "QDIR", NULL, sizeof(Q_DIR), offsetof(outC_TOOLS_Int_to_Q_DIR, QDIR), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(Q_DIR), offsetof(outC_TOOLS_Int_to_Q_DIR, _L10), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_TOOLS_Int_to_Q_DIR, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_DIR, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_TOOLS_Int_to_Q_DIR, _L3), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_Q_DIR, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_DIR, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(Q_DIR), offsetof(outC_TOOLS_Int_to_Q_DIR, _L6), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_Q_DIR, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(Q_DIR), offsetof(outC_TOOLS_Int_to_Q_DIR, _L8), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_DIR, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_163 = {
  "TOOLS_Int_to_Q_DIR/ TOOLS_Int_to_Q_DIR",
  scope_163_entries, 11,
};

/* SIM_SEND_WriteRadioMessageData/ SIM_SEND_WriteRadioMessageData */
static const MappingEntry scope_162_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessageData, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 11},
  /* 1 */ { MAP_INSTANCE, "SIM_SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SIM_SEND_WriteBaliseDataE), offsetof(outC_SIM_SEND_WriteRadioMessageData, Context_1), NULL, NULL, NULL, &scope_167, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_173, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_192, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_173, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SIM_SEND_WriteRadioMessageData, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_173, 1, 10}
};
static const MappingScope scope_162 = {
  "SIM_SEND_WriteRadioMessageData/ SIM_SEND_WriteRadioMessageData",
  scope_162_entries, 12,
};

/* SIM_SEND_WriteRadioMessageHeader/ SIM_SEND_WriteRadioMessag */
static const MappingEntry scope_161_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_175, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot), offsetof(outC_SIM_SEND_WriteRadioMessag, Context_1), NULL, NULL, NULL, &scope_166, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_175, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_175, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_175, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteRadioMessag, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteRadioMessag, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteRadioMessag, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_175, 1, 6},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteRadioMessag, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 7}
};
static const MappingScope scope_161 = {
  "SIM_SEND_WriteRadioMessageHeader/ SIM_SEND_WriteRadioMessag",
  scope_161_entries, 26,
};

/* SEND_ConvertP005forWrite_IT/ SEND_ConvertP005forWrite_IT */
static const MappingEntry scope_160_entries[43] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_ConvertP005forWrite_IT, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 41},
  /* 1 */ { MAP_OUTPUT, "RM05_out", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_ConvertP005forWrite_IT, RM05_out), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 42},
  /* 2 */ { MAP_INSTANCE, "SEND_ConvertP005forWriteSection_IT 1", NULL, sizeof(outC_SEND_ConvertP005forWriteS), offsetof(outC_SEND_ConvertP005forWrite_IT, _1_Context_1), NULL, NULL, NULL, &scope_164, 1, 1},
  /* 3 */ { MAP_INSTANCE, "SEND_ConvertP005forWriteSection_IT 2", NULL, sizeof(outC_SEND_ConvertP005forWriteS), offsetof(outC_SEND_ConvertP005forWrite_IT, Context_2), NULL, NULL, NULL, &scope_164, 1, 2},
  /* 4 */ { MAP_INSTANCE, "SEND_ConvertP005forWriteSection_IT 3", NULL, sizeof(outC_SEND_ConvertP005forWriteS), offsetof(outC_SEND_ConvertP005forWrite_IT, Context_3), NULL, NULL, NULL, &scope_164, 1, 3},
  /* 5 */ { MAP_INSTANCE, "SEND_ConvertP005forWriteSection_IT 4", NULL, sizeof(outC_SEND_ConvertP005forWriteS), offsetof(outC_SEND_ConvertP005forWrite_IT, Context_4), NULL, NULL, NULL, &scope_164, 1, 4},
  /* 6 */ { MAP_INSTANCE, "SEND_ConvertP005forWriteSection_IT 5", NULL, sizeof(outC_SEND_ConvertP005forWriteS), offsetof(outC_SEND_ConvertP005forWrite_IT, Context_5), NULL, NULL, NULL, &scope_164, 1, 5},
  /* 7 */ { MAP_INSTANCE, "TOOLS_Int_to_Q_DIR 1", NULL, sizeof(outC_TOOLS_Int_to_Q_DIR), offsetof(outC_SEND_ConvertP005forWrite_IT, _2_Context_1), NULL, NULL, NULL, &scope_163, 1, 0},
  /* 8 */ { MAP_INSTANCE, "TOOLS_calculate_L_PACKET 1", NULL, sizeof(outC_TOOLS_calculate_L_PACKET), offsetof(outC_SEND_ConvertP005forWrite_IT, Context_1), NULL, NULL, NULL, &scope_165, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L1", NULL, sizeof(TM_P005), offsetof(outC_SEND_ConvertP005forWrite_IT, _L1), &_Type_TM_P005_Utils, NULL, NULL, &scope_183, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_ConvertP005forWrite_IT, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L205", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L205), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_461), offsetof(outC_SEND_ConvertP005forWrite_IT, _L209), &_Type_array_int_461_Utils, NULL, NULL, &scope_185, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L211", NULL, sizeof(array_int_500), offsetof(outC_SEND_ConvertP005forWrite_IT, _L211), &_Type_array_int_500_Utils, NULL, NULL, &scope_173, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_SEND_ConvertP005forWrite_IT, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 18 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 19 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 20 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 21 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 22 */ { MAP_LOCAL, "_L219", NULL, sizeof(TM_P05Es_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L219), &_Type_TM_P05Es_T_Utils, NULL, NULL, &scope_182, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L226", NULL, sizeof(TM_P005E_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L226), &_Type_TM_P005E_T_Utils, NULL, NULL, &scope_181, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L227", NULL, sizeof(TM_P005E_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L227), &_Type_TM_P005E_T_Utils, NULL, NULL, &scope_181, 1, 18},
  /* 25 */ { MAP_LOCAL, "_L228", NULL, sizeof(TM_P005E_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L228), &_Type_TM_P005E_T_Utils, NULL, NULL, &scope_181, 1, 17},
  /* 26 */ { MAP_LOCAL, "_L229", NULL, sizeof(TM_P005E_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L229), &_Type_TM_P005E_T_Utils, NULL, NULL, &scope_181, 1, 16},
  /* 27 */ { MAP_LOCAL, "_L230", NULL, sizeof(TM_P005E_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L230), &_Type_TM_P005E_T_Utils, NULL, NULL, &scope_181, 1, 15},
  /* 28 */ { MAP_LOCAL, "_L325", NULL, sizeof(array_int_11), offsetof(outC_SEND_ConvertP005forWrite_IT, _L325), &_Type_array_int_11_Utils, NULL, NULL, &scope_186, 1, 20},
  /* 29 */ { MAP_LOCAL, "_L327", NULL, sizeof(array_int_18), offsetof(outC_SEND_ConvertP005forWrite_IT, _L327), &_Type_array_int_18_Utils, NULL, NULL, &scope_187, 1, 21},
  /* 30 */ { MAP_LOCAL, "_L328", NULL, sizeof(array_int_25), offsetof(outC_SEND_ConvertP005forWrite_IT, _L328), &_Type_array_int_25_Utils, NULL, NULL, &scope_188, 1, 22},
  /* 31 */ { MAP_LOCAL, "_L329", NULL, sizeof(array_int_32), offsetof(outC_SEND_ConvertP005forWrite_IT, _L329), &_Type_array_int_32_Utils, NULL, NULL, &scope_189, 1, 23},
  /* 32 */ { MAP_LOCAL, "_L330", NULL, sizeof(array_int_39), offsetof(outC_SEND_ConvertP005forWrite_IT, _L330), &_Type_array_int_39_Utils, NULL, NULL, &scope_190, 1, 24},
  /* 33 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 34 */ { MAP_LOCAL, "_L355", NULL, sizeof(array_int_4), offsetof(outC_SEND_ConvertP005forWrite_IT, _L355), &_Type_array_int_4_Utils, NULL, NULL, &scope_191, 1, 26},
  /* 35 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_SEND_ConvertP005forWrite_IT, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L357", NULL, sizeof(TM_P005E_array_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L357), &_Type_TM_P005E_array_T_Utils, NULL, NULL, &scope_184, 1, 34},
  /* 37 */ { MAP_LOCAL, "_L358", NULL, sizeof(TM_P005E_array_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L358), &_Type_TM_P005E_array_T_Utils, NULL, NULL, &scope_184, 1, 35},
  /* 38 */ { MAP_LOCAL, "_L359", NULL, sizeof(TM_P005E_array_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L359), &_Type_TM_P005E_array_T_Utils, NULL, NULL, &scope_184, 1, 36},
  /* 39 */ { MAP_LOCAL, "_L360", NULL, sizeof(TM_P005E_array_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L360), &_Type_TM_P005E_array_T_Utils, NULL, NULL, &scope_184, 1, 37},
  /* 40 */ { MAP_LOCAL, "_L361", NULL, sizeof(TM_P005E_array_T), offsetof(outC_SEND_ConvertP005forWrite_IT, _L361), &_Type_TM_P005E_array_T_Utils, NULL, NULL, &scope_184, 1, 38},
  /* 41 */ { MAP_LOCAL, "_L363", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L363), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 42 */ { MAP_LOCAL, "_L364", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT, _L364), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39}
};
static const MappingScope scope_160 = {
  "SEND_ConvertP005forWrite_IT/ SEND_ConvertP005forWrite_IT",
  scope_160_entries, 43,
};

/* SEND_WritePacket005_IT/ SEND_WritePacket005_IT */
static const MappingEntry scope_159_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WritePacket005_IT, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 16},
  /* 2 */ { MAP_INSTANCE, "SEND_ConvertP005forWrite_IT 1", NULL, sizeof(outC_SEND_ConvertP005forWrite_IT), offsetof(outC_SEND_WritePacket005_IT, Context_1), NULL, NULL, NULL, &scope_160, 1, 0},
  /* 3 */ { MAP_INSTANCE, "SIM_SEND_WriteRadioMessageData 1", NULL, sizeof(outC_SIM_SEND_WriteRadioMessageData), offsetof(outC_SEND_WritePacket005_IT, _2_Context_1), NULL, NULL, NULL, &scope_162, 1, 2},
  /* 4 */ { MAP_INSTANCE, "SIM_SEND_WriteRadioMessageHeader 1", NULL, sizeof(outC_SIM_SEND_WriteRadioMessag), offsetof(outC_SEND_WritePacket005_IT, _1_Context_1), NULL, NULL, NULL, &scope_161, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(TM_P005), offsetof(outC_SEND_WritePacket005_IT, _L1), &_Type_TM_P005_Utils, NULL, NULL, &scope_183, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WritePacket005_IT, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L2), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_SEND_WritePacket005_IT, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WritePacket005_IT, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_174, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_175, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_175, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_173, 1, 13}
};
static const MappingScope scope_159 = {
  "SEND_WritePacket005_IT/ SEND_WritePacket005_IT",
  scope_159_entries, 17,
};

/* FirstTest::InfraLib::Send_364_P005/ Send_364_P005_FirstTest_InfraLib */
static const MappingEntry scope_158_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_364_P005_FirstTest_InfraLib, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 8},
  /* 2 */ { MAP_INSTANCE, "SEND_WritePacket005_IT 1", NULL, sizeof(outC_SEND_WritePacket005_IT), offsetof(outC_Send_364_P005_FirstTest_InfraLib, Context_1), NULL, &scope_158_entries[0], isActive_kcg_bool_kcg_true, &scope_159, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_364_P005_FirstTest_InfraLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(TM_P005), offsetof(outC_Send_364_P005_FirstTest_InfraLib, _L4), &_Type_TM_P005_Utils, NULL, NULL, &scope_183, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLib, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLib, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_364_P005_FirstTest_InfraLib, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLib, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_158 = {
  "FirstTest::InfraLib::Send_364_P005/ Send_364_P005_FirstTest_InfraLib",
  scope_158_entries, 9,
};

/* TOOLS_convert_engineering_location/ TOOLS_convert_engineering */
static const MappingEntry scope_157_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Loc_real", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering, Loc_real), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_convert_engineering, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_157 = {
  "TOOLS_convert_engineering_location/ TOOLS_convert_engineering",
  scope_157_entries, 5,
};

/* FirstTest::InfraLib::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLibmath::Abs 1/ */
static const MappingEntry scope_156_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_156 = {
  "FirstTest::InfraLib::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLibmath::Abs 1/",
  scope_156_entries, 6,
};

/* FirstTest::InfraLib::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLib */
static const MappingEntry scope_155_entries[15] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_OUTPUT, "distance_BB", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLib, distance_BB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_156, 1, 0}
};
static const MappingScope scope_155 = {
  "FirstTest::InfraLib::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLib",
  scope_155_entries, 15,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 11/ */
static const MappingEntry scope_154_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_154 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 11/",
  scope_154_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 12/ */
static const MappingEntry scope_153_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_153 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 12/",
  scope_153_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 13/ */
static const MappingEntry scope_152_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_152 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 13/",
  scope_152_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 14/ */
static const MappingEntry scope_151_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_151 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 14/",
  scope_151_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 15/ */
static const MappingEntry scope_150_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_150 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 15/",
  scope_150_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 16/ */
static const MappingEntry scope_149_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_149 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 16/",
  scope_149_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 17/ */
static const MappingEntry scope_148_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_148 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 17/",
  scope_148_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 18/ */
static const MappingEntry scope_147_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_147 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 18/",
  scope_147_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 19/ */
static const MappingEntry scope_146_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_146 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 19/",
  scope_146_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 20/ */
static const MappingEntry scope_145_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_145 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 20/",
  scope_145_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 0/ */
static const MappingEntry scope_144_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_0), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_0), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_144 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 0/",
  scope_144_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 9/ */
static const MappingEntry scope_143_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_143 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 9/",
  scope_143_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 8/ */
static const MappingEntry scope_142_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_142 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 8/",
  scope_142_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 7/ */
static const MappingEntry scope_141_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_141 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 7/",
  scope_141_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 6/ */
static const MappingEntry scope_140_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_140 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 6/",
  scope_140_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 5/ */
static const MappingEntry scope_139_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_139 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 5/",
  scope_139_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 4/ */
static const MappingEntry scope_138_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_138 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 4/",
  scope_138_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 3/ */
static const MappingEntry scope_137_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_137 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 3/",
  scope_137_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 2/ */
static const MappingEntry scope_136_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_136 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 2/",
  scope_136_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 1/ */
static const MappingEntry scope_135_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_135 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 1/",
  scope_135_entries, 2,
};

/* FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLib */
static const MappingEntry scope_134_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, Balise_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 53},
  /* 4 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 0", NULL, 0, 0, NULL, NULL, NULL, &scope_144, 1, 9},
  /* 5 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_135, 1, 0},
  /* 6 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_154, 1, 19},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_153, 1, 18},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_152, 1, 17},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_151, 1, 16},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_150, 1, 15},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_149, 1, 14},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_148, 1, 13},
  /* 13 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_147, 1, 12},
  /* 14 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_146, 1, 11},
  /* 15 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_136, 1, 1},
  /* 16 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 20", NULL, 0, 0, NULL, NULL, NULL, &scope_145, 1, 10},
  /* 17 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_137, 1, 2},
  /* 18 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_138, 1, 3},
  /* 19 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_139, 1, 4},
  /* 20 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_140, 1, 5},
  /* 21 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_141, 1, 6},
  /* 22 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_142, 1, 7},
  /* 23 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_143, 1, 8},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L26), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L28), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L29), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L31), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L32), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 51},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 30}
};
static const MappingScope scope_134 = {
  "FirstTest::InfraLib::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLib",
  scope_134_entries, 54,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 20/ */
static const MappingEntry scope_133_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_133 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 20/",
  scope_133_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 19/ */
static const MappingEntry scope_132_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_132 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 19/",
  scope_132_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 18/ */
static const MappingEntry scope_131_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_131 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 18/",
  scope_131_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 17/ */
static const MappingEntry scope_130_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_130 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 17/",
  scope_130_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 16/ */
static const MappingEntry scope_129_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_129 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 16/",
  scope_129_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 15/ */
static const MappingEntry scope_128_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_128 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 15/",
  scope_128_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 14/ */
static const MappingEntry scope_127_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_127 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 14/",
  scope_127_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 13/ */
static const MappingEntry scope_126_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_126 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 13/",
  scope_126_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 12/ */
static const MappingEntry scope_125_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_125 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 12/",
  scope_125_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 11/ */
static const MappingEntry scope_124_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_124 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 11/",
  scope_124_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 9/ */
static const MappingEntry scope_123_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_123 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 9/",
  scope_123_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 8/ */
static const MappingEntry scope_122_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_122 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 8/",
  scope_122_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 7/ */
static const MappingEntry scope_121_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_121 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 7/",
  scope_121_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 6/ */
static const MappingEntry scope_120_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_120 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 6/",
  scope_120_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 5/ */
static const MappingEntry scope_119_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_119 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 5/",
  scope_119_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 4/ */
static const MappingEntry scope_118_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_118 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 4/",
  scope_118_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 23/ */
static const MappingEntry scope_117_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_117 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 23/",
  scope_117_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 22/ */
static const MappingEntry scope_116_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_116 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 22/",
  scope_116_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 21/ */
static const MappingEntry scope_115_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out_21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L1_21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 1}
};
static const MappingScope scope_115 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibFirstTest::InfraLib::No_Packet 21/",
  scope_115_entries, 2,
};

/* FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLib */
static const MappingEntry scope_114_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, Balise_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 53},
  /* 4 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_124, 1, 10},
  /* 5 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_125, 1, 11},
  /* 6 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_126, 1, 12},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_127, 1, 13},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_128, 1, 14},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_129, 1, 15},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_130, 1, 16},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_131, 1, 17},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_132, 1, 18},
  /* 13 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 20", NULL, 0, 0, NULL, NULL, NULL, &scope_133, 1, 19},
  /* 14 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 21", NULL, 0, 0, NULL, NULL, NULL, &scope_115, 1, 0},
  /* 15 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 22", NULL, 0, 0, NULL, NULL, NULL, &scope_116, 1, 1},
  /* 16 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 23", NULL, 0, 0, NULL, NULL, NULL, &scope_117, 1, 2},
  /* 17 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_118, 1, 3},
  /* 18 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_119, 1, 4},
  /* 19 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_120, 1, 5},
  /* 20 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_121, 1, 6},
  /* 21 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_122, 1, 7},
  /* 22 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_123, 1, 8},
  /* 23 */ { MAP_INSTANCE, "FirstTest::InfraLib::Send_364_P005 2", NULL, sizeof(outC_Send_364_P005_FirstTest_InfraLib), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, Context_2), NULL, NULL, NULL, &scope_158, 1, 9},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L26), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L28), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L29), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L31), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L33), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 51},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLib, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 30}
};
static const MappingScope scope_114 = {
  "FirstTest::InfraLib::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLib",
  scope_114_entries, 54,
};

/* FirstTest::InfraLib::Balise_Localisation/ Balise_Localisation_FirstTest_InfraLib */
static const MappingEntry scope_113_entries[24] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Interdistance 1", NULL, sizeof(outC_Balise_Interdistance_FirstTest_InfraLib), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_155, 1, 2},
  /* 2 */ { MAP_OUTPUT, "PIG_0_out", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, PIG_0_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 3 */ { MAP_INSTANCE, "TOOLS_convert_engineering_location 1", NULL, sizeof(outC_TOOLS_convert_engineering), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_157, 1, 3},
  /* 4 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, TrainPass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L16), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L65", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L65), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L70), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L71", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L71), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 19 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L73@mem", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L73), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 0},
  /* 21 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L75), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L76), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLib, _L77), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21}
};
static const MappingScope scope_113 = {
  "FirstTest::InfraLib::Balise_Localisation/ Balise_Localisation_FirstTest_InfraLib",
  scope_113_entries, 24,
};

/* FirstTest::InfraLib::Balise_341_1/ Balise_341_1_FirstTest_InfraLib */
static const MappingEntry scope_112_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_1_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_341_1_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _1_Context_1), NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_1_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_112 = {
  "FirstTest::InfraLib::Balise_341_1/ Balise_341_1_FirstTest_InfraLib",
  scope_112_entries, 13,
};

/* FirstTest::InfraLib::Balise_341_0/ Balise_341_0_FirstTest_InfraLib */
static const MappingEntry scope_111_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_0_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_341_0_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _1_Context_1), NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_341_0_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_111 = {
  "FirstTest::InfraLib::Balise_341_0/ Balise_341_0_FirstTest_InfraLib",
  scope_111_entries, 13,
};

/* FirstTest::InfraLib::Balise_369_0/ Balise_369_0_FirstTest_InfraLib */
static const MappingEntry scope_110_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_0_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_369_0_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _1_Context_1), NULL, &scope_110_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_0_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_110 = {
  "FirstTest::InfraLib::Balise_369_0/ Balise_369_0_FirstTest_InfraLib",
  scope_110_entries, 13,
};

/* FirstTest::InfraLib::Balise_369_1/ Balise_369_1_FirstTest_InfraLib */
static const MappingEntry scope_109_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_1_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_369_1_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _1_Context_1), NULL, &scope_109_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_369_1_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_109 = {
  "FirstTest::InfraLib::Balise_369_1/ Balise_369_1_FirstTest_InfraLib",
  scope_109_entries, 13,
};

/* FirstTest::InfraLib::Balise_368_0/ Balise_368_0_FirstTest_InfraLib */
static const MappingEntry scope_108_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_0_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_368_0_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _1_Context_1), NULL, &scope_108_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_0_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_108 = {
  "FirstTest::InfraLib::Balise_368_0/ Balise_368_0_FirstTest_InfraLib",
  scope_108_entries, 13,
};

/* FirstTest::InfraLib::Balise_368_1/ Balise_368_1_FirstTest_InfraLib */
static const MappingEntry scope_107_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_1_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_368_1_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _1_Context_1), NULL, &scope_107_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_368_1_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_107 = {
  "FirstTest::InfraLib::Balise_368_1/ Balise_368_1_FirstTest_InfraLib",
  scope_107_entries, 13,
};

/* FirstTest::InfraLib::Balise_367_1/ Balise_367_1_FirstTest_InfraLib */
static const MappingEntry scope_106_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_1_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_367_1_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _1_Context_1), NULL, &scope_106_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_1_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_106 = {
  "FirstTest::InfraLib::Balise_367_1/ Balise_367_1_FirstTest_InfraLib",
  scope_106_entries, 13,
};

/* FirstTest::InfraLib::Balise_367_0/ Balise_367_0_FirstTest_InfraLib */
static const MappingEntry scope_105_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_0_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_367_0_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _1_Context_1), NULL, &scope_105_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_367_0_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_105 = {
  "FirstTest::InfraLib::Balise_367_0/ Balise_367_0_FirstTest_InfraLib",
  scope_105_entries, 13,
};

/* FirstTest::InfraLib::Balise_366_1/ Balise_366_1_FirstTest_InfraLib */
static const MappingEntry scope_104_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_1_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_366_1_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _1_Context_1), NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_1_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_104 = {
  "FirstTest::InfraLib::Balise_366_1/ Balise_366_1_FirstTest_InfraLib",
  scope_104_entries, 13,
};

/* FirstTest::InfraLib::Balise_366_0/ Balise_366_0_FirstTest_InfraLib */
static const MappingEntry scope_103_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_0_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_366_0_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _1_Context_1), NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_366_0_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_103 = {
  "FirstTest::InfraLib::Balise_366_0/ Balise_366_0_FirstTest_InfraLib",
  scope_103_entries, 13,
};

/* FirstTest::InfraLib::Balise_365_1/ Balise_365_1_FirstTest_InfraLib */
static const MappingEntry scope_102_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_1_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_365_1_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _1_Context_1), NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_1_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_102 = {
  "FirstTest::InfraLib::Balise_365_1/ Balise_365_1_FirstTest_InfraLib",
  scope_102_entries, 13,
};

/* FirstTest::InfraLib::Balise_365_0/ Balise_365_0_FirstTest_InfraLib */
static const MappingEntry scope_101_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_0_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_365_0_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLib), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _1_Context_1), NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_365_0_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_101 = {
  "FirstTest::InfraLib::Balise_365_0/ Balise_365_0_FirstTest_InfraLib",
  scope_101_entries, 13,
};

/* FirstTest::InfraLib::Balise_364_0/ Balise_364_0_FirstTest_InfraLib */
static const MappingEntry scope_100_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_0_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_364_0_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Packets_364 1", NULL, sizeof(outC_Balise_Packets_364_FirstTest_InfraLib), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _1_Context_1), NULL, &scope_100_entries[0], isActive_kcg_bool_kcg_true, &scope_114, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_0_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_100 = {
  "FirstTest::InfraLib::Balise_364_0/ Balise_364_0_FirstTest_InfraLib",
  scope_100_entries, 13,
};

/* FirstTest::InfraLib::Balise_Group_Close/ Balise_Group_Close_FirstTest_InfraLib */
static const MappingEntry scope_99_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Error_out", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, Error_out), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L2), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L20), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L21", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L21), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L22), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L24), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_FirstTest_InfraLib, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_99 = {
  "FirstTest::InfraLib::Balise_Group_Close/ Balise_Group_Close_FirstTest_InfraLib",
  scope_99_entries, 10,
};

/* FirstTest::InfraLib::Balise_Group_Init/ Balise_Group_Init_FirstTest_InfraLib */
static const MappingEntry scope_98_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "BG_internal_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, BG_internal_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L2), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L26), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L27), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L28), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Init_FirstTest_InfraLib, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_98 = {
  "FirstTest::InfraLib::Balise_Group_Init/ Balise_Group_Init_FirstTest_InfraLib",
  scope_98_entries, 9,
};

/* FirstTest::InfraLib::Balise_364_1/ Balise_364_1_FirstTest_InfraLib */
static const MappingEntry scope_97_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_FirstTest_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_1_FirstTest_InfraLib, B_data_out), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLib), offsetof(outC_Balise_364_1_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_113, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Packets_364 1", NULL, sizeof(outC_Balise_Packets_364_FirstTest_InfraLib), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _1_Context_1), NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_true, &scope_114, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L15), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L17), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L19), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L23), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_364_1_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 4}
};
static const MappingScope scope_97 = {
  "FirstTest::InfraLib::Balise_364_1/ Balise_364_1_FirstTest_InfraLib",
  scope_97_entries, 13,
};

/* TOOLS_Int_to_Q_LINK/ TOOLS_Int_to_Q_LINK */
static const MappingEntry scope_96_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "QDIR", NULL, sizeof(Q_LINK), offsetof(outC_TOOLS_Int_to_Q_LINK, QDIR), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(Q_LINK), offsetof(outC_TOOLS_Int_to_Q_LINK, _L12), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_LINK, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINK), offsetof(outC_TOOLS_Int_to_Q_LINK, _L3), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_Q_LINK, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_LINK, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(Q_LINK), offsetof(outC_TOOLS_Int_to_Q_LINK, _L6), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_96 = {
  "TOOLS_Int_to_Q_LINK/ TOOLS_Int_to_Q_LINK",
  scope_96_entries, 7,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:then: */
static const MappingEntry scope_95_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_DUP, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_89_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_DUP), offsetof(outC_TOOLS_Int_to_M_DUP, _L6_IfBlock1), &_Type_M_DUP_Utils, &scope_89_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_95 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:then:",
  scope_95_entries, 2,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:then: */
static const MappingEntry scope_94_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_DUP, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_90_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(M_DUP), offsetof(outC_TOOLS_Int_to_M_DUP, _L52_IfBlock1), &_Type_M_DUP_Utils, &scope_90_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_94 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:then:",
  scope_94_entries, 2,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:else:then: */
static const MappingEntry scope_93_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_DUP, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_DUP), offsetof(outC_TOOLS_Int_to_M_DUP, _L43_IfBlock1), &_Type_M_DUP_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_93 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:else:then:",
  scope_93_entries, 2,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:else:else: */
static const MappingEntry scope_92_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_DUP, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_DUP), offsetof(outC_TOOLS_Int_to_M_DUP, _L34_IfBlock1), &_Type_M_DUP_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_92 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:else:else:",
  scope_92_entries, 2,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:else: */
static const MappingEntry scope_91_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_DUP, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_92, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_91_entries[0], isActive_kcg_bool_kcg_true, &scope_93, 1, 2}
};
static const MappingScope scope_91 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:else:",
  scope_91_entries, 3,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else: */
static const MappingEntry scope_90_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_DUP, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_90_entries[0], isActive_kcg_bool_kcg_false, &scope_91, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_90_entries[0], isActive_kcg_bool_kcg_true, &scope_94, 1, 2}
};
static const MappingScope scope_90 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:else:",
  scope_90_entries, 3,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1: */
static const MappingEntry scope_89_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_DUP, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_kcg_bool_kcg_false, &scope_90, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_kcg_bool_kcg_true, &scope_95, 1, 2}
};
static const MappingScope scope_89 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUPIfBlock1:",
  scope_89_entries, 3,
};

/* TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUP */
static const MappingEntry scope_88_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_89, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_M_DUP, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "m_dup", NULL, sizeof(M_DUP), offsetof(outC_TOOLS_Int_to_M_DUP, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "m_dup_in", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_M_DUP, m_dup_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_88 = {
  "TOOLS_Int_to_M_DUP/ TOOLS_Int_to_M_DUP",
  scope_88_entries, 4,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:then: */
static const MappingEntry scope_87_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L2_IfBlock1), &_Type_N_TOTAL_Utils, &scope_73_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_87 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:then:",
  scope_87_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:then: */
static const MappingEntry scope_86_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L1_IfBlock1), &_Type_N_TOTAL_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_86 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:then:",
  scope_86_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:then: */
static const MappingEntry scope_85_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L16_IfBlock1), &_Type_N_TOTAL_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_85 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:then:",
  scope_85_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:then: */
static const MappingEntry scope_84_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L17_IfBlock1), &_Type_N_TOTAL_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_84 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:then:",
  scope_84_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_83_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L18_IfBlock1), &_Type_N_TOTAL_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_83 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:then:",
  scope_83_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_82_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L29_IfBlock1), &_Type_N_TOTAL_Utils, &scope_78_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_82 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:then:",
  scope_82_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_81_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L110_IfBlock1), &_Type_N_TOTAL_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_81 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:else:then:",
  scope_81_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_80_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L111_IfBlock1), &_Type_N_TOTAL_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_80 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:else:else:",
  scope_80_entries, 1,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_79_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_TOTAL, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_false, &scope_80, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_81, 1, 2}
};
static const MappingScope scope_79 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:else:",
  scope_79_entries, 3,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_78_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_TOTAL, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_78_entries[0], isActive_kcg_bool_kcg_false, &scope_79, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_78_entries[0], isActive_kcg_bool_kcg_true, &scope_82, 1, 2}
};
static const MappingScope scope_78 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:else:",
  scope_78_entries, 3,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else: */
static const MappingEntry scope_77_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_TOTAL, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_false, &scope_78, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_true, &scope_83, 1, 2}
};
static const MappingScope scope_77 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:else:",
  scope_77_entries, 3,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else: */
static const MappingEntry scope_76_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_TOTAL, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_77, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_84, 1, 2}
};
static const MappingScope scope_76 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:else:",
  scope_76_entries, 3,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else: */
static const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_TOTAL, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_false, &scope_76, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_85, 1, 2}
};
static const MappingScope scope_75 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:else:",
  scope_75_entries, 3,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else: */
static const MappingEntry scope_74_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_TOTAL, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_false, &scope_75, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_86, 1, 2}
};
static const MappingScope scope_74 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:else:",
  scope_74_entries, 3,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1: */
static const MappingEntry scope_73_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_TOTAL, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_73_entries[0], isActive_kcg_bool_kcg_false, &scope_74, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_73_entries[0], isActive_kcg_bool_kcg_true, &scope_87, 1, 2}
};
static const MappingScope scope_73 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTALIfBlock1:",
  scope_73_entries, 3,
};

/* TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTAL */
static const MappingEntry scope_72_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_73, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_N_TOTAL, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_TOTAL), offsetof(outC_TOOLS_Int_to_N_TOTAL, n_pig), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "n_total_in", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_N_TOTAL, n_total_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_72 = {
  "TOOLS_Int_to_N_TOTAL/ TOOLS_Int_to_N_TOTAL",
  scope_72_entries, 4,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:then: */
static const MappingEntry scope_71_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L2_IfBlock1), &_Type_N_PIG_Utils, &scope_57_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_71 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:then:",
  scope_71_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:then: */
static const MappingEntry scope_70_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L1_IfBlock1), &_Type_N_PIG_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_70 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:then:",
  scope_70_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:then: */
static const MappingEntry scope_69_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L16_IfBlock1), &_Type_N_PIG_Utils, &scope_59_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_69 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:then:",
  scope_69_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:then: */
static const MappingEntry scope_68_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L17_IfBlock1), &_Type_N_PIG_Utils, &scope_60_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_68 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:then:",
  scope_68_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_67_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L18_IfBlock1), &_Type_N_PIG_Utils, &scope_61_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_67 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:then:",
  scope_67_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_66_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L29_IfBlock1), &_Type_N_PIG_Utils, &scope_62_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_66 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:then:",
  scope_66_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_65_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L110_IfBlock1), &_Type_N_PIG_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_65 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:else:then:",
  scope_65_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_64_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, _L111_IfBlock1), &_Type_N_PIG_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_64 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:else:else:",
  scope_64_entries, 1,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_63_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_PIG, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_false, &scope_64, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_true, &scope_65, 1, 2}
};
static const MappingScope scope_63 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:else:",
  scope_63_entries, 3,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_62_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_PIG, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_false, &scope_63, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_true, &scope_66, 1, 2}
};
static const MappingScope scope_62 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:else:",
  scope_62_entries, 3,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else: */
static const MappingEntry scope_61_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_PIG, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_false, &scope_62, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_true, &scope_67, 1, 2}
};
static const MappingScope scope_61 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:else:",
  scope_61_entries, 3,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else: */
static const MappingEntry scope_60_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_PIG, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_kcg_bool_kcg_false, &scope_61, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_kcg_bool_kcg_true, &scope_68, 1, 2}
};
static const MappingScope scope_60 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:else:",
  scope_60_entries, 3,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else: */
static const MappingEntry scope_59_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_PIG, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive_kcg_bool_kcg_false, &scope_60, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive_kcg_bool_kcg_true, &scope_69, 1, 2}
};
static const MappingScope scope_59 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:else:",
  scope_59_entries, 3,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else: */
static const MappingEntry scope_58_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_PIG, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_false, &scope_59, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_true, &scope_70, 1, 2}
};
static const MappingScope scope_58 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:else:",
  scope_58_entries, 3,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1: */
static const MappingEntry scope_57_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_N_PIG, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_false, &scope_58, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_true, &scope_71, 1, 2}
};
static const MappingScope scope_57 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIGIfBlock1:",
  scope_57_entries, 3,
};

/* TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIG */
static const MappingEntry scope_56_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_57, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_N_PIG, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_PIG), offsetof(outC_TOOLS_Int_to_N_PIG, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "n_pig_in", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_N_PIG, n_pig_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_56 = {
  "TOOLS_Int_to_N_PIG/ TOOLS_Int_to_N_PIG",
  scope_56_entries, 4,
};

/* TOOLS_Int_to_Q_MEDIA/ TOOLS_Int_to_Q_MEDIA */
static const MappingEntry scope_55_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_Q_MEDIA, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_MEDIA, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_MEDIA), offsetof(outC_TOOLS_Int_to_Q_MEDIA, _L17), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(Q_MEDIA), offsetof(outC_TOOLS_Int_to_Q_MEDIA, _L18), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_MEDIA, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_MEDIA), offsetof(outC_TOOLS_Int_to_Q_MEDIA, _L3), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_OUTPUT, "q_media", NULL, sizeof(Q_MEDIA), offsetof(outC_TOOLS_Int_to_Q_MEDIA, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_55 = {
  "TOOLS_Int_to_Q_MEDIA/ TOOLS_Int_to_Q_MEDIA",
  scope_55_entries, 7,
};

/* TOOLS_Int_to_M_VERSION/ TOOLS_Int_to_M_VERSION */
static const MappingEntry scope_54_entries[15] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_M_VERSION, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, _L27), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_VERSION, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_M_VERSION, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L30", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, _L30), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_VERSION, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_M_VERSION, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L34", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, _L34), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_M_VERSION, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_M_VERSION, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L37", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, _L37), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L38", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, _L38), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L39", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, _L39), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_OUTPUT, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_TOOLS_Int_to_M_VERSION, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14}
};
static const MappingScope scope_54 = {
  "TOOLS_Int_to_M_VERSION/ TOOLS_Int_to_M_VERSION",
  scope_54_entries, 15,
};

/* TOOLS_Int_to_Q_UPDOWN/ TOOLS_Int_to_Q_UPDOWN */
static const MappingEntry scope_53_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_Int_to_Q_UPDOWN, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_UPDOWN, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_Int_to_Q_UPDOWN, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_UPDOWN), offsetof(outC_TOOLS_Int_to_Q_UPDOWN, _L25), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(Q_UPDOWN), offsetof(outC_TOOLS_Int_to_Q_UPDOWN, _L26), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_UPDOWN), offsetof(outC_TOOLS_Int_to_Q_UPDOWN, _L3), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_OUTPUT, "q_updown", NULL, sizeof(Q_UPDOWN), offsetof(outC_TOOLS_Int_to_Q_UPDOWN, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_53 = {
  "TOOLS_Int_to_Q_UPDOWN/ TOOLS_Int_to_Q_UPDOWN",
  scope_53_entries, 7,
};

/* FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/ */
static const MappingEntry scope_52_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L1_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L3_7), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_52 = {
  "FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/",
  scope_52_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/ */
static const MappingEntry scope_51_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L1_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L3_6), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_51 = {
  "FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/",
  scope_51_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/ */
static const MappingEntry scope_50_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L1_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L3_5), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_50 = {
  "FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/",
  scope_50_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/ */
static const MappingEntry scope_49_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L1_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L3_4), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_49 = {
  "FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/",
  scope_49_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/ */
static const MappingEntry scope_48_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L1_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L3_3), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_48 = {
  "FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/",
  scope_48_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/ */
static const MappingEntry scope_47_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L1_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L3_2), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_47 = {
  "FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/",
  scope_47_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLib */
static const MappingEntry scope_46_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_341_0 1", NULL, sizeof(outC_Balise_341_0_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _2_Context_1), NULL, NULL, NULL, &scope_111, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_341_1 1", NULL, sizeof(outC_Balise_341_1_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_112, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _3_Context_1), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_98, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_51, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_52, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L11), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L13), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L16), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L19), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L29), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L8), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_341_FirstTest_InfraLib, _L9), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 19}
};
static const MappingScope scope_46 = {
  "FirstTest::InfraLib::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLib",
  scope_46_entries, 37,
};

/* FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/ */
static const MappingEntry scope_45_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L1_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L3_7), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_45 = {
  "FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/",
  scope_45_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/ */
static const MappingEntry scope_44_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L1_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L3_6), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_44 = {
  "FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/",
  scope_44_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/ */
static const MappingEntry scope_43_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L1_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L3_5), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_43 = {
  "FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/",
  scope_43_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/ */
static const MappingEntry scope_42_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L1_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L3_4), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_42 = {
  "FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/",
  scope_42_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/ */
static const MappingEntry scope_41_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L1_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L3_3), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_41 = {
  "FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/",
  scope_41_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/ */
static const MappingEntry scope_40_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L1_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L3_2), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_40 = {
  "FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/",
  scope_40_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLib */
static const MappingEntry scope_39_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_369_0 1", NULL, sizeof(outC_Balise_369_0_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_110, 1, 9},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_369_1 1", NULL, sizeof(outC_Balise_369_1_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _2_Context_1), NULL, NULL, NULL, &scope_109, 1, 0},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _3_Context_1), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_98, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_43, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_45, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L11), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L13), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L16), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L19), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L29), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L8), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_369_FirstTest_InfraLib, _L9), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 19}
};
static const MappingScope scope_39 = {
  "FirstTest::InfraLib::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLib",
  scope_39_entries, 37,
};

/* FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/ */
static const MappingEntry scope_38_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L1_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L3_7), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_38 = {
  "FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/",
  scope_38_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/ */
static const MappingEntry scope_37_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L1_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L3_6), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_37 = {
  "FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/",
  scope_37_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/ */
static const MappingEntry scope_36_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L1_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L3_5), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_36 = {
  "FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/",
  scope_36_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/ */
static const MappingEntry scope_35_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L1_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L3_4), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_35 = {
  "FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/",
  scope_35_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/ */
static const MappingEntry scope_34_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L1_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L3_3), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_34 = {
  "FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/",
  scope_34_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/ */
static const MappingEntry scope_33_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L1_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L3_2), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_33 = {
  "FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/",
  scope_33_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLib */
static const MappingEntry scope_32_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_368_0 1", NULL, sizeof(outC_Balise_368_0_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_108, 1, 9},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_368_1 1", NULL, sizeof(outC_Balise_368_1_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _2_Context_1), NULL, NULL, NULL, &scope_107, 1, 0},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _3_Context_1), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_98, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_37, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L11), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L13), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L16), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L19), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L29), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L8), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_368_FirstTest_InfraLib, _L9), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 19}
};
static const MappingScope scope_32 = {
  "FirstTest::InfraLib::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLib",
  scope_32_entries, 37,
};

/* FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/ */
static const MappingEntry scope_31_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L1_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L3_7), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_31 = {
  "FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/",
  scope_31_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/ */
static const MappingEntry scope_30_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L1_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L3_6), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_30 = {
  "FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/",
  scope_30_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/ */
static const MappingEntry scope_29_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L1_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L3_5), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_29 = {
  "FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/",
  scope_29_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/ */
static const MappingEntry scope_28_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L1_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L3_4), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_28 = {
  "FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/",
  scope_28_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/ */
static const MappingEntry scope_27_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L1_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L3_3), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_27 = {
  "FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/",
  scope_27_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/ */
static const MappingEntry scope_26_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L1_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L3_2), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_26 = {
  "FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/",
  scope_26_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLib */
static const MappingEntry scope_25_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_367_0 1", NULL, sizeof(outC_Balise_367_0_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _2_Context_1), NULL, NULL, NULL, &scope_105, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_367_1 1", NULL, sizeof(outC_Balise_367_1_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_106, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _3_Context_1), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_98, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L11), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L13), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L16), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L19), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L29), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L8), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_367_FirstTest_InfraLib, _L9), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 19}
};
static const MappingScope scope_25 = {
  "FirstTest::InfraLib::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLib",
  scope_25_entries, 37,
};

/* FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/ */
static const MappingEntry scope_24_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L1_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L3_7), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_24 = {
  "FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/",
  scope_24_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/ */
static const MappingEntry scope_23_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L1_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L3_6), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_23 = {
  "FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/",
  scope_23_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/ */
static const MappingEntry scope_22_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L1_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L3_5), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_22 = {
  "FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/",
  scope_22_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/ */
static const MappingEntry scope_21_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L1_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L3_4), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_21 = {
  "FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/",
  scope_21_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/ */
static const MappingEntry scope_20_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L1_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L3_3), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_20 = {
  "FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/",
  scope_20_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/ */
static const MappingEntry scope_19_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L1_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L3_2), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_19 = {
  "FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/",
  scope_19_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLib */
static const MappingEntry scope_18_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_366_0 1", NULL, sizeof(outC_Balise_366_0_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _2_Context_1), NULL, NULL, NULL, &scope_103, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_366_1 1", NULL, sizeof(outC_Balise_366_1_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_104, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _3_Context_1), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_98, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L11), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L13), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L16), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L19), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L29), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L8), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_366_FirstTest_InfraLib, _L9), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 19}
};
static const MappingScope scope_18 = {
  "FirstTest::InfraLib::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLib",
  scope_18_entries, 37,
};

/* FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/ */
static const MappingEntry scope_17_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L1_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L3_6), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_17 = {
  "FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/",
  scope_17_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/ */
static const MappingEntry scope_16_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L1_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L3_5), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_16 = {
  "FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/",
  scope_16_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/ */
static const MappingEntry scope_15_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L1_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L3_4), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_15 = {
  "FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/",
  scope_15_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/ */
static const MappingEntry scope_14_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L1_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L3_3), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_14 = {
  "FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/",
  scope_14_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/ */
static const MappingEntry scope_13_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L1_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L3_2), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_13 = {
  "FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/",
  scope_13_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 1/ */
static const MappingEntry scope_12_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, B_data_out_1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L1_1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L3_1), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_12 = {
  "FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 1/",
  scope_12_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLib */
static const MappingEntry scope_11_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_365_0 1", NULL, sizeof(outC_Balise_365_0_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _2_Context_1), NULL, NULL, NULL, &scope_101, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_365_1 1", NULL, sizeof(outC_Balise_365_1_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_102, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _3_Context_1), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_98, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L11), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L13), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L16), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L19), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L29), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L8), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_365_FirstTest_InfraLib, _L9), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 19}
};
static const MappingScope scope_11 = {
  "FirstTest::InfraLib::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLib",
  scope_11_entries, 37,
};

/* FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/ */
static const MappingEntry scope_10_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L1_7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L3_7), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_10 = {
  "FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 7/",
  scope_10_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/ */
static const MappingEntry scope_9_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L1_6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L3_6), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_9 = {
  "FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 6/",
  scope_9_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/ */
static const MappingEntry scope_8_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L1_5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L3_5), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_8 = {
  "FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 5/",
  scope_8_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/ */
static const MappingEntry scope_7_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L1_4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L3_4), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_7 = {
  "FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 4/",
  scope_7_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/ */
static const MappingEntry scope_6_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L1_3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L3_3), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_6 = {
  "FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 3/",
  scope_6_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/ */
static const MappingEntry scope_5_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L1_2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L3_2), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 3}
};
static const MappingScope scope_5 = {
  "FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibFirstTest::InfraLib::No_Balise 2/",
  scope_5_entries, 4,
};

/* FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLib */
static const MappingEntry scope_4_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, BG_message_out), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_364_0 1", NULL, sizeof(outC_Balise_364_0_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_100, 1, 9},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_364_1 1", NULL, sizeof(outC_Balise_364_1_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _2_Context_1), NULL, NULL, NULL, &scope_97, 1, 0},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _3_Context_1), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, Context_1), NULL, NULL, NULL, &scope_98, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLib::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L1), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L11), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L13), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L16), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(TM_BaliseGroupData), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L19), &_Type_TM_BaliseGroupData_Utils, NULL, NULL, &scope_177, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L2), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L29), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L3), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L4), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L5), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L6), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L7), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L8), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLib), offsetof(outC_Balise_Group_364_FirstTest_InfraLib, _L9), &_Type_B_data_internal_FirstTest_InfraLib_Utils, NULL, NULL, &scope_179, 1, 19}
};
static const MappingScope scope_4 = {
  "FirstTest::InfraLib::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLib",
  scope_4_entries, 37,
};

/* RECV_ConvertBaliseHeader_CT/ RECV_ConvertBaliseHeader_CT */
static const MappingEntry scope_3_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "BaliseTelegramHeaderOut", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertBaliseHeader_CT, BaliseTelegramHeaderOut), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_172, 1, 26},
  /* 1 */ { MAP_INSTANCE, "TOOLS_Int_to_M_DUP 1", NULL, sizeof(outC_TOOLS_Int_to_M_DUP), offsetof(outC_RECV_ConvertBaliseHeader_CT, _1_Context_1), NULL, NULL, NULL, &scope_88, 1, 5},
  /* 2 */ { MAP_INSTANCE, "TOOLS_Int_to_M_VERSION 1", NULL, sizeof(outC_TOOLS_Int_to_M_VERSION), offsetof(outC_RECV_ConvertBaliseHeader_CT, _5_Context_1), NULL, NULL, NULL, &scope_54, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TOOLS_Int_to_N_PIG 1", NULL, sizeof(outC_TOOLS_Int_to_N_PIG), offsetof(outC_RECV_ConvertBaliseHeader_CT, _3_Context_1), NULL, NULL, NULL, &scope_56, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TOOLS_Int_to_N_TOTAL 1", NULL, sizeof(outC_TOOLS_Int_to_N_TOTAL), offsetof(outC_RECV_ConvertBaliseHeader_CT, _2_Context_1), NULL, NULL, NULL, &scope_72, 1, 4},
  /* 5 */ { MAP_INSTANCE, "TOOLS_Int_to_Q_LINK 1", NULL, sizeof(outC_TOOLS_Int_to_Q_LINK), offsetof(outC_RECV_ConvertBaliseHeader_CT, Context_1), NULL, NULL, NULL, &scope_96, 1, 6},
  /* 6 */ { MAP_INSTANCE, "TOOLS_Int_to_Q_MEDIA 1", NULL, sizeof(outC_TOOLS_Int_to_Q_MEDIA), offsetof(outC_RECV_ConvertBaliseHeader_CT, _4_Context_1), NULL, NULL, NULL, &scope_55, 1, 2},
  /* 7 */ { MAP_INSTANCE, "TOOLS_Int_to_Q_UPDOWN 1", NULL, sizeof(outC_TOOLS_Int_to_Q_UPDOWN), offsetof(outC_RECV_ConvertBaliseHeader_CT, _6_Context_1), NULL, NULL, NULL, &scope_53, 1, 0},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(TM_BaliseTelegramHeader_int_T), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L1), &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L42), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_172, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(Q_UPDOWN), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L43), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(M_VERSION), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L44), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L45", NULL, sizeof(Q_MEDIA), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L45), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L46", NULL, sizeof(N_PIG), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L46), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 22},
  /* 19 */ { MAP_LOCAL, "_L47", NULL, sizeof(N_TOTAL), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L47), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L48", NULL, sizeof(M_DUP), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L48), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 24},
  /* 21 */ { MAP_LOCAL, "_L49", NULL, sizeof(Q_LINK), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L49), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_3 = {
  "RECV_ConvertBaliseHeader_CT/ RECV_ConvertBaliseHeader_CT",
  scope_3_entries, 27,
};

/* FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest */
static const MappingEntry scope_2_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "BM", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, BM), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 16},
  /* 1 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_341 1", NULL, sizeof(outC_Balise_Group_341_FirstTest_InfraLib), offsetof(outC_Story00A_BTM_FirstTest, _6_Context_1), NULL, NULL, NULL, &scope_46, 1, 6},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_364 1", NULL, sizeof(outC_Balise_Group_364_FirstTest_InfraLib), offsetof(outC_Story00A_BTM_FirstTest, Context_1), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_365 1", NULL, sizeof(outC_Balise_Group_365_FirstTest_InfraLib), offsetof(outC_Story00A_BTM_FirstTest, _1_Context_1), NULL, NULL, NULL, &scope_11, 1, 1},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_366 1", NULL, sizeof(outC_Balise_Group_366_FirstTest_InfraLib), offsetof(outC_Story00A_BTM_FirstTest, _2_Context_1), NULL, NULL, NULL, &scope_18, 1, 2},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_367 1", NULL, sizeof(outC_Balise_Group_367_FirstTest_InfraLib), offsetof(outC_Story00A_BTM_FirstTest, _3_Context_1), NULL, NULL, NULL, &scope_25, 1, 3},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_368 1", NULL, sizeof(outC_Balise_Group_368_FirstTest_InfraLib), offsetof(outC_Story00A_BTM_FirstTest, _4_Context_1), NULL, NULL, NULL, &scope_32, 1, 4},
  /* 7 */ { MAP_INSTANCE, "FirstTest::InfraLib::Balise_Group_369 1", NULL, sizeof(outC_Balise_Group_369_FirstTest_InfraLib), offsetof(outC_Story00A_BTM_FirstTest, _5_Context_1), NULL, NULL, NULL, &scope_39, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L30", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L30), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_real), offsetof(outC_Story00A_BTM_FirstTest, _L31), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L32", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L32), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L33", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L33), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L34", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L34), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L35", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L35), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L36", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L36), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L37", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L37), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L38", NULL, sizeof(TM_CompressedBaliseMessage), offsetof(outC_Story00A_BTM_FirstTest, _L38), &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 15}
};
static const MappingScope scope_2 = {
  "FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest",
  scope_2_entries, 17,
};

/* FirstTest::Story00A/ Story00A_FirstTest */
static const MappingEntry scope_1_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "FirstTest::Story00A_BTM 1", NULL, sizeof(outC_Story00A_BTM_FirstTest), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_INPUT, "Loc", NULL, sizeof(kcg_real), (int)&inputs_ctx.Loc, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx.Packets_Out, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 7},
  /* 3 */ { MAP_INSTANCE, "RECV_ConvertBaliseHeader_CT 1", NULL, sizeof(outC_RECV_ConvertBaliseHeader_CT), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 4 */ { MAP_OUTPUT, "TelegramHeader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (int)&outputs_ctx.TelegramHeader, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_172, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(TM_BaliseTelegramHeader_int_T), (int)&outputs_ctx._L1, &_Type_TM_BaliseTelegramHeader_int_T_Utils, NULL, NULL, &scope_178, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L2, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_176, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(TM_CompressedBaliseMessage), (int)&outputs_ctx._L4, &_Type_TM_CompressedBaliseMessage_Utils, NULL, NULL, &scope_180, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (int)&outputs_ctx._L7, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_172, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), (int)&outputs_ctx._L8, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_1 = {
  "FirstTest::Story00A/ Story00A_FirstTest",
  scope_1_entries, 10,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "FirstTest::Story00A", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

