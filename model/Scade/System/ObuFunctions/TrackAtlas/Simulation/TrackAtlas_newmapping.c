/* TrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackAtlas_newtype.h"
#include "TrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_31;
static const MappingIterator iter_array_99;
static const MappingIterator iter_array_200;
static const MappingIterator iter_array_363;
static const MappingIterator iter_array_11;
static const MappingIterator iter_array_64;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_24;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_128;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_10;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_15;
static const MappingIterator iter_array_3;
static const MappingIterator iter_foldwi_11;
static const MappingIterator iter_mapwi_32;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_11;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_fold_10;
static const MappingIterator iter_mapwi_33;
static const MappingIterator iter_foldwi_363;
static const MappingIterator iter_map_11;
static const MappingIterator iter_mapfold_363;
static const MappingIterator iter_foldi_33;
static const MappingIterator iter_mapwi_200;
static const MappingIterator iter_map_10;
static const MappingIterator iter_array_31 = { "array", 31, 31, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_200 = { "array", 200, 200, NULL};
static const MappingIterator iter_array_363 = { "array", 363, 363, NULL};
static const MappingIterator iter_array_11 = { "array", 11, 11, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_24 = { "array", 24, 24, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_128 = { "array", 128, 128, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_10 = { "array", 10, 10, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_15 = { "array", 15, 15, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_foldwi_11 = { "foldwi", 11, 11, NULL};
static const MappingIterator iter_mapwi_32 = { "mapwi", 32, 32, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_11 = { "foldi", 11, 11, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};
static const MappingIterator iter_fold_10 = { "fold", 10, 10, NULL};
static const MappingIterator iter_mapwi_33 = { "mapwi", 33, 33, NULL};
static const MappingIterator iter_foldwi_363 = { "foldwi", 363, 363, NULL};
static const MappingIterator iter_map_11 = { "map", 11, 11, NULL};
static const MappingIterator iter_mapfold_363 = { "mapfold", 363, 363, NULL};
static const MappingIterator iter_foldi_33 = { "foldi", 33, 33, NULL};
static const MappingIterator iter_mapwi_200 = { "mapwi", 200, 200, NULL};
static const MappingIterator iter_map_10 = { "map", 10, 10, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }
static int isActive_SSM_TR_SM1_SSM_TR_ReqPending_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_ReqPending_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_ReqPending_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_ReqPending_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_NoReqPending_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_NoReqPending_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_NoReqPending_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_NoReqPending_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_init_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_init_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_init_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_init_SM1); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_501, 1);
MAP_DECL(scope_500, 1);
MAP_DECL(scope_499, 1);
MAP_DECL(scope_498, 1);
MAP_DECL(scope_497, 1);
MAP_DECL(scope_496, 1);
MAP_DECL(scope_495, 1);
MAP_DECL(scope_494, 1);
MAP_DECL(scope_493, 1);
MAP_DECL(scope_492, 1);
MAP_DECL(scope_491, 1);
MAP_DECL(scope_490, 1);
MAP_DECL(scope_489, 1);
MAP_DECL(scope_488, 1);
MAP_DECL(scope_487, 1);
MAP_DECL(scope_486, 1);
MAP_DECL(scope_485, 1);
MAP_DECL(scope_484, 1);
MAP_DECL(scope_483, 1);
MAP_DECL(scope_482, 1);
MAP_DECL(scope_481, 1);
MAP_DECL(scope_480, 1);
MAP_DECL(scope_479, 1);
MAP_DECL(scope_478, 1);
MAP_DECL(scope_477, 1);
MAP_DECL(scope_476, 5);
MAP_DECL(scope_475, 1);
MAP_DECL(scope_474, 4);
MAP_DECL(scope_473, 1);
MAP_DECL(scope_472, 6);
MAP_DECL(scope_471, 4);
MAP_DECL(scope_470, 1);
MAP_DECL(scope_469, 1);
MAP_DECL(scope_468, 2);
MAP_DECL(scope_467, 4);
MAP_DECL(scope_466, 2);
MAP_DECL(scope_465, 3);
MAP_DECL(scope_464, 2);
MAP_DECL(scope_463, 1);
MAP_DECL(scope_462, 1);
MAP_DECL(scope_461, 1);
MAP_DECL(scope_460, 3);
MAP_DECL(scope_459, 1);
MAP_DECL(scope_458, 1);
MAP_DECL(scope_457, 1);
MAP_DECL(scope_456, 3);
MAP_DECL(scope_455, 4);
MAP_DECL(scope_454, 1);
MAP_DECL(scope_453, 6);
MAP_DECL(scope_452, 1);
MAP_DECL(scope_451, 3);
MAP_DECL(scope_450, 1);
MAP_DECL(scope_449, 2);
MAP_DECL(scope_448, 52);
MAP_DECL(scope_447, 2);
MAP_DECL(scope_446, 28);
MAP_DECL(scope_445, 1);
MAP_DECL(scope_444, 4);
MAP_DECL(scope_443, 1);
MAP_DECL(scope_442, 9);
MAP_DECL(scope_441, 1);
MAP_DECL(scope_440, 4);
MAP_DECL(scope_439, 1);
MAP_DECL(scope_438, 3);
MAP_DECL(scope_437, 1);
MAP_DECL(scope_436, 1);
MAP_DECL(scope_435, 24);
MAP_DECL(scope_434, 1);
MAP_DECL(scope_433, 2);
MAP_DECL(scope_432, 8);
MAP_DECL(scope_431, 1);
MAP_DECL(scope_430, 4);
MAP_DECL(scope_429, 1);
MAP_DECL(scope_428, 3);
MAP_DECL(scope_427, 15);
MAP_DECL(scope_426, 5);
MAP_DECL(scope_425, 5);
MAP_DECL(scope_424, 5);
MAP_DECL(scope_423, 1);
MAP_DECL(scope_422, 1);
MAP_DECL(scope_421, 5);
MAP_DECL(scope_420, 4);
MAP_DECL(scope_419, 3);
MAP_DECL(scope_418, 22);
MAP_DECL(scope_417, 1);
MAP_DECL(scope_416, 5);
MAP_DECL(scope_415, 1);
MAP_DECL(scope_414, 1);
MAP_DECL(scope_413, 7);
MAP_DECL(scope_412, 2);
MAP_DECL(scope_411, 1);
MAP_DECL(scope_410, 5);
MAP_DECL(scope_409, 1);
MAP_DECL(scope_408, 9);
MAP_DECL(scope_407, 4);
MAP_DECL(scope_406, 15);
MAP_DECL(scope_405, 7);
MAP_DECL(scope_404, 2);
MAP_DECL(scope_403, 14);
MAP_DECL(scope_402, 8);
MAP_DECL(scope_401, 3);
MAP_DECL(scope_400, 15);
MAP_DECL(scope_399, 7);
MAP_DECL(scope_398, 3);
MAP_DECL(scope_397, 4);
MAP_DECL(scope_396, 1);
MAP_DECL(scope_395, 6);
MAP_DECL(scope_394, 11);
MAP_DECL(scope_393, 3);
MAP_DECL(scope_392, 15);
MAP_DECL(scope_391, 3);
MAP_DECL(scope_390, 2);
MAP_DECL(scope_389, 1);
MAP_DECL(scope_388, 6);
MAP_DECL(scope_387, 3);
MAP_DECL(scope_386, 7);
MAP_DECL(scope_385, 3);
MAP_DECL(scope_384, 1);
MAP_DECL(scope_383, 2);
MAP_DECL(scope_382, 1);
MAP_DECL(scope_381, 2);
MAP_DECL(scope_380, 2);
MAP_DECL(scope_379, 2);
MAP_DECL(scope_378, 13);
MAP_DECL(scope_377, 1);
MAP_DECL(scope_376, 2);
MAP_DECL(scope_375, 1);
MAP_DECL(scope_374, 9);
MAP_DECL(scope_373, 5);
MAP_DECL(scope_372, 2);
MAP_DECL(scope_371, 16);
MAP_DECL(scope_370, 2);
MAP_DECL(scope_369, 17);
MAP_DECL(scope_364, 8);
MAP_DECL(scope_363, 6);
MAP_DECL(scope_362, 6);
MAP_DECL(scope_361, 8);
MAP_DECL(scope_360, 18);
MAP_DECL(scope_359, 10);
MAP_DECL(scope_358, 6);
MAP_DECL(scope_357, 6);
MAP_DECL(scope_356, 6);
MAP_DECL(scope_355, 4);
MAP_DECL(scope_354, 17);
MAP_DECL(scope_353, 1);
MAP_DECL(scope_352, 1);
MAP_DECL(scope_351, 3);
MAP_DECL(scope_350, 4);
MAP_DECL(scope_349, 17);
MAP_DECL(scope_348, 17);
MAP_DECL(scope_347, 11);
MAP_DECL(scope_346, 2);
MAP_DECL(scope_345, 2);
MAP_DECL(scope_344, 2);
MAP_DECL(scope_343, 3);
MAP_DECL(scope_342, 3);
MAP_DECL(scope_341, 6);
MAP_DECL(scope_340, 6);
MAP_DECL(scope_339, 18);
MAP_DECL(scope_338, 6);
MAP_DECL(scope_337, 16);
MAP_DECL(scope_336, 10);
MAP_DECL(scope_335, 12);
MAP_DECL(scope_334, 27);
MAP_DECL(scope_333, 26);
MAP_DECL(scope_332, 2);
MAP_DECL(scope_331, 2);
MAP_DECL(scope_330, 2);
MAP_DECL(scope_329, 3);
MAP_DECL(scope_328, 3);
MAP_DECL(scope_327, 6);
MAP_DECL(scope_326, 6);
MAP_DECL(scope_325, 6);
MAP_DECL(scope_324, 6);
MAP_DECL(scope_323, 7);
MAP_DECL(scope_322, 13);
MAP_DECL(scope_321, 6);
MAP_DECL(scope_320, 6);
MAP_DECL(scope_319, 6);
MAP_DECL(scope_318, 12);
MAP_DECL(scope_317, 11);
MAP_DECL(scope_316, 9);
MAP_DECL(scope_315, 18);
MAP_DECL(scope_314, 30);
MAP_DECL(scope_313, 10);
MAP_DECL(scope_312, 13);
MAP_DECL(scope_311, 6);
MAP_DECL(scope_310, 9);
MAP_DECL(scope_309, 23);
MAP_DECL(scope_308, 4);
MAP_DECL(scope_307, 3);
MAP_DECL(scope_306, 7);
MAP_DECL(scope_305, 9);
MAP_DECL(scope_304, 4);
MAP_DECL(scope_303, 5);
MAP_DECL(scope_302, 9);
MAP_DECL(scope_301, 15);
MAP_DECL(scope_300, 6);
MAP_DECL(scope_299, 6);
MAP_DECL(scope_298, 6);
MAP_DECL(scope_297, 6);
MAP_DECL(scope_296, 13);
MAP_DECL(scope_295, 6);
MAP_DECL(scope_294, 13);
MAP_DECL(scope_293, 2);
MAP_DECL(scope_292, 2);
MAP_DECL(scope_291, 2);
MAP_DECL(scope_290, 3);
MAP_DECL(scope_289, 3);
MAP_DECL(scope_288, 6);
MAP_DECL(scope_287, 6);
MAP_DECL(scope_286, 6);
MAP_DECL(scope_285, 2);
MAP_DECL(scope_284, 2);
MAP_DECL(scope_283, 2);
MAP_DECL(scope_282, 3);
MAP_DECL(scope_281, 3);
MAP_DECL(scope_280, 6);
MAP_DECL(scope_279, 2);
MAP_DECL(scope_278, 2);
MAP_DECL(scope_277, 2);
MAP_DECL(scope_276, 3);
MAP_DECL(scope_275, 3);
MAP_DECL(scope_274, 6);
MAP_DECL(scope_273, 2);
MAP_DECL(scope_272, 2);
MAP_DECL(scope_271, 2);
MAP_DECL(scope_270, 3);
MAP_DECL(scope_269, 3);
MAP_DECL(scope_268, 6);
MAP_DECL(scope_267, 12);
MAP_DECL(scope_266, 6);
MAP_DECL(scope_265, 8);
MAP_DECL(scope_264, 6);
MAP_DECL(scope_263, 6);
MAP_DECL(scope_262, 17);
MAP_DECL(scope_261, 9);
MAP_DECL(scope_260, 3);
MAP_DECL(scope_259, 3);
MAP_DECL(scope_258, 3);
MAP_DECL(scope_257, 3);
MAP_DECL(scope_256, 3);
MAP_DECL(scope_255, 4);
MAP_DECL(scope_254, 17);
MAP_DECL(scope_253, 5);
MAP_DECL(scope_252, 22);
MAP_DECL(scope_251, 14);
MAP_DECL(scope_250, 19);
MAP_DECL(scope_249, 12);
MAP_DECL(scope_248, 11);
MAP_DECL(scope_247, 11);
MAP_DECL(scope_246, 11);
MAP_DECL(scope_245, 6);
MAP_DECL(scope_244, 2);
MAP_DECL(scope_243, 2);
MAP_DECL(scope_242, 2);
MAP_DECL(scope_241, 2);
MAP_DECL(scope_240, 3);
MAP_DECL(scope_239, 3);
MAP_DECL(scope_238, 3);
MAP_DECL(scope_237, 6);
MAP_DECL(scope_236, 23);
MAP_DECL(scope_235, 6);
MAP_DECL(scope_234, 2);
MAP_DECL(scope_233, 2);
MAP_DECL(scope_232, 2);
MAP_DECL(scope_231, 3);
MAP_DECL(scope_230, 3);
MAP_DECL(scope_229, 6);
MAP_DECL(scope_228, 2);
MAP_DECL(scope_227, 2);
MAP_DECL(scope_226, 2);
MAP_DECL(scope_225, 3);
MAP_DECL(scope_224, 3);
MAP_DECL(scope_223, 6);
MAP_DECL(scope_222, 6);
MAP_DECL(scope_221, 2);
MAP_DECL(scope_220, 2);
MAP_DECL(scope_219, 2);
MAP_DECL(scope_218, 2);
MAP_DECL(scope_217, 3);
MAP_DECL(scope_216, 3);
MAP_DECL(scope_215, 3);
MAP_DECL(scope_214, 6);
MAP_DECL(scope_213, 6);
MAP_DECL(scope_212, 2);
MAP_DECL(scope_211, 2);
MAP_DECL(scope_210, 2);
MAP_DECL(scope_209, 3);
MAP_DECL(scope_208, 3);
MAP_DECL(scope_207, 6);
MAP_DECL(scope_206, 6);
MAP_DECL(scope_205, 6);
MAP_DECL(scope_204, 8);
MAP_DECL(scope_203, 8);
MAP_DECL(scope_202, 2);
MAP_DECL(scope_201, 2);
MAP_DECL(scope_200, 2);
MAP_DECL(scope_199, 3);
MAP_DECL(scope_198, 3);
MAP_DECL(scope_197, 6);
MAP_DECL(scope_196, 6);
MAP_DECL(scope_195, 8);
MAP_DECL(scope_194, 8);
MAP_DECL(scope_193, 8);
MAP_DECL(scope_192, 8);
MAP_DECL(scope_191, 8);
MAP_DECL(scope_190, 6);
MAP_DECL(scope_189, 9);
MAP_DECL(scope_188, 26);
MAP_DECL(scope_187, 27);
MAP_DECL(scope_186, 9);
MAP_DECL(scope_185, 15);
MAP_DECL(scope_184, 10);
MAP_DECL(scope_183, 6);
MAP_DECL(scope_182, 10);
MAP_DECL(scope_181, 9);
MAP_DECL(scope_180, 2);
MAP_DECL(scope_179, 2);
MAP_DECL(scope_178, 2);
MAP_DECL(scope_177, 2);
MAP_DECL(scope_176, 3);
MAP_DECL(scope_175, 3);
MAP_DECL(scope_174, 3);
MAP_DECL(scope_173, 6);
MAP_DECL(scope_172, 6);
MAP_DECL(scope_171, 2);
MAP_DECL(scope_170, 2);
MAP_DECL(scope_169, 2);
MAP_DECL(scope_168, 2);
MAP_DECL(scope_167, 3);
MAP_DECL(scope_166, 3);
MAP_DECL(scope_165, 3);
MAP_DECL(scope_164, 6);
MAP_DECL(scope_163, 6);
MAP_DECL(scope_162, 81);
MAP_DECL(scope_161, 11);
MAP_DECL(scope_160, 9);
MAP_DECL(scope_159, 25);
MAP_DECL(scope_158, 10);
MAP_DECL(scope_157, 13);
MAP_DECL(scope_156, 12);
MAP_DECL(scope_155, 12);
MAP_DECL(scope_154, 25);
MAP_DECL(scope_153, 6);
MAP_DECL(scope_152, 14);
MAP_DECL(scope_151, 11);
MAP_DECL(scope_150, 21);
MAP_DECL(scope_149, 9);
MAP_DECL(scope_148, 6);
MAP_DECL(scope_147, 2);
MAP_DECL(scope_146, 2);
MAP_DECL(scope_145, 2);
MAP_DECL(scope_144, 2);
MAP_DECL(scope_143, 3);
MAP_DECL(scope_142, 3);
MAP_DECL(scope_141, 3);
MAP_DECL(scope_140, 6);
MAP_DECL(scope_139, 6);
MAP_DECL(scope_138, 2);
MAP_DECL(scope_137, 2);
MAP_DECL(scope_136, 2);
MAP_DECL(scope_135, 2);
MAP_DECL(scope_134, 3);
MAP_DECL(scope_133, 3);
MAP_DECL(scope_132, 3);
MAP_DECL(scope_131, 6);
MAP_DECL(scope_130, 83);
MAP_DECL(scope_129, 8);
MAP_DECL(scope_128, 11);
MAP_DECL(scope_127, 17);
MAP_DECL(scope_126, 17);
MAP_DECL(scope_125, 7);
MAP_DECL(scope_124, 2);
MAP_DECL(scope_123, 2);
MAP_DECL(scope_122, 2);
MAP_DECL(scope_121, 2);
MAP_DECL(scope_120, 3);
MAP_DECL(scope_119, 3);
MAP_DECL(scope_118, 3);
MAP_DECL(scope_117, 6);
MAP_DECL(scope_116, 2);
MAP_DECL(scope_115, 2);
MAP_DECL(scope_114, 2);
MAP_DECL(scope_113, 2);
MAP_DECL(scope_112, 3);
MAP_DECL(scope_111, 3);
MAP_DECL(scope_110, 3);
MAP_DECL(scope_109, 6);
MAP_DECL(scope_108, 6);
MAP_DECL(scope_107, 21);
MAP_DECL(scope_106, 20);
MAP_DECL(scope_105, 8);
MAP_DECL(scope_104, 6);
MAP_DECL(scope_103, 6);
MAP_DECL(scope_102, 14);
MAP_DECL(scope_101, 4);
MAP_DECL(scope_100, 9);
MAP_DECL(scope_99, 4);
MAP_DECL(scope_98, 13);
MAP_DECL(scope_97, 4);
MAP_DECL(scope_96, 3);
MAP_DECL(scope_95, 11);
MAP_DECL(scope_94, 13);
MAP_DECL(scope_93, 9);
MAP_DECL(scope_92, 10);
MAP_DECL(scope_91, 9);
MAP_DECL(scope_90, 6);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 2);
MAP_DECL(scope_87, 2);
MAP_DECL(scope_86, 2);
MAP_DECL(scope_85, 3);
MAP_DECL(scope_84, 3);
MAP_DECL(scope_83, 3);
MAP_DECL(scope_82, 6);
MAP_DECL(scope_81, 6);
MAP_DECL(scope_80, 2);
MAP_DECL(scope_79, 2);
MAP_DECL(scope_78, 2);
MAP_DECL(scope_77, 2);
MAP_DECL(scope_76, 3);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 3);
MAP_DECL(scope_73, 6);
MAP_DECL(scope_72, 23);
MAP_DECL(scope_71, 17);
MAP_DECL(scope_70, 12);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 1);
MAP_DECL(scope_67, 2);
MAP_DECL(scope_66, 1);
MAP_DECL(scope_65, 2);
MAP_DECL(scope_64, 1);
MAP_DECL(scope_63, 1);
MAP_DECL(scope_60, 10);
MAP_DECL(scope_59, 41);
MAP_DECL(scope_58, 24);
MAP_DECL(scope_57, 6);
MAP_DECL(scope_56, 17);
MAP_DECL(scope_55, 9);
MAP_DECL(scope_54, 4);
MAP_DECL(scope_53, 9);
MAP_DECL(scope_52, 3);
MAP_DECL(scope_51, 3);
MAP_DECL(scope_50, 3);
MAP_DECL(scope_49, 5);
MAP_DECL(scope_48, 6);
MAP_DECL(scope_47, 7);
MAP_DECL(scope_46, 7);
MAP_DECL(scope_45, 2);
MAP_DECL(scope_44, 3);
MAP_DECL(scope_43, 3);
MAP_DECL(scope_42, 3);
MAP_DECL(scope_41, 3);
MAP_DECL(scope_40, 43);
MAP_DECL(scope_39, 3);
MAP_DECL(scope_38, 3);
MAP_DECL(scope_37, 3);
MAP_DECL(scope_36, 4);
MAP_DECL(scope_35, 3);
MAP_DECL(scope_34, 3);
MAP_DECL(scope_33, 3);
MAP_DECL(scope_32, 15);
MAP_DECL(scope_31, 16);
MAP_DECL(scope_30, 12);
MAP_DECL(scope_29, 55);
MAP_DECL(scope_28, 8);
MAP_DECL(scope_27, 7);
MAP_DECL(scope_26, 13);
MAP_DECL(scope_25, 13);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 2);
MAP_DECL(scope_22, 1);
MAP_DECL(scope_21, 3);
MAP_DECL(scope_20, 3);
MAP_DECL(scope_19, 5);
MAP_DECL(scope_18, 9);
MAP_DECL(scope_17, 58);
MAP_DECL(scope_16, 28);
MAP_DECL(scope_15, 4);
MAP_DECL(scope_14, 13);
MAP_DECL(scope_13, 37);
MAP_DECL(scope_12, 12);
MAP_DECL(scope_11, 5);
MAP_DECL(scope_10, 5);
MAP_DECL(scope_9, 6);
MAP_DECL(scope_8, 6);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_5, 3);
MAP_DECL(scope_4, 3);
MAP_DECL(scope_3, 3);
MAP_DECL(scope_2, 43);
MAP_DECL(scope_1, 64);
MAP_DECL(scope_0, 1);

/* array__10603 */
static const MappingEntry scope_501_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__10218), 0, &_Type_struct__10218_Utils, NULL, NULL, &scope_433, 1, 0}
};
static const MappingScope scope_501 = {
  "array__10603",
  scope_501_entries, 1,
};

/* array__10600 */
static const MappingEntry scope_500_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_31, sizeof(struct__10218), 0, &_Type_struct__10218_Utils, NULL, NULL, &scope_433, 1, 0}
};
static const MappingScope scope_500 = {
  "array__10600",
  scope_500_entries, 1,
};

/* array_int_32_32 */
static const MappingEntry scope_499_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_32), 0, &_Type_array_int_32_Utils, NULL, NULL, &scope_436, 1, 0}
};
static const MappingScope scope_499 = {
  "array_int_32_32",
  scope_499_entries, 1,
};

/* array__10594 */
static const MappingEntry scope_498_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__10394), 0, &_Type_struct__10394_Utils, NULL, NULL, &scope_449, 1, 0}
};
static const MappingScope scope_498 = {
  "array__10594",
  scope_498_entries, 1,
};

/* array__10591 */
static const MappingEntry scope_497_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10394), 0, &_Type_struct__10394_Utils, NULL, NULL, &scope_449, 1, 0}
};
static const MappingScope scope_497 = {
  "array__10591",
  scope_497_entries, 1,
};

/* array__10588 */
static const MappingEntry scope_496_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__10411), 0, &_Type_struct__10411_Utils, NULL, NULL, &scope_453, 1, 0}
};
static const MappingScope scope_496 = {
  "array__10588",
  scope_496_entries, 1,
};

/* array__10585 */
static const MappingEntry scope_495_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10420), 0, &_Type_array__10420_Utils, NULL, NULL, &scope_454, 1, 0}
};
static const MappingScope scope_495 = {
  "array__10585",
  scope_495_entries, 1,
};

/* array__10582 */
static const MappingEntry scope_494_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10411), 0, &_Type_struct__10411_Utils, NULL, NULL, &scope_453, 1, 0}
};
static const MappingScope scope_494 = {
  "array__10582",
  scope_494_entries, 1,
};

/* array__10579 */
static const MappingEntry scope_493_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10399), 0, &_Type_array__10399_Utils, NULL, NULL, &scope_450, 1, 0}
};
static const MappingScope scope_493 = {
  "array__10579",
  scope_493_entries, 1,
};

/* array__10576 */
static const MappingEntry scope_492_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10062), 0, &_Type_struct__10062_Utils, NULL, NULL, &scope_412, 1, 0}
};
static const MappingScope scope_492 = {
  "array__10576",
  scope_492_entries, 1,
};

/* array_int_64_32 */
static const MappingEntry scope_491_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_64), 0, &_Type_array_int_64_Utils, NULL, NULL, &scope_458, 1, 0}
};
static const MappingScope scope_491 = {
  "array_int_64_32",
  scope_491_entries, 1,
};

/* array_int_200 */
static const MappingEntry scope_490_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_490 = {
  "array_int_200",
  scope_490_entries, 1,
};

/* array__10567 */
static const MappingEntry scope_489_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(array__10442), 0, &_Type_array__10442_Utils, NULL, NULL, &scope_459, 1, 0}
};
static const MappingScope scope_489 = {
  "array__10567",
  scope_489_entries, 1,
};

/* array__10564 */
static const MappingEntry scope_488_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(array__10451), 0, &_Type_array__10451_Utils, NULL, NULL, &scope_461, 1, 0}
};
static const MappingScope scope_488 = {
  "array__10564",
  scope_488_entries, 1,
};

/* array_int_11 */
static const MappingEntry scope_487_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_487 = {
  "array_int_11",
  scope_487_entries, 1,
};

/* array__10558 */
static const MappingEntry scope_486_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10465), 0, &_Type_struct__10465_Utils, NULL, NULL, &scope_465, 1, 0}
};
static const MappingScope scope_486 = {
  "array__10558",
  scope_486_entries, 1,
};

/* array__10555 */
static const MappingEntry scope_485_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(struct__10445), 0, &_Type_struct__10445_Utils, NULL, NULL, &scope_460, 1, 0}
};
static const MappingScope scope_485 = {
  "array__10555",
  scope_485_entries, 1,
};

/* array_int_128_32 */
static const MappingEntry scope_484_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_128), 0, &_Type_array_int_128_Utils, NULL, NULL, &scope_415, 1, 0}
};
static const MappingScope scope_484 = {
  "array_int_128_32",
  scope_484_entries, 1,
};

/* array__10549 */
static const MappingEntry scope_483_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(Q_SCALE), 0, &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_483 = {
  "array__10549",
  scope_483_entries, 1,
};

/* array__10546 */
static const MappingEntry scope_482_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10520), 0, &_Type_array__10520_Utils, NULL, NULL, &scope_475, 1, 0}
};
static const MappingScope scope_482 = {
  "array__10546",
  scope_482_entries, 1,
};

/* array__10543 */
static const MappingEntry scope_481_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10143), 0, &_Type_array__10143_Utils, NULL, NULL, &scope_423, 1, 0}
};
static const MappingScope scope_481 = {
  "array__10543",
  scope_481_entries, 1,
};

/* array_int_99_33 */
static const MappingEntry scope_480_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_99), 0, &_Type_array_int_99_Utils, NULL, NULL, &scope_473, 1, 0}
};
static const MappingScope scope_480 = {
  "array_int_99_33",
  scope_480_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_479_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 0}
};
static const MappingScope scope_479 = {
  "array_int_500_500",
  scope_479_entries, 1,
};

/* array_bool_30 */
static const MappingEntry scope_478_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_478 = {
  "array_bool_30",
  scope_478_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_477_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_477 = {
  "array_int_30",
  scope_477_entries, 1,
};

/* struct__10523 */
static const MappingEntry scope_476_entries[5] = {
  /* 0 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10523, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10523, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10523, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".sections", NULL, sizeof(array__10520), offsetof(struct__10523, sections), &_Type_array__10520_Utils, NULL, NULL, &scope_475, 1, 4},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10523, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_476 = {
  "struct__10523",
  scope_476_entries, 5,
};

/* array__10520 */
static const MappingEntry scope_475_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10513), 0, &_Type_struct__10513_Utils, NULL, NULL, &scope_474, 1, 0}
};
static const MappingScope scope_475 = {
  "array__10520",
  scope_475_entries, 1,
};

