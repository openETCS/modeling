/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_21;
static const MappingIterator iter_array_14;
static const MappingIterator iter_array_149;
static const MappingIterator iter_array_20;
static const MappingIterator iter_array_351;
static const MappingIterator iter_array_499;
static const MappingIterator iter_array_9;
static const MappingIterator iter_array_491;
static const MappingIterator iter_array_105;
static const MappingIterator iter_array_395;
static const MappingIterator iter_array_236;
static const MappingIterator iter_array_264;
static const MappingIterator iter_array_18;
static const MappingIterator iter_array_56;
static const MappingIterator iter_array_24;
static const MappingIterator iter_array_444;
static const MappingIterator iter_array_68;
static const MappingIterator iter_array_432;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_494;
static const MappingIterator iter_array_104;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_396;
static const MappingIterator iter_array_99;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_2;
static const MappingIterator iter_array_64;
static const MappingIterator iter_array_231;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_7;
static const MappingIterator iter_array_128;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_foldi_32;
static const MappingIterator iter_map_32;
static const MappingIterator iter_foldi_128;
static const MappingIterator iter_foldi_99;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_231;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_array_21 = { "array", 21, 21, NULL};
static const MappingIterator iter_array_14 = { "array", 14, 14, NULL};
static const MappingIterator iter_array_149 = { "array", 149, 149, NULL};
static const MappingIterator iter_array_20 = { "array", 20, 20, NULL};
static const MappingIterator iter_array_351 = { "array", 351, 351, NULL};
static const MappingIterator iter_array_499 = { "array", 499, 499, NULL};
static const MappingIterator iter_array_9 = { "array", 9, 9, NULL};
static const MappingIterator iter_array_491 = { "array", 491, 491, NULL};
static const MappingIterator iter_array_105 = { "array", 105, 105, NULL};
static const MappingIterator iter_array_395 = { "array", 395, 395, NULL};
static const MappingIterator iter_array_236 = { "array", 236, 236, NULL};
static const MappingIterator iter_array_264 = { "array", 264, 264, NULL};
static const MappingIterator iter_array_18 = { "array", 18, 18, NULL};
static const MappingIterator iter_array_56 = { "array", 56, 56, NULL};
static const MappingIterator iter_array_24 = { "array", 24, 24, NULL};
static const MappingIterator iter_array_444 = { "array", 444, 444, NULL};
static const MappingIterator iter_array_68 = { "array", 68, 68, NULL};
static const MappingIterator iter_array_432 = { "array", 432, 432, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_494 = { "array", 494, 494, NULL};
static const MappingIterator iter_array_104 = { "array", 104, 104, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_396 = { "array", 396, 396, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_231 = { "array", 231, 231, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_array_128 = { "array", 128, 128, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_foldi_32 = { "foldi", 32, 32, NULL};
static const MappingIterator iter_map_32 = { "map", 32, 32, NULL};
static const MappingIterator iter_foldi_128 = { "foldi", 128, 128, NULL};
static const MappingIterator iter_foldi_99 = { "foldi", 99, 99, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_231 = { "foldi", 231, 231, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_343, 1);
MAP_DECL(scope_342, 1);
MAP_DECL(scope_341, 1);
MAP_DECL(scope_340, 1);
MAP_DECL(scope_339, 1);
MAP_DECL(scope_338, 1);
MAP_DECL(scope_337, 1);
MAP_DECL(scope_336, 1);
MAP_DECL(scope_335, 1);
MAP_DECL(scope_334, 1);
MAP_DECL(scope_333, 1);
MAP_DECL(scope_332, 1);
MAP_DECL(scope_331, 1);
MAP_DECL(scope_330, 1);
MAP_DECL(scope_329, 1);
MAP_DECL(scope_328, 1);
MAP_DECL(scope_327, 1);
MAP_DECL(scope_326, 1);
MAP_DECL(scope_325, 1);
MAP_DECL(scope_324, 1);
MAP_DECL(scope_323, 1);
MAP_DECL(scope_322, 1);
MAP_DECL(scope_321, 1);
MAP_DECL(scope_320, 1);
MAP_DECL(scope_319, 1);
MAP_DECL(scope_318, 1);
MAP_DECL(scope_317, 1);
MAP_DECL(scope_316, 1);
MAP_DECL(scope_315, 1);
MAP_DECL(scope_314, 1);
MAP_DECL(scope_313, 1);
MAP_DECL(scope_312, 1);
MAP_DECL(scope_311, 1);
MAP_DECL(scope_310, 1);
MAP_DECL(scope_309, 1);
MAP_DECL(scope_308, 26);
MAP_DECL(scope_307, 1);
MAP_DECL(scope_306, 11);
MAP_DECL(scope_305, 1);
MAP_DECL(scope_304, 1);
MAP_DECL(scope_303, 3);
MAP_DECL(scope_302, 10);
MAP_DECL(scope_301, 1);
MAP_DECL(scope_300, 1);
MAP_DECL(scope_299, 1);
MAP_DECL(scope_298, 1);
MAP_DECL(scope_297, 3);
MAP_DECL(scope_296, 1);
MAP_DECL(scope_295, 12);
MAP_DECL(scope_294, 1);
MAP_DECL(scope_293, 1);
MAP_DECL(scope_292, 1);
MAP_DECL(scope_291, 1);
MAP_DECL(scope_290, 5);
MAP_DECL(scope_289, 1);
MAP_DECL(scope_288, 2);
MAP_DECL(scope_287, 1);
MAP_DECL(scope_286, 14);
MAP_DECL(scope_285, 1);
MAP_DECL(scope_284, 1);
MAP_DECL(scope_283, 1);
MAP_DECL(scope_282, 1);
MAP_DECL(scope_281, 7);
MAP_DECL(scope_280, 1);
MAP_DECL(scope_279, 10);
MAP_DECL(scope_278, 2);
MAP_DECL(scope_277, 23);
MAP_DECL(scope_276, 1);
MAP_DECL(scope_275, 1);
MAP_DECL(scope_274, 1);
MAP_DECL(scope_273, 4);
MAP_DECL(scope_272, 1);
MAP_DECL(scope_271, 6);
MAP_DECL(scope_270, 11);
MAP_DECL(scope_269, 4);
MAP_DECL(scope_268, 2);
MAP_DECL(scope_267, 15);
MAP_DECL(scope_266, 2);
MAP_DECL(scope_265, 1);
MAP_DECL(scope_264, 5);
MAP_DECL(scope_263, 1);
MAP_DECL(scope_262, 12);
MAP_DECL(scope_261, 7);
MAP_DECL(scope_260, 11);
MAP_DECL(scope_259, 7);
MAP_DECL(scope_258, 6);
MAP_DECL(scope_257, 15);
MAP_DECL(scope_252, 5);
MAP_DECL(scope_251, 10);
MAP_DECL(scope_250, 7);
MAP_DECL(scope_249, 10);
MAP_DECL(scope_248, 6);
MAP_DECL(scope_247, 10);
MAP_DECL(scope_246, 10);
MAP_DECL(scope_245, 10);
MAP_DECL(scope_244, 8);
MAP_DECL(scope_243, 6);
MAP_DECL(scope_242, 10);
MAP_DECL(scope_241, 8);
MAP_DECL(scope_240, 8);
MAP_DECL(scope_239, 8);
MAP_DECL(scope_238, 11);
MAP_DECL(scope_237, 28);
MAP_DECL(scope_236, 8);
MAP_DECL(scope_235, 6);
MAP_DECL(scope_234, 15);
MAP_DECL(scope_233, 10);
MAP_DECL(scope_232, 2);
MAP_DECL(scope_231, 2);
MAP_DECL(scope_230, 2);
MAP_DECL(scope_229, 2);
MAP_DECL(scope_228, 3);
MAP_DECL(scope_227, 3);
MAP_DECL(scope_226, 3);
MAP_DECL(scope_225, 6);
MAP_DECL(scope_224, 51);
MAP_DECL(scope_223, 2);
MAP_DECL(scope_222, 2);
MAP_DECL(scope_221, 2);
MAP_DECL(scope_220, 2);
MAP_DECL(scope_219, 3);
MAP_DECL(scope_218, 3);
MAP_DECL(scope_217, 3);
MAP_DECL(scope_216, 6);
MAP_DECL(scope_215, 17);
MAP_DECL(scope_214, 2);
MAP_DECL(scope_213, 2);
MAP_DECL(scope_212, 2);
MAP_DECL(scope_211, 2);
MAP_DECL(scope_210, 3);
MAP_DECL(scope_209, 3);
MAP_DECL(scope_208, 3);
MAP_DECL(scope_207, 6);
MAP_DECL(scope_206, 24);
MAP_DECL(scope_205, 2);
MAP_DECL(scope_204, 2);
MAP_DECL(scope_203, 2);
MAP_DECL(scope_202, 2);
MAP_DECL(scope_201, 3);
MAP_DECL(scope_200, 3);
MAP_DECL(scope_199, 3);
MAP_DECL(scope_198, 6);
MAP_DECL(scope_197, 36);
MAP_DECL(scope_196, 2);
MAP_DECL(scope_195, 2);
MAP_DECL(scope_194, 2);
MAP_DECL(scope_193, 2);
MAP_DECL(scope_192, 3);
MAP_DECL(scope_191, 3);
MAP_DECL(scope_190, 3);
MAP_DECL(scope_189, 6);
MAP_DECL(scope_188, 39);
MAP_DECL(scope_187, 2);
MAP_DECL(scope_186, 2);
MAP_DECL(scope_185, 2);
MAP_DECL(scope_184, 2);
MAP_DECL(scope_183, 3);
MAP_DECL(scope_182, 3);
MAP_DECL(scope_181, 3);
MAP_DECL(scope_180, 6);
MAP_DECL(scope_179, 50);
MAP_DECL(scope_178, 2);
MAP_DECL(scope_177, 2);
MAP_DECL(scope_176, 2);
MAP_DECL(scope_175, 2);
MAP_DECL(scope_174, 3);
MAP_DECL(scope_173, 3);
MAP_DECL(scope_172, 3);
MAP_DECL(scope_171, 6);
MAP_DECL(scope_170, 37);
MAP_DECL(scope_169, 26);
MAP_DECL(scope_168, 20);
MAP_DECL(scope_167, 2);
MAP_DECL(scope_166, 2);
MAP_DECL(scope_165, 2);
MAP_DECL(scope_164, 2);
MAP_DECL(scope_163, 3);
MAP_DECL(scope_162, 3);
MAP_DECL(scope_161, 3);
MAP_DECL(scope_160, 6);
MAP_DECL(scope_159, 35);
MAP_DECL(scope_158, 12);
MAP_DECL(scope_157, 26);
MAP_DECL(scope_156, 6);
MAP_DECL(scope_155, 6);
MAP_DECL(scope_154, 17);
MAP_DECL(scope_153, 17);
MAP_DECL(scope_152, 17);
MAP_DECL(scope_151, 17);
MAP_DECL(scope_150, 17);
MAP_DECL(scope_149, 17);
MAP_DECL(scope_148, 24);
MAP_DECL(scope_147, 17);
MAP_DECL(scope_146, 21);
MAP_DECL(scope_145, 16);
MAP_DECL(scope_144, 9);
MAP_DECL(scope_143, 9);
MAP_DECL(scope_142, 9);
MAP_DECL(scope_141, 9);
MAP_DECL(scope_140, 9);
MAP_DECL(scope_139, 9);
MAP_DECL(scope_138, 9);
MAP_DECL(scope_137, 9);
MAP_DECL(scope_136, 14);
MAP_DECL(scope_135, 16);
MAP_DECL(scope_134, 14);
MAP_DECL(scope_133, 4);
MAP_DECL(scope_132, 2);
MAP_DECL(scope_131, 18);
MAP_DECL(scope_130, 4);
MAP_DECL(scope_129, 18);
MAP_DECL(scope_128, 11);
MAP_DECL(scope_127, 11);
MAP_DECL(scope_126, 11);
MAP_DECL(scope_125, 11);
MAP_DECL(scope_124, 11);
MAP_DECL(scope_123, 11);
MAP_DECL(scope_122, 11);
MAP_DECL(scope_121, 11);
MAP_DECL(scope_120, 11);
MAP_DECL(scope_119, 11);
MAP_DECL(scope_118, 11);
MAP_DECL(scope_117, 11);
MAP_DECL(scope_116, 9);
MAP_DECL(scope_115, 6);
MAP_DECL(scope_114, 6);
MAP_DECL(scope_113, 6);
MAP_DECL(scope_112, 2);
MAP_DECL(scope_111, 2);
MAP_DECL(scope_110, 2);
MAP_DECL(scope_109, 2);
MAP_DECL(scope_108, 2);
MAP_DECL(scope_107, 3);
MAP_DECL(scope_106, 3);
MAP_DECL(scope_105, 3);
MAP_DECL(scope_104, 3);
MAP_DECL(scope_103, 6);
MAP_DECL(scope_102, 6);
MAP_DECL(scope_101, 2);
MAP_DECL(scope_100, 2);
MAP_DECL(scope_99, 2);
MAP_DECL(scope_98, 3);
MAP_DECL(scope_97, 3);
MAP_DECL(scope_96, 6);
MAP_DECL(scope_95, 9);
MAP_DECL(scope_94, 9);
MAP_DECL(scope_93, 9);
MAP_DECL(scope_92, 9);
MAP_DECL(scope_91, 9);
MAP_DECL(scope_90, 9);
MAP_DECL(scope_89, 9);
MAP_DECL(scope_88, 9);
MAP_DECL(scope_87, 9);
MAP_DECL(scope_86, 9);
MAP_DECL(scope_85, 9);
MAP_DECL(scope_84, 9);
MAP_DECL(scope_83, 6);
MAP_DECL(scope_82, 2);
MAP_DECL(scope_81, 2);
MAP_DECL(scope_80, 2);
MAP_DECL(scope_79, 2);
MAP_DECL(scope_78, 2);
MAP_DECL(scope_77, 3);
MAP_DECL(scope_76, 3);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 3);
MAP_DECL(scope_73, 6);
MAP_DECL(scope_72, 2);
MAP_DECL(scope_71, 2);
MAP_DECL(scope_70, 2);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 3);
MAP_DECL(scope_67, 3);
MAP_DECL(scope_66, 3);
MAP_DECL(scope_65, 6);
MAP_DECL(scope_64, 6);
MAP_DECL(scope_63, 6);
MAP_DECL(scope_62, 2);
MAP_DECL(scope_61, 2);
MAP_DECL(scope_60, 2);
MAP_DECL(scope_59, 2);
MAP_DECL(scope_58, 3);
MAP_DECL(scope_57, 3);
MAP_DECL(scope_56, 3);
MAP_DECL(scope_55, 6);
MAP_DECL(scope_54, 6);
MAP_DECL(scope_53, 6);
MAP_DECL(scope_52, 2);
MAP_DECL(scope_51, 2);
MAP_DECL(scope_50, 2);
MAP_DECL(scope_49, 3);
MAP_DECL(scope_48, 3);
MAP_DECL(scope_47, 6);
MAP_DECL(scope_46, 9);
MAP_DECL(scope_45, 20);
MAP_DECL(scope_44, 19);
MAP_DECL(scope_43, 21);
MAP_DECL(scope_42, 20);
MAP_DECL(scope_41, 2);
MAP_DECL(scope_40, 2);
MAP_DECL(scope_39, 2);
MAP_DECL(scope_38, 2);
MAP_DECL(scope_37, 3);
MAP_DECL(scope_36, 3);
MAP_DECL(scope_35, 3);
MAP_DECL(scope_34, 6);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 2);
MAP_DECL(scope_31, 2);
MAP_DECL(scope_30, 2);
MAP_DECL(scope_29, 3);
MAP_DECL(scope_28, 3);
MAP_DECL(scope_27, 3);
MAP_DECL(scope_26, 6);
MAP_DECL(scope_25, 29);
MAP_DECL(scope_24, 20);
MAP_DECL(scope_23, 20);
MAP_DECL(scope_22, 19);
MAP_DECL(scope_21, 21);
MAP_DECL(scope_20, 20);
MAP_DECL(scope_19, 6);
MAP_DECL(scope_18, 7);
MAP_DECL(scope_17, 6);
MAP_DECL(scope_16, 26);
MAP_DECL(scope_15, 44);
MAP_DECL(scope_14, 5);
MAP_DECL(scope_13, 5);
MAP_DECL(scope_12, 5);
MAP_DECL(scope_11, 5);
MAP_DECL(scope_10, 5);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_5, 3);
MAP_DECL(scope_4, 3);
MAP_DECL(scope_3, 7);
MAP_DECL(scope_2, 13);
MAP_DECL(scope_1, 16);
MAP_DECL(scope_0, 1);

/* array_int_21 */
static const MappingEntry scope_343_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_21, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_343 = {
  "array_int_21",
  scope_343_entries, 1,
};

/* array_int_14 */
static const MappingEntry scope_342_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_14, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_342 = {
  "array_int_14",
  scope_342_entries, 1,
};

/* array_int_149 */
static const MappingEntry scope_341_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_149, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_341 = {
  "array_int_149",
  scope_341_entries, 1,
};

/* array_int_20 */
static const MappingEntry scope_340_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_340 = {
  "array_int_20",
  scope_340_entries, 1,
};

/* array_int_351 */
static const MappingEntry scope_339_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_351, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_339 = {
  "array_int_351",
  scope_339_entries, 1,
};

/* array_int_4_32_128 */
static const MappingEntry scope_338_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(array_int_4_32), 0, &_Type_array_int_4_32_Utils, NULL, NULL, &scope_274, 1, 0}
};
static const MappingScope scope_338 = {
  "array_int_4_32_128",
  scope_338_entries, 1,
};

