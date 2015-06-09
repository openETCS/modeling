/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_236;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_264;
static const MappingIterator iter_array_7;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_231;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_4;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_231;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_mapwi_33;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_map_4;
static const MappingIterator iter_array_236 = { "array", 236, 236, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_264 = { "array", 264, 264, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_231 = { "array", 231, 231, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_231 = { "foldi", 231, 231, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_mapwi_33 = { "mapwi", 33, 33, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};
static const MappingIterator iter_map_4 = { "map", 4, 4, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_283, 1);
MAP_DECL(scope_282, 1);
MAP_DECL(scope_281, 1);
MAP_DECL(scope_280, 1);
MAP_DECL(scope_279, 1);
MAP_DECL(scope_278, 1);
MAP_DECL(scope_277, 1);
MAP_DECL(scope_276, 1);
MAP_DECL(scope_275, 1);
MAP_DECL(scope_274, 1);
MAP_DECL(scope_273, 1);
MAP_DECL(scope_272, 1);
MAP_DECL(scope_271, 1);
MAP_DECL(scope_270, 1);
MAP_DECL(scope_269, 1);
MAP_DECL(scope_268, 1);
MAP_DECL(scope_267, 1);
MAP_DECL(scope_266, 14);
MAP_DECL(scope_265, 1);
MAP_DECL(scope_264, 7);
MAP_DECL(scope_263, 5);
MAP_DECL(scope_262, 6);
MAP_DECL(scope_261, 2);
MAP_DECL(scope_260, 10);
MAP_DECL(scope_259, 1);
MAP_DECL(scope_258, 1);
MAP_DECL(scope_257, 6);
MAP_DECL(scope_256, 1);
MAP_DECL(scope_255, 8);
MAP_DECL(scope_254, 2);
MAP_DECL(scope_253, 1);
MAP_DECL(scope_252, 5);
MAP_DECL(scope_251, 1);
MAP_DECL(scope_250, 10);
MAP_DECL(scope_249, 1);
MAP_DECL(scope_248, 11);
MAP_DECL(scope_243, 10);
MAP_DECL(scope_242, 10);
MAP_DECL(scope_241, 8);
MAP_DECL(scope_240, 6);
MAP_DECL(scope_239, 15);
MAP_DECL(scope_238, 10);
MAP_DECL(scope_237, 2);
MAP_DECL(scope_236, 2);
MAP_DECL(scope_235, 2);
MAP_DECL(scope_234, 2);
MAP_DECL(scope_233, 3);
MAP_DECL(scope_232, 3);
MAP_DECL(scope_231, 3);
MAP_DECL(scope_230, 6);
MAP_DECL(scope_229, 39);
MAP_DECL(scope_228, 12);
MAP_DECL(scope_227, 26);
MAP_DECL(scope_226, 17);
MAP_DECL(scope_225, 2);
MAP_DECL(scope_224, 2);
MAP_DECL(scope_223, 2);
MAP_DECL(scope_222, 3);
MAP_DECL(scope_221, 3);
MAP_DECL(scope_220, 6);
MAP_DECL(scope_219, 2);
MAP_DECL(scope_218, 2);
MAP_DECL(scope_217, 2);
MAP_DECL(scope_216, 2);
MAP_DECL(scope_215, 3);
MAP_DECL(scope_214, 3);
MAP_DECL(scope_213, 3);
MAP_DECL(scope_212, 6);
MAP_DECL(scope_211, 6);
MAP_DECL(scope_210, 2);
MAP_DECL(scope_209, 2);
MAP_DECL(scope_208, 2);
MAP_DECL(scope_207, 3);
MAP_DECL(scope_206, 3);
MAP_DECL(scope_205, 6);
MAP_DECL(scope_204, 6);
MAP_DECL(scope_203, 6);
MAP_DECL(scope_202, 9);
MAP_DECL(scope_201, 5);
MAP_DECL(scope_200, 6);
MAP_DECL(scope_199, 15);
MAP_DECL(scope_198, 38);
MAP_DECL(scope_197, 14);
MAP_DECL(scope_196, 9);
MAP_DECL(scope_195, 6);
MAP_DECL(scope_194, 2);
MAP_DECL(scope_193, 2);
MAP_DECL(scope_192, 2);
MAP_DECL(scope_191, 2);
MAP_DECL(scope_190, 2);
MAP_DECL(scope_189, 2);
MAP_DECL(scope_188, 2);
MAP_DECL(scope_187, 2);
MAP_DECL(scope_186, 2);
MAP_DECL(scope_185, 2);
MAP_DECL(scope_184, 2);
MAP_DECL(scope_183, 2);
MAP_DECL(scope_182, 2);
MAP_DECL(scope_181, 2);
MAP_DECL(scope_180, 2);
MAP_DECL(scope_179, 2);
MAP_DECL(scope_178, 2);
MAP_DECL(scope_177, 2);
MAP_DECL(scope_176, 2);
MAP_DECL(scope_175, 54);
MAP_DECL(scope_174, 5);
MAP_DECL(scope_173, 28);
MAP_DECL(scope_172, 9);
MAP_DECL(scope_171, 12);
MAP_DECL(scope_170, 17);
MAP_DECL(scope_169, 13);
MAP_DECL(scope_168, 13);
MAP_DECL(scope_167, 13);
MAP_DECL(scope_166, 13);
MAP_DECL(scope_165, 13);
MAP_DECL(scope_164, 13);
MAP_DECL(scope_163, 13);
MAP_DECL(scope_162, 13);
MAP_DECL(scope_161, 13);
MAP_DECL(scope_160, 13);
MAP_DECL(scope_159, 13);
MAP_DECL(scope_158, 13);
MAP_DECL(scope_157, 13);
MAP_DECL(scope_156, 10);
MAP_DECL(scope_155, 9);
MAP_DECL(scope_154, 13);
MAP_DECL(scope_153, 14);
MAP_DECL(scope_152, 6);
MAP_DECL(scope_151, 2);
MAP_DECL(scope_150, 2);
MAP_DECL(scope_149, 2);
MAP_DECL(scope_148, 2);
MAP_DECL(scope_147, 3);
MAP_DECL(scope_146, 3);
MAP_DECL(scope_145, 3);
MAP_DECL(scope_144, 6);
MAP_DECL(scope_143, 6);
MAP_DECL(scope_142, 6);
MAP_DECL(scope_141, 2);
MAP_DECL(scope_140, 2);
MAP_DECL(scope_139, 2);
MAP_DECL(scope_138, 2);
MAP_DECL(scope_137, 3);
MAP_DECL(scope_136, 3);
MAP_DECL(scope_135, 3);
MAP_DECL(scope_134, 6);
MAP_DECL(scope_133, 27);
MAP_DECL(scope_132, 14);
MAP_DECL(scope_131, 2);
MAP_DECL(scope_130, 2);
MAP_DECL(scope_129, 2);
MAP_DECL(scope_128, 3);
MAP_DECL(scope_127, 3);
MAP_DECL(scope_126, 6);
MAP_DECL(scope_125, 6);
MAP_DECL(scope_124, 6);
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
MAP_DECL(scope_7, 15);
MAP_DECL(scope_6, 7);
MAP_DECL(scope_5, 33);
MAP_DECL(scope_4, 17);
MAP_DECL(scope_3, 7);
MAP_DECL(scope_2, 9);
MAP_DECL(scope_1, 11);
MAP_DECL(scope_0, 1);

/* array__5469 */
static const MappingEntry scope_283_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(Q_SCALE), 0, &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_283 = {
  "array__5469",
  scope_283_entries, 1,
};

/* array__5466 */
static const MappingEntry scope_282_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(Q_DIR), 0, &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_282 = {
  "array__5466",
  scope_282_entries, 1,
};

/* array__5463 */
static const MappingEntry scope_281_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(struct__5327), 0, &_Type_struct__5327_Utils, NULL, NULL, &scope_255, 1, 0}
};
static const MappingScope scope_281 = {
  "array__5463",
  scope_281_entries, 1,
};

/* array_int_231_33 */
static const MappingEntry scope_280_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_231), 0, &_Type_array_int_231_Utils, NULL, NULL, &scope_258, 1, 0}
};
static const MappingScope scope_280 = {
  "array_int_231_33",
  scope_280_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_279_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_279 = {
  "array_int_33",
  scope_279_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_278_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_278 = {
  "array_int_30",
  scope_278_entries, 1,
};

/* array__5451 */
static const MappingEntry scope_277_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__5391), 0, &_Type_struct__5391_Utils, NULL, NULL, &scope_264, 1, 0}
};
static const MappingScope scope_277 = {
  "array__5451",
  scope_277_entries, 1,
};