/* struct__10513 */
static const MappingEntry scope_474_entries[4] = {
  /* 0 */ { MAP_FIELD, ".d_gradient", NULL, sizeof(kcg_int), offsetof(struct__10513, d_gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".g_a", NULL, sizeof(kcg_int), offsetof(struct__10513, g_a), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".q_gdir", NULL, sizeof(Q_GDIR), offsetof(struct__10513, q_gdir), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10513, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_474 = {
  "struct__10513",
  scope_474_entries, 4,
};

/* array_int_99 */
static const MappingEntry scope_473_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_473 = {
  "array_int_99",
  scope_473_entries, 1,
};

/* struct__10501 */
static const MappingEntry scope_472_entries[6] = {
  /* 0 */ { MAP_FIELD, ".GradientProfile", NULL, sizeof(array__10143), offsetof(struct__10501, GradientProfile), &_Type_array__10143_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 1 */ { MAP_FIELD, ".MA", NULL, sizeof(struct__9871), offsetof(struct__10501, MA), &_Type_struct__9871_Utils, NULL, NULL, &scope_392, 1, 1},
  /* 2 */ { MAP_FIELD, ".MRSP", NULL, sizeof(array__10491), offsetof(struct__10501, MRSP), &_Type_array__10491_Utils, NULL, NULL, &scope_470, 1, 5},
  /* 3 */ { MAP_FIELD, ".freshGradientProfile", NULL, sizeof(kcg_bool), offsetof(struct__10501, freshGradientProfile), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".freshMA", NULL, sizeof(kcg_bool), offsetof(struct__10501, freshMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_FIELD, ".freshMRSP", NULL, sizeof(kcg_bool), offsetof(struct__10501, freshMRSP), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_472 = {
  "struct__10501",
  scope_472_entries, 6,
};

/* struct__10494 */
static const MappingEntry scope_471_entries[4] = {
  /* 0 */ { MAP_FIELD, ".GradientProfile", NULL, sizeof(array__10140), offsetof(struct__10494, GradientProfile), &_Type_array__10140_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_FIELD, ".Gradient_profile_updated", NULL, sizeof(kcg_bool), offsetof(struct__10494, Gradient_profile_updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".MRSP", NULL, sizeof(array__10491), offsetof(struct__10494, MRSP), &_Type_array__10491_Utils, NULL, NULL, &scope_470, 1, 2},
  /* 3 */ { MAP_FIELD, ".MRSP_updated", NULL, sizeof(kcg_bool), offsetof(struct__10494, MRSP_updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_471 = {
  "struct__10494",
  scope_471_entries, 4,
};

/* array__10491 */
static const MappingEntry scope_470_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(struct__10476), 0, &_Type_struct__10476_Utils, NULL, NULL, &scope_467, 1, 0}
};
static const MappingScope scope_470 = {
  "array__10491",
  scope_470_entries, 1,
};

/* array__10488 */
static const MappingEntry scope_469_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(struct__10483), 0, &_Type_struct__10483_Utils, NULL, NULL, &scope_468, 1, 0}
};
static const MappingScope scope_469 = {
  "array__10488",
  scope_469_entries, 1,
};

/* struct__10483 */
static const MappingEntry scope_468_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Index", NULL, sizeof(kcg_int), offsetof(struct__10483, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Loc", NULL, sizeof(kcg_int), offsetof(struct__10483, Loc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_468 = {
  "struct__10483",
  scope_468_entries, 2,
};

/* struct__10476 */
static const MappingEntry scope_467_entries[4] = {
  /* 0 */ { MAP_FIELD, ".Loc_Abs", NULL, sizeof(kcg_int), offsetof(struct__10476, Loc_Abs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__10476, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".MRS", NULL, sizeof(kcg_int), offsetof(struct__10476, MRS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10476, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_467 = {
  "struct__10476",
  scope_467_entries, 4,
};

/* struct__10471 */
static const MappingEntry scope_466_entries[2] = {
  /* 0 */ { MAP_FIELD, ".index", NULL, sizeof(kcg_int), offsetof(struct__10471, index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__10471, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_466 = {
  "struct__10471",
  scope_466_entries, 2,
};

/* struct__10465 */
static const MappingEntry scope_465_entries[3] = {
  /* 0 */ { MAP_FIELD, ".found", NULL, sizeof(kcg_bool), offsetof(struct__10465, found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".index", NULL, sizeof(kcg_int), offsetof(struct__10465, index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__10465, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_465 = {
  "struct__10465",
  scope_465_entries, 3,
};

/* struct__10460 */
static const MappingEntry scope_464_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Found", NULL, sizeof(kcg_bool), offsetof(struct__10460, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Index", NULL, sizeof(kcg_int), offsetof(struct__10460, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_464 = {
  "struct__10460",
  scope_464_entries, 2,
};

/* array_int_33_11 */
static const MappingEntry scope_463_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(array_int_33), 0, &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_463 = {
  "array_int_33_11",
  scope_463_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_462_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_462 = {
  "array_int_33",
  scope_462_entries, 1,
};

/* array__10451 */
static const MappingEntry scope_461_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_363, sizeof(struct__10445), 0, &_Type_struct__10445_Utils, NULL, NULL, &scope_460, 1, 0}
};
static const MappingScope scope_461 = {
  "array__10451",
  scope_461_entries, 1,
};

/* struct__10445 */
static const MappingEntry scope_460_entries[3] = {
  /* 0 */ { MAP_FIELD, ".Category_Index", NULL, sizeof(kcg_int), offsetof(struct__10445, Category_Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Loc", NULL, sizeof(kcg_int), offsetof(struct__10445, Loc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Pos_Index", NULL, sizeof(kcg_int), offsetof(struct__10445, Pos_Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_460 = {
  "struct__10445",
  scope_460_entries, 3,
};

/* array__10442 */
static const MappingEntry scope_459_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(array__10399), 0, &_Type_array__10399_Utils, NULL, NULL, &scope_450, 1, 0}
};
static const MappingScope scope_459 = {
  "array__10442",
  scope_459_entries, 1,
};

/* array_int_64 */
static const MappingEntry scope_458_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_458 = {
  "array_int_64",
  scope_458_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_457_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_457 = {
  "array_int_5",
  scope_457_entries, 1,
};

/* struct__10430 */
static const MappingEntry scope_456_entries[3] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10430, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10430, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10430, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_456 = {
  "struct__10430",
  scope_456_entries, 3,
};

/* struct__10423 */
static const MappingEntry scope_455_entries[4] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10423, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10423, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".sections", NULL, sizeof(array__10420), offsetof(struct__10423, sections), &_Type_array__10420_Utils, NULL, NULL, &scope_454, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10423, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_455 = {
  "struct__10423",
  scope_455_entries, 4,
};

/* array__10420 */
static const MappingEntry scope_454_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10411), 0, &_Type_struct__10411_Utils, NULL, NULL, &scope_453, 1, 0}
};
static const MappingScope scope_454 = {
  "array__10420",
  scope_454_entries, 1,
};

/* struct__10411 */
static const MappingEntry scope_453_entries[6] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__10408), offsetof(struct__10411, SECTIONS_q_diff), &_Type_array__10408_Utils, NULL, NULL, &scope_452, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_static", NULL, sizeof(kcg_int), offsetof(struct__10411, d_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10411, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".q_front", NULL, sizeof(Q_FRONT), offsetof(struct__10411, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".v_static", NULL, sizeof(kcg_int), offsetof(struct__10411, v_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10411, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_453 = {
  "struct__10411",
  scope_453_entries, 6,
};

/* array__10408 */
static const MappingEntry scope_452_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10402), 0, &_Type_struct__10402_Utils, NULL, NULL, &scope_451, 1, 0}
};
static const MappingScope scope_452 = {
  "array__10408",
  scope_452_entries, 1,
};

/* struct__10402 */
static const MappingEntry scope_451_entries[3] = {
  /* 0 */ { MAP_FIELD, ".nc_diff", NULL, sizeof(kcg_int), offsetof(struct__10402, nc_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".v_diff", NULL, sizeof(kcg_int), offsetof(struct__10402, v_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10402, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_451 = {
  "struct__10402",
  scope_451_entries, 3,
};

/* array__10399 */
static const MappingEntry scope_450_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10394), 0, &_Type_struct__10394_Utils, NULL, NULL, &scope_449, 1, 0}
};
static const MappingScope scope_450 = {
  "array__10399",
  scope_450_entries, 1,
};

/* struct__10394 */
static const MappingEntry scope_449_entries[2] = {
  /* 0 */ { MAP_FIELD, ".speed", NULL, sizeof(kcg_int), offsetof(struct__10394, speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__10394, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_449 = {
  "struct__10394",
  scope_449_entries, 2,
};

/* struct__10339 */
static const MappingEntry scope_448_entries[52] = {
  /* 0 */ { MAP_FIELD, ".a_nvmaxredadh1", NULL, sizeof(kcg_real), offsetof(struct__10339, a_nvmaxredadh1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 30},
  /* 1 */ { MAP_FIELD, ".a_nvmaxredadh2", NULL, sizeof(kcg_real), offsetof(struct__10339, a_nvmaxredadh2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 31},
  /* 2 */ { MAP_FIELD, ".a_nvmaxredadh3", NULL, sizeof(kcg_real), offsetof(struct__10339, a_nvmaxredadh3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 32},
  /* 3 */ { MAP_FIELD, ".a_nvp12", NULL, sizeof(kcg_real), offsetof(struct__10339, a_nvp12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 38},
  /* 4 */ { MAP_FIELD, ".a_nvp23", NULL, sizeof(kcg_real), offsetof(struct__10339, a_nvp23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 39},
  /* 5 */ { MAP_FIELD, ".d_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10339, d_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 6 */ { MAP_FIELD, ".d_nvpotrp", NULL, sizeof(kcg_int), offsetof(struct__10339, d_nvpotrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 7 */ { MAP_FIELD, ".d_nvroll", NULL, sizeof(kcg_int), offsetof(struct__10339, d_nvroll), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_FIELD, ".d_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10339, d_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 9 */ { MAP_FIELD, ".d_validnv", NULL, sizeof(kcg_int), offsetof(struct__10339, d_validnv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_FIELD, ".l_nvkrint", NULL, sizeof(L_NVKRINT), offsetof(struct__10339, l_nvkrint), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 47},
  /* 11 */ { MAP_FIELD, ".m_nvavadh", NULL, sizeof(kcg_real), offsetof(struct__10339, m_nvavadh), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 12 */ { MAP_FIELD, ".m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(struct__10339, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 25},
  /* 13 */ { MAP_FIELD, ".m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(struct__10339, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 27},
  /* 14 */ { MAP_FIELD, ".m_nvebcl", NULL, sizeof(M_NVEBCL), offsetof(struct__10339, m_nvebcl), &_Type_M_NVEBCL_Utils, NULL, NULL, NULL, 1, 35},
  /* 15 */ { MAP_FIELD, ".m_nvkrint", NULL, sizeof(kcg_real), offsetof(struct__10339, m_nvkrint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 48},
  /* 16 */ { MAP_FIELD, ".m_nvktint", NULL, sizeof(kcg_real), offsetof(struct__10339, m_nvktint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 51},
  /* 17 */ { MAP_FIELD, ".m_nvkvint_12", NULL, sizeof(kcg_real), offsetof(struct__10339, m_nvkvint_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 41},
  /* 18 */ { MAP_FIELD, ".m_nvkvint_23", NULL, sizeof(kcg_real), offsetof(struct__10339, m_nvkvint_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 42},
  /* 19 */ { MAP_FIELD, ".n_iter_k", NULL, sizeof(kcg_int), offsetof(struct__10339, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 45},
  /* 20 */ { MAP_FIELD, ".n_iter_k_list", NULL, sizeof(array__10290), offsetof(struct__10339, n_iter_k_list), &_Type_array__10290_Utils, NULL, NULL, &scope_443, 1, 46},
  /* 21 */ { MAP_FIELD, ".n_iter_l", NULL, sizeof(kcg_int), offsetof(struct__10339, n_iter_l), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 22 */ { MAP_FIELD, ".n_iter_l_list", NULL, sizeof(array__10265), offsetof(struct__10339, n_iter_l_list), &_Type_array__10265_Utils, NULL, NULL, &scope_439, 1, 50},
  /* 23 */ { MAP_FIELD, ".n_iter_n", NULL, sizeof(kcg_int), offsetof(struct__10339, n_iter_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 24 */ { MAP_FIELD, ".n_iter_n_list", NULL, sizeof(array__10300), offsetof(struct__10339, n_iter_n_list), &_Type_array__10300_Utils, NULL, NULL, &scope_445, 1, 44},
  /* 25 */ { MAP_FIELD, ".n_iter_nid_c", NULL, sizeof(kcg_int), offsetof(struct__10339, n_iter_nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 26 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__10339, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 27 */ { MAP_FIELD, ".nid_c_list", NULL, sizeof(array__10223), offsetof(struct__10339, nid_c_list), &_Type_array__10223_Utils, NULL, NULL, &scope_434, 1, 7},
  /* 28 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__10339, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 29 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10339, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 30 */ { MAP_FIELD, ".q_nvdriver_adhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(struct__10339, q_nvdriver_adhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_FIELD, ".q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(struct__10339, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 16},
  /* 32 */ { MAP_FIELD, ".q_nvguiperm", NULL, sizeof(Q_NVGUIPERM), offsetof(struct__10339, q_nvguiperm), &_Type_Q_NVGUIPERM_Utils, NULL, NULL, NULL, 1, 17},
  /* 33 */ { MAP_FIELD, ".q_nvinhsnicperm", NULL, sizeof(Q_NVINHSMICPERM), offsetof(struct__10339, q_nvinhsnicperm), &_Type_Q_NVINHSMICPERM_Utils, NULL, NULL, NULL, 1, 19},
  /* 34 */ { MAP_FIELD, ".q_nvkint", NULL, sizeof(Q_NVKINT), offsetof(struct__10339, q_nvkint), &_Type_Q_NVKINT_Utils, NULL, NULL, NULL, 1, 36},
  /* 35 */ { MAP_FIELD, ".q_nvkvintset", NULL, sizeof(Q_NVKVINTSET), offsetof(struct__10339, q_nvkvintset), &_Type_Q_NVKVINTSET_Utils, NULL, NULL, NULL, 1, 37},
  /* 36 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__10339, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 37 */ { MAP_FIELD, ".q_nvsbfbperm", NULL, sizeof(Q_NVSBFBPERM), offsetof(struct__10339, q_nvsbfbperm), &_Type_Q_NVSBFBPERM_Utils, NULL, NULL, NULL, 1, 18},
  /* 38 */ { MAP_FIELD, ".q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(struct__10339, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 15},
  /* 39 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10339, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 40 */ { MAP_FIELD, ".t_nvcontact", NULL, sizeof(kcg_int), offsetof(struct__10339, t_nvcontact), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 41 */ { MAP_FIELD, ".t_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10339, t_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 42 */ { MAP_FIELD, ".v_nvallowovtrp", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvallowovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 43 */ { MAP_FIELD, ".v_nvkvint", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvkvint), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 44 */ { MAP_FIELD, ".v_nvlimsuperv", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvlimsuperv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 45 */ { MAP_FIELD, ".v_nvonsight", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvonsight), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 46 */ { MAP_FIELD, ".v_nvrel", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvrel), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 47 */ { MAP_FIELD, ".v_nvshunt", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvshunt), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 48 */ { MAP_FIELD, ".v_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 49 */ { MAP_FIELD, ".v_nvsupovtrp", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvsupovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 50 */ { MAP_FIELD, ".v_nvunfit", NULL, sizeof(kcg_int), offsetof(struct__10339, v_nvunfit), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 51 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10339, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_448 = {
  "struct__10339",
  scope_448_entries, 52,
};

/* struct__10334 */
static const MappingEntry scope_447_entries[2] = {
  /* 0 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__10334, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".v_nvlimsuperv", NULL, sizeof(kcg_int), offsetof(struct__10334, v_nvlimsuperv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_447 = {
  "struct__10334",
  scope_447_entries, 2,
};

/* struct__10303 */
static const MappingEntry scope_446_entries[28] = {
  /* 0 */ { MAP_FIELD, ".a_nvmaxredadh1", NULL, sizeof(kcg_real), offsetof(struct__10303, a_nvmaxredadh1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".a_nvmaxredadh2", NULL, sizeof(kcg_real), offsetof(struct__10303, a_nvmaxredadh2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".a_nvmaxredadh3", NULL, sizeof(kcg_real), offsetof(struct__10303, a_nvmaxredadh3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".a_nvp12", NULL, sizeof(kcg_real), offsetof(struct__10303, a_nvp12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 4 */ { MAP_FIELD, ".a_nvp23", NULL, sizeof(kcg_real), offsetof(struct__10303, a_nvp23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 5 */ { MAP_FIELD, ".l_nvkrint", NULL, sizeof(L_NVKRINT), offsetof(struct__10303, l_nvkrint), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 23},
  /* 6 */ { MAP_FIELD, ".m_nvavadh", NULL, sizeof(kcg_real), offsetof(struct__10303, m_nvavadh), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".m_nvebcl", NULL, sizeof(M_NVEBCL), offsetof(struct__10303, m_nvebcl), &_Type_M_NVEBCL_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_FIELD, ".m_nvkrint", NULL, sizeof(kcg_real), offsetof(struct__10303, m_nvkrint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 24},
  /* 9 */ { MAP_FIELD, ".m_nvktint", NULL, sizeof(kcg_real), offsetof(struct__10303, m_nvktint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 27},
  /* 10 */ { MAP_FIELD, ".m_nvkvint_12", NULL, sizeof(kcg_real), offsetof(struct__10303, m_nvkvint_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_FIELD, ".m_nvkvint_23", NULL, sizeof(kcg_real), offsetof(struct__10303, m_nvkvint_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_FIELD, ".n_iter_k", NULL, sizeof(kcg_int), offsetof(struct__10303, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 13 */ { MAP_FIELD, ".n_iter_k_list", NULL, sizeof(array__10290), offsetof(struct__10303, n_iter_k_list), &_Type_array__10290_Utils, NULL, NULL, &scope_443, 1, 22},
  /* 14 */ { MAP_FIELD, ".n_iter_l", NULL, sizeof(kcg_int), offsetof(struct__10303, n_iter_l), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 15 */ { MAP_FIELD, ".n_iter_l_list", NULL, sizeof(array__10265), offsetof(struct__10303, n_iter_l_list), &_Type_array__10265_Utils, NULL, NULL, &scope_439, 1, 26},
  /* 16 */ { MAP_FIELD, ".n_iter_n", NULL, sizeof(kcg_int), offsetof(struct__10303, n_iter_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_FIELD, ".n_iter_n_list", NULL, sizeof(array__10300), offsetof(struct__10303, n_iter_n_list), &_Type_array__10300_Utils, NULL, NULL, &scope_445, 1, 20},
  /* 18 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__10303, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 19 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10303, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_FIELD, ".q_nvguiperm", NULL, sizeof(Q_NVGUIPERM), offsetof(struct__10303, q_nvguiperm), &_Type_Q_NVGUIPERM_Utils, NULL, NULL, NULL, 1, 4},
  /* 21 */ { MAP_FIELD, ".q_nvinhsnicperm", NULL, sizeof(Q_NVINHSMICPERM), offsetof(struct__10303, q_nvinhsnicperm), &_Type_Q_NVINHSMICPERM_Utils, NULL, NULL, NULL, 1, 6},
  /* 22 */ { MAP_FIELD, ".q_nvkint", NULL, sizeof(Q_NVKINT), offsetof(struct__10303, q_nvkint), &_Type_Q_NVKINT_Utils, NULL, NULL, NULL, 1, 12},
  /* 23 */ { MAP_FIELD, ".q_nvkvintset", NULL, sizeof(Q_NVKVINTSET), offsetof(struct__10303, q_nvkvintset), &_Type_Q_NVKVINTSET_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_FIELD, ".q_nvsbfbperm", NULL, sizeof(Q_NVSBFBPERM), offsetof(struct__10303, q_nvsbfbperm), &_Type_Q_NVSBFBPERM_Utils, NULL, NULL, NULL, 1, 5},
  /* 25 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10303, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 26 */ { MAP_FIELD, ".v_nvkvint", NULL, sizeof(kcg_int), offsetof(struct__10303, v_nvkvint), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 27 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10303, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_446 = {
  "struct__10303",
  scope_446_entries, 28,
};

/* array__10300 */
static const MappingEntry scope_445_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10293), 0, &_Type_struct__10293_Utils, NULL, NULL, &scope_444, 1, 0}
};
static const MappingScope scope_445 = {
  "array__10300",
  scope_445_entries, 1,
};

/* struct__10293 */
static const MappingEntry scope_444_entries[4] = {
  /* 0 */ { MAP_FIELD, ".m_nvkvint_n_12", NULL, sizeof(kcg_real), offsetof(struct__10293, m_nvkvint_n_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_nvkvint_n_23", NULL, sizeof(kcg_real), offsetof(struct__10293, m_nvkvint_n_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".v_nvkvint_n", NULL, sizeof(kcg_int), offsetof(struct__10293, v_nvkvint_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10293, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_444 = {
  "struct__10293",
  scope_444_entries, 4,
};

/* array__10290 */
static const MappingEntry scope_443_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10278), 0, &_Type_struct__10278_Utils, NULL, NULL, &scope_442, 1, 0}
};
static const MappingScope scope_443 = {
  "array__10290",
  scope_443_entries, 1,
};

/* struct__10278 */
static const MappingEntry scope_442_entries[9] = {
  /* 0 */ { MAP_FIELD, ".a_nvp12_k", NULL, sizeof(kcg_real), offsetof(struct__10278, a_nvp12_k), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".a_nvp23_k", NULL, sizeof(kcg_real), offsetof(struct__10278, a_nvp23_k), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".m_nvkvint_k_12", NULL, sizeof(kcg_real), offsetof(struct__10278, m_nvkvint_k_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".m_nvkvint_k_23", NULL, sizeof(kcg_real), offsetof(struct__10278, m_nvkvint_k_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".n_iter_k_m", NULL, sizeof(kcg_int), offsetof(struct__10278, n_iter_k_m), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_FIELD, ".n_iter_k_m_list", NULL, sizeof(array__10275), offsetof(struct__10278, n_iter_k_m_list), &_Type_array__10275_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_nvkvintset_k", NULL, sizeof(Q_NVKVINTSET), offsetof(struct__10278, q_nvkvintset_k), &_Type_Q_NVKVINTSET_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".v_nvkvint_k", NULL, sizeof(kcg_int), offsetof(struct__10278, v_nvkvint_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10278, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_442 = {
  "struct__10278",
  scope_442_entries, 9,
};

/* array__10275 */
static const MappingEntry scope_441_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10268), 0, &_Type_struct__10268_Utils, NULL, NULL, &scope_440, 1, 0}
};
static const MappingScope scope_441 = {
  "array__10275",
  scope_441_entries, 1,
};

/* struct__10268 */
static const MappingEntry scope_440_entries[4] = {
  /* 0 */ { MAP_FIELD, ".m_nvkvint_km_12", NULL, sizeof(kcg_real), offsetof(struct__10268, m_nvkvint_km_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_nvkvint_km_23", NULL, sizeof(kcg_real), offsetof(struct__10268, m_nvkvint_km_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".v_nvkvint_k_m", NULL, sizeof(kcg_int), offsetof(struct__10268, v_nvkvint_k_m), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10268, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_440 = {
  "struct__10268",
  scope_440_entries, 4,
};

/* array__10265 */
static const MappingEntry scope_439_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10259), 0, &_Type_struct__10259_Utils, NULL, NULL, &scope_438, 1, 0}
};
static const MappingScope scope_439 = {
  "array__10265",
  scope_439_entries, 1,
};

/* struct__10259 */
static const MappingEntry scope_438_entries[3] = {
  /* 0 */ { MAP_FIELD, ".l_nvkrint_l", NULL, sizeof(L_NVKRINT), offsetof(struct__10259, l_nvkrint_l), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".m_nvkrint_l", NULL, sizeof(kcg_real), offsetof(struct__10259, m_nvkrint_l), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10259, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_438 = {
  "struct__10259",
  scope_438_entries, 3,
};

/* array_int_24 */
static const MappingEntry scope_437_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_437 = {
  "array_int_24",
  scope_437_entries, 1,
};

/* array_int_32 */
static const MappingEntry scope_436_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_436 = {
  "array_int_32",
  scope_436_entries, 1,
};

/* struct__10226 */
static const MappingEntry scope_435_entries[24] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__10223), offsetof(struct__10226, SECTIONS), &_Type_array__10223_Utils, NULL, NULL, &scope_434, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10226, d_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 2 */ { MAP_FIELD, ".d_nvpotrp", NULL, sizeof(kcg_int), offsetof(struct__10226, d_nvpotrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 3 */ { MAP_FIELD, ".d_nvroll", NULL, sizeof(kcg_int), offsetof(struct__10226, d_nvroll), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_FIELD, ".d_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10226, d_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 5 */ { MAP_FIELD, ".d_validnv", NULL, sizeof(kcg_int), offsetof(struct__10226, d_validnv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(struct__10226, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 19},
  /* 7 */ { MAP_FIELD, ".m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(struct__10226, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 21},
  /* 8 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10226, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10226, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_FIELD, ".q_nvdriver_adhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(struct__10226, q_nvdriver_adhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 23},
  /* 11 */ { MAP_FIELD, ".q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(struct__10226, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(struct__10226, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10226, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_FIELD, ".t_nvcontact", NULL, sizeof(kcg_int), offsetof(struct__10226, t_nvcontact), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_FIELD, ".t_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10226, t_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_FIELD, ".v_nvallowovtrp", NULL, sizeof(kcg_int), offsetof(struct__10226, v_nvallowovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_FIELD, ".v_nvonsight", NULL, sizeof(kcg_int), offsetof(struct__10226, v_nvonsight), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 18 */ { MAP_FIELD, ".v_nvrel", NULL, sizeof(kcg_int), offsetof(struct__10226, v_nvrel), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 19 */ { MAP_FIELD, ".v_nvshunt", NULL, sizeof(kcg_int), offsetof(struct__10226, v_nvshunt), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 20 */ { MAP_FIELD, ".v_nvsopovtrp", NULL, sizeof(kcg_int), offsetof(struct__10226, v_nvsopovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 21 */ { MAP_FIELD, ".v_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10226, v_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 22 */ { MAP_FIELD, ".v_nvunfit", NULL, sizeof(kcg_int), offsetof(struct__10226, v_nvunfit), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10226, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_435 = {
  "struct__10226",
  scope_435_entries, 24,
};

/* array__10223 */
static const MappingEntry scope_434_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10218), 0, &_Type_struct__10218_Utils, NULL, NULL, &scope_433, 1, 0}
};
static const MappingScope scope_434 = {
  "array__10223",
  scope_434_entries, 1,
};

/* struct__10218 */
static const MappingEntry scope_433_entries[2] = {
  /* 0 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__10218, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10218, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_433 = {
  "struct__10218",
  scope_433_entries, 2,
};

/* struct__10207 */
static const MappingEntry scope_432_entries[8] = {
  /* 0 */ { MAP_FIELD, ".AckDistance", NULL, sizeof(kcg_int), offsetof(struct__10207, AckDistance), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".ConditionalTransitionPriorities", NULL, sizeof(array__10204), offsetof(struct__10207, ConditionalTransitionPriorities), &_Type_array__10204_Utils, NULL, NULL, &scope_431, 1, 6},
  /* 2 */ { MAP_FIELD, ".ERTMS_capabilities", NULL, sizeof(struct__10154), offsetof(struct__10207, ERTMS_capabilities), &_Type_struct__10154_Utils, NULL, NULL, &scope_425, 1, 4},
  /* 3 */ { MAP_FIELD, ".Flags", NULL, sizeof(struct__10170), offsetof(struct__10207, Flags), &_Type_struct__10170_Utils, NULL, NULL, &scope_427, 1, 0},
  /* 4 */ { MAP_FIELD, ".Mode_Profile_Onboard", NULL, sizeof(struct__10162), offsetof(struct__10207, Mode_Profile_Onboard), &_Type_struct__10162_Utils, NULL, NULL, &scope_426, 1, 3},
  /* 5 */ { MAP_FIELD, ".ReceivedTargetSpeed", NULL, sizeof(kcg_int), offsetof(struct__10207, ReceivedTargetSpeed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Reversing_Data", NULL, sizeof(struct__10146), offsetof(struct__10207, Reversing_Data), &_Type_struct__10146_Utils, NULL, NULL, &scope_424, 1, 5},
  /* 7 */ { MAP_FIELD, ".TransitionPriorities", NULL, sizeof(array__10194), offsetof(struct__10207, TransitionPriorities), &_Type_array__10194_Utils, NULL, NULL, &scope_429, 1, 7}
};
static const MappingScope scope_432 = {
  "struct__10207",
  scope_432_entries, 8,
};

/* array__10204 */
static const MappingEntry scope_431_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10197), 0, &_Type_struct__10197_Utils, NULL, NULL, &scope_430, 1, 0}
};
static const MappingScope scope_431 = {
  "array__10204",
  scope_431_entries, 1,
};

/* struct__10197 */
static const MappingEntry scope_430_entries[4] = {
  /* 0 */ { MAP_FIELD, ".l_ackleveltr", NULL, sizeof(kcg_int), offsetof(struct__10197, l_ackleveltr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".m_leveltr", NULL, sizeof(M_LEVELTR), offsetof(struct__10197, m_leveltr), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(kcg_int), offsetof(struct__10197, nid_ntc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10197, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_430 = {
  "struct__10197",
  scope_430_entries, 4,
};

/* array__10194 */
static const MappingEntry scope_429_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10188), 0, &_Type_struct__10188_Utils, NULL, NULL, &scope_428, 1, 0}
};
static const MappingScope scope_429 = {
  "array__10194",
  scope_429_entries, 1,
};

/* struct__10188 */
static const MappingEntry scope_428_entries[3] = {
  /* 0 */ { MAP_FIELD, ".m_leveltr", NULL, sizeof(M_LEVELTR), offsetof(struct__10188, m_leveltr), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(kcg_int), offsetof(struct__10188, nid_ntc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10188, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_428 = {
  "struct__10188",
  scope_428_entries, 3,
};

/* struct__10170 */
static const MappingEntry scope_427_entries[15] = {
  /* 0 */ { MAP_FIELD, ".ER_BG_SystemVersion", NULL, sizeof(kcg_bool), offsetof(struct__10170, ER_BG_SystemVersion), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_FIELD, ".Emergency_Stop_Message_Received", NULL, sizeof(kcg_bool), offsetof(struct__10170, Emergency_Stop_Message_Received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_FIELD, ".GradientProfile_available", NULL, sizeof(kcg_bool), offsetof(struct__10170, GradientProfile_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".LinkingReactToTrip", NULL, sizeof(kcg_bool), offsetof(struct__10170, LinkingReactToTrip), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".MA_L1_received", NULL, sizeof(kcg_bool), offsetof(struct__10170, MA_L1_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".MA_L23_received", NULL, sizeof(kcg_bool), offsetof(struct__10170, MA_L23_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".MA_available", NULL, sizeof(kcg_bool), offsetof(struct__10170, MA_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 7 */ { MAP_FIELD, ".RBCAck_TR_EB_Revoiked", NULL, sizeof(kcg_bool), offsetof(struct__10170, RBCAck_TR_EB_Revoiked), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_FIELD, ".RBC_Authorized_SR", NULL, sizeof(kcg_bool), offsetof(struct__10170, RBC_Authorized_SR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".SSP_available", NULL, sizeof(kcg_bool), offsetof(struct__10170, SSP_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_FIELD, ".Shunting_Granted", NULL, sizeof(kcg_bool), offsetof(struct__10170, Shunting_Granted), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_FIELD, ".StopIfInSR", NULL, sizeof(kcg_bool), offsetof(struct__10170, StopIfInSR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_FIELD, ".StopIfInShunting", NULL, sizeof(kcg_bool), offsetof(struct__10170, StopIfInShunting), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_FIELD, ".T_NV_ContactOverpass", NULL, sizeof(kcg_bool), offsetof(struct__10170, T_NV_ContactOverpass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_FIELD, ".TripOrder_GivenByBalise", NULL, sizeof(kcg_bool), offsetof(struct__10170, TripOrder_GivenByBalise), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_427 = {
  "struct__10170",
  scope_427_entries, 15,
};

/* struct__10162 */
static const MappingEntry scope_426_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Distance", NULL, sizeof(kcg_int), offsetof(struct__10162, Distance), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Length", NULL, sizeof(kcg_int), offsetof(struct__10162, Length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Length_Ack", NULL, sizeof(kcg_int), offsetof(struct__10162, Length_Ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".Mode", NULL, sizeof(T_MA_Level_And_Mode_Types_Pkg), offsetof(struct__10162, Mode), &_Type_T_MA_Level_And_Mode_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".Speed", NULL, sizeof(kcg_int), offsetof(struct__10162, Speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_426 = {
  "struct__10162",
  scope_426_entries, 5,
};

/* struct__10154 */
static const MappingEntry scope_425_entries[5] = {
  /* 0 */ { MAP_FIELD, ".L0", NULL, sizeof(kcg_bool), offsetof(struct__10154, L0), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".L1", NULL, sizeof(kcg_bool), offsetof(struct__10154, L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".L2", NULL, sizeof(kcg_bool), offsetof(struct__10154, L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".L3", NULL, sizeof(kcg_bool), offsetof(struct__10154, L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".NTC", NULL, sizeof(kcg_bool), offsetof(struct__10154, NTC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_425 = {
  "struct__10154",
  scope_425_entries, 5,
};

/* struct__10146 */
static const MappingEntry scope_424_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Available", NULL, sizeof(kcg_bool), offsetof(struct__10146, Available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Dist_Run", NULL, sizeof(kcg_int), offsetof(struct__10146, Dist_Run), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Dist_Start", NULL, sizeof(kcg_int), offsetof(struct__10146, Dist_Start), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Length", NULL, sizeof(kcg_int), offsetof(struct__10146, Length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".Speed", NULL, sizeof(kcg_int), offsetof(struct__10146, Speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_424 = {
  "struct__10146",
  scope_424_entries, 5,
};

/* array__10143 */
static const MappingEntry scope_423_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(struct__10132), 0, &_Type_struct__10132_Utils, NULL, NULL, &scope_421, 1, 0}
};
static const MappingScope scope_423 = {
  "array__10143",
  scope_423_entries, 1,
};

/* array__10140 */
static const MappingEntry scope_422_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(struct__10125), 0, &_Type_struct__10125_Utils, NULL, NULL, &scope_420, 1, 0}
};
static const MappingScope scope_422 = {
  "array__10140",
  scope_422_entries, 1,
};

/* struct__10132 */
static const MappingEntry scope_421_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Gradient", NULL, sizeof(kcg_int), offsetof(struct__10132, Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_Gradient", NULL, sizeof(kcg_int), offsetof(struct__10132, L_Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".Loc_Absolute", NULL, sizeof(kcg_int), offsetof(struct__10132, Loc_Absolute), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__10132, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10132, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_421 = {
  "struct__10132",
  scope_421_entries, 5,
};

/* struct__10125 */
static const MappingEntry scope_420_entries[4] = {
  /* 0 */ { MAP_FIELD, ".begin_section", NULL, sizeof(kcg_int), offsetof(struct__10125, begin_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".end_section", NULL, sizeof(kcg_int), offsetof(struct__10125, end_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".gradient", NULL, sizeof(kcg_int), offsetof(struct__10125, gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10125, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_420 = {
  "struct__10125",
  scope_420_entries, 4,
};

/* struct__10119 */
static const MappingEntry scope_419_entries[3] = {
  /* 0 */ { MAP_FIELD, ".Mode", NULL, sizeof(M_MODE), offsetof(struct__10119, Mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__10119, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10119, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_419 = {
  "struct__10119",
  scope_419_entries, 3,
};

/* struct__10094 */
static const MappingEntry scope_418_entries[22] = {
  /* 0 */ { MAP_FIELD, ".d_dp", NULL, sizeof(kcg_int), offsetof(struct__10094, d_dp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_FIELD, ".d_endtimerstartloc", NULL, sizeof(kcg_int), offsetof(struct__10094, d_endtimerstartloc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_FIELD, ".d_ol", NULL, sizeof(kcg_int), offsetof(struct__10094, d_ol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 3 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__10094, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".d_startol", NULL, sizeof(kcg_int), offsetof(struct__10094, d_startol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 5 */ { MAP_FIELD, ".l_endsection", NULL, sizeof(kcg_int), offsetof(struct__10094, l_endsection), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10094, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".q_dangerpoint", NULL, sizeof(Q_DANGERPOINT), offsetof(struct__10094, q_dangerpoint), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10094, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".q_endtimer", NULL, sizeof(Q_ENDTIMER), offsetof(struct__10094, q_endtimer), &_Type_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".q_overlap", NULL, sizeof(Q_OVERLAP), offsetof(struct__10094, q_overlap), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10094, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(Q_SECTIONTIMER), offsetof(struct__10094, q_sectiontimer), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_FIELD, ".sections", NULL, sizeof(array__10091), offsetof(struct__10094, sections), &_Type_array__10091_Utils, NULL, NULL, &scope_417, 1, 6},
  /* 14 */ { MAP_FIELD, ".t_endtimer", NULL, sizeof(kcg_int), offsetof(struct__10094, t_endtimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_FIELD, ".t_loa", NULL, sizeof(kcg_int), offsetof(struct__10094, t_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_FIELD, ".t_ol", NULL, sizeof(kcg_int), offsetof(struct__10094, t_ol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(struct__10094, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 18 */ { MAP_FIELD, ".v_loa", NULL, sizeof(kcg_int), offsetof(struct__10094, v_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 19 */ { MAP_FIELD, ".v_releasedp", NULL, sizeof(kcg_int), offsetof(struct__10094, v_releasedp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 20 */ { MAP_FIELD, ".v_releaseol", NULL, sizeof(kcg_int), offsetof(struct__10094, v_releaseol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10094, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_418 = {
  "struct__10094",
  scope_418_entries, 22,
};

/* array__10091 */
static const MappingEntry scope_417_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10083), 0, &_Type_struct__10083_Utils, NULL, NULL, &scope_416, 1, 0}
};
static const MappingScope scope_417 = {
  "array__10091",
  scope_417_entries, 1,
};

/* struct__10083 */
static const MappingEntry scope_416_entries[5] = {
  /* 0 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__10083, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".l_section", NULL, sizeof(kcg_int), offsetof(struct__10083, l_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(Q_SECTIONTIMER), offsetof(struct__10083, q_sectiontimer), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(struct__10083, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10083, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_416 = {
  "struct__10083",
  scope_416_entries, 5,
};

/* array_int_128 */
static const MappingEntry scope_415_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_415 = {
  "array_int_128",
  scope_415_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_414_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_414 = {
  "array_int_6",
  scope_414_entries, 1,
};

/* struct__10067 */
static const MappingEntry scope_413_entries[7] = {
  /* 0 */ { MAP_FIELD, ".BG_Common_Header", NULL, sizeof(struct__9944), offsetof(struct__10067, BG_Common_Header), &_Type_struct__9944_Utils, NULL, NULL, &scope_400, 1, 3},
  /* 1 */ { MAP_FIELD, ".Radio_Common_Header", NULL, sizeof(struct__10011), offsetof(struct__10067, Radio_Common_Header), &_Type_struct__10011_Utils, NULL, NULL, &scope_406, 1, 4},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__10062), offsetof(struct__10067, packets), &_Type_struct__10062_Utils, NULL, NULL, &scope_412, 1, 5},
  /* 3 */ { MAP_FIELD, ".radioMetadata", NULL, sizeof(struct__10036), offsetof(struct__10067, radioMetadata), &_Type_struct__10036_Utils, NULL, NULL, &scope_408, 1, 2},
  /* 4 */ { MAP_FIELD, ".sendingRBC", NULL, sizeof(struct__10029), offsetof(struct__10067, sendingRBC), &_Type_struct__10029_Utils, NULL, NULL, &scope_407, 1, 6},
  /* 5 */ { MAP_FIELD, ".source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(struct__10067, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10067, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_413 = {
  "struct__10067",
  scope_413_entries, 7,
};

/* struct__10062 */
static const MappingEntry scope_412_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__10062, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__10059), offsetof(struct__10062, PacketHeaders), &_Type_array__10059_Utils, NULL, NULL, &scope_411, 1, 0}
};
static const MappingScope scope_412 = {
  "struct__10062",
  scope_412_entries, 2,
};

/* array__10059 */
static const MappingEntry scope_411_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__10051), 0, &_Type_struct__10051_Utils, NULL, NULL, &scope_410, 1, 0}
};
static const MappingScope scope_411 = {
  "array__10059",
  scope_411_entries, 1,
};

/* struct__10051 */
static const MappingEntry scope_410_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__10051, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__10051, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10051, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__10051, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10051, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_410 = {
  "struct__10051",
  scope_410_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_409_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_409 = {
  "array_int_500",
  scope_409_entries, 1,
};

/* struct__10036 */
static const MappingEntry scope_408_entries[9] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_bool), offsetof(struct__10036, d_emergencystop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_bool), offsetof(struct__10036, d_ref), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_bool), offsetof(struct__10036, d_sr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_bool), offsetof(struct__10036, m_version), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_bool), offsetof(struct__10036, nid_em), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_bool), offsetof(struct__10036, q_dir), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_bool), offsetof(struct__10036, q_scale), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_bool), offsetof(struct__10036, t_sh_rqst), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_bool), offsetof(struct__10036, t_train_reference), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_408 = {
  "struct__10036",
  scope_408_entries, 9,
};

/* struct__10029 */
static const MappingEntry scope_407_entries[4] = {
  /* 0 */ { MAP_FIELD, ".device_id", NULL, sizeof(kcg_int), offsetof(struct__10029, device_id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__10029, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".rbc_id", NULL, sizeof(kcg_int), offsetof(struct__10029, rbc_id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10029, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_407 = {
  "struct__10029",
  scope_407_entries, 4,
};

/* struct__10011 */
static const MappingEntry scope_406_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__10011, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__10011, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__10011, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10011, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__10011, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__10011, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10011, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10011, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10011, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10011, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__10011, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__10011, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_real), offsetof(struct__10011, t_sh_rqst), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10011, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_real), offsetof(struct__10011, t_train_reference), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_406 = {
  "struct__10011",
  scope_406_entries, 15,
};

/* struct__10001 */
static const MappingEntry scope_405_entries[7] = {
  /* 0 */ { MAP_FIELD, ".centerDetectionAcc_DefaultValue", NULL, sizeof(struct__9889), offsetof(struct__10001, centerDetectionAcc_DefaultValue), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 6},
  /* 1 */ { MAP_FIELD, ".d_baliseAntenna_2_frontend", NULL, sizeof(struct__9889), offsetof(struct__10001, d_baliseAntenna_2_frontend), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 3},
  /* 2 */ { MAP_FIELD, ".d_frontend_2_rearend", NULL, sizeof(struct__9889), offsetof(struct__10001, d_frontend_2_rearend), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 4},
  /* 3 */ { MAP_FIELD, ".l_train", NULL, sizeof(kcg_int), offsetof(struct__10001, l_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".locationAccuracy_DefaultValue", NULL, sizeof(struct__9889), offsetof(struct__10001, locationAccuracy_DefaultValue), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 5},
  /* 5 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(struct__10001, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_FIELD, ".nid_operational", NULL, sizeof(kcg_int), offsetof(struct__10001, nid_operational), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_405 = {
  "struct__10001",
  scope_405_entries, 7,
};

/* struct__9996 */
static const MappingEntry scope_404_entries[2] = {
  /* 0 */ { MAP_FIELD, ".driverSelectsStart", NULL, sizeof(kcg_bool), offsetof(struct__9996, driverSelectsStart), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".trackAheadFree", NULL, sizeof(kcg_bool), offsetof(struct__9996, trackAheadFree), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_404 = {
  "struct__9996",
  scope_404_entries, 2,
};

/* struct__9979 */
static const MappingEntry scope_403_entries[14] = {
  /* 0 */ { MAP_FIELD, ".LRBG", NULL, sizeof(struct__9968), offsetof(struct__9979, LRBG), &_Type_struct__9968_Utils, NULL, NULL, &scope_402, 1, 8},
  /* 1 */ { MAP_FIELD, ".estimatedFrontEndPosition", NULL, sizeof(kcg_int), offsetof(struct__9979, estimatedFrontEndPosition), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".linkingIsUsedOnboard", NULL, sizeof(kcg_bool), offsetof(struct__9979, linkingIsUsedOnboard), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".maxSafeFrontEndPostion", NULL, sizeof(kcg_int), offsetof(struct__9979, maxSafeFrontEndPostion), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".minSafeFrontEndPosition", NULL, sizeof(kcg_int), offsetof(struct__9979, minSafeFrontEndPosition), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(struct__9979, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".nominalOrReverseToLRBG", NULL, sizeof(Q_DLRBG), offsetof(struct__9979, nominalOrReverseToLRBG), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".prvLRBG", NULL, sizeof(struct__9968), offsetof(struct__9979, prvLRBG), &_Type_struct__9968_Utils, NULL, NULL, &scope_402, 1, 9},
  /* 8 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(struct__9979, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".trainOrientationToLRBG", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9979, trainOrientationToLRBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".trainPosition", NULL, sizeof(struct__9889), offsetof(struct__9979, trainPosition), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 4},
  /* 11 */ { MAP_FIELD, ".trainPositionIsUnknown", NULL, sizeof(kcg_bool), offsetof(struct__9979, trainPositionIsUnknown), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_FIELD, ".trainRunningDirectionToLRBG", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9979, trainRunningDirectionToLRBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9979, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_403 = {
  "struct__9979",
  scope_403_entries, 14,
};

/* struct__9968 */
static const MappingEntry scope_402_entries[8] = {
  /* 0 */ { MAP_FIELD, ".infoFromLinking", NULL, sizeof(struct__9909), offsetof(struct__9968, infoFromLinking), &_Type_struct__9909_Utils, NULL, NULL, &scope_395, 1, 6},
  /* 1 */ { MAP_FIELD, ".infoFromPassing", NULL, sizeof(struct__9962), offsetof(struct__9968, infoFromPassing), &_Type_struct__9962_Utils, NULL, NULL, &scope_401, 1, 7},
  /* 2 */ { MAP_FIELD, ".location", NULL, sizeof(struct__9889), offsetof(struct__9968, location), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 4},
  /* 3 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9968, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9968, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__9968, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".seqNoOnTrack", NULL, sizeof(kcg_int), offsetof(struct__9968, seqNoOnTrack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9968, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_402 = {
  "struct__9968",
  scope_402_entries, 8,
};

/* struct__9962 */
static const MappingEntry scope_401_entries[3] = {
  /* 0 */ { MAP_FIELD, ".BG_Header", NULL, sizeof(struct__9944), offsetof(struct__9962, BG_Header), &_Type_struct__9944_Utils, NULL, NULL, &scope_400, 1, 1},
  /* 1 */ { MAP_FIELD, ".linkedBGs", NULL, sizeof(array__9918), offsetof(struct__9962, linkedBGs), &_Type_array__9918_Utils, NULL, NULL, &scope_396, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9962, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_401 = {
  "struct__9962",
  scope_401_entries, 3,
};

/* struct__9944 */
static const MappingEntry scope_400_entries[15] = {
  /* 0 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(struct__9889), offsetof(struct__9944, BG_centerDetectionInaccuraccuracies), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 10},
  /* 1 */ { MAP_FIELD, ".bgPosition", NULL, sizeof(struct__9934), offsetof(struct__9944, bgPosition), &_Type_struct__9934_Utils, NULL, NULL, &scope_399, 1, 9},
  /* 2 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__9944, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__9944, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__9944, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9944, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9944, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(struct__9944, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__9944, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__9944, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__9944, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__9944, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".trainOrientationToBG", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9944, trainOrientationToBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_FIELD, ".trainRunningDirectionToBG", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9944, trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9944, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_400 = {
  "struct__9944",
  scope_400_entries, 15,
};

/* struct__9934 */
static const MappingEntry scope_399_entries[7] = {
  /* 0 */ { MAP_FIELD, ".acceleration", NULL, sizeof(kcg_int), offsetof(struct__9934, acceleration), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".motionDirection", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(struct__9934, motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".motionState", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(struct__9934, motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".odo", NULL, sizeof(struct__9928), offsetof(struct__9934, odo), &_Type_struct__9928_Utils, NULL, NULL, &scope_398, 1, 2},
  /* 4 */ { MAP_FIELD, ".speed", NULL, sizeof(struct__9921), offsetof(struct__9934, speed), &_Type_struct__9921_Utils, NULL, NULL, &scope_397, 1, 3},
  /* 5 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(struct__9934, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9934, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_399 = {
  "struct__9934",
  scope_399_entries, 7,
};

/* struct__9928 */
static const MappingEntry scope_398_entries[3] = {
  /* 0 */ { MAP_FIELD, ".o_max", NULL, sizeof(kcg_int), offsetof(struct__9928, o_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(kcg_int), offsetof(struct__9928, o_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(kcg_int), offsetof(struct__9928, o_nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_398 = {
  "struct__9928",
  scope_398_entries, 3,
};

/* struct__9921 */
static const MappingEntry scope_397_entries[4] = {
  /* 0 */ { MAP_FIELD, ".v_lower", NULL, sizeof(kcg_int), offsetof(struct__9921, v_lower), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".v_rawNominal", NULL, sizeof(kcg_int), offsetof(struct__9921, v_rawNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".v_safeNominal", NULL, sizeof(kcg_int), offsetof(struct__9921, v_safeNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".v_upper", NULL, sizeof(kcg_int), offsetof(struct__9921, v_upper), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_397 = {
  "struct__9921",
  scope_397_entries, 4,
};

/* array__9918 */
static const MappingEntry scope_396_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(struct__9895), 0, &_Type_struct__9895_Utils, NULL, NULL, &scope_394, 1, 0}
};
static const MappingScope scope_396 = {
  "array__9918",
  scope_396_entries, 1,
};

/* struct__9909 */
static const MappingEntry scope_395_entries[6] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(struct__9889), offsetof(struct__9909, d_link), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 4},
  /* 1 */ { MAP_FIELD, ".expectedLocation", NULL, sizeof(struct__9889), offsetof(struct__9909, expectedLocation), &_Type_struct__9889_Utils, NULL, NULL, &scope_393, 1, 3},
  /* 2 */ { MAP_FIELD, ".linkingInfo", NULL, sizeof(struct__9895), offsetof(struct__9909, linkingInfo), &_Type_struct__9895_Utils, NULL, NULL, &scope_394, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_bg_fromLinkingBG", NULL, sizeof(kcg_int), offsetof(struct__9909, nid_bg_fromLinkingBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".nid_c_fromLinkingBG", NULL, sizeof(kcg_int), offsetof(struct__9909, nid_c_fromLinkingBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9909, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_395 = {
  "struct__9909",
  scope_395_entries, 6,
};

/* struct__9895 */
static const MappingEntry scope_394_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__9895, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9895, nid_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9895, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9895, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9895, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__9895, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__9895, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__9895, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__9895, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__9895, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9895, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_394 = {
  "struct__9895",
  scope_394_entries, 11,
};

/* struct__9889 */
static const MappingEntry scope_393_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_max", NULL, sizeof(kcg_int), offsetof(struct__9889, d_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(kcg_int), offsetof(struct__9889, d_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nominal", NULL, sizeof(kcg_int), offsetof(struct__9889, nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_393 = {
  "struct__9889",
  scope_393_entries, 3,
};

/* struct__9871 */
static const MappingEntry scope_392_entries[15] = {
  /* 0 */ { MAP_FIELD, ".Level", NULL, sizeof(MA_Level_t_TrackAtlasTypes), offsetof(struct__9871, Level), &_Type_MA_Level_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".dangerpoint", NULL, sizeof(struct__9865), offsetof(struct__9871, dangerpoint), &_Type_struct__9865_Utils, NULL, NULL, &scope_391, 1, 10},
  /* 2 */ { MAP_FIELD, ".endtimer_t", NULL, sizeof(struct__9860), offsetof(struct__9871, endtimer_t), &_Type_struct__9860_Utils, NULL, NULL, &scope_390, 1, 14},
  /* 3 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__9871, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".overlap", NULL, sizeof(struct__9865), offsetof(struct__9871, overlap), &_Type_struct__9865_Utils, NULL, NULL, &scope_391, 1, 12},
  /* 5 */ { MAP_FIELD, ".q_dangerpoint", NULL, sizeof(kcg_bool), offsetof(struct__9871, q_dangerpoint), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9871, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".q_endtimer", NULL, sizeof(kcg_bool), offsetof(struct__9871, q_endtimer), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_FIELD, ".q_overlap", NULL, sizeof(kcg_bool), offsetof(struct__9871, q_overlap), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_FIELD, ".sections", NULL, sizeof(array__9857), offsetof(struct__9871, sections), &_Type_array__9857_Utils, NULL, NULL, &scope_389, 1, 8},
  /* 10 */ { MAP_FIELD, ".t_loa", NULL, sizeof(kcg_int), offsetof(struct__9871, t_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".t_loa_unlimited", NULL, sizeof(kcg_bool), offsetof(struct__9871, t_loa_unlimited), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_FIELD, ".v_loa", NULL, sizeof(kcg_int), offsetof(struct__9871, v_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 13 */ { MAP_FIELD, ".v_main", NULL, sizeof(kcg_int), offsetof(struct__9871, v_main), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9871, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_392 = {
  "struct__9871",
  scope_392_entries, 15,
};

/* struct__9865 */
static const MappingEntry scope_391_entries[3] = {
  /* 0 */ { MAP_FIELD, ".calc_v_release_onboard", NULL, sizeof(kcg_bool), offsetof(struct__9865, calc_v_release_onboard), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_DP_or_OL", NULL, sizeof(kcg_int), offsetof(struct__9865, d_DP_or_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".v_release", NULL, sizeof(kcg_int), offsetof(struct__9865, v_release), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_391 = {
  "struct__9865",
  scope_391_entries, 3,
};

/* struct__9860 */
static const MappingEntry scope_390_entries[2] = {
  /* 0 */ { MAP_FIELD, ".d_endtimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__9860, d_endtimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".t_endtimer", NULL, sizeof(kcg_int), offsetof(struct__9860, t_endtimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_390 = {
  "struct__9860",
  scope_390_entries, 2,
};

/* array__9857 */
static const MappingEntry scope_389_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(struct__9848), 0, &_Type_struct__9848_Utils, NULL, NULL, &scope_388, 1, 0}
};
static const MappingScope scope_389 = {
  "array__9857",
  scope_389_entries, 1,
};

/* struct__9848 */
static const MappingEntry scope_388_entries[6] = {
  /* 0 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__9848, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".l_section", NULL, sizeof(kcg_int), offsetof(struct__9848, l_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".q_endsection", NULL, sizeof(kcg_bool), offsetof(struct__9848, q_endsection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(kcg_bool), offsetof(struct__9848, q_sectiontimer), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(struct__9848, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9848, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_388 = {
  "struct__9848",
  scope_388_entries, 6,
};

/* struct__9842 */
static const MappingEntry scope_387_entries[3] = {
  /* 0 */ { MAP_FIELD, ".header", NULL, sizeof(struct__9761), offsetof(struct__9842, header), &_Type_struct__9761_Utils, NULL, NULL, &scope_374, 1, 1},
  /* 1 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__9832), offsetof(struct__9842, packets), &_Type_struct__9832_Utils, NULL, NULL, &scope_386, 1, 2},
  /* 2 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__9842, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_387 = {
  "struct__9842",
  scope_387_entries, 3,
};

/* struct__9832 */
static const MappingEntry scope_386_entries[7] = {
  /* 0 */ { MAP_FIELD, ".p0", NULL, sizeof(struct__9748), offsetof(struct__9832, p0), &_Type_struct__9748_Utils, NULL, NULL, &scope_372, 1, 0},
  /* 1 */ { MAP_FIELD, ".p1", NULL, sizeof(struct__9724), offsetof(struct__9832, p1), &_Type_struct__9724_Utils, NULL, NULL, &scope_370, 1, 1},
  /* 2 */ { MAP_FIELD, ".p11", NULL, sizeof(struct__9784), offsetof(struct__9832, p11), &_Type_struct__9784_Utils, NULL, NULL, &scope_378, 1, 6},
  /* 3 */ { MAP_FIELD, ".p3", NULL, sizeof(struct__9826), offsetof(struct__9832, p3), &_Type_struct__9826_Utils, NULL, NULL, &scope_385, 1, 2},
  /* 4 */ { MAP_FIELD, ".p4", NULL, sizeof(struct__9810), offsetof(struct__9832, p4), &_Type_struct__9810_Utils, NULL, NULL, &scope_381, 1, 3},
  /* 5 */ { MAP_FIELD, ".p5", NULL, sizeof(struct__9805), offsetof(struct__9832, p5), &_Type_struct__9805_Utils, NULL, NULL, &scope_380, 1, 4},
  /* 6 */ { MAP_FIELD, ".p9", NULL, sizeof(struct__9800), offsetof(struct__9832, p9), &_Type_struct__9800_Utils, NULL, NULL, &scope_379, 1, 5}
};
static const MappingScope scope_386 = {
  "struct__9832",
  scope_386_entries, 7,
};

/* struct__9826 */
static const MappingEntry scope_385_entries[3] = {
  /* 0 */ { MAP_FIELD, ".aNID_RADIO", NULL, sizeof(array__9823), offsetof(struct__9826, aNID_RADIO), &_Type_array__9823_Utils, NULL, NULL, &scope_384, 1, 2},
  /* 1 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int), offsetof(struct__9826, number), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9826, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_385 = {
  "struct__9826",
  scope_385_entries, 3,
};

/* array__9823 */
static const MappingEntry scope_384_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__9818), 0, &_Type_struct__9818_Utils, NULL, NULL, &scope_383, 1, 0}
};
static const MappingScope scope_384 = {
  "array__9823",
  scope_384_entries, 1,
};

/* struct__9818 */
static const MappingEntry scope_383_entries[2] = {
  /* 0 */ { MAP_FIELD, ".telephoneNumber", NULL, sizeof(array_int_15), offsetof(struct__9818, telephoneNumber), &_Type_array_int_15_Utils, NULL, NULL, &scope_382, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9818, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_383 = {
  "struct__9818",
  scope_383_entries, 2,
};

/* array_int_15 */
static const MappingEntry scope_382_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_15, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_382 = {
  "array_int_15",
  scope_382_entries, 1,
};

/* struct__9810 */
static const MappingEntry scope_381_entries[2] = {
  /* 0 */ { MAP_FIELD, ".M_ERROR", NULL, sizeof(M_ERROR), offsetof(struct__9810, M_ERROR), &_Type_M_ERROR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9810, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_381 = {
  "struct__9810",
  scope_381_entries, 2,
};

/* struct__9805 */
static const MappingEntry scope_380_entries[2] = {
  /* 0 */ { MAP_FIELD, ".TrainRunningNumber", NULL, sizeof(kcg_int), offsetof(struct__9805, TrainRunningNumber), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9805, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_380 = {
  "struct__9805",
  scope_380_entries, 2,
};

/* struct__9800 */
static const MappingEntry scope_379_entries[2] = {
  /* 0 */ { MAP_FIELD, ".transitionInformation", NULL, sizeof(kcg_int), offsetof(struct__9800, transitionInformation), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9800, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_379 = {
  "struct__9800",
  scope_379_entries, 2,
};

/* struct__9784 */
static const MappingEntry scope_378_entries[13] = {
  /* 0 */ { MAP_FIELD, ".NC_CDTRAIN", NULL, sizeof(NC_CDTRAIN), offsetof(struct__9784, NC_CDTRAIN), &_Type_NC_CDTRAIN_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NC_TRAIN", NULL, sizeof(NC_TRAIN), offsetof(struct__9784, NC_TRAIN), &_Type_NC_TRAIN_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".l_train", NULL, sizeof(kcg_int), offsetof(struct__9784, l_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_airtight", NULL, sizeof(M_AIRTIGHT), offsetof(struct__9784, m_airtight), &_Type_M_AIRTIGHT_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".m_axleloadcat", NULL, sizeof(M_AXLELOADCAT), offsetof(struct__9784, m_axleloadcat), &_Type_M_AXLELOADCAT_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".m_loadinggoage", NULL, sizeof(M_LOADINGGAUGE), offsetof(struct__9784, m_loadinggoage), &_Type_M_LOADINGGAUGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nIter_ntc", NULL, sizeof(kcg_int), offsetof(struct__9784, nIter_ntc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_FIELD, ".nIter_tractionIdentity", NULL, sizeof(kcg_int), offsetof(struct__9784, nIter_tractionIdentity), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".n_axle", NULL, sizeof(kcg_int), offsetof(struct__9784, n_axle), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(array_int_3), offsetof(struct__9784, nid_ntc), &_Type_array_int_3_Utils, NULL, NULL, &scope_375, 1, 12},
  /* 10 */ { MAP_FIELD, ".tractionIdentity", NULL, sizeof(array__9781), offsetof(struct__9784, tractionIdentity), &_Type_array__9781_Utils, NULL, NULL, &scope_377, 1, 10},
  /* 11 */ { MAP_FIELD, ".v_maxtrain", NULL, sizeof(kcg_int), offsetof(struct__9784, v_maxtrain), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9784, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_378 = {
  "struct__9784",
  scope_378_entries, 13,
};

/* array__9781 */
static const MappingEntry scope_377_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(struct__9776), 0, &_Type_struct__9776_Utils, NULL, NULL, &scope_376, 1, 0}
};
static const MappingScope scope_377 = {
  "array__9781",
  scope_377_entries, 1,
};

/* struct__9776 */
static const MappingEntry scope_376_entries[2] = {
  /* 0 */ { MAP_FIELD, ".m_voltage", NULL, sizeof(M_VOLTAGE), offsetof(struct__9776, m_voltage), &_Type_M_VOLTAGE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".nid_ctraction", NULL, sizeof(kcg_int), offsetof(struct__9776, nid_ctraction), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_376 = {
  "struct__9776",
  scope_376_entries, 2,
};

/* array_int_3 */
static const MappingEntry scope_375_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_375 = {
  "array_int_3",
  scope_375_entries, 1,
};

/* struct__9761 */
static const MappingEntry scope_374_entries[9] = {
  /* 0 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(struct__9761, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9761, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__9761, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9761, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".xNID_EM", NULL, sizeof(kcg_int), offsetof(struct__9761, xNID_EM), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".xNID_TEXTMESSAGE", NULL, sizeof(kcg_int), offsetof(struct__9761, xNID_TEXTMESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".xQ_EMERGENCYSTOP", NULL, sizeof(Q_EMERGENCYSTOP), offsetof(struct__9761, xQ_EMERGENCYSTOP), &_Type_Q_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".xQ_MARQSTREASON", NULL, sizeof(Q_MARQSTREASON), offsetof(struct__9761, xQ_MARQSTREASON), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".xT_TRAIN", NULL, sizeof(kcg_real), offsetof(struct__9761, xT_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_374 = {
  "struct__9761",
  scope_374_entries, 9,
};

/* struct__9753 */
static const MappingEntry scope_373_entries[5] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9753, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".t_cycrqst", NULL, sizeof(kcg_int), offsetof(struct__9753, t_cycrqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".t_mar", NULL, sizeof(kcg_int), offsetof(struct__9753, t_mar), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".t_timeoutrqst", NULL, sizeof(kcg_int), offsetof(struct__9753, t_timeoutrqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9753, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_373 = {
  "struct__9753",
  scope_373_entries, 5,
};

/* struct__9748 */
static const MappingEntry scope_372_entries[2] = {
  /* 0 */ { MAP_FIELD, ".packet0", NULL, sizeof(struct__9729), offsetof(struct__9748, packet0), &_Type_struct__9729_Utils, NULL, NULL, &scope_371, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9748, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_372 = {
  "struct__9748",
  scope_372_entries, 2,
};

/* struct__9729 */
static const MappingEntry scope_371_entries[16] = {
  /* 0 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9729, D_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int), offsetof(struct__9729, L_DOUBTOVER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int), offsetof(struct__9729, L_DOUBTUNDER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9729, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int), offsetof(struct__9729, L_TRAININT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9729, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__9729, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9729, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int), offsetof(struct__9729, V_TRAIN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9729, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9729, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(struct__9729, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(struct__9729, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__9729, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(struct__9729, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(struct__9729, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_371 = {
  "struct__9729",
  scope_371_entries, 16,
};

/* struct__9724 */
static const MappingEntry scope_370_entries[2] = {
  /* 0 */ { MAP_FIELD, ".packet1", NULL, sizeof(struct__9704), offsetof(struct__9724, packet1), &_Type_struct__9704_Utils, NULL, NULL, &scope_369, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9724, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_370 = {
  "struct__9724",
  scope_370_entries, 2,
};

/* struct__9704 */
static const MappingEntry scope_369_entries[17] = {
  /* 0 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9704, D_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int), offsetof(struct__9704, L_DOUBTOVER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int), offsetof(struct__9704, L_DOUBTUNDER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9704, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int), offsetof(struct__9704, L_TRAININT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9704, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__9704, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9704, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".NID_PRVLRBG", NULL, sizeof(kcg_int), offsetof(struct__9704, NID_PRVLRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int), offsetof(struct__9704, V_TRAIN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9704, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9704, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(struct__9704, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(struct__9704, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 10},
  /* 14 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__9704, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(struct__9704, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(struct__9704, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_369 = {
  "struct__9704",
  scope_369_entries, 17,
};

/* TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions */
static const MappingEntry scope_364_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_diff", NULL, sizeof(V_DIFF), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, v_diff), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_364 = {
  "TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions",
  scope_364_entries, 8,
};

/* TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions */
static const MappingEntry scope_363_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_OUTPUT, "nc_diff", NULL, sizeof(NC_DIFF), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, nc_diff), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_363 = {
  "TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions",
  scope_363_entries, 6,
};

/* TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal */
static const MappingEntry scope_362_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L2), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_458, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_362 = {
  "TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal",
  scope_362_entries, 6,
};

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP/ MRSP_Find_First_in_SSP_t__TA_MRSP */
static const MappingEntry scope_361_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Last_Loc", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, Last_Loc), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L2), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L3), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_361 = {
  "TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP/ MRSP_Find_First_in_SSP_t__TA_MRSP",
  scope_361_entries, 8,
};

/* TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSPTA_MRSP::MRSP_FindValidSSP_section 1/ */
static const MappingEntry scope_360_entries[18] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L1_1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L12_1), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L13_1), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L14_1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L19_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L21_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L22_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L23_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L25_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L26_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L27_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L28_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L30_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L31_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L6_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L8_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 16 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L9_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_OUTPUT, "valid", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, valid_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_360 = {
  "TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSPTA_MRSP::MRSP_FindValidSSP_section 1/",
  scope_360_entries, 18,
};

/* TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSP */
static const MappingEntry scope_359_entries[10] = {
  /* 0 */ { MAP_EXPANDED, "TA_MRSP::MRSP_FindValidSSP_section 1", NULL, 0, 0, NULL, NULL, NULL, &scope_360, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L19), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L22), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 7},
  /* 8 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_OUTPUT, "i_out", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, i_out), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 9}
};
static const MappingScope scope_359 = {
  "TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSP",
  scope_359_entries, 10,
};

/* TM_conversions::CAST_Int_to_L_SECTION/ CAST_Int_to_L_SECTION_TM_conversions */
static const MappingEntry scope_358_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_section", NULL, sizeof(L_SECTION), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, l_section), &_Type_L_SECTION_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_358 = {
  "TM_conversions::CAST_Int_to_L_SECTION/ CAST_Int_to_L_SECTION_TM_conversions",
  scope_358_entries, 6,
};

/* TM_lib_internal::C_P015_extract_el_section/ C_P015_extract_el_section_TM_lib_internal */
static const MappingEntry scope_357_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L2), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_415, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_357 = {
  "TM_lib_internal::C_P015_extract_el_section/ C_P015_extract_el_section_TM_lib_internal",
  scope_357_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_356_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_356 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_356_entries, 6,
};

/* TM_lib_internal::C_P003V1_extract_el_section/ C_P003V1_extract_el_section_TM_lib_internal */
static const MappingEntry scope_355_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L2), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_355 = {
  "TM_lib_internal::C_P003V1_extract_el_section/ C_P003V1_extract_el_section_TM_lib_internal",
  scope_355_entries, 4,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP/ FindStartOfNewSpeedProfil_TA_Lib_internal */
static const MappingEntry scope_354_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_STATIC), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L1), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L4), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L5), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_354 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP/ FindStartOfNewSpeedProfil_TA_Lib_internal",
  scope_354_entries, 17,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_353_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_351_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_353 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then:",
  scope_353_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_352_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_351_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_352 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else:",
  scope_352_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_351_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_Front_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_351_entries[0], isActive_kcg_bool_kcg_false, &scope_352, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_351_entries[0], isActive_kcg_bool_kcg_true, &scope_353, 1, 2}
};
static const MappingScope scope_351 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:",
  scope_351_entries, 3,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal */
static const MappingEntry scope_350_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_351, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "added_train_length", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Eval_Q_Front_TA_Lib_internal, added_train_length), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, q_front_in), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_350 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal",
  scope_350_entries, 4,
};

/* TA_Lib_internal::DetectSpeedIncrease/ DetectSpeedIncrease_TA_Lib_internal */
static const MappingEntry scope_349_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L1), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 15},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(V_STATIC), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L11), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L15), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L16), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 0},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L2), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(V_STATIC), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L3), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L6), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L9), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "q_speed_increase", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, q_speed_increase), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_349 = {
  "TA_Lib_internal::DetectSpeedIncrease/ DetectSpeedIncrease_TA_Lib_internal",
  scope_349_entries, 17,
};

/* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop/ FindFirstRelevantSPForNew_TA_Lib_internal */
static const MappingEntry scope_348_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L169), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L170", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L170), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L172", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L172), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L173", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L173), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L174), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L175", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L175), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L177", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L177), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L178", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L178), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L182), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_348 = {
  "TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop/ FindFirstRelevantSPForNew_TA_Lib_internal",
  scope_348_entries, 17,
};

/* TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions */
static const MappingEntry scope_347_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_OUTPUT, "v_static", NULL, sizeof(V_STATIC), offsetof(outC_CAST_Int_to_V_STATIC_TM_conversions, v_static), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_347 = {
  "TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions",
  scope_347_entries, 11,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_346_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L4_IfBlock1), &_Type_Q_FRONT_Utils, &scope_342_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_342_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_346 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then:",
  scope_346_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_345_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L3_IfBlock1), &_Type_Q_FRONT_Utils, &scope_343_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_343_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_345 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then:",
  scope_345_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_344_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L1_IfBlock1), &_Type_Q_FRONT_Utils, &scope_343_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_343_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_344 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else:",
  scope_344_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_343_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_343_entries[0], isActive_kcg_bool_kcg_false, &scope_344, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_343_entries[0], isActive_kcg_bool_kcg_true, &scope_345, 1, 2}
};
static const MappingScope scope_343 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:",
  scope_343_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1: */
static const MappingEntry scope_342_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_342_entries[0], isActive_kcg_bool_kcg_false, &scope_343, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_342_entries[0], isActive_kcg_bool_kcg_true, &scope_346, 1, 2}
};
static const MappingScope scope_342 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:",
  scope_342_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions */
static const MappingEntry scope_341_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_342, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_front", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_341 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions",
  scope_341_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions */
static const MappingEntry scope_340_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_static", NULL, sizeof(D_STATIC), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, d_static), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_340 = {
  "TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions",
  scope_340_entries, 6,
};

/* TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal */
static const MappingEntry scope_339_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NC_DIFF 1", NULL, sizeof(outC_CAST_Int_to_NC_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_363, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_DIFF 1", NULL, sizeof(outC_CAST_Int_to_V_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_364, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 1", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_362, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 2", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_362, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_458, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(NC_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L25), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(V_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L28), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L4), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_451, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_OUTPUT, "sections", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, sections), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_451, 1, 17}
};
static const MappingScope scope_339 = {
  "TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal",
  scope_339_entries, 18,
};

/* TA_MRSP::MRSP_ConvertIndexedElements/ MRSP_ConvertIndexedElements_TA_MRSP */
static const MappingEntry scope_338_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_indexed_matrix_element_list", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, SSP_indexed_matrix_element_list), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_indexed_trgt_t_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L1), &_Type_SSP_t_indexed_trgt_t_TA_MRSP_Utils, NULL, NULL, &scope_468, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L4), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L7), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_338 = {
  "TA_MRSP::MRSP_ConvertIndexedElements/ MRSP_ConvertIndexedElements_TA_MRSP",
  scope_338_entries, 6,
};

/* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP/ MRSP_FindMax_of_all_t_cat_TA_MRSP */
static const MappingEntry scope_337_entries[16] = {
  /* 0 */ { MAP_OUTPUT, "Max", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, Max), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 15},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L13), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L14), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L15), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L20), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L23), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L24), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L25), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L32", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L32), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 13},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14}
};
static const MappingScope scope_337 = {
  "TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP/ MRSP_FindMax_of_all_t_cat_TA_MRSP",
  scope_337_entries, 16,
};

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat/ MRSP_Find_First_in_SSP_t_cat_TA_MRSP */
static const MappingEntry scope_336_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "SSP_indexed_loc", NULL, sizeof(SSP_t_indexed_trgt_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, SSP_indexed_loc), &_Type_SSP_t_indexed_trgt_t_TA_MRSP_Utils, NULL, NULL, &scope_468, 1, 9},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP 1", &iter_foldwi_33, sizeof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_361, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_cat_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L2), &_Type_SSP_t_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L5), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_t_indexed_trgt_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L6), &_Type_SSP_t_indexed_trgt_t_TA_MRSP_Utils, NULL, NULL, &scope_468, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_336 = {
  "TA_MRSP::MRSP_Find_First_in_SSP_t_cat/ MRSP_Find_First_in_SSP_t_cat_TA_MRSP",
  scope_336_entries, 10,
};

/* TA_MRSP::MRSP_FindLastSSPSection/ MRSP_FindLastSSPSection_TA_MRSP */
static const MappingEntry scope_335_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "Index_Last", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, Index_Last), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindLastSSPSection_LOOP 1", &iter_foldwi_33, sizeof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_359, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L14), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L19), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L21", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L21), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L30), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L31), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 10}
};
static const MappingScope scope_335 = {
  "TA_MRSP::MRSP_FindLastSSPSection/ MRSP_FindLastSSPSection_TA_MRSP",
  scope_335_entries, 12,
};

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP/ MRSP_DetermineRelevantSpe_TA_MRSP */
static const MappingEntry scope_334_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "TargetCurrentCycle", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, TargetCurrentCycle), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 26},
  /* 1 */ { MAP_LOCAL, "_L120", NULL, sizeof(kcg_int), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L120), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L124", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L124), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L140), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L141", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L141), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L142", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L142), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_int), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L143), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_int), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L144), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L145", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L145), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L146", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L146), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L147", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L147), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L148", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L148), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L149", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L149), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L150", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L150), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L151", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L151), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L154), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L159", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L159), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L160", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L160), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L161", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L161), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L162", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L162), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L163", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L163), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L165", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L165), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L166", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L166), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L167", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L167), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L168", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L168), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L169), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25}
};
static const MappingScope scope_334 = {
  "TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP/ MRSP_DetermineRelevantSpe_TA_MRSP",
  scope_334_entries, 27,
};

/* TM_lib_internal::C_P015_us_array/ C_P015_us_array_TM_lib_internal */
static const MappingEntry scope_333_entries[26] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC 2", NULL, sizeof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_299, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_SECTION 1", NULL, sizeof(outC_CAST_Int_to_L_SECTION_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, _4_Context_1), NULL, NULL, NULL, &scope_358, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_SECTIONTIMER 1", NULL, sizeof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_274, 1, 5},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_SECTIONTIMER 1", NULL, sizeof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 1", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, _3_Context_1), NULL, NULL, NULL, &scope_357, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 2", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_357, 1, 1},
  /* 6 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 3", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_357, 1, 2},
  /* 7 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 4", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_4), NULL, NULL, NULL, &scope_357, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_us_array_TM_lib_internal, _L1), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_415, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(L_SECTION), offsetof(outC_C_P015_us_array_TM_lib_internal, _L25), &_Type_L_SECTION_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_SECTIONTIMER), offsetof(outC_C_P015_us_array_TM_lib_internal, _L26), &_Type_T_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(D_SECTIONTIMERSTOPLOC), offsetof(outC_C_P015_us_array_TM_lib_internal, _L27), &_Type_D_SECTIONTIMERSTOPLOC_Utils, NULL, NULL, NULL, 1, 22},
  /* 18 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_C_P015_us_array_TM_lib_internal, _L28), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 20 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_us_array_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_us_array_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(P015_section_enum_T_TM), offsetof(outC_C_P015_us_array_TM_lib_internal, _L4), &_Type_P015_section_enum_T_TM_Utils, NULL, NULL, &scope_416, 1, 10},
  /* 23 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 24 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 25 */ { MAP_OUTPUT, "sections", NULL, sizeof(P015_section_enum_T_TM), offsetof(outC_C_P015_us_array_TM_lib_internal, sections), &_Type_P015_section_enum_T_TM_Utils, NULL, NULL, &scope_416, 1, 25}
};
static const MappingScope scope_333 = {
  "TM_lib_internal::C_P015_us_array/ C_P015_us_array_TM_lib_internal",
  scope_333_entries, 26,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_332_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L4_IfBlock1), &_Type_Q_GDIR_Utils, &scope_328_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_328_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_332 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:then:",
  scope_332_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_331_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L3_IfBlock1), &_Type_Q_GDIR_Utils, &scope_329_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_329_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_331 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:then:",
  scope_331_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_330_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L1_IfBlock1), &_Type_Q_GDIR_Utils, &scope_329_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_329_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_330 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:else:",
  scope_330_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_329_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_329_entries[0], isActive_kcg_bool_kcg_false, &scope_330, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_329_entries[0], isActive_kcg_bool_kcg_true, &scope_331, 1, 2}
};
static const MappingScope scope_329 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:",
  scope_329_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1: */
static const MappingEntry scope_328_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_328_entries[0], isActive_kcg_bool_kcg_false, &scope_329, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_328_entries[0], isActive_kcg_bool_kcg_true, &scope_332, 1, 2}
};
static const MappingScope scope_328 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:",
  scope_328_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversions */
static const MappingEntry scope_327_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_328, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_gdir", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, q_gdir), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_gdir_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, q_gdir_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_327 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversions",
  scope_327_entries, 6,
};

/* TM_conversions::CAST_Int_to_G_A/ CAST_Int_to_G_A_TM_conversions */
static const MappingEntry scope_326_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "g_a", NULL, sizeof(G_A), offsetof(outC_CAST_Int_to_G_A_TM_conversions, g_a), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_326 = {
  "TM_conversions::CAST_Int_to_G_A/ CAST_Int_to_G_A_TM_conversions",
  scope_326_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_GRADIENT/ CAST_Int_to_D_GRADIENT_TM_conversions */
static const MappingEntry scope_325_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_gradient", NULL, sizeof(D_GRADIENT), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, d_gradient), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_325 = {
  "TM_conversions::CAST_Int_to_D_GRADIENT/ CAST_Int_to_D_GRADIENT_TM_conversions",
  scope_325_entries, 6,
};

/* TM_lib_internal::C_P021_extract_el_section/ C_P021_extract_el_section_TM_lib_internal */
static const MappingEntry scope_324_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L2), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_473, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_324 = {
  "TM_lib_internal::C_P021_extract_el_section/ C_P021_extract_el_section_TM_lib_internal",
  scope_324_entries, 6,
};

/* TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal */
static const MappingEntry scope_323_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_323 = {
  "TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal",
  scope_323_entries, 7,
};

/* TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal */
static const MappingEntry scope_322_entries[13] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "id", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_OUTPUT, "m_version", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_322 = {
  "TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal",
  scope_322_entries, 13,
};

/* TM_conversions::CAST_Int_to_T_CYCRQST/ CAST_Int_to_T_CYCRQST_TM_conversions */
static const MappingEntry scope_321_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_cycloc", NULL, sizeof(T_CYCRQST), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, t_cycloc), &_Type_T_CYCRQST_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_321 = {
  "TM_conversions::CAST_Int_to_T_CYCRQST/ CAST_Int_to_T_CYCRQST_TM_conversions",
  scope_321_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_TIMEOUTRQST/ CAST_Int_to_T_TIMEOUTRQST_TM_conversions */
static const MappingEntry scope_320_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_timeoutrqst", NULL, sizeof(T_TIMEOUTRQST), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, t_timeoutrqst), &_Type_T_TIMEOUTRQST_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_320 = {
  "TM_conversions::CAST_Int_to_T_TIMEOUTRQST/ CAST_Int_to_T_TIMEOUTRQST_TM_conversions",
  scope_320_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_MAR/ CAST_Int_to_T_MAR_TM_conversions */
static const MappingEntry scope_319_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_mar", NULL, sizeof(T_MAR), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, t_mar), &_Type_T_MAR_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_319 = {
  "TM_conversions::CAST_Int_to_T_MAR/ CAST_Int_to_T_MAR_TM_conversions",
  scope_319_entries, 6,
};

/* TM_lib_internal::C_P003V1_us_array/ C_P003V1_us_array_TM_lib_internal */
static const MappingEntry scope_318_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 2", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_356, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_extract_el_section 2", NULL, sizeof(outC_C_P003V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P003V1_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_355, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L37", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L37), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L38", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L38), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_433, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L41", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L41), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_OUTPUT, "sections", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, sections), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_433, 1, 11}
};
static const MappingScope scope_318 = {
  "TM_lib_internal::C_P003V1_us_array/ C_P003V1_us_array_TM_lib_internal",
  scope_318_entries, 12,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfile/ FindStartOfNewSpeedProfile_TA_Lib_internal */
static const MappingEntry scope_317_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP 1", &iter_foldwi_33, sizeof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_354, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L167", NULL, sizeof(array_int_33), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L167), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L2), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L93", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L93), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L98", NULL, sizeof(array__10579), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L98), &_Type_array__10579_Utils, NULL, NULL, &scope_493, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_317 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfile/ FindStartOfNewSpeedProfile_TA_Lib_internal",
  scope_317_entries, 11,
};

/* TA_Lib_internal::Update_SP_per_LRBG_loop/ Update_SP_per_LRBG_loop_TA_Lib_internal */
static const MappingEntry scope_316_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "SpeedProfile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, SpeedProfile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L15), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L19), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L20), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L6), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_316 = {
  "TA_Lib_internal::Update_SP_per_LRBG_loop/ Update_SP_per_LRBG_loop_TA_Lib_internal",
  scope_316_entries, 9,
};

/* TA_SSP::Convert_P27_to_DistanceProfile_1st_section/ Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_315_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_Q_Front 2", NULL, sizeof(outC_Eval_Q_Front_TA_Lib_internal), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _1_Context_2), NULL, NULL, NULL, &scope_350, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 2", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, Context_2), NULL, NULL, NULL, &scope_255, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L86", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 13},
  /* 3 */ { MAP_LOCAL, "_L87", NULL, sizeof(D_STATIC), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L87), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_LOCAL, "_L88", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L88), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L89", NULL, sizeof(Q_SCALE), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L89), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L90", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L90), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L91", NULL, sizeof(Q_FRONT), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L91), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_int), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L92), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L93", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L93), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L94", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L94), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L95", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L95), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L96", NULL, sizeof(V_STATIC), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L96), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L97", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L97), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L98", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L98), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 14},
  /* 15 */ { MAP_OUTPUT, "section1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, section1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 17},
  /* 16 */ { MAP_OUTPUT, "section1_delay", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, section1_delay), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 16},
  /* 17 */ { MAP_OUTPUT, "v_static_section1", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, v_static_section1), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15}
};
static const MappingScope scope_315 = {
  "TA_SSP::Convert_P27_to_DistanceProfile_1st_section/ Convert_P27_to_DistancePr_TA_SSP",
  scope_315_entries, 18,
};

/* TA_SSP::Convert_P27_to_DistanceProfile_loop/ _16_Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_314_entries[30] = {
  /* 0 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 28},
  /* 1 */ { MAP_OUTPUT, "SpeedProfile", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, SpeedProfile), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 29},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::DetectSpeedIncrease 1", NULL, sizeof(outC_DetectSpeedIncrease_TA_Lib_internal), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, Context_1), NULL, &scope_314_entries[0], isActive_kcg_bool_kcg_true, &scope_349, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 1", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_255, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L44", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L44), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L45", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L45), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L46", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L46), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(Q_SCALE), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L47), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L48", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L48), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L57", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L57), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L58), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L65", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L65), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L66", NULL, sizeof(Q_FRONT), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L66), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L68", NULL, sizeof(Q_FRONT), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L68), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L70", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L70), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L71", NULL, sizeof(D_STATIC), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L71), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L84", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L84), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L85", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L85), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L87), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L88", NULL, sizeof(V_STATIC), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L88), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L89", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L89), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L90", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L90), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 24},
  /* 27 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L91), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L92", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L92), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L93), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27}
};
static const MappingScope scope_314 = {
  "TA_SSP::Convert_P27_to_DistanceProfile_loop/ _16_Convert_P27_to_DistancePr_TA_SSP",
  scope_314_entries, 30,
};

/* TA_Lib_internal::FindFirstRelevantSPForNewLRBG/ FindFirstRelevantSPForNewLRBG_TA_Lib_internal */
static const MappingEntry scope_313_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop 3", &iter_foldwi_33, sizeof(outC_FindFirstRelevantSPForNew_TA_Lib_internal), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, Context_3), NULL, NULL, NULL, &scope_348, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L169", NULL, sizeof(array__10579), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L169), &_Type_array__10579_Utils, NULL, NULL, &scope_493, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L93", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L93), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_313 = {
  "TA_Lib_internal::FindFirstRelevantSPForNewLRBG/ FindFirstRelevantSPForNewLRBG_TA_Lib_internal",
  scope_313_entries, 10,
};

/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop/ MoveSPSectionsToNewLRBGaf_TA_Lib_internal */
static const MappingEntry scope_312_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, ProfileOut), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 12},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::NormalizePos 2", NULL, sizeof(outC_NormalizePos_TA_Lib_internal), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, Context_2), NULL, NULL, NULL, &scope_253, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L6), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L7), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L8), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L9), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 9}
};
static const MappingScope scope_312 = {
  "TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop/ MoveSPSectionsToNewLRBGaf_TA_Lib_internal",
  scope_312_entries, 13,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_311_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L1_15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _4__L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9_13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _6_n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_311 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/",
  scope_311_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/ */
static const MappingEntry scope_310_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_us_array_qdiff 1", &iter_mapwi_32, sizeof(outC_C_P027V1_us_array_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, Context_1_1), NULL, NULL, NULL, &scope_339, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L1_1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_458, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L11_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L5_1), &_Type_array_int_32_Utils, NULL, NULL, &scope_436, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_64_32), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L6_1), &_Type_array_int_64_32_Utils, NULL, NULL, &scope_491, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L7_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10408), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9_1), &_Type_array__10408_Utils, NULL, NULL, &scope_452, 1, 7},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(_2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, sections_1), &_Type__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_452, 1, 0}
};
static const MappingScope scope_310 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/",
  scope_310_entries, 9,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2 */
static const MappingEntry scope_309_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_section_onbard", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, P027V1_section_onbard), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 22},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_STATIC 1", NULL, sizeof(outC_CAST_Int_to_D_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_340, 1, 1},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_311, 1, 4},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_FRONT 1", NULL, sizeof(outC_CAST_Int_to_Q_FRONT_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_341, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_STATIC 1", NULL, sizeof(outC_CAST_Int_to_V_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_347, 1, 3},
  /* 5 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1", NULL, 0, 0, NULL, NULL, NULL, &scope_310, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L10), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(array_int_64), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L29), &_Type_array_int_64_Utils, NULL, NULL, &scope_458, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(D_STATIC), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L30), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_FRONT), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L31), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(V_STATIC), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L32), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L33), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(_2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L5), &_Type__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_452, 1, 11},
  /* 21 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_3), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L6), &_Type_array_int_3_Utils, NULL, NULL, &scope_375, 1, 10},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 9}
};
static const MappingScope scope_309 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2",
  scope_309_entries, 23,
};

/* TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal */
static const MappingEntry scope_308_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_308 = {
  "TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal",
  scope_308_entries, 4,
};

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2/ MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP */
static const MappingEntry scope_307_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "SSP_t_section_out", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP, SSP_t_section_out), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP, _L1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP, _L6), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_307 = {
  "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2/ MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP",
  scope_307_entries, 3,
};

/* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix/ MRSP_RemoveLargestFromSSP_TA_MRSP */
static const MappingEntry scope_306_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "SSP_matrix_out", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, SSP_matrix_out), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L1), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L2), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 2}
};
static const MappingScope scope_306 = {
  "TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix/ MRSP_RemoveLargestFromSSP_TA_MRSP",
  scope_306_entries, 7,
};

/* TA_MRSP::MRSP_FindMax_of_all_t_cats/ MRSP_FindMax_of_all_t_cats_TA_MRSP */
static const MappingEntry scope_305_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "SSP_largest_target", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, SSP_largest_target), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_ConvertIndexedElements 1", &iter_map_11, sizeof(outC_MRSP_ConvertIndexedElements_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_338, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP 1", &iter_foldwi_11, sizeof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_337, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_indexed_targets_list_t_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L1), &_Type_SSP_t_indexed_targets_list_t_TA_MRSP_Utils, NULL, NULL, &scope_469, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L26), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L61", NULL, sizeof(array__10555), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L61), &_Type_array__10555_Utils, NULL, NULL, &scope_485, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L62", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L62), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 7}
};
static const MappingScope scope_305 = {
  "TA_MRSP::MRSP_FindMax_of_all_t_cats/ MRSP_FindMax_of_all_t_cats_TA_MRSP",
  scope_305_entries, 9,
};

/* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat/ MRSP_Find_First_in_each_t_TA_MRSP */
static const MappingEntry scope_304_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "SSP_indexed_targets_per_cat_out", NULL, sizeof(SSP_t_indexed_targets_list_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, SSP_indexed_targets_per_cat_out), &_Type_SSP_t_indexed_targets_list_t_TA_MRSP_Utils, NULL, NULL, &scope_469, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Find_First_in_SSP_t_cat 1", &iter_map_11, sizeof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_336, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(array__10488), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, _L1), &_Type_array__10488_Utils, NULL, NULL, &scope_469, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 2}
};
static const MappingScope scope_304 = {
  "TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat/ MRSP_Find_First_in_each_t_TA_MRSP",
  scope_304_entries, 4,
};

/* TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSPmath::Min 1/ */
static const MappingEntry scope_303_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, Mi_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L21_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L22_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L24_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_303 = {
  "TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSPmath::Min 1/",
  scope_303_entries, 5,
};

/* TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSP */
static const MappingEntry scope_302_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "MRSpeed", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, MRSpeed), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L1), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L2), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L3), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L7), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_303, 1, 0}
};
static const MappingScope scope_302 = {
  "TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSP",
  scope_302_entries, 9,
};

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat/ _20_MRSP_DetermineRelevantSpe_TA_MRSP */
static const MappingEntry scope_301_entries[15] = {
  /* 0 */ { MAP_INSTANCE, "TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP 1", &iter_foldwi_33, sizeof(outC_MRSP_DetermineRelevantSpe_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindLastSSPSection 1", NULL, sizeof(outC_MRSP_FindLastSSPSection_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 2 */ { MAP_OUTPUT, "ValidSpeed", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, ValidSpeed), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 14},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L11), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L30), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L4), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L52", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L52), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L53", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L53), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_int), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L64), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L65", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L65), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L66", NULL, sizeof(array_int_33), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L66), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L67", NULL, sizeof(array__10558), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L67), &_Type_array__10558_Utils, NULL, NULL, &scope_486, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_301 = {
  "TA_MRSP::MRSP_DetermineRelevantSpeedperCat/ _20_MRSP_DetermineRelevantSpe_TA_MRSP",
  scope_301_entries, 15,
};

/* TM_conversions::CAST_Int_to_T_SECTIONTIMER/ CAST_Int_to_T_SECTIONTIMER_TM_conversions */
static const MappingEntry scope_300_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_sectiontimer", NULL, sizeof(T_SECTIONTIMER), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, t_sectiontimer), &_Type_T_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_300 = {
  "TM_conversions::CAST_Int_to_T_SECTIONTIMER/ CAST_Int_to_T_SECTIONTIMER_TM_conversions",
  scope_300_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC/ CAST_Int_to_D_SECTIONTIME_TM_conversions */
static const MappingEntry scope_299_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_sectiontimerstoploc", NULL, sizeof(D_SECTIONTIMERSTOPLOC), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, d_sectiontimerstoploc), &_Type_D_SECTIONTIMERSTOPLOC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_299 = {
  "TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC/ CAST_Int_to_D_SECTIONTIME_TM_conversions",
  scope_299_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_STARTOL/ CAST_Int_to_D_STARTOL_TM_conversions */
static const MappingEntry scope_298_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_startol", NULL, sizeof(D_STARTOL), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, d_startol), &_Type_D_STARTOL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_298 = {
  "TM_conversions::CAST_Int_to_D_STARTOL/ CAST_Int_to_D_STARTOL_TM_conversions",
  scope_298_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC/ CAST_Int_to_D_ENDTIMERSTA_TM_conversions */
static const MappingEntry scope_297_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_OUTPUT, "d_endtimerstartloc", NULL, sizeof(D_ENDTIMERSTARTLOC), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, d_endtimerstartloc), &_Type_D_ENDTIMERSTARTLOC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_297 = {
  "TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC/ CAST_Int_to_D_ENDTIMERSTA_TM_conversions",
  scope_297_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_RELEASEOL/ CAST_Int_to_V_RELEASEOL_TM_conversions */
static const MappingEntry scope_296_entries[13] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_OUTPUT, "v_releaseol", NULL, sizeof(V_RELEASEOL), offsetof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions, v_releaseol), &_Type_V_RELEASEOL_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_296 = {
  "TM_conversions::CAST_Int_to_V_RELEASEOL/ CAST_Int_to_V_RELEASEOL_TM_conversions",
  scope_296_entries, 13,
};

/* TM_conversions::CAST_Int_to_L_ENDSECTION/ CAST_Int_to_L_ENDSECTION_TM_conversions */
static const MappingEntry scope_295_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_endsection", NULL, sizeof(L_ENDSECTION), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, l_endsection), &_Type_L_ENDSECTION_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_295 = {
  "TM_conversions::CAST_Int_to_L_ENDSECTION/ CAST_Int_to_L_ENDSECTION_TM_conversions",
  scope_295_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_RELEASEDP/ CAST_Int_to_V_RELEASEDP_TM_conversions */
static const MappingEntry scope_294_entries[13] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_OUTPUT, "v_releasedp", NULL, sizeof(V_RELEASEDP), offsetof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions, v_releasedp), &_Type_V_RELEASEDP_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_294 = {
  "TM_conversions::CAST_Int_to_V_RELEASEDP/ CAST_Int_to_V_RELEASEDP_TM_conversions",
  scope_294_entries, 13,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_293_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L4_IfBlock1), &_Type_Q_ENDTIMER_Utils, &scope_289_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_289_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_293 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:then:",
  scope_293_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_292_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L3_IfBlock1), &_Type_Q_ENDTIMER_Utils, &scope_290_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_290_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_292 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:then:",
  scope_292_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_291_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L1_IfBlock1), &_Type_Q_ENDTIMER_Utils, &scope_290_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_290_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_291 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:else:",
  scope_291_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_290_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_290_entries[0], isActive_kcg_bool_kcg_false, &scope_291, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_290_entries[0], isActive_kcg_bool_kcg_true, &scope_292, 1, 2}
};
static const MappingScope scope_290 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:",
  scope_290_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1: */
static const MappingEntry scope_289_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_289_entries[0], isActive_kcg_bool_kcg_false, &scope_290, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_289_entries[0], isActive_kcg_bool_kcg_true, &scope_293, 1, 2}
};
static const MappingScope scope_289 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:",
  scope_289_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversions */
static const MappingEntry scope_288_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_289, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_endtimer", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, q_endtimer), &_Type_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_endtimer_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, q_endtimer_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_288 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversions",
  scope_288_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_OL/ CAST_Int_to_T_OL_TM_conversions */
static const MappingEntry scope_287_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_ol", NULL, sizeof(T_OL), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, t_ol), &_Type_T_OL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_287 = {
  "TM_conversions::CAST_Int_to_T_OL/ CAST_Int_to_T_OL_TM_conversions",
  scope_287_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_LOA/ CAST_Int_to_T_LOA_TM_conversions */
static const MappingEntry scope_286_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_loa", NULL, sizeof(T_LOA), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, t_loa), &_Type_T_LOA_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_286 = {
  "TM_conversions::CAST_Int_to_T_LOA/ CAST_Int_to_T_LOA_TM_conversions",
  scope_286_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_285_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L4_IfBlock1), &_Type_Q_DANGERPOINT_Utils, &scope_281_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_281_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_285 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:then:",
  scope_285_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_284_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L3_IfBlock1), &_Type_Q_DANGERPOINT_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_284 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:then:",
  scope_284_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_283_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L1_IfBlock1), &_Type_Q_DANGERPOINT_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_283 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:else:",
  scope_283_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_282_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_282_entries[0], isActive_kcg_bool_kcg_false, &scope_283, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_282_entries[0], isActive_kcg_bool_kcg_true, &scope_284, 1, 2}
};
static const MappingScope scope_282 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:",
  scope_282_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1: */
