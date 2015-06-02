/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_25;
static const MappingIterator iter_array_18;
static const MappingIterator iter_array_11;
static const MappingIterator iter_array_461;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_39;
static const MappingIterator iter_array_7;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_4;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_25 = { "array", 25, 25, NULL};
static const MappingIterator iter_array_18 = { "array", 18, 18, NULL};
static const MappingIterator iter_array_11 = { "array", 11, 11, NULL};
static const MappingIterator iter_array_461 = { "array", 461, 461, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_39 = { "array", 39, 39, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_268, 1);
MAP_DECL(scope_267, 1);
MAP_DECL(scope_266, 1);
MAP_DECL(scope_265, 1);
MAP_DECL(scope_264, 1);
MAP_DECL(scope_263, 1);
MAP_DECL(scope_262, 1);
MAP_DECL(scope_261, 6);
MAP_DECL(scope_260, 1);
MAP_DECL(scope_259, 8);
MAP_DECL(scope_258, 6);
MAP_DECL(scope_257, 5);
MAP_DECL(scope_256, 2);
MAP_DECL(scope_255, 10);
MAP_DECL(scope_254, 1);
MAP_DECL(scope_253, 1);
MAP_DECL(scope_252, 1);
MAP_DECL(scope_251, 2);
MAP_DECL(scope_250, 1);
MAP_DECL(scope_249, 5);
MAP_DECL(scope_248, 1);
MAP_DECL(scope_247, 10);
MAP_DECL(scope_246, 1);
MAP_DECL(scope_245, 11);
MAP_DECL(scope_240, 9);
MAP_DECL(scope_239, 11);
MAP_DECL(scope_238, 15);
MAP_DECL(scope_237, 10);
MAP_DECL(scope_236, 43);
MAP_DECL(scope_235, 12);
MAP_DECL(scope_234, 26);
MAP_DECL(scope_233, 17);
MAP_DECL(scope_232, 9);
MAP_DECL(scope_231, 5);
MAP_DECL(scope_230, 6);
MAP_DECL(scope_229, 15);
MAP_DECL(scope_228, 2);
MAP_DECL(scope_227, 2);
MAP_DECL(scope_226, 2);
MAP_DECL(scope_225, 2);
MAP_DECL(scope_224, 2);
MAP_DECL(scope_223, 2);
MAP_DECL(scope_222, 2);
MAP_DECL(scope_221, 2);
MAP_DECL(scope_220, 2);
MAP_DECL(scope_219, 2);
MAP_DECL(scope_218, 2);
MAP_DECL(scope_217, 2);
MAP_DECL(scope_216, 2);
MAP_DECL(scope_215, 2);
MAP_DECL(scope_214, 2);
MAP_DECL(scope_213, 2);
MAP_DECL(scope_212, 2);
MAP_DECL(scope_211, 2);
MAP_DECL(scope_210, 2);
MAP_DECL(scope_209, 2);
MAP_DECL(scope_208, 54);
MAP_DECL(scope_207, 2);
MAP_DECL(scope_206, 2);
MAP_DECL(scope_205, 2);
MAP_DECL(scope_204, 2);
MAP_DECL(scope_203, 2);
MAP_DECL(scope_202, 2);
MAP_DECL(scope_201, 2);
MAP_DECL(scope_200, 2);
MAP_DECL(scope_199, 2);
MAP_DECL(scope_198, 2);
MAP_DECL(scope_197, 2);
MAP_DECL(scope_196, 2);
MAP_DECL(scope_195, 2);
MAP_DECL(scope_194, 2);
MAP_DECL(scope_193, 2);
MAP_DECL(scope_192, 2);
MAP_DECL(scope_191, 2);
MAP_DECL(scope_190, 2);
MAP_DECL(scope_189, 2);
MAP_DECL(scope_188, 54);
MAP_DECL(scope_187, 24);
MAP_DECL(scope_186, 6);
MAP_DECL(scope_185, 2);
MAP_DECL(scope_184, 2);
MAP_DECL(scope_183, 2);
MAP_DECL(scope_182, 2);
MAP_DECL(scope_181, 3);
MAP_DECL(scope_180, 3);
MAP_DECL(scope_179, 3);
MAP_DECL(scope_178, 6);
MAP_DECL(scope_177, 2);
MAP_DECL(scope_176, 2);
MAP_DECL(scope_175, 2);
MAP_DECL(scope_174, 2);
MAP_DECL(scope_173, 3);
MAP_DECL(scope_172, 3);
MAP_DECL(scope_171, 3);
MAP_DECL(scope_170, 6);
MAP_DECL(scope_169, 2);
MAP_DECL(scope_168, 2);
MAP_DECL(scope_167, 2);
MAP_DECL(scope_166, 3);
MAP_DECL(scope_165, 3);
MAP_DECL(scope_164, 6);
MAP_DECL(scope_163, 2);
MAP_DECL(scope_162, 2);
MAP_DECL(scope_161, 2);
MAP_DECL(scope_160, 3);
MAP_DECL(scope_159, 3);
MAP_DECL(scope_158, 6);
MAP_DECL(scope_157, 2);
MAP_DECL(scope_156, 2);
MAP_DECL(scope_155, 2);
MAP_DECL(scope_154, 2);
MAP_DECL(scope_153, 3);
MAP_DECL(scope_152, 3);
MAP_DECL(scope_151, 3);
MAP_DECL(scope_150, 6);
MAP_DECL(scope_149, 14);
MAP_DECL(scope_148, 9);
MAP_DECL(scope_147, 13);
MAP_DECL(scope_146, 13);
MAP_DECL(scope_145, 13);
MAP_DECL(scope_144, 13);
MAP_DECL(scope_143, 13);
MAP_DECL(scope_142, 13);
MAP_DECL(scope_141, 13);
MAP_DECL(scope_140, 13);
MAP_DECL(scope_139, 13);
MAP_DECL(scope_138, 13);
MAP_DECL(scope_137, 13);
MAP_DECL(scope_136, 13);
MAP_DECL(scope_135, 13);
MAP_DECL(scope_134, 10);
MAP_DECL(scope_133, 9);
MAP_DECL(scope_132, 13);
MAP_DECL(scope_131, 31);
MAP_DECL(scope_130, 12);
MAP_DECL(scope_129, 17);
MAP_DECL(scope_128, 2);
MAP_DECL(scope_127, 2);
MAP_DECL(scope_126, 2);
MAP_DECL(scope_125, 3);
MAP_DECL(scope_124, 3);
MAP_DECL(scope_123, 6);
MAP_DECL(scope_122, 2);
MAP_DECL(scope_121, 2);
MAP_DECL(scope_120, 2);
MAP_DECL(scope_119, 2);
MAP_DECL(scope_118, 3);
MAP_DECL(scope_117, 3);
MAP_DECL(scope_116, 3);
MAP_DECL(scope_115, 6);
MAP_DECL(scope_114, 2);
MAP_DECL(scope_113, 2);
MAP_DECL(scope_112, 2);
MAP_DECL(scope_111, 2);
MAP_DECL(scope_110, 2);
MAP_DECL(scope_109, 2);
MAP_DECL(scope_108, 2);
MAP_DECL(scope_107, 2);
MAP_DECL(scope_106, 2);
MAP_DECL(scope_105, 3);
MAP_DECL(scope_104, 3);
MAP_DECL(scope_103, 3);
MAP_DECL(scope_102, 3);
MAP_DECL(scope_101, 3);
MAP_DECL(scope_100, 3);
MAP_DECL(scope_99, 3);
MAP_DECL(scope_98, 3);
MAP_DECL(scope_97, 6);
MAP_DECL(scope_96, 2);
MAP_DECL(scope_95, 2);
MAP_DECL(scope_94, 2);
MAP_DECL(scope_93, 2);
MAP_DECL(scope_92, 2);
MAP_DECL(scope_91, 2);
MAP_DECL(scope_90, 2);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 2);
MAP_DECL(scope_87, 3);
MAP_DECL(scope_86, 3);
MAP_DECL(scope_85, 3);
MAP_DECL(scope_84, 3);
MAP_DECL(scope_83, 3);
MAP_DECL(scope_82, 3);
MAP_DECL(scope_81, 3);
MAP_DECL(scope_80, 3);
MAP_DECL(scope_79, 6);
MAP_DECL(scope_78, 2);
MAP_DECL(scope_77, 2);
MAP_DECL(scope_76, 2);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 3);
MAP_DECL(scope_73, 6);
MAP_DECL(scope_72, 2);
MAP_DECL(scope_71, 2);
MAP_DECL(scope_70, 2);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 2);
MAP_DECL(scope_67, 3);
MAP_DECL(scope_66, 3);
MAP_DECL(scope_65, 3);
MAP_DECL(scope_64, 3);
MAP_DECL(scope_63, 6);
MAP_DECL(scope_62, 2);
MAP_DECL(scope_61, 2);
MAP_DECL(scope_60, 2);
MAP_DECL(scope_59, 3);
MAP_DECL(scope_58, 3);
MAP_DECL(scope_57, 6);
MAP_DECL(scope_56, 4);
MAP_DECL(scope_55, 4);
MAP_DECL(scope_54, 4);
MAP_DECL(scope_53, 4);
MAP_DECL(scope_52, 4);
MAP_DECL(scope_51, 4);
MAP_DECL(scope_50, 37);
MAP_DECL(scope_49, 4);
MAP_DECL(scope_48, 4);
MAP_DECL(scope_47, 4);
MAP_DECL(scope_46, 4);
MAP_DECL(scope_45, 4);
MAP_DECL(scope_44, 4);
MAP_DECL(scope_43, 37);
MAP_DECL(scope_42, 4);
MAP_DECL(scope_41, 4);
MAP_DECL(scope_40, 4);
MAP_DECL(scope_39, 4);
MAP_DECL(scope_38, 4);
MAP_DECL(scope_37, 4);
MAP_DECL(scope_36, 37);
MAP_DECL(scope_35, 4);
MAP_DECL(scope_34, 4);
MAP_DECL(scope_33, 4);
MAP_DECL(scope_32, 4);
MAP_DECL(scope_31, 4);
MAP_DECL(scope_30, 4);
MAP_DECL(scope_29, 37);
MAP_DECL(scope_28, 4);
MAP_DECL(scope_27, 4);
MAP_DECL(scope_26, 4);
MAP_DECL(scope_25, 4);
MAP_DECL(scope_24, 4);
MAP_DECL(scope_23, 4);
MAP_DECL(scope_22, 37);
MAP_DECL(scope_21, 4);
MAP_DECL(scope_20, 4);
MAP_DECL(scope_19, 4);
MAP_DECL(scope_18, 4);
MAP_DECL(scope_17, 4);
MAP_DECL(scope_16, 4);
MAP_DECL(scope_15, 37);
MAP_DECL(scope_14, 4);
MAP_DECL(scope_13, 4);
MAP_DECL(scope_12, 4);
MAP_DECL(scope_11, 4);
MAP_DECL(scope_10, 4);
MAP_DECL(scope_9, 4);
MAP_DECL(scope_8, 37);
MAP_DECL(scope_7, 61);
MAP_DECL(scope_6, 14);
MAP_DECL(scope_5, 27);
MAP_DECL(scope_4, 17);
MAP_DECL(scope_3, 9);
MAP_DECL(scope_2, 9);
MAP_DECL(scope_1, 11);
MAP_DECL(scope_0, 1);