/* array_int_236 */
static const MappingEntry scope_276_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_236, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_276 = {
  "array_int_236",
  scope_276_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_275_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_275 = {
  "array_int_5",
  scope_275_entries, 1,
};

/* array_int_1 */
static const MappingEntry scope_274_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_274 = {
  "array_int_1",
  scope_274_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_273_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_273 = {
  "array_int_4",
  scope_273_entries, 1,
};

/* array_int_264 */
static const MappingEntry scope_272_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_264, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_272 = {
  "array_int_264",
  scope_272_entries, 1,
};

/* array_int_7_33_231 */
static const MappingEntry scope_271_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_7_33), 0, &_Type_array_int_7_33_Utils, NULL, NULL, &scope_268, 1, 0}
};
static const MappingScope scope_271 = {
  "array_int_7_33_231",
  scope_271_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_270_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 0}
};
static const MappingScope scope_270 = {
  "array_int_500_500",
  scope_270_entries, 1,
};

/* array__5427 */
static const MappingEntry scope_269_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__5391), 0, &_Type_struct__5391_Utils, NULL, NULL, &scope_264, 1, 0}
};
static const MappingScope scope_269 = {
  "array__5427",
  scope_269_entries, 1,
};

/* array_int_7_33 */
static const MappingEntry scope_268_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_7), 0, &_Type_array_int_7_Utils, NULL, NULL, &scope_267, 1, 0}
};
static const MappingScope scope_268 = {
  "array_int_7_33",
  scope_268_entries, 1,
};

/* array_int_7 */
static const MappingEntry scope_267_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_267 = {
  "array_int_7",
  scope_267_entries, 1,
};

/* struct__5404 */
static const MappingEntry scope_266_entries[14] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__5404, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__5404, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__5404, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__5404, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__5404, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__5404, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__5404, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__5404, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__5404, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__5404, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__5404, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__5404, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__5401), offsetof(struct__5404, SECTIONS), &_Type_array__5401_Utils, NULL, NULL, &scope_265, 1, 13},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__5404, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_266 = {
  "struct__5404",
  scope_266_entries, 14,
};

/* array__5401 */
static const MappingEntry scope_265_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__5391), 0, &_Type_struct__5391_Utils, NULL, NULL, &scope_264, 1, 0}
};
static const MappingScope scope_265 = {
  "array__5401",
  scope_265_entries, 1,
};

/* struct__5391 */
static const MappingEntry scope_264_entries[7] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__5391, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__5391, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__5391, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__5391, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__5391, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__5391, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__5391, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_264 = {
  "struct__5391",
  scope_264_entries, 7,
};

/* struct__5383 */
static const MappingEntry scope_263_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__5383, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__5383, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(OrBG_TM), offsetof(struct__5383, Or_BG), &_Type_OrBG_TM_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(OrLine_TM), offsetof(struct__5383, Or_Line), &_Type_OrLine_TM_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(struct__5383, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_263 = {
  "struct__5383",
  scope_263_entries, 5,
};

/* struct__5374 */
static const MappingEntry scope_262_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(struct__5374, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(struct__5374, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(struct__5374, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(struct__5356), offsetof(struct__5374, header), &_Type_struct__5356_Utils, NULL, NULL, &scope_260, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__5322), offsetof(struct__5374, packets), &_Type_struct__5322_Utils, NULL, NULL, &scope_254, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(struct__5374, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_262 = {
  "struct__5374",
  scope_262_entries, 6,
};

/* struct__5369 */
static const MappingEntry scope_261_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__5356), offsetof(struct__5369, Header), &_Type_struct__5356_Utils, NULL, NULL, &scope_260, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__5322), offsetof(struct__5369, Messages), &_Type_struct__5322_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_261 = {
  "struct__5369",
  scope_261_entries, 2,
};

/* struct__5356 */
static const MappingEntry scope_260_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(struct__5356, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__5356, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__5356, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(struct__5356, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(struct__5356, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__5356, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__5356, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(struct__5356, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(struct__5356, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(struct__5356, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_260 = {
  "struct__5356",
  scope_260_entries, 10,
};

/* array_int_3 */
static const MappingEntry scope_259_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_259 = {
  "array_int_3",
  scope_259_entries, 1,
};

/* array_int_231 */
static const MappingEntry scope_258_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_258 = {
  "array_int_231",
  scope_258_entries, 1,
};

/* struct__5341 */
static const MappingEntry scope_257_entries[6] = {
  /* 0 */ { MAP_FIELD, ".l_packet", NULL, sizeof(kcg_int), offsetof(struct__5341, l_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__5341, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__5341, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__5341, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".sections", NULL, sizeof(array__5338), offsetof(struct__5341, sections), &_Type_array__5338_Utils, NULL, NULL, &scope_256, 1, 5},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__5341, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_257 = {
  "struct__5341",
  scope_257_entries, 6,
};

/* array__5338 */
static const MappingEntry scope_256_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__5327), 0, &_Type_struct__5327_Utils, NULL, NULL, &scope_255, 1, 0}
};
static const MappingScope scope_256 = {
  "array__5338",
  scope_256_entries, 1,
};

/* struct__5327 */
static const MappingEntry scope_255_entries[8] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__5327, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__5327, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__5327, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__5327, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__5327, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__5327, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__5327, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__5327, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_255 = {
  "struct__5327",
  scope_255_entries, 8,
};

/* struct__5322 */
static const MappingEntry scope_254_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__5322, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__5319), offsetof(struct__5322, PacketHeaders), &_Type_array__5319_Utils, NULL, NULL, &scope_253, 1, 0}
};
static const MappingScope scope_254 = {
  "struct__5322",
  scope_254_entries, 2,
};

/* array__5319 */
static const MappingEntry scope_253_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__5311), 0, &_Type_struct__5311_Utils, NULL, NULL, &scope_252, 1, 0}
};
static const MappingScope scope_253 = {
  "array__5319",
  scope_253_entries, 1,
};

/* struct__5311 */
static const MappingEntry scope_252_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__5311, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__5311, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__5311, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__5311, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__5311, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_252 = {
  "struct__5311",
  scope_252_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_251_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_251 = {
  "array_int_500",
  scope_251_entries, 1,
};

/* struct__5295 */
static const MappingEntry scope_250_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP), offsetof(struct__5295, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__5295, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__5295, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG), offsetof(struct__5295, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__5295, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__5295, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__5295, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__5295, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__5295, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__5295, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_250 = {
  "struct__5295",
  scope_250_entries, 10,
};

/* array__5292 */
static const MappingEntry scope_249_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(struct__5278), 0, &_Type_struct__5278_Utils, NULL, NULL, &scope_248, 1, 0}
};
static const MappingScope scope_249 = {
  "array__5292",
  scope_249_entries, 1,
};