static const MappingEntry scope_281_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_281_entries[0], isActive_kcg_bool_kcg_false, &scope_282, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_281_entries[0], isActive_kcg_bool_kcg_true, &scope_285, 1, 2}
};
static const MappingScope scope_281 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:",
  scope_281_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversions */
static const MappingEntry scope_280_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_281, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_dangerpoint", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, q_dangerpoint), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_dangerpoint_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, q_dangerpoint_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_280 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversions",
  scope_280_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_279_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L4_IfBlock1), &_Type_Q_SECTIONTIMER_Utils, &scope_275_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_275_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_279 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:then:",
  scope_279_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_278_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L3_IfBlock1), &_Type_Q_SECTIONTIMER_Utils, &scope_276_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_276_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_278 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:then:",
  scope_278_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_277_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L1_IfBlock1), &_Type_Q_SECTIONTIMER_Utils, &scope_276_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_276_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_277 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:else:",
  scope_277_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_276_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_276_entries[0], isActive_kcg_bool_kcg_false, &scope_277, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_276_entries[0], isActive_kcg_bool_kcg_true, &scope_278, 1, 2}
};
static const MappingScope scope_276 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:",
  scope_276_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1: */
static const MappingEntry scope_275_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_275_entries[0], isActive_kcg_bool_kcg_false, &scope_276, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_275_entries[0], isActive_kcg_bool_kcg_true, &scope_279, 1, 2}
};
static const MappingScope scope_275 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:",
  scope_275_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversions */
static const MappingEntry scope_274_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_275, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_sectiontimer", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, q_sectiontimer), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_sectiontimer_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, q_sectiontimer_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_274 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversions",
  scope_274_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_273_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L4_IfBlock1), &_Type_Q_OVERLAP_Utils, &scope_269_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_269_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_273 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:then:",
  scope_273_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_272_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L3_IfBlock1), &_Type_Q_OVERLAP_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_272 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:then:",
  scope_272_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_271_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L1_IfBlock1), &_Type_Q_OVERLAP_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_271 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:else:",
  scope_271_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_270_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_270_entries[0], isActive_kcg_bool_kcg_false, &scope_271, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_270_entries[0], isActive_kcg_bool_kcg_true, &scope_272, 1, 2}
};
static const MappingScope scope_270 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:",
  scope_270_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1: */
static const MappingEntry scope_269_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_269_entries[0], isActive_kcg_bool_kcg_false, &scope_270, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_269_entries[0], isActive_kcg_bool_kcg_true, &scope_273, 1, 2}
};
static const MappingScope scope_269 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:",
  scope_269_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversions */
static const MappingEntry scope_268_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_269, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_overlap", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, q_overlap), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_overlap_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, q_overlap_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_268 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversions",
  scope_268_entries, 6,
};

/* TM_lib_internal::C_P015_unflatten_sections/ C_P015_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_267_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_us_array 1", &iter_mapwi_32, sizeof(outC_C_P015_us_array_TM_lib_internal), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_333, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L1), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_415, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_32_Utils, NULL, NULL, &scope_436, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_128_32), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_128_32_Utils, NULL, NULL, &scope_484, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10091), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L9), &_Type_array__10091_Utils, NULL, NULL, &scope_417, 1, 6},
  /* 11 */ { MAP_OUTPUT, "sections", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, sections), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 11}
};
static const MappingScope scope_267 = {
  "TM_lib_internal::C_P015_unflatten_sections/ C_P015_unflatten_sections_TM_lib_internal",
  scope_267_entries, 12,
};

/* TM_conversions::CAST_Int_to_T_ENDTIMER/ CAST_Int_to_T_ENDTIMER_TM_conversions */
static const MappingEntry scope_266_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_endtimer", NULL, sizeof(T_ENDTIMER), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, t_endtimer), &_Type_T_ENDTIMER_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_266 = {
  "TM_conversions::CAST_Int_to_T_ENDTIMER/ CAST_Int_to_T_ENDTIMER_TM_conversions",
  scope_266_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_LOA/ CAST_Int_to_V_LOA_TM_conversions */
static const MappingEntry scope_265_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_loa", NULL, sizeof(V_LOA), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, v_loa), &_Type_V_LOA_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_265 = {
  "TM_conversions::CAST_Int_to_V_LOA/ CAST_Int_to_V_LOA_TM_conversions",
  scope_265_entries, 8,
};

/* TM_conversions::CAST_Int_to_D_OL/ CAST_Int_to_D_OL_TM_conversions */
static const MappingEntry scope_264_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ol", NULL, sizeof(D_OL), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, d_ol), &_Type_D_OL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_264 = {
  "TM_conversions::CAST_Int_to_D_OL/ CAST_Int_to_D_OL_TM_conversions",
  scope_264_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_DP/ CAST_Int_to_D_DP_TM_conversions */
static const MappingEntry scope_263_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_dp", NULL, sizeof(D_DP), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, d_dp), &_Type_D_DP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_263 = {
  "TM_conversions::CAST_Int_to_D_DP/ CAST_Int_to_D_DP_TM_conversions",
  scope_263_entries, 6,
};

/* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP/ FindStartOfNewGradientPro_TA_Lib_internal */
static const MappingEntry scope_262_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L4), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_421, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L5), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_262 = {
  "TA_Lib_internal::FindStartOfNewGradientProfile_LOOP/ FindStartOfNewGradientPro_TA_Lib_internal",
  scope_262_entries, 17,
};

/* TA_Lib_internal::EVAL_Q_GDIR/ EVAL_Q_GDIR_TA_Lib_internal */
static const MappingEntry scope_261_entries[9] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_GDIR), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L1), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(G_A), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L2), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_GDIR), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L3), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_OUTPUT, "gradient", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_EVAL_Q_GDIR_TA_Lib_internal, gradient), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_261 = {
  "TA_Lib_internal::EVAL_Q_GDIR/ EVAL_Q_GDIR_TA_Lib_internal",
  scope_261_entries, 9,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_260_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_260 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then:",
  scope_260_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_259_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L22_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L33_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_259 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then:",
  scope_259_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_258_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L25_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L36_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_258 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else:",
  scope_258_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_257_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_257_entries[0], isActive_kcg_bool_kcg_false, &scope_258, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_259, 1, 2}
};
static const MappingScope scope_257 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:",
  scope_257_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_256_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_256_entries[0], isActive_kcg_bool_kcg_false, &scope_257, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_256_entries[0], isActive_kcg_bool_kcg_true, &scope_260, 1, 2}
};
static const MappingScope scope_256 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:",
  scope_256_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal */
static const MappingEntry scope_255_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_256, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "d_internal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, d_internal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_255 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal",
  scope_255_entries, 4,
};

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop/ FindFirstRelevantGPForNew_TA_Lib_internal */
static const MappingEntry scope_254_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L169), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L170", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L170), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L172", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L172), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L173", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L173), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L174), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L175", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L175), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L177", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L177), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L178", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L178), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L182), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_254 = {
  "TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop/ FindFirstRelevantGPForNew_TA_Lib_internal",
  scope_254_entries, 17,
};

/* TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal */
static const MappingEntry scope_253_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, Out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_NormalizePos_TA_Lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_253 = {
  "TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal",
  scope_253_entries, 5,
};

/* TM_lib_internal::C_P021_us_array/ C_P021_us_array_TM_lib_internal */
static const MappingEntry scope_252_entries[22] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_GRADIENT 1", NULL, sizeof(outC_CAST_Int_to_D_GRADIENT_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, _3_Context_1), NULL, NULL, NULL, &scope_325, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_G_A 1", NULL, sizeof(outC_CAST_Int_to_G_A_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_326, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_GDIR 1", NULL, sizeof(outC_CAST_Int_to_Q_GDIR_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_327, 1, 5},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 1", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_324, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 2", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_324, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 3", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_324, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_473, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L25", NULL, sizeof(D_GRADIENT), offsetof(outC_C_P021_us_array_TM_lib_internal, _L25), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(G_A), offsetof(outC_C_P021_us_array_TM_lib_internal, _L26), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_GDIR), offsetof(outC_C_P021_us_array_TM_lib_internal, _L28), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_us_array_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_us_array_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, _L4), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_474, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 20 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_OUTPUT, "sections", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, sections), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_474, 1, 21}
};
static const MappingScope scope_252 = {
  "TM_lib_internal::C_P021_us_array/ C_P021_us_array_TM_lib_internal",
  scope_252_entries, 22,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_251_entries[14] = {
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
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 3}
};
static const MappingScope scope_251 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_251_entries, 14,
};

/* TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal */
static const MappingEntry scope_250_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 1", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_322, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 2", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_322, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 1", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_323, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 3", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_323, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_250 = {
  "TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal",
  scope_250_entries, 19,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_249_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 11},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_250, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 2}
};
static const MappingScope scope_249 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_249_entries, 12,
};

/* Safe_MOD_int/ Safe_MOD_int */
static const MappingEntry scope_248_entries[11] = {
  /* 0 */ { MAP_PROBE, "Div0", NULL, sizeof(kcg_bool), offsetof(outC_Safe_MOD_int, Div0), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Result", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, Result), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Safe_MOD_int, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_Safe_MOD_int, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_248 = {
  "Safe_MOD_int/ Safe_MOD_int",
  scope_248_entries, 11,
};

/* MA_Request::CompareSectionTimer/ CompareSectionTimer_MA_Request */
static const MappingEntry scope_247_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, _L1), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_CompareSectionTimer_MA_Request, _L2), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_388, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, _L5), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_OUTPUT, "smallestTimer", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, smallestTimer), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_247 = {
  "MA_Request::CompareSectionTimer/ CompareSectionTimer_MA_Request",
  scope_247_entries, 11,
};