/* array_int_30 */
static const MappingEntry scope_268_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_268 = {
  "array_int_30",
  scope_268_entries, 1,
};

/* array_int_32 */
static const MappingEntry scope_267_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_267 = {
  "array_int_32",
  scope_267_entries, 1,
};

/* array_int_25 */
static const MappingEntry scope_266_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_25, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_266 = {
  "array_int_25",
  scope_266_entries, 1,
};

/* array_int_18 */
static const MappingEntry scope_265_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_18, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_265 = {
  "array_int_18",
  scope_265_entries, 1,
};

/* array_int_11 */
static const MappingEntry scope_264_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_264 = {
  "array_int_11",
  scope_264_entries, 1,
};

/* array_int_461 */
static const MappingEntry scope_263_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_461, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_263 = {
  "array_int_461",
  scope_263_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_262_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 0}
};
static const MappingScope scope_262 = {
  "array_int_500_500",
  scope_262_entries, 1,
};

/* struct__4942 */
static const MappingEntry scope_261_entries[6] = {
  /* 0 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__4942, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__4942, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__4942, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__4942, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__4939), offsetof(struct__4942, SECTIONS), &_Type_array__4939_Utils, NULL, NULL, &scope_260, 1, 5},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__4942, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_261 = {
  "struct__4942",
  scope_261_entries, 6,
};

/* array__4939 */
static const MappingEntry scope_260_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(struct__4928), 0, &_Type_struct__4928_Utils, NULL, NULL, &scope_259, 1, 0}
};
static const MappingScope scope_260 = {
  "array__4939",
  scope_260_entries, 1,
};

/* struct__4928 */
static const MappingEntry scope_259_entries[8] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__4928, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__4928, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__4928, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__4928, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__4928, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__4928, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__4928, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__4928, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_259 = {
  "struct__4928",
  scope_259_entries, 8,
};

/* struct__4919 */
static const MappingEntry scope_258_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(struct__4919, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(struct__4919, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(struct__4919, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(struct__4893), offsetof(struct__4919, header), &_Type_struct__4893_Utils, NULL, NULL, &scope_255, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__4879), offsetof(struct__4919, packets), &_Type_struct__4879_Utils, NULL, NULL, &scope_251, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(struct__4919, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_258 = {
  "struct__4919",
  scope_258_entries, 6,
};

/* struct__4911 */
static const MappingEntry scope_257_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__4911, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__4911, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(OrBG_TM), offsetof(struct__4911, Or_BG), &_Type_OrBG_TM_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(OrLine_TM), offsetof(struct__4911, Or_Line), &_Type_OrLine_TM_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(struct__4911, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_257 = {
  "struct__4911",
  scope_257_entries, 5,
};

/* struct__4906 */
static const MappingEntry scope_256_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__4893), offsetof(struct__4906, Header), &_Type_struct__4893_Utils, NULL, NULL, &scope_255, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__4879), offsetof(struct__4906, Messages), &_Type_struct__4879_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_256 = {
  "struct__4906",
  scope_256_entries, 2,
};

/* struct__4893 */
static const MappingEntry scope_255_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(struct__4893, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__4893, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__4893, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(struct__4893, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(struct__4893, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__4893, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__4893, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(struct__4893, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(struct__4893, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(struct__4893, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_255 = {
  "struct__4893",
  scope_255_entries, 10,
};

/* array_int_39 */
static const MappingEntry scope_254_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_39, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_254 = {
  "array_int_39",
  scope_254_entries, 1,
};

/* array_int_7 */
static const MappingEntry scope_253_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_253 = {
  "array_int_7",
  scope_253_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_252_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_252 = {
  "array_int_4",
  scope_252_entries, 1,
};

/* struct__4879 */
static const MappingEntry scope_251_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__4879, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__4876), offsetof(struct__4879, PacketHeaders), &_Type_array__4876_Utils, NULL, NULL, &scope_250, 1, 0}
};
static const MappingScope scope_251 = {
  "struct__4879",
  scope_251_entries, 2,
};

/* array__4876 */
static const MappingEntry scope_250_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__4868), 0, &_Type_struct__4868_Utils, NULL, NULL, &scope_249, 1, 0}
};
static const MappingScope scope_250 = {
  "array__4876",
  scope_250_entries, 1,
};

/* struct__4868 */
static const MappingEntry scope_249_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__4868, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__4868, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__4868, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__4868, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__4868, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_249 = {
  "struct__4868",
  scope_249_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_248_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_248 = {
  "array_int_500",
  scope_248_entries, 1,
};

/* struct__4852 */
static const MappingEntry scope_247_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP), offsetof(struct__4852, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__4852, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__4852, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG), offsetof(struct__4852, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__4852, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__4852, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__4852, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__4852, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__4852, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__4852, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_247 = {
  "struct__4852",
  scope_247_entries, 10,
};

/* array__4849 */
static const MappingEntry scope_246_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(struct__4835), 0, &_Type_struct__4835_Utils, NULL, NULL, &scope_245, 1, 0}
};
static const MappingScope scope_246 = {
  "array__4849",
  scope_246_entries, 1,
};

/* struct__4835 */
static const MappingEntry scope_245_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__4835, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_LRBG", NULL, sizeof(kcg_int), offsetof(struct__4835, nid_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__4835, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__4835, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__4835, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__4835, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__4835, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__4835, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__4835, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__4835, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__4835, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_245 = {
  "struct__4835",
  scope_245_entries, 11,
};

/* TM_conversions::TOOLS_calculate_L_PACKET/ TOOLS_calculate_L_PACKET_TM_conversions */
static const MappingEntry scope_240_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "L_PACKET", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_OUTPUT, "N_ITER_out", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, N_ITER_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_calculate_L_PACKET_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_240 = {
  "TM_conversions::TOOLS_calculate_L_PACKET/ TOOLS_calculate_L_PACKET_TM_conversions",
  scope_240_entries, 9,
};

/* TM_conversions::SEND_ConvertP005forWriteSection_IT/ SEND_ConvertP005forWriteS_TM_conversions */
static const MappingEntry scope_239_entries[11] = {
  /* 0 */ { MAP_OUTPUT, "SectionArray", NULL, sizeof(P005E_array_T_TM), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, SectionArray), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_253, 1, 10},
  /* 1 */ { MAP_LOCAL, "_L365", NULL, sizeof(P005E_T_TM), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L365), &_Type_P005E_T_TM_Utils, NULL, NULL, &scope_259, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_bool), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L367), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L372", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L372), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L373", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L373), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L374", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L374), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_7), offsetof(outC_SEND_ConvertP005forWriteS_TM_conversions, _L383), &_Type_array_int_7_Utils, NULL, NULL, &scope_253, 1, 9}
};
static const MappingScope scope_239 = {
  "TM_conversions::SEND_ConvertP005forWriteSection_IT/ SEND_ConvertP005forWriteS_TM_conversions",
  scope_239_entries, 11,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_238_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_238 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_238_entries, 15,
};

/* DRAFTS::SEND_FindSlot/ SEND_FindSlot_DRAFTS */
static const MappingEntry scope_237_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_DRAFTS, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_DRAFTS, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_DRAFTS, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_DRAFTS, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_DRAFTS, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_DRAFTS, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 2}
};
static const MappingScope scope_237 = {
  "DRAFTS::SEND_FindSlot/ SEND_FindSlot_DRAFTS",
  scope_237_entries, 10,
};