/* array_int_499 */
static const MappingEntry scope_337_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_499, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_337 = {
  "array_int_499",
  scope_337_entries, 1,
};

/* array_int_9 */
static const MappingEntry scope_336_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_9, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_336 = {
  "array_int_9",
  scope_336_entries, 1,
};

/* array_int_491 */
static const MappingEntry scope_335_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_491, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_335 = {
  "array_int_491",
  scope_335_entries, 1,
};

/* array__6514 */
static const MappingEntry scope_334_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__6381), 0, &_Type_struct__6381_Utils, NULL, NULL, &scope_303, 1, 0}
};
static const MappingScope scope_334 = {
  "array__6514",
  scope_334_entries, 1,
};

/* array_int_105 */
static const MappingEntry scope_333_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_105, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_333 = {
  "array_int_105",
  scope_333_entries, 1,
};

/* array_int_395 */
static const MappingEntry scope_332_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_395, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_332 = {
  "array_int_395",
  scope_332_entries, 1,
};

/* array_int_3_33_99 */
static const MappingEntry scope_331_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_298, 1, 0}
};
static const MappingScope scope_331 = {
  "array_int_3_33_99",
  scope_331_entries, 1,
};

/* array__6502 */
static const MappingEntry scope_330_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__6262), 0, &_Type_struct__6262_Utils, NULL, NULL, &scope_281, 1, 0}
};
static const MappingScope scope_330 = {
  "array__6502",
  scope_330_entries, 1,
};

/* array_int_236 */
static const MappingEntry scope_329_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_236, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_329 = {
  "array_int_236",
  scope_329_entries, 1,
};

/* array_int_264 */
static const MappingEntry scope_328_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_264, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_328 = {
  "array_int_264",
  scope_328_entries, 1,
};

/* array_int_7_33_231 */
static const MappingEntry scope_327_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_7_33), 0, &_Type_array_int_7_33_Utils, NULL, NULL, &scope_282, 1, 0}
};
static const MappingScope scope_327 = {
  "array_int_7_33_231",
  scope_327_entries, 1,
};

/* array_int_18 */
static const MappingEntry scope_326_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_18, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_326 = {
  "array_int_18",
  scope_326_entries, 1,
};

/* array_int_56 */
static const MappingEntry scope_325_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_56, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_325 = {
  "array_int_56",
  scope_325_entries, 1,
};

/* array_int_24 */
static const MappingEntry scope_324_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_324 = {
  "array_int_24",
  scope_324_entries, 1,
};

/* array_int_444 */
static const MappingEntry scope_323_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_444, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_323 = {
  "array_int_444",
  scope_323_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_322_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_322 = {
  "array_int_33",
  scope_322_entries, 1,
};

/* array_int_68 */
static const MappingEntry scope_321_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_68, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_321 = {
  "array_int_68",
  scope_321_entries, 1,
};

/* array_int_432 */
static const MappingEntry scope_320_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_432, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_320 = {
  "array_int_432",
  scope_320_entries, 1,
};

/* array_int_2_32_32 */
static const MappingEntry scope_319_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2_32), 0, &_Type_array_int_2_32_Utils, NULL, NULL, &scope_292, 1, 0}
};
static const MappingScope scope_319 = {
  "array_int_2_32_32",
  scope_319_entries, 1,
};

/* array__6466 */
static const MappingEntry scope_318_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__6312), 0, &_Type_struct__6312_Utils, NULL, NULL, &scope_290, 1, 0}
};
static const MappingScope scope_318 = {
  "array__6466",
  scope_318_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_317_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_317 = {
  "array_int_6",
  scope_317_entries, 1,
};

/* array_int_494 */
static const MappingEntry scope_316_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_494, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_316 = {
  "array_int_494",
  scope_316_entries, 1,
};

/* array__6457 */
static const MappingEntry scope_315_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__6350), 0, &_Type_struct__6350_Utils, NULL, NULL, &scope_297, 1, 0}
};
static const MappingScope scope_315 = {
  "array__6457",
  scope_315_entries, 1,
};

/* array_int_104 */
static const MappingEntry scope_314_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_104, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_314 = {
  "array_int_104",
  scope_314_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_313_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_313 = {
  "array_int_5",
  scope_313_entries, 1,
};

/* array_int_1 */
static const MappingEntry scope_312_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_312 = {
  "array_int_1",
  scope_312_entries, 1,
};

/* array_int_396 */
static const MappingEntry scope_311_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_396, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_311 = {
  "array_int_396",
  scope_311_entries, 1,
};

/* array_int_3_33_231 */
static const MappingEntry scope_310_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_298, 1, 0}
};
static const MappingScope scope_310 = {
  "array_int_3_33_231",
  scope_310_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_309_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 0}
};
static const MappingScope scope_309 = {
  "array_int_500_500",
  scope_309_entries, 1,
};

/* struct__6410 */
static const MappingEntry scope_308_entries[26] = {
  /* 0 */ { MAP_FIELD, ".D_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__6410, D_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 1 */ { MAP_FIELD, ".D_NVPOTRP", NULL, sizeof(kcg_int), offsetof(struct__6410, D_NVPOTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 2 */ { MAP_FIELD, ".D_NVROLL", NULL, sizeof(kcg_int), offsetof(struct__6410, D_NVROLL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".D_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__6410, D_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_FIELD, ".D_VALIDNV", NULL, sizeof(kcg_int), offsetof(struct__6410, D_VALIDNV), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6410, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".M_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__6410, M_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 7 */ { MAP_FIELD, ".M_NVDERUN", NULL, sizeof(kcg_int), offsetof(struct__6410, M_NVDERUN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 8 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6410, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__6410, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__6410, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_NVDRIVER_ADHES", NULL, sizeof(kcg_int), offsetof(struct__6410, Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 12 */ { MAP_FIELD, ".Q_NVEMRRLS", NULL, sizeof(kcg_int), offsetof(struct__6410, Q_NVEMRRLS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_FIELD, ".Q_NVSRBKTRG", NULL, sizeof(kcg_int), offsetof(struct__6410, Q_NVSRBKTRG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__6410, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array_int_32), offsetof(struct__6410, SECTIONS), &_Type_array_int_32_Utils, NULL, NULL, &scope_307, 1, 7},
  /* 16 */ { MAP_FIELD, ".T_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__6410, T_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_FIELD, ".T_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__6410, T_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_FIELD, ".V_NVALLOWOVTRP", NULL, sizeof(kcg_int), offsetof(struct__6410, V_NVALLOWOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_FIELD, ".V_NVONSIGHT", NULL, sizeof(kcg_int), offsetof(struct__6410, V_NVONSIGHT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_FIELD, ".V_NVREL", NULL, sizeof(kcg_int), offsetof(struct__6410, V_NVREL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 21 */ { MAP_FIELD, ".V_NVSHUNT", NULL, sizeof(kcg_int), offsetof(struct__6410, V_NVSHUNT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 22 */ { MAP_FIELD, ".V_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__6410, V_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".V_NVSUPOVTRP", NULL, sizeof(kcg_int), offsetof(struct__6410, V_NVSUPOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_FIELD, ".V_NVUNFIT", NULL, sizeof(kcg_int), offsetof(struct__6410, V_NVUNFIT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 25 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6410, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_308 = {
  "struct__6410",
  scope_308_entries, 26,
};

/* array_int_32 */
static const MappingEntry scope_307_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_307 = {
  "array_int_32",
  scope_307_entries, 1,
};

/* struct__6393 */
static const MappingEntry scope_306_entries[11] = {
  /* 0 */ { MAP_FIELD, ".D_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__6393, D_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(struct__6393, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6393, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__6393, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__6393, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6393, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__6393, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__6393, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__6393, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__6390), offsetof(struct__6393, SECTIONS), &_Type_array__6390_Utils, NULL, NULL, &scope_305, 1, 10},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6393, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_306 = {
  "struct__6393",
  scope_306_entries, 11,
};

/* array__6390 */
static const MappingEntry scope_305_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__6381), 0, &_Type_struct__6381_Utils, NULL, NULL, &scope_303, 1, 0}
};
static const MappingScope scope_305 = {
  "array__6390",
  scope_305_entries, 1,
};

/* array__6387 */
static const MappingEntry scope_304_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__6381), 0, &_Type_struct__6381_Utils, NULL, NULL, &scope_303, 1, 0}
};
static const MappingScope scope_304 = {
  "array__6387",
  scope_304_entries, 1,
};

/* struct__6381 */
static const MappingEntry scope_303_entries[3] = {
  /* 0 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(struct__6381, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__6381, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__6381, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_303 = {
  "struct__6381",
  scope_303_entries, 3,
};

/* struct__6368 */
static const MappingEntry scope_302_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__6368, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__6368, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6368, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6368, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__6368, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__6368, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__6368, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__6368, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__6365), offsetof(struct__6368, SECTIONS), &_Type_array__6365_Utils, NULL, NULL, &scope_301, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6368, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_302 = {
  "struct__6368",
  scope_302_entries, 10,
};

/* array__6365 */
static const MappingEntry scope_301_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__6350), 0, &_Type_struct__6350_Utils, NULL, NULL, &scope_297, 1, 0}
};
static const MappingScope scope_301 = {
  "array__6365",
  scope_301_entries, 1,
};

/* array__6362 */
static const MappingEntry scope_300_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__6350), 0, &_Type_struct__6350_Utils, NULL, NULL, &scope_297, 1, 0}
};
static const MappingScope scope_300 = {
  "array__6362",
  scope_300_entries, 1,
};