/* Safe_DIV_real/ Safe_DIV_real */
static const MappingEntry scope_246_entries[11] = {
  /* 0 */ { MAP_PROBE, "Div0", NULL, sizeof(kcg_bool), offsetof(outC_Safe_DIV_real, Div0), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Result", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, Result), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Safe_DIV_real, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), offsetof(outC_Safe_DIV_real, _L9), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_246 = {
  "Safe_DIV_real/ Safe_DIV_real",
  scope_246_entries, 11,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_245_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L2_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P057_compr_onboard_TM_conversions, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_245 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_245_entries, 6,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_244_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_238_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_238_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_244 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_244_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_243_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_243 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_243_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_242_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_240_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_240_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_242 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_242_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_241_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_240_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_240_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_241 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_241_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_240_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_240_entries[0], isActive_kcg_bool_kcg_false, &scope_241, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_240_entries[0], isActive_kcg_bool_kcg_true, &scope_242, 1, 2}
};
static const MappingScope scope_240 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_240_entries, 3,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_239_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_239_entries[0], isActive_kcg_bool_kcg_false, &scope_240, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_239_entries[0], isActive_kcg_bool_kcg_true, &scope_243, 1, 2}
};
static const MappingScope scope_239 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_239_entries, 3,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_238_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_238_entries[0], isActive_kcg_bool_kcg_false, &scope_239, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_238_entries[0], isActive_kcg_bool_kcg_true, &scope_244, 1, 2}
};
static const MappingScope scope_238 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_238_entries, 3,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_237_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_238, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_237 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_237_entries, 6,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversions */
static const MappingEntry scope_236_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P057_onboard", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, P057_onboard), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 22},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_245, 1, 2},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_237, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_CYCRQST 1", NULL, sizeof(outC_CAST_Int_to_T_CYCRQST_TM_conversions), offsetof(outC_C_P057_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_321, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_MAR 1", NULL, sizeof(outC_CAST_Int_to_T_MAR_TM_conversions), offsetof(outC_C_P057_compr_onboard_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TIMEOUTRQST 1", NULL, sizeof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions), offsetof(outC_C_P057_compr_onboard_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_320, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L10), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(T_TIMEOUTRQST), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L27), &_Type_T_TIMEOUTRQST_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_CYCRQST), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L29), &_Type_T_CYCRQST_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L34", NULL, sizeof(array_int_6), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L34), &_Type_array_int_6_Utils, NULL, NULL, &scope_414, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_MAR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4), &_Type_T_MAR_Utils, NULL, NULL, NULL, 1, 9},
  /* 16 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 17 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L44), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 21 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 8}
};
static const MappingScope scope_236 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversions",
  scope_236_entries, 23,
};

/* TM_conversions::CAST_Int_to_D_NVSTFF/ CAST_Int_to_D_NVSTFF_TM_conversions */
static const MappingEntry scope_235_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvstff", NULL, sizeof(D_NVSTFF), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, d_nvstff), &_Type_D_NVSTFF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_235 = {
  "TM_conversions::CAST_Int_to_D_NVSTFF/ CAST_Int_to_D_NVSTFF_TM_conversions",
  scope_235_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_234_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L4_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_230_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_230_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_234 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:then:",
  scope_234_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_233_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L3_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_233 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:then:",
  scope_233_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_232_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L1_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_232 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:else:",
  scope_232_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_231_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_false, &scope_232, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_true, &scope_233, 1, 2}
};
static const MappingScope scope_231 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:",
  scope_231_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1: */
static const MappingEntry scope_230_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_230_entries[0], isActive_kcg_bool_kcg_false, &scope_231, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_230_entries[0], isActive_kcg_bool_kcg_true, &scope_234, 1, 2}
};
static const MappingScope scope_230 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:",
  scope_230_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions */
static const MappingEntry scope_229_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_230, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "q_nvdriver_adhes_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, q_nvdriver_adhes_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "q_nvdriveradhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, q_nvdriveradhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_229 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions",
  scope_229_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_228_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_224_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L8_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_224_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_228 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:then:",
  scope_228_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_227_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_225_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L71_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_225_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_227 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:then:",
  scope_227_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_226_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L1_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_225_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_225_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_226 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:else:",
  scope_226_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_225_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_225_entries[0], isActive_kcg_bool_kcg_false, &scope_226, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_225_entries[0], isActive_kcg_bool_kcg_true, &scope_227, 1, 2}
};
static const MappingScope scope_225 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:",
  scope_225_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1: */
static const MappingEntry scope_224_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_224_entries[0], isActive_kcg_bool_kcg_false, &scope_225, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_224_entries[0], isActive_kcg_bool_kcg_true, &scope_228, 1, 2}
};
static const MappingScope scope_224 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:",
  scope_224_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversions */
static const MappingEntry scope_223_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_224, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_nvderun_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, m_nvderun_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_223 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversions",
  scope_223_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_NVCONTACT/ CAST_Int_to_T_NVCONTACT_TM_conversions */
static const MappingEntry scope_222_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_nvcontact", NULL, sizeof(T_NVCONTACT), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, t_nvcontact), &_Type_T_NVCONTACT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_222 = {
  "TM_conversions::CAST_Int_to_T_NVCONTACT/ CAST_Int_to_T_NVCONTACT_TM_conversions",
  scope_222_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_221_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L4_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_221 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:then:",
  scope_221_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_220_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L3_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L42_IfBlock1), &_Type_kcg_bool_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_220 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:then:",
  scope_220_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_219_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L2_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L33_IfBlock1), &_Type_kcg_bool_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_219 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:then:",
  scope_219_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_218_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L25_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L34_IfBlock1), &_Type_kcg_bool_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_218 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:else:",
  scope_218_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_217_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_false, &scope_218, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_true, &scope_219, 1, 2}
};
static const MappingScope scope_217 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:",
  scope_217_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_216_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_false, &scope_217, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_true, &scope_220, 1, 2}
};
static const MappingScope scope_216 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:",
  scope_216_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1: */
static const MappingEntry scope_215_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_false, &scope_216, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_true, &scope_221, 1, 2}
};
static const MappingScope scope_215 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:",
  scope_215_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversions */
static const MappingEntry scope_214_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_215, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_nvcontact_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, m_nvcontact_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_214 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversions",
  scope_214_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVPOTRP/ CAST_Int_to_D_NVPOTRP_TM_conversions */
static const MappingEntry scope_213_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvpotrp", NULL, sizeof(D_NVPOTRP), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, d_nvpotrp), &_Type_D_NVPOTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_213 = {
  "TM_conversions::CAST_Int_to_D_NVPOTRP/ CAST_Int_to_D_NVPOTRP_TM_conversions",
  scope_213_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_212_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L4_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_208_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_208_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_212 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:then:",
  scope_212_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_211_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L3_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_211 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:then:",
  scope_211_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_210_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L1_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_210 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:else:",
  scope_210_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_209_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_false, &scope_210, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_true, &scope_211, 1, 2}
};
static const MappingScope scope_209 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:",
  scope_209_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1: */
static const MappingEntry scope_208_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_208_entries[0], isActive_kcg_bool_kcg_false, &scope_209, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_208_entries[0], isActive_kcg_bool_kcg_true, &scope_212, 1, 2}
};
static const MappingScope scope_208 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:",
  scope_208_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversions */
static const MappingEntry scope_207_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_208, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_nvemrrls_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, q_nvemrrls_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_207 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversions",
  scope_207_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_NVOVTRP/ CAST_Int_to_T_NVOVTRP_TM_conversions */
static const MappingEntry scope_206_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_nvovtrp", NULL, sizeof(T_NVOVTRP), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, t_nvovtrp), &_Type_T_NVOVTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_206 = {
  "TM_conversions::CAST_Int_to_T_NVOVTRP/ CAST_Int_to_T_NVOVTRP_TM_conversions",
  scope_206_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVOVTRP/ CAST_Int_to_D_NVOVTRP_TM_conversions */
static const MappingEntry scope_205_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvovtrp", NULL, sizeof(D_NVOVTRP), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, d_nvovtrp), &_Type_D_NVOVTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_205 = {
  "TM_conversions::CAST_Int_to_D_NVOVTRP/ CAST_Int_to_D_NVOVTRP_TM_conversions",
  scope_205_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_NVSUPOVTRP/ CAST_Int_to_V_NVSUPOVTRP_TM_conversions */
static const MappingEntry scope_204_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvsupovtrp", NULL, sizeof(V_NVSUPOVTRP), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, v_nvsupovtrp), &_Type_V_NVSUPOVTRP_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_204 = {
  "TM_conversions::CAST_Int_to_V_NVSUPOVTRP/ CAST_Int_to_V_NVSUPOVTRP_TM_conversions",
  scope_204_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVALLOWOVTRP/ CAST_Int_to_V_NVALLOWOVTRP_TM_conversions */
static const MappingEntry scope_203_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvallowovtrp", NULL, sizeof(V_NVALLOWOVTRP), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, v_nvallowovtrp), &_Type_V_NVALLOWOVTRP_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_203 = {
  "TM_conversions::CAST_Int_to_V_NVALLOWOVTRP/ CAST_Int_to_V_NVALLOWOVTRP_TM_conversions",
  scope_203_entries, 8,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_202_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L4_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_198_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_198_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_202 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:then:",
  scope_202_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_201_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L3_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_201 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:then:",
  scope_201_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_200_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L1_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_200 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:else:",
  scope_200_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_199_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_false, &scope_200, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_true, &scope_201, 1, 2}
};
static const MappingScope scope_199 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:",
  scope_199_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1: */
static const MappingEntry scope_198_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_198_entries[0], isActive_kcg_bool_kcg_false, &scope_199, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_198_entries[0], isActive_kcg_bool_kcg_true, &scope_202, 1, 2}
};
static const MappingScope scope_198 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:",
  scope_198_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversions */
static const MappingEntry scope_197_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_198, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_nvsbtsmperm_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, q_nvsbtsmperm_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_197 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversions",
  scope_197_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVROLL/ CAST_Int_to_D_NVROLL_TM_conversions */
static const MappingEntry scope_196_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvroll", NULL, sizeof(D_NVROLL), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, d_nvroll), &_Type_D_NVROLL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_196 = {
  "TM_conversions::CAST_Int_to_D_NVROLL/ CAST_Int_to_D_NVROLL_TM_conversions",
  scope_196_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_NVREL/ CAST_Int_to_V_NVREL_TM_conversions */
static const MappingEntry scope_195_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvrel", NULL, sizeof(V_NVREL), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, v_nvrel), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_195 = {
  "TM_conversions::CAST_Int_to_V_NVREL/ CAST_Int_to_V_NVREL_TM_conversions",
  scope_195_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVUNFIT/ CAST_Int_to_V_NVUNFIT_TM_conversions */
static const MappingEntry scope_194_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvunfit", NULL, sizeof(V_NVUNFIT), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, v_nvunfit), &_Type_V_NVUNFIT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_194 = {
  "TM_conversions::CAST_Int_to_V_NVUNFIT/ CAST_Int_to_V_NVUNFIT_TM_conversions",
  scope_194_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVONSIGHT/ CAST_Int_to_V_NVONSIGHT_TM_conversions */
static const MappingEntry scope_193_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvonsight", NULL, sizeof(V_NVONSIGHT), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, v_nvonsight), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_193 = {
  "TM_conversions::CAST_Int_to_V_NVONSIGHT/ CAST_Int_to_V_NVONSIGHT_TM_conversions",
  scope_193_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVSTFF/ CAST_Int_to_V_NVSTFF_TM_conversions */
static const MappingEntry scope_192_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvstff", NULL, sizeof(V_NVSTFF), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, v_nvstff), &_Type_V_NVSTFF_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_192 = {
  "TM_conversions::CAST_Int_to_V_NVSTFF/ CAST_Int_to_V_NVSTFF_TM_conversions",
  scope_192_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVSHUNT/ CAST_Int_to_V_NVSHUNT_TM_conversions */
static const MappingEntry scope_191_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvshunt", NULL, sizeof(V_NVSHUNT), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, v_nvshunt), &_Type_V_NVSHUNT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_191 = {
  "TM_conversions::CAST_Int_to_V_NVSHUNT/ CAST_Int_to_V_NVSHUNT_TM_conversions",
  scope_191_entries, 8,
};

/* TM_conversions::CAST_Int_to_D_VALIDNV/ CAST_Int_to_D_VALIDNV_TM_conversions */
static const MappingEntry scope_190_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_validnv", NULL, sizeof(D_VALIDNV), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, d_validnv), &_Type_D_VALIDNV_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_190 = {
  "TM_conversions::CAST_Int_to_D_VALIDNV/ CAST_Int_to_D_VALIDNV_TM_conversions",
  scope_190_entries, 6,
};

/* TM_lib_internal::C_P003V1_unflatten_sections/ C_P003V1_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_189_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_us_array 1", &iter_mapwi_32, sizeof(outC_C_P003V1_us_array_TM_lib_internal), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_318, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L1), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_32_Utils, NULL, NULL, &scope_436, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_32_32), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_32_32_Utils, NULL, NULL, &scope_499, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10223), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L9), &_Type_array__10223_Utils, NULL, NULL, &scope_434, 1, 6},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, sections), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_434, 1, 8}
};
static const MappingScope scope_189 = {
  "TM_lib_internal::C_P003V1_unflatten_sections/ C_P003V1_unflatten_sections_TM_lib_internal",
  scope_189_entries, 9,
};

/* TA_Lib_internal::Update_SP_per_LRBG/ Update_SP_per_LRBG_TA_Lib_internal */
static const MappingEntry scope_188_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "SpeedProfile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, SpeedProfile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 25},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewSpeedProfile 1", NULL, sizeof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_317, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG_loop 1", &iter_foldi_33, sizeof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_316, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L14), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(array__10579), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L15), &_Type_array__10579_Utils, NULL, NULL, &scope_493, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L23), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L24), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L25), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L26), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L27), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L30), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(array__10591), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L34), &_Type_array__10591_Utils, NULL, NULL, &scope_497, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L35), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L39", NULL, sizeof(array__10399), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L39), &_Type_array__10399_Utils, NULL, NULL, &scope_450, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L41", NULL, sizeof(array__10594), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L41), &_Type_array__10594_Utils, NULL, NULL, &scope_498, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L45", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L45), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L46", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L46), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int_33), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L9), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 4}
};
static const MappingScope scope_188 = {
  "TA_Lib_internal::Update_SP_per_LRBG/ Update_SP_per_LRBG_TA_Lib_internal",
  scope_188_entries, 26,
};

/* TA_SSP::Convert_P27_to_DistanceProfile/ _17_Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_187_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "SpeedProfile", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, SpeedProfile), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 23},
  /* 1 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile_1st_section 3", NULL, sizeof(outC_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, Context_3), NULL, NULL, NULL, &scope_315, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile_loop 3", &iter_foldi_33, sizeof(outC__16_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _1_Context_3), NULL, NULL, NULL, &scope_314, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L62", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L62), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 13},
  /* 4 */ { MAP_LOCAL, "_L63", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L63), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L64", NULL, sizeof(array__10582), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L64), &_Type_array__10582_Utils, NULL, NULL, &scope_494, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L65", NULL, sizeof(Q_SCALE), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L65), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L66", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L66), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L67", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L67), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L68", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L68), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L69", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L69), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L70", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L70), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L71", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L71), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 4},
  /* 13 */ { MAP_LOCAL, "_L72", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L72), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_LOCAL, "_L73", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L73), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 2},
  /* 15 */ { MAP_LOCAL, "_L74", NULL, sizeof(array__10585), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L74), &_Type_array__10585_Utils, NULL, NULL, &scope_495, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L76", NULL, sizeof(array__10549), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L76), &_Type_array__10549_Utils, NULL, NULL, &scope_483, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L77", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L77), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L81", NULL, sizeof(array_int_33), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L81), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L82", NULL, sizeof(array_int_33), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L82), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L83", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L83), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L84", NULL, sizeof(array__10420), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L84), &_Type_array__10420_Utils, NULL, NULL, &scope_454, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L85", NULL, sizeof(array__10588), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L85), &_Type_array__10588_Utils, NULL, NULL, &scope_496, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L86", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 22},
  /* 24 */ { MAP_OUTPUT, "section1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, section1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 26},
  /* 25 */ { MAP_OUTPUT, "section1_delay", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, section1_delay), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 25},
  /* 26 */ { MAP_OUTPUT, "v_static_section1", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, v_static_section1), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_187 = {
  "TA_SSP::Convert_P27_to_DistanceProfile/ _17_Convert_P27_to_DistancePr_TA_SSP",
  scope_187_entries, 27,
};

/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter/ MoveSPSectionsToNewLRBGafter_TA_Lib_internal */
static const MappingEntry scope_186_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, ProfileOut), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantSPForNewLRBG 1", NULL, sizeof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_313, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop 1", &iter_foldi_33, sizeof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_312, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_33), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L6), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 7}
};
static const MappingScope scope_186 = {
  "TA_Lib_internal::MoveSPSectionsToNewLRBGafter/ MoveSPSectionsToNewLRBGafter_TA_Lib_internal",
  scope_186_entries, 9,
};

/* TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2 */
static const MappingEntry scope_185_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_section_out", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, P027V1_OBU_section_out), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 14},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 1", NULL, sizeof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_309, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_71, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_Metadata_L2 1", NULL, sizeof(outC_T_Decode_Metadata_L2_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_308, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L172", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L172), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L173", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L173), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L174), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L175", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L175), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L177", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L177), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L179), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_185 = {
  "TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2",
  scope_185_entries, 15,
};

/* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP/ MRSP_Determine_LengthOfTa_TA_MRSP */
static const MappingEntry scope_184_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L10), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L3), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 2},
  /* 8 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_OUTPUT, "length", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_184 = {
  "TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP/ MRSP_Determine_LengthOfTa_TA_MRSP",
  scope_184_entries, 10,
};

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1/ _19_MRSP_SplitAndReverseSSP_L_TA_MRSP */
static const MappingEntry scope_183_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_reverse_cat_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, SSP_reverse_cat_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 1 */ { MAP_OUTPUT, "SSP_reverse_t_cat_out", NULL, sizeof(SSP_t_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, SSP_reverse_t_cat_out), &_Type_SSP_t_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2 1", &iter_map_33, sizeof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_307, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, _L18), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L35", NULL, sizeof(array_int_33), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, _L35), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 3}
};
static const MappingScope scope_183 = {
  "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1/ _19_MRSP_SplitAndReverseSSP_L_TA_MRSP",
  scope_183_entries, 6,
};

/* TA_MRSP::MRSP_BuildTargetList_LOOP/ MRSP_BuildTargetList_LOOP_TA_MRSP */
static const MappingEntry scope_182_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "SSP_Matrix_out", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, SSP_Matrix_out), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 8},
  /* 1 */ { MAP_OUTPUT, "SSP_list_out", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, SSP_list_out), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 9},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindMax_of_all_t_cats 1", NULL, sizeof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_305, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat 1", NULL, sizeof(outC_MRSP_Find_First_in_each_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_304, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix 1", NULL, sizeof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _2_Context_1), NULL, NULL, NULL, &scope_306, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L1), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L2), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_indexed_targets_list_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L3), &_Type_SSP_t_indexed_targets_list_t_TA_MRSP_Utils, NULL, NULL, &scope_469, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L4), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L5), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 7}
};
static const MappingScope scope_182 = {
  "TA_MRSP::MRSP_BuildTargetList_LOOP/ MRSP_BuildTargetList_LOOP_TA_MRSP",
  scope_182_entries, 10,
};

/* TA_MRSP::MRSP_Determine_MRS/ MRSP_Determine_MRS_TA_MRSP */
static const MappingEntry scope_181_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "MRS", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, MRS), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_DetermineRelevantSpeedperCat 1", &iter_map_11, sizeof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_301, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_Lowest_Speed 1", &iter_foldi_11, sizeof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_302, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_int_11), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L11), &_Type_array_int_11_Utils, NULL, NULL, &scope_487, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L3), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L4), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_11), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L5), &_Type_array_int_11_Utils, NULL, NULL, &scope_487, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L8), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_181 = {
  "TA_MRSP::MRSP_Determine_MRS/ MRSP_Determine_MRS_TA_MRSP",
  scope_181_entries, 9,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:then: */
static const MappingEntry scope_180_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_233_IfBlock1), &_Type_Q_DIR_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L5_234_IfBlock1), &_Type_kcg_bool_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_180 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:then:",
  scope_180_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:then: */
static const MappingEntry scope_179_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_226_IfBlock1), &_Type_Q_DIR_Utils, &scope_175_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L5_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_175_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_179 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:then:",
  scope_179_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:then: */
static const MappingEntry scope_178_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_230_IfBlock1), &_Type_Q_DIR_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_231_IfBlock1), &_Type_kcg_bool_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_178 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:then:",
  scope_178_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:else: */
static const MappingEntry scope_177_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_229_IfBlock1), &_Type_kcg_bool_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_228_IfBlock1), &_Type_Q_DIR_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_177 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:else:",
  scope_177_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else: */
static const MappingEntry scope_176_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _27_else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_false, &scope_177, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_true, &scope_178, 1, 2}
};
static const MappingScope scope_176 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:",
  scope_176_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else: */
static const MappingEntry scope_175_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _32_else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_175_entries[0], isActive_kcg_bool_kcg_false, &scope_176, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_175_entries[0], isActive_kcg_bool_kcg_true, &scope_179, 1, 2}
};
static const MappingScope scope_175 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:",
  scope_175_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1: */
static const MappingEntry scope_174_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _25_IfBlock1_clock_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_174_entries[0], isActive_kcg_bool_kcg_false, &scope_175, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_174_entries[0], isActive_kcg_bool_kcg_true, &scope_180, 1, 2}
};
static const MappingScope scope_174 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:",
  scope_174_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/ */
static const MappingEntry scope_173_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_174, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L12_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L13_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _24_error_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_dir_2), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_dir_in_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_173 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/",
  scope_173_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 3/ */
static const MappingEntry scope_172_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L10_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L11_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L12_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L9_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P015_compr_onboard_TM_conversions, n_iter_3), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_172 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 3/",
  scope_172_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:then: */
static const MappingEntry scope_171_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_222_IfBlock1), &_Type_Q_SCALE_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_223_IfBlock1), &_Type_kcg_bool_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_171 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:then:",
  scope_171_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:then: */
static const MappingEntry scope_170_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_2_IfBlock1), &_Type_Q_SCALE_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_170 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:then:",
  scope_170_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:then: */
static const MappingEntry scope_169_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_220_IfBlock1), &_Type_Q_SCALE_Utils, &scope_167_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_167_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_169 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:then:",
  scope_169_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:else: */
static const MappingEntry scope_168_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_219_IfBlock1), &_Type_Q_SCALE_Utils, &scope_167_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_167_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_168 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:else:",
  scope_168_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else: */
static const MappingEntry scope_167_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_167_entries[0], isActive_kcg_bool_kcg_false, &scope_168, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_167_entries[0], isActive_kcg_bool_kcg_true, &scope_169, 1, 2}
};
static const MappingScope scope_167 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:",
  scope_167_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else: */
static const MappingEntry scope_166_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _21_else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_166_entries[0], isActive_kcg_bool_kcg_false, &scope_167, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_166_entries[0], isActive_kcg_bool_kcg_true, &scope_170, 1, 2}
};
static const MappingScope scope_166 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:",
  scope_166_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1: */
static const MappingEntry scope_165_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, IfBlock1_clock_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_165_entries[0], isActive_kcg_bool_kcg_false, &scope_166, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_165_entries[0], isActive_kcg_bool_kcg_true, &scope_171, 1, 2}
};
static const MappingScope scope_165 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:",
  scope_165_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/ */
static const MappingEntry scope_164_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_165, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_217), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, error_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_scale_2), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_scale_in_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_164 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/",
  scope_164_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 2/ */
static const MappingEntry scope_163_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L5_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P015_compr_onboard_TM_conversions, nid_packet_2), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_163 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 2/",
  scope_163_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversions */
static const MappingEntry scope_162_entries[81] = {
  /* 0 */ { MAP_OUTPUT, "P015_onboard", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, P015_onboard), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 80},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_DP 2", NULL, sizeof(outC_CAST_Int_to_D_DP_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _14_Context_2), NULL, NULL, NULL, &scope_263, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC 2", NULL, sizeof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _3_Context_2), NULL, NULL, NULL, &scope_297, 1, 16},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_OL 2", NULL, sizeof(outC_CAST_Int_to_D_OL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _16_Context_2), NULL, NULL, NULL, &scope_264, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC 2", NULL, sizeof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, Context_2), NULL, NULL, NULL, &scope_299, 1, 20},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_STARTOL 2", NULL, sizeof(outC_CAST_Int_to_D_STARTOL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _2_Context_2), NULL, NULL, NULL, &scope_298, 1, 17},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_ENDSECTION 2", NULL, sizeof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _5_Context_2), NULL, NULL, NULL, &scope_295, 1, 13},
  /* 7 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 2", NULL, 0, 0, NULL, NULL, NULL, &scope_163, 1, 12},
  /* 8 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 3", NULL, 0, 0, NULL, NULL, NULL, &scope_172, 1, 18},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_DANGERPOINT 2", NULL, sizeof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _13_Context_2), NULL, NULL, NULL, &scope_280, 1, 7},
  /* 10 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 2", NULL, 0, 0, NULL, NULL, NULL, &scope_173, 1, 19},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_ENDTIMER 2", NULL, sizeof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _7_Context_2), NULL, NULL, NULL, &scope_288, 1, 10},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_OVERLAP 2", NULL, sizeof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _15_Context_2), NULL, NULL, NULL, &scope_268, 1, 5},
  /* 13 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 2", NULL, 0, 0, NULL, NULL, NULL, &scope_164, 1, 14},
  /* 14 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_SECTIONTIMER 2", NULL, sizeof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _11_Context_2), NULL, NULL, NULL, &scope_274, 1, 6},
  /* 15 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_ENDTIMER 2", NULL, sizeof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _12_Context_2), NULL, NULL, NULL, &scope_266, 1, 3},
  /* 16 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_LOA 2", NULL, sizeof(outC_CAST_Int_to_T_LOA_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _10_Context_2), NULL, NULL, NULL, &scope_286, 1, 8},
  /* 17 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_OL 2", NULL, sizeof(outC_CAST_Int_to_T_OL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _8_Context_2), NULL, NULL, NULL, &scope_287, 1, 9},
  /* 18 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_SECTIONTIMER 1", NULL, sizeof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_300, 1, 21},
  /* 19 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_LOA 2", NULL, sizeof(outC_CAST_Int_to_V_LOA_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _9_Context_2), NULL, NULL, NULL, &scope_265, 1, 2},
  /* 20 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_RELEASEDP 2", NULL, sizeof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _6_Context_2), NULL, NULL, NULL, &scope_294, 1, 11},
  /* 21 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_RELEASEOL 2", NULL, sizeof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _4_Context_2), NULL, NULL, NULL, &scope_296, 1, 15},
  /* 22 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_unflatten_sections 1", NULL, sizeof(outC_C_P015_unflatten_sections_TM_lib_internal), offsetof(outC_C_P015_compr_onboard_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_267, 1, 4},
  /* 23 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 67},
  /* 24 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L101), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 68},
  /* 25 */ { MAP_LOCAL, "_L102", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L102), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 62},
  /* 26 */ { MAP_LOCAL, "_L103", NULL, sizeof(Q_OVERLAP), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L103), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 61},
  /* 27 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L104), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 47},
  /* 28 */ { MAP_LOCAL, "_L105", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L105), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 48},
  /* 29 */ { MAP_LOCAL, "_L106", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L106), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 30 */ { MAP_LOCAL, "_L107", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L107), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 50},
  /* 31 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L108), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 51},
  /* 32 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L109), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 52},
  /* 33 */ { MAP_LOCAL, "_L110", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L110), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 53},
  /* 34 */ { MAP_LOCAL, "_L111", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L111), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 54},
  /* 35 */ { MAP_LOCAL, "_L112", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L112), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 55},
  /* 36 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L113), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 56},
  /* 37 */ { MAP_LOCAL, "_L114", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L114), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 57},
  /* 38 */ { MAP_LOCAL, "_L115", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L115), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 58},
  /* 39 */ { MAP_LOCAL, "_L116", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L116), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 59},
  /* 40 */ { MAP_LOCAL, "_L117", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L117), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 60},
  /* 41 */ { MAP_LOCAL, "_L118", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L118), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 46},
  /* 42 */ { MAP_LOCAL, "_L119", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L119), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 45},
  /* 43 */ { MAP_LOCAL, "_L120", NULL, sizeof(array_int_128), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L120), &_Type_array_int_128_Utils, NULL, NULL, &scope_415, 1, 44},
  /* 44 */ { MAP_LOCAL, "_L121", NULL, sizeof(T_LOA), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L121), &_Type_T_LOA_Utils, NULL, NULL, NULL, 1, 43},
  /* 45 */ { MAP_LOCAL, "_L122", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L122), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 42},
  /* 46 */ { MAP_LOCAL, "_L123", NULL, sizeof(T_OL), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L123), &_Type_T_OL_Utils, NULL, NULL, NULL, 1, 41},
  /* 47 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L124), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 48 */ { MAP_LOCAL, "_L125", NULL, sizeof(array_int_6), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L125), &_Type_array_int_6_Utils, NULL, NULL, &scope_414, 1, 39},
  /* 49 */ { MAP_LOCAL, "_L126", NULL, sizeof(Q_ENDTIMER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L126), &_Type_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 38},
  /* 50 */ { MAP_LOCAL, "_L127", NULL, sizeof(V_RELEASEDP), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L127), &_Type_V_RELEASEDP_Utils, NULL, NULL, NULL, 1, 37},
  /* 51 */ { MAP_LOCAL, "_L128", NULL, sizeof(NID_PACKET), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L128), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 36},
  /* 52 */ { MAP_LOCAL, "_L129", NULL, sizeof(L_ENDSECTION), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L129), &_Type_L_ENDSECTION_Utils, NULL, NULL, NULL, 1, 35},
  /* 53 */ { MAP_LOCAL, "_L130", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L130), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 34},
  /* 54 */ { MAP_LOCAL, "_L131", NULL, sizeof(V_RELEASEOL), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L131), &_Type_V_RELEASEOL_Utils, NULL, NULL, NULL, 1, 33},
  /* 55 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L132), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 56 */ { MAP_LOCAL, "_L133", NULL, sizeof(D_ENDTIMERSTARTLOC), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L133), &_Type_D_ENDTIMERSTARTLOC_Utils, NULL, NULL, NULL, 1, 31},
  /* 57 */ { MAP_LOCAL, "_L134", NULL, sizeof(D_STARTOL), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L134), &_Type_D_STARTOL_Utils, NULL, NULL, NULL, 1, 30},
  /* 58 */ { MAP_LOCAL, "_L135", NULL, sizeof(N_ITER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L135), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 29},
  /* 59 */ { MAP_LOCAL, "_L136", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L136), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 28},
  /* 60 */ { MAP_LOCAL, "_L137", NULL, sizeof(D_SECTIONTIMERSTOPLOC), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L137), &_Type_D_SECTIONTIMERSTOPLOC_Utils, NULL, NULL, NULL, 1, 27},
  /* 61 */ { MAP_LOCAL, "_L138", NULL, sizeof(array_int_15), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L138), &_Type_array_int_15_Utils, NULL, NULL, &scope_382, 1, 26},
  /* 62 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L139), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 63 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L140), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76},
  /* 64 */ { MAP_LOCAL, "_L141", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L141), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 77},
  /* 65 */ { MAP_LOCAL, "_L142", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L142), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 78},
  /* 66 */ { MAP_LOCAL, "_L143", NULL, sizeof(T_SECTIONTIMER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L143), &_Type_T_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 79},
  /* 67 */ { MAP_LOCAL, "_L89", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L89), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 75},
  /* 68 */ { MAP_LOCAL, "_L90", NULL, sizeof(D_DP), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L90), &_Type_D_DP_Utils, NULL, NULL, NULL, 1, 74},
  /* 69 */ { MAP_LOCAL, "_L91", NULL, sizeof(D_OL), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L91), &_Type_D_OL_Utils, NULL, NULL, NULL, 1, 73},
  /* 70 */ { MAP_LOCAL, "_L92", NULL, sizeof(V_LOA), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L92), &_Type_V_LOA_Utils, NULL, NULL, NULL, 1, 72},
  /* 71 */ { MAP_LOCAL, "_L93", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L93), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 71},
  /* 72 */ { MAP_LOCAL, "_L94", NULL, sizeof(T_ENDTIMER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L94), &_Type_T_ENDTIMER_Utils, NULL, NULL, NULL, 1, 70},
  /* 73 */ { MAP_LOCAL, "_L95", NULL, sizeof(N_ITER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L95), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 69},
  /* 74 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L96), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 63},
  /* 75 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L97), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 64},
  /* 76 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L98), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 65},
  /* 77 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 66},
  /* 78 */ { MAP_LOCAL, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P015_compr_onboard_TM_conversions, n_iter), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 22},
  /* 79 */ { MAP_LOCAL, "nid_packet_ok", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, nid_packet_ok), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 80 */ { MAP_LOCAL, "sections", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, sections), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 24}
};
static const MappingScope scope_162 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversions",
  scope_162_entries, 81,
};

/* TA_Lib_internal::FindStartOfNewGradientProfile/ FindStartOfNewGradientProfile_TA_Lib_internal */
static const MappingEntry scope_161_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewGradientProfile_LOOP 1", &iter_foldwi_33, sizeof(outC_FindStartOfNewGradientPro_TA_Lib_internal), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L198", NULL, sizeof(array_int_33), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L198), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L2), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L93", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L93), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L98", NULL, sizeof(array__10543), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L98), &_Type_array__10543_Utils, NULL, NULL, &scope_481, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_161 = {
  "TA_Lib_internal::FindStartOfNewGradientProfile/ FindStartOfNewGradientProfile_TA_Lib_internal",
  scope_161_entries, 11,
};

/* TA_Lib_internal::Update_GP_per_LRBG_loop/ Update_GP_per_LRBG_loop_TA_Lib_internal */
static const MappingEntry scope_160_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, GradientProfile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L15), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_421, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L19), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L20), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L6), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_160 = {
  "TA_Lib_internal::Update_GP_per_LRBG_loop/ Update_GP_per_LRBG_loop_TA_Lib_internal",
  scope_160_entries, 9,
};

/* TA_Gradient::Convert_P21_to_DistanceProfile_loop/ Convert_P21_to_DistancePr_TA_Gradient */
static const MappingEntry scope_159_entries[25] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, GradientProfile), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 24},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_Q_GDIR 2", NULL, sizeof(outC_EVAL_Q_GDIR_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_2), NULL, NULL, NULL, &scope_261, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 3", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_3), NULL, NULL, NULL, &scope_255, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 4", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_4), NULL, NULL, NULL, &scope_255, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L121", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L121), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 23},
  /* 5 */ { MAP_LOCAL, "_L122", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L122), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 22},
  /* 6 */ { MAP_LOCAL, "_L123", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L123), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_474, 1, 21},
  /* 7 */ { MAP_LOCAL, "_L124", NULL, sizeof(G_A), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L124), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 20},
  /* 8 */ { MAP_LOCAL, "_L125", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L125), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 19},
  /* 9 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L126), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 10 */ { MAP_LOCAL, "_L127", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L127), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L128", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L128), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L129", NULL, sizeof(Q_GDIR), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L129), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_bool), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L130), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L131), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L132), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L133", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L133), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L134), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L135", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L135), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L136", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L136), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_421, 1, 8},
  /* 20 */ { MAP_LOCAL, "_L137", NULL, sizeof(D_GRADIENT), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L137), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 7},
  /* 21 */ { MAP_LOCAL, "_L138", NULL, sizeof(D_GRADIENT), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L138), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 6},
  /* 22 */ { MAP_LOCAL, "_L139", NULL, sizeof(Q_SCALE), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L139), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_LOCAL, "_L140", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L140), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_474, 1, 4},
  /* 24 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L141), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_159 = {
  "TA_Gradient::Convert_P21_to_DistanceProfile_loop/ Convert_P21_to_DistancePr_TA_Gradient",
  scope_159_entries, 25,
};

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG/ FindFirstRelevantGPForNewLRBG_TA_Lib_internal */
static const MappingEntry scope_158_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop 1", &iter_foldwi_33, sizeof(outC_FindFirstRelevantGPForNew_TA_Lib_internal), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_254, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L169", NULL, sizeof(array__10543), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L169), &_Type_array__10543_Utils, NULL, NULL, &scope_481, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L93", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L93), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_158 = {
  "TA_Lib_internal::FindFirstRelevantGPForNewLRBG/ FindFirstRelevantGPForNewLRBG_TA_Lib_internal",
  scope_158_entries, 10,
};