/* TM_conversions::SEND_ConvertP005forWrite_IT/ SEND_ConvertP005forWrite_IT_TM_conversions */
static const MappingEntry scope_236_entries[43] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 41},
  /* 1 */ { MAP_OUTPUT, "RM05_out", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, RM05_out), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 42},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, sizeof(outC_CAST_Int_to_Q_DIR_TM_conversions), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_170, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::SEND_ConvertP005forWriteSection_IT 1", NULL, sizeof(outC_SEND_ConvertP005forWriteS_TM_conversions), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_239, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::SEND_ConvertP005forWriteSection_IT 2", NULL, sizeof(outC_SEND_ConvertP005forWriteS_TM_conversions), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, Context_2), NULL, NULL, NULL, &scope_239, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::SEND_ConvertP005forWriteSection_IT 3", NULL, sizeof(outC_SEND_ConvertP005forWriteS_TM_conversions), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, Context_3), NULL, NULL, NULL, &scope_239, 1, 3},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::SEND_ConvertP005forWriteSection_IT 4", NULL, sizeof(outC_SEND_ConvertP005forWriteS_TM_conversions), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, Context_4), NULL, NULL, NULL, &scope_239, 1, 4},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::SEND_ConvertP005forWriteSection_IT 5", NULL, sizeof(outC_SEND_ConvertP005forWriteS_TM_conversions), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, Context_5), NULL, NULL, NULL, &scope_239, 1, 5},
  /* 8 */ { MAP_INSTANCE, "TM_conversions::TOOLS_calculate_L_PACKET 1", NULL, sizeof(outC_TOOLS_calculate_L_PACKET_TM_conversions), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, Context_1), NULL, NULL, NULL, &scope_240, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L1), &_Type_P005_TM_Utils, NULL, NULL, &scope_261, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L205", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L205), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_461), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L209), &_Type_array_int_461_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L211", NULL, sizeof(array_int_500), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L211), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 18 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 19 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 20 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 21 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 22 */ { MAP_LOCAL, "_L219", NULL, sizeof(P005Es_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L219), &_Type_P005Es_T_TM_Utils, NULL, NULL, &scope_260, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L226", NULL, sizeof(P005E_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L226), &_Type_P005E_T_TM_Utils, NULL, NULL, &scope_259, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L227", NULL, sizeof(P005E_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L227), &_Type_P005E_T_TM_Utils, NULL, NULL, &scope_259, 1, 18},
  /* 25 */ { MAP_LOCAL, "_L228", NULL, sizeof(P005E_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L228), &_Type_P005E_T_TM_Utils, NULL, NULL, &scope_259, 1, 17},
  /* 26 */ { MAP_LOCAL, "_L229", NULL, sizeof(P005E_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L229), &_Type_P005E_T_TM_Utils, NULL, NULL, &scope_259, 1, 16},
  /* 27 */ { MAP_LOCAL, "_L230", NULL, sizeof(P005E_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L230), &_Type_P005E_T_TM_Utils, NULL, NULL, &scope_259, 1, 15},
  /* 28 */ { MAP_LOCAL, "_L325", NULL, sizeof(array_int_11), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L325), &_Type_array_int_11_Utils, NULL, NULL, &scope_264, 1, 20},
  /* 29 */ { MAP_LOCAL, "_L327", NULL, sizeof(array_int_18), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L327), &_Type_array_int_18_Utils, NULL, NULL, &scope_265, 1, 21},
  /* 30 */ { MAP_LOCAL, "_L328", NULL, sizeof(array_int_25), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L328), &_Type_array_int_25_Utils, NULL, NULL, &scope_266, 1, 22},
  /* 31 */ { MAP_LOCAL, "_L329", NULL, sizeof(array_int_32), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L329), &_Type_array_int_32_Utils, NULL, NULL, &scope_267, 1, 23},
  /* 32 */ { MAP_LOCAL, "_L330", NULL, sizeof(array_int_39), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L330), &_Type_array_int_39_Utils, NULL, NULL, &scope_254, 1, 24},
  /* 33 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 34 */ { MAP_LOCAL, "_L355", NULL, sizeof(array_int_4), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L355), &_Type_array_int_4_Utils, NULL, NULL, &scope_252, 1, 26},
  /* 35 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L357", NULL, sizeof(P005E_array_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L357), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_253, 1, 34},
  /* 37 */ { MAP_LOCAL, "_L358", NULL, sizeof(P005E_array_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L358), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_253, 1, 35},
  /* 38 */ { MAP_LOCAL, "_L359", NULL, sizeof(P005E_array_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L359), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_253, 1, 36},
  /* 39 */ { MAP_LOCAL, "_L360", NULL, sizeof(P005E_array_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L360), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_253, 1, 37},
  /* 40 */ { MAP_LOCAL, "_L361", NULL, sizeof(P005E_array_T_TM), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L361), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_253, 1, 38},
  /* 41 */ { MAP_LOCAL, "_L363", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L363), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 42 */ { MAP_LOCAL, "_L364", NULL, sizeof(kcg_int), offsetof(outC_SEND_ConvertP005forWrite_IT_TM_conversions, _L364), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39}
};
static const MappingScope scope_236 = {
  "TM_conversions::SEND_ConvertP005forWrite_IT/ SEND_ConvertP005forWrite_IT_TM_conversions",
  scope_236_entries, 43,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_235_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_238, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_262, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 10}
};
static const MappingScope scope_235 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_235_entries, 12,
};

/* DRAFTS::SIM_SEND_WriteBaliseMessageHeader/ SIM_SEND_WriteBaliseMessa_DRAFTS */
static const MappingEntry scope_234_entries[26] = {
  /* 0 */ { MAP_INSTANCE, "DRAFTS::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_DRAFTS), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, Context_1), NULL, NULL, NULL, &scope_237, 1, 0},
  /* 1 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 23},
  /* 2 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 3 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 5}
};
static const MappingScope scope_234 = {
  "DRAFTS::SIM_SEND_WriteBaliseMessageHeader/ SIM_SEND_WriteBaliseMessa_DRAFTS",
  scope_234_entries, 26,
};

/* TM_trackside::SEND_WritePacket005_IT/ SEND_WritePacket005_IT_TM_trackside */
static const MappingEntry scope_233_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "DRAFTS::SIM_SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_234, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 2 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 16},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::SEND_ConvertP005forWrite_IT 1", NULL, sizeof(outC_SEND_ConvertP005forWrite_IT_TM_conversions), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, Context_1), NULL, NULL, NULL, &scope_236, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_235, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_TM), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L1), &_Type_P005_TM_Utils, NULL, NULL, &scope_261, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WritePacket005_IT_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 13}
};
static const MappingScope scope_233 = {
  "TM_trackside::SEND_WritePacket005_IT/ SEND_WritePacket005_IT_TM_trackside",
  scope_233_entries, 17,
};

/* FirstTest::InfraLibInt::Send_364_P005/ Send_364_P005_FirstTest_InfraLibInt */
static const MappingEntry scope_232_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::SEND_WritePacket005_IT 1", NULL, sizeof(outC_SEND_WritePacket005_IT_TM_trackside), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, Context_1), NULL, &scope_232_entries[0], isActive_kcg_bool_kcg_true, &scope_233, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P005_TM), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, _L4), &_Type_P005_TM_Utils, NULL, NULL, &scope_261, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_364_P005_FirstTest_InfraLibInt, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_232 = {
  "FirstTest::InfraLibInt::Send_364_P005/ Send_364_P005_FirstTest_InfraLibInt",
  scope_232_entries, 9,
};

/* TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions */
static const MappingEntry scope_231_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Loc_real", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, Loc_real), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_231 = {
  "TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions",
  scope_231_entries, 5,
};

/* FirstTest::InfraLibInt::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLibIntmath::Abs 1/ */
static const MappingEntry scope_230_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_230 = {
  "FirstTest::InfraLibInt::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLibIntmath::Abs 1/",
  scope_230_entries, 6,
};

/* FirstTest::InfraLibInt::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLibInt */
static const MappingEntry scope_229_entries[15] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_OUTPUT, "distance_BB", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_FirstTest_InfraLibInt, distance_BB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_230, 1, 0}
};
static const MappingScope scope_229 = {
  "FirstTest::InfraLibInt::Balise_Interdistance/ Balise_Interdistance_FirstTest_InfraLibInt",
  scope_229_entries, 15,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 11/ */
static const MappingEntry scope_228_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_228 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 11/",
  scope_228_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 12/ */
static const MappingEntry scope_227_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_227 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 12/",
  scope_227_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 13/ */
static const MappingEntry scope_226_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_226 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 13/",
  scope_226_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 14/ */
static const MappingEntry scope_225_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_225 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 14/",
  scope_225_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 15/ */
static const MappingEntry scope_224_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_224 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 15/",
  scope_224_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 16/ */
static const MappingEntry scope_223_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_223 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 16/",
  scope_223_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 17/ */
static const MappingEntry scope_222_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_222 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 17/",
  scope_222_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 18/ */
static const MappingEntry scope_221_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_221 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 18/",
  scope_221_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 19/ */
static const MappingEntry scope_220_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_220 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 19/",
  scope_220_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 20/ */
static const MappingEntry scope_219_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_219 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 20/",
  scope_219_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 0/ */
static const MappingEntry scope_218_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_0), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_0), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_218 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 0/",
  scope_218_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 9/ */
static const MappingEntry scope_217_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_217 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 9/",
  scope_217_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 8/ */
static const MappingEntry scope_216_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_216 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 8/",
  scope_216_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 7/ */
static const MappingEntry scope_215_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_215 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 7/",
  scope_215_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 6/ */
static const MappingEntry scope_214_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_214 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 6/",
  scope_214_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 5/ */
static const MappingEntry scope_213_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_213 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 5/",
  scope_213_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 4/ */
static const MappingEntry scope_212_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_212 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 4/",
  scope_212_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 3/ */
static const MappingEntry scope_211_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_211 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 3/",
  scope_211_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 2/ */
static const MappingEntry scope_210_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_210 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 2/",
  scope_210_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 1/ */
static const MappingEntry scope_209_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_209 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 1/",
  scope_209_entries, 2,
};

/* FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibInt */
static const MappingEntry scope_208_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, Balise_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 53},
  /* 4 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 0", NULL, 0, 0, NULL, NULL, NULL, &scope_218, 1, 9},
  /* 5 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_209, 1, 0},
  /* 6 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_228, 1, 19},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_227, 1, 18},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_226, 1, 17},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_225, 1, 16},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_224, 1, 15},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_223, 1, 14},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_222, 1, 13},
  /* 13 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_221, 1, 12},
  /* 14 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_220, 1, 11},
  /* 15 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_210, 1, 1},
  /* 16 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 20", NULL, 0, 0, NULL, NULL, NULL, &scope_219, 1, 10},
  /* 17 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_211, 1, 2},
  /* 18 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_212, 1, 3},
  /* 19 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_213, 1, 4},
  /* 20 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_214, 1, 5},
  /* 21 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_215, 1, 6},
  /* 22 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_216, 1, 7},
  /* 23 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_217, 1, 8},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L26), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L29), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L31), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L32), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 51},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 30}
};
static const MappingScope scope_208 = {
  "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ TEMPLATE_Balise_Packets_FirstTest_InfraLibInt",
  scope_208_entries, 54,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 20/ */