/* array_int_99 */
static const MappingEntry scope_299_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_299 = {
  "array_int_99",
  scope_299_entries, 1,
};

/* array_int_3_33 */
static const MappingEntry scope_298_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_3), 0, &_Type_array_int_3_Utils, NULL, NULL, &scope_296, 1, 0}
};
static const MappingScope scope_298 = {
  "array_int_3_33",
  scope_298_entries, 1,
};

/* struct__6350 */
static const MappingEntry scope_297_entries[3] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__6350, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__6350, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__6350, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_297 = {
  "struct__6350",
  scope_297_entries, 3,
};

/* array_int_3 */
static const MappingEntry scope_296_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_296 = {
  "array_int_3",
  scope_296_entries, 1,
};

/* struct__6332 */
static const MappingEntry scope_295_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__6332, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6332, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6332, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(struct__6332, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(struct__6332, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__6332, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__6332, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__6332, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(array__6329), offsetof(struct__6332, SECTIONS_SSP), &_Type_array__6329_Utils, NULL, NULL, &scope_294, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__6309), offsetof(struct__6332, SECTIONS_q_diff), &_Type_array__6309_Utils, NULL, NULL, &scope_289, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__6332, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6332, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_295 = {
  "struct__6332",
  scope_295_entries, 12,
};

/* array__6329 */
static const MappingEntry scope_294_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__6312), 0, &_Type_struct__6312_Utils, NULL, NULL, &scope_290, 1, 0}
};
static const MappingScope scope_294 = {
  "array__6329",
  scope_294_entries, 1,
};

/* array__6326 */
static const MappingEntry scope_293_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__6312), 0, &_Type_struct__6312_Utils, NULL, NULL, &scope_290, 1, 0}
};
static const MappingScope scope_293 = {
  "array__6326",
  scope_293_entries, 1,
};

/* array_int_2_32 */
static const MappingEntry scope_292_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2), 0, &_Type_array_int_2_Utils, NULL, NULL, &scope_291, 1, 0}
};
static const MappingScope scope_292 = {
  "array_int_2_32",
  scope_292_entries, 1,
};

/* array_int_2 */
static const MappingEntry scope_291_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_291 = {
  "array_int_2",
  scope_291_entries, 1,
};

/* struct__6312 */
static const MappingEntry scope_290_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__6312, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__6312, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__6312, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__6309), offsetof(struct__6312, SECTIONS_q_diff), &_Type_array__6309_Utils, NULL, NULL, &scope_289, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__6312, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_290 = {
  "struct__6312",
  scope_290_entries, 5,
};

/* array__6309 */
static const MappingEntry scope_289_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__6304), 0, &_Type_struct__6304_Utils, NULL, NULL, &scope_288, 1, 0}
};
static const MappingScope scope_289 = {
  "array__6309",
  scope_289_entries, 1,
};

/* struct__6304 */
static const MappingEntry scope_288_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(struct__6304, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(struct__6304, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_288 = {
  "struct__6304",
  scope_288_entries, 2,
};

/* array_int_64 */
static const MappingEntry scope_287_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_287 = {
  "array_int_64",
  scope_287_entries, 1,
};

/* struct__6284 */
static const MappingEntry scope_286_entries[14] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__6284, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6284, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__6284, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__6284, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6284, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__6284, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__6284, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__6284, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__6284, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__6284, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__6284, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__6284, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__6281), offsetof(struct__6284, SECTIONS), &_Type_array__6281_Utils, NULL, NULL, &scope_285, 1, 13},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6284, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_286 = {
  "struct__6284",
  scope_286_entries, 14,
};

/* array__6281 */
static const MappingEntry scope_285_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__6262), 0, &_Type_struct__6262_Utils, NULL, NULL, &scope_281, 1, 0}
};
static const MappingScope scope_285 = {
  "array__6281",
  scope_285_entries, 1,
};

/* array__6278 */
static const MappingEntry scope_284_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__6262), 0, &_Type_struct__6262_Utils, NULL, NULL, &scope_281, 1, 0}
};
static const MappingScope scope_284 = {
  "array__6278",
  scope_284_entries, 1,
};

/* array_int_231 */
static const MappingEntry scope_283_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_283 = {
  "array_int_231",
  scope_283_entries, 1,
};

/* array_int_7_33 */
static const MappingEntry scope_282_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_7), 0, &_Type_array_int_7_Utils, NULL, NULL, &scope_280, 1, 0}
};
static const MappingScope scope_282 = {
  "array_int_7_33",
  scope_282_entries, 1,
};

/* struct__6262 */
static const MappingEntry scope_281_entries[7] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__6262, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__6262, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__6262, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__6262, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__6262, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__6262, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__6262, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_281 = {
  "struct__6262",
  scope_281_entries, 7,
};

/* array_int_7 */
static const MappingEntry scope_280_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_280 = {
  "array_int_7",
  scope_280_entries, 1,
};

/* struct__6246 */
static const MappingEntry scope_279_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_TSR", NULL, sizeof(kcg_int), offsetof(struct__6246, D_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6246, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".L_TSR", NULL, sizeof(kcg_int), offsetof(struct__6246, L_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6246, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".NID_TSR", NULL, sizeof(kcg_int), offsetof(struct__6246, NID_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__6246, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__6246, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__6246, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".V_TSR", NULL, sizeof(kcg_int), offsetof(struct__6246, V_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6246, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_279 = {
  "struct__6246",
  scope_279_entries, 10,
};

/* struct__6241 */
static const MappingEntry scope_278_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6241, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6241, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_278 = {
  "struct__6241",
  scope_278_entries, 2,
};

/* struct__6215 */
static const MappingEntry scope_277_entries[23] = {
  /* 0 */ { MAP_FIELD, ".D_DP", NULL, sizeof(kcg_int), offsetof(struct__6215, D_DP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 1 */ { MAP_FIELD, ".D_ENDTIMERSTARTLOC", NULL, sizeof(kcg_int), offsetof(struct__6215, D_ENDTIMERSTARTLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_FIELD, ".D_OL", NULL, sizeof(kcg_int), offsetof(struct__6215, D_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 3 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(struct__6215, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_FIELD, ".D_STARTOL", NULL, sizeof(kcg_int), offsetof(struct__6215, D_STARTOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 5 */ { MAP_FIELD, ".L_ENDSECTION", NULL, sizeof(kcg_int), offsetof(struct__6215, L_ENDSECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6215, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__6215, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__6215, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".Q_DANGERPOINT", NULL, sizeof(kcg_int), offsetof(struct__6215, Q_DANGERPOINT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__6215, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_ENDTIMER", NULL, sizeof(kcg_int), offsetof(struct__6215, Q_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_FIELD, ".Q_OVERLAP", NULL, sizeof(kcg_int), offsetof(struct__6215, Q_OVERLAP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 13 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__6215, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__6215, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__6212), offsetof(struct__6215, SECTIONS), &_Type_array__6212_Utils, NULL, NULL, &scope_276, 1, 8},
  /* 16 */ { MAP_FIELD, ".T_ENDTIMER", NULL, sizeof(kcg_int), offsetof(struct__6215, T_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_FIELD, ".T_LOA", NULL, sizeof(kcg_int), offsetof(struct__6215, T_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_FIELD, ".T_OL", NULL, sizeof(kcg_int), offsetof(struct__6215, T_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 19 */ { MAP_FIELD, ".V_LOA", NULL, sizeof(kcg_int), offsetof(struct__6215, V_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 20 */ { MAP_FIELD, ".V_RELEASEDP", NULL, sizeof(kcg_int), offsetof(struct__6215, V_RELEASEDP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 21 */ { MAP_FIELD, ".V_RELEASEOL", NULL, sizeof(kcg_int), offsetof(struct__6215, V_RELEASEOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6215, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_277 = {
  "struct__6215",
  scope_277_entries, 23,
};

/* array__6212 */
static const MappingEntry scope_276_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__6199), 0, &_Type_struct__6199_Utils, NULL, NULL, &scope_273, 1, 0}
};
static const MappingScope scope_276 = {
  "array__6212",
  scope_276_entries, 1,
};

/* array_int_128 */
static const MappingEntry scope_275_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_275 = {
  "array_int_128",
  scope_275_entries, 1,
};

/* array_int_4_32 */
static const MappingEntry scope_274_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_4), 0, &_Type_array_int_4_Utils, NULL, NULL, &scope_272, 1, 0}
};
static const MappingScope scope_274 = {
  "array_int_4_32",
  scope_274_entries, 1,
};

/* struct__6199 */
static const MappingEntry scope_273_entries[4] = {
  /* 0 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(struct__6199, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_SECTION", NULL, sizeof(kcg_int), offsetof(struct__6199, L_SECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__6199, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".T_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__6199, T_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_273 = {
  "struct__6199",
  scope_273_entries, 4,
};

/* array_int_4 */
static const MappingEntry scope_272_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_272 = {
  "array_int_4",
  scope_272_entries, 1,
};

/* struct__6187 */
static const MappingEntry scope_271_entries[6] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__6187, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__6187, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6187, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6187, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__6187, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6187, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_271 = {
  "struct__6187",
  scope_271_entries, 6,
};

/* struct__6173 */
static const MappingEntry scope_270_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__6173, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__6173, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__6173, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__6173, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__6173, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6173, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6173, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int), offsetof(struct__6173, q_dir), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int), offsetof(struct__6173, q_scale), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__6173, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6173, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_270 = {
  "struct__6173",
  scope_270_entries, 11,
};

/* struct__6166 */
static const MappingEntry scope_269_entries[4] = {
  /* 0 */ { MAP_FIELD, ".message", NULL, sizeof(struct__6109), offsetof(struct__6166, message), &_Type_struct__6109_Utils, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_FIELD, ".message_sent", NULL, sizeof(kcg_bool), offsetof(struct__6166, message_sent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__6138), offsetof(struct__6166, packets), &_Type_struct__6138_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 3 */ { MAP_FIELD, ".trigger", NULL, sizeof(kcg_int), offsetof(struct__6166, trigger), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_269 = {
  "struct__6166",
  scope_269_entries, 4,
};

/* struct__6161 */
static const MappingEntry scope_268_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__6143), offsetof(struct__6161, Header), &_Type_struct__6143_Utils, NULL, NULL, &scope_267, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__6138), offsetof(struct__6161, Messages), &_Type_struct__6138_Utils, NULL, NULL, &scope_266, 1, 1}
};
static const MappingScope scope_268 = {
  "struct__6161",
  scope_268_entries, 2,
};

/* struct__6143 */
static const MappingEntry scope_267_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__6143, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__6143, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__6143, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__6143, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__6143, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__6143, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6143, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6143, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int), offsetof(struct__6143, q_dir), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int), offsetof(struct__6143, q_scale), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__6143, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__6143, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_int), offsetof(struct__6143, t_sh_rqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__6143, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_int), offsetof(struct__6143, t_train_reference), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_267 = {
  "struct__6143",
  scope_267_entries, 15,
};

/* struct__6138 */
static const MappingEntry scope_266_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__6138, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__6135), offsetof(struct__6138, PacketHeaders), &_Type_array__6135_Utils, NULL, NULL, &scope_265, 1, 0}
};
static const MappingScope scope_266 = {
  "struct__6138",
  scope_266_entries, 2,
};

/* array__6135 */
static const MappingEntry scope_265_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__6127), 0, &_Type_struct__6127_Utils, NULL, NULL, &scope_264, 1, 0}
};
static const MappingScope scope_265 = {
  "array__6135",
  scope_265_entries, 1,
};

/* struct__6127 */
static const MappingEntry scope_264_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__6127, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__6127, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__6127, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__6127, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6127, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_264 = {
  "struct__6127",
  scope_264_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_263_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_263 = {
  "array_int_500",
  scope_263_entries, 1,
};

/* struct__6109 */
static const MappingEntry scope_262_entries[12] = {
  /* 0 */ { MAP_FIELD, ".field1", NULL, sizeof(kcg_int), offsetof(struct__6109, field1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".field2", NULL, sizeof(kcg_int), offsetof(struct__6109, field2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".field3", NULL, sizeof(kcg_int), offsetof(struct__6109, field3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".field4", NULL, sizeof(kcg_int), offsetof(struct__6109, field4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".field5", NULL, sizeof(kcg_int), offsetof(struct__6109, field5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".field6", NULL, sizeof(kcg_int), offsetof(struct__6109, field6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".field7", NULL, sizeof(kcg_int), offsetof(struct__6109, field7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".field8", NULL, sizeof(kcg_int), offsetof(struct__6109, field8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__6109, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6109, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__6109, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6109, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_262 = {
  "struct__6109",
  scope_262_entries, 12,
};

/* struct__6099 */
static const MappingEntry scope_261_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__6099, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__6099, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__6099, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6099, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6099, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__6099, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6099, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_261 = {
  "struct__6099",
  scope_261_entries, 7,
};

/* struct__6085 */
static const MappingEntry scope_260_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__6085, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__6085, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__6085, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__6085, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__6085, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6085, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6085, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__6085, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__6085, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__6085, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6085, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_260 = {
  "struct__6085",
  scope_260_entries, 11,
};

/* struct__6075 */
static const MappingEntry scope_259_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__6075, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__6075, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6075, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6075, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__6075, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".t_train_received", NULL, sizeof(kcg_real), offsetof(struct__6075, t_train_received), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6075, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_259 = {
  "struct__6075",
  scope_259_entries, 7,
};

/* struct__6066 */
static const MappingEntry scope_258_entries[6] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__6066, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__6066, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6066, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6066, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__6066, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__6066, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_258 = {
  "struct__6066",
  scope_258_entries, 6,
};

/* struct__6048 */
static const MappingEntry scope_257_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__6048, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__6048, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__6048, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__6048, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__6048, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__6048, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__6048, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__6048, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__6048, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__6048, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__6048, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__6048, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_real), offsetof(struct__6048, t_sh_rqst), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__6048, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_real), offsetof(struct__6048, t_train_reference), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_257 = {
  "struct__6048",
  scope_257_entries, 15,
};

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal */
static const MappingEntry scope_252_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L1), &_Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_288, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L2), &_Type_array_int_2_Utils, NULL, NULL, &scope_291, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, section_arrays), &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_291, 1, 4}
};
static const MappingScope scope_252 = {
  "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal",
  scope_252_entries, 5,
};

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_251_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_287, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L2), &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_292, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L7), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_287, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, flat), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_287, 1, 9}
};
static const MappingScope scope_251 = {
  "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal",
  scope_251_entries, 10,
};

/* TM_lib_internal::C_P015_fs_struct_to_array/ C_P015_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_250_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_section_int_T_TM), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P015_section_int_T_TM_Utils, NULL, NULL, &scope_273, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_4), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_4_Utils, NULL, NULL, &scope_272, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P015_section_array_T_TM), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P015_section_array_T_TM_Utils, NULL, NULL, &scope_272, 1, 6}
};
static const MappingScope scope_250 = {
  "TM_lib_internal::C_P015_fs_struct_to_array/ C_P015_fs_struct_to_array_TM_lib_internal",
  scope_250_entries, 7,
};

/* TM_lib_internal::C_P015_fs_flatten_array/ C_P015_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_249_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L1), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_275, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P015_OBU_sectionlist_array_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L2), &_Type_P015_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_274, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L7), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_275, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, flat), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_275, 1, 9}
};
static const MappingScope scope_249 = {
  "TM_lib_internal::C_P015_fs_flatten_array/ C_P015_fs_flatten_array_TM_lib_internal",
  scope_249_entries, 10,
};

/* TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_248_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_303, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_3), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L10), &_Type_array_int_3_Utils, NULL, NULL, &scope_296, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P041_section_array_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P041_section_array_T_TM_Utils, NULL, NULL, &scope_296, 1, 5}
};
static const MappingScope scope_248 = {
  "TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal",
  scope_248_entries, 6,
};

/* TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_247_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L1), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P041_OBU_sectionlist_array_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L2), &_Type_P041_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_298, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L7), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, flat), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 9}
};
static const MappingScope scope_247 = {
  "TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal",
  scope_247_entries, 10,
};

/* TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_246_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_281, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_7), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_7_Utils, NULL, NULL, &scope_280, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P005_section_array_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P005_section_array_T_TM_Utils, NULL, NULL, &scope_280, 1, 9}
};
static const MappingScope scope_246 = {
  "TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal",
  scope_246_entries, 10,
};

/* TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_245_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_283, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_OBU_sectionlist_array_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L2), &_Type_P005_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_282, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L7), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_283, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, flat), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_283, 1, 9}
};
static const MappingScope scope_245 = {
  "TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal",
  scope_245_entries, 10,
};

/* TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal */
static const MappingEntry scope_244_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Flattened), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_287, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff 1", &iter_foldi_32, sizeof(outC_C_P027V1_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff 1", &iter_map_32, sizeof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_252, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_2_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L74), &_Type_array_int_2_32_Utils, NULL, NULL, &scope_292, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L75), &_Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_289, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L76), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_287, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L83", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L83), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_287, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L84", NULL, sizeof(array_int_2_32_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L84), &_Type_array_int_2_32_32_Utils, NULL, NULL, &scope_319, 1, 6}
};
static const MappingScope scope_244 = {
  "TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal",
  scope_244_entries, 8,
};

/* TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_243_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_297, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_3), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_3_Utils, NULL, NULL, &scope_296, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P021_section_array_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P021_section_array_T_TM_Utils, NULL, NULL, &scope_296, 1, 5}
};
static const MappingScope scope_243 = {
  "TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal",
  scope_243_entries, 6,
};

/* TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_242_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_sectionlist_array_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L2), &_Type_P021_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_298, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L7), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, flat), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 9}
};
static const MappingScope scope_242 = {
  "TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal",
  scope_242_entries, 10,
};

/* TM_lib_internal::C_P015_flatten_sections/ C_P015_flatten_sections_TM_lib_internal */
static const MappingEntry scope_241_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Flattened), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_275, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_fs_flatten_array 1", &iter_foldi_128, sizeof(outC_C_P015_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_249, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_fs_struct_to_array 2", &iter_map_32, sizeof(outC_C_P015_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_250, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_4_32), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_4_32_Utils, NULL, NULL, &scope_274, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P015_OBU_sectionlist_int_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L75), &_Type_P015_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_276, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L76), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_275, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L78), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_275, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_4_32_128), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_4_32_128_Utils, NULL, NULL, &scope_338, 1, 6}
};
static const MappingScope scope_241 = {
  "TM_lib_internal::C_P015_flatten_sections/ C_P015_flatten_sections_TM_lib_internal",
  scope_241_entries, 8,
};

/* TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal */
static const MappingEntry scope_240_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Flattened), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_flatten_array 1", &iter_foldi_99, sizeof(outC_C_P041_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P041_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_248, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_298, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P041_OBU_sectionlist_int_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L75), &_Type_P041_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_304, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L76), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L78), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_99), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_99_Utils, NULL, NULL, &scope_331, 1, 6}
};
static const MappingScope scope_240 = {
  "TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal",
  scope_240_entries, 8,
};

/* TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal */
static const MappingEntry scope_239_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Flattened), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_283, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_flatten_array 2", &iter_foldi_231, sizeof(outC_C_P005_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_245, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_struct_to_array 2", &iter_map_33, sizeof(outC_C_P005_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_246, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_7_33), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_7_33_Utils, NULL, NULL, &scope_282, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P005_OBU_sectionlist_int_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L75), &_Type_P005_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_284, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L76), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_283, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L78), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_283, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_7_33_231), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_7_33_231_Utils, NULL, NULL, &scope_327, 1, 6}
};
static const MappingScope scope_239 = {
  "TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal",
  scope_239_entries, 8,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_238_entries[11] = {
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
static const MappingScope scope_238 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_238_entries, 11,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2 */
static const MappingEntry scope_237_entries[28] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 26},
  /* 1 */ { MAP_OUTPUT, "P027V1_sections_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, P027V1_sections_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 27},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027_flatten_sections_qdiff 1", NULL, sizeof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_244, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_235, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L1), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_290, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_432), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L209), &_Type_array_int_432_Utils, NULL, NULL, &scope_320, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L217", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L217), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_289, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_272, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L385", NULL, sizeof(array_int_68), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L385), &_Type_array_int_68_Utils, NULL, NULL, &scope_321, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L422", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L422), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L423", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L423), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L424", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L424), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L425", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L425), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_287, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L426), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L427", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L427), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L429", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L429), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L430", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L430), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_237 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2",
  scope_237_entries, 28,
};

/* TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal */
static const MappingEntry scope_236_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Flattened), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_flatten_array 1", &iter_foldi_231, sizeof(outC_C_P021_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_242, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P021_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_243, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_298, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P021_OBU_sectionlist_int_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L75), &_Type_P021_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_300, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L76), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L78), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_231), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_231_Utils, NULL, NULL, &scope_310, 1, 6}
};
static const MappingScope scope_236 = {
  "TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal",
  scope_236_entries, 8,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_235_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_235 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_235_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_234_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_234 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_234_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_233_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 2}
};
static const MappingScope scope_233 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_233_entries, 10,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_232_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_226_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_226_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_232 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_232_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_231_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_227_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_227_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_231 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_231_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_230_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_228_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_228_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_230 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_230_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_229_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_228_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_228_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_229 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_229_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_228_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_228_entries[0], isActive_kcg_bool_kcg_false, &scope_229, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_228_entries[0], isActive_kcg_bool_kcg_true, &scope_230, 1, 2}
};
static const MappingScope scope_228 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_228_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_227_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_227_entries[0], isActive_kcg_bool_kcg_false, &scope_228, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_227_entries[0], isActive_kcg_bool_kcg_true, &scope_231, 1, 2}
};
static const MappingScope scope_227 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_227_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_226_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_226_entries[0], isActive_kcg_bool_kcg_false, &scope_227, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_226_entries[0], isActive_kcg_bool_kcg_true, &scope_232, 1, 2}
};
static const MappingScope scope_226 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_226_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_225_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_226, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_225 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_225_entries, 6,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversions */
static const MappingEntry scope_224_entries[51] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 49},
  /* 1 */ { MAP_OUTPUT, "P015_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, P015_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 50},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_225, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_flatten_sections 1", NULL, sizeof(outC_C_P015_flatten_sections_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_241, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_235, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L1), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_277, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_351), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L209), &_Type_array_int_351_Utils, NULL, NULL, &scope_339, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L365", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L365), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 20 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 22 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 25 */ { MAP_LOCAL, "_L371", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L371), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_276, 1, 20},
  /* 26 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_317, 1, 27},
  /* 27 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L380", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L380), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_275, 1, 30},
  /* 30 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_20), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L381), &_Type_array_int_20_Utils, NULL, NULL, &scope_340, 1, 31},
  /* 31 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 32},
  /* 32 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_149), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L384), &_Type_array_int_149_Utils, NULL, NULL, &scope_341, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 35 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 36 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L390), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 37 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 38 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L392), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 39 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 40 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 41 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 42 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 43 */ { MAP_LOCAL, "_L398", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L398), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_276, 1, 44},
  /* 44 */ { MAP_LOCAL, "_L399", NULL, sizeof(array_int_14), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L399), &_Type_array_int_14_Utils, NULL, NULL, &scope_342, 1, 45},
  /* 45 */ { MAP_LOCAL, "_L400", NULL, sizeof(array_int_21), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L400), &_Type_array_int_21_Utils, NULL, NULL, &scope_343, 1, 46},
  /* 46 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 47},
  /* 47 */ { MAP_LOCAL, "_L403", NULL, sizeof(array_int_1), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L403), &_Type_array_int_1_Utils, NULL, NULL, &scope_312, 1, 48},
  /* 48 */ { MAP_LOCAL, "n_iter", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 49 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 50 */ { MAP_LOCAL, "sections", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, sections), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_276, 1, 4}
};
static const MappingScope scope_224 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversions",
  scope_224_entries, 51,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_223_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_223 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_223_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_222_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_222 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_222_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_221_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_219_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_219_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_221 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_221_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_220_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_219_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_219_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_220 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_220_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_219_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_219_entries[0], isActive_kcg_bool_kcg_false, &scope_220, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_219_entries[0], isActive_kcg_bool_kcg_true, &scope_221, 1, 2}
};
static const MappingScope scope_219 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_219_entries, 3,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_218_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_218_entries[0], isActive_kcg_bool_kcg_false, &scope_219, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_218_entries[0], isActive_kcg_bool_kcg_true, &scope_222, 1, 2}
};
static const MappingScope scope_218 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_218_entries, 3,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_217_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_false, &scope_218, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_true, &scope_223, 1, 2}
};
static const MappingScope scope_217 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_217_entries, 3,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_216_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_217, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_216 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_216_entries, 6,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversions */
static const MappingEntry scope_215_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P255_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 15},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P255_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 16},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_216, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(P255_trackside_int_T_TM), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L1), &_Type_P255_trackside_int_T_TM_Utils, NULL, NULL, &scope_278, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_499), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L209), &_Type_array_int_499_Utils, NULL, NULL, &scope_337, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_1), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L373), &_Type_array_int_1_Utils, NULL, NULL, &scope_312, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14}
};
static const MappingScope scope_215 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversions",
  scope_215_entries, 17,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_214_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_208_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_208_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_214 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_214_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_213_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_213 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_213_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_212_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_212 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_212_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_211_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_211 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_211_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_210_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_210_entries[0], isActive_kcg_bool_kcg_false, &scope_211, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_210_entries[0], isActive_kcg_bool_kcg_true, &scope_212, 1, 2}
};
static const MappingScope scope_210 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_210_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_209_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_false, &scope_210, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_true, &scope_213, 1, 2}
};
static const MappingScope scope_209 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_209_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_208_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_208_entries[0], isActive_kcg_bool_kcg_false, &scope_209, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_208_entries[0], isActive_kcg_bool_kcg_true, &scope_214, 1, 2}
};
static const MappingScope scope_208 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_208_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_207_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_208, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_207 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_207_entries, 6,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversions */
static const MappingEntry scope_206_entries[24] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 22},
  /* 1 */ { MAP_OUTPUT, "P065_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, P065_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 23},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_207, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L1), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_279, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_491), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L209), &_Type_array_int_491_Utils, NULL, NULL, &scope_335, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_9), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L373), &_Type_array_int_9_Utils, NULL, NULL, &scope_336, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 19 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L397", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L397), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L398", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L398), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 22 */ { MAP_LOCAL, "_L399", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L399), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21}
};
static const MappingScope scope_206 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversions",
  scope_206_entries, 24,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_205_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_205 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_205_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_204_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_200_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_200_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_204 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_204_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_203_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_201_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_201_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_203 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_203_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_202_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_201_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_201_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_202 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_202_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_201_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_201_entries[0], isActive_kcg_bool_kcg_false, &scope_202, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_201_entries[0], isActive_kcg_bool_kcg_true, &scope_203, 1, 2}
};
static const MappingScope scope_201 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_201_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_200_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_200_entries[0], isActive_kcg_bool_kcg_false, &scope_201, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_200_entries[0], isActive_kcg_bool_kcg_true, &scope_204, 1, 2}
};
static const MappingScope scope_200 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_200_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_199_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_false, &scope_200, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_true, &scope_205, 1, 2}
};
static const MappingScope scope_199 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_199_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_198_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_199, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_198 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_198_entries, 6,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions */
static const MappingEntry scope_197_entries[36] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 34},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 35},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_198, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_flatten_sections 1", NULL, sizeof(outC_C_P041_flatten_sections_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_240, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_235, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_306, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_395), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L209), &_Type_array_int_395_Utils, NULL, NULL, &scope_332, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L368", NULL, sizeof(P041_trackide_sectionlist_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L368), &_Type_P041_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_305, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_5), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L373), &_Type_array_int_5_Utils, NULL, NULL, &scope_313, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L375", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L375), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_303, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_312, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L380", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L380), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_6), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L381), &_Type_array_int_6_Utils, NULL, NULL, &scope_317, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_105), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L384), &_Type_array_int_105_Utils, NULL, NULL, &scope_333, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__6387), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L385), &_Type_array__6387_Utils, NULL, NULL, &scope_304, 1, 32},
  /* 33 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__6514), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L386), &_Type_array__6514_Utils, NULL, NULL, &scope_334, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 35 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_197 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions",
  scope_197_entries, 36,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_196_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_190_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_190_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_196 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_196_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_195_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_191_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_191_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_195 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_195_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_194_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_192_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_192_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_194 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_194_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_193_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_192_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_192_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_193 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_193_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_192_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_192_entries[0], isActive_kcg_bool_kcg_false, &scope_193, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_192_entries[0], isActive_kcg_bool_kcg_true, &scope_194, 1, 2}
};
static const MappingScope scope_192 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_192_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_191_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_191_entries[0], isActive_kcg_bool_kcg_false, &scope_192, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_191_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 2}
};
static const MappingScope scope_191 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_191_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_190_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_190_entries[0], isActive_kcg_bool_kcg_false, &scope_191, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_190_entries[0], isActive_kcg_bool_kcg_true, &scope_196, 1, 2}
};
static const MappingScope scope_190 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_190_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_189_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_190, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_189 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_189_entries, 6,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions */
static const MappingEntry scope_188_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 37},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 38},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_189, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_flatten_sections 1", NULL, sizeof(outC_C_P005_flatten_sections_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_239, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_235, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_286, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_264), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L209), &_Type_array_int_264_Utils, NULL, NULL, &scope_328, 1, 7},
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
  /* 19 */ { MAP_LOCAL, "_L365", NULL, sizeof(P005_trackide_sectionlist_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L365), &_Type_P005_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_285, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 21 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 24 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 25 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 26 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_272, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L375", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L375), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_281, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_312, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L380", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L380), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_283, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_313, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_236), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L384), &_Type_array_int_236_Utils, NULL, NULL, &scope_329, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__6278), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L385), &_Type_array__6278_Utils, NULL, NULL, &scope_284, 1, 35},
  /* 36 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__6502), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L386), &_Type_array__6502_Utils, NULL, NULL, &scope_330, 1, 34},
  /* 37 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 38 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_188 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions",
  scope_188_entries, 39,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_187_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_181_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_181_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_187 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_187_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_186_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_186 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_186_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_185_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_183_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_183_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_185 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_185_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_184_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_183_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_183_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_184 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_184_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_183_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_183_entries[0], isActive_kcg_bool_kcg_false, &scope_184, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_183_entries[0], isActive_kcg_bool_kcg_true, &scope_185, 1, 2}
};
static const MappingScope scope_183 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_183_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_182_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_182_entries[0], isActive_kcg_bool_kcg_false, &scope_183, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_186, 1, 2}
};
static const MappingScope scope_182 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_182_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_181_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_181_entries[0], isActive_kcg_bool_kcg_false, &scope_182, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_181_entries[0], isActive_kcg_bool_kcg_true, &scope_187, 1, 2}
};
static const MappingScope scope_181 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_181_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_180_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_181, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_180 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_180_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2 */
static const MappingEntry scope_179_entries[50] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 48},
  /* 1 */ { MAP_OUTPUT, "P003V1_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, P003V1_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 49},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_180, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_238, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_235, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_308, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_444), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L209), &_Type_array_int_444_Utils, NULL, NULL, &scope_323, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L365", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L365), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_307, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_317, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 23 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_24), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L381), &_Type_array_int_24_Utils, NULL, NULL, &scope_324, 1, 23},
  /* 24 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 24},
  /* 25 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_56), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L384), &_Type_array_int_56_Utils, NULL, NULL, &scope_325, 1, 25},
  /* 26 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 27 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 28 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 29 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L390), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 30 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 31 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L392), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 32 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 33 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 35 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 36 */ { MAP_LOCAL, "_L397", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L397), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_LOCAL, "_L398", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L398), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 38 */ { MAP_LOCAL, "_L399", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L399), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 39 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 40 */ { MAP_LOCAL, "_L401", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L401), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 41 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 42 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L403), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 43 */ { MAP_LOCAL, "_L404", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L404), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 44 */ { MAP_LOCAL, "_L407", NULL, sizeof(array_int_18), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L407), &_Type_array_int_18_Utils, NULL, NULL, &scope_326, 1, 44},
  /* 45 */ { MAP_LOCAL, "_L408", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L408), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_307, 1, 45},
  /* 46 */ { MAP_LOCAL, "_L409", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L409), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 46},
  /* 47 */ { MAP_LOCAL, "_L410", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L410), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 47},
  /* 48 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 49 */ { MAP_LOCAL, "sections", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, sections), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_307, 1, 4}
};
static const MappingScope scope_179 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2",
  scope_179_entries, 50,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_178_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_172_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_172_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_178 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_178_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_177_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_173_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_173_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_177 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_177_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_176_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_176 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_176_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_175_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_175 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_175_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_174_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_174_entries[0], isActive_kcg_bool_kcg_false, &scope_175, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_174_entries[0], isActive_kcg_bool_kcg_true, &scope_176, 1, 2}
};
static const MappingScope scope_174 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_174_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_173_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_173_entries[0], isActive_kcg_bool_kcg_false, &scope_174, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_173_entries[0], isActive_kcg_bool_kcg_true, &scope_177, 1, 2}
};
static const MappingScope scope_173 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_173_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_172_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_172_entries[0], isActive_kcg_bool_kcg_false, &scope_173, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_172_entries[0], isActive_kcg_bool_kcg_true, &scope_178, 1, 2}
};
static const MappingScope scope_172 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_172_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_171_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_172, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_171 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_171_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2 */
static const MappingEntry scope_170_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 33},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_body_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 34},
  /* 2 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_sections), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_293, 1, 35},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_171, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_238, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_295, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L209), &_Type_array_int_494_Utils, NULL, NULL, &scope_316, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 17 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 18 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackside_sectionlist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L367), &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_294, 1, 20},
  /* 19 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 20 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L369), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_289, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 22 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 23 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_317, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__6326), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L385), &_Type_array__6326_Utils, NULL, NULL, &scope_293, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__6466), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L386), &_Type_array__6466_Utils, NULL, NULL, &scope_318, 1, 23},
  /* 27 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L394), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_290, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 31 */ { MAP_LOCAL, "_L397", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L397), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 29},
  /* 32 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 33 */ { MAP_LOCAL, "_L401", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L401), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L402", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L402), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 36 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36}
};
static const MappingScope scope_170 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2",
  scope_170_entries, 37,
};

/* TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal */
static const MappingEntry scope_169_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_233, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 5}
};
static const MappingScope scope_169 = {
  "TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal",
  scope_169_entries, 26,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2 */
static const MappingEntry scope_168_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 19},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section 2", NULL, sizeof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_237, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_169, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L431", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L431), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L432", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L432), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L433", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L433), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L434", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L434), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L435", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L435), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L436", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L436), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L437", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L437), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L438", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L438), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L439", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L439), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L440", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L440), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_290, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L441", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L441), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L442", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L442), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L443", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L443), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L446", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L446), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L447", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L447), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_168 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2",
  scope_168_entries, 20,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_167_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_14_IfBlock1), &_Type_Q_DIR_Utils, &scope_161_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_161_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_167 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_167_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_166_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_162_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_162_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_166 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_166_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_165_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_12_IfBlock1), &_Type_Q_DIR_Utils, &scope_163_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_163_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_165 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_165_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_164_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_163_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_163_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_164 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_164_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_163_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_163_entries[0], isActive_kcg_bool_kcg_false, &scope_164, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_163_entries[0], isActive_kcg_bool_kcg_true, &scope_165, 1, 2}
};
static const MappingScope scope_163 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_163_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_162_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_162_entries[0], isActive_kcg_bool_kcg_false, &scope_163, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_162_entries[0], isActive_kcg_bool_kcg_true, &scope_166, 1, 2}
};
static const MappingScope scope_162 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_162_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_161_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_161_entries[0], isActive_kcg_bool_kcg_false, &scope_162, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_161_entries[0], isActive_kcg_bool_kcg_true, &scope_167, 1, 2}
};
static const MappingScope scope_161 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_161_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_160_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_161, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_160 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_160_entries, 6,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions */
static const MappingEntry scope_159_entries[35] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 33},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 34},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_160, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_flatten_sections 1", NULL, sizeof(outC_C_P021_flatten_sections_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_236, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_235, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_302, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_396), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L209), &_Type_array_int_396_Utils, NULL, NULL, &scope_311, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L369", NULL, sizeof(P021_trackide_sectionlist_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L369), &_Type_P021_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_301, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 22 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_272, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L375", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L375), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_297, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_312, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L380", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L380), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_299, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_313, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_104), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L384), &_Type_array_int_104_Utils, NULL, NULL, &scope_314, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__6362), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L385), &_Type_array__6362_Utils, NULL, NULL, &scope_300, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__6457), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L386), &_Type_array__6457_Utils, NULL, NULL, &scope_315, 1, 32},
  /* 33 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_159 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions",
  scope_159_entries, 35,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_158_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_234, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_309, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_263, 1, 10}
};
static const MappingScope scope_158 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_158_entries, 12,
};

/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal */
static const MappingEntry scope_157_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_233, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 5}
};
static const MappingScope scope_157 = {
  "TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal",
  scope_157_entries, 26,
};

/* TM_conversions::CAST_Int_to_NID_MESSAGE/ CAST_Int_to_NID_MESSAGE_TM_conversions */
static const MappingEntry scope_156_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_message", NULL, sizeof(NID_MESSAGE), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, nid_message), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_156 = {
  "TM_conversions::CAST_Int_to_NID_MESSAGE/ CAST_Int_to_NID_MESSAGE_TM_conversions",
  scope_156_entries, 6,
};

/* TM_conversions::CAST_Int_to_L_MESSAGE/ CAST_Int_to_L_MESSAGE_TM_conversions */
static const MappingEntry scope_155_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_message", NULL, sizeof(L_MESSAGE), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, l_message), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_155 = {
  "TM_conversions::CAST_Int_to_L_MESSAGE/ CAST_Int_to_L_MESSAGE_TM_conversions",
  scope_155_entries, 6,
};

/* TM_trackside::Write_P015/ Write_P015_TM_trackside */
static const MappingEntry scope_154_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P015_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P015_tracksim_compr 1", NULL, sizeof(outC_C_P015_tracksim_compr_TM_conversions), offsetof(outC_Write_P015_TM_trackside, Context_1), NULL, NULL, NULL, &scope_224, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P015_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P015_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_Write_P015_TM_trackside, _L1), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_277, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P015_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P015_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P015_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 13}
};
static const MappingScope scope_154 = {
  "TM_trackside::Write_P015/ Write_P015_TM_trackside",
  scope_154_entries, 17,
};

/* TM_trackside::Write_P255/ Write_P255_TM_trackside */
static const MappingEntry scope_153_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P255_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P255_tracksim_compr 1", NULL, sizeof(outC_C_P255_tracksim_compr_TM_conversions), offsetof(outC_Write_P255_TM_trackside, Context_1), NULL, NULL, NULL, &scope_215, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P255_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P255_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P255_trackside_int_T_TM), offsetof(outC_Write_P255_TM_trackside, _L1), &_Type_P255_trackside_int_T_TM_Utils, NULL, NULL, &scope_278, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P255_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P255_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P255_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 13}
};
static const MappingScope scope_153 = {
  "TM_trackside::Write_P255/ Write_P255_TM_trackside",
  scope_153_entries, 17,
};

/* TM_trackside::Write_P065/ Write_P065_TM_trackside */
static const MappingEntry scope_152_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P065_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P065_tracksim_compr 1", NULL, sizeof(outC_C_P065_tracksim_compr_TM_conversions), offsetof(outC_Write_P065_TM_trackside, Context_1), NULL, NULL, NULL, &scope_206, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P065_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P065_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_Write_P065_TM_trackside, _L1), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_279, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P065_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P065_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P065_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 13}
};
static const MappingScope scope_152 = {
  "TM_trackside::Write_P065/ Write_P065_TM_trackside",
  scope_152_entries, 17,
};

/* TM_trackside::Write_P041/ Write_P041_TM_trackside */
static const MappingEntry scope_151_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P041_tracksim_compr 1", NULL, sizeof(outC_C_P041_tracksim_compr_TM_conversions), offsetof(outC_Write_P041_TM_trackside, Context_1), NULL, NULL, NULL, &scope_197, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Write_P041_TM_trackside, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_306, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 13}
};
static const MappingScope scope_151 = {
  "TM_trackside::Write_P041/ Write_P041_TM_trackside",
  scope_151_entries, 17,
};