/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop/ MoveGPSectionsToNewLRBGaf_TA_Lib_internal */
static const MappingEntry scope_157_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, ProfileOut), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 12},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::NormalizePos 1", NULL, sizeof(outC_NormalizePos_TA_Lib_internal), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_253, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L6), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_421, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L7), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L8), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L9), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_421, 1, 9}
};
static const MappingScope scope_157 = {
  "TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop/ MoveGPSectionsToNewLRBGaf_TA_Lib_internal",
  scope_157_entries, 13,
};

/* TM_lib_internal::C_P021_unflatten_sections/ C_P021_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_156_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_us_array 1", &iter_mapwi_33, sizeof(outC_C_P021_us_array_TM_lib_internal), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_252, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_473, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_99_33), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_99_33_Utils, NULL, NULL, &scope_480, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10520), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L9), &_Type_array__10520_Utils, NULL, NULL, &scope_475, 1, 6},
  /* 11 */ { MAP_OUTPUT, "sections", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, sections), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 11}
};
static const MappingScope scope_156 = {
  "TM_lib_internal::C_P021_unflatten_sections/ C_P021_unflatten_sections_TM_lib_internal",
  scope_156_entries, 12,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_155_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_479, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_155 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_155_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_154_entries[25] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 24},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_249, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_250, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_477, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L38", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L38), &_Type_array_bool_30_Utils, NULL, NULL, &scope_478, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_LOCAL, "_L40", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L40), &_Type_array_bool_30_Utils, NULL, NULL, &scope_478, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_154 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_154_entries, 25,
};

/* MA_Request::op_RepeatReq/ op_RepeatReq_MA_Requestlinear::MemoryBasic 1/ */
static const MappingEntry scope_153_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, Memorized_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L4@mem", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L4_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 0, 1},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, _L5_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L6_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L7_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_153 = {
  "MA_Request::op_RepeatReq/ op_RepeatReq_MA_Requestlinear::MemoryBasic 1/",
  scope_153_entries, 6,
};

/* MA_Request::op_RepeatReq/ op_RepeatReq_MA_Request */
static const MappingEntry scope_152_entries[14] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_INSTANCE, "Safe_MOD_int 1", NULL, sizeof(outC_Safe_MOD_int), offsetof(outC_op_RepeatReq_MA_Request, Context_1), NULL, NULL, NULL, &scope_248, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_CYCLOC), offsetof(outC_op_RepeatReq_MA_Request, _L4), &_Type_T_CYCLOC_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_RepeatReq_MA_Request, _L6), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_RepeatReq_MA_Request, _L9), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_153, 1, 3},
  /* 12 */ { MAP_LOCAL, "setRepeater@mem", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, rem_setRepeater), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 13 */ { MAP_OUTPUT, "trigger", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, trigger), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_152 = {
  "MA_Request::op_RepeatReq/ op_RepeatReq_MA_Request",
  scope_152_entries, 14,
};

/* MA_Request::op_3_8_2_3_b/ op_3_8_2_3_b_MA_Request */
static const MappingEntry scope_151_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MA_Request::CompareSectionTimer 1", &iter_fold_10, sizeof(outC_CompareSectionTimer_MA_Request), offsetof(outC_op_3_8_2_3_b_MA_Request, Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_op_3_8_2_3_b_MA_Request, _L1), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(_4_MovementAuthoritySectionlist_t_TrackAtlasTypes), offsetof(outC_op_3_8_2_3_b_MA_Request, _L11), &_Type__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_389, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_op_3_8_2_3_b_MA_Request, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_op_3_8_2_3_b_MA_Request, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_b_MA_Request, _L6), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_b_MA_Request, _L7), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "triggerMA", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_151 = {
  "MA_Request::op_3_8_2_3_b/ op_3_8_2_3_b_MA_Request",
  scope_151_entries, 11,
};

/* MA_Request::op_3_8_2_3_a/ op_3_8_2_3_a_MA_Request */
static const MappingEntry scope_150_entries[21] = {
  /* 0 */ { MAP_INSTANCE, "Safe_DIV_real 1", NULL, sizeof(outC_Safe_DIV_real), offsetof(outC_op_3_8_2_3_a_MA_Request, Context_1), NULL, NULL, NULL, &scope_246, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Safe_DIV_real 2", NULL, sizeof(outC_Safe_DIV_real), offsetof(outC_op_3_8_2_3_a_MA_Request, Context_2), NULL, NULL, NULL, &scope_246, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_op_3_8_2_3_a_MA_Request, _L1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L11), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_real), offsetof(outC_op_3_8_2_3_a_MA_Request, _L17), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_a_MA_Request, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L19), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(T_MAR), offsetof(outC_op_3_8_2_3_a_MA_Request, _L2), &_Type_T_MAR_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L4), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_399, 1, 2},
  /* 16 */ { MAP_LOCAL, "_L5", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L5), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_393, 1, 6},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L7), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_op_3_8_2_3_a_MA_Request, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L9), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_397, 1, 9},
  /* 20 */ { MAP_OUTPUT, "triggerMA", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_a_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20}
};
static const MappingScope scope_150 = {
  "MA_Request::op_3_8_2_3_a/ op_3_8_2_3_a_MA_Request",
  scope_150_entries, 21,
};

/* TM::Read_P057/ Read_P057_TM */
static const MappingEntry scope_149_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P057_OBU_out", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Read_P057_TM, P057_OBU_out), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P057_compr_onboard 1", NULL, sizeof(outC_C_P057_compr_onboard_TM_conversions), offsetof(outC_Read_P057_TM, _1_Context_1), NULL, NULL, NULL, &scope_236, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P057_TM, Context_1), NULL, NULL, NULL, &scope_71, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Read_P057_TM, _L166), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P057_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P057_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P057_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P057_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 3},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P057_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_149 = {
  "TM::Read_P057/ Read_P057_TM",
  scope_149_entries, 9,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_148_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_138), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_136), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_137), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_148 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_148_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_147_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_134_IfBlock1), &_Type_Q_DIR_Utils, &scope_141_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_135_IfBlock1), &_Type_kcg_bool_Utils, &scope_141_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_147 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_147_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_146_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_127_IfBlock1), &_Type_Q_DIR_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_146 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_146_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_145_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_131_IfBlock1), &_Type_Q_DIR_Utils, &scope_143_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_132_IfBlock1), &_Type_kcg_bool_Utils, &scope_143_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_145 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_145_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_144_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_130_IfBlock1), &_Type_kcg_bool_Utils, &scope_143_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_129_IfBlock1), &_Type_Q_DIR_Utils, &scope_143_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_144 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_144_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_143_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _28_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_143_entries[0], isActive_kcg_bool_kcg_false, &scope_144, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_143_entries[0], isActive_kcg_bool_kcg_true, &scope_145, 1, 2}
};
static const MappingScope scope_143 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_143_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_142_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _33_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_false, &scope_143, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_true, &scope_146, 1, 2}
};
static const MappingScope scope_142 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_142_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_141_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _26_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_141_entries[0], isActive_kcg_bool_kcg_false, &scope_142, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_141_entries[0], isActive_kcg_bool_kcg_true, &scope_147, 1, 2}
};
static const MappingScope scope_141 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_141_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_140_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_141, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _24__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _25_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_140 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_140_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_139_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L9_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_139 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/",
  scope_139_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_138_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_122_IfBlock1), &_Type_Q_SCALE_Utils, &scope_132_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_123_IfBlock1), &_Type_kcg_bool_Utils, &scope_132_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_138 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_138_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_137_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_133_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_133_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_137 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_137_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_136_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_120_IfBlock1), &_Type_Q_SCALE_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_136 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_136_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_135_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_119_IfBlock1), &_Type_Q_SCALE_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_135 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_135_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_134_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_false, &scope_135, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_136, 1, 2}
};
static const MappingScope scope_134 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_134_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_133_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _21_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_false, &scope_134, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_137, 1, 2}
};
static const MappingScope scope_133 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_133_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_132_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_false, &scope_133, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_138, 1, 2}
};
static const MappingScope scope_132 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_132_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_131_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_132, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_131 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_131_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2 */
static const MappingEntry scope_130_entries[83] = {
  /* 0 */ { MAP_OUTPUT, "P003V1_onboard", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, P003V1_onboard), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 82},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVOVTRP 1", NULL, sizeof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _7_Context_1), NULL, NULL, NULL, &scope_205, 1, 15},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVPOTRP 2", NULL, sizeof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_213, 1, 18},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVROLL 1", NULL, sizeof(outC_CAST_Int_to_D_NVROLL_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _11_Context_1), NULL, NULL, NULL, &scope_196, 1, 11},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVSTFF 1", NULL, sizeof(outC_CAST_Int_to_D_NVSTFF_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_235, 1, 23},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_VALIDNV 1", NULL, sizeof(outC_CAST_Int_to_D_VALIDNV_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _17_Context_1), NULL, NULL, NULL, &scope_190, 1, 5},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_NVCONTACT 1", NULL, sizeof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _4_Context_1), NULL, NULL, NULL, &scope_214, 1, 19},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_NVDERUN 1", NULL, sizeof(outC_CAST_Int_to_M_NVDERUN_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_223, 1, 21},
  /* 8 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_148, 1, 4},
  /* 9 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_139, 1, 2},
  /* 10 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_140, 1, 3},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES 1", NULL, sizeof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_229, 1, 22},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVEMRRLS 1", NULL, sizeof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _5_Context_1), NULL, NULL, NULL, &scope_207, 1, 17},
  /* 13 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM 1", NULL, sizeof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _10_Context_1), NULL, NULL, NULL, &scope_197, 1, 12},
  /* 14 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_131, 1, 0},
  /* 15 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_NVCONTACT 1", NULL, sizeof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_222, 1, 20},
  /* 16 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_NVOVTRP 1", NULL, sizeof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _6_Context_1), NULL, NULL, NULL, &scope_206, 1, 16},
  /* 17 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVALLOWOVTRP 1", NULL, sizeof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _9_Context_1), NULL, NULL, NULL, &scope_203, 1, 13},
  /* 18 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVONSIGHT 1", NULL, sizeof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _14_Context_1), NULL, NULL, NULL, &scope_193, 1, 8},
  /* 19 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVREL 1", NULL, sizeof(outC_CAST_Int_to_V_NVREL_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _12_Context_1), NULL, NULL, NULL, &scope_195, 1, 10},
  /* 20 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSHUNT 1", NULL, sizeof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _16_Context_1), NULL, NULL, NULL, &scope_191, 1, 6},
  /* 21 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSTFF 1", NULL, sizeof(outC_CAST_Int_to_V_NVSTFF_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _15_Context_1), NULL, NULL, NULL, &scope_192, 1, 7},
  /* 22 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSUPOVTRP 2", NULL, sizeof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _8_Context_2), NULL, NULL, NULL, &scope_204, 1, 14},
  /* 23 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVUNFIT 1", NULL, sizeof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _13_Context_1), NULL, NULL, NULL, &scope_194, 1, 9},
  /* 24 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_unflatten_sections 1", NULL, sizeof(outC_C_P003V1_unflatten_sections_TM_lib_internal), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _18_Context_1), NULL, NULL, NULL, &scope_189, 1, 1},
  /* 25 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_24), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1), &_Type_array_int_24_Utils, NULL, NULL, &scope_437, 1, 33},
  /* 26 */ { MAP_LOCAL, "_L10", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L10), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 28},
  /* 27 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 27},
  /* 28 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_int_32), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L13), &_Type_array_int_32_Utils, NULL, NULL, &scope_436, 1, 25},
  /* 30 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 31 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 32 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 33 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 35 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 36 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 59},
  /* 37 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 58},
  /* 38 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 57},
  /* 39 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 56},
  /* 40 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 55},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 54},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 53},
  /* 43 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 52},
  /* 44 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 51},
  /* 45 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 47 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 48},
  /* 48 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 47},
  /* 49 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 46},
  /* 50 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 45},
  /* 51 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 44},
  /* 52 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L39), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 53 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 32},
  /* 54 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 55 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 56 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 57 */ { MAP_LOCAL, "_L43", NULL, sizeof(D_VALIDNV), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L43), &_Type_D_VALIDNV_Utils, NULL, NULL, NULL, 1, 60},
  /* 58 */ { MAP_LOCAL, "_L45", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L45), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 61},
  /* 59 */ { MAP_LOCAL, "_L46", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L46), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 62},
  /* 60 */ { MAP_LOCAL, "_L47", NULL, sizeof(V_NVSHUNT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L47), &_Type_V_NVSHUNT_Utils, NULL, NULL, NULL, 1, 63},
  /* 61 */ { MAP_LOCAL, "_L48", NULL, sizeof(V_NVSTFF), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L48), &_Type_V_NVSTFF_Utils, NULL, NULL, NULL, 1, 64},
  /* 62 */ { MAP_LOCAL, "_L49", NULL, sizeof(V_NVONSIGHT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L49), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 65},
  /* 63 */ { MAP_LOCAL, "_L5", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_434, 1, 31},
  /* 64 */ { MAP_LOCAL, "_L50", NULL, sizeof(V_NVUNFIT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L50), &_Type_V_NVUNFIT_Utils, NULL, NULL, NULL, 1, 66},
  /* 65 */ { MAP_LOCAL, "_L51", NULL, sizeof(V_NVREL), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L51), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 67},
  /* 66 */ { MAP_LOCAL, "_L52", NULL, sizeof(D_NVROLL), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L52), &_Type_D_NVROLL_Utils, NULL, NULL, NULL, 1, 68},
  /* 67 */ { MAP_LOCAL, "_L53", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L53), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 69},
  /* 68 */ { MAP_LOCAL, "_L54", NULL, sizeof(V_NVALLOWOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L54), &_Type_V_NVALLOWOVTRP_Utils, NULL, NULL, NULL, 1, 70},
  /* 69 */ { MAP_LOCAL, "_L56", NULL, sizeof(V_NVSUPOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L56), &_Type_V_NVSUPOVTRP_Utils, NULL, NULL, NULL, 1, 71},
  /* 70 */ { MAP_LOCAL, "_L57", NULL, sizeof(D_NVOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L57), &_Type_D_NVOVTRP_Utils, NULL, NULL, NULL, 1, 72},
  /* 71 */ { MAP_LOCAL, "_L58", NULL, sizeof(T_NVOVTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L58), &_Type_T_NVOVTRP_Utils, NULL, NULL, NULL, 1, 73},
  /* 72 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L59), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 74},
  /* 73 */ { MAP_LOCAL, "_L60", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L60), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 75},
  /* 74 */ { MAP_LOCAL, "_L62", NULL, sizeof(D_NVPOTRP), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L62), &_Type_D_NVPOTRP_Utils, NULL, NULL, NULL, 1, 76},
  /* 75 */ { MAP_LOCAL, "_L63", NULL, sizeof(M_NVCONTACT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L63), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 77},
  /* 76 */ { MAP_LOCAL, "_L64", NULL, sizeof(T_NVCONTACT), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L64), &_Type_T_NVCONTACT_Utils, NULL, NULL, NULL, 1, 78},
  /* 77 */ { MAP_LOCAL, "_L65", NULL, sizeof(M_NVDERUN), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L65), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 79},
  /* 78 */ { MAP_LOCAL, "_L66", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L66), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 80},
  /* 79 */ { MAP_LOCAL, "_L67", NULL, sizeof(D_NVSTFF), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L67), &_Type_D_NVSTFF_Utils, NULL, NULL, NULL, 1, 81},
  /* 80 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 30},
  /* 81 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 29},
  /* 82 */ { MAP_LOCAL, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, n_iter), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_130 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2",
  scope_130_entries, 83,
};

/* TA_SSP::Update_LRBG_only/ Update_LRBG_only_TA_SSP */
static const MappingEntry scope_129_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_only_TA_SSP, Context_1), NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_only_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_only_TA_SSP, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_only_TA_SSP, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L34", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_SSP, _L34), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L35", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_SSP, _L35), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_only_TA_SSP, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_only_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7}
};
static const MappingScope scope_129 = {
  "TA_SSP::Update_LRBG_only/ Update_LRBG_only_TA_SSP",
  scope_129_entries, 8,
};

/* TA_SSP::Update_SSP_only/ Update_SSP_only_TA_SSP */
static const MappingEntry scope_128_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG 1", NULL, sizeof(outC_Update_SP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_SSP_only_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile 1", NULL, sizeof(outC__17_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC_Update_SSP_only_TA_SSP, Context_1), NULL, NULL, NULL, &scope_187, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Update_SSP_only_TA_SSP, _L2), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_only_TA_SSP, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_only_TA_SSP, _L6), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L7), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L8), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 6},
  /* 10 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 10}
};
static const MappingScope scope_128 = {
  "TA_SSP::Update_SSP_only/ Update_SSP_only_TA_SSP",
  scope_128_entries, 11,
};

/* TA_SSP::Update_SSP_then_LRBG/ Update_SSP_then_LRBG_TA_SSP */
static const MappingEntry scope_127_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _2_Context_1), NULL, NULL, NULL, &scope_186, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG 1", NULL, sizeof(outC_Update_SP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_188, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile 1", NULL, sizeof(outC__17_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, Context_1), NULL, NULL, NULL, &scope_187, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L11), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 14},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L12), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L13), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L2), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L6), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L7), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L8), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L9), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 10},
  /* 16 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 16}
};
static const MappingScope scope_127 = {
  "TA_SSP::Update_SSP_then_LRBG/ Update_SSP_then_LRBG_TA_SSP",
  scope_127_entries, 17,
};

/* TA_SSP::Update_LRBG_then_SSP/ Update_LRBG_then_SSP_TA_SSP */
static const MappingEntry scope_126_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG 1", NULL, sizeof(outC_Update_SP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _2_Context_1), NULL, NULL, NULL, &scope_188, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile 1", NULL, sizeof(outC__17_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, Context_1), NULL, NULL, NULL, &scope_187, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L10), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L11), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 14},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L12), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_449, 1, 15},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L13), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L2), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L7), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L8), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L9), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 12},
  /* 16 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 16}
};
static const MappingScope scope_126 = {
  "TA_SSP::Update_LRBG_then_SSP/ Update_LRBG_then_SSP_TA_SSP",
  scope_126_entries, 17,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/ */
static const MappingEntry scope_125_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L68", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L68_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L69_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L70", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L70_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L71", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L71_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L75_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 6}
};
static const MappingScope scope_125 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/",
  scope_125_entries, 7,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_124_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _18__L4_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _19__L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_124 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_124_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_123_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _11__L3_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_119_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_119_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_123 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_123_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_122_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _15__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _16__L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_122 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_122_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_121_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _14__L1_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _13__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_121 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_121_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_120_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _12_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_false, &scope_121, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_true, &scope_122, 1, 2}
};
static const MappingScope scope_120 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_120_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_119_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _17_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_119_entries[0], isActive_kcg_bool_kcg_false, &scope_120, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_119_entries[0], isActive_kcg_bool_kcg_true, &scope_123, 1, 2}
};
static const MappingScope scope_119 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_119_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_118_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _10_IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_kcg_bool_kcg_false, &scope_119, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_kcg_bool_kcg_true, &scope_124, 1, 2}
};
static const MappingScope scope_118 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_118_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_117_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_118, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L12_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L13_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _9_error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_1_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_117 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_117_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_116_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _7__L2_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_110_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _8__L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_116 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_116_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_115_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_115 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_115_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_114_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _5__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_114 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_114_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_113_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _4__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_113 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_113_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_112_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_false, &scope_113, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_true, &scope_114, 1, 2}
};
static const MappingScope scope_112 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_112_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_111_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _6_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_false, &scope_112, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_true, &scope_115, 1, 2}
};
static const MappingScope scope_111 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_111_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_110_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive_kcg_bool_kcg_false, &scope_111, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive_kcg_bool_kcg_true, &scope_116, 1, 2}
};
static const MappingScope scope_110 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_110_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_109_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_110, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _3__L2_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _2__L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_1_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_109 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_109_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_108_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, nid_packet_1_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_108 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_108_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/ */
static const MappingEntry scope_107_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_body", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_OBU_body_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 2},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_108, 1, 3},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_117, 1, 5},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_109, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L10_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L14_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L15_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L16_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L18_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L20_1), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L21_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L22_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L24_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L25_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, _L28_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L29_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L30_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_5), offsetof(outC_Read_P027V1_TM_baseline2, _L6_1), &_Type_array_int_5_Utils, NULL, NULL, &scope_457, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L9_1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 10},
  /* 19 */ { MAP_OUTPUT, "meta_qdiff", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, meta_qdiff_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 20 */ { MAP_OUTPUT, "n_iter_sections", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, n_iter_sections_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_107 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/",
  scope_107_entries, 21,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2 */
static const MappingEntry scope_106_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 19},
  /* 1 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1_sections 1", &iter_mapwi_33, sizeof(outC_Read_P027V1_sections_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_185, 1, 0},
  /* 2 */ { MAP_EXPANDED, "TM_conversions_baseline2::C_P027V1_compr_onboard_body 1", NULL, 0, 0, NULL, NULL, NULL, &scope_107, 1, 2},
  /* 3 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_merge_body_sections 1", NULL, 0, 0, NULL, NULL, NULL, &scope_125, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_71, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L166", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L166), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L167), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L169", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L169), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L171", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L171), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L172", NULL, sizeof(array__10576), offsetof(outC_Read_P027V1_TM_baseline2, _L172), &_Type_array__10576_Utils, NULL, NULL, &scope_492, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L178", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L178), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L182", NULL, sizeof(array__10420), offsetof(outC_Read_P027V1_TM_baseline2, _L182), &_Type_array__10420_Utils, NULL, NULL, &scope_454, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L184", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L184), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L185", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L185), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L186", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L186), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 5},
  /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_TM_baseline2, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 4},
  /* 19 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_106 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2",
  scope_106_entries, 20,
};

/* TA_MRSP::MRSP_Determine_LengthOfTargetList/ _18_MRSP_Determine_LengthOfTa_TA_MRSP */
static const MappingEntry scope_105_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP 1", &iter_foldwi_363, sizeof(outC_MRSP_Determine_LengthOfTa_TA_MRSP), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_184, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L179", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L179), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L180), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L182), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L183", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L183), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L2), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 1},
  /* 7 */ { MAP_OUTPUT, "length", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_105 = {
  "TA_MRSP::MRSP_Determine_LengthOfTargetList/ _18_MRSP_Determine_LengthOfTa_TA_MRSP",
  scope_105_entries, 8,
};

/* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix/ MRSP_Split_And_Reverse_SS_TA_MRSP */
static const MappingEntry scope_104_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_reverse_matrix_out", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, SSP_reverse_matrix_out), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 5},
  /* 1 */ { MAP_OUTPUT, "SSP_reverse_t_matrix_out", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, SSP_reverse_t_matrix_out), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1 1", &iter_map_11, sizeof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_183, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, _L1), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(array_int_33_11), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, _L27), &_Type_array_int_33_11_Utils, NULL, NULL, &scope_463, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L51", NULL, sizeof(array__10442), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, _L51), &_Type_array__10442_Utils, NULL, NULL, &scope_459, 1, 3}
};
static const MappingScope scope_104 = {
  "TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix/ MRSP_Split_And_Reverse_SS_TA_MRSP",
  scope_104_entries, 6,
};

/* TA_MRSP::MRSP_BuildTargetList/ MRSP_BuildTargetList_TA_MRSP */
static const MappingEntry scope_103_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_list_out", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, SSP_list_out), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 5},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_BuildTargetList_LOOP 1", &iter_mapfold_363, sizeof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_182, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(array__10451), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L1), &_Type_array__10451_Utils, NULL, NULL, &scope_461, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L4), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L5), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 4}
};
static const MappingScope scope_103 = {
  "TA_MRSP::MRSP_BuildTargetList/ MRSP_BuildTargetList_TA_MRSP",
  scope_103_entries, 6,
};

/* TA_MRSP::MRSP_Build_MRSP_LOOP/ MRSP_Build_MRSP_LOOP_TA_MRSP */
static const MappingEntry scope_102_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "MRSP_section_out", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, MRSP_section_out), &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_467, 1, 13},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_MRS 1", NULL, sizeof(outC_MRSP_Determine_MRS_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_181, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L211", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L211), &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_467, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L213", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L213), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L25", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L25), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L26), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L27), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L792", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L792), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L976", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L976), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L977", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L977), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 11},
  /* 13 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_102 = {
  "TA_MRSP::MRSP_Build_MRSP_LOOP/ MRSP_Build_MRSP_LOOP_TA_MRSP",
  scope_102_entries, 14,
};

/* TA_MA::MA_storage/ MA_storage_TA_MA */
static const MappingEntry scope_101_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Packet15_out", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_MA_storage_TA_MA, Packet15_out), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_MA_storage_TA_MA, _L1), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_MA_storage_TA_MA, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_OUTPUT, "vald_MA", NULL, sizeof(kcg_bool), offsetof(outC_MA_storage_TA_MA, vald_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_101 = {
  "TA_MA::MA_storage/ MA_storage_TA_MA",
  scope_101_entries, 4,
};

/* TM::Read_P015/ Read_P015_TM */
static const MappingEntry scope_100_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P015_OBU_out", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Read_P015_TM, P015_OBU_out), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P015_compr_onboard 1", NULL, sizeof(outC_C_P015_compr_onboard_TM_conversions), offsetof(outC_Read_P015_TM, _1_Context_1), NULL, NULL, NULL, &scope_162, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P015_TM, Context_1), NULL, NULL, NULL, &scope_71, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Read_P015_TM, _L166), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P015_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P015_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P015_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P015_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 3},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P015_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_100 = {
  "TM::Read_P015/ Read_P015_TM",
  scope_100_entries, 9,
};

/* TA_Lib_internal::EVAL_Q_OVERLAP/ EVAL_Q_OVERLAP_TA_Lib_internal */
static const MappingEntry scope_99_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_OVERLAP), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, _L1), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_OVERLAP), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, _L3), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "q_dp_bool", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, q_dp_bool), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_99 = {
  "TA_Lib_internal::EVAL_Q_OVERLAP/ EVAL_Q_OVERLAP_TA_Lib_internal",
  scope_99_entries, 4,
};

/* TA_Lib_internal::EVAL_V_Release/ EVAL_V_Release_TA_Lib_internal */
static const MappingEntry scope_98_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "V_out", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_EVAL_V_Release_TA_Lib_internal, V_out), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_V_Release_TA_Lib_internal, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_OUTPUT, "calc_onboard", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_V_Release_TA_Lib_internal, calc_onboard), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_98 = {
  "TA_Lib_internal::EVAL_V_Release/ EVAL_V_Release_TA_Lib_internal",
  scope_98_entries, 13,
};

/* TA_Lib_internal::EVAL_Q_DANGERPOINT/ EVAL_Q_DANGERPOINT_TA_Lib_internal */
static const MappingEntry scope_97_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, _L1), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, _L3), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "q_dp_bool", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, q_dp_bool), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_97 = {
  "TA_Lib_internal::EVAL_Q_DANGERPOINT/ EVAL_Q_DANGERPOINT_TA_Lib_internal",
  scope_97_entries, 4,
};

/* TA_MA::DecodeMASection/ DecodeMASection_TA_MA */
static const MappingEntry scope_96_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "MA_section_out", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_DecodeMASection_TA_MA, MA_section_out), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_388, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_DecodeMASection_TA_MA, _L1), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_DecodeMASection_TA_MA, _L2), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_388, 1, 1}
};
static const MappingScope scope_96 = {
  "TA_MA::DecodeMASection/ DecodeMASection_TA_MA",
  scope_96_entries, 3,
};

/* TA_Lib_internal::EVAL_T_LOA/ EVAL_T_LOA_TA_Lib_internal */
static const MappingEntry scope_95_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_LOA), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L1), &_Type_T_LOA_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_OUTPUT, "t_loa_out", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, t_loa_out), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_OUTPUT, "t_loa_unlimited", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_T_LOA_TA_Lib_internal, t_loa_unlimited), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_95 = {
  "TA_Lib_internal::EVAL_T_LOA/ EVAL_T_LOA_TA_Lib_internal",
  scope_95_entries, 11,
};

/* TA_MRSP::Eval_Q_SCALE/ Eval_Q_SCALE_TA_MRSP */
static const MappingEntry scope_94_entries[13] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_SCALE), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L3), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_SCALE_TA_MRSP, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_OUTPUT, "d_out", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Eval_Q_SCALE_TA_MRSP, d_out), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_94 = {
  "TA_MRSP::Eval_Q_SCALE/ Eval_Q_SCALE_TA_MRSP",
  scope_94_entries, 13,
};

/* TA_Lib_internal::Update_GP_per_LRBG/ Update_GP_per_LRBG_TA_Lib_internal */
static const MappingEntry scope_93_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "GradientdProfile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, GradientdProfile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewGradientProfile 1", NULL, sizeof(outC_FindStartOfNewGradientProfile_TA_Lib_internal), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_161, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG_loop 1", &iter_foldi_33, sizeof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_160, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L14), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L45", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L45), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(array__10543), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L47), &_Type_array__10543_Utils, NULL, NULL, &scope_481, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L5), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int_33), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L9), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 4}
};
static const MappingScope scope_93 = {
  "TA_Lib_internal::Update_GP_per_LRBG/ Update_GP_per_LRBG_TA_Lib_internal",
  scope_93_entries, 9,
};

/* TA_Gradient::Convert_P21_to_DistanceProfile/ _21_Convert_P21_to_DistancePr_TA_Gradient */
static const MappingEntry scope_92_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, GradientProfile), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 9},
  /* 1 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile_loop 1", &iter_foldi_33, sizeof(outC_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_159, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L63", NULL, sizeof(P021_OBU_T_TM), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L63), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L65", NULL, sizeof(Q_SCALE), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L65), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L71", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L71), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L73", NULL, sizeof(P021_OBU_T_TM), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L73), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L74", NULL, sizeof(array__10546), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L74), &_Type_array__10546_Utils, NULL, NULL, &scope_482, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L76", NULL, sizeof(array__10549), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L76), &_Type_array__10549_Utils, NULL, NULL, &scope_483, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L77", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L77), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L83", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L83), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 8}
};
static const MappingScope scope_92 = {
  "TA_Gradient::Convert_P21_to_DistanceProfile/ _21_Convert_P21_to_DistancePr_TA_Gradient",
  scope_92_entries, 10,
};

/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter/ MoveGPSectionsToNewLRBGafter_TA_Lib_internal */
static const MappingEntry scope_91_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, ProfileOut), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantGPForNewLRBG 1", NULL, sizeof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_158, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop 1", &iter_foldi_33, sizeof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L4), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_33), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L6), &_Type_array_int_33_Utils, NULL, NULL, &scope_462, 1, 7}
};
static const MappingScope scope_91 = {
  "TA_Lib_internal::MoveGPSectionsToNewLRBGafter/ MoveGPSectionsToNewLRBGafter_TA_Lib_internal",
  scope_91_entries, 9,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_90_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_120), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_118), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_119), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P021_compr_onboard_TM_conversions, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_90 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_90_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_116_IfBlock1), &_Type_Q_DIR_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_117_IfBlock1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_89 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_89_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_88_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_19_IfBlock1), &_Type_Q_DIR_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_88 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_88_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_87_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_113_IfBlock1), &_Type_Q_DIR_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_114_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_87 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_87_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_86_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_112_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_111_IfBlock1), &_Type_Q_DIR_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_86 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_86_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_85_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _10_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_86, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_87, 1, 2}
};
static const MappingScope scope_85 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_85_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_84_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _15_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_false, &scope_85, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_true, &scope_88, 1, 2}
};
static const MappingScope scope_84 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_84_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_83_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _8_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_false, &scope_84, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_true, &scope_89, 1, 2}
};
static const MappingScope scope_83 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_83_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_82_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_83, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _6__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _7_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_82 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_82_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_81_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L9_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P021_compr_onboard_TM_conversions, n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_81 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/",
  scope_81_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_80_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_14_IfBlock1), &_Type_Q_SCALE_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_80 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_80_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_79_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_79 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_79_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_78_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_12_IfBlock1), &_Type_Q_SCALE_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_78 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_78_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_77_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_11_IfBlock1), &_Type_Q_SCALE_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_77 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_77_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_76_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_77, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_78, 1, 2}
};
static const MappingScope scope_76 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_76_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_false, &scope_76, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_79, 1, 2}
};
static const MappingScope scope_75 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_75_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_74_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_false, &scope_75, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_80, 1, 2}
};
static const MappingScope scope_74 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_74_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_73_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_73 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_73_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversions */
static const MappingEntry scope_72_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P021_onboard", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, P021_onboard), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 22},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_90, 1, 4},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_81, 1, 2},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_82, 1, 3},
  /* 4 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_73, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_unflatten_sections 1", NULL, sizeof(outC_C_P021_unflatten_sections_TM_lib_internal), offsetof(outC_C_P021_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_156, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_5), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1), &_Type_array_int_5_Utils, NULL, NULL, &scope_457, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L10), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(array_int_99), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L32), &_Type_array_int_99_Utils, NULL, NULL, &scope_473, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 11},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 10},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 9},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 8}
};
static const MappingScope scope_72 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversions",
  scope_72_entries, 23,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_71_entries[17] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 14},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_154, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_155, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_409, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_71 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_71_entries, 17,
};

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list/ C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2 */
static const MappingEntry scope_70_entries[12] = {
  /* 0 */ { MAP_LOCAL, "_L108", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L108), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L109", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L109), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_434, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L110", NULL, sizeof(array__10600), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L110), &_Type_array__10600_Utils, NULL, NULL, &scope_500, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L111", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L111), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_433, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L112", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L112), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L113", NULL, sizeof(array__10223), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L113), &_Type_array__10223_Utils, NULL, NULL, &scope_434, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L115", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L115), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L116", NULL, sizeof(array__10603), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L116), &_Type_array__10603_Utils, NULL, NULL, &scope_501, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L59", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L59), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 9 */ { MAP_OUTPUT, "n_iter_out", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, n_iter_out), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_OUTPUT, "nid_c1", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, nid_c1), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_OUTPUT, "nid_c_list", NULL, sizeof(_5_P003_OBU_nid_c_sectionlist_enum_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, nid_c_list), &_Type__5_P003_OBU_nid_c_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_434, 1, 11}
};
static const MappingScope scope_70 = {
  "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list/ C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2",
  scope_70_entries, 12,
};