static const MappingEntry scope_207_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_207 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 20/",
  scope_207_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 19/ */
static const MappingEntry scope_206_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_206 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 19/",
  scope_206_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 18/ */
static const MappingEntry scope_205_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_205 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 18/",
  scope_205_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 17/ */
static const MappingEntry scope_204_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_204 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 17/",
  scope_204_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 16/ */
static const MappingEntry scope_203_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_203 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 16/",
  scope_203_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 15/ */
static const MappingEntry scope_202_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_202 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 15/",
  scope_202_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 14/ */
static const MappingEntry scope_201_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_201 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 14/",
  scope_201_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 13/ */
static const MappingEntry scope_200_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_200 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 13/",
  scope_200_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 12/ */
static const MappingEntry scope_199_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_199 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 12/",
  scope_199_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 11/ */
static const MappingEntry scope_198_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_198 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 11/",
  scope_198_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 9/ */
static const MappingEntry scope_197_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_197 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 9/",
  scope_197_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 8/ */
static const MappingEntry scope_196_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_196 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 8/",
  scope_196_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 7/ */
static const MappingEntry scope_195_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_195 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 7/",
  scope_195_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 6/ */
static const MappingEntry scope_194_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_194 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 6/",
  scope_194_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 5/ */
static const MappingEntry scope_193_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_193 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 5/",
  scope_193_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 4/ */
static const MappingEntry scope_192_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_192 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 4/",
  scope_192_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 23/ */
static const MappingEntry scope_191_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_191 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 23/",
  scope_191_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 22/ */
static const MappingEntry scope_190_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_190 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 22/",
  scope_190_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 21/ */
static const MappingEntry scope_189_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out_21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L1_21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1}
};
static const MappingScope scope_189 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Packet 21/",
  scope_189_entries, 2,
};

/* FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibInt */
static const MappingEntry scope_188_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, Balise_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 53},
  /* 4 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_198, 1, 10},
  /* 5 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_199, 1, 11},
  /* 6 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_200, 1, 12},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_201, 1, 13},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_202, 1, 14},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_203, 1, 15},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_204, 1, 16},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_205, 1, 17},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_206, 1, 18},
  /* 13 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 20", NULL, 0, 0, NULL, NULL, NULL, &scope_207, 1, 19},
  /* 14 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 21", NULL, 0, 0, NULL, NULL, NULL, &scope_189, 1, 0},
  /* 15 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 22", NULL, 0, 0, NULL, NULL, NULL, &scope_190, 1, 1},
  /* 16 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 23", NULL, 0, 0, NULL, NULL, NULL, &scope_191, 1, 2},
  /* 17 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_192, 1, 3},
  /* 18 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_193, 1, 4},
  /* 19 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_194, 1, 5},
  /* 20 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_195, 1, 6},
  /* 21 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_196, 1, 7},
  /* 22 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_197, 1, 8},
  /* 23 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Send_364_P005 2", NULL, sizeof(outC_Send_364_P005_FirstTest_InfraLibInt), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, Context_2), NULL, NULL, NULL, &scope_232, 1, 9},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L26), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L29), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L31), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L33), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 51},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Packets_364_FirstTest_InfraLibInt, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 30}
};
static const MappingScope scope_188 = {
  "FirstTest::InfraLibInt::Balise_Packets_364/ Balise_Packets_364_FirstTest_InfraLibInt",
  scope_188_entries, 54,
};

/* FirstTest::InfraLibInt::Balise_Localisation/ Balise_Localisation_FirstTest_InfraLibInt */
static const MappingEntry scope_187_entries[24] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Interdistance 1", NULL, sizeof(outC_Balise_Interdistance_FirstTest_InfraLibInt), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_229, 1, 2},
  /* 2 */ { MAP_OUTPUT, "PIG_0_out", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, PIG_0_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::TOOLS_convert_engineering_location 1", NULL, sizeof(outC_TOOLS_convert_engineering_TM_conversions), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_231, 1, 3},
  /* 4 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, TrainPass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L16), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L65", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L65), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L70), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L71", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L71), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 19 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L73@mem", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L73), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 0},
  /* 21 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L75), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L76), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_FirstTest_InfraLibInt, _L77), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21}
};
static const MappingScope scope_187 = {
  "FirstTest::InfraLibInt::Balise_Localisation/ Balise_Localisation_FirstTest_InfraLibInt",
  scope_187_entries, 24,
};

/* TM_conversions::TOOLS_evaluate_N_ITER/ TOOLS_evaluate_N_ITER_TM_conversions */
static const MappingEntry scope_186_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "valid", NULL, sizeof(kcg_bool), offsetof(outC_TOOLS_evaluate_N_ITER_TM_conversions, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_186 = {
  "TM_conversions::TOOLS_evaluate_N_ITER/ TOOLS_evaluate_N_ITER_TM_conversions",
  scope_186_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_185_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L2_IfBlock1), &_Type_Q_SCALE_Utils, &scope_179_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_179_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_185 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:then:",
  scope_185_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_184_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_180_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_180_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_184 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:then:",
  scope_184_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_183_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L13_IfBlock1), &_Type_Q_SCALE_Utils, &scope_181_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_181_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_183 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:then:",
  scope_183_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_182_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L14_IfBlock1), &_Type_Q_SCALE_Utils, &scope_181_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_181_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_182 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:else:",
  scope_182_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_181_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_181_entries[0], isActive_kcg_bool_kcg_false, &scope_182, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_181_entries[0], isActive_kcg_bool_kcg_true, &scope_183, 1, 2}
};
static const MappingScope scope_181 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:else:",
  scope_181_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_180_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_180_entries[0], isActive_kcg_bool_kcg_false, &scope_181, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_180_entries[0], isActive_kcg_bool_kcg_true, &scope_184, 1, 2}
};
static const MappingScope scope_180 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:else:",
  scope_180_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1: */
static const MappingEntry scope_179_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_179_entries[0], isActive_kcg_bool_kcg_false, &scope_180, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_179_entries[0], isActive_kcg_bool_kcg_true, &scope_185, 1, 2}
};
static const MappingScope scope_179 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversionsIfBlock1:",
  scope_179_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversions */
static const MappingEntry scope_178_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_179, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SCALE_TM_conversions, q_scale_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_178 = {
  "TM_conversions::CAST_Int_to_Q_SCALE/ CAST_Int_to_Q_SCALE_TM_conversions",
  scope_178_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_177_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L4_IfBlock1), &_Type_Q_DIR_Utils, &scope_171_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_171_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_177 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:then:",
  scope_177_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_176_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L3_IfBlock1), &_Type_Q_DIR_Utils, &scope_172_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L52_IfBlock1), &_Type_kcg_bool_Utils, &scope_172_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_176 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:then:",
  scope_176_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_175_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L2_IfBlock1), &_Type_Q_DIR_Utils, &scope_173_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L43_IfBlock1), &_Type_kcg_bool_Utils, &scope_173_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_175 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:then:",
  scope_175_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_174_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_173_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L24_IfBlock1), &_Type_Q_DIR_Utils, &scope_173_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_174 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:else:",
  scope_174_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_173_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_173_entries[0], isActive_kcg_bool_kcg_false, &scope_174, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_173_entries[0], isActive_kcg_bool_kcg_true, &scope_175, 1, 2}
};
static const MappingScope scope_173 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:else:",
  scope_173_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_172_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_172_entries[0], isActive_kcg_bool_kcg_false, &scope_173, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_172_entries[0], isActive_kcg_bool_kcg_true, &scope_176, 1, 2}
};
static const MappingScope scope_172 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:else:",
  scope_172_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1: */
static const MappingEntry scope_171_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_171_entries[0], isActive_kcg_bool_kcg_false, &scope_172, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_171_entries[0], isActive_kcg_bool_kcg_true, &scope_177, 1, 2}
};
static const MappingScope scope_171 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversionsIfBlock1:",
  scope_171_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversions */
static const MappingEntry scope_170_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_171, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DIR_TM_conversions, q_dir_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_170 = {
  "TM_conversions::CAST_Int_to_Q_DIR/ CAST_Int_to_Q_DIR_TM_conversions",
  scope_170_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_169_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L4_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_169 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then:",
  scope_169_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_168_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L3_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_168 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then:",
  scope_168_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_167_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L1_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_167 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else:",
  scope_167_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_166_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_166_entries[0], isActive_kcg_bool_kcg_false, &scope_167, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_166_entries[0], isActive_kcg_bool_kcg_true, &scope_168, 1, 2}
};
static const MappingScope scope_166 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:",
  scope_166_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1: */
static const MappingEntry scope_165_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_165_entries[0], isActive_kcg_bool_kcg_false, &scope_166, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_165_entries[0], isActive_kcg_bool_kcg_true, &scope_169, 1, 2}
};
static const MappingScope scope_165 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:",
  scope_165_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions */
static const MappingEntry scope_164_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_165, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_newcountry_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_164 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions",
  scope_164_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_163_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L4_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_159_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_159_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_163 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then:",
  scope_163_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_162_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L3_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_160_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_160_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_162 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then:",
  scope_162_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_161_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_160_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_160_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_161 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else:",
  scope_161_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_160_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_160_entries[0], isActive_kcg_bool_kcg_false, &scope_161, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_160_entries[0], isActive_kcg_bool_kcg_true, &scope_162, 1, 2}
};
static const MappingScope scope_160 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:",
  scope_160_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1: */