/* struct__5278 */
static const MappingEntry scope_248_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__5278, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_LRBG", NULL, sizeof(kcg_int), offsetof(struct__5278, nid_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__5278, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__5278, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__5278, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__5278, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__5278, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__5278, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__5278, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__5278, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__5278, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_248 = {
  "struct__5278",
  scope_248_entries, 11,
};

/* TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_243_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_264, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_7), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_7_Utils, NULL, NULL, &scope_267, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P005_section_array_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P005_section_array_T_TM_Utils, NULL, NULL, &scope_267, 1, 9}
};
static const MappingScope scope_243 = {
  "TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal",
  scope_243_entries, 10,
};

/* TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_242_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_OBU_sectionlist_array_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L2), &_Type_P005_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_268, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L7), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, flat), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 9}
};
static const MappingScope scope_242 = {
  "TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal",
  scope_242_entries, 10,
};

/* TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal */
static const MappingEntry scope_241_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Flattened), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_flatten_array 2", &iter_foldi_231, sizeof(outC_C_P005_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_242, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_struct_to_array 2", &iter_map_33, sizeof(outC_C_P005_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_243, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_7_33), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_7_33_Utils, NULL, NULL, &scope_268, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P005_OBU_sectionlist_int_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L75), &_Type_P005_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_269, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L76), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L78), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_7_33_231), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_7_33_231_Utils, NULL, NULL, &scope_271, 1, 6}
};
static const MappingScope scope_241 = {
  "TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal",
  scope_241_entries, 8,
};

/* TM_lib_internal::DeterminePacketSizeInt/ DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_240_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_240 = {
  "TM_lib_internal::DeterminePacketSizeInt/ DeterminePacketSizeInt_TM_lib_internal",
  scope_240_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_239_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_239 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_239_entries, 15,
};

/* DRAFTS::SEND_FindSlot/ SEND_FindSlot_DRAFTS */
static const MappingEntry scope_238_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_DRAFTS, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_DRAFTS, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_DRAFTS, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_DRAFTS, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_DRAFTS, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_DRAFTS, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_DRAFTS, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 2}
};
static const MappingScope scope_238 = {
  "DRAFTS::SEND_FindSlot/ SEND_FindSlot_DRAFTS",
  scope_238_entries, 10,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_237_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_237 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_237_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_236_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_236 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_236_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_235_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_233_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_233_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_235 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_235_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_234_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_233_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_233_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_234 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_234_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_233_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_233_entries[0], isActive_kcg_bool_kcg_false, &scope_234, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_233_entries[0], isActive_kcg_bool_kcg_true, &scope_235, 1, 2}
};
static const MappingScope scope_233 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_233_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_232_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_232_entries[0], isActive_kcg_bool_kcg_false, &scope_233, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_232_entries[0], isActive_kcg_bool_kcg_true, &scope_236, 1, 2}
};
static const MappingScope scope_232 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_232_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_231_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_false, &scope_232, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_true, &scope_237, 1, 2}
};
static const MappingScope scope_231 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_231_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_230_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_231, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_230 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_230_entries, 6,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions */
static const MappingEntry scope_229_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 37},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 38},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_230, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_flatten_sections 1", NULL, sizeof(outC_C_P005_flatten_sections_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_241, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::DeterminePacketSizeInt 1", NULL, sizeof(outC_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_240, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_264), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L209), &_Type_array_int_264_Utils, NULL, NULL, &scope_272, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L365", NULL, sizeof(P005_trackide_sectionlist_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L365), &_Type_P005_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_265, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 21 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 24 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 25 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 26 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_273, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L375", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L375), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_264, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_274, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L380", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L380), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_275, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_236), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L384), &_Type_array_int_236_Utils, NULL, NULL, &scope_276, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__5427), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L385), &_Type_array__5427_Utils, NULL, NULL, &scope_269, 1, 35},
  /* 36 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__5451), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L386), &_Type_array__5451_Utils, NULL, NULL, &scope_277, 1, 34},
  /* 37 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 38 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_229 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions",
  scope_229_entries, 39,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_228_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_239, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_270, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 10}
};
static const MappingScope scope_228 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_228_entries, 12,
};

/* DRAFTS::SIM_SEND_WriteBaliseMessageHeader/ SIM_SEND_WriteBaliseMessa_DRAFTS */
static const MappingEntry scope_227_entries[26] = {
  /* 0 */ { MAP_INSTANCE, "DRAFTS::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_DRAFTS), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, Context_1), NULL, NULL, NULL, &scope_238, 1, 0},
  /* 1 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 23},
  /* 2 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 3 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 5}
};
static const MappingScope scope_227 = {
  "DRAFTS::SIM_SEND_WriteBaliseMessageHeader/ SIM_SEND_WriteBaliseMessa_DRAFTS",
  scope_227_entries, 26,
};

/* TM_trackside::Write_P005/ Write_P005_TM_trackside */
static const MappingEntry scope_226_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "DRAFTS::SIM_SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SIM_SEND_WriteBaliseMessa_DRAFTS), offsetof(outC_Write_P005_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_227, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 2 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 16},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::C_P005_tracksim_compr 1", NULL, sizeof(outC_C_P005_tracksim_compr_TM_conversions), offsetof(outC_Write_P005_TM_trackside, Context_1), NULL, NULL, NULL, &scope_229, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P005_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_228, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Write_P005_TM_trackside, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 13}
};
static const MappingScope scope_226 = {
  "TM_trackside::Write_P005/ Write_P005_TM_trackside",
  scope_226_entries, 17,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_225_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L4_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_221_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_221_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_225 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:then:",
  scope_225_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_224_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L3_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_222_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_222_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_224 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:then:",
  scope_224_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_223_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKORIENTATION_Utils, &scope_222_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_222_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_223 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:else:",
  scope_223_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_222_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_222_entries[0], isActive_kcg_bool_kcg_false, &scope_223, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_222_entries[0], isActive_kcg_bool_kcg_true, &scope_224, 1, 2}
};
static const MappingScope scope_222 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:else:",
  scope_222_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1: */
static const MappingEntry scope_221_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_221_entries[0], isActive_kcg_bool_kcg_false, &scope_222, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_221_entries[0], isActive_kcg_bool_kcg_true, &scope_225, 1, 2}
};
static const MappingScope scope_221 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversionsIfBlock1:",
  scope_221_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions */
static const MappingEntry scope_220_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_221, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkorientation_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions, q_linkorientation_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_220 = {
  "TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ CAST_Int_to_Q_LINKORIENTATION_TM_conversions",
  scope_220_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_219_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_213_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_213_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_219 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:then:",
  scope_219_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_218_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L1_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_214_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_214_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_218 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:then:",
  scope_218_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_217_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L13_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_217 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:then:",
  scope_217_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_216_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L14_IfBlock1), &_Type_Q_LINKREACTION_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_216 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:else:",
  scope_216_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_215_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_false, &scope_216, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_true, &scope_217, 1, 2}
};
static const MappingScope scope_215 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:else:",
  scope_215_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_214_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_214_entries[0], isActive_kcg_bool_kcg_false, &scope_215, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_214_entries[0], isActive_kcg_bool_kcg_true, &scope_218, 1, 2}
};
static const MappingScope scope_214 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:else:",
  scope_214_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1: */
static const MappingEntry scope_213_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_213_entries[0], isActive_kcg_bool_kcg_false, &scope_214, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_213_entries[0], isActive_kcg_bool_kcg_true, &scope_219, 1, 2}
};
static const MappingScope scope_213 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversionsIfBlock1:",
  scope_213_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions */
static const MappingEntry scope_212_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_213, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_linkreaction_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions, q_linkreaction_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_212 = {
  "TM_conversions::CAST_Int_to_Q_LINKREACTION/ CAST_Int_to_Q_LINKREACTION_TM_conversions",
  scope_212_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_LOCACC/ CAST_Int_to_Q_LOCACC_TM_conversions */
static const MappingEntry scope_211_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "q_locacc", NULL, sizeof(Q_LOCACC), offsetof(outC_CAST_Int_to_Q_LOCACC_TM_conversions, q_locacc), &_Type_Q_LOCACC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_211 = {
  "TM_conversions::CAST_Int_to_Q_LOCACC/ CAST_Int_to_Q_LOCACC_TM_conversions",
  scope_211_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_210_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L4_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_206_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_206_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_210 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:then:",
  scope_210_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_209_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L3_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_209 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:then:",
  scope_209_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_208_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L1_IfBlock1), &_Type_Q_NEWCOUNTRY_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_208 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:else:",
  scope_208_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_207_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_207_entries[0], isActive_kcg_bool_kcg_false, &scope_208, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_207_entries[0], isActive_kcg_bool_kcg_true, &scope_209, 1, 2}
};
static const MappingScope scope_207 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:else:",
  scope_207_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1: */
static const MappingEntry scope_206_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_206_entries[0], isActive_kcg_bool_kcg_false, &scope_207, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_206_entries[0], isActive_kcg_bool_kcg_true, &scope_210, 1, 2}
};
static const MappingScope scope_206 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversionsIfBlock1:",
  scope_206_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions */
static const MappingEntry scope_205_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_206, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_newcountry_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions, q_newcountry_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_205 = {
  "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions",
  scope_205_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_LINK/ CAST_Int_to_D_LINK_TM_conversions */
static const MappingEntry scope_204_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_link", NULL, sizeof(D_LINK), offsetof(outC_CAST_Int_to_D_LINK_TM_conversions, d_link), &_Type_D_LINK_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_204 = {
  "TM_conversions::CAST_Int_to_D_LINK/ CAST_Int_to_D_LINK_TM_conversions",
  scope_204_entries, 6,
};

/* TM_lib_internal::C_P005_extract_el_section/ C_P005_extract_el_section_TM_lib_internal */
static const MappingEntry scope_203_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L2), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P005_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_203 = {
  "TM_lib_internal::C_P005_extract_el_section/ C_P005_extract_el_section_TM_lib_internal",
  scope_203_entries, 6,
};

/* InfraLib::Send_P005/ Send_P005_InfraLib */
static const MappingEntry scope_202_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_InfraLib, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_InfraLib, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P005 1", NULL, sizeof(outC_Write_P005_TM_trackside), offsetof(outC_Send_P005_InfraLib, Context_1), NULL, &scope_202_entries[0], isActive_kcg_bool_kcg_true, &scope_226, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_InfraLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Send_P005_InfraLib, _L4), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_266, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_InfraLib, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_InfraLib, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_InfraLib, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_InfraLib, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_202 = {
  "InfraLib::Send_P005/ Send_P005_InfraLib",
  scope_202_entries, 9,
};

/* TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions */
static const MappingEntry scope_201_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Loc_real", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, Loc_real), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_201 = {
  "TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions",
  scope_201_entries, 5,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/ */
static const MappingEntry scope_200_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_InfraLib, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_200 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/",
  scope_200_entries, 6,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib */
static const MappingEntry scope_199_entries[15] = {
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
  /* 14 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_200, 1, 0}
};
static const MappingScope scope_199 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib",
  scope_199_entries, 15,
};

/* TM_lib_internal::C_P005_us_array/ C_P005_us_array_TM_lib_internal */
static const MappingEntry scope_198_entries[38] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_LINK 1", NULL, sizeof(outC_CAST_Int_to_D_LINK_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _7_Context_1), NULL, NULL, NULL, &scope_204, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_BG 1", NULL, sizeof(outC_CAST_Int_to_NID_BG_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_125, 1, 9},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 1", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _5_Context_1), NULL, NULL, NULL, &scope_124, 1, 4},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKORIENTATION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_220, 1, 8},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINKREACTION 1", NULL, sizeof(outC_CAST_Int_to_Q_LINKREACTION_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_212, 1, 7},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LOCACC 1", NULL, sizeof(outC_CAST_Int_to_Q_LOCACC_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _3_Context_1), NULL, NULL, NULL, &scope_211, 1, 6},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NEWCOUNTRY 1", NULL, sizeof(outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions), offsetof(outC_C_P005_us_array_TM_lib_internal, _4_Context_1), NULL, NULL, NULL, &scope_205, 1, 5},
  /* 7 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 1", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, _6_Context_1), NULL, NULL, NULL, &scope_203, 1, 0},
  /* 8 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 2", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_203, 1, 1},
  /* 9 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 3", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_203, 1, 2},
  /* 10 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 4", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_4), NULL, NULL, NULL, &scope_203, 1, 13},
  /* 11 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 5", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_5), NULL, NULL, NULL, &scope_203, 1, 12},
  /* 12 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 6", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_6), NULL, NULL, NULL, &scope_203, 1, 11},
  /* 13 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_extract_el_section 7", NULL, sizeof(outC_C_P005_extract_el_section_TM_lib_internal), offsetof(outC_C_P005_us_array_TM_lib_internal, Context_7), NULL, NULL, NULL, &scope_203, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_us_array_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 20 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 21 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 22 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 23 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 24 */ { MAP_LOCAL, "_L25", NULL, sizeof(D_LINK), offsetof(outC_C_P005_us_array_TM_lib_internal, _L25), &_Type_D_LINK_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L26", NULL, sizeof(NID_C), offsetof(outC_C_P005_us_array_TM_lib_internal, _L26), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_BG), offsetof(outC_C_P005_us_array_TM_lib_internal, _L27), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_C_P005_us_array_TM_lib_internal, _L28), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_C_P005_us_array_TM_lib_internal, _L29), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 30},
  /* 29 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 30 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_LINKREACTION), offsetof(outC_C_P005_us_array_TM_lib_internal, _L30), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_LOCACC), offsetof(outC_C_P005_us_array_TM_lib_internal, _L31), &_Type_Q_LOCACC_Utils, NULL, NULL, NULL, 1, 28},
  /* 32 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_us_array_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 33 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_us_array_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 34 */ { MAP_LOCAL, "_L4", NULL, sizeof(P005_section_enum_T_TM), offsetof(outC_C_P005_us_array_TM_lib_internal, _L4), &_Type_P005_section_enum_T_TM_Utils, NULL, NULL, &scope_255, 1, 16},
  /* 35 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_us_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 36 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_OUTPUT, "sections", NULL, sizeof(P005_section_enum_T_TM), offsetof(outC_C_P005_us_array_TM_lib_internal, sections), &_Type_P005_section_enum_T_TM_Utils, NULL, NULL, &scope_255, 1, 37}
};
static const MappingScope scope_198 = {
  "TM_lib_internal::C_P005_us_array/ C_P005_us_array_TM_lib_internal",
  scope_198_entries, 38,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_197_entries[14] = {
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
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 3}
};
static const MappingScope scope_197 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_197_entries, 14,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_196_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 1}
};
static const MappingScope scope_196 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_196_entries, 9,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLib */
static const MappingEntry scope_195_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, Balise_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L30", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L30), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L31), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L32", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_No_Balise_Packets_InfraLib, _L32), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_No_Balise_Packets_InfraLib, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L36", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L36), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0}
};
static const MappingScope scope_195 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLib",
  scope_195_entries, 6,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 19/ */