/* MA_Request::Send_MA/ Send_MA_MA_Request */
static const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Send_MA_MA_Request, _L1), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 0},
  /* 1 */ { MAP_OUTPUT, "message_out", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Send_MA_MA_Request, message_out), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 1}
};
static const MappingScope scope_69 = {
  "MA_Request::Send_MA/ Send_MA_MA_Request",
  scope_69_entries, 2,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending:<1 */
static const MappingEntry scope_68_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[1], isActive_SSM_TR_SM1_SSM_TR_ReqPending_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_68 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending:<1",
  scope_68_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending: */
static const MappingEntry scope_67_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_60_entries[1], isActive_SSM_TR_SM1_SSM_TR_ReqPending_1_SM1, &scope_68, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L4_SM1_ReqPending), &_Type_kcg_bool_Utils, &scope_60_entries[0], isActive_SSM_ST_SM1_SSM_st_ReqPending_SM1, NULL, 1, 0}
};
static const MappingScope scope_67 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending:",
  scope_67_entries, 2,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending:<1 */
static const MappingEntry scope_66_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[1], isActive_SSM_TR_SM1_SSM_TR_NoReqPending_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_66 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending:<1",
  scope_66_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending: */
static const MappingEntry scope_65_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_60_entries[1], isActive_SSM_TR_SM1_SSM_TR_NoReqPending_1_SM1, &scope_66, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L1_SM1_NoReqPending), &_Type_kcg_bool_Utils, &scope_60_entries[0], isActive_SSM_ST_SM1_SSM_st_NoReqPending_SM1, NULL, 1, 0}
};
static const MappingScope scope_65 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending:",
  scope_65_entries, 2,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init:<1 */
static const MappingEntry scope_64_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[1], isActive_SSM_TR_SM1_SSM_TR_init_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_64 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init:<1",
  scope_64_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init: */
static const MappingEntry scope_63_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_60_entries[1], isActive_SSM_TR_SM1_SSM_TR_init_1_SM1, &scope_64, 1, 0}
};
static const MappingScope scope_63 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init:",
  scope_63_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1: */
static const MappingEntry scope_60_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "NoReqPending:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_SSM_ST_SM1_SSM_st_NoReqPending_SM1, &scope_65, 1, 8},
  /* 8 */ { MAP_STATE, "ReqPending:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_SSM_ST_SM1_SSM_st_ReqPending_SM1, &scope_67, 1, 9},
  /* 9 */ { MAP_STATE, "init:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_SSM_ST_SM1_SSM_st_init_SM1, &scope_63, 1, 7}
};
static const MappingScope scope_60 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:",
  scope_60_entries, 10,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_Request */
static const MappingEntry scope_59_entries[41] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 4},
  /* 1 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, tmp1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 38},
  /* 2 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 39},
  /* 3 */ { MAP_INSTANCE, "MA_Request::op_3_8_2_3_a", NULL, sizeof(outC_op_3_8_2_3_a_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, Context_op_3_8_2_3_a), NULL, &scope_59_entries[1], isActive_kcg_bool_kcg_true, &scope_150, 1, 5},
  /* 4 */ { MAP_INSTANCE, "MA_Request::op_3_8_2_3_b", NULL, sizeof(outC_op_3_8_2_3_b_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, Context_op_3_8_2_3_b), NULL, &scope_59_entries[2], isActive_kcg_bool_kcg_true, &scope_151, 1, 6},
  /* 5 */ { MAP_INSTANCE, "MA_Request::op_RepeatReq 1", NULL, sizeof(outC_op_RepeatReq_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, Context_1), NULL, NULL, NULL, &scope_152, 1, 7},
  /* 6 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_60, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_MA_Request_Supervision_MA_Request, _L1), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_MA_Request_Supervision_MA_Request, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L23@mem", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_MA_Request_Supervision_MA_Request, _L24), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MA_Request_Supervision_MA_Request, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L30", NULL, sizeof(T_TIMEOUTRQST), offsetof(outC_MA_Request_Supervision_MA_Request, _L30), &_Type_T_TIMEOUTRQST_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_MA_Request_Supervision_MA_Request, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L41", NULL, sizeof(T_MAR), offsetof(outC_MA_Request_Supervision_MA_Request, _L41), &_Type_T_MAR_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC_MA_Request_Supervision_MA_Request, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 20 */ { MAP_LOCAL, "_L46@mem", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 21 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L48), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 22 */ { MAP_LOCAL, "_L49", NULL, sizeof(T_CYCRQST), offsetof(outC_MA_Request_Supervision_MA_Request, _L49), &_Type_T_CYCRQST_Utils, NULL, NULL, NULL, 1, 24},
  /* 23 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 24 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC_MA_Request_Supervision_MA_Request, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 25 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 26 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L53), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 27 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L55), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 28 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 29 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MA_Request_Supervision_MA_Request, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 30 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L60), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 31 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L61), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 32 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L66), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L67", NULL, sizeof(Driver2MAR_T_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, _L67), &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_404, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 35 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L71), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 36 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_LOCAL, "_L9", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_MA_Request_Supervision_MA_Request, _L9), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_399, 1, 13},
  /* 38 */ { MAP_LOCAL, "in_triggerMA@mem", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, rem_in_triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 39 */ { MAP_LOCAL, "pendingReq@mem", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, pendingReq), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 40 */ { MAP_OUTPUT, "triggerMA", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40}
};
static const MappingScope scope_59 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_Request",
  scope_59_entries, 41,
};

/* MA_Request::Build_MA_request/ Build_MA_request_MA_Request */
static const MappingEntry scope_58_entries[24] = {
  /* 0 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_request_MA_Request, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Build_MA_request_MA_Request, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L30", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), offsetof(outC_Build_MA_request_MA_Request, _L30), &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_405, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_ENGINE), offsetof(outC_Build_MA_request_MA_Request, _L31), &_Type_NID_ENGINE_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_MARQSTREASON), offsetof(outC_Build_MA_request_MA_Request, _L32), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_request_MA_Request, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_MARQSTREASON), offsetof(outC_Build_MA_request_MA_Request, _L34), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L35", NULL, sizeof(Q_MARQSTREASON), offsetof(outC_Build_MA_request_MA_Request, _L35), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L54", NULL, sizeof(Radio_TrainTrack_Header_T_Radio_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L54), &_Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L56", NULL, sizeof(NID_EM), offsetof(outC_Build_MA_request_MA_Request, _L56), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L57", NULL, sizeof(Q_EMERGENCYSTOP), offsetof(outC_Build_MA_request_MA_Request, _L57), &_Type_Q_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L58", NULL, sizeof(NID_TEXTMESSAGE), offsetof(outC_Build_MA_request_MA_Request, _L58), &_Type_NID_TEXTMESSAGE_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L59", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L59), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_request_MA_Request, _L60), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L61", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L61), &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_372, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L62", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L62), &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_370, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L77", NULL, sizeof(outPackets_T_Common_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L77), &_Type_outPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_386, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L78", NULL, sizeof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L78), &_Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_378, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L79", NULL, sizeof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L79), &_Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_385, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L80", NULL, sizeof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L80), &_Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_381, 1, 19},
  /* 20 */ { MAP_LOCAL, "_L81", NULL, sizeof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L81), &_Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_380, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L82", NULL, sizeof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L82), &_Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_379, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L83", NULL, sizeof(T_TRAIN), offsetof(outC_Build_MA_request_MA_Request, _L83), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 23 */ { MAP_OUTPUT, "message132", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, message132), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 23}
};
static const MappingScope scope_58 = {
  "MA_Request::Build_MA_request/ Build_MA_request_MA_Request",
  scope_58_entries, 24,
};

/* MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Requestlinear::MemoryBasic 1/ */
static const MappingEntry scope_57_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(struct__9753), offsetof(outC_Receive_MA_RequestParameters_MA_Request, Memorized_1), &_Type_struct__9753_Utils, NULL, NULL, &scope_373, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(struct__9753), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L2_1), &_Type_struct__9753_Utils, NULL, NULL, &scope_373, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L4@mem", NULL, sizeof(struct__9753), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L4_1), &_Type_struct__9753_Utils, NULL, NULL, &scope_373, 0, 1},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L5_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(struct__9753), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L6_1), &_Type_struct__9753_Utils, NULL, NULL, &scope_373, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(struct__9753), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L7_1), &_Type_struct__9753_Utils, NULL, NULL, &scope_373, 1, 5}
};
static const MappingScope scope_57 = {
  "MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Requestlinear::MemoryBasic 1/",
  scope_57_entries, 6,
};

/* MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Request */
static const MappingEntry scope_56_entries[17] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_OUTPUT, "IsNew", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, IsNew), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_OUTPUT, "MA_RequestParams", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, MA_RequestParams), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM::Read_P015 1", NULL, sizeof(outC_Read_P015_TM), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _1_Context_1), NULL, NULL, NULL, &scope_100, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM::Read_P057 1", NULL, sizeof(outC_Read_P057_TM), offsetof(outC_Receive_MA_RequestParameters_MA_Request, Context_1), NULL, NULL, NULL, &scope_149, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L11), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L2), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L3), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L8), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_57, 1, 1},
  /* 15 */ { MAP_OUTPUT, "ma_received", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, ma_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "present", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_56 = {
  "MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Request",
  scope_56_entries, 17,
};

/* TA_Export::GradientProfile_to_DMI_loop/ GradientProfile_to_DMI_loop_TA_Export */
static const MappingEntry scope_55_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "Gradiient_section_for_DMI_out", NULL, sizeof(_3_GradientProfile_for_DMI_section_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, Gradiient_section_for_DMI_out), &_Type__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_420, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L1), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_421, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(_3_GradientProfile_for_DMI_section_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L12), &_Type__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_420, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L4), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L5), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_55 = {
  "TA_Export::GradientProfile_to_DMI_loop/ GradientProfile_to_DMI_loop_TA_Export",
  scope_55_entries, 9,
};

/* TA_Storage::NV_storage/ NV_storage_TA_Storage */
static const MappingEntry scope_54_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "P3_received", NULL, sizeof(kcg_bool), offsetof(outC_NV_storage_TA_Storage, P3_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_OUTPUT, "Packet3_out", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_NV_storage_TA_Storage, Packet3_out), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_NV_storage_TA_Storage, _L1), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_NV_storage_TA_Storage, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_54 = {
  "TA_Storage::NV_storage/ NV_storage_TA_Storage",
  scope_54_entries, 4,
};

/* TM_baseline2::Read_P003V1/ Read_P003V1_TM_baseline2 */
static const MappingEntry scope_53_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P003V1_OBU_out", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, P003V1_OBU_out), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_compr_onboard 1", NULL, sizeof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_130, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P003V1_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_71, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, _L166), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P003V1_TM_baseline2, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P003V1_TM_baseline2, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P003V1_TM_baseline2, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P003V1_TM_baseline2, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 2},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P003V1_TM_baseline2, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_53 = {
  "TM_baseline2::Read_P003V1/ Read_P003V1_TM_baseline2",
  scope_53_entries, 9,
};

/* TA_SpeedProfiles::SP_TSR/ SP_TSR_TA_SpeedProfiles */
static const MappingEntry scope_52_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "TSR", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_TSR_TA_SpeedProfiles, TSR), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_TSR_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_TSR_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_52 = {
  "TA_SpeedProfiles::SP_TSR/ SP_TSR_TA_SpeedProfiles",
  scope_52_entries, 3,
};

/* TA_SpeedProfiles::SP_STM_SystemSpeed/ SP_STM_SystemSpeed_TA_SpeedProfiles */
static const MappingEntry scope_51_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "STM_SystemSpeed", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles, STM_SystemSpeed), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_51 = {
  "TA_SpeedProfiles::SP_STM_SystemSpeed/ SP_STM_SystemSpeed_TA_SpeedProfiles",
  scope_51_entries, 3,
};

/* TA_SpeedProfiles::SP_STM_MaxSpeed/ SP_STM_MaxSpeed_TA_SpeedProfiles */
static const MappingEntry scope_50_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "STM_MaxSpeed", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles, STM_MaxSpeed), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_50 = {
  "TA_SpeedProfiles::SP_STM_MaxSpeed/ SP_STM_MaxSpeed_TA_SpeedProfiles",
  scope_50_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:then: */
static const MappingEntry scope_49_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_LRBG_only 1", NULL, sizeof(outC_Update_LRBG_only_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _2_Context_1), NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_129, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L1_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L2_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_403, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L3_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4}
};
static const MappingScope scope_49 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:then:",
  scope_49_entries, 5,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:then: */
static const MappingEntry scope_48_entries[6] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_SSP_only 1", NULL, sizeof(outC_Update_SSP_only_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _3_Context_1), NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_128, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L111_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L210_IfBlock1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_455, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L39_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L48_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5}
};
static const MappingScope scope_48 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:then:",
  scope_48_entries, 6,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:then: */
static const MappingEntry scope_47_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_SSP_then_LRBG 1", NULL, sizeof(outC_Update_SSP_then_LRBG_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _4_Context_1), NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_127, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L116_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L215_IfBlock1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_455, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L314_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L413_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_403, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L512_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6}
};
static const MappingScope scope_47 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:then:",
  scope_47_entries, 7,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:then: */
static const MappingEntry scope_46_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_LRBG_then_SSP 1", NULL, sizeof(outC_Update_LRBG_then_SSP_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _5_Context_1), NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_126, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L122_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L221_IfBlock1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_455, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L320_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L419_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_403, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L518_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_450, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L617_IfBlock1), &_Type_kcg_bool_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6}
};
static const MappingScope scope_46 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:then:",
  scope_46_entries, 7,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:else: */
static const MappingEntry scope_45_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L124_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_false, &scope_450, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L323_IfBlock1), &_Type_kcg_bool_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_45 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:else:",
  scope_45_entries, 2,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else: */
static const MappingEntry scope_44_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_false, &scope_45, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_46, 1, 2}
};
static const MappingScope scope_44 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:",
  scope_44_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else: */
static const MappingEntry scope_43_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_false, &scope_44, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_47, 1, 2}
};
static const MappingScope scope_43 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:",
  scope_43_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else: */
static const MappingEntry scope_42_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _7_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_false, &scope_43, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_48, 1, 2}
};
static const MappingScope scope_42 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:",
  scope_42_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1: */
static const MappingEntry scope_41_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_false, &scope_42, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_49, 1, 2}
};
static const MappingScope scope_41 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:",
  scope_41_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfiles */
static const MappingEntry scope_40_entries[43] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 4},
  /* 2 */ { MAP_LOCAL, "P27V1_local", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, P27V1_local), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 13},
  /* 3 */ { MAP_OUTPUT, "SSP", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, SSP), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 41},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_LRBG 1", NULL, sizeof(outC_Eval_LRBG_TA_Lib_internal), offsetof(outC_SP_SSP_TA_SpeedProfiles, _1_Context_1), NULL, NULL, NULL, &scope_19, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1 1", NULL, sizeof(outC_Read_P027V1_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, Context_1), NULL, NULL, NULL, &scope_106, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 14},
  /* 7 */ { MAP_LOCAL, "_L103", NULL, sizeof(NID_BG), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L103), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 19},
  /* 8 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L104), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 9 */ { MAP_LOCAL, "_L107", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L107), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 21},
  /* 10 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_int), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L108), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 11 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L109), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 12 */ { MAP_LOCAL, "_L111@mem", NULL, sizeof(NID_BG), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L111), &_Type_NID_BG_Utils, NULL, NULL, NULL, 0, 0},
  /* 13 */ { MAP_LOCAL, "_L112", NULL, sizeof(NID_BG), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L112), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 24},
  /* 14 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L113), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 15 */ { MAP_LOCAL, "_L116", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L116), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 16 */ { MAP_LOCAL, "_L117", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L117), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 17 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L118), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 18 */ { MAP_LOCAL, "_L119", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L119), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 19 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L124), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 20 */ { MAP_LOCAL, "_L125", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L125), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 21 */ { MAP_LOCAL, "_L127", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L127), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 22 */ { MAP_LOCAL, "_L128", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L128), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 23 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L129), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 24 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L130), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 25 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L132), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 26 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L133), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 27 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L134), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 28 */ { MAP_LOCAL, "_L135", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L135), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 29 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L136), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40},
  /* 30 */ { MAP_LOCAL, "_L42", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L42), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L60", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L60), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L73", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L73), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 18},
  /* 34 */ { MAP_LOCAL, "both_new_curLRBG", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, both_new_curLRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 35 */ { MAP_LOCAL, "both_new_prvLRBG", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, both_new_prvLRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 36 */ { MAP_LOCAL, "msg_LRBG", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, msg_LRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 37 */ { MAP_LOCAL, "msg_prvLRBG", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, msg_prvLRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 38 */ { MAP_LOCAL, "newLRBG_only", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, newLRBG_only), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 39 */ { MAP_LOCAL, "newSSP_only", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, newSSP_only), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 40 */ { MAP_LOCAL, "new_LRBG", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, new_LRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 41 */ { MAP_LOCAL, "new_SSP", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, new_SSP), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 42 */ { MAP_OUTPUT, "updated", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42}
};
static const MappingScope scope_40 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfiles",
  scope_40_entries, 43,
};

/* TA_SpeedProfiles::SP_SignalingRelated/ SP_SignalingRelated_TA_SpeedProfiles */
static const MappingEntry scope_39_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "SignalingRelated", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SignalingRelated_TA_SpeedProfiles, SignalingRelated), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_SignalingRelated_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SignalingRelated_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_39 = {
  "TA_SpeedProfiles::SP_SignalingRelated/ SP_SignalingRelated_TA_SpeedProfiles",
  scope_39_entries, 3,
};

/* TA_SpeedProfiles::SP_PBD_SR/ SP_PBD_SR_TA_SpeedProfiles */
static const MappingEntry scope_38_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "PBD_SR", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_PBD_SR_TA_SpeedProfiles, PBD_SR), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_PBD_SR_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_PBD_SR_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_38 = {
  "TA_SpeedProfiles::SP_PBD_SR/ SP_PBD_SR_TA_SpeedProfiles",
  scope_38_entries, 3,
};

/* TA_SpeedProfiles::SP_OverrideRelated/ SP_OverrideRelated_TA_SpeedProfiles */
static const MappingEntry scope_37_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "OverrideRelated", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_OverrideRelated_TA_SpeedProfiles, OverrideRelated), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_OverrideRelated_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_OverrideRelated_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_37 = {
  "TA_SpeedProfiles::SP_OverrideRelated/ SP_OverrideRelated_TA_SpeedProfiles",
  scope_37_entries, 3,
};

/* TA_SpeedProfiles::SP_ModeRelated/ SP_ModeRelated_TA_SpeedProfiles */
static const MappingEntry scope_36_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "ModeRelated", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, ModeRelated), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2}
};
static const MappingScope scope_36 = {
  "TA_SpeedProfiles::SP_ModeRelated/ SP_ModeRelated_TA_SpeedProfiles",
  scope_36_entries, 4,
};

/* TA_SpeedProfiles::SP_MaxTrainSpeed/ SP_MaxTrainSpeed_TA_SpeedProfiles */
static const MappingEntry scope_35_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "MaxTrainSpeed", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles, MaxTrainSpeed), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_35 = {
  "TA_SpeedProfiles::SP_MaxTrainSpeed/ SP_MaxTrainSpeed_TA_SpeedProfiles",
  scope_35_entries, 3,
};

/* TA_SpeedProfiles::SP_LX_SR/ SP_LX_SR_TA_SpeedProfiles */
static const MappingEntry scope_34_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "LX_SR", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_LX_SR_TA_SpeedProfiles, LX_SR), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_LX_SR_TA_SpeedProfiles, _L4), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_LX_SR_TA_SpeedProfiles, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_34 = {
  "TA_SpeedProfiles::SP_LX_SR/ SP_LX_SR_TA_SpeedProfiles",
  scope_34_entries, 3,
};

/* TA_SpeedProfiles::SP_ASP/ SP_ASP_TA_SpeedProfiles */
static const MappingEntry scope_33_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "ASP", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ASP_TA_SpeedProfiles, ASP), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_ASP_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ASP_TA_SpeedProfiles, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1}
};
static const MappingScope scope_33 = {
  "TA_SpeedProfiles::SP_ASP/ SP_ASP_TA_SpeedProfiles",
  scope_33_entries, 3,
};

/* TA_SpeedProfiles::Build_SSP_Matrix/ Build_SSP_Matrix_TA_SpeedProfiles */
static const MappingEntry scope_32_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "SSP_matrix_out", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, SSP_matrix_out), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 14},
  /* 1 */ { MAP_OUTPUT, "SSP_matrix_updated", NULL, sizeof(kcg_bool), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, SSP_matrix_updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L10), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L11), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(array__10442), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L12), &_Type_array__10442_Utils, NULL, NULL, &scope_459, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L6), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L7), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L8), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L9), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 8}
};
static const MappingScope scope_32 = {
  "TA_SpeedProfiles::Build_SSP_Matrix/ Build_SSP_Matrix_TA_SpeedProfiles",
  scope_32_entries, 15,
};

/* TA_MRSP::Calculate_MRSP/ Calculate_MRSP_TA_MRSP */
static const MappingEntry scope_31_entries[16] = {
  /* 0 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), offsetof(outC_Calculate_MRSP_TA_MRSP, MRSP), &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_470, 1, 15},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_BuildTargetList 1", NULL, sizeof(outC_MRSP_BuildTargetList_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_103, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Build_MRSP_LOOP 1", &iter_mapwi_200, sizeof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _3_Context_1), NULL, NULL, NULL, &scope_102, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_LengthOfTargetList 1", NULL, sizeof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _2_Context_1), NULL, NULL, NULL, &scope_105, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix 1", NULL, sizeof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_104, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L1), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(array__10567), offsetof(outC_Calculate_MRSP_TA_MRSP, _L10), &_Type_array__10567_Utils, NULL, NULL, &scope_489, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(array__10491), offsetof(outC_Calculate_MRSP_TA_MRSP, _L12), &_Type_array__10491_Utils, NULL, NULL, &scope_470, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(array_int_200), offsetof(outC_Calculate_MRSP_TA_MRSP, _L14), &_Type_array_int_200_Utils, NULL, NULL, &scope_490, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L15), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_Calculate_MRSP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 6},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L4), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Calculate_MRSP_TA_MRSP, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Calculate_MRSP_TA_MRSP, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10564), offsetof(outC_Calculate_MRSP_TA_MRSP, _L9), &_Type_array__10564_Utils, NULL, NULL, &scope_488, 1, 9}
};
static const MappingScope scope_31 = {
  "TA_MRSP::Calculate_MRSP/ Calculate_MRSP_TA_MRSP",
  scope_31_entries, 16,
};

/* TA_MA::StoreRaw_MA/ StoreRaw_MA_TA_MA */
static const MappingEntry scope_30_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 1 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 8},
  /* 2 */ { MAP_OUTPUT, "MA_onboard_out", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_StoreRaw_MA_TA_MA, MA_onboard_out), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 11},
  /* 3 */ { MAP_INSTANCE, "TA_MA::MA_storage 1", NULL, sizeof(outC_MA_storage_TA_MA), offsetof(outC_StoreRaw_MA_TA_MA, _1_Context_1), NULL, &scope_30_entries[1], isActive_kcg_bool_kcg_true, &scope_101, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM::Read_P015 1", NULL, sizeof(outC_Read_P015_TM), offsetof(outC_StoreRaw_MA_TA_MA, Context_1), NULL, NULL, NULL, &scope_100, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_StoreRaw_MA_TA_MA, _L22), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L24@mem", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_StoreRaw_MA_TA_MA, _L24), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 0, 0},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_StoreRaw_MA_TA_MA, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L26@mem", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 10 */ { MAP_OUTPUT, "new_MA", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, new_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_OUTPUT, "vald_MA", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, vald_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_30 = {
  "TA_MA::StoreRaw_MA/ StoreRaw_MA_TA_MA",
  scope_30_entries, 12,
};

/* TA_MA::Decode_P015/ Decode_P015_TA_MA */
static const MappingEntry scope_29_entries[55] = {
  /* 0 */ { MAP_OUTPUT, "MA_decoded_out", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, MA_decoded_out), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 54},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_Q_DANGERPOINT 1", NULL, sizeof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, _5_Context_1), NULL, NULL, NULL, &scope_97, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_Q_OVERLAP 1", NULL, sizeof(outC_EVAL_Q_OVERLAP_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, _4_Context_1), NULL, NULL, NULL, &scope_99, 1, 6},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_T_LOA 1", NULL, sizeof(outC_EVAL_T_LOA_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, _6_Context_1), NULL, NULL, NULL, &scope_95, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_V_Release 1", NULL, sizeof(outC_EVAL_V_Release_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, Context_1), NULL, NULL, NULL, &scope_98, 1, 5},
  /* 5 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_V_Release 2", NULL, sizeof(outC_EVAL_V_Release_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, Context_2), NULL, NULL, NULL, &scope_98, 1, 8},
  /* 6 */ { MAP_INSTANCE, "TA_MA::DecodeMASection 1", NULL, sizeof(outC_DecodeMASection_TA_MA), offsetof(outC_Decode_P015_TA_MA, _2_Context_1), NULL, NULL, NULL, &scope_96, 1, 3},
  /* 7 */ { MAP_INSTANCE, "TA_MRSP::Eval_Q_SCALE 1", NULL, sizeof(outC_Eval_Q_SCALE_TA_MRSP), offsetof(outC_Decode_P015_TA_MA, _3_Context_1), NULL, NULL, NULL, &scope_94, 1, 0},
  /* 8 */ { MAP_INSTANCE, "TA_MRSP::Eval_Q_SCALE 2", NULL, sizeof(outC_Eval_Q_SCALE_TA_MRSP), offsetof(outC_Decode_P015_TA_MA, _1_Context_2), NULL, NULL, NULL, &scope_94, 1, 1},
  /* 9 */ { MAP_INSTANCE, "TA_MRSP::Eval_Q_SCALE 3", NULL, sizeof(outC_Eval_Q_SCALE_TA_MRSP), offsetof(outC_Decode_P015_TA_MA, Context_3), NULL, NULL, NULL, &scope_94, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Decode_P015_TA_MA, _L1), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_Decode_P015_TA_MA, _L10), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(T_SECTIONTIMER), offsetof(outC_Decode_P015_TA_MA, _L11), &_Type_T_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 21},
  /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(D_SECTIONTIMERSTOPLOC), offsetof(outC_Decode_P015_TA_MA, _L12), &_Type_D_SECTIONTIMERSTOPLOC_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(Q_ENDTIMER), offsetof(outC_Decode_P015_TA_MA, _L13), &_Type_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 19},
  /* 15 */ { MAP_LOCAL, "_L14", NULL, sizeof(T_ENDTIMER), offsetof(outC_Decode_P015_TA_MA, _L14), &_Type_T_ENDTIMER_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L15", NULL, sizeof(D_ENDTIMERSTARTLOC), offsetof(outC_Decode_P015_TA_MA, _L15), &_Type_D_ENDTIMERSTARTLOC_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_Decode_P015_TA_MA, _L16), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L161", NULL, sizeof(V_NVREL), offsetof(outC_Decode_P015_TA_MA, _L161), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 43},
  /* 19 */ { MAP_LOCAL, "_L162", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Decode_P015_TA_MA, _L162), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 42},
  /* 20 */ { MAP_LOCAL, "_L163", NULL, sizeof(kcg_int), offsetof(outC_Decode_P015_TA_MA, _L163), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 44},
  /* 21 */ { MAP_LOCAL, "_L164", NULL, sizeof(MA_Level_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L164), &_Type_MA_Level_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 45},
  /* 22 */ { MAP_LOCAL, "_L165", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L165), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46},
  /* 23 */ { MAP_LOCAL, "_L166", NULL, sizeof(Endtimer_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L166), &_Type_Endtimer_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_390, 1, 47},
  /* 24 */ { MAP_LOCAL, "_L168", NULL, sizeof(_4_MovementAuthoritySectionlist_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L168), &_Type__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_389, 1, 48},
  /* 25 */ { MAP_LOCAL, "_L169", NULL, sizeof(V_RELEASEOL), offsetof(outC_Decode_P015_TA_MA, _L169), &_Type_V_RELEASEOL_Utils, NULL, NULL, NULL, 1, 49},
  /* 26 */ { MAP_LOCAL, "_L17", NULL, sizeof(D_DP), offsetof(outC_Decode_P015_TA_MA, _L17), &_Type_D_DP_Utils, NULL, NULL, NULL, 1, 15},
  /* 27 */ { MAP_LOCAL, "_L178", NULL, sizeof(DP_or_OL_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L178), &_Type_DP_or_OL_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_391, 1, 50},
  /* 28 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 29 */ { MAP_LOCAL, "_L18", NULL, sizeof(V_RELEASEDP), offsetof(outC_Decode_P015_TA_MA, _L18), &_Type_V_RELEASEDP_Utils, NULL, NULL, NULL, 1, 14},
  /* 30 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 31 */ { MAP_LOCAL, "_L182", NULL, sizeof(DP_or_OL_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L182), &_Type_DP_or_OL_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_391, 1, 53},
  /* 32 */ { MAP_LOCAL, "_L19", NULL, sizeof(Q_OVERLAP), offsetof(outC_Decode_P015_TA_MA, _L19), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 13},
  /* 33 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 34 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_STARTOL), offsetof(outC_Decode_P015_TA_MA, _L20), &_Type_D_STARTOL_Utils, NULL, NULL, NULL, 1, 12},
  /* 35 */ { MAP_LOCAL, "_L21", NULL, sizeof(T_OL), offsetof(outC_Decode_P015_TA_MA, _L21), &_Type_T_OL_Utils, NULL, NULL, NULL, 1, 11},
  /* 36 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_OL), offsetof(outC_Decode_P015_TA_MA, _L22), &_Type_D_OL_Utils, NULL, NULL, NULL, 1, 10},
  /* 37 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_Decode_P015_TA_MA, _L3), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 29},
  /* 38 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_Decode_P015_TA_MA, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 28},
  /* 39 */ { MAP_LOCAL, "_L45", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L45), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 31},
  /* 40 */ { MAP_LOCAL, "_L46", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L46), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 32},
  /* 41 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 42 */ { MAP_LOCAL, "_L48", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L48), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 33},
  /* 43 */ { MAP_LOCAL, "_L49", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L49), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 35},
  /* 44 */ { MAP_LOCAL, "_L5", NULL, sizeof(V_LOA), offsetof(outC_Decode_P015_TA_MA, _L5), &_Type_V_LOA_Utils, NULL, NULL, NULL, 1, 27},
  /* 45 */ { MAP_LOCAL, "_L53", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L53), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_388, 1, 36},
  /* 46 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 47 */ { MAP_LOCAL, "_L56", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L56), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 38},
  /* 48 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 49 */ { MAP_LOCAL, "_L58", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L58), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 40},
  /* 50 */ { MAP_LOCAL, "_L59", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L59), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 41},
  /* 51 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_LOA), offsetof(outC_Decode_P015_TA_MA, _L6), &_Type_T_LOA_Utils, NULL, NULL, NULL, 1, 26},
  /* 52 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_Decode_P015_TA_MA, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 25},
  /* 53 */ { MAP_LOCAL, "_L8", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_Decode_P015_TA_MA, _L8), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 24},
  /* 54 */ { MAP_LOCAL, "_L9", NULL, sizeof(L_ENDSECTION), offsetof(outC_Decode_P015_TA_MA, _L9), &_Type_L_ENDSECTION_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_29 = {
  "TA_MA::Decode_P015/ Decode_P015_TA_MA",
  scope_29_entries, 55,
};

/* TA_Gradient::Update_LRBG_only/ Update_LRBG_only_TA_Gradient */
static const MappingEntry scope_28_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_only_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_91, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_only_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_only_TA_Gradient, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_only_TA_Gradient, _L3), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L34", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_Gradient, _L34), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L35", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_Gradient, _L35), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_only_TA_Gradient, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_only_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 7}
};
static const MappingScope scope_28 = {
  "TA_Gradient::Update_LRBG_only/ Update_LRBG_only_TA_Gradient",
  scope_28_entries, 8,
};

/* TA_Gradient::Update_GP_only/ Update_GP_only_TA_Gradient */
static const MappingEntry scope_27_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile 1", NULL, sizeof(outC__21_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC_Update_GP_only_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_92, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG 1", NULL, sizeof(outC_Update_GP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_GP_only_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_93, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Update_GP_only_TA_Gradient, _L2), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, _L4), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, _L5), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 5},
  /* 6 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 6}
};
static const MappingScope scope_27 = {
  "TA_Gradient::Update_GP_only/ Update_GP_only_TA_Gradient",
  scope_27_entries, 7,
};

/* TA_Gradient::Update_GP_then_LRBG/ Update_GP_then_LRBG_TA_Gradient */
static const MappingEntry scope_26_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile 1", NULL, sizeof(outC__21_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_92, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _2_Context_1), NULL, NULL, NULL, &scope_91, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG 1", NULL, sizeof(outC_Update_GP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_93, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L11), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L12), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L13), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L2), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L5), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L6), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 6},
  /* 12 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 12}
};
static const MappingScope scope_26 = {
  "TA_Gradient::Update_GP_then_LRBG/ Update_GP_then_LRBG_TA_Gradient",
  scope_26_entries, 13,
};

/* TA_Gradient::Update_LRBG_then_GP/ Update_LRBG_then_GP_TA_Gradient */
static const MappingEntry scope_25_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile 1", NULL, sizeof(outC__21_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_92, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_91, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG 1", NULL, sizeof(outC_Update_GP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _2_Context_1), NULL, NULL, NULL, &scope_93, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L13), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L2), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L7), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L8), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L9), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 11},
  /* 12 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 12}
};
static const MappingScope scope_25 = {
  "TA_Gradient::Update_LRBG_then_GP/ Update_LRBG_then_GP_TA_Gradient",
  scope_25_entries, 13,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L1_IfBlock1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, &scope_413, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(NID_BG), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L2_IfBlock1), &_Type_NID_BG_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_24 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:then:",
  scope_24_entries, 2,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_23_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L11_IfBlock1), &_Type_NID_LRBG_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L22_IfBlock1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_413, 1, 0}
};
static const MappingScope scope_23 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:then:",
  scope_23_entries, 2,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_22_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L13_IfBlock1), &_Type_kcg_int_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:else:",
  scope_22_entries, 1,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_21_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_LRBG_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 2}
};
static const MappingScope scope_21 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:",
  scope_21_entries, 3,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_20_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_LRBG_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_false, &scope_21, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 2}
};
static const MappingScope scope_20 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:",
  scope_20_entries, 3,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internal */