static const MappingEntry scope_159_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_159_entries[0], isActive_kcg_bool_kcg_false, &scope_160, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_159_entries[0], isActive_kcg_bool_kcg_true, &scope_163, 1, 2}
};
static const MappingScope scope_159 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:",
  scope_159_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions */
static const MappingEntry scope_158_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_159, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkorientation_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_158 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions",
  scope_158_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_157_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_151_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_151_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_157 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then:",
  scope_157_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_156_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_152_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_152_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_156 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then:",
  scope_156_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_155_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L13_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_153_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_153_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_155 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then:",
  scope_155_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_154_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L14_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_153_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_153_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_154 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else:",
  scope_154_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_153_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_153_entries[0], isActive_kcg_bool_kcg_false, &scope_154, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_153_entries[0], isActive_kcg_bool_kcg_true, &scope_155, 1, 2}
};
static const MappingScope scope_153 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:",
  scope_153_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_152_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_152_entries[0], isActive_kcg_bool_kcg_false, &scope_153, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_152_entries[0], isActive_kcg_bool_kcg_true, &scope_156, 1, 2}
};
static const MappingScope scope_152 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:",
  scope_152_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1: */
static const MappingEntry scope_151_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_151_entries[0], isActive_kcg_bool_kcg_false, &scope_152, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_151_entries[0], isActive_kcg_bool_kcg_true, &scope_157, 1, 2}
};
static const MappingScope scope_151 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:",
  scope_151_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions */
static const MappingEntry scope_150_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_151, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkreaction_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_150 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions",
  scope_150_entries, 6,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_149_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 1 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, PacketOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 3}
};
static const MappingScope scope_149 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_149_entries, 14,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_148_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 1}
};
static const MappingScope scope_148 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_148_entries, 9,
};

/* FirstTest::InfraLibInt::Balise_341_1/ Balise_341_1_FirstTest_InfraLibInt */
static const MappingEntry scope_147_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_147_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_1_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_147 = {
  "FirstTest::InfraLibInt::Balise_341_1/ Balise_341_1_FirstTest_InfraLibInt",
  scope_147_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_341_0/ Balise_341_0_FirstTest_InfraLibInt */
static const MappingEntry scope_146_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_146_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_341_0_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_146 = {
  "FirstTest::InfraLibInt::Balise_341_0/ Balise_341_0_FirstTest_InfraLibInt",
  scope_146_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_365_1/ Balise_365_1_FirstTest_InfraLibInt */
static const MappingEntry scope_145_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_145_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_1_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_145 = {
  "FirstTest::InfraLibInt::Balise_365_1/ Balise_365_1_FirstTest_InfraLibInt",
  scope_145_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_365_0/ Balise_365_0_FirstTest_InfraLibInt */
static const MappingEntry scope_144_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_144_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_365_0_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_144 = {
  "FirstTest::InfraLibInt::Balise_365_0/ Balise_365_0_FirstTest_InfraLibInt",
  scope_144_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_369_0/ Balise_369_0_FirstTest_InfraLibInt */
static const MappingEntry scope_143_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_143_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_0_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_143 = {
  "FirstTest::InfraLibInt::Balise_369_0/ Balise_369_0_FirstTest_InfraLibInt",
  scope_143_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_369_1/ Balise_369_1_FirstTest_InfraLibInt */
static const MappingEntry scope_142_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_369_1_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_142 = {
  "FirstTest::InfraLibInt::Balise_369_1/ Balise_369_1_FirstTest_InfraLibInt",
  scope_142_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_366_1/ Balise_366_1_FirstTest_InfraLibInt */
static const MappingEntry scope_141_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_141_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_1_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_141 = {
  "FirstTest::InfraLibInt::Balise_366_1/ Balise_366_1_FirstTest_InfraLibInt",
  scope_141_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_366_0/ Balise_366_0_FirstTest_InfraLibInt */
static const MappingEntry scope_140_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_140_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_366_0_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_140 = {
  "FirstTest::InfraLibInt::Balise_366_0/ Balise_366_0_FirstTest_InfraLibInt",
  scope_140_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_368_0/ Balise_368_0_FirstTest_InfraLibInt */
static const MappingEntry scope_139_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_139_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_0_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_139 = {
  "FirstTest::InfraLibInt::Balise_368_0/ Balise_368_0_FirstTest_InfraLibInt",
  scope_139_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_368_1/ Balise_368_1_FirstTest_InfraLibInt */
static const MappingEntry scope_138_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_138_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_368_1_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_138 = {
  "FirstTest::InfraLibInt::Balise_368_1/ Balise_368_1_FirstTest_InfraLibInt",
  scope_138_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_367_1/ Balise_367_1_FirstTest_InfraLibInt */
static const MappingEntry scope_137_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_137_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_1_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_137 = {
  "FirstTest::InfraLibInt::Balise_367_1/ Balise_367_1_FirstTest_InfraLibInt",
  scope_137_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_367_0/ Balise_367_0_FirstTest_InfraLibInt */
static const MappingEntry scope_136_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::TEMPLATE_Balise_Packets 1", NULL, sizeof(outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_136_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_367_0_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_136 = {
  "FirstTest::InfraLibInt::Balise_367_0/ Balise_367_0_FirstTest_InfraLibInt",
  scope_136_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_364_0/ Balise_364_0_FirstTest_InfraLibInt */
static const MappingEntry scope_135_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Packets_364 1", NULL, sizeof(outC_Balise_Packets_364_FirstTest_InfraLibInt), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_135_entries[0], isActive_kcg_bool_kcg_true, &scope_188, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_0_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_135 = {
  "FirstTest::InfraLibInt::Balise_364_0/ Balise_364_0_FirstTest_InfraLibInt",
  scope_135_entries, 13,
};

/* FirstTest::InfraLibInt::Balise_Group_Close/ Balise_Group_Close_FirstTest_InfraLibInt */
static const MappingEntry scope_134_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Error_out", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, Error_out), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L2), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L20), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L21", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L21), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L22), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L24), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_FirstTest_InfraLibInt, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_134 = {
  "FirstTest::InfraLibInt::Balise_Group_Close/ Balise_Group_Close_FirstTest_InfraLibInt",
  scope_134_entries, 10,
};

/* FirstTest::InfraLibInt::Balise_Group_Init/ Balise_Group_Init_FirstTest_InfraLibInt */
static const MappingEntry scope_133_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "BG_internal_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, BG_internal_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L2), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L26), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L27), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L28), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Init_FirstTest_InfraLibInt, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_133 = {
  "FirstTest::InfraLibInt::Balise_Group_Init/ Balise_Group_Init_FirstTest_InfraLibInt",
  scope_133_entries, 9,
};

/* FirstTest::InfraLibInt::Balise_364_1/ Balise_364_1_FirstTest_InfraLibInt */
static const MappingEntry scope_132_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, B_data_out), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_FirstTest_InfraLibInt), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Packets_364 1", NULL, sizeof(outC_Balise_Packets_364_FirstTest_InfraLibInt), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _1_Context_1), NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_188, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L15), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L17), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_364_1_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 4}
};
static const MappingScope scope_132 = {
  "FirstTest::InfraLibInt::Balise_364_1/ Balise_364_1_FirstTest_InfraLibInt",
  scope_132_entries, 13,
};

/* TM_conversions::RECV_ConvertP005afterRead_Element_CT/ RECV_ConvertP005afterRead_TM_conversions */
static const MappingEntry scope_131_entries[31] = {
  /* 0 */ { MAP_OUTPUT, "Linked_BG", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, Linked_BG), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_245, 1, 30},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, sizeof(outC_CAST_Int_to_Q_DIR_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_170, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKORIENTATION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKREACTION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_150, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY 2", NULL, sizeof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, Context_2), NULL, NULL, NULL, &scope_164, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, sizeof(outC_CAST_Int_to_Q_SCALE_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_178, 1, 4},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::TOOLS_evaluate_N_ITER 1", NULL, sizeof(outC_TOOLS_evaluate_N_ITER_TM_conversions), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, Context_1), NULL, NULL, NULL, &scope_186, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(Array4_TM), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L1), &_Type_Array4_TM_Utils, NULL, NULL, &scope_252, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005E_array_T_TM), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L2), &_Type_P005E_array_T_TM_Utils, NULL, NULL, &scope_253, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 11 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L36", NULL, sizeof(Q_LINKREACTION), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L36), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L37", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L37), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L39", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L39), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 20},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_LOCAL, "_L40", NULL, sizeof(Q_DIR), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L40), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L42", NULL, sizeof(NID_LRBG), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L42), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L44", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L44), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_245, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L45", NULL, sizeof(Q_SCALE), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L45), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 25},
  /* 25 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 26 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 27 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 30 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertP005afterRead_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_131 = {
  "TM_conversions::RECV_ConvertP005afterRead_Element_CT/ RECV_ConvertP005afterRead_TM_conversions",
  scope_131_entries, 31,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_130_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_149, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_130 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_130_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_129_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 16},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_148, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_268, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_129 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_129_entries, 17,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_128_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L4_IfBlock1), &_Type_Q_LINK_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_128 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then:",
  scope_128_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_127_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L3_IfBlock1), &_Type_Q_LINK_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_127 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then:",
  scope_127_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_126_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L1_IfBlock1), &_Type_Q_LINK_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_126 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else:",
  scope_126_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_125_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_125_entries[0], isActive_kcg_bool_kcg_false, &scope_126, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_125_entries[0], isActive_kcg_bool_kcg_true, &scope_127, 1, 2}
};
static const MappingScope scope_125 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:",
  scope_125_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1: */
static const MappingEntry scope_124_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_124_entries[0], isActive_kcg_bool_kcg_false, &scope_125, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_124_entries[0], isActive_kcg_bool_kcg_true, &scope_128, 1, 2}
};
static const MappingScope scope_124 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:",
  scope_124_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions */
static const MappingEntry scope_123_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_124, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_link", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_link_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_123 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions",
  scope_123_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_122_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L6_IfBlock1), &_Type_M_DUP_Utils, &scope_116_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_116_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_122 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:then:",
  scope_122_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_121_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L5", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L5_IfBlock1), &_Type_M_DUP_Utils, &scope_117_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L62_IfBlock1), &_Type_kcg_bool_Utils, &scope_117_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_121 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:then:",
  scope_121_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_120_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L4_IfBlock1), &_Type_M_DUP_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_120 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:then:",
  scope_120_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_119_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L3_IfBlock1), &_Type_M_DUP_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_119 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:else:",
  scope_119_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_118_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_kcg_bool_kcg_false, &scope_119, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_kcg_bool_kcg_true, &scope_120, 1, 2}
};
static const MappingScope scope_118 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:",
  scope_118_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_117_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_117_entries[0], isActive_kcg_bool_kcg_false, &scope_118, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_117_entries[0], isActive_kcg_bool_kcg_true, &scope_121, 1, 2}
};
static const MappingScope scope_117 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:",
  scope_117_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1: */
static const MappingEntry scope_116_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_116_entries[0], isActive_kcg_bool_kcg_false, &scope_117, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_116_entries[0], isActive_kcg_bool_kcg_true, &scope_122, 1, 2}
};
static const MappingScope scope_116 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:",
  scope_116_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversions */
static const MappingEntry scope_115_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_116, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_dup", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_dup_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, m_dup_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_115 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversions",
  scope_115_entries, 6,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_114_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L2_IfBlock1), &_Type_N_TOTAL_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_114 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:then:",
  scope_114_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_113_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L1_IfBlock1), &_Type_N_TOTAL_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_113 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:then:",
  scope_113_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_112_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L19_IfBlock1), &_Type_N_TOTAL_Utils, &scope_100_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L38_IfBlock1), &_Type_kcg_bool_Utils, &scope_100_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_112 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:then:",
  scope_112_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_111_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L111_IfBlock1), &_Type_N_TOTAL_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L310_IfBlock1), &_Type_kcg_bool_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_111 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:then:",
  scope_111_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_110_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L113_IfBlock1), &_Type_N_TOTAL_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L312_IfBlock1), &_Type_kcg_bool_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_110 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_110_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_109_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L214_IfBlock1), &_Type_N_TOTAL_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_109 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_109_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_108_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L116_IfBlock1), &_Type_N_TOTAL_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_108 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_108_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_107_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L118_IfBlock1), &_Type_N_TOTAL_Utils, &scope_105_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L317_IfBlock1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_107 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_107_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_106_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L119_IfBlock1), &_Type_N_TOTAL_Utils, &scope_105_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_106 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_106_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_105_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_kcg_bool_kcg_false, &scope_106, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_kcg_bool_kcg_true, &scope_107, 1, 2}
};
static const MappingScope scope_105 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_105_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_104_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_false, &scope_105, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_true, &scope_108, 1, 2}
};
static const MappingScope scope_104 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_104_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_103_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_false, &scope_104, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_true, &scope_109, 1, 2}
};
static const MappingScope scope_103 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_103_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_102_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_false, &scope_103, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_true, &scope_110, 1, 2}
};
static const MappingScope scope_102 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:",
  scope_102_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_101_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_false, &scope_102, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_true, &scope_111, 1, 2}
};
static const MappingScope scope_101 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:",
  scope_101_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_100_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_100_entries[0], isActive_kcg_bool_kcg_false, &scope_101, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_100_entries[0], isActive_kcg_bool_kcg_true, &scope_112, 1, 2}
};
static const MappingScope scope_100 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:",
  scope_100_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_99_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_false, &scope_100, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_true, &scope_113, 1, 2}
};
static const MappingScope scope_99 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:",
  scope_99_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1: */
static const MappingEntry scope_98_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_false, &scope_99, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_true, &scope_114, 1, 2}
};
static const MappingScope scope_98 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:",
  scope_98_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversions */
static const MappingEntry scope_97_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_98, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, n_pig), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "n_total_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, n_total_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_97 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversions",
  scope_97_entries, 6,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_96_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2_IfBlock1), &_Type_N_PIG_Utils, &scope_80_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_80_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_96 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then:",
  scope_96_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_95_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L1_IfBlock1), &_Type_N_PIG_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_95 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then:",
  scope_95_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_94_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L18_IfBlock1), &_Type_N_PIG_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_94 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then:",
  scope_94_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_93_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L110_IfBlock1), &_Type_N_PIG_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L39_IfBlock1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_93 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then:",
  scope_93_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_92_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L112_IfBlock1), &_Type_N_PIG_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L311_IfBlock1), &_Type_kcg_bool_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_92 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_92_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_91_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L214_IfBlock1), &_Type_N_PIG_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L413_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_91 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_91_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_90_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L116_IfBlock1), &_Type_N_PIG_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_90 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_90_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L118_IfBlock1), &_Type_N_PIG_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L417_IfBlock1), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_89 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_89_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_88_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L220_IfBlock1), &_Type_N_PIG_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L319_IfBlock1), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_88 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_88_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_87_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_false, &scope_88, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_89, 1, 2}
};
static const MappingScope scope_87 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_87_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_86_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_false, &scope_87, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_90, 1, 2}
};
static const MappingScope scope_86 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_86_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_85_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_86, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_91, 1, 2}
};
static const MappingScope scope_85 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_85_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_84_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_false, &scope_85, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_true, &scope_92, 1, 2}
};
static const MappingScope scope_84 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:",
  scope_84_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_83_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_false, &scope_84, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_true, &scope_93, 1, 2}
};
static const MappingScope scope_83 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:",
  scope_83_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_82_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_82_entries[0], isActive_kcg_bool_kcg_false, &scope_83, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_82_entries[0], isActive_kcg_bool_kcg_true, &scope_94, 1, 2}
};
static const MappingScope scope_82 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:",
  scope_82_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_81_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_false, &scope_82, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_95, 1, 2}
};
static const MappingScope scope_81 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:",
  scope_81_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1: */
static const MappingEntry scope_80_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_80_entries[0], isActive_kcg_bool_kcg_false, &scope_81, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_80_entries[0], isActive_kcg_bool_kcg_true, &scope_96, 1, 2}
};
static const MappingScope scope_80 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:",
  scope_80_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions */
static const MappingEntry scope_79_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_80, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "n_pig_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_79 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions",
  scope_79_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_78_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L4_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_78 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:then:",
  scope_78_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_77_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L3_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_77 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:then:",
  scope_77_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_76_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L1_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_76 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:else:",
  scope_76_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_false, &scope_76, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_77, 1, 2}
};
static const MappingScope scope_75 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:",
  scope_75_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1: */
static const MappingEntry scope_74_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_false, &scope_75, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_78, 1, 2}
};
static const MappingScope scope_74 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:",
  scope_74_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversions */
static const MappingEntry scope_73_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_media", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_media_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, q_media_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_73 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversions",
  scope_73_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_72_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4_IfBlock1), &_Type_M_VERSION_Utils, &scope_64_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_64_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_72 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then:",
  scope_72_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_71_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L3_IfBlock1), &_Type_M_VERSION_Utils, &scope_65_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_71 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then:",
  scope_71_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_70_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L2_IfBlock1), &_Type_M_VERSION_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_70 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then:",
  scope_70_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L26_IfBlock1), &_Type_M_VERSION_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_69 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then:",
  scope_69_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_68_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L27_IfBlock1), &_Type_M_VERSION_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_68 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else:",
  scope_68_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_67_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_false, &scope_68, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_69, 1, 2}
};
static const MappingScope scope_67 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:",
  scope_67_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_66_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_67, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_true, &scope_70, 1, 2}
};
static const MappingScope scope_66 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:",
  scope_66_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_65_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_65_entries[0], isActive_kcg_bool_kcg_false, &scope_66, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_65_entries[0], isActive_kcg_bool_kcg_true, &scope_71, 1, 2}
};
static const MappingScope scope_65 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:",
  scope_65_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1: */
static const MappingEntry scope_64_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_64_entries[0], isActive_kcg_bool_kcg_false, &scope_65, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_64_entries[0], isActive_kcg_bool_kcg_true, &scope_72, 1, 2}
};
static const MappingScope scope_64 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:",
  scope_64_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions */
static const MappingEntry scope_63_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_64, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_63 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions",
  scope_63_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_62_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L4_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_62 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:then:",
  scope_62_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_61_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L3_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_59_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_59_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_61 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:then:",
  scope_61_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_60_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L1_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_59_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_59_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_60 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:else:",
  scope_60_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_59_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive_kcg_bool_kcg_false, &scope_60, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive_kcg_bool_kcg_true, &scope_61, 1, 2}
};
static const MappingScope scope_59 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:",
  scope_59_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1: */
static const MappingEntry scope_58_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_false, &scope_59, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_true, &scope_62, 1, 2}
};
static const MappingScope scope_58 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:",
  scope_58_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversions */
static const MappingEntry scope_57_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_58, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_updown", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_updown_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, q_updown_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_57 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversions",
  scope_57_entries, 6,
};

/* FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/ */
static const MappingEntry scope_56_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L1_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L3_7), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_56 = {
  "FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/",
  scope_56_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_55_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L1_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_55 = {
  "FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/",
  scope_55_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_54_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L1_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_54 = {
  "FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/",
  scope_54_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_53_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L1_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_53 = {
  "FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/",
  scope_53_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_52_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L1_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_52 = {
  "FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/",
  scope_52_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_51_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L1_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_51 = {
  "FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/",
  scope_51_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibInt */
static const MappingEntry scope_50_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_341_0 1", NULL, sizeof(outC_Balise_341_0_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _2_Context_1), NULL, NULL, NULL, &scope_146, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_341_1 1", NULL, sizeof(outC_Balise_341_1_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_147, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _3_Context_1), NULL, NULL, NULL, &scope_134, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_51, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_52, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_53, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_54, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L11), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L16), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L8), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_341_FirstTest_InfraLibInt, _L9), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 19}
};
static const MappingScope scope_50 = {
  "FirstTest::InfraLibInt::Balise_Group_341/ Balise_Group_341_FirstTest_InfraLibInt",
  scope_50_entries, 37,
};

/* FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_49_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L1_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_49 = {
  "FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/",
  scope_49_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_48_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L1_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_48 = {
  "FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/",
  scope_48_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_47_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L1_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_47 = {
  "FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/",
  scope_47_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_46_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L1_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_46 = {
  "FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/",
  scope_46_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_45_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L1_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_45 = {
  "FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/",
  scope_45_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 1/ */
static const MappingEntry scope_44_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, B_data_out_1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L1_1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_44 = {
  "FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 1/",
  scope_44_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibInt */
static const MappingEntry scope_43_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_365_0 1", NULL, sizeof(outC_Balise_365_0_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _2_Context_1), NULL, NULL, NULL, &scope_144, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_365_1 1", NULL, sizeof(outC_Balise_365_1_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_145, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _3_Context_1), NULL, NULL, NULL, &scope_134, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_45, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L11), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L16), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L8), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_365_FirstTest_InfraLibInt, _L9), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 19}
};
static const MappingScope scope_43 = {
  "FirstTest::InfraLibInt::Balise_Group_365/ Balise_Group_365_FirstTest_InfraLibInt",
  scope_43_entries, 37,
};

/* FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/ */
static const MappingEntry scope_42_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L1_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L3_7), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_42 = {
  "FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/",
  scope_42_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_41_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L1_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_41 = {
  "FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/",
  scope_41_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_40_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L1_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_40 = {
  "FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/",
  scope_40_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_39_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L1_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_39 = {
  "FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/",
  scope_39_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_38_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L1_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_38 = {
  "FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/",
  scope_38_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_37_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L1_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_37 = {
  "FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/",
  scope_37_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibInt */
static const MappingEntry scope_36_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_369_0 1", NULL, sizeof(outC_Balise_369_0_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_143, 1, 9},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_369_1 1", NULL, sizeof(outC_Balise_369_1_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _2_Context_1), NULL, NULL, NULL, &scope_142, 1, 0},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _3_Context_1), NULL, NULL, NULL, &scope_134, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_37, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L11), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L16), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L8), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_369_FirstTest_InfraLibInt, _L9), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 19}
};
static const MappingScope scope_36 = {
  "FirstTest::InfraLibInt::Balise_Group_369/ Balise_Group_369_FirstTest_InfraLibInt",
  scope_36_entries, 37,
};

/* FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/ */
static const MappingEntry scope_35_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L1_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L3_7), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_35 = {
  "FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/",
  scope_35_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_34_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L1_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_34 = {
  "FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/",
  scope_34_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_33_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L1_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_33 = {
  "FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/",
  scope_33_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_32_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L1_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_32 = {
  "FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/",
  scope_32_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_31_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L1_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_31 = {
  "FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/",
  scope_31_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_30_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L1_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_30 = {
  "FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/",
  scope_30_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibInt */
static const MappingEntry scope_29_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_366_0 1", NULL, sizeof(outC_Balise_366_0_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _2_Context_1), NULL, NULL, NULL, &scope_140, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_366_1 1", NULL, sizeof(outC_Balise_366_1_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_141, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _3_Context_1), NULL, NULL, NULL, &scope_134, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L11), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L16), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L8), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_366_FirstTest_InfraLibInt, _L9), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 19}
};
static const MappingScope scope_29 = {
  "FirstTest::InfraLibInt::Balise_Group_366/ Balise_Group_366_FirstTest_InfraLibInt",
  scope_29_entries, 37,
};

/* FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/ */
static const MappingEntry scope_28_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L1_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L3_7), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_28 = {
  "FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/",
  scope_28_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_27_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L1_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_27 = {
  "FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/",
  scope_27_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_26_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L1_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_26 = {
  "FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/",
  scope_26_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_25_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L1_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_25 = {
  "FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/",
  scope_25_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_24_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L1_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_24 = {
  "FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/",
  scope_24_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_23_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L1_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_23 = {
  "FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/",
  scope_23_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibInt */
static const MappingEntry scope_22_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_368_0 1", NULL, sizeof(outC_Balise_368_0_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_139, 1, 9},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_368_1 1", NULL, sizeof(outC_Balise_368_1_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _2_Context_1), NULL, NULL, NULL, &scope_138, 1, 0},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _3_Context_1), NULL, NULL, NULL, &scope_134, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L11), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L16), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L8), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_368_FirstTest_InfraLibInt, _L9), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 19}
};
static const MappingScope scope_22 = {
  "FirstTest::InfraLibInt::Balise_Group_368/ Balise_Group_368_FirstTest_InfraLibInt",
  scope_22_entries, 37,
};

/* FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/ */
static const MappingEntry scope_21_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L1_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L3_7), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_21 = {
  "FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/",
  scope_21_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_20_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L1_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_20 = {
  "FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/",
  scope_20_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_19_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L1_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_19 = {
  "FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/",
  scope_19_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_18_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L1_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_18 = {
  "FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/",
  scope_18_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_17_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L1_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_17 = {
  "FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/",
  scope_17_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_16_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L1_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_16 = {
  "FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/",
  scope_16_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibInt */
static const MappingEntry scope_15_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_367_0 1", NULL, sizeof(outC_Balise_367_0_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _2_Context_1), NULL, NULL, NULL, &scope_136, 1, 0},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_367_1 1", NULL, sizeof(outC_Balise_367_1_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_137, 1, 9},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _3_Context_1), NULL, NULL, NULL, &scope_134, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L11), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L16), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L8), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_367_FirstTest_InfraLibInt, _L9), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 19}
};
static const MappingScope scope_15 = {
  "FirstTest::InfraLibInt::Balise_Group_367/ Balise_Group_367_FirstTest_InfraLibInt",
  scope_15_entries, 37,
};

/* FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/ */
static const MappingEntry scope_14_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, B_data_out_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L1_7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L3_7), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_14 = {
  "FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 7/",
  scope_14_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_13_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, B_data_out_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L1_6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_13 = {
  "FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 6/",
  scope_13_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_12_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, B_data_out_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L1_5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_12 = {
  "FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 5/",
  scope_12_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_11_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, B_data_out_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L1_4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_11 = {
  "FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 4/",
  scope_11_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_10_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, B_data_out_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L1_3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_10 = {
  "FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 3/",
  scope_10_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_9_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, B_data_out_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L1_2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 3}
};
static const MappingScope scope_9 = {
  "FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibIntFirstTest::InfraLibInt::No_Balise 2/",
  scope_9_entries, 4,
};

/* FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibInt */
static const MappingEntry scope_8_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, BaliseDataIn), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, BaliseDataOut), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 11},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_364_0 1", NULL, sizeof(outC_Balise_364_0_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_135, 1, 9},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_364_1 1", NULL, sizeof(outC_Balise_364_1_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _2_Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _3_Context_1), NULL, NULL, NULL, &scope_134, 1, 8},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 1},
  /* 8 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 2},
  /* 9 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 3},
  /* 10 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 4},
  /* 11 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 5},
  /* 12 */ { MAP_EXPANDED, "FirstTest::InfraLibInt::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L1), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L11), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L16), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_257, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L2), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L3), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L4), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L5), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L6), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L7), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L8), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_FirstTest_InfraLibInt), offsetof(outC_Balise_Group_364_FirstTest_InfraLibInt, _L9), &_Type_B_data_internal_FirstTest_InfraLibInt_Utils, NULL, NULL, &scope_258, 1, 19}
};
static const MappingScope scope_8 = {
  "FirstTest::InfraLibInt::Balise_Group_364/ Balise_Group_364_FirstTest_InfraLibInt",
  scope_8_entries, 37,
};