static const MappingEntry scope_194_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_194 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 19/",
  scope_194_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 18/ */
static const MappingEntry scope_193_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_193 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 18/",
  scope_193_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 17/ */
static const MappingEntry scope_192_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_192 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 17/",
  scope_192_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 16/ */
static const MappingEntry scope_191_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_191 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 16/",
  scope_191_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 15/ */
static const MappingEntry scope_190_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_190 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 15/",
  scope_190_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 14/ */
static const MappingEntry scope_189_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_189 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 14/",
  scope_189_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 13/ */
static const MappingEntry scope_188_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_188 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 13/",
  scope_188_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 12/ */
static const MappingEntry scope_187_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_187 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 12/",
  scope_187_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 11/ */
static const MappingEntry scope_186_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_186 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 11/",
  scope_186_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 10/ */
static const MappingEntry scope_185_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_185 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 10/",
  scope_185_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 9/ */
static const MappingEntry scope_184_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_184 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 9/",
  scope_184_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 8/ */
static const MappingEntry scope_183_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_183 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 8/",
  scope_183_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 7/ */
static const MappingEntry scope_182_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_182 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 7/",
  scope_182_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 6/ */
static const MappingEntry scope_181_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_181 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 6/",
  scope_181_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 5/ */
static const MappingEntry scope_180_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_180 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 5/",
  scope_180_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 4/ */
static const MappingEntry scope_179_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_179 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 4/",
  scope_179_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 3/ */
static const MappingEntry scope_178_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_178 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 3/",
  scope_178_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 2/ */
static const MappingEntry scope_177_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_177 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 2/",
  scope_177_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 1/ */