/* TM_trackside::Write_P005/ Write_P005_TM_trackside */
static const MappingEntry scope_150_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P005_tracksim_compr 1", NULL, sizeof(outC_C_P005_tracksim_compr_TM_conversions), offsetof(outC_Write_P005_TM_trackside, Context_1), NULL, NULL, NULL, &scope_188, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P005_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P005_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Write_P005_TM_trackside, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_286, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 13}
};
static const MappingScope scope_150 = {
  "TM_trackside::Write_P005/ Write_P005_TM_trackside",
  scope_150_entries, 17,
};

/* TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2 */
static const MappingEntry scope_149_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_tracksim_compr 1", NULL, sizeof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_179, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_308, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 13}
};
static const MappingScope scope_149 = {
  "TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2",
  scope_149_entries, 17,
};

/* TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2 */
static const MappingEntry scope_148_entries[24] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_OUTPUT, "PacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, PacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 23},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_body 1", NULL, sizeof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_170, 1, 3},
  /* 3 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections 1", &iter_foldwi_33, sizeof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_168, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_169, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_295, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L45), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_293, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L51", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L51), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L54", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L54), &_Type_array_int_33_Utils, NULL, NULL, &scope_322, 1, 21}
};
static const MappingScope scope_148 = {
  "TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2",
  scope_148_entries, 24,
};

/* TM_trackside::Write_P021/ Write_P021_TM_trackside */
static const MappingEntry scope_147_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P021_tracksim_compr 1", NULL, sizeof(outC_C_P021_tracksim_compr_TM_conversions), offsetof(outC_Write_P021_TM_trackside, Context_1), NULL, NULL, NULL, &scope_159, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Write_P021_TM_trackside, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_302, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_265, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_264, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_263, 1, 13}
};
static const MappingScope scope_147 = {
  "TM_trackside::Write_P021/ Write_P021_TM_trackside",
  scope_147_entries, 17,
};

/* TM_radio_messages::C_M015_int_to_header/ C_M015_int_to_header_TM_radio_messages */
static const MappingEntry scope_146_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "Message_Header_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M015_int_to_header_TM_radio_messages, Message_Header_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 20},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_155, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_M015_int_to_header_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_156, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_116, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_int_T_TM_radio_messages), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L1), &_Type_M_015_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_270, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L34", NULL, sizeof(L_MESSAGE), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L34), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L35", NULL, sizeof(T_TRAIN), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L35), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L36", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L36), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 20 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_146 = {
  "TM_radio_messages::C_M015_int_to_header/ C_M015_int_to_header_TM_radio_messages",
  scope_146_entries, 21,
};

/* TM_radio_messages::C_M003_int__to_header/ C_M003_int__to_header_TM_radio_messages */
static const MappingEntry scope_145_entries[16] = {
  /* 0 */ { MAP_OUTPUT, "Message_Header_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_radio_messages, Message_Header_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 15},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_155, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_156, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_M003_int__to_header_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_116, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_int_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L1), &_Type_M_003_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_271, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(L_MESSAGE), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L24), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L25), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_TRAIN), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L26), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_145 = {
  "TM_radio_messages::C_M003_int__to_header/ C_M003_int__to_header_TM_radio_messages",
  scope_145_entries, 16,
};

/* MessageLibBaseline2::Send_P015/ Send_P015_MessageLibBaseline2 */
static const MappingEntry scope_144_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg19", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P015 1", NULL, sizeof(outC_Write_P015_TM_trackside), offsetof(outC_Send_P015_MessageLibBaseline2, Context_1), NULL, &scope_144_entries[0], isActive_kcg_bool_kcg_true, &scope_154, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_Send_P015_MessageLibBaseline2, _L4), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_277, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_144 = {
  "MessageLibBaseline2::Send_P015/ Send_P015_MessageLibBaseline2",
  scope_144_entries, 9,
};

/* MessageLibBaseline2::Send_P255/ Send_P255_MessageLibBaseline2 */
static const MappingEntry scope_143_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg18", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "TM_trackside::Write_P255 1", NULL, sizeof(outC_Write_P255_TM_trackside), offsetof(outC_Send_P255_MessageLibBaseline2, Context_1), NULL, &scope_143_entries[0], isActive_kcg_bool_kcg_true, &scope_153, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P255_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(P255_trackside_int_T_TM), offsetof(outC_Send_P255_MessageLibBaseline2, _L4), &_Type_P255_trackside_int_T_TM_Utils, NULL, NULL, &scope_278, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P255_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_OUTPUT, "packet_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P255_MessageLibBaseline2, packet_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8}
};
static const MappingScope scope_143 = {
  "MessageLibBaseline2::Send_P255/ Send_P255_MessageLibBaseline2",
  scope_143_entries, 9,
};

/* MessageLibBaseline2::Send_P065/ Send_P065_MessageLibBaseline2 */
static const MappingEntry scope_142_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P065 1", NULL, sizeof(outC_Write_P065_TM_trackside), offsetof(outC_Send_P065_MessageLibBaseline2, Context_1), NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_true, &scope_152, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_Send_P065_MessageLibBaseline2, _L4), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_279, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_142 = {
  "MessageLibBaseline2::Send_P065/ Send_P065_MessageLibBaseline2",
  scope_142_entries, 9,
};

/* MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2 */
static const MappingEntry scope_141_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P041 1", NULL, sizeof(outC_Write_P041_TM_trackside), offsetof(outC_Send_P041_MessageLibBaseline2, Context_1), NULL, &scope_141_entries[0], isActive_kcg_bool_kcg_true, &scope_151, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Send_P041_MessageLibBaseline2, _L4), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_306, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_141 = {
  "MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2",
  scope_141_entries, 9,
};

/* MessageLibBaseline2::Send_P005/ Send_P005_MessageLibBaseline2 */
static const MappingEntry scope_140_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P005 1", NULL, sizeof(outC_Write_P005_TM_trackside), offsetof(outC_Send_P005_MessageLibBaseline2, Context_1), NULL, &scope_140_entries[0], isActive_kcg_bool_kcg_true, &scope_150, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Send_P005_MessageLibBaseline2, _L4), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_286, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_140 = {
  "MessageLibBaseline2::Send_P005/ Send_P005_MessageLibBaseline2",
  scope_140_entries, 9,
};

/* MessageLibBaseline2::Send_P003V1/ Send_P003V1_MessageLibBaseline2 */
static const MappingEntry scope_139_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P003V1 1", NULL, sizeof(outC_Write_P003V1_TM_trackside_baseline2), offsetof(outC_Send_P003V1_MessageLibBaseline2, Context_1), NULL, &scope_139_entries[0], isActive_kcg_bool_kcg_true, &scope_149, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L4), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_308, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_139 = {
  "MessageLibBaseline2::Send_P003V1/ Send_P003V1_MessageLibBaseline2",
  scope_139_entries, 9,
};

/* MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2 */
static const MappingEntry scope_138_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P027V1 1", NULL, sizeof(outC_Write_P027V1_TM_trackside_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, Context_1), NULL, &scope_138_entries[0], isActive_kcg_bool_kcg_true, &scope_148, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L4), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_295, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_138 = {
  "MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2",
  scope_138_entries, 9,
};

/* MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2 */
static const MappingEntry scope_137_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P021 1", NULL, sizeof(outC_Write_P021_TM_trackside), offsetof(outC_Send_P021_MessageLibBaseline2, Context_1), NULL, &scope_137_entries[0], isActive_kcg_bool_kcg_true, &scope_147, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Send_P021_MessageLibBaseline2, _L4), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_302, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_137 = {
  "MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2",
  scope_137_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003/ SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_136_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_140, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_144, 1, 5},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_137, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_138, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_142, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_143, 1, 4},
  /* 6 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10}
};
static const MappingScope scope_136 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003/ SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_136_entries, 14,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003/ SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_135_entries[16] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_140, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_144, 1, 5},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_137, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_138, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_142, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 2", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_2), NULL, NULL, NULL, &scope_142, 1, 6},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_143, 1, 4},
  /* 7 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L33", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L33), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 11}
};
static const MappingScope scope_135 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003/ SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_135_entries, 16,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00230_7_M003/ _4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_134_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_140, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_144, 1, 5},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_137, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_138, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_142, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_143, 1, 4},
  /* 6 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10}
};
static const MappingScope scope_134 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00230_7_M003/ _4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_134_entries, 14,
};

/* MessageLibBaseline2::Send_M015_JRU/ Send_M015_JRU_MessageLibBaseline2 */
static const MappingEntry scope_133_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, Message_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_M015_int_to_header 1", NULL, sizeof(outC_C_M015_int_to_header_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, Context_1), NULL, NULL, NULL, &scope_146, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_int_T_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, _L1), &_Type_M_015_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_270, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 2}
};
static const MappingScope scope_133 = {
  "MessageLibBaseline2::Send_M015_JRU/ Send_M015_JRU_MessageLibBaseline2",
  scope_133_entries, 4,
};

/* RadioLib::No_Radio_Packets/ No_Radio_Packets_RadioLib */
static const MappingEntry scope_132_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Radio_Packets_RadioLib, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Radio_Packets_RadioLib, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 0}
};
static const MappingScope scope_132 = {
  "RadioLib::No_Radio_Packets/ No_Radio_Packets_RadioLib",
  scope_132_entries, 2,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003/ SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_131_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P003V1 1", NULL, sizeof(outC_Send_P003V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_139, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_140, 1, 3},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_144, 1, 7},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_137, 1, 0},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_138, 1, 1},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P041 1", NULL, sizeof(outC_Send_P041_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_141, 1, 4},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_142, 1, 5},
  /* 7 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _7_Context_1), NULL, NULL, NULL, &scope_143, 1, 6},
  /* 8 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 17},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 14}
};
static const MappingScope scope_131 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003/ SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_131_entries, 18,
};

/* MessageLibBaseline2::Send_M003_JRU/ Send_M003_JRU_MessageLibBaseline2 */
static const MappingEntry scope_130_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, Message_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_M003_int__to_header 1", NULL, sizeof(outC_C_M003_int__to_header_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, Context_1), NULL, NULL, NULL, &scope_145, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_int_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, _L1), &_Type_M_003_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_271, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 2}
};
static const MappingScope scope_130 = {
  "MessageLibBaseline2::Send_M003_JRU/ Send_M003_JRU_MessageLibBaseline2",
  scope_130_entries, 4,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003/ SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_129_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P003V1 1", NULL, sizeof(outC_Send_P003V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_139, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_140, 1, 3},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_144, 1, 7},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_137, 1, 0},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_138, 1, 1},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P041 1", NULL, sizeof(outC_Send_P041_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_141, 1, 4},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_142, 1, 5},
  /* 7 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _7_Context_1), NULL, NULL, NULL, &scope_143, 1, 6},
  /* 8 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 17},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 14}
};
static const MappingScope scope_129 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003/ SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_129_entries, 18,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_341_D_00134_4_M015/ Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_128_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_128 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_341_D_00134_4_M015/ Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_128_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_369_D_00231_3_M015/ Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_127_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_127 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_369_D_00231_3_M015/ Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_127_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003/ Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_126_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_136, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_130, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_126 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003/ Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_126_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003/ Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_125_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_135, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_130, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_125 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003/ Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_125_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00230_7_M003/ _5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_124_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00230_7_M003 1", NULL, sizeof(outC__4_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_134, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_130, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_124 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00230_7_M003/ _5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_124_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00124_9_M015/ Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_123_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_123 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00124_9_M015/ Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_123_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_360_D_00249_2_M015/ Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_122_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_122 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_360_D_00249_2_M015/ Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_122_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_358_D_00123_1_M015/ Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_121_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_121 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_358_D_00123_1_M015/ Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_121_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_356_D_00048_5_M015/ Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_120_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_120 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_356_D_00048_5_M015/ Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_120_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_355_D_00089_4_M015/ Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_119_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_132, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_119 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_355_D_00089_4_M015/ Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_119_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003/ Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_118_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_131, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_130, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_118 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003/ Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_118_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003/ Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_117_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_129, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_130, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_117 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003/ Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_117_entries, 11,
};

/* TM_conversions::CAST_Int_to_T_TRAIN/ CAST_Int_to_T_TRAIN_TM_conversions */
static const MappingEntry scope_116_entries[9] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L11), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_OUTPUT, "t_train", NULL, sizeof(T_TRAIN), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, t_train), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_116 = {
  "TM_conversions::CAST_Int_to_T_TRAIN/ CAST_Int_to_T_TRAIN_TM_conversions",
  scope_116_entries, 9,
};

/* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP/ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions */
static const MappingEntry scope_115_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_emergencystop", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, d_emergencystop), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_115 = {
  "TM_conversions::CAST_Int_to_D_EMERGENCYSTOP/ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions",
  scope_115_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_REF/ CAST_Int_to_D_REF_TM_conversions */
static const MappingEntry scope_114_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ref", NULL, sizeof(D_REF), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, d_ref), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_114 = {
  "TM_conversions::CAST_Int_to_D_REF/ CAST_Int_to_D_REF_TM_conversions",
  scope_114_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_EM/ CAST_Int_to_NID_EM_TM_conversions */