/* TM_conversions::RECV_ConvertP005afterRead_CT/ _3_RECV_ConvertP005afterRead_TM_conversions */
static const MappingEntry scope_7_entries[61] = {
  /* 0 */ { MAP_OUTPUT, "Packet005_OLD", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, Packet005_OLD), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_246, 1, 60},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 1", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, Context_1), NULL, NULL, NULL, &scope_131, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 2", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, Context_2), NULL, NULL, NULL, &scope_131, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 3", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, Context_3), NULL, NULL, NULL, &scope_131, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 4", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, Context_4), NULL, NULL, NULL, &scope_131, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_Element_CT 5", NULL, sizeof(outC_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, Context_5), NULL, NULL, NULL, &scope_131, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_array_T_TM), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L1), &_Type_P005_array_T_TM_Utils, NULL, NULL, &scope_254, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L107", NULL, sizeof(array__4849), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L107), &_Type_array__4849_Utils, NULL, NULL, &scope_246, 1, 40},
  /* 8 */ { MAP_LOCAL, "_L115", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L115), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_245, 1, 41},
  /* 9 */ { MAP_LOCAL, "_L118", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L118), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_245, 1, 42},
  /* 10 */ { MAP_LOCAL, "_L119", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L119), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_245, 1, 43},
  /* 11 */ { MAP_LOCAL, "_L120", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L120), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_245, 1, 44},
  /* 12 */ { MAP_LOCAL, "_L122", NULL, sizeof(array_int_4), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L122), &_Type_array_int_4_Utils, NULL, NULL, &scope_252, 1, 45},
  /* 13 */ { MAP_LOCAL, "_L123", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L123), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 46},
  /* 14 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_bool), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L124), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47},
  /* 15 */ { MAP_LOCAL, "_L126", NULL, sizeof(NID_LRBG), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L126), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 48},
  /* 16 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L129), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 53},
  /* 17 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L130), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 52},
  /* 18 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L131), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 51},
  /* 19 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L132), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 50},
  /* 20 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L133), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 21 */ { MAP_LOCAL, "_L134", NULL, sizeof(array_int_7), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L134), &_Type_array_int_7_Utils, NULL, NULL, &scope_253, 1, 54},
  /* 22 */ { MAP_LOCAL, "_L135", NULL, sizeof(array_int_7), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L135), &_Type_array_int_7_Utils, NULL, NULL, &scope_253, 1, 55},
  /* 23 */ { MAP_LOCAL, "_L136", NULL, sizeof(array_int_7), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L136), &_Type_array_int_7_Utils, NULL, NULL, &scope_253, 1, 56},
  /* 24 */ { MAP_LOCAL, "_L137", NULL, sizeof(array_int_7), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L137), &_Type_array_int_7_Utils, NULL, NULL, &scope_253, 1, 57},
  /* 25 */ { MAP_LOCAL, "_L138", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L138), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_245, 1, 58},
  /* 26 */ { MAP_LOCAL, "_L139", NULL, sizeof(array_int_7), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L139), &_Type_array_int_7_Utils, NULL, NULL, &scope_253, 1, 59},
  /* 27 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 28 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L39), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 29 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 30 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 31 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 32 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 33 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L44), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 36 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 37 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 38 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L49), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 39 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 40 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 41 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 42 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L53), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 43 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L54), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 44 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L55), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 45 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L56), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 46 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L57), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 47 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L58), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 48 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L59), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 49 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L60), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 50 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L61), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 51 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L62), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 52 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L63), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 53 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L64), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 54 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L65), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 55 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 56 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L67), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 57 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 58 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L69), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 59 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L70), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 60 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_int), offsetof(outC__3_RECV_ConvertP005afterRead_TM_conversions, _L71), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_7 = {
  "TM_conversions::RECV_ConvertP005afterRead_CT/ _3_RECV_ConvertP005afterRead_TM_conversions",
  scope_7_entries, 61,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_6_entries[14] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 12},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 13},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_129, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_130, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 9}
};
static const MappingScope scope_6 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_6_entries, 14,
};

/* TM_conversions::RECV_ConvertBaliseHeader_CT/ RECV_ConvertBaliseHeader_CT_TM_conversions */
static const MappingEntry scope_5_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "BaliseTelegramHeaderOut", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, BaliseTelegramHeaderOut), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_247, 1, 26},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_DUP 1", NULL, sizeof(outC_CAST_Int_to_M_DUP_TM_conversions), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_115, 1, 5},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_VERSION 1", NULL, sizeof(outC_CAST_Int_to_M_VERSION_TM_conversions), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _5_Context_1), NULL, NULL, NULL, &scope_63, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_PIG 1", NULL, sizeof(outC_CAST_Int_to_N_PIG_TM_conversions), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_79, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_TOTAL 1", NULL, sizeof(outC_CAST_Int_to_N_TOTAL_TM_conversions), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_97, 1, 4},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINK 1", NULL, sizeof(outC_CAST_Int_to_Q_LINK_TM_conversions), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, Context_1), NULL, NULL, NULL, &scope_123, 1, 6},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_MEDIA 1", NULL, sizeof(outC_CAST_Int_to_Q_MEDIA_TM_conversions), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_73, 1, 2},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_UPDOWN 1", NULL, sizeof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _6_Context_1), NULL, NULL, NULL, &scope_57, 1, 0},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L42), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_247, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(Q_UPDOWN), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L43), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(M_VERSION), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L44), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L45", NULL, sizeof(Q_MEDIA), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L45), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L46", NULL, sizeof(N_PIG), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L46), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 22},
  /* 19 */ { MAP_LOCAL, "_L47", NULL, sizeof(N_TOTAL), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L47), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L48", NULL, sizeof(M_DUP), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L48), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 24},
  /* 21 */ { MAP_LOCAL, "_L49", NULL, sizeof(Q_LINK), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L49), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_5 = {
  "TM_conversions::RECV_ConvertBaliseHeader_CT/ RECV_ConvertBaliseHeader_CT_TM_conversions",
  scope_5_entries, 27,
};

/* FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest */
static const MappingEntry scope_4_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "BM", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, BM), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 16},
  /* 1 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_341 1", NULL, sizeof(outC_Balise_Group_341_FirstTest_InfraLibInt), offsetof(outC_Story00A_BTM_FirstTest, _6_Context_1), NULL, NULL, NULL, &scope_50, 1, 6},
  /* 2 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_364 1", NULL, sizeof(outC_Balise_Group_364_FirstTest_InfraLibInt), offsetof(outC_Story00A_BTM_FirstTest, Context_1), NULL, NULL, NULL, &scope_8, 1, 0},
  /* 3 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_365 1", NULL, sizeof(outC_Balise_Group_365_FirstTest_InfraLibInt), offsetof(outC_Story00A_BTM_FirstTest, _1_Context_1), NULL, NULL, NULL, &scope_43, 1, 5},
  /* 4 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_366 1", NULL, sizeof(outC_Balise_Group_366_FirstTest_InfraLibInt), offsetof(outC_Story00A_BTM_FirstTest, _2_Context_1), NULL, NULL, NULL, &scope_29, 1, 3},
  /* 5 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_367 1", NULL, sizeof(outC_Balise_Group_367_FirstTest_InfraLibInt), offsetof(outC_Story00A_BTM_FirstTest, _3_Context_1), NULL, NULL, NULL, &scope_15, 1, 1},
  /* 6 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_368 1", NULL, sizeof(outC_Balise_Group_368_FirstTest_InfraLibInt), offsetof(outC_Story00A_BTM_FirstTest, _4_Context_1), NULL, NULL, NULL, &scope_22, 1, 2},
  /* 7 */ { MAP_INSTANCE, "FirstTest::InfraLibInt::Balise_Group_369 1", NULL, sizeof(outC_Balise_Group_369_FirstTest_InfraLibInt), offsetof(outC_Story00A_BTM_FirstTest, _5_Context_1), NULL, NULL, NULL, &scope_36, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_Story00A_BTM_FirstTest, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L34", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L34), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L35), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L36), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L37", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L37), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L38), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L39), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L40), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 8},
  /* 16 */ { MAP_LOCAL, "_L41", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L41), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 7}
};
static const MappingScope scope_4 = {
  "FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest",
  scope_4_entries, 17,
};

/* TM::RECV_ReadPacket005_ForCalcTrainPos/ RECV_ReadPacket005_ForCal_TM */
static const MappingEntry scope_3_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "LinkedBGsOUT", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(outC_RECV_ReadPacket005_ForCal_TM, LinkedBGsOUT), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_246, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertP005afterRead_CT 1", NULL, sizeof(outC__3_RECV_ConvertP005afterRead_TM_conversions), offsetof(outC_RECV_ReadPacket005_ForCal_TM, _1_Context_1), NULL, NULL, NULL, &scope_7, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_RECV_ReadPacket005_ForCal_TM, Context_1), NULL, NULL, NULL, &scope_6, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_int_39), offsetof(outC_RECV_ReadPacket005_ForCal_TM, _L11), &_Type_array_int_39_Utils, NULL, NULL, &scope_254, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L165", NULL, sizeof(NID_LRBG), offsetof(outC_RECV_ReadPacket005_ForCal_TM, _L165), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L166", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(outC_RECV_ReadPacket005_ForCal_TM, _L166), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_246, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacket005_ForCal_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacket005_ForCal_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_248, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacket005_ForCal_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 3}
};
static const MappingScope scope_3 = {
  "TM::RECV_ReadPacket005_ForCalcTrainPos/ RECV_ReadPacket005_ForCal_TM",
  scope_3_entries, 9,
};

/* FirstTest::Story00A/ Story00A_FirstTest */
static const MappingEntry scope_2_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "FirstTest::Story00A_BTM 1", NULL, sizeof(outC_Story00A_BTM_FirstTest), offsetof(outC_Story00A_FirstTest, Context_1), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Story00A_FirstTest, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 7},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::RECV_ConvertBaliseHeader_CT 1", NULL, sizeof(outC_RECV_ConvertBaliseHeader_CT_TM_conversions), offsetof(outC_Story00A_FirstTest, _1_Context_1), NULL, NULL, NULL, &scope_5, 1, 1},
  /* 3 */ { MAP_OUTPUT, "TelegramHeader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Story00A_FirstTest, TelegramHeader), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_247, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Story00A_FirstTest, _L1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_255, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Story00A_FirstTest, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_FirstTest, _L4), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_256, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Story00A_FirstTest, _L7), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_247, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_Story00A_FirstTest, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_2 = {
  "FirstTest::Story00A/ Story00A_FirstTest",
  scope_2_entries, 9,
};

/* Internal::TestStoryy00A_P005/ TestStoryy00A_P005_Internal */
static const MappingEntry scope_1_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "FirstTest::Story00A 1", NULL, sizeof(outC_Story00A_FirstTest), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_INPUT, "LRBG", NULL, sizeof(NID_LRBG), (int)&inputs_ctx.LRBG, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_OUTPUT, "LinkedBGsOUT", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), (int)&outputs_ctx.LinkedBGsOUT, &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_246, 1, 8},
  /* 3 */ { MAP_INPUT, "Loc", NULL, sizeof(kcg_real), (int)&inputs_ctx.Loc, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_INSTANCE, "TM::RECV_ReadPacket005_ForCalcTrainPos 1", NULL, sizeof(outC_RECV_ReadPacket005_ForCal_TM), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 5 */ { MAP_OUTPUT, "TelegramHeader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (int)&outputs_ctx.TelegramHeader, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_247, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L1, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (int)&outputs_ctx._L2, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_247, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), (int)&outputs_ctx._L3, &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_246, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_LRBG), (int)&outputs_ctx._L4, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), (int)&outputs_ctx._L5, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_1 = {
  "Internal::TestStoryy00A_P005/ TestStoryy00A_P005_Internal",
  scope_1_entries, 11,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Internal::TestStoryy00A_P005", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