static const MappingEntry scope_176_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 1}
};
static const MappingScope scope_176 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 1/",
  scope_176_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_175_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, Balise_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 53},
  /* 4 */ { MAP_EXPANDED, "InfraLib::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_176, 1, 0},
  /* 5 */ { MAP_EXPANDED, "InfraLib::No_Packet 10", NULL, 0, 0, NULL, NULL, NULL, &scope_185, 1, 10},
  /* 6 */ { MAP_EXPANDED, "InfraLib::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_186, 1, 11},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_187, 1, 12},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_188, 1, 13},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_189, 1, 14},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_190, 1, 15},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_191, 1, 16},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_192, 1, 17},
  /* 13 */ { MAP_EXPANDED, "InfraLib::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_193, 1, 18},
  /* 14 */ { MAP_EXPANDED, "InfraLib::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_194, 1, 19},
  /* 15 */ { MAP_EXPANDED, "InfraLib::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_177, 1, 1},
  /* 16 */ { MAP_EXPANDED, "InfraLib::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_178, 1, 2},
  /* 17 */ { MAP_EXPANDED, "InfraLib::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_179, 1, 3},
  /* 18 */ { MAP_EXPANDED, "InfraLib::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_180, 1, 4},
  /* 19 */ { MAP_EXPANDED, "InfraLib::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_181, 1, 5},
  /* 20 */ { MAP_EXPANDED, "InfraLib::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_182, 1, 6},
  /* 21 */ { MAP_EXPANDED, "InfraLib::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_183, 1, 7},
  /* 22 */ { MAP_EXPANDED, "InfraLib::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_184, 1, 8},
  /* 23 */ { MAP_INSTANCE, "InfraLib::Send_P005 1", NULL, sizeof(outC_Send_P005_InfraLib), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_202, 1, 9},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L31), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L32), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 51},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 30}
};
static const MappingScope scope_175 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364/ Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_175_entries, 54,
};

/* InfraLib::Balise_Localisation/ Balise_Localisation_InfraLibmath::Min 1/ */
static const MappingEntry scope_174_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, Mi_Output_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L21_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L22_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L24_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_174 = {
  "InfraLib::Balise_Localisation/ Balise_Localisation_InfraLibmath::Min 1/",
  scope_174_entries, 5,
};

/* InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib */
static const MappingEntry scope_173_entries[28] = {
  /* 0 */ { MAP_INSTANCE, "InfraLib::Balise_Interdistance 1", NULL, sizeof(outC_Balise_Interdistance_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, Context_1), NULL, NULL, NULL, &scope_199, 1, 0},
  /* 1 */ { MAP_OUTPUT, "PIG_0_out", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, PIG_0_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::TOOLS_convert_engineering_location 1", NULL, sizeof(outC_TOOLS_convert_engineering_TM_conversions), offsetof(outC_Balise_Localisation_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_201, 1, 1},
  /* 3 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, TrainPass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Localisation_InfraLib, _L16), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L65", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, _L65), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L71", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, _L71), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L73), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L75), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L76), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L77), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L82), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L90), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L91), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L92), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L93), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L94), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L95), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_174, 1, 2}
};
static const MappingScope scope_173 = {
  "InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib",
  scope_173_entries, 28,
};

/* TM_lib_internal::C_P005_unflatten_sections/ C_P005_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_172_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_us_array 1", &iter_mapwi_33, sizeof(outC_C_P005_us_array_TM_lib_internal), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_198, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_258, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_279, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_231_33), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_231_33_Utils, NULL, NULL, &scope_280, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__5338), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, _L9), &_Type_array__5338_Utils, NULL, NULL, &scope_256, 1, 6},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(P005_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P005_unflatten_sections_TM_lib_internal, sections), &_Type_P005_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_256, 1, 8}
};
static const MappingScope scope_172 = {
  "TM_lib_internal::C_P005_unflatten_sections/ C_P005_unflatten_sections_TM_lib_internal",
  scope_172_entries, 9,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_171_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_197, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_270, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_171 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_171_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_170_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 16},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_196, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_278, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_170 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_170_entries, 17,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1/ Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_169_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_169_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_169 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1/ Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_169_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0/ Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_168_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_168_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_168 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0/ Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_168_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1/ Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_167_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_167_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_167 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1/ Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_167_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0/ Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_166_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_166_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_166 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0/ Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_166_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0/ Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_165_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_165_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_165 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0/ Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_165_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1/ Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_164_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_164_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_164 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1/ Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_164_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1/ Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_163_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_163_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_163 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1/ Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_163_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0/ Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_162_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_162_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_162 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0/ Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_162_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0/ Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_161_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_161_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_161 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0/ Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_161_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1/ Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_160_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_160_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_160 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1/ Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_160_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1/ Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_159_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_159_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_159 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1/ Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_159_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0/ Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_158_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_158_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_158 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0/ Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_158_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0/ Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_157_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364 1", NULL, sizeof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_157_entries[0], isActive_kcg_bool_kcg_true, &scope_175, 1, 1},
  /* 2 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 3 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_157 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0/ Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_157_entries, 13,
};

/* InfraLib::Balise_Group_Close/ Balise_Group_Close_InfraLib */
static const MappingEntry scope_156_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Error_out", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, Error_out), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L2), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L20), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L21", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Close_InfraLib, _L21), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L22), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Close_InfraLib, _L23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L24), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_156 = {
  "InfraLib::Balise_Group_Close/ Balise_Group_Close_InfraLib",
  scope_156_entries, 10,
};

/* InfraLib::Balise_Group_Init/ Balise_Group_Init_InfraLib */
static const MappingEntry scope_155_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "BG_internal_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Init_InfraLib, BG_internal_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_InfraLib, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_Init_InfraLib, _L2), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Init_InfraLib, _L26), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Init_InfraLib, _L27), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Init_InfraLib, _L28), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_InfraLib, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_Init_InfraLib, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Init_InfraLib, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_155 = {
  "InfraLib::Balise_Group_Init/ Balise_Group_Init_InfraLib",
  scope_155_entries, 9,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1/ Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_154_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364 1", NULL, sizeof(outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_154_entries[0], isActive_kcg_bool_kcg_true, &scope_175, 1, 1},
  /* 2 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 3 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_173, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 4}
};
static const MappingScope scope_154 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1/ Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_154_entries, 13,
};

/* TM_conversions::C_P005_LinkedBGs/ C_P005_LinkedBGs_TM_conversions */
static const MappingEntry scope_153_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "LinkedBGsOUT", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC_C_P005_LinkedBGs_TM_conversions, LinkedBGsOUT), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 13},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(NID_C), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L10), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(NID_BG), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L11), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(Q_LINKORIENTATION), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L12), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(Q_LINKREACTION), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L13), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(Q_LOCACC), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L14), &_Type_Q_LOCACC_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(LinkedBG_T_BG_Types_Pkg), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L2), &_Type_LinkedBG_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_248, 1, 0},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_LRBG), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L3), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L4), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L5), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(P005_section_enum_T_TM), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L6), &_Type_P005_section_enum_T_TM_Utils, NULL, NULL, &scope_255, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(D_LINK), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L8), &_Type_D_LINK_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(Q_NEWCOUNTRY), offsetof(outC_C_P005_LinkedBGs_TM_conversions, _L9), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_153 = {
  "TM_conversions::C_P005_LinkedBGs/ C_P005_LinkedBGs_TM_conversions",
  scope_153_entries, 14,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_152_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1_124), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L2_122), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L4_123), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P005_compr_onboard_TM_conversions, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_152 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_152_entries, 6,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_151_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L4_120_IfBlock1), &_Type_Q_DIR_Utils, &scope_145_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L5_121_IfBlock1), &_Type_kcg_bool_Utils, &scope_145_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_151 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_151_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_150_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L3_113_IfBlock1), &_Type_Q_DIR_Utils, &scope_146_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_146_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_150 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_150_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_149_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L2_117_IfBlock1), &_Type_Q_DIR_Utils, &scope_147_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L4_118_IfBlock1), &_Type_kcg_bool_Utils, &scope_147_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_149 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_149_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_148_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1_116_IfBlock1), &_Type_kcg_bool_Utils, &scope_147_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L2_115_IfBlock1), &_Type_Q_DIR_Utils, &scope_147_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_148 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_148_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_147_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _14_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_147_entries[0], isActive_kcg_bool_kcg_false, &scope_148, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_147_entries[0], isActive_kcg_bool_kcg_true, &scope_149, 1, 2}
};
static const MappingScope scope_147 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_147_entries, 3,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_146_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _19_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_146_entries[0], isActive_kcg_bool_kcg_false, &scope_147, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_146_entries[0], isActive_kcg_bool_kcg_true, &scope_150, 1, 2}
};
static const MappingScope scope_146 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_146_entries, 3,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_145_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _12_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_145_entries[0], isActive_kcg_bool_kcg_false, &scope_146, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_145_entries[0], isActive_kcg_bool_kcg_true, &scope_151, 1, 2}
};
static const MappingScope scope_145 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_145_entries, 3,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_144_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_145, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _9__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _10__L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _11_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_compr_onboard_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_144 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_144_entries, 6,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_L_PACKET 1/ */
static const MappingEntry scope_143_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1_18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _6__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L13_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L8_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L9_17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "l_packet", NULL, sizeof(L_PACKET), offsetof(outC_C_P005_compr_onboard_TM_conversions, l_packet_1), &_Type_L_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_143 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_L_PACKET 1/",
  scope_143_entries, 6,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_142_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L9_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P005_compr_onboard_TM_conversions, n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_142 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/",
  scope_142_entries, 6,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_141_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L2_14_IfBlock1), &_Type_Q_SCALE_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L3_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_141 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_141_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_140_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_136_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_136_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_140 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_140_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_139_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1_12_IfBlock1), &_Type_Q_SCALE_Utils, &scope_137_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_137_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_139 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_139_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_138_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1_11_IfBlock1), &_Type_Q_SCALE_Utils, &scope_137_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_137_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_138 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_138_entries, 2,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_137_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_137_entries[0], isActive_kcg_bool_kcg_false, &scope_138, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_137_entries[0], isActive_kcg_bool_kcg_true, &scope_139, 1, 2}
};
static const MappingScope scope_137 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_137_entries, 3,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_136_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_136_entries[0], isActive_kcg_bool_kcg_false, &scope_137, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_136_entries[0], isActive_kcg_bool_kcg_true, &scope_140, 1, 2}
};
static const MappingScope scope_136 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_136_entries, 3,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_135_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_kcg_bool_kcg_false, &scope_136, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_kcg_bool_kcg_true, &scope_141, 1, 2}
};
static const MappingScope scope_135 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_135_entries, 3,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_134_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_135, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_compr_onboard_TM_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_134 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_134_entries, 6,
};

/* TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversions */
static const MappingEntry scope_133_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "P005_onboard", NULL, sizeof(P005_OBU_T_TM), offsetof(outC_C_P005_compr_onboard_TM_conversions, P005_onboard), &_Type_P005_OBU_T_TM_Utils, NULL, NULL, &scope_257, 1, 26},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_L_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_143, 1, 3},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_152, 1, 5},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_142, 1, 2},
  /* 4 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_144, 1, 4},
  /* 5 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_134, 1, 0},
  /* 6 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_unflatten_sections 1", NULL, sizeof(outC_C_P005_unflatten_sections_TM_lib_internal), offsetof(outC_C_P005_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_172, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_1), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L1), &_Type_array_int_1_Utils, NULL, NULL, &scope_274, 1, 20},
  /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(P005_OBU_T_TM), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L10), &_Type_P005_OBU_T_TM_Utils, NULL, NULL, &scope_257, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_int_231), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L13), &_Type_array_int_231_Utils, NULL, NULL, &scope_258, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_1), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L2), &_Type_array_int_1_Utils, NULL, NULL, &scope_274, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 23},
  /* 19 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 18},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(P005_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L5), &_Type_P005_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_256, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_3), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L6), &_Type_array_int_3_Utils, NULL, NULL, &scope_259, 1, 16},
  /* 24 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 15},
  /* 25 */ { MAP_LOCAL, "_L8", NULL, sizeof(L_PACKET), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L8), &_Type_L_PACKET_Utils, NULL, NULL, NULL, 1, 14},
  /* 26 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P005_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 13}
};
static const MappingScope scope_133 = {
  "TM_conversions::C_P005_compr_onboard/ C_P005_compr_onboard_TM_conversions",
  scope_133_entries, 27,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_132_entries[14] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 12},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 13},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_170, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_171, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_253, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_251, 1, 9}
};
static const MappingScope scope_132 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_132_entries, 14,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_131_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L4_IfBlock1), &_Type_Q_LINK_Utils, &scope_127_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_127_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_131 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then:",
  scope_131_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_130_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L3_IfBlock1), &_Type_Q_LINK_Utils, &scope_128_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_128_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_130 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then:",
  scope_130_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_129_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L1_IfBlock1), &_Type_Q_LINK_Utils, &scope_128_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_128_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_129 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else:",
  scope_129_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_128_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_128_entries[0], isActive_kcg_bool_kcg_false, &scope_129, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_128_entries[0], isActive_kcg_bool_kcg_true, &scope_130, 1, 2}
};
static const MappingScope scope_128 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:",
  scope_128_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1: */
static const MappingEntry scope_127_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_127_entries[0], isActive_kcg_bool_kcg_false, &scope_128, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_127_entries[0], isActive_kcg_bool_kcg_true, &scope_131, 1, 2}
};
static const MappingScope scope_127 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:",
  scope_127_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions */
static const MappingEntry scope_126_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_127, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_link", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_link_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_126 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions",
  scope_126_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions */
static const MappingEntry scope_125_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_125 = {
  "TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions",
  scope_125_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_124_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_124 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_124_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_MCOUNT/ CAST_Int_to_M_MCOUNT_TM_conversions */
static const MappingEntry scope_123_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_mcount", NULL, sizeof(M_MCOUNT), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_123 = {
  "TM_conversions::CAST_Int_to_M_MCOUNT/ CAST_Int_to_M_MCOUNT_TM_conversions",
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

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_56_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_56 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_56_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_55_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_55 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_55_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_54_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_54 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_54_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_53_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_53 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_53_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_52_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_52 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_52_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_51_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_51 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_51_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_50_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0 1", NULL, sizeof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_168, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1 1", NULL, sizeof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_169, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_156, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_155, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_51, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_52, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_53, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_54, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 19}
};
static const MappingScope scope_50 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_50_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_49_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_49 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_49_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_48_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_48 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_48_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_47_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_47 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_47_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_46_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_46 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_46_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_45_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_45 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_45_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_44_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_44 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_44_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_43_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0 1", NULL, sizeof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_166, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1 1", NULL, sizeof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_167, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_156, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_155, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_45, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 19}
};
static const MappingScope scope_43 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_43_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_42_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_42 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_42_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_41_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_41 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_41_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_40_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_40 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_40_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_39_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_39 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_39_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_38_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_38 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_38_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_37_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_37 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_37_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_36_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0 1", NULL, sizeof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_165, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1 1", NULL, sizeof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_164, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_156, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_155, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_37, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 19}
};
static const MappingScope scope_36 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_36_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_35_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_35 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_35_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_34_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_34 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_34_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_33_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_33 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_33_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_32_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_32 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_32_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_31_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_31 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_31_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_30_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_30 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_30_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_29_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0 1", NULL, sizeof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_162, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1 1", NULL, sizeof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_163, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_156, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_155, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 19}
};
static const MappingScope scope_29 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_29_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_28_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_28 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_28_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_27_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_27 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_27_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_26_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_26 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_26_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_25_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_25 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_25_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_24_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_24 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_24_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_23_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_23 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_23_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_22_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0 1", NULL, sizeof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_161, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1 1", NULL, sizeof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_160, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_156, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_155, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 19}
};
static const MappingScope scope_22 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_22_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_21_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_21 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_21_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_20_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_20 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_20_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_19_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_19 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_19_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_18_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_18 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_18_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_17_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_17 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_17_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_16_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_16 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_16_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_15_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0 1", NULL, sizeof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1 1", NULL, sizeof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_159, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_156, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_155, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 19}
};
static const MappingScope scope_15 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_15_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_14_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_14 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_14_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_13_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_13 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_13_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_12_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_12 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_12_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_11_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_11 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_11_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_10_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_10 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_10_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_9_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 3}
};
static const MappingScope scope_9 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_9_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_8_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0 1", NULL, sizeof(outC_Balise_364_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1 1", NULL, sizeof(outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_154, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_156, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_155, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_262, 1, 19}
};
static const MappingScope scope_8 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364/ Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_8_entries, 37,
};

/* TM_conversions::C_P005_ForCalcTrainPos/ C_P005_ForCalcTrainPos_TM_conversions */
static const MappingEntry scope_7_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "LinkedBGsOUT", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, LinkedBGsOUT), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 14},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P005_LinkedBGs 1", &iter_map_4, sizeof(outC_C_P005_LinkedBGs_TM_conversions), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, Context_1), NULL, NULL, NULL, &scope_153, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L1), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(N_ITER), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L10), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(P005_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L11), &_Type_P005_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_256, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(array__5463), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L18), &_Type_array__5463_Utils, NULL, NULL, &scope_281, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_OBU_T_TM), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L2), &_Type_P005_OBU_T_TM_Utils, NULL, NULL, &scope_257, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L20", NULL, sizeof(array__5466), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L20), &_Type_array__5466_Utils, NULL, NULL, &scope_282, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(array__5469), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L21), &_Type_array__5469_Utils, NULL, NULL, &scope_283, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(array_int_4), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L22), &_Type_array_int_4_Utils, NULL, NULL, &scope_273, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(array__5292), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L4), &_Type_array__5292_Utils, NULL, NULL, &scope_249, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L7), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(L_PACKET), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L8), &_Type_L_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(Q_SCALE), offsetof(outC_C_P005_ForCalcTrainPos_TM_conversions, _L9), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_7 = {
  "TM_conversions::C_P005_ForCalcTrainPos/ C_P005_ForCalcTrainPos_TM_conversions",
  scope_7_entries, 15,
};

/* TM::Read_P005/ Read_P005_TM */
static const MappingEntry scope_6_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "P005_OBU_out", NULL, sizeof(P005_OBU_T_TM), offsetof(outC_Read_P005_TM, P005_OBU_out), &_Type_P005_OBU_T_TM_Utils, NULL, NULL, &scope_257, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P005_compr_onboard 3", NULL, sizeof(outC_C_P005_compr_onboard_TM_conversions), offsetof(outC_Read_P005_TM, Context_3), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P005_TM, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P005_OBU_T_TM), offsetof(outC_Read_P005_TM, _L166), &_Type_P005_OBU_T_TM_Utils, NULL, NULL, &scope_257, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P005_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_252, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P005_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_251, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P005_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 3}
};
static const MappingScope scope_6 = {
  "TM::Read_P005/ Read_P005_TM",
  scope_6_entries, 7,
};