static const MappingEntry scope_113_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_em", NULL, sizeof(NID_EM), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, nid_em), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_113 = {
  "TM_conversions::CAST_Int_to_NID_EM/ CAST_Int_to_NID_EM_TM_conversions",
  scope_113_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_112_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4_IfBlock1), &_Type_M_VERSION_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_112 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then:",
  scope_112_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_111_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L3_IfBlock1), &_Type_M_VERSION_Utils, &scope_105_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_111 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then:",
  scope_111_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_110_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L2_IfBlock1), &_Type_M_VERSION_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_110 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then:",
  scope_110_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_109_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L26_IfBlock1), &_Type_M_VERSION_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_109 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then:",
  scope_109_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_108_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L27_IfBlock1), &_Type_M_VERSION_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_108 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else:",
  scope_108_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_107_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_107_entries[0], isActive_kcg_bool_kcg_false, &scope_108, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_107_entries[0], isActive_kcg_bool_kcg_true, &scope_109, 1, 2}
};
static const MappingScope scope_107 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:",
  scope_107_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_106_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_106_entries[0], isActive_kcg_bool_kcg_false, &scope_107, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_106_entries[0], isActive_kcg_bool_kcg_true, &scope_110, 1, 2}
};
static const MappingScope scope_106 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:",
  scope_106_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_105_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_kcg_bool_kcg_false, &scope_106, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_kcg_bool_kcg_true, &scope_111, 1, 2}
};
static const MappingScope scope_105 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:",
  scope_105_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1: */
static const MappingEntry scope_104_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_false, &scope_105, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_true, &scope_112, 1, 2}
};
static const MappingScope scope_104 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:",
  scope_104_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions */
static const MappingEntry scope_103_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_104, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_103 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions",
  scope_103_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_LRBG/ CAST_Int_to_NID_LRBG_TM_conversions */
static const MappingEntry scope_102_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "NID_LRBG_out", NULL, sizeof(NID_LRBG), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, NID_LRBG_out), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_102 = {
  "TM_conversions::CAST_Int_to_NID_LRBG/ CAST_Int_to_NID_LRBG_TM_conversions",
  scope_102_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_101_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L8_IfBlock1), &_Type_M_ACK_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_101 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:then:",
  scope_101_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_100_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L71_IfBlock1), &_Type_M_ACK_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_100 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:then:",
  scope_100_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_99_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L1_IfBlock1), &_Type_M_ACK_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_99 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:else:",
  scope_99_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_98_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_false, &scope_99, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_true, &scope_100, 1, 2}
};
static const MappingScope scope_98 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:",
  scope_98_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1: */
static const MappingEntry scope_97_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_false, &scope_98, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_true, &scope_101, 1, 2}
};
static const MappingScope scope_97 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:",
  scope_97_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversions */
static const MappingEntry scope_96_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_97, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_ack", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_ack_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, m_ack_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_96 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversions",
  scope_96_entries, 6,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015/ Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_95_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_341_D_00134_4_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_95_entries[0], isActive_kcg_bool_kcg_true, &scope_128, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_95 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015/ Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_95_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015/ Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_94_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_369_D_00231_3_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_94_entries[0], isActive_kcg_bool_kcg_true, &scope_127, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_94 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015/ Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_94_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003/ Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_93_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_93_entries[0], isActive_kcg_bool_kcg_true, &scope_126, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_93 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003/ Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_93_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003/ Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_92_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_92_entries[0], isActive_kcg_bool_kcg_true, &scope_125, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_92 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003/ Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_92_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_7_M003/ Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_91_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00230_7_M003 1", NULL, sizeof(outC__5_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_91_entries[0], isActive_kcg_bool_kcg_true, &scope_124, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_91 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_7_M003/ Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_91_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015/ Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_90_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00124_9_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_90_entries[0], isActive_kcg_bool_kcg_true, &scope_123, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_90 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015/ Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_90_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015/ Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_89_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_360_D_00249_2_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_89_entries[0], isActive_kcg_bool_kcg_true, &scope_122, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_89 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015/ Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_89_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015/ Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_88_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_358_D_00123_1_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_88_entries[0], isActive_kcg_bool_kcg_true, &scope_121, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_88 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015/ Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_88_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015/ Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_87_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_356_D_00048_5_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_120, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_87 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015/ Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_87_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015/ Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_86_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_355_D_00089_4_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_119, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_86 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015/ Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_86_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003/ Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_85_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_118, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_85 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003/ Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_85_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003/ Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_84_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_true, &scope_117, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 6}
};
static const MappingScope scope_84 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003/ Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_84_entries, 9,
};

/* TM_conversions::CAST_D_EMERGENCYSTOP_to_int/ CAST_D_EMERGENCYSTOP_to_int_TM_conversions */
static const MappingEntry scope_83_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L1), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_emergencystop_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, d_emergencystop_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_83 = {
  "TM_conversions::CAST_D_EMERGENCYSTOP_to_int/ CAST_D_EMERGENCYSTOP_to_int_TM_conversions",
  scope_83_entries, 6,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_82_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_82 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:then:",
  scope_82_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_81_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_81 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:then:",
  scope_81_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_80_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_80 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_80_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_79_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L26_IfBlock1), &_Type_kcg_int_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_79 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:then:",
  scope_79_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_78_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L27_IfBlock1), &_Type_kcg_int_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_78 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:else:",
  scope_78_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_77_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_false, &scope_78, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_true, &scope_79, 1, 2}
};
static const MappingScope scope_77 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_77_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_76_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_77, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_80, 1, 2}
};
static const MappingScope scope_76 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:",
  scope_76_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_false, &scope_76, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_81, 1, 2}
};
static const MappingScope scope_75 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:",
  scope_75_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_74_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_false, &scope_75, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_82, 1, 2}
};
static const MappingScope scope_74 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:",
  scope_74_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversions */
static const MappingEntry scope_73_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L4), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(M_VERSION), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, m_version_in), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_version_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, m_version_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_73 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversions",
  scope_73_entries, 6,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_72_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_72 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:then:",
  scope_72_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_71_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L52_IfBlock1), &_Type_kcg_bool_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_71 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:then:",
  scope_71_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_70_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_68_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L43_IfBlock1), &_Type_kcg_bool_Utils, &scope_68_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_70 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_70_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_68_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L24_IfBlock1), &_Type_kcg_int_Utils, &scope_68_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_69 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_69_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_68_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive_kcg_bool_kcg_false, &scope_69, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive_kcg_bool_kcg_true, &scope_70, 1, 2}
};
static const MappingScope scope_68 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:",
  scope_68_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_67_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_false, &scope_68, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_71, 1, 2}
};
static const MappingScope scope_67 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:",
  scope_67_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_66_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_67, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_true, &scope_72, 1, 2}
};
static const MappingScope scope_66 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:",
  scope_66_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversions */
static const MappingEntry scope_65_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_66, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L12), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, q_dir_in), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "q_dir_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, q_dir_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_65 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversions",
  scope_65_entries, 6,
};

/* TM_conversions::CAST_D_REF_to_int/ CAST_D_REF_to_int_TM_conversions */
static const MappingEntry scope_64_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_REF), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L1), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ref_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, d_ref_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_64 = {
  "TM_conversions::CAST_D_REF_to_int/ CAST_D_REF_to_int_TM_conversions",
  scope_64_entries, 6,
};

/* TM_conversions::CAST_D_SR_to_int/ CAST_D_SR_to_int_TM_conversions */
static const MappingEntry scope_63_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_SR), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L1), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_sr_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, d_sr_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_63 = {
  "TM_conversions::CAST_D_SR_to_int/ CAST_D_SR_to_int_TM_conversions",
  scope_63_entries, 6,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_62_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_62 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:then:",
  scope_62_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_61_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_57_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_57_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_61 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:then:",
  scope_61_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_60_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L13_IfBlock1), &_Type_kcg_int_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_60 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_60_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_59_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_59 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_59_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_58_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_false, &scope_59, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_true, &scope_60, 1, 2}
};
static const MappingScope scope_58 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:",
  scope_58_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_57_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_false, &scope_58, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_true, &scope_61, 1, 2}
};
static const MappingScope scope_57 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:",
  scope_57_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_56_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive_kcg_bool_kcg_false, &scope_57, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive_kcg_bool_kcg_true, &scope_62, 1, 2}
};
static const MappingScope scope_56 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:",
  scope_56_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversions */
static const MappingEntry scope_55_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L2), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_OUTPUT, "d", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, d), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_55 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversions",
  scope_55_entries, 6,
};

/* TM_conversions::CAST_NID_EM_to_int/ CAST_NID_EM_to_int_TM_conversions */
static const MappingEntry scope_54_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_EM), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L1), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_em_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, nid_em_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_54 = {
  "TM_conversions::CAST_NID_EM_to_int/ CAST_NID_EM_to_int_TM_conversions",
  scope_54_entries, 6,
};

/* TM_conversions::CAST_NID_LRBG_to_int/ CAST_NID_LRBG_to_int_TM_conversions */
static const MappingEntry scope_53_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L1), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_lrbg_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, nid_lrbg_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_53 = {
  "TM_conversions::CAST_NID_LRBG_to_int/ CAST_NID_LRBG_to_int_TM_conversions",
  scope_53_entries, 6,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_52_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_48_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L8_IfBlock1), &_Type_kcg_int_Utils, &scope_48_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_52 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:then:",
  scope_52_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_51_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L71_IfBlock1), &_Type_kcg_int_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_51 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:then:",
  scope_51_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_50_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_50 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:else:",
  scope_50_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_49_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_false, &scope_50, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_51, 1, 2}
};
static const MappingScope scope_49 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:",
  scope_49_entries, 3,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_48_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_48_entries[0], isActive_kcg_bool_kcg_false, &scope_49, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_48_entries[0], isActive_kcg_bool_kcg_true, &scope_52, 1, 2}
};
static const MappingScope scope_48 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:",
  scope_48_entries, 3,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversions */
static const MappingEntry scope_47_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_ACK), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L4), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "m_ack_in", NULL, sizeof(M_ACK), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, m_ack_in), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_ack_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, m_ack_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_47 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversions",
  scope_47_entries, 6,
};

/* TM_conversions::CAST_T_TRAIN_to_int/ CAST_T_TRAIN_to_int_TM_conversions */
static const MappingEntry scope_46_entries[9] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_TRAIN), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L1), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L11), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_OUTPUT, "t_train_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, t_train_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_46 = {
  "TM_conversions::CAST_T_TRAIN_to_int/ CAST_T_TRAIN_to_int_TM_conversions",
  scope_46_entries, 9,
};

/* TM_RBC_conversions::M003_to_Radio_Track_Train_H/ M003_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_45_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_45 = {
  "TM_RBC_conversions::M003_to_Radio_Track_Train_H/ M003_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_45_entries, 20,
};

/* TM_radio_messages::C_header_to_M003/ C_header_to_M003_TM_radio_messages */
static const MappingEntry scope_44_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M003_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_96, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M003_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_102, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M003_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_radio_messages, _L26), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M003_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M003_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M003_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M003_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M003_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 18 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_radio_messages, message_out), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_258, 1, 18}
};
static const MappingScope scope_44 = {
  "TM_radio_messages::C_header_to_M003/ C_header_to_M003_TM_radio_messages",
  scope_44_entries, 19,
};

/* TM_radio_messages::C_header_to_M008/ C_header_to_M008_TM_radio_messages */
static const MappingEntry scope_43_entries[21] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M008_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_96, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M008_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_102, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M008_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_116, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M008_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_radio_messages, _L26), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_259, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M008_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M008_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M008_TM_radio_messages, _L29), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M008_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M008_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M008_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 20 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_radio_messages, message_out), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_259, 1, 20}
};
static const MappingScope scope_43 = {
  "TM_radio_messages::C_header_to_M008/ C_header_to_M008_TM_radio_messages",
  scope_43_entries, 21,
};

/* TM_RBC_conversions::M008_to_Radio_Track_Train_H/ M008_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_42_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_259, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_42 = {
  "TM_RBC_conversions::M008_to_Radio_Track_Train_H/ M008_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_42_entries, 20,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_41_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_119_IfBlock1), &_Type_Q_DIR_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L5_120_IfBlock1), &_Type_kcg_bool_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_41 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_41_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_40_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3_112_IfBlock1), &_Type_Q_DIR_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_40 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_40_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_39_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_116_IfBlock1), &_Type_Q_DIR_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_117_IfBlock1), &_Type_kcg_bool_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_39 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_39_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_38_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_115_IfBlock1), &_Type_kcg_bool_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_114_IfBlock1), &_Type_Q_DIR_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_38 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_38_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_37_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _13_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_false, &scope_38, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_true, &scope_39, 1, 2}
};
static const MappingScope scope_37 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_37_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_36_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _18_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_false, &scope_37, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_true, &scope_40, 1, 2}
};
static const MappingScope scope_36 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_36_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_35_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _11_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_35_entries[0], isActive_kcg_bool_kcg_false, &scope_36, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_35_entries[0], isActive_kcg_bool_kcg_true, &scope_41, 1, 2}
};
static const MappingScope scope_35 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_35_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_34_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _10_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_34 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_34_entries, 6,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_18_IfBlock1), &_Type_Q_SCALE_Utils, &scope_27_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3_19_IfBlock1), &_Type_kcg_bool_Utils, &scope_27_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_33 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_33_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_32_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_28_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_28_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_32 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_32_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_31_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_16_IfBlock1), &_Type_Q_SCALE_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_31 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_31_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_30_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_15_IfBlock1), &_Type_Q_SCALE_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_30 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_30_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_29_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_false, &scope_30, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_true, &scope_31, 1, 2}
};
static const MappingScope scope_29 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_29_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_28_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _7_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive_kcg_bool_kcg_false, &scope_29, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive_kcg_bool_kcg_true, &scope_32, 1, 2}
};
static const MappingScope scope_28 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_28_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_27_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_27_entries[0], isActive_kcg_bool_kcg_false, &scope_28, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_27_entries[0], isActive_kcg_bool_kcg_true, &scope_33, 1, 2}
};
static const MappingScope scope_27 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_27_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_26_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_26 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_26_entries, 6,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messages */
static const MappingEntry scope_25_entries[29] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_EMERGENCYSTOP 1", NULL, sizeof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_115, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_REF 1", NULL, sizeof(outC_CAST_Int_to_D_REF_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_114, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _4_Context_1), NULL, NULL, NULL, &scope_96, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_EM 1", NULL, sizeof(outC_CAST_Int_to_NID_EM_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_113, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _3_Context_1), NULL, NULL, NULL, &scope_102, 1, 1},
  /* 5 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 5},
  /* 6 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_radio_messages, _L26), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_260, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M015_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M015_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_EM), offsetof(outC_C_header_to_M015_TM_radio_messages, _L29), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L30), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L31", NULL, sizeof(D_REF), offsetof(outC_C_header_to_M015_TM_radio_messages, _L31), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L32), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L33", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_C_header_to_M015_TM_radio_messages, _L33), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M015_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 16},
  /* 24 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 25 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 26 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 27 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 28 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_radio_messages, message_out), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_260, 1, 28}
};
static const MappingScope scope_25 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messages",
  scope_25_entries, 29,
};

/* TM_RBC_conversions::M015_to_Radio_Track_Train_H/ M015_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_24_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_260, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 16},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_DIR), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(D_REF), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L26), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(Q_SCALE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L27), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_EM), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L28), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 14 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L31), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_24 = {
  "TM_RBC_conversions::M015_to_Radio_Track_Train_H/ M015_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_24_entries, 20,
};

/* TM_RBC_conversions::M024_to_Radio_Track_Train_H/ M024_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_23_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_258, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_23 = {
  "TM_RBC_conversions::M024_to_Radio_Track_Train_H/ M024_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_23_entries, 20,
};

/* TM_radio_messages::C_header_to_M024/ C_header_to_M024_TM_radio_messages */
static const MappingEntry scope_22_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M024_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_96, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M024_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_102, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M024_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_radio_messages, _L26), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_258, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M024_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M024_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M024_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M024_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M024_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 18 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_radio_messages, message_out), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_258, 1, 18}
};
static const MappingScope scope_22 = {
  "TM_radio_messages::C_header_to_M024/ C_header_to_M024_TM_radio_messages",
  scope_22_entries, 19,
};