static const MappingEntry scope_19_entries[5] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 0},
  /* 1 */ { MAP_OUTPUT, "LRBG", NULL, sizeof(kcg_int), offsetof(outC_Eval_LRBG_TA_Lib_internal, LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L14), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_19 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internal",
  scope_19_entries, 5,
};

/* TM::Read_P021/ Read_P021_TM */
static const MappingEntry scope_18_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P021_OBU_out", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Read_P021_TM, P021_OBU_out), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P021_compr_onboard 1", NULL, sizeof(outC_C_P021_compr_onboard_TM_conversions), offsetof(outC_Read_P021_TM, _1_Context_1), NULL, NULL, NULL, &scope_72, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P021_TM, Context_1), NULL, NULL, NULL, &scope_71, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Read_P021_TM, _L166), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P021_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P021_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P021_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_409, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P021_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 3},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P021_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_18 = {
  "TM::Read_P021/ Read_P021_TM",
  scope_18_entries, 9,
};

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU/ C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 */
static const MappingEntry scope_17_entries[58] = {
  /* 0 */ { MAP_OUTPUT, "P003_onbaord_out", NULL, sizeof(P003_OBU_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, P003_onbaord_out), &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_448, 1, 57},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list 1", NULL, sizeof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_70, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L137", NULL, sizeof(V_NVALLOWOVTRP), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L137), &_Type_V_NVALLOWOVTRP_Utils, NULL, NULL, NULL, 1, 26},
  /* 3 */ { MAP_LOCAL, "_L138", NULL, sizeof(V_NVSUPOVTRP), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L138), &_Type_V_NVSUPOVTRP_Utils, NULL, NULL, NULL, 1, 27},
  /* 4 */ { MAP_LOCAL, "_L139", NULL, sizeof(D_NVOVTRP), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L139), &_Type_D_NVOVTRP_Utils, NULL, NULL, NULL, 1, 28},
  /* 5 */ { MAP_LOCAL, "_L140", NULL, sizeof(T_NVOVTRP), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L140), &_Type_T_NVOVTRP_Utils, NULL, NULL, NULL, 1, 29},
  /* 6 */ { MAP_LOCAL, "_L141", NULL, sizeof(D_NVPOTRP), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L141), &_Type_D_NVPOTRP_Utils, NULL, NULL, NULL, 1, 30},
  /* 7 */ { MAP_LOCAL, "_L142", NULL, sizeof(M_NVCONTACT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L142), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 31},
  /* 8 */ { MAP_LOCAL, "_L143", NULL, sizeof(T_NVCONTACT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L143), &_Type_T_NVCONTACT_Utils, NULL, NULL, NULL, 1, 32},
  /* 9 */ { MAP_LOCAL, "_L144", NULL, sizeof(M_NVDERUN), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L144), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 33},
  /* 10 */ { MAP_LOCAL, "_L145", NULL, sizeof(D_NVSTFF), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L145), &_Type_D_NVSTFF_Utils, NULL, NULL, NULL, 1, 34},
  /* 11 */ { MAP_LOCAL, "_L146", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L146), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 35},
  /* 12 */ { MAP_LOCAL, "_L147", NULL, sizeof(A_NVMAXREDADH1), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L147), &_Type_A_NVMAXREDADH1_Utils, NULL, NULL, NULL, 1, 36},
  /* 13 */ { MAP_LOCAL, "_L204", NULL, sizeof(A_NVMAXREDADH2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L204), &_Type_A_NVMAXREDADH2_Utils, NULL, NULL, NULL, 1, 37},
  /* 14 */ { MAP_LOCAL, "_L205", NULL, sizeof(A_NVMAXREDADH3), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L205), &_Type_A_NVMAXREDADH3_Utils, NULL, NULL, NULL, 1, 38},
  /* 15 */ { MAP_LOCAL, "_L206", NULL, sizeof(M_NVAVADH), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L206), &_Type_M_NVAVADH_Utils, NULL, NULL, NULL, 1, 39},
  /* 16 */ { MAP_LOCAL, "_L207", NULL, sizeof(M_NVEBCL), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L207), &_Type_M_NVEBCL_Utils, NULL, NULL, NULL, 1, 40},
  /* 17 */ { MAP_LOCAL, "_L208", NULL, sizeof(Q_NVKINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L208), &_Type_Q_NVKINT_Utils, NULL, NULL, NULL, 1, 41},
  /* 18 */ { MAP_LOCAL, "_L209", NULL, sizeof(Q_NVKVINTSET), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L209), &_Type_Q_NVKVINTSET_Utils, NULL, NULL, NULL, 1, 42},
  /* 19 */ { MAP_LOCAL, "_L210", NULL, sizeof(A_NVP23), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L210), &_Type_A_NVP23_Utils, NULL, NULL, NULL, 1, 43},
  /* 20 */ { MAP_LOCAL, "_L211", NULL, sizeof(A_NVP12), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L211), &_Type_A_NVP12_Utils, NULL, NULL, NULL, 1, 44},
  /* 21 */ { MAP_LOCAL, "_L212", NULL, sizeof(V_NVKVINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L212), &_Type_V_NVKVINT_Utils, NULL, NULL, NULL, 1, 45},
  /* 22 */ { MAP_LOCAL, "_L213", NULL, sizeof(M_NVKVINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L213), &_Type_M_NVKVINT_Utils, NULL, NULL, NULL, 1, 46},
  /* 23 */ { MAP_LOCAL, "_L214", NULL, sizeof(M_NVKVINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L214), &_Type_M_NVKVINT_Utils, NULL, NULL, NULL, 1, 47},
  /* 24 */ { MAP_LOCAL, "_L215", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L215), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 48},
  /* 25 */ { MAP_LOCAL, "_L216", NULL, sizeof(P203V1_OBU_n_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L216), &_Type_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_445, 1, 49},
  /* 26 */ { MAP_LOCAL, "_L217", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L217), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 50},
  /* 27 */ { MAP_LOCAL, "_L218", NULL, sizeof(P203V1_OBU_k_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L218), &_Type_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_443, 1, 51},
  /* 28 */ { MAP_LOCAL, "_L219", NULL, sizeof(L_NVKRINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L219), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 52},
  /* 29 */ { MAP_LOCAL, "_L220", NULL, sizeof(M_NVKRINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L220), &_Type_M_NVKRINT_Utils, NULL, NULL, NULL, 1, 53},
  /* 30 */ { MAP_LOCAL, "_L221", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L221), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 54},
  /* 31 */ { MAP_LOCAL, "_L222", NULL, sizeof(P203V1_OBU_l_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L222), &_Type_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 55},
  /* 32 */ { MAP_LOCAL, "_L223", NULL, sizeof(M_NVKTINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L223), &_Type_M_NVKTINT_Utils, NULL, NULL, NULL, 1, 56},
  /* 33 */ { MAP_LOCAL, "_L50", NULL, sizeof(P003_OBU_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L50), &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_448, 1, 1},
  /* 34 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 35 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L53), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 36 */ { MAP_LOCAL, "_L54", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L54), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 4},
  /* 37 */ { MAP_LOCAL, "_L55", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L55), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 5},
  /* 38 */ { MAP_LOCAL, "_L57", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L57), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 6},
  /* 39 */ { MAP_LOCAL, "_L58", NULL, sizeof(D_VALIDNV), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L58), &_Type_D_VALIDNV_Utils, NULL, NULL, NULL, 1, 7},
  /* 40 */ { MAP_LOCAL, "_L59", NULL, sizeof(_5_P003_OBU_nid_c_sectionlist_enum_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L59), &_Type__5_P003_OBU_nid_c_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_434, 1, 8},
  /* 41 */ { MAP_LOCAL, "_L60", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L60), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 9},
  /* 42 */ { MAP_LOCAL, "_L61", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L61), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 10},
  /* 43 */ { MAP_LOCAL, "_L62", NULL, sizeof(V_NVSHUNT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L62), &_Type_V_NVSHUNT_Utils, NULL, NULL, NULL, 1, 11},
  /* 44 */ { MAP_LOCAL, "_L63", NULL, sizeof(V_NVSTFF), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L63), &_Type_V_NVSTFF_Utils, NULL, NULL, NULL, 1, 12},
  /* 45 */ { MAP_LOCAL, "_L64", NULL, sizeof(V_NVONSIGHT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L64), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 13},
  /* 46 */ { MAP_LOCAL, "_L65", NULL, sizeof(P003_permanent_data_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L65), &_Type_P003_permanent_data_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 14},
  /* 47 */ { MAP_LOCAL, "_L70", NULL, sizeof(V_NVLIMSUPERV), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L70), &_Type_V_NVLIMSUPERV_Utils, NULL, NULL, NULL, 1, 15},
  /* 48 */ { MAP_LOCAL, "_L71", NULL, sizeof(V_NVONSIGHT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L71), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 16},
  /* 49 */ { MAP_LOCAL, "_L72", NULL, sizeof(V_NVREL), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L72), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 17},
  /* 50 */ { MAP_LOCAL, "_L73", NULL, sizeof(D_NVROLL), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L73), &_Type_D_NVROLL_Utils, NULL, NULL, NULL, 1, 18},
  /* 51 */ { MAP_LOCAL, "_L74", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L74), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 19},
  /* 52 */ { MAP_LOCAL, "_L75", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L75), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 20},
  /* 53 */ { MAP_LOCAL, "_L76", NULL, sizeof(P203V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L76), &_Type_P203V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 21},
  /* 54 */ { MAP_LOCAL, "_L77", NULL, sizeof(Q_NVGUIPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L77), &_Type_Q_NVGUIPERM_Utils, NULL, NULL, NULL, 1, 22},
  /* 55 */ { MAP_LOCAL, "_L78", NULL, sizeof(Q_NVLOCACC), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L78), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 23},
  /* 56 */ { MAP_LOCAL, "_L79", NULL, sizeof(Q_NVSBFBPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L79), &_Type_Q_NVSBFBPERM_Utils, NULL, NULL, NULL, 1, 24},
  /* 57 */ { MAP_LOCAL, "_L80", NULL, sizeof(Q_NVINHSMICPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L80), &_Type_Q_NVINHSMICPERM_Utils, NULL, NULL, NULL, 1, 25}
};
static const MappingScope scope_17 = {
  "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU/ C_P003V1_OBU_P003_OBU_TM_conversions_baseline2",
  scope_17_entries, 58,
};

/* MA_Request::Manage_MA_Request/ Manage_MA_Request_MA_Request */
static const MappingEntry scope_16_entries[28] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 1 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 26},
  /* 2 */ { MAP_INSTANCE, "MA_Request::Build_MA_request 1", NULL, sizeof(outC_Build_MA_request_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _2_Context_1), NULL, &scope_16_entries[1], isActive_kcg_bool_kcg_true, &scope_58, 1, 4},
  /* 3 */ { MAP_INSTANCE, "MA_Request::MA_Request_Supervision 1", NULL, sizeof(outC_MA_Request_Supervision_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _1_Context_1), NULL, NULL, NULL, &scope_59, 1, 5},
  /* 4 */ { MAP_INSTANCE, "MA_Request::Receive_MA_RequestParameters 1", NULL, sizeof(outC_Receive_MA_RequestParameters_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, Context_1), NULL, NULL, NULL, &scope_56, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MA_Request::Send_MA 1", NULL, sizeof(outC_Send_MA_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _3_Context_1), NULL, NULL, NULL, &scope_69, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L12), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L16), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L17), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_399, 1, 16},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Manage_MA_Request_MA_Request, _L18), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 21},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Manage_MA_Request_MA_Request, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 7},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L24", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), offsetof(outC_Manage_MA_Request_MA_Request, _L24), &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_405, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L25), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(Driver2MAR_T_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _L27), &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_404, 1, 22},
  /* 18 */ { MAP_LOCAL, "_L28", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L28), &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_372, 1, 23},
  /* 19 */ { MAP_LOCAL, "_L29", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L29), &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_370, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(T_TRAIN), offsetof(outC_Manage_MA_Request_MA_Request, _L30), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L5), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 9},
  /* 23 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_LOCAL, "_L7", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L7), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_373, 1, 11},
  /* 25 */ { MAP_LOCAL, "_L9@mem", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L9), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 0, 1},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, message_out), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 27},
  /* 27 */ { MAP_LOCAL, "triggerMA@mem", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0}
};
static const MappingScope scope_16 = {
  "MA_Request::Manage_MA_Request/ Manage_MA_Request_MA_Request",
  scope_16_entries, 28,
};

/* TA_Export::GradientProfile_to_DMI/ GradientProfile_to_DMI_TA_Export */
static const MappingEntry scope_15_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Gradient_Profile_for_DMI_out", NULL, sizeof(GradientProfile_for_DMI_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_TA_Export, Gradient_Profile_for_DMI_out), &_Type_GradientProfile_for_DMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TA_Export::GradientProfile_to_DMI_loop 1", &iter_map_10, sizeof(outC_GradientProfile_to_DMI_loop_TA_Export), offsetof(outC_GradientProfile_to_DMI_TA_Export, Context_1), NULL, NULL, NULL, &scope_55, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_TA_Export, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__10140), offsetof(outC_GradientProfile_to_DMI_TA_Export, _L2), &_Type_array__10140_Utils, NULL, NULL, &scope_422, 1, 2}
};
static const MappingScope scope_15 = {
  "TA_Export::GradientProfile_to_DMI/ GradientProfile_to_DMI_TA_Export",
  scope_15_entries, 4,
};

/* TA_Storage::StoreRaw_NV/ StoreRaw_NV_TA_Storage */
static const MappingEntry scope_14_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 1 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 9},
  /* 2 */ { MAP_OUTPUT, "NV_onboard_out", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, NV_onboard_out), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 12},
  /* 3 */ { MAP_INSTANCE, "TA_Storage::NV_storage 3", NULL, sizeof(outC_NV_storage_TA_Storage), offsetof(outC_StoreRaw_NV_TA_Storage, _1_Context_3), NULL, &scope_14_entries[1], isActive_kcg_bool_kcg_true, &scope_54, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_baseline2::Read_P003V1 3", NULL, sizeof(outC_Read_P003V1_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, Context_3), NULL, NULL, NULL, &scope_53, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, _L22), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L23@mem", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 8 */ { MAP_LOCAL, "_L24@mem", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, _L24), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 0, 1},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_StoreRaw_NV_TA_Storage, _L25), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_StoreRaw_NV_TA_Storage, _L26), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 8},
  /* 11 */ { MAP_OUTPUT, "new_NV", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, new_NV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_OUTPUT, "vald_NV", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, vald_NV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_14 = {
  "TA_Storage::StoreRaw_NV/ StoreRaw_NV_TA_Storage",
  scope_14_entries, 13,
};

/* TA_MRSP::Build_MRSP/ Build_MRSP_TA_MRSP */
static const MappingEntry scope_13_entries[37] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 34},
  /* 2 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), offsetof(outC_Build_MRSP_TA_MRSP, MRSP), &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_470, 1, 36},
  /* 3 */ { MAP_INSTANCE, "TA_MRSP::Calculate_MRSP 1", NULL, sizeof(outC_Calculate_MRSP_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _12_Context_1), NULL, &scope_13_entries[1], isActive_kcg_bool_kcg_true, &scope_31, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TA_SpeedProfiles::Build_SSP_Matrix 1", NULL, sizeof(outC_Build_SSP_Matrix_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _11_Context_1), NULL, NULL, NULL, &scope_32, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_ASP 1", NULL, sizeof(outC_SP_ASP_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_33, 1, 4},
  /* 6 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_LX_SR 1", NULL, sizeof(outC_SP_LX_SR_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_34, 1, 5},
  /* 7 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_MaxTrainSpeed 1", NULL, sizeof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _2_Context_1), NULL, NULL, NULL, &scope_35, 1, 6},
  /* 8 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_ModeRelated 1", NULL, sizeof(outC_SP_ModeRelated_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _3_Context_1), NULL, NULL, NULL, &scope_36, 1, 7},
  /* 9 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_OverrideRelated 1", NULL, sizeof(outC_SP_OverrideRelated_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _4_Context_1), NULL, NULL, NULL, &scope_37, 1, 8},
  /* 10 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_PBD_SR 1", NULL, sizeof(outC_SP_PBD_SR_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _5_Context_1), NULL, NULL, NULL, &scope_38, 1, 9},
  /* 11 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_SSP 1", NULL, sizeof(outC_SP_SSP_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _7_Context_1), NULL, NULL, NULL, &scope_40, 1, 11},
  /* 12 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_STM_MaxSpeed 1", NULL, sizeof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _8_Context_1), NULL, NULL, NULL, &scope_50, 1, 12},
  /* 13 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_STM_SystemSpeed 1", NULL, sizeof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _9_Context_1), NULL, NULL, NULL, &scope_51, 1, 13},
  /* 14 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_SignalingRelated 1", NULL, sizeof(outC_SP_SignalingRelated_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _6_Context_1), NULL, NULL, NULL, &scope_39, 1, 10},
  /* 15 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_TSR 1", NULL, sizeof(outC_SP_TSR_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _10_Context_1), NULL, NULL, NULL, &scope_52, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L11), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L13), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L14), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L15), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L16", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_MRSP_TA_MRSP, _L16), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_Build_MRSP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 24 */ { MAP_LOCAL, "_L1@mem", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), offsetof(outC_Build_MRSP_TA_MRSP, _L1), &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_470, 0, 0},
  /* 25 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L2), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_459, 1, 15},
  /* 26 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 27 */ { MAP_LOCAL, "_L21", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L21), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 31},
  /* 28 */ { MAP_LOCAL, "_L22", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Build_MRSP_TA_MRSP, _L22), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 32},
  /* 29 */ { MAP_LOCAL, "_L23", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_MRSP_TA_MRSP, _L23), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 33},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 16},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 18},
  /* 33 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L7), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 19},
  /* 34 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L8), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 20},
  /* 35 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L9), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 21},
  /* 36 */ { MAP_OUTPUT, "newMRSP", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, newMRSP), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35}
};
static const MappingScope scope_13 = {
  "TA_MRSP::Build_MRSP/ Build_MRSP_TA_MRSP",
  scope_13_entries, 37,
};

/* TA_MA::Build_MA/ Build_MA_TA_MA */
static const MappingEntry scope_12_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "MA_onboard_out", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Build_MA_TA_MA, MA_onboard_out), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TA_MA::Decode_P015 1", NULL, sizeof(outC_Decode_P015_TA_MA), offsetof(outC_Build_MA_TA_MA, _1_Context_1), NULL, NULL, NULL, &scope_29, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_MA::StoreRaw_MA 1", NULL, sizeof(outC_StoreRaw_MA_TA_MA), offsetof(outC_Build_MA_TA_MA, Context_1), NULL, NULL, NULL, &scope_30, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Build_MA_TA_MA, _L1), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Build_MA_TA_MA, _L3), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_418, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_MA_TA_MA, _L5), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_MA_TA_MA, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Build_MA_TA_MA, _L7), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 8},
  /* 10 */ { MAP_OUTPUT, "new_MA", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, new_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_OUTPUT, "vald_MA", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, vald_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_12 = {
  "TA_MA::Build_MA/ Build_MA_TA_MA",
  scope_12_entries, 12,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:then: */
static const MappingEntry scope_11_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_LRBG_only 1", NULL, sizeof(outC_Update_LRBG_only_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _2_Context_1), NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L1_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L2_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_403, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L3_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4}
};
static const MappingScope scope_11 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:then:",
  scope_11_entries, 5,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:then: */
static const MappingEntry scope_10_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_GP_only 1", NULL, sizeof(outC_Update_GP_only_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _3_Context_1), NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_27, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L110_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L29_IfBlock1), &_Type_P021_OBU_T_TM_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_476, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L48_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4}
};
static const MappingScope scope_10 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:then:",
  scope_10_entries, 5,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:then: */
static const MappingEntry scope_9_entries[6] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_GP_then_LRBG 1", NULL, sizeof(outC_Update_GP_then_LRBG_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _4_Context_1), NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L114_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L213_IfBlock1), &_Type_P021_OBU_T_TM_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_476, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L412_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_403, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L511_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5}
};
static const MappingScope scope_9 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:then:",
  scope_9_entries, 6,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:then: */
static const MappingEntry scope_8_entries[6] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_LRBG_then_GP 1", NULL, sizeof(outC_Update_LRBG_then_GP_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _5_Context_1), NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L119_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L218_IfBlock1), &_Type_P021_OBU_T_TM_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_476, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L417_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_403, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L516_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_423, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L615_IfBlock1), &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5}
};
static const MappingScope scope_8 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:then:",
  scope_8_entries, 6,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:else: */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L121_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_423, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L320_IfBlock1), &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_7 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:else:",
  scope_7_entries, 2,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else: */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_8, 1, 2}
};
static const MappingScope scope_6 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:",
  scope_6_entries, 3,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else: */
static const MappingEntry scope_5_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_false, &scope_6, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_9, 1, 2}
};
static const MappingScope scope_5 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:",
  scope_5_entries, 3,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else: */
static const MappingEntry scope_4_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _7_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_false, &scope_5, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2}
};
static const MappingScope scope_4 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:",
  scope_4_entries, 3,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1: */
static const MappingEntry scope_3_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_3 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:",
  scope_3_entries, 3,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_Gradient */
static const MappingEntry scope_2_entries[43] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_OUTPUT, "GP", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, GP), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 41},
  /* 2 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 4},
  /* 3 */ { MAP_LOCAL, "P21_local", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, P21_local), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 13},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_LRBG 1", NULL, sizeof(outC_Eval_LRBG_TA_Lib_internal), offsetof(outC_Build_GradientProfile_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_19, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM::Read_P021 1", NULL, sizeof(outC_Read_P021_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_18, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_GradientProfile_TA_Gradient, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 14},
  /* 7 */ { MAP_LOCAL, "_L103", NULL, sizeof(NID_BG), offsetof(outC_Build_GradientProfile_TA_Gradient, _L103), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 19},
  /* 8 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L104), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 9 */ { MAP_LOCAL, "_L107", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_GradientProfile_TA_Gradient, _L107), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 21},
  /* 10 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_int), offsetof(outC_Build_GradientProfile_TA_Gradient, _L108), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 11 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L109), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 12 */ { MAP_LOCAL, "_L111@mem", NULL, sizeof(NID_BG), offsetof(outC_Build_GradientProfile_TA_Gradient, _L111), &_Type_NID_BG_Utils, NULL, NULL, NULL, 0, 0},
  /* 13 */ { MAP_LOCAL, "_L112", NULL, sizeof(NID_BG), offsetof(outC_Build_GradientProfile_TA_Gradient, _L112), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 24},
  /* 14 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L113), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 15 */ { MAP_LOCAL, "_L116", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L116), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 16 */ { MAP_LOCAL, "_L117", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L117), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 17 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L118), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 18 */ { MAP_LOCAL, "_L119", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L119), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 19 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L124), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 20 */ { MAP_LOCAL, "_L125", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L125), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 21 */ { MAP_LOCAL, "_L127", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L127), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 22 */ { MAP_LOCAL, "_L128", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L128), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 23 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L129), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 24 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L130), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 25 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L132), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 26 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L133), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 27 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L134), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 28 */ { MAP_LOCAL, "_L135", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L135), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 29 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L136), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40},
  /* 30 */ { MAP_LOCAL, "_L42", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L42), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L60", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L60), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_476, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L73", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_GradientProfile_TA_Gradient, _L73), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 18},
  /* 34 */ { MAP_LOCAL, "both_new_curLRBG", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, both_new_curLRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 35 */ { MAP_LOCAL, "both_new_prvLRBG", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, both_new_prvLRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 36 */ { MAP_LOCAL, "msg_LRBG", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, msg_LRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 37 */ { MAP_LOCAL, "msg_prvLRBG", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, msg_prvLRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 38 */ { MAP_LOCAL, "newLRBG_only", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, newLRBG_only), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 39 */ { MAP_LOCAL, "newSSP_only", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, newSSP_only), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 40 */ { MAP_LOCAL, "new_LRBG", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, new_LRBG), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 41 */ { MAP_LOCAL, "new_SSP", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, new_SSP), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 42 */ { MAP_OUTPUT, "updated", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42}
};
static const MappingScope scope_2 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_Gradient",
  scope_2_entries, 43,
};

/* TrackAtlas::TrackAtlasNextGen/ TrackAtlasNextGen_TrackAtlas */
static const MappingEntry scope_1_entries[64] = {
  /* 0 */ { MAP_INSTANCE, "MA_Request::Manage_MA_Request 1", NULL, sizeof(outC_Manage_MA_Request_MA_Request), (size_t)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_16, 1, 5},
  /* 1 */ { MAP_OUTPUT, "MA_onboard_out", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), (size_t)&outputs_ctx.MA_onboard_out, &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 46},
  /* 2 */ { MAP_OUTPUT, "MA_request_out", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&outputs_ctx.MA_request_out, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 48},
  /* 3 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), (size_t)&outputs_ctx.MRSP, &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_470, 1, 47},
  /* 4 */ { MAP_INPUT, "MessageIn", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&inputs_ctx.MessageIn, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 49},
  /* 5 */ { MAP_INPUT, "ModeAndLevel_in", NULL, sizeof(T_Mode_Level_Level_And_Mode_Types_Pkg), (size_t)&inputs_ctx.ModeAndLevel_in, &_Type_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 50},
  /* 6 */ { MAP_OUTPUT, "NV_raw_out", NULL, sizeof(P003_OBU_T_TM), (size_t)&outputs_ctx.NV_raw_out, &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_448, 1, 42},
  /* 7 */ { MAP_INPUT, "P203V1_onboard", NULL, sizeof(P203V1_OBU_T_TM_baseline2), (size_t)&inputs_ctx.P203V1_onboard, &_Type_P203V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 62},
  /* 8 */ { MAP_INPUT, "PermanentDataP003", NULL, sizeof(P003_permanent_data_T_TM_baseline2), (size_t)&inputs_ctx.PermanentDataP003, &_Type_P003_permanent_data_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 63},
  /* 9 */ { MAP_INPUT, "SystemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.SystemTime, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 54},
  /* 10 */ { MAP_INSTANCE, "TA_Export::GradientProfile_to_DMI 1", NULL, sizeof(outC_GradientProfile_to_DMI_TA_Export), (size_t)&outputs_ctx._4_Context_1, NULL, NULL, NULL, &scope_15, 1, 4},
  /* 11 */ { MAP_INSTANCE, "TA_Gradient::Build_GradientProfile 1", NULL, sizeof(outC_Build_GradientProfile_TA_Gradient), (size_t)&outputs_ctx._3_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 12 */ { MAP_INSTANCE, "TA_MA::Build_MA 1", NULL, sizeof(outC_Build_MA_TA_MA), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_12, 1, 1},
  /* 13 */ { MAP_INSTANCE, "TA_MRSP::Build_MRSP 1", NULL, sizeof(outC_Build_MRSP_TA_MRSP), (size_t)&outputs_ctx._5_Context_1, NULL, NULL, NULL, &scope_13, 1, 2},
  /* 14 */ { MAP_INSTANCE, "TA_Storage::StoreRaw_NV 1", NULL, sizeof(outC_StoreRaw_NV_TA_Storage), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_14, 1, 3},
  /* 15 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU 2", NULL, sizeof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2), (size_t)&outputs_ctx.Context_2, NULL, NULL, NULL, &scope_17, 1, 6},
  /* 16 */ { MAP_OUTPUT, "To_ModeAndLevel", NULL, sizeof(DataForModeAndLevel_t_TrackAtlasTypes), (size_t)&outputs_ctx.To_ModeAndLevel, &_Type_DataForModeAndLevel_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_432, 1, 43},
  /* 17 */ { MAP_INPUT, "TrainData_in", NULL, sizeof(FromTIU_t_TrackAtlasTypes), (size_t)&inputs_ctx.TrainData_in, &_Type_FromTIU_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 51},
  /* 18 */ { MAP_INPUT, "TrainPositionIn", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), (size_t)&inputs_ctx.TrainPositionIn, &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 52},
  /* 19 */ { MAP_LOCAL, "_L14", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L14, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_423, 1, 8},
  /* 20 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 21 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 22 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L17, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 23 */ { MAP_LOCAL, "_L18", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), (size_t)&outputs_ctx._L18, &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 9},
  /* 24 */ { MAP_LOCAL, "_L19", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L19, &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_470, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 26 */ { MAP_LOCAL, "_L21", NULL, sizeof(P003V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L21, &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 14},
  /* 27 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L22, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 28 */ { MAP_LOCAL, "_L23", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&outputs_ctx._L23, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 16},
  /* 29 */ { MAP_LOCAL, "_L24", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&outputs_ctx._L24, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 17},
  /* 30 */ { MAP_LOCAL, "_L25", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), (size_t)&outputs_ctx._L25, &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_403, 1, 18},
  /* 31 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_Mode_Level_Level_And_Mode_Types_Pkg), (size_t)&outputs_ctx._L26, &_Type_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 19},
  /* 32 */ { MAP_LOCAL, "_L27", NULL, sizeof(FromTIU_t_TrackAtlasTypes), (size_t)&outputs_ctx._L27, &_Type_FromTIU_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 20},
  /* 33 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L28, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 34 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 35 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L30, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 23},
  /* 36 */ { MAP_LOCAL, "_L31", NULL, sizeof(GradientProfile_for_DMI_t_TrackAtlasTypes), (size_t)&outputs_ctx._L31, &_Type_GradientProfile_for_DMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_422, 1, 24},
  /* 37 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L32, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 38 */ { MAP_LOCAL, "_L34", NULL, sizeof(DataForSupervision_nextGen_t_TrackAtlasTypes), (size_t)&outputs_ctx._L34, &_Type_DataForSupervision_nextGen_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_472, 1, 26},
  /* 39 */ { MAP_LOCAL, "_L35", NULL, sizeof(DataForDMI_t_TrackAtlasTypes), (size_t)&outputs_ctx._L35, &_Type_DataForDMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_471, 1, 27},
  /* 40 */ { MAP_LOCAL, "_L36", NULL, sizeof(DataForModeAndLevel_t_TrackAtlasTypes), (size_t)&outputs_ctx._L36, &_Type_DataForModeAndLevel_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_432, 1, 28},
  /* 41 */ { MAP_LOCAL, "_L37", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&outputs_ctx._L37, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 29},
  /* 42 */ { MAP_LOCAL, "_L38", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L38, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 30},
  /* 43 */ { MAP_LOCAL, "_L40", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L40, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 31},
  /* 44 */ { MAP_LOCAL, "_L41", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L41, &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_399, 1, 32},
  /* 45 */ { MAP_LOCAL, "_L42", NULL, sizeof(Driver2MAR_T_MA_Request), (size_t)&outputs_ctx._L42, &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_404, 1, 33},
  /* 46 */ { MAP_LOCAL, "_L44", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), (size_t)&outputs_ctx._L44, &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_405, 1, 34},
  /* 47 */ { MAP_LOCAL, "_L45", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), (size_t)&outputs_ctx._L45, &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_372, 1, 35},
  /* 48 */ { MAP_LOCAL, "_L46", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), (size_t)&outputs_ctx._L46, &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_370, 1, 36},
  /* 49 */ { MAP_LOCAL, "_L47", NULL, sizeof(T_TRAIN), (size_t)&outputs_ctx._L47, &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 37},
  /* 50 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L48, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 51 */ { MAP_LOCAL, "_L50", NULL, sizeof(P003_OBU_T_TM), (size_t)&outputs_ctx._L50, &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_448, 1, 39},
  /* 52 */ { MAP_LOCAL, "_L51", NULL, sizeof(P203V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L51, &_Type_P203V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 40},
  /* 53 */ { MAP_LOCAL, "_L52", NULL, sizeof(P003_permanent_data_T_TM_baseline2), (size_t)&outputs_ctx._L52, &_Type_P003_permanent_data_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 41},
  /* 54 */ { MAP_INPUT, "fromDriverToMA_R", NULL, sizeof(Driver2MAR_T_MA_Request), (size_t)&inputs_ctx.fromDriverToMA_R, &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_404, 1, 57},
  /* 55 */ { MAP_INPUT, "odometry", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.odometry, &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_399, 1, 56},
  /* 56 */ { MAP_INPUT, "packet0", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), (size_t)&inputs_ctx.packet0, &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_372, 1, 59},
  /* 57 */ { MAP_INPUT, "packet1", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), (size_t)&inputs_ctx.packet1, &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_370, 1, 60},
  /* 58 */ { MAP_INPUT, "preindicationLocation", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.preindicationLocation, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 55},
  /* 59 */ { MAP_INPUT, "t_train", NULL, sizeof(T_TRAIN), (size_t)&inputs_ctx.t_train, &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 61},
  /* 60 */ { MAP_OUTPUT, "to_DMI", NULL, sizeof(DataForDMI_t_TrackAtlasTypes), (size_t)&outputs_ctx.to_DMI, &_Type_DataForDMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_471, 1, 44},
  /* 61 */ { MAP_OUTPUT, "to_Supervision", NULL, sizeof(DataForSupervision_nextGen_t_TrackAtlasTypes), (size_t)&outputs_ctx.to_Supervision, &_Type_DataForSupervision_nextGen_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_472, 1, 45},
  /* 62 */ { MAP_INPUT, "trainProps", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), (size_t)&inputs_ctx.trainProps, &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_405, 1, 58},
  /* 63 */ { MAP_INPUT, "train_length_TOBEREPLACED", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.train_length_TOBEREPLACED, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 53}
};
static const MappingScope scope_1 = {
  "TrackAtlas::TrackAtlasNextGen/ TrackAtlasNextGen_TrackAtlas",
  scope_1_entries, 64,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TrackAtlas::TrackAtlasNextGen", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