/* TM_conversions::CASTLIB_BaliseHeaders/ CASTLIB_BaliseHeaders_TM_conversions */
static const MappingEntry scope_5_entries[33] = {
  /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, Out), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 32},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_DUP 1", NULL, sizeof(outC_CAST_Int_to_M_DUP_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_115, 1, 5},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_MCOUNT 1", NULL, sizeof(outC_CAST_Int_to_M_MCOUNT_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_123, 1, 6},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_VERSION 1", NULL, sizeof(outC_CAST_Int_to_M_VERSION_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _8_Context_1), NULL, NULL, NULL, &scope_63, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_BG 1", NULL, sizeof(outC_CAST_Int_to_NID_BG_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_125, 1, 8},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 1", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_124, 1, 7},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_PIG 1", NULL, sizeof(outC_CAST_Int_to_N_PIG_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _6_Context_1), NULL, NULL, NULL, &scope_79, 1, 3},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_TOTAL 1", NULL, sizeof(outC_CAST_Int_to_N_TOTAL_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _5_Context_1), NULL, NULL, NULL, &scope_97, 1, 4},
  /* 8 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINK 1", NULL, sizeof(outC_CAST_Int_to_Q_LINK_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, Context_1), NULL, NULL, NULL, &scope_126, 1, 9},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_MEDIA 1", NULL, sizeof(outC_CAST_Int_to_Q_MEDIA_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _7_Context_1), NULL, NULL, NULL, &scope_73, 1, 2},
  /* 10 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_UPDOWN 1", NULL, sizeof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _9_Context_1), NULL, NULL, NULL, &scope_57, 1, 0},
  /* 11 */ { MAP_LOCAL, "_L1", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L22", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L22), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L23", NULL, sizeof(Q_UPDOWN), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L23), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L24", NULL, sizeof(M_VERSION), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L24), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_MEDIA), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L25), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L26", NULL, sizeof(N_PIG), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L26), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L27", NULL, sizeof(N_TOTAL), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L27), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L28", NULL, sizeof(M_DUP), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L28), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L29", NULL, sizeof(M_MCOUNT), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L29), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L30", NULL, sizeof(NID_C), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L30), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_BG), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L31), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_LINK), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L32), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 28 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 29 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 30 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 32 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_5 = {
  "TM_conversions::CASTLIB_BaliseHeaders/ CASTLIB_BaliseHeaders_TM_conversions",
  scope_5_entries, 33,
};

/* FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest */
static const MappingEntry scope_4_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341 1", NULL, sizeof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _6_Context_1), NULL, NULL, NULL, &scope_50, 1, 6},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364 1", NULL, sizeof(outC_Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, Context_1), NULL, NULL, NULL, &scope_8, 1, 0},
  /* 2 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365 1", NULL, sizeof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _1_Context_1), NULL, NULL, NULL, &scope_43, 1, 5},
  /* 3 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366 1", NULL, sizeof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _2_Context_1), NULL, NULL, NULL, &scope_29, 1, 3},
  /* 4 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367 1", NULL, sizeof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _3_Context_1), NULL, NULL, NULL, &scope_15, 1, 1},
  /* 5 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368 1", NULL, sizeof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _4_Context_1), NULL, NULL, NULL, &scope_22, 1, 2},
  /* 6 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369 1", NULL, sizeof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _5_Context_1), NULL, NULL, NULL, &scope_36, 1, 4},
  /* 7 */ { MAP_OUTPUT, "BM", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, BM), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_Story00A_BTM_FirstTest, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L34", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L34), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L35), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L36), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L37", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L37), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L38), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L39), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L40), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 8},
  /* 16 */ { MAP_LOCAL, "_L41", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L41), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 7}
};
static const MappingScope scope_4 = {
  "FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest",
  scope_4_entries, 17,
};

/* TM::Read_P005_ForCalcTrainPos/ Read_P005_ForCalcTrainPos_TM */
static const MappingEntry scope_3_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "LinkedBGsOUT", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(outC_Read_P005_ForCalcTrainPos_TM, LinkedBGsOUT), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM::Read_P005 1", NULL, sizeof(outC_Read_P005_TM), offsetof(outC_Read_P005_ForCalcTrainPos_TM, Context_1), NULL, NULL, NULL, &scope_6, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P005_ForCalcTrainPos 1", NULL, sizeof(outC_C_P005_ForCalcTrainPos_TM_conversions), offsetof(outC_Read_P005_ForCalcTrainPos_TM, _1_Context_1), NULL, NULL, NULL, &scope_7, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P005_ForCalcTrainPos_TM, _L1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(NID_LRBG), offsetof(outC_Read_P005_ForCalcTrainPos_TM, _L2), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(P005_OBU_T_TM), offsetof(outC_Read_P005_ForCalcTrainPos_TM, _L3), &_Type_P005_OBU_T_TM_Utils, NULL, NULL, &scope_257, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), offsetof(outC_Read_P005_ForCalcTrainPos_TM, _L4), &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 5}
};
static const MappingScope scope_3 = {
  "TM::Read_P005_ForCalcTrainPos/ Read_P005_ForCalcTrainPos_TM",
  scope_3_entries, 7,
};

/* FirstTest::Story00A/ Story00A_FirstTest */
static const MappingEntry scope_2_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "FirstTest::Story00A_BTM 1", NULL, sizeof(outC_Story00A_BTM_FirstTest), offsetof(outC_Story00A_FirstTest, Context_1), NULL, NULL, NULL, &scope_4, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Story00A_FirstTest, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 7},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CASTLIB_BaliseHeaders 1", NULL, sizeof(outC_CASTLIB_BaliseHeaders_TM_conversions), offsetof(outC_Story00A_FirstTest, _1_Context_1), NULL, NULL, NULL, &scope_5, 1, 1},
  /* 3 */ { MAP_OUTPUT, "TelegramHeader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Story00A_FirstTest, TelegramHeader), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Story00A_FirstTest, _L1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_260, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Story00A_FirstTest, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_FirstTest, _L4), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_261, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Story00A_FirstTest, _L7), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_Story00A_FirstTest, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_2 = {
  "FirstTest::Story00A/ Story00A_FirstTest",
  scope_2_entries, 9,
};

/* Internal::TestStory00A_P005/ TestStory00A_P005_Internal */
static const MappingEntry scope_1_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "FirstTest::Story00A 1", NULL, sizeof(outC_Story00A_FirstTest), (int)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_INPUT, "LRBG", NULL, sizeof(NID_LRBG), (int)&inputs_ctx.LRBG, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_OUTPUT, "LinkedBGsOUT", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), (int)&outputs_ctx.LinkedBGsOUT, &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 8},
  /* 3 */ { MAP_INPUT, "Loc", NULL, sizeof(kcg_real), (int)&inputs_ctx.Loc, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_INSTANCE, "TM::Read_P005_ForCalcTrainPos 1", NULL, sizeof(outC_Read_P005_ForCalcTrainPos_TM), (int)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 5 */ { MAP_OUTPUT, "TelegramHeader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (int)&outputs_ctx.TelegramHeader, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (int)&outputs_ctx._L1, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_254, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (int)&outputs_ctx._L2, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_250, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(LinkedBGs_T_BG_Types_Pkg), (int)&outputs_ctx._L3, &_Type_LinkedBGs_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_249, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_LRBG), (int)&outputs_ctx._L4, &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), (int)&outputs_ctx._L5, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_1 = {
  "Internal::TestStory00A_P005/ TestStory00A_P005_Internal",
  scope_1_entries, 11,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Internal::TestStory00A_P005", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