/* TM_radio_messages::C_header_to_M032/ C_header_to_M032_TM_radio_messages */
static const MappingEntry scope_21_entries[21] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M032_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_96, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_VERSION 1", NULL, sizeof(outC_CAST_Int_to_M_VERSION_TM_conversions), offsetof(outC_C_header_to_M032_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_103, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M032_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_102, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M032_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_radio_messages, _L26), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_261, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M032_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M032_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(M_VERSION), offsetof(outC_C_header_to_M032_TM_radio_messages, _L29), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M032_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M032_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M032_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 20 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_radio_messages, message_out), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_261, 1, 20}
};
static const MappingScope scope_21 = {
  "TM_radio_messages::C_header_to_M032/ C_header_to_M032_TM_radio_messages",
  scope_21_entries, 21,
};

/* TM_RBC_conversions::M032_to_Radio_Track_Train_H/ M032_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_20_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_261, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_VERSION), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L26), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_20 = {
  "TM_RBC_conversions::M032_to_Radio_Track_Train_H/ M032_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_20_entries, 20,
};

/* TM_conversions::CAST_NID_MESSAGE_to_int/ CAST_NID_MESSAGE_to_int_TM_conversions */
static const MappingEntry scope_19_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_MESSAGE), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L1), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_message_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, nid_message_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_19 = {
  "TM_conversions::CAST_NID_MESSAGE_to_int/ CAST_NID_MESSAGE_to_int_TM_conversions",
  scope_19_entries, 6,
};

/* RadioLib::RBC_close/ RBC_close_RadioLib */
static const MappingEntry scope_18_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Message_out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_close_RadioLib, Message_out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 5},
  /* 1 */ { MAP_OUTPUT, "Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_close_RadioLib, Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_close_RadioLib, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_close_RadioLib, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_close_RadioLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RBC_close_RadioLib, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RBC_close_RadioLib, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_18 = {
  "RadioLib::RBC_close/ RBC_close_RadioLib",
  scope_18_entries, 7,
};

/* RadioLib::RBC_init/ RBC_init_RadioLib */
static const MappingEntry scope_17_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_init_RadioLib, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_init_RadioLib, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_init_RadioLib, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_init_RadioLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RBC_init_RadioLib, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_RBC_init_RadioLib, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_17 = {
  "RadioLib::RBC_init/ RBC_init_RadioLib",
  scope_17_entries, 6,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer/ RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_16_entries[26] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _11_Context_1), NULL, NULL, NULL, &scope_95, 1, 11},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_85, 1, 1},
  /* 2 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_84, 1, 0},
  /* 3 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_86, 1, 2},
  /* 4 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_87, 1, 3},
  /* 5 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_88, 1, 4},
  /* 6 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_89, 1, 5},
  /* 7 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_90, 1, 6},
  /* 8 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_7_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _7_Context_1), NULL, NULL, NULL, &scope_91, 1, 7},
  /* 9 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _8_Context_1), NULL, NULL, NULL, &scope_92, 1, 8},
  /* 10 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _9_Context_1), NULL, NULL, NULL, &scope_93, 1, 9},
  /* 11 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _10_Context_1), NULL, NULL, NULL, &scope_94, 1, 10},
  /* 12 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 25},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L10", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L10), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L11", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L12", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L12), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L13", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L13), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 24},
  /* 18 */ { MAP_LOCAL, "_L2", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 13},
  /* 19 */ { MAP_LOCAL, "_L3", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 15},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 16},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 18},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 19},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L9), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 20}
};
static const MappingScope scope_16 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer/ RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_16_entries, 26,
};

/* TM_conversions::C_TrackTrainMessage_to_Int/ C_TrackTrainMessage_to_Int_TM_conversions */
static const MappingEntry scope_15_entries[44] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Message_Out), &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_267, 1, 43},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_D_EMERGENCYSTOP_to_int 1", NULL, sizeof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_1), NULL, NULL, NULL, &scope_83, 1, 12},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_D_REF_to_int 1", NULL, sizeof(outC_CAST_D_REF_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_64, 1, 9},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_D_SR_to_int 1", NULL, sizeof(outC_CAST_D_SR_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_63, 1, 7},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_M_ACK_to_int 1", NULL, sizeof(outC_CAST_M_ACK_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _8_Context_1), NULL, NULL, NULL, &scope_47, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_M_VERSION_to_int 1", NULL, sizeof(outC_CAST_M_VERSION_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_73, 1, 11},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_EM_to_int 1", NULL, sizeof(outC_CAST_NID_EM_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _6_Context_1), NULL, NULL, NULL, &scope_54, 1, 5},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_LRBG_to_int 1", NULL, sizeof(outC_CAST_NID_LRBG_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _7_Context_1), NULL, NULL, NULL, &scope_53, 1, 3},
  /* 8 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_MESSAGE_to_int 1", NULL, sizeof(outC_CAST_NID_MESSAGE_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _10_Context_1), NULL, NULL, NULL, &scope_19, 1, 0},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Q_DIR_to_int 1", NULL, sizeof(outC_CAST_Q_DIR_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_65, 1, 10},
  /* 10 */ { MAP_INSTANCE, "TM_conversions::CAST_Q_SCALE_to_int 1", NULL, sizeof(outC_CAST_Q_SCALE_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _5_Context_1), NULL, NULL, NULL, &scope_55, 1, 6},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 1", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _9_Context_1), NULL, NULL, NULL, &scope_46, 1, 1},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 2", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_2), NULL, NULL, NULL, &scope_46, 1, 4},
  /* 13 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 3", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_3), NULL, NULL, NULL, &scope_46, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L10", NULL, sizeof(Q_SCALE), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L10), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 20},
  /* 16 */ { MAP_LOCAL, "_L11", NULL, sizeof(D_SR), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L11), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L12", NULL, sizeof(T_TRAIN), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L12), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L13", NULL, sizeof(D_REF), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L13), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L14", NULL, sizeof(Q_DIR), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L14), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 16},
  /* 20 */ { MAP_LOCAL, "_L15", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L15), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 21 */ { MAP_LOCAL, "_L16", NULL, sizeof(M_VERSION), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L16), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 22 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 27},
  /* 24 */ { MAP_LOCAL, "_L32", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L32), &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_267, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 29 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 30 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 31 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L39), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 32 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L4), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 26},
  /* 33 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 34 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 35 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 36 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 37 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L44), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 38 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 39 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 25},
  /* 40 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 24},
  /* 41 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 23},
  /* 42 */ { MAP_LOCAL, "_L8", NULL, sizeof(T_TRAIN), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L8), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 43 */ { MAP_LOCAL, "_L9", NULL, sizeof(NID_EM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L9), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 21}
};
static const MappingScope scope_15 = {
  "TM_conversions::C_TrackTrainMessage_to_Int/ C_TrackTrainMessage_to_Int_TM_conversions",
  scope_15_entries, 44,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:then: */
static const MappingEntry scope_14_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M003_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _1_Context_1), NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_45, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M003 2", NULL, sizeof(outC_C_header_to_M003_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, Context_2), NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_44, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L1_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_262, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L2_IfBlock1), &_Type_M_003_T_TM_radio_messages_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_258, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L3_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_257, 1, 4}
};
static const MappingScope scope_14 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:then:",
  scope_14_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:then: */
static const MappingEntry scope_13_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M008_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _3_Context_1), NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_42, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M008 2", NULL, sizeof(outC_C_header_to_M008_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _2_Context_2), NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_43, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L113_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_262, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L214_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_257, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L315_IfBlock1), &_Type_M_008_T_TM_radio_messages_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_259, 1, 2}
};
static const MappingScope scope_13 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:then:",
  scope_13_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_12_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M015_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _5_Context_1), NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M015 1", NULL, sizeof(outC_C_header_to_M015_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _4_Context_1), NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L116_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_262, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L217_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_257, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L318_IfBlock1), &_Type_M_015_T_TM_radio_messages_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_260, 1, 2}
};
static const MappingScope scope_12 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:then:",
  scope_12_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_11_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M024_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _7_Context_1), NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M024 1", NULL, sizeof(outC_C_header_to_M024_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _6_Context_1), NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_22, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L119_IfBlock1), &_Type_M_024_T_TM_radio_messages_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_258, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L220_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_257, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L321_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_262, 1, 2}
};
static const MappingScope scope_11 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:then:",
  scope_11_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_10_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M032_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _9_Context_1), NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_20, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M032 1", NULL, sizeof(outC_C_header_to_M032_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _8_Context_1), NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_21, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L122_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_257, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L223_IfBlock1), &_Type_M_032_T_TM_radio_messages_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_261, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L324_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_262, 1, 2}
};
static const MappingScope scope_10 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:then:",
  scope_10_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L125_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_257, 1, 0}
};
static const MappingScope scope_9 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:else:",
  scope_9_entries, 1,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2}
};
static const MappingScope scope_8 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:",
  scope_8_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _10_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, &scope_8, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_7 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:",
  scope_7_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else: */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _11_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_6 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:",
  scope_6_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else: */
static const MappingEntry scope_5_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _12_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_false, &scope_6, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_13, 1, 2}
};
static const MappingScope scope_5 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:",
  scope_5_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1: */
static const MappingEntry scope_4_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_false, &scope_5, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_14, 1, 2}
};
static const MappingScope scope_4 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:",
  scope_4_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversions */
static const MappingEntry scope_3_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Header_Out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, Header_Out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 6},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_MESSAGE_to_int 1", NULL, sizeof(outC_CAST_NID_MESSAGE_to_int_TM_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_19, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "nid_message", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_3 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversions",
  scope_3_entries, 7,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration/ Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_2_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer 2", NULL, sizeof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_2), NULL, NULL, NULL, &scope_16, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Message_out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Message_out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 11},
  /* 2 */ { MAP_OUTPUT, "Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 12},
  /* 3 */ { MAP_INSTANCE, "RadioLib::RBC_close 1", NULL, sizeof(outC_RBC_close_RadioLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_18, 1, 2},
  /* 4 */ { MAP_INSTANCE, "RadioLib::RBC_init 1", NULL, sizeof(outC_RBC_init_RadioLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_17, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_269, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 9}
};
static const MappingScope scope_2 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration/ Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_2_entries, 13,
};

/* FirstTest::Story00A_RBC/ Story00A_RBC_FirstTest */
static const MappingEntry scope_1_entries[16] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration 1", NULL, sizeof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Compressed_Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx.Compressed_Packets_out, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 13},
  /* 2 */ { MAP_OUTPUT, "Compressed_Radio_Message_out", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx.Compressed_Radio_Message_out, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_268, 1, 14},
  /* 3 */ { MAP_OUTPUT, "RadioTrackTrainHeader_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), (size_t)&outputs_ctx.RadioTrackTrainHeader_out, &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 12},
  /* 4 */ { MAP_INSTANCE, "TM_RBC_conversions::compressed_to_Radio_Track_Train_H 1", NULL, sizeof(outC_compressed_to_Radio_Track_TM_RBC_conversions), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::C_TrackTrainMessage_to_Int 1", NULL, sizeof(outC_C_TrackTrainMessage_to_Int_TM_conversions), (size_t)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_15, 1, 2},
  /* 6 */ { MAP_INPUT, "Trigger_in", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.Trigger_in, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), (size_t)&outputs_ctx._L1, &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L2, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L4, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L5, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_266, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), (size_t)&outputs_ctx._L6, &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_262, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), (size_t)&outputs_ctx._L7, &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_257, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), (size_t)&outputs_ctx._L8, &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_267, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L9, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_268, 1, 11}
};
static const MappingScope scope_1 = {
  "FirstTest::Story00A_RBC/ Story00A_RBC_FirstTest",
  scope_1_entries, 16,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "FirstTest::Story00A_RBC", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

