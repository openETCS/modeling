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
static const MappingIterator iter_array_50;
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
static const MappingIterator iter_map_50;
static const MappingIterator iter_array_31 = { "array", 31, 31, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_200 = { "array", 200, 200, NULL};
static const MappingIterator iter_array_363 = { "array", 363, 363, NULL};
static const MappingIterator iter_array_11 = { "array", 11, 11, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_24 = { "array", 24, 24, NULL};
static const MappingIterator iter_array_50 = { "array", 50, 50, NULL};
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
static const MappingIterator iter_map_50 = { "map", 50, 50, NULL};

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
MAP_DECL(scope_502, 1);
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
MAP_DECL(scope_477, 5);
MAP_DECL(scope_476, 1);
MAP_DECL(scope_475, 4);
MAP_DECL(scope_474, 1);
MAP_DECL(scope_473, 6);
MAP_DECL(scope_472, 4);
MAP_DECL(scope_471, 1);
MAP_DECL(scope_470, 1);
MAP_DECL(scope_469, 2);
MAP_DECL(scope_468, 4);
MAP_DECL(scope_467, 2);
MAP_DECL(scope_466, 3);
MAP_DECL(scope_465, 2);
MAP_DECL(scope_464, 1);
MAP_DECL(scope_463, 1);
MAP_DECL(scope_462, 1);
MAP_DECL(scope_461, 3);
MAP_DECL(scope_460, 1);
MAP_DECL(scope_459, 1);
MAP_DECL(scope_458, 1);
MAP_DECL(scope_457, 3);
MAP_DECL(scope_456, 4);
MAP_DECL(scope_455, 1);
MAP_DECL(scope_454, 6);
MAP_DECL(scope_453, 1);
MAP_DECL(scope_452, 3);
MAP_DECL(scope_451, 1);
MAP_DECL(scope_450, 2);
MAP_DECL(scope_449, 52);
MAP_DECL(scope_448, 2);
MAP_DECL(scope_447, 28);
MAP_DECL(scope_446, 1);
MAP_DECL(scope_445, 4);
MAP_DECL(scope_444, 1);
MAP_DECL(scope_443, 9);
MAP_DECL(scope_442, 1);
MAP_DECL(scope_441, 4);
MAP_DECL(scope_440, 1);
MAP_DECL(scope_439, 3);
MAP_DECL(scope_438, 1);
MAP_DECL(scope_437, 1);
MAP_DECL(scope_436, 24);
MAP_DECL(scope_435, 1);
MAP_DECL(scope_434, 2);
MAP_DECL(scope_433, 1);
MAP_DECL(scope_432, 1);
MAP_DECL(scope_431, 5);
MAP_DECL(scope_430, 4);
MAP_DECL(scope_429, 10);
MAP_DECL(scope_428, 1);
MAP_DECL(scope_427, 4);
MAP_DECL(scope_426, 1);
MAP_DECL(scope_425, 3);
MAP_DECL(scope_424, 15);
MAP_DECL(scope_423, 5);
MAP_DECL(scope_422, 5);
MAP_DECL(scope_421, 5);
MAP_DECL(scope_420, 3);
MAP_DECL(scope_419, 22);
MAP_DECL(scope_418, 1);
MAP_DECL(scope_417, 5);
MAP_DECL(scope_416, 1);
MAP_DECL(scope_415, 1);
MAP_DECL(scope_414, 7);
MAP_DECL(scope_413, 2);
MAP_DECL(scope_412, 1);
MAP_DECL(scope_411, 5);
MAP_DECL(scope_410, 1);
MAP_DECL(scope_409, 9);
MAP_DECL(scope_408, 4);
MAP_DECL(scope_407, 15);
MAP_DECL(scope_406, 7);
MAP_DECL(scope_405, 2);
MAP_DECL(scope_404, 14);
MAP_DECL(scope_403, 8);
MAP_DECL(scope_402, 3);
MAP_DECL(scope_401, 15);
MAP_DECL(scope_400, 7);
MAP_DECL(scope_399, 3);
MAP_DECL(scope_398, 4);
MAP_DECL(scope_397, 1);
MAP_DECL(scope_396, 6);
MAP_DECL(scope_395, 11);
MAP_DECL(scope_394, 3);
MAP_DECL(scope_393, 15);
MAP_DECL(scope_392, 3);
MAP_DECL(scope_391, 2);
MAP_DECL(scope_390, 1);
MAP_DECL(scope_389, 6);
MAP_DECL(scope_388, 3);
MAP_DECL(scope_387, 7);
MAP_DECL(scope_386, 3);
MAP_DECL(scope_385, 1);
MAP_DECL(scope_384, 2);
MAP_DECL(scope_383, 1);
MAP_DECL(scope_382, 2);
MAP_DECL(scope_381, 2);
MAP_DECL(scope_380, 2);
MAP_DECL(scope_379, 13);
MAP_DECL(scope_378, 1);
MAP_DECL(scope_377, 2);
MAP_DECL(scope_376, 1);
MAP_DECL(scope_375, 9);
MAP_DECL(scope_374, 5);
MAP_DECL(scope_373, 2);
MAP_DECL(scope_372, 16);
MAP_DECL(scope_371, 2);
MAP_DECL(scope_370, 17);
MAP_DECL(scope_365, 8);
MAP_DECL(scope_364, 6);
MAP_DECL(scope_363, 6);
MAP_DECL(scope_362, 8);
MAP_DECL(scope_361, 18);
MAP_DECL(scope_360, 10);
MAP_DECL(scope_359, 6);
MAP_DECL(scope_358, 6);
MAP_DECL(scope_357, 6);
MAP_DECL(scope_356, 4);
MAP_DECL(scope_355, 17);
MAP_DECL(scope_354, 1);
MAP_DECL(scope_353, 1);
MAP_DECL(scope_352, 3);
MAP_DECL(scope_351, 4);
MAP_DECL(scope_350, 17);
MAP_DECL(scope_349, 17);
MAP_DECL(scope_348, 11);
MAP_DECL(scope_347, 2);
MAP_DECL(scope_346, 2);
MAP_DECL(scope_345, 2);
MAP_DECL(scope_344, 3);
MAP_DECL(scope_343, 3);
MAP_DECL(scope_342, 6);
MAP_DECL(scope_341, 6);
MAP_DECL(scope_340, 18);
MAP_DECL(scope_339, 6);
MAP_DECL(scope_338, 16);
MAP_DECL(scope_337, 10);
MAP_DECL(scope_336, 12);
MAP_DECL(scope_335, 27);
MAP_DECL(scope_334, 26);
MAP_DECL(scope_333, 2);
MAP_DECL(scope_332, 2);
MAP_DECL(scope_331, 2);
MAP_DECL(scope_330, 3);
MAP_DECL(scope_329, 3);
MAP_DECL(scope_328, 6);
MAP_DECL(scope_327, 6);
MAP_DECL(scope_326, 6);
MAP_DECL(scope_325, 6);
MAP_DECL(scope_324, 7);
MAP_DECL(scope_323, 13);
MAP_DECL(scope_322, 6);
MAP_DECL(scope_321, 6);
MAP_DECL(scope_320, 6);
MAP_DECL(scope_319, 12);
MAP_DECL(scope_318, 11);
MAP_DECL(scope_317, 9);
MAP_DECL(scope_316, 18);
MAP_DECL(scope_315, 30);
MAP_DECL(scope_314, 10);
MAP_DECL(scope_313, 13);
MAP_DECL(scope_312, 6);
MAP_DECL(scope_311, 9);
MAP_DECL(scope_310, 23);
MAP_DECL(scope_309, 4);
MAP_DECL(scope_308, 3);
MAP_DECL(scope_307, 7);
MAP_DECL(scope_306, 9);
MAP_DECL(scope_305, 4);
MAP_DECL(scope_304, 5);
MAP_DECL(scope_303, 9);
MAP_DECL(scope_302, 15);
MAP_DECL(scope_301, 6);
MAP_DECL(scope_300, 6);
MAP_DECL(scope_299, 6);
MAP_DECL(scope_298, 6);
MAP_DECL(scope_297, 13);
MAP_DECL(scope_296, 6);
MAP_DECL(scope_295, 13);
MAP_DECL(scope_294, 2);
MAP_DECL(scope_293, 2);
MAP_DECL(scope_292, 2);
MAP_DECL(scope_291, 3);
MAP_DECL(scope_290, 3);
MAP_DECL(scope_289, 6);
MAP_DECL(scope_288, 6);
MAP_DECL(scope_287, 6);
MAP_DECL(scope_286, 2);
MAP_DECL(scope_285, 2);
MAP_DECL(scope_284, 2);
MAP_DECL(scope_283, 3);
MAP_DECL(scope_282, 3);
MAP_DECL(scope_281, 6);
MAP_DECL(scope_280, 2);
MAP_DECL(scope_279, 2);
MAP_DECL(scope_278, 2);
MAP_DECL(scope_277, 3);
MAP_DECL(scope_276, 3);
MAP_DECL(scope_275, 6);
MAP_DECL(scope_274, 2);
MAP_DECL(scope_273, 2);
MAP_DECL(scope_272, 2);
MAP_DECL(scope_271, 3);
MAP_DECL(scope_270, 3);
MAP_DECL(scope_269, 6);
MAP_DECL(scope_268, 12);
MAP_DECL(scope_267, 6);
MAP_DECL(scope_266, 8);
MAP_DECL(scope_265, 6);
MAP_DECL(scope_264, 6);
MAP_DECL(scope_263, 17);
MAP_DECL(scope_262, 9);
MAP_DECL(scope_261, 3);
MAP_DECL(scope_260, 3);
MAP_DECL(scope_259, 3);
MAP_DECL(scope_258, 3);
MAP_DECL(scope_257, 3);
MAP_DECL(scope_256, 4);
MAP_DECL(scope_255, 17);
MAP_DECL(scope_254, 5);
MAP_DECL(scope_253, 22);
MAP_DECL(scope_252, 14);
MAP_DECL(scope_251, 19);
MAP_DECL(scope_250, 12);
MAP_DECL(scope_249, 11);
MAP_DECL(scope_248, 11);
MAP_DECL(scope_247, 11);
MAP_DECL(scope_246, 6);
MAP_DECL(scope_245, 2);
MAP_DECL(scope_244, 2);
MAP_DECL(scope_243, 2);
MAP_DECL(scope_242, 2);
MAP_DECL(scope_241, 3);
MAP_DECL(scope_240, 3);
MAP_DECL(scope_239, 3);
MAP_DECL(scope_238, 6);
MAP_DECL(scope_237, 23);
MAP_DECL(scope_236, 6);
MAP_DECL(scope_235, 2);
MAP_DECL(scope_234, 2);
MAP_DECL(scope_233, 2);
MAP_DECL(scope_232, 3);
MAP_DECL(scope_231, 3);
MAP_DECL(scope_230, 6);
MAP_DECL(scope_229, 2);
MAP_DECL(scope_228, 2);
MAP_DECL(scope_227, 2);
MAP_DECL(scope_226, 3);
MAP_DECL(scope_225, 3);
MAP_DECL(scope_224, 6);
MAP_DECL(scope_223, 6);
MAP_DECL(scope_222, 2);
MAP_DECL(scope_221, 2);
MAP_DECL(scope_220, 2);
MAP_DECL(scope_219, 2);
MAP_DECL(scope_218, 3);
MAP_DECL(scope_217, 3);
MAP_DECL(scope_216, 3);
MAP_DECL(scope_215, 6);
MAP_DECL(scope_214, 6);
MAP_DECL(scope_213, 2);
MAP_DECL(scope_212, 2);
MAP_DECL(scope_211, 2);
MAP_DECL(scope_210, 3);
MAP_DECL(scope_209, 3);
MAP_DECL(scope_208, 6);
MAP_DECL(scope_207, 6);
MAP_DECL(scope_206, 6);
MAP_DECL(scope_205, 8);
MAP_DECL(scope_204, 8);
MAP_DECL(scope_203, 2);
MAP_DECL(scope_202, 2);
MAP_DECL(scope_201, 2);
MAP_DECL(scope_200, 3);
MAP_DECL(scope_199, 3);
MAP_DECL(scope_198, 6);
MAP_DECL(scope_197, 6);
MAP_DECL(scope_196, 8);
MAP_DECL(scope_195, 8);
MAP_DECL(scope_194, 8);
MAP_DECL(scope_193, 8);
MAP_DECL(scope_192, 8);
MAP_DECL(scope_191, 6);
MAP_DECL(scope_190, 9);
MAP_DECL(scope_189, 26);
MAP_DECL(scope_188, 27);
MAP_DECL(scope_187, 9);
MAP_DECL(scope_186, 15);
MAP_DECL(scope_185, 10);
MAP_DECL(scope_184, 6);
MAP_DECL(scope_183, 10);
MAP_DECL(scope_182, 9);
MAP_DECL(scope_181, 2);
MAP_DECL(scope_180, 2);
MAP_DECL(scope_179, 2);
MAP_DECL(scope_178, 2);
MAP_DECL(scope_177, 3);
MAP_DECL(scope_176, 3);
MAP_DECL(scope_175, 3);
MAP_DECL(scope_174, 6);
MAP_DECL(scope_173, 6);
MAP_DECL(scope_172, 2);
MAP_DECL(scope_171, 2);
MAP_DECL(scope_170, 2);
MAP_DECL(scope_169, 2);
MAP_DECL(scope_168, 3);
MAP_DECL(scope_167, 3);
MAP_DECL(scope_166, 3);
MAP_DECL(scope_165, 6);
MAP_DECL(scope_164, 6);
MAP_DECL(scope_163, 81);
MAP_DECL(scope_162, 11);
MAP_DECL(scope_161, 9);
MAP_DECL(scope_160, 25);
MAP_DECL(scope_159, 10);
MAP_DECL(scope_158, 13);
MAP_DECL(scope_157, 12);
MAP_DECL(scope_156, 12);
MAP_DECL(scope_155, 25);
MAP_DECL(scope_154, 6);
MAP_DECL(scope_153, 14);
MAP_DECL(scope_152, 11);
MAP_DECL(scope_151, 21);
MAP_DECL(scope_150, 9);
MAP_DECL(scope_149, 6);
MAP_DECL(scope_148, 2);
MAP_DECL(scope_147, 2);
MAP_DECL(scope_146, 2);
MAP_DECL(scope_145, 2);
MAP_DECL(scope_144, 3);
MAP_DECL(scope_143, 3);
MAP_DECL(scope_142, 3);
MAP_DECL(scope_141, 6);
MAP_DECL(scope_140, 6);
MAP_DECL(scope_139, 2);
MAP_DECL(scope_138, 2);
MAP_DECL(scope_137, 2);
MAP_DECL(scope_136, 2);
MAP_DECL(scope_135, 3);
MAP_DECL(scope_134, 3);
MAP_DECL(scope_133, 3);
MAP_DECL(scope_132, 6);
MAP_DECL(scope_131, 83);
MAP_DECL(scope_130, 8);
MAP_DECL(scope_129, 11);
MAP_DECL(scope_128, 17);
MAP_DECL(scope_127, 17);
MAP_DECL(scope_126, 7);
MAP_DECL(scope_125, 2);
MAP_DECL(scope_124, 2);
MAP_DECL(scope_123, 2);
MAP_DECL(scope_122, 2);
MAP_DECL(scope_121, 3);
MAP_DECL(scope_120, 3);
MAP_DECL(scope_119, 3);
MAP_DECL(scope_118, 6);
MAP_DECL(scope_117, 2);
MAP_DECL(scope_116, 2);
MAP_DECL(scope_115, 2);
MAP_DECL(scope_114, 2);
MAP_DECL(scope_113, 3);
MAP_DECL(scope_112, 3);
MAP_DECL(scope_111, 3);
MAP_DECL(scope_110, 6);
MAP_DECL(scope_109, 6);
MAP_DECL(scope_108, 21);
MAP_DECL(scope_107, 20);
MAP_DECL(scope_106, 8);
MAP_DECL(scope_105, 6);
MAP_DECL(scope_104, 6);
MAP_DECL(scope_103, 14);
MAP_DECL(scope_102, 4);
MAP_DECL(scope_101, 9);
MAP_DECL(scope_100, 4);
MAP_DECL(scope_99, 13);
MAP_DECL(scope_98, 4);
MAP_DECL(scope_97, 3);
MAP_DECL(scope_96, 11);
MAP_DECL(scope_95, 13);
MAP_DECL(scope_94, 9);
MAP_DECL(scope_93, 10);
MAP_DECL(scope_92, 9);
MAP_DECL(scope_91, 6);
MAP_DECL(scope_90, 2);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 2);
MAP_DECL(scope_87, 2);
MAP_DECL(scope_86, 3);
MAP_DECL(scope_85, 3);
MAP_DECL(scope_84, 3);
MAP_DECL(scope_83, 6);
MAP_DECL(scope_82, 6);
MAP_DECL(scope_81, 2);
MAP_DECL(scope_80, 2);
MAP_DECL(scope_79, 2);
MAP_DECL(scope_78, 2);
MAP_DECL(scope_77, 3);
MAP_DECL(scope_76, 3);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 6);
MAP_DECL(scope_73, 23);
MAP_DECL(scope_72, 17);
MAP_DECL(scope_71, 2);
MAP_DECL(scope_70, 1);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 1);
MAP_DECL(scope_67, 2);
MAP_DECL(scope_66, 1);
MAP_DECL(scope_65, 1);
MAP_DECL(scope_62, 10);
MAP_DECL(scope_61, 41);
MAP_DECL(scope_60, 24);
MAP_DECL(scope_59, 6);
MAP_DECL(scope_58, 17);
MAP_DECL(scope_57, 12);
MAP_DECL(scope_56, 9);
MAP_DECL(scope_55, 4);
MAP_DECL(scope_54, 9);
MAP_DECL(scope_53, 3);
MAP_DECL(scope_52, 3);
MAP_DECL(scope_51, 3);
MAP_DECL(scope_50, 5);
MAP_DECL(scope_49, 6);
MAP_DECL(scope_48, 7);
MAP_DECL(scope_47, 7);
MAP_DECL(scope_46, 2);
MAP_DECL(scope_45, 3);
MAP_DECL(scope_44, 3);
MAP_DECL(scope_43, 3);
MAP_DECL(scope_42, 3);
MAP_DECL(scope_41, 43);
MAP_DECL(scope_40, 3);
MAP_DECL(scope_39, 3);
MAP_DECL(scope_38, 3);
MAP_DECL(scope_37, 4);
MAP_DECL(scope_36, 3);
MAP_DECL(scope_35, 3);
MAP_DECL(scope_34, 3);
MAP_DECL(scope_33, 15);
MAP_DECL(scope_32, 16);
MAP_DECL(scope_31, 12);
MAP_DECL(scope_30, 55);
MAP_DECL(scope_29, 8);
MAP_DECL(scope_28, 7);
MAP_DECL(scope_27, 13);
MAP_DECL(scope_26, 13);
MAP_DECL(scope_25, 2);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 3);
MAP_DECL(scope_21, 3);
MAP_DECL(scope_20, 5);
MAP_DECL(scope_19, 9);
MAP_DECL(scope_18, 28);
MAP_DECL(scope_17, 2);
MAP_DECL(scope_16, 58);
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
MAP_DECL(scope_1, 68);
MAP_DECL(scope_0, 1);

/* array__10620 */
static const MappingEntry scope_502_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__10235), 0, &_Type_struct__10235_Utils, NULL, NULL, &scope_434, 1, 0}
};
static const MappingScope scope_502 = {
  "array__10620",
  scope_502_entries, 1,
};

/* array__10617 */
static const MappingEntry scope_501_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_31, sizeof(struct__10235), 0, &_Type_struct__10235_Utils, NULL, NULL, &scope_434, 1, 0}
};
static const MappingScope scope_501 = {
  "array__10617",
  scope_501_entries, 1,
};

/* array_int_32_32 */
static const MappingEntry scope_500_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_32), 0, &_Type_array_int_32_Utils, NULL, NULL, &scope_437, 1, 0}
};
static const MappingScope scope_500 = {
  "array_int_32_32",
  scope_500_entries, 1,
};

/* array__10611 */
static const MappingEntry scope_499_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__10411), 0, &_Type_struct__10411_Utils, NULL, NULL, &scope_450, 1, 0}
};
static const MappingScope scope_499 = {
  "array__10611",
  scope_499_entries, 1,
};

/* array__10608 */
static const MappingEntry scope_498_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10411), 0, &_Type_struct__10411_Utils, NULL, NULL, &scope_450, 1, 0}
};
static const MappingScope scope_498 = {
  "array__10608",
  scope_498_entries, 1,
};

/* array__10605 */
static const MappingEntry scope_497_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__10428), 0, &_Type_struct__10428_Utils, NULL, NULL, &scope_454, 1, 0}
};
static const MappingScope scope_497 = {
  "array__10605",
  scope_497_entries, 1,
};

/* array__10602 */
static const MappingEntry scope_496_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10437), 0, &_Type_array__10437_Utils, NULL, NULL, &scope_455, 1, 0}
};
static const MappingScope scope_496 = {
  "array__10602",
  scope_496_entries, 1,
};

/* array__10599 */
static const MappingEntry scope_495_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10428), 0, &_Type_struct__10428_Utils, NULL, NULL, &scope_454, 1, 0}
};
static const MappingScope scope_495 = {
  "array__10599",
  scope_495_entries, 1,
};

/* array__10596 */
static const MappingEntry scope_494_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10416), 0, &_Type_array__10416_Utils, NULL, NULL, &scope_451, 1, 0}
};
static const MappingScope scope_494 = {
  "array__10596",
  scope_494_entries, 1,
};

/* array__10593 */
static const MappingEntry scope_493_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10077), 0, &_Type_struct__10077_Utils, NULL, NULL, &scope_413, 1, 0}
};
static const MappingScope scope_493 = {
  "array__10593",
  scope_493_entries, 1,
};

/* array_int_64_32 */
static const MappingEntry scope_492_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_64), 0, &_Type_array_int_64_Utils, NULL, NULL, &scope_459, 1, 0}
};
static const MappingScope scope_492 = {
  "array_int_64_32",
  scope_492_entries, 1,
};

/* array_int_200 */
static const MappingEntry scope_491_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_491 = {
  "array_int_200",
  scope_491_entries, 1,
};

/* array__10584 */
static const MappingEntry scope_490_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(array__10459), 0, &_Type_array__10459_Utils, NULL, NULL, &scope_460, 1, 0}
};
static const MappingScope scope_490 = {
  "array__10584",
  scope_490_entries, 1,
};

/* array__10581 */
static const MappingEntry scope_489_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(array__10468), 0, &_Type_array__10468_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_489 = {
  "array__10581",
  scope_489_entries, 1,
};

/* array_int_11 */
static const MappingEntry scope_488_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_488 = {
  "array_int_11",
  scope_488_entries, 1,
};

/* array__10575 */
static const MappingEntry scope_487_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10482), 0, &_Type_struct__10482_Utils, NULL, NULL, &scope_466, 1, 0}
};
static const MappingScope scope_487 = {
  "array__10575",
  scope_487_entries, 1,
};

/* array__10572 */
static const MappingEntry scope_486_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(struct__10462), 0, &_Type_struct__10462_Utils, NULL, NULL, &scope_461, 1, 0}
};
static const MappingScope scope_486 = {
  "array__10572",
  scope_486_entries, 1,
};

/* array_int_128_32 */
static const MappingEntry scope_485_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_128), 0, &_Type_array_int_128_Utils, NULL, NULL, &scope_416, 1, 0}
};
static const MappingScope scope_485 = {
  "array_int_128_32",
  scope_485_entries, 1,
};

/* array__10566 */
static const MappingEntry scope_484_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(Q_SCALE), 0, &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_484 = {
  "array__10566",
  scope_484_entries, 1,
};

/* array__10563 */
static const MappingEntry scope_483_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10537), 0, &_Type_array__10537_Utils, NULL, NULL, &scope_476, 1, 0}
};
static const MappingScope scope_483 = {
  "array__10563",
  scope_483_entries, 1,
};

/* array__10560 */
static const MappingEntry scope_482_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array__10232), 0, &_Type_array__10232_Utils, NULL, NULL, &scope_433, 1, 0}
};
static const MappingScope scope_482 = {
  "array__10560",
  scope_482_entries, 1,
};

/* array_int_99_33 */
static const MappingEntry scope_481_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_99), 0, &_Type_array_int_99_Utils, NULL, NULL, &scope_474, 1, 0}
};
static const MappingScope scope_481 = {
  "array_int_99_33",
  scope_481_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_480_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 0}
};
static const MappingScope scope_480 = {
  "array_int_500_500",
  scope_480_entries, 1,
};

/* array_bool_30 */
static const MappingEntry scope_479_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_479 = {
  "array_bool_30",
  scope_479_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_478_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_478 = {
  "array_int_30",
  scope_478_entries, 1,
};

/* struct__10540 */
static const MappingEntry scope_477_entries[5] = {
  /* 0 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10540, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10540, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10540, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".sections", NULL, sizeof(array__10537), offsetof(struct__10540, sections), &_Type_array__10537_Utils, NULL, NULL, &scope_476, 1, 4},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10540, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_477 = {
  "struct__10540",
  scope_477_entries, 5,
};

/* array__10537 */
static const MappingEntry scope_476_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10530), 0, &_Type_struct__10530_Utils, NULL, NULL, &scope_475, 1, 0}
};
static const MappingScope scope_476 = {
  "array__10537",
  scope_476_entries, 1,
};

/* struct__10530 */
static const MappingEntry scope_475_entries[4] = {
  /* 0 */ { MAP_FIELD, ".d_gradient", NULL, sizeof(kcg_int), offsetof(struct__10530, d_gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".g_a", NULL, sizeof(kcg_int), offsetof(struct__10530, g_a), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".q_gdir", NULL, sizeof(Q_GDIR), offsetof(struct__10530, q_gdir), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10530, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_475 = {
  "struct__10530",
  scope_475_entries, 4,
};

/* array_int_99 */
static const MappingEntry scope_474_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_474 = {
  "array_int_99",
  scope_474_entries, 1,
};

/* struct__10518 */
static const MappingEntry scope_473_entries[6] = {
  /* 0 */ { MAP_FIELD, ".GradientProfile", NULL, sizeof(array__10232), offsetof(struct__10518, GradientProfile), &_Type_array__10232_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 1 */ { MAP_FIELD, ".MA", NULL, sizeof(struct__9886), offsetof(struct__10518, MA), &_Type_struct__9886_Utils, NULL, NULL, &scope_393, 1, 1},
  /* 2 */ { MAP_FIELD, ".MRSP", NULL, sizeof(array__10508), offsetof(struct__10518, MRSP), &_Type_array__10508_Utils, NULL, NULL, &scope_471, 1, 5},
  /* 3 */ { MAP_FIELD, ".freshGradientProfile", NULL, sizeof(kcg_bool), offsetof(struct__10518, freshGradientProfile), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".freshMA", NULL, sizeof(kcg_bool), offsetof(struct__10518, freshMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_FIELD, ".freshMRSP", NULL, sizeof(kcg_bool), offsetof(struct__10518, freshMRSP), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_473 = {
  "struct__10518",
  scope_473_entries, 6,
};

/* struct__10511 */
static const MappingEntry scope_472_entries[4] = {
  /* 0 */ { MAP_FIELD, ".GradientProfile", NULL, sizeof(array__10229), offsetof(struct__10511, GradientProfile), &_Type_array__10229_Utils, NULL, NULL, &scope_432, 1, 0},
  /* 1 */ { MAP_FIELD, ".Gradient_profile_updated", NULL, sizeof(kcg_bool), offsetof(struct__10511, Gradient_profile_updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".MRSP", NULL, sizeof(array__10508), offsetof(struct__10511, MRSP), &_Type_array__10508_Utils, NULL, NULL, &scope_471, 1, 2},
  /* 3 */ { MAP_FIELD, ".MRSP_updated", NULL, sizeof(kcg_bool), offsetof(struct__10511, MRSP_updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_472 = {
  "struct__10511",
  scope_472_entries, 4,
};

/* array__10508 */
static const MappingEntry scope_471_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_200, sizeof(struct__10493), 0, &_Type_struct__10493_Utils, NULL, NULL, &scope_468, 1, 0}
};
static const MappingScope scope_471 = {
  "array__10508",
  scope_471_entries, 1,
};

/* array__10505 */
static const MappingEntry scope_470_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(struct__10500), 0, &_Type_struct__10500_Utils, NULL, NULL, &scope_469, 1, 0}
};
static const MappingScope scope_470 = {
  "array__10505",
  scope_470_entries, 1,
};

/* struct__10500 */
static const MappingEntry scope_469_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Index", NULL, sizeof(kcg_int), offsetof(struct__10500, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Loc", NULL, sizeof(kcg_int), offsetof(struct__10500, Loc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_469 = {
  "struct__10500",
  scope_469_entries, 2,
};

/* struct__10493 */
static const MappingEntry scope_468_entries[4] = {
  /* 0 */ { MAP_FIELD, ".Loc_Abs", NULL, sizeof(kcg_int), offsetof(struct__10493, Loc_Abs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__10493, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".MRS", NULL, sizeof(kcg_int), offsetof(struct__10493, MRS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10493, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_468 = {
  "struct__10493",
  scope_468_entries, 4,
};

/* struct__10488 */
static const MappingEntry scope_467_entries[2] = {
  /* 0 */ { MAP_FIELD, ".index", NULL, sizeof(kcg_int), offsetof(struct__10488, index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__10488, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_467 = {
  "struct__10488",
  scope_467_entries, 2,
};

/* struct__10482 */
static const MappingEntry scope_466_entries[3] = {
  /* 0 */ { MAP_FIELD, ".found", NULL, sizeof(kcg_bool), offsetof(struct__10482, found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".index", NULL, sizeof(kcg_int), offsetof(struct__10482, index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__10482, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_466 = {
  "struct__10482",
  scope_466_entries, 3,
};

/* struct__10477 */
static const MappingEntry scope_465_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Found", NULL, sizeof(kcg_bool), offsetof(struct__10477, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Index", NULL, sizeof(kcg_int), offsetof(struct__10477, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_465 = {
  "struct__10477",
  scope_465_entries, 2,
};

/* array_int_33_11 */
static const MappingEntry scope_464_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(array_int_33), 0, &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 0}
};
static const MappingScope scope_464 = {
  "array_int_33_11",
  scope_464_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_463_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_463 = {
  "array_int_33",
  scope_463_entries, 1,
};

/* array__10468 */
static const MappingEntry scope_462_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_363, sizeof(struct__10462), 0, &_Type_struct__10462_Utils, NULL, NULL, &scope_461, 1, 0}
};
static const MappingScope scope_462 = {
  "array__10468",
  scope_462_entries, 1,
};

/* struct__10462 */
static const MappingEntry scope_461_entries[3] = {
  /* 0 */ { MAP_FIELD, ".Category_Index", NULL, sizeof(kcg_int), offsetof(struct__10462, Category_Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Loc", NULL, sizeof(kcg_int), offsetof(struct__10462, Loc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Pos_Index", NULL, sizeof(kcg_int), offsetof(struct__10462, Pos_Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_461 = {
  "struct__10462",
  scope_461_entries, 3,
};

/* array__10459 */
static const MappingEntry scope_460_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_11, sizeof(array__10416), 0, &_Type_array__10416_Utils, NULL, NULL, &scope_451, 1, 0}
};
static const MappingScope scope_460 = {
  "array__10459",
  scope_460_entries, 1,
};

/* array_int_64 */
static const MappingEntry scope_459_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_459 = {
  "array_int_64",
  scope_459_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_458_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_458 = {
  "array_int_5",
  scope_458_entries, 1,
};

/* struct__10447 */
static const MappingEntry scope_457_entries[3] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10447, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10447, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10447, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_457 = {
  "struct__10447",
  scope_457_entries, 3,
};

/* struct__10440 */
static const MappingEntry scope_456_entries[4] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10440, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10440, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".sections", NULL, sizeof(array__10437), offsetof(struct__10440, sections), &_Type_array__10437_Utils, NULL, NULL, &scope_455, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10440, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_456 = {
  "struct__10440",
  scope_456_entries, 4,
};

/* array__10437 */
static const MappingEntry scope_455_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10428), 0, &_Type_struct__10428_Utils, NULL, NULL, &scope_454, 1, 0}
};
static const MappingScope scope_455 = {
  "array__10437",
  scope_455_entries, 1,
};

/* struct__10428 */
static const MappingEntry scope_454_entries[6] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__10425), offsetof(struct__10428, SECTIONS_q_diff), &_Type_array__10425_Utils, NULL, NULL, &scope_453, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_static", NULL, sizeof(kcg_int), offsetof(struct__10428, d_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10428, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".q_front", NULL, sizeof(Q_FRONT), offsetof(struct__10428, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".v_static", NULL, sizeof(kcg_int), offsetof(struct__10428, v_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10428, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_454 = {
  "struct__10428",
  scope_454_entries, 6,
};

/* array__10425 */
static const MappingEntry scope_453_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10419), 0, &_Type_struct__10419_Utils, NULL, NULL, &scope_452, 1, 0}
};
static const MappingScope scope_453 = {
  "array__10425",
  scope_453_entries, 1,
};

/* struct__10419 */
static const MappingEntry scope_452_entries[3] = {
  /* 0 */ { MAP_FIELD, ".nc_diff", NULL, sizeof(kcg_int), offsetof(struct__10419, nc_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".v_diff", NULL, sizeof(kcg_int), offsetof(struct__10419, v_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10419, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_452 = {
  "struct__10419",
  scope_452_entries, 3,
};

/* array__10416 */
static const MappingEntry scope_451_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10411), 0, &_Type_struct__10411_Utils, NULL, NULL, &scope_450, 1, 0}
};
static const MappingScope scope_451 = {
  "array__10416",
  scope_451_entries, 1,
};

/* struct__10411 */
static const MappingEntry scope_450_entries[2] = {
  /* 0 */ { MAP_FIELD, ".speed", NULL, sizeof(kcg_int), offsetof(struct__10411, speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".target", NULL, sizeof(kcg_int), offsetof(struct__10411, target), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_450 = {
  "struct__10411",
  scope_450_entries, 2,
};

/* struct__10356 */
static const MappingEntry scope_449_entries[52] = {
  /* 0 */ { MAP_FIELD, ".a_nvmaxredadh1", NULL, sizeof(kcg_real), offsetof(struct__10356, a_nvmaxredadh1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 30},
  /* 1 */ { MAP_FIELD, ".a_nvmaxredadh2", NULL, sizeof(kcg_real), offsetof(struct__10356, a_nvmaxredadh2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 31},
  /* 2 */ { MAP_FIELD, ".a_nvmaxredadh3", NULL, sizeof(kcg_real), offsetof(struct__10356, a_nvmaxredadh3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 32},
  /* 3 */ { MAP_FIELD, ".a_nvp12", NULL, sizeof(kcg_real), offsetof(struct__10356, a_nvp12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 38},
  /* 4 */ { MAP_FIELD, ".a_nvp23", NULL, sizeof(kcg_real), offsetof(struct__10356, a_nvp23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 39},
  /* 5 */ { MAP_FIELD, ".d_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10356, d_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 6 */ { MAP_FIELD, ".d_nvpotrp", NULL, sizeof(kcg_int), offsetof(struct__10356, d_nvpotrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 7 */ { MAP_FIELD, ".d_nvroll", NULL, sizeof(kcg_int), offsetof(struct__10356, d_nvroll), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_FIELD, ".d_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10356, d_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 9 */ { MAP_FIELD, ".d_validnv", NULL, sizeof(kcg_int), offsetof(struct__10356, d_validnv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_FIELD, ".l_nvkrint", NULL, sizeof(L_NVKRINT), offsetof(struct__10356, l_nvkrint), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 47},
  /* 11 */ { MAP_FIELD, ".m_nvavadh", NULL, sizeof(kcg_real), offsetof(struct__10356, m_nvavadh), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 12 */ { MAP_FIELD, ".m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(struct__10356, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 25},
  /* 13 */ { MAP_FIELD, ".m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(struct__10356, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 27},
  /* 14 */ { MAP_FIELD, ".m_nvebcl", NULL, sizeof(M_NVEBCL), offsetof(struct__10356, m_nvebcl), &_Type_M_NVEBCL_Utils, NULL, NULL, NULL, 1, 35},
  /* 15 */ { MAP_FIELD, ".m_nvkrint", NULL, sizeof(kcg_real), offsetof(struct__10356, m_nvkrint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 48},
  /* 16 */ { MAP_FIELD, ".m_nvktint", NULL, sizeof(kcg_real), offsetof(struct__10356, m_nvktint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 51},
  /* 17 */ { MAP_FIELD, ".m_nvkvint_12", NULL, sizeof(kcg_real), offsetof(struct__10356, m_nvkvint_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 41},
  /* 18 */ { MAP_FIELD, ".m_nvkvint_23", NULL, sizeof(kcg_real), offsetof(struct__10356, m_nvkvint_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 42},
  /* 19 */ { MAP_FIELD, ".n_iter_k", NULL, sizeof(kcg_int), offsetof(struct__10356, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 45},
  /* 20 */ { MAP_FIELD, ".n_iter_k_list", NULL, sizeof(array__10307), offsetof(struct__10356, n_iter_k_list), &_Type_array__10307_Utils, NULL, NULL, &scope_444, 1, 46},
  /* 21 */ { MAP_FIELD, ".n_iter_l", NULL, sizeof(kcg_int), offsetof(struct__10356, n_iter_l), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 22 */ { MAP_FIELD, ".n_iter_l_list", NULL, sizeof(array__10282), offsetof(struct__10356, n_iter_l_list), &_Type_array__10282_Utils, NULL, NULL, &scope_440, 1, 50},
  /* 23 */ { MAP_FIELD, ".n_iter_n", NULL, sizeof(kcg_int), offsetof(struct__10356, n_iter_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 24 */ { MAP_FIELD, ".n_iter_n_list", NULL, sizeof(array__10317), offsetof(struct__10356, n_iter_n_list), &_Type_array__10317_Utils, NULL, NULL, &scope_446, 1, 44},
  /* 25 */ { MAP_FIELD, ".n_iter_nid_c", NULL, sizeof(kcg_int), offsetof(struct__10356, n_iter_nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 26 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__10356, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 27 */ { MAP_FIELD, ".nid_c_list", NULL, sizeof(array__10240), offsetof(struct__10356, nid_c_list), &_Type_array__10240_Utils, NULL, NULL, &scope_435, 1, 7},
  /* 28 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__10356, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 29 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10356, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 30 */ { MAP_FIELD, ".q_nvdriver_adhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(struct__10356, q_nvdriver_adhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_FIELD, ".q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(struct__10356, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 16},
  /* 32 */ { MAP_FIELD, ".q_nvguiperm", NULL, sizeof(Q_NVGUIPERM), offsetof(struct__10356, q_nvguiperm), &_Type_Q_NVGUIPERM_Utils, NULL, NULL, NULL, 1, 17},
  /* 33 */ { MAP_FIELD, ".q_nvinhsnicperm", NULL, sizeof(Q_NVINHSMICPERM), offsetof(struct__10356, q_nvinhsnicperm), &_Type_Q_NVINHSMICPERM_Utils, NULL, NULL, NULL, 1, 19},
  /* 34 */ { MAP_FIELD, ".q_nvkint", NULL, sizeof(Q_NVKINT), offsetof(struct__10356, q_nvkint), &_Type_Q_NVKINT_Utils, NULL, NULL, NULL, 1, 36},
  /* 35 */ { MAP_FIELD, ".q_nvkvintset", NULL, sizeof(Q_NVKVINTSET), offsetof(struct__10356, q_nvkvintset), &_Type_Q_NVKVINTSET_Utils, NULL, NULL, NULL, 1, 37},
  /* 36 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__10356, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 37 */ { MAP_FIELD, ".q_nvsbfbperm", NULL, sizeof(Q_NVSBFBPERM), offsetof(struct__10356, q_nvsbfbperm), &_Type_Q_NVSBFBPERM_Utils, NULL, NULL, NULL, 1, 18},
  /* 38 */ { MAP_FIELD, ".q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(struct__10356, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 15},
  /* 39 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10356, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 40 */ { MAP_FIELD, ".t_nvcontact", NULL, sizeof(kcg_int), offsetof(struct__10356, t_nvcontact), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 41 */ { MAP_FIELD, ".t_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10356, t_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 42 */ { MAP_FIELD, ".v_nvallowovtrp", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvallowovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 43 */ { MAP_FIELD, ".v_nvkvint", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvkvint), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 44 */ { MAP_FIELD, ".v_nvlimsuperv", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvlimsuperv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 45 */ { MAP_FIELD, ".v_nvonsight", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvonsight), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 46 */ { MAP_FIELD, ".v_nvrel", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvrel), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 47 */ { MAP_FIELD, ".v_nvshunt", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvshunt), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 48 */ { MAP_FIELD, ".v_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 49 */ { MAP_FIELD, ".v_nvsupovtrp", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvsupovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 50 */ { MAP_FIELD, ".v_nvunfit", NULL, sizeof(kcg_int), offsetof(struct__10356, v_nvunfit), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 51 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10356, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_449 = {
  "struct__10356",
  scope_449_entries, 52,
};

/* struct__10351 */
static const MappingEntry scope_448_entries[2] = {
  /* 0 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__10351, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".v_nvlimsuperv", NULL, sizeof(kcg_int), offsetof(struct__10351, v_nvlimsuperv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_448 = {
  "struct__10351",
  scope_448_entries, 2,
};

/* struct__10320 */
static const MappingEntry scope_447_entries[28] = {
  /* 0 */ { MAP_FIELD, ".a_nvmaxredadh1", NULL, sizeof(kcg_real), offsetof(struct__10320, a_nvmaxredadh1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".a_nvmaxredadh2", NULL, sizeof(kcg_real), offsetof(struct__10320, a_nvmaxredadh2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".a_nvmaxredadh3", NULL, sizeof(kcg_real), offsetof(struct__10320, a_nvmaxredadh3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".a_nvp12", NULL, sizeof(kcg_real), offsetof(struct__10320, a_nvp12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 4 */ { MAP_FIELD, ".a_nvp23", NULL, sizeof(kcg_real), offsetof(struct__10320, a_nvp23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 5 */ { MAP_FIELD, ".l_nvkrint", NULL, sizeof(L_NVKRINT), offsetof(struct__10320, l_nvkrint), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 23},
  /* 6 */ { MAP_FIELD, ".m_nvavadh", NULL, sizeof(kcg_real), offsetof(struct__10320, m_nvavadh), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".m_nvebcl", NULL, sizeof(M_NVEBCL), offsetof(struct__10320, m_nvebcl), &_Type_M_NVEBCL_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_FIELD, ".m_nvkrint", NULL, sizeof(kcg_real), offsetof(struct__10320, m_nvkrint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 24},
  /* 9 */ { MAP_FIELD, ".m_nvktint", NULL, sizeof(kcg_real), offsetof(struct__10320, m_nvktint), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 27},
  /* 10 */ { MAP_FIELD, ".m_nvkvint_12", NULL, sizeof(kcg_real), offsetof(struct__10320, m_nvkvint_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_FIELD, ".m_nvkvint_23", NULL, sizeof(kcg_real), offsetof(struct__10320, m_nvkvint_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_FIELD, ".n_iter_k", NULL, sizeof(kcg_int), offsetof(struct__10320, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 13 */ { MAP_FIELD, ".n_iter_k_list", NULL, sizeof(array__10307), offsetof(struct__10320, n_iter_k_list), &_Type_array__10307_Utils, NULL, NULL, &scope_444, 1, 22},
  /* 14 */ { MAP_FIELD, ".n_iter_l", NULL, sizeof(kcg_int), offsetof(struct__10320, n_iter_l), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 15 */ { MAP_FIELD, ".n_iter_l_list", NULL, sizeof(array__10282), offsetof(struct__10320, n_iter_l_list), &_Type_array__10282_Utils, NULL, NULL, &scope_440, 1, 26},
  /* 16 */ { MAP_FIELD, ".n_iter_n", NULL, sizeof(kcg_int), offsetof(struct__10320, n_iter_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_FIELD, ".n_iter_n_list", NULL, sizeof(array__10317), offsetof(struct__10320, n_iter_n_list), &_Type_array__10317_Utils, NULL, NULL, &scope_446, 1, 20},
  /* 18 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__10320, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 19 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10320, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_FIELD, ".q_nvguiperm", NULL, sizeof(Q_NVGUIPERM), offsetof(struct__10320, q_nvguiperm), &_Type_Q_NVGUIPERM_Utils, NULL, NULL, NULL, 1, 4},
  /* 21 */ { MAP_FIELD, ".q_nvinhsnicperm", NULL, sizeof(Q_NVINHSMICPERM), offsetof(struct__10320, q_nvinhsnicperm), &_Type_Q_NVINHSMICPERM_Utils, NULL, NULL, NULL, 1, 6},
  /* 22 */ { MAP_FIELD, ".q_nvkint", NULL, sizeof(Q_NVKINT), offsetof(struct__10320, q_nvkint), &_Type_Q_NVKINT_Utils, NULL, NULL, NULL, 1, 12},
  /* 23 */ { MAP_FIELD, ".q_nvkvintset", NULL, sizeof(Q_NVKVINTSET), offsetof(struct__10320, q_nvkvintset), &_Type_Q_NVKVINTSET_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_FIELD, ".q_nvsbfbperm", NULL, sizeof(Q_NVSBFBPERM), offsetof(struct__10320, q_nvsbfbperm), &_Type_Q_NVSBFBPERM_Utils, NULL, NULL, NULL, 1, 5},
  /* 25 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10320, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 26 */ { MAP_FIELD, ".v_nvkvint", NULL, sizeof(kcg_int), offsetof(struct__10320, v_nvkvint), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 27 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10320, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_447 = {
  "struct__10320",
  scope_447_entries, 28,
};

/* array__10317 */
static const MappingEntry scope_446_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10310), 0, &_Type_struct__10310_Utils, NULL, NULL, &scope_445, 1, 0}
};
static const MappingScope scope_446 = {
  "array__10317",
  scope_446_entries, 1,
};

/* struct__10310 */
static const MappingEntry scope_445_entries[4] = {
  /* 0 */ { MAP_FIELD, ".m_nvkvint_n_12", NULL, sizeof(kcg_real), offsetof(struct__10310, m_nvkvint_n_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_nvkvint_n_23", NULL, sizeof(kcg_real), offsetof(struct__10310, m_nvkvint_n_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".v_nvkvint_n", NULL, sizeof(kcg_int), offsetof(struct__10310, v_nvkvint_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10310, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_445 = {
  "struct__10310",
  scope_445_entries, 4,
};

/* array__10307 */
static const MappingEntry scope_444_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10295), 0, &_Type_struct__10295_Utils, NULL, NULL, &scope_443, 1, 0}
};
static const MappingScope scope_444 = {
  "array__10307",
  scope_444_entries, 1,
};

/* struct__10295 */
static const MappingEntry scope_443_entries[9] = {
  /* 0 */ { MAP_FIELD, ".a_nvp12_k", NULL, sizeof(kcg_real), offsetof(struct__10295, a_nvp12_k), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".a_nvp23_k", NULL, sizeof(kcg_real), offsetof(struct__10295, a_nvp23_k), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".m_nvkvint_k_12", NULL, sizeof(kcg_real), offsetof(struct__10295, m_nvkvint_k_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".m_nvkvint_k_23", NULL, sizeof(kcg_real), offsetof(struct__10295, m_nvkvint_k_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".n_iter_k_m", NULL, sizeof(kcg_int), offsetof(struct__10295, n_iter_k_m), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_FIELD, ".n_iter_k_m_list", NULL, sizeof(array__10292), offsetof(struct__10295, n_iter_k_m_list), &_Type_array__10292_Utils, NULL, NULL, &scope_442, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_nvkvintset_k", NULL, sizeof(Q_NVKVINTSET), offsetof(struct__10295, q_nvkvintset_k), &_Type_Q_NVKVINTSET_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".v_nvkvint_k", NULL, sizeof(kcg_int), offsetof(struct__10295, v_nvkvint_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10295, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_443 = {
  "struct__10295",
  scope_443_entries, 9,
};

/* array__10292 */
static const MappingEntry scope_442_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10285), 0, &_Type_struct__10285_Utils, NULL, NULL, &scope_441, 1, 0}
};
static const MappingScope scope_442 = {
  "array__10292",
  scope_442_entries, 1,
};

/* struct__10285 */
static const MappingEntry scope_441_entries[4] = {
  /* 0 */ { MAP_FIELD, ".m_nvkvint_km_12", NULL, sizeof(kcg_real), offsetof(struct__10285, m_nvkvint_km_12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_nvkvint_km_23", NULL, sizeof(kcg_real), offsetof(struct__10285, m_nvkvint_km_23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".v_nvkvint_k_m", NULL, sizeof(kcg_int), offsetof(struct__10285, v_nvkvint_k_m), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10285, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_441 = {
  "struct__10285",
  scope_441_entries, 4,
};

/* array__10282 */
static const MappingEntry scope_440_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10276), 0, &_Type_struct__10276_Utils, NULL, NULL, &scope_439, 1, 0}
};
static const MappingScope scope_440 = {
  "array__10282",
  scope_440_entries, 1,
};

/* struct__10276 */
static const MappingEntry scope_439_entries[3] = {
  /* 0 */ { MAP_FIELD, ".l_nvkrint_l", NULL, sizeof(L_NVKRINT), offsetof(struct__10276, l_nvkrint_l), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".m_nvkrint_l", NULL, sizeof(kcg_real), offsetof(struct__10276, m_nvkrint_l), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10276, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_439 = {
  "struct__10276",
  scope_439_entries, 3,
};

/* array_int_24 */
static const MappingEntry scope_438_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_438 = {
  "array_int_24",
  scope_438_entries, 1,
};

/* array_int_32 */
static const MappingEntry scope_437_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_437 = {
  "array_int_32",
  scope_437_entries, 1,
};

/* struct__10243 */
static const MappingEntry scope_436_entries[24] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__10240), offsetof(struct__10243, SECTIONS), &_Type_array__10240_Utils, NULL, NULL, &scope_435, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10243, d_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 2 */ { MAP_FIELD, ".d_nvpotrp", NULL, sizeof(kcg_int), offsetof(struct__10243, d_nvpotrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 3 */ { MAP_FIELD, ".d_nvroll", NULL, sizeof(kcg_int), offsetof(struct__10243, d_nvroll), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_FIELD, ".d_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10243, d_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 5 */ { MAP_FIELD, ".d_validnv", NULL, sizeof(kcg_int), offsetof(struct__10243, d_validnv), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(struct__10243, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 19},
  /* 7 */ { MAP_FIELD, ".m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(struct__10243, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 21},
  /* 8 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10243, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10243, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_FIELD, ".q_nvdriver_adhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(struct__10243, q_nvdriver_adhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 23},
  /* 11 */ { MAP_FIELD, ".q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(struct__10243, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(struct__10243, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10243, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_FIELD, ".t_nvcontact", NULL, sizeof(kcg_int), offsetof(struct__10243, t_nvcontact), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_FIELD, ".t_nvovtrp", NULL, sizeof(kcg_int), offsetof(struct__10243, t_nvovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_FIELD, ".v_nvallowovtrp", NULL, sizeof(kcg_int), offsetof(struct__10243, v_nvallowovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_FIELD, ".v_nvonsight", NULL, sizeof(kcg_int), offsetof(struct__10243, v_nvonsight), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 18 */ { MAP_FIELD, ".v_nvrel", NULL, sizeof(kcg_int), offsetof(struct__10243, v_nvrel), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 19 */ { MAP_FIELD, ".v_nvshunt", NULL, sizeof(kcg_int), offsetof(struct__10243, v_nvshunt), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 20 */ { MAP_FIELD, ".v_nvsopovtrp", NULL, sizeof(kcg_int), offsetof(struct__10243, v_nvsopovtrp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 21 */ { MAP_FIELD, ".v_nvstff", NULL, sizeof(kcg_int), offsetof(struct__10243, v_nvstff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 22 */ { MAP_FIELD, ".v_nvunfit", NULL, sizeof(kcg_int), offsetof(struct__10243, v_nvunfit), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10243, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_436 = {
  "struct__10243",
  scope_436_entries, 24,
};

/* array__10240 */
static const MappingEntry scope_435_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10235), 0, &_Type_struct__10235_Utils, NULL, NULL, &scope_434, 1, 0}
};
static const MappingScope scope_435 = {
  "array__10240",
  scope_435_entries, 1,
};

/* struct__10235 */
static const MappingEntry scope_434_entries[2] = {
  /* 0 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__10235, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10235, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_434 = {
  "struct__10235",
  scope_434_entries, 2,
};

/* array__10232 */
static const MappingEntry scope_433_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(struct__10221), 0, &_Type_struct__10221_Utils, NULL, NULL, &scope_431, 1, 0}
};
static const MappingScope scope_433 = {
  "array__10232",
  scope_433_entries, 1,
};

/* array__10229 */
static const MappingEntry scope_432_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(struct__10214), 0, &_Type_struct__10214_Utils, NULL, NULL, &scope_430, 1, 0}
};
static const MappingScope scope_432 = {
  "array__10229",
  scope_432_entries, 1,
};

/* struct__10221 */
static const MappingEntry scope_431_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Gradient", NULL, sizeof(kcg_int), offsetof(struct__10221, Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_Gradient", NULL, sizeof(kcg_int), offsetof(struct__10221, L_Gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".Loc_Absolute", NULL, sizeof(kcg_int), offsetof(struct__10221, Loc_Absolute), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Loc_LRBG", NULL, sizeof(kcg_int), offsetof(struct__10221, Loc_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10221, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_431 = {
  "struct__10221",
  scope_431_entries, 5,
};

/* struct__10214 */
static const MappingEntry scope_430_entries[4] = {
  /* 0 */ { MAP_FIELD, ".begin_section", NULL, sizeof(kcg_int), offsetof(struct__10214, begin_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".end_section", NULL, sizeof(kcg_int), offsetof(struct__10214, end_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".gradient", NULL, sizeof(kcg_int), offsetof(struct__10214, gradient), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10214, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_430 = {
  "struct__10214",
  scope_430_entries, 4,
};

/* struct__10201 */
static const MappingEntry scope_429_entries[10] = {
  /* 0 */ { MAP_FIELD, ".AckDistance", NULL, sizeof(kcg_int), offsetof(struct__10201, AckDistance), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".ConditionalTransitionPriorities", NULL, sizeof(array__10198), offsetof(struct__10201, ConditionalTransitionPriorities), &_Type_array__10198_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 2 */ { MAP_FIELD, ".Distance", NULL, sizeof(kcg_int), offsetof(struct__10201, Distance), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".ERTMS_capabilities", NULL, sizeof(struct__10148), offsetof(struct__10201, ERTMS_capabilities), &_Type_struct__10148_Utils, NULL, NULL, &scope_422, 1, 6},
  /* 4 */ { MAP_FIELD, ".Flags", NULL, sizeof(struct__10164), offsetof(struct__10201, Flags), &_Type_struct__10164_Utils, NULL, NULL, &scope_424, 1, 0},
  /* 5 */ { MAP_FIELD, ".Length", NULL, sizeof(kcg_int), offsetof(struct__10201, Length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_FIELD, ".Mode_Profile_Onboard", NULL, sizeof(struct__10156), offsetof(struct__10201, Mode_Profile_Onboard), &_Type_struct__10156_Utils, NULL, NULL, &scope_423, 1, 5},
  /* 7 */ { MAP_FIELD, ".ReceivedTargetSpeed", NULL, sizeof(kcg_int), offsetof(struct__10201, ReceivedTargetSpeed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".Reversing_Data", NULL, sizeof(struct__10140), offsetof(struct__10201, Reversing_Data), &_Type_struct__10140_Utils, NULL, NULL, &scope_421, 1, 7},
  /* 9 */ { MAP_FIELD, ".TransitionPriorities", NULL, sizeof(array__10188), offsetof(struct__10201, TransitionPriorities), &_Type_array__10188_Utils, NULL, NULL, &scope_426, 1, 9}
};
static const MappingScope scope_429 = {
  "struct__10201",
  scope_429_entries, 10,
};

/* array__10198 */
static const MappingEntry scope_428_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10191), 0, &_Type_struct__10191_Utils, NULL, NULL, &scope_427, 1, 0}
};
static const MappingScope scope_428 = {
  "array__10198",
  scope_428_entries, 1,
};

/* struct__10191 */
static const MappingEntry scope_427_entries[4] = {
  /* 0 */ { MAP_FIELD, ".l_ackleveltr", NULL, sizeof(kcg_int), offsetof(struct__10191, l_ackleveltr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".m_leveltr", NULL, sizeof(M_LEVELTR), offsetof(struct__10191, m_leveltr), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(kcg_int), offsetof(struct__10191, nid_ntc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10191, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_427 = {
  "struct__10191",
  scope_427_entries, 4,
};

/* array__10188 */
static const MappingEntry scope_426_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10182), 0, &_Type_struct__10182_Utils, NULL, NULL, &scope_425, 1, 0}
};
static const MappingScope scope_426 = {
  "array__10188",
  scope_426_entries, 1,
};

/* struct__10182 */
static const MappingEntry scope_425_entries[3] = {
  /* 0 */ { MAP_FIELD, ".m_leveltr", NULL, sizeof(M_LEVELTR), offsetof(struct__10182, m_leveltr), &_Type_M_LEVELTR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(kcg_int), offsetof(struct__10182, nid_ntc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10182, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_425 = {
  "struct__10182",
  scope_425_entries, 3,
};

/* struct__10164 */
static const MappingEntry scope_424_entries[15] = {
  /* 0 */ { MAP_FIELD, ".ER_BG_SystemVersion", NULL, sizeof(kcg_bool), offsetof(struct__10164, ER_BG_SystemVersion), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_FIELD, ".Emergency_Stop_Message_Received", NULL, sizeof(kcg_bool), offsetof(struct__10164, Emergency_Stop_Message_Received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_FIELD, ".GradientProfile_available", NULL, sizeof(kcg_bool), offsetof(struct__10164, GradientProfile_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".LinkingReactToTrip", NULL, sizeof(kcg_bool), offsetof(struct__10164, LinkingReactToTrip), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".MA_L1_available", NULL, sizeof(kcg_bool), offsetof(struct__10164, MA_L1_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".MA_L23_available", NULL, sizeof(kcg_bool), offsetof(struct__10164, MA_L23_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".MA_available", NULL, sizeof(kcg_bool), offsetof(struct__10164, MA_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 7 */ { MAP_FIELD, ".RBCAck_TR_EB_Revoiked", NULL, sizeof(kcg_bool), offsetof(struct__10164, RBCAck_TR_EB_Revoiked), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_FIELD, ".RBC_Authorized_SR", NULL, sizeof(kcg_bool), offsetof(struct__10164, RBC_Authorized_SR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".SSP_available", NULL, sizeof(kcg_bool), offsetof(struct__10164, SSP_available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_FIELD, ".Shunting_Granted", NULL, sizeof(kcg_bool), offsetof(struct__10164, Shunting_Granted), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_FIELD, ".StopIfInSR", NULL, sizeof(kcg_bool), offsetof(struct__10164, StopIfInSR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_FIELD, ".StopIfInShunting", NULL, sizeof(kcg_bool), offsetof(struct__10164, StopIfInShunting), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_FIELD, ".T_NV_ContactOverpass", NULL, sizeof(kcg_bool), offsetof(struct__10164, T_NV_ContactOverpass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_FIELD, ".TripOrder_GivenByBalise", NULL, sizeof(kcg_bool), offsetof(struct__10164, TripOrder_GivenByBalise), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_424 = {
  "struct__10164",
  scope_424_entries, 15,
};

/* struct__10156 */
static const MappingEntry scope_423_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Distance", NULL, sizeof(kcg_int), offsetof(struct__10156, Distance), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Length", NULL, sizeof(kcg_int), offsetof(struct__10156, Length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Length_Ack", NULL, sizeof(kcg_int), offsetof(struct__10156, Length_Ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".Mode", NULL, sizeof(T_MA_Level_And_Mode_Types_Pkg), offsetof(struct__10156, Mode), &_Type_T_MA_Level_And_Mode_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".Speed", NULL, sizeof(kcg_int), offsetof(struct__10156, Speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_423 = {
  "struct__10156",
  scope_423_entries, 5,
};

/* struct__10148 */
static const MappingEntry scope_422_entries[5] = {
  /* 0 */ { MAP_FIELD, ".L0", NULL, sizeof(kcg_bool), offsetof(struct__10148, L0), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".L1", NULL, sizeof(kcg_bool), offsetof(struct__10148, L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".L2", NULL, sizeof(kcg_bool), offsetof(struct__10148, L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".L3", NULL, sizeof(kcg_bool), offsetof(struct__10148, L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".NTC", NULL, sizeof(kcg_bool), offsetof(struct__10148, NTC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_422 = {
  "struct__10148",
  scope_422_entries, 5,
};

/* struct__10140 */
static const MappingEntry scope_421_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Available", NULL, sizeof(kcg_bool), offsetof(struct__10140, Available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".Dist_Run", NULL, sizeof(kcg_int), offsetof(struct__10140, Dist_Run), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Dist_Start", NULL, sizeof(kcg_int), offsetof(struct__10140, Dist_Start), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".Length", NULL, sizeof(kcg_int), offsetof(struct__10140, Length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".Speed", NULL, sizeof(kcg_int), offsetof(struct__10140, Speed), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_421 = {
  "struct__10140",
  scope_421_entries, 5,
};

/* struct__10134 */
static const MappingEntry scope_420_entries[3] = {
  /* 0 */ { MAP_FIELD, ".Mode", NULL, sizeof(M_MODE), offsetof(struct__10134, Mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__10134, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10134, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_420 = {
  "struct__10134",
  scope_420_entries, 3,
};

/* struct__10109 */
static const MappingEntry scope_419_entries[22] = {
  /* 0 */ { MAP_FIELD, ".d_dp", NULL, sizeof(kcg_int), offsetof(struct__10109, d_dp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_FIELD, ".d_endtimerstartloc", NULL, sizeof(kcg_int), offsetof(struct__10109, d_endtimerstartloc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_FIELD, ".d_ol", NULL, sizeof(kcg_int), offsetof(struct__10109, d_ol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 3 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__10109, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".d_startol", NULL, sizeof(kcg_int), offsetof(struct__10109, d_startol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 5 */ { MAP_FIELD, ".l_endsection", NULL, sizeof(kcg_int), offsetof(struct__10109, l_endsection), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__10109, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".q_dangerpoint", NULL, sizeof(Q_DANGERPOINT), offsetof(struct__10109, q_dangerpoint), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10109, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".q_endtimer", NULL, sizeof(Q_ENDTIMER), offsetof(struct__10109, q_endtimer), &_Type_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".q_overlap", NULL, sizeof(Q_OVERLAP), offsetof(struct__10109, q_overlap), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10109, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(Q_SECTIONTIMER), offsetof(struct__10109, q_sectiontimer), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_FIELD, ".sections", NULL, sizeof(array__10106), offsetof(struct__10109, sections), &_Type_array__10106_Utils, NULL, NULL, &scope_418, 1, 6},
  /* 14 */ { MAP_FIELD, ".t_endtimer", NULL, sizeof(kcg_int), offsetof(struct__10109, t_endtimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_FIELD, ".t_loa", NULL, sizeof(kcg_int), offsetof(struct__10109, t_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_FIELD, ".t_ol", NULL, sizeof(kcg_int), offsetof(struct__10109, t_ol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(struct__10109, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 18 */ { MAP_FIELD, ".v_loa", NULL, sizeof(kcg_int), offsetof(struct__10109, v_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 19 */ { MAP_FIELD, ".v_releasedp", NULL, sizeof(kcg_int), offsetof(struct__10109, v_releasedp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 20 */ { MAP_FIELD, ".v_releaseol", NULL, sizeof(kcg_int), offsetof(struct__10109, v_releaseol), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10109, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_419 = {
  "struct__10109",
  scope_419_entries, 22,
};

/* array__10106 */
static const MappingEntry scope_418_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__10098), 0, &_Type_struct__10098_Utils, NULL, NULL, &scope_417, 1, 0}
};
static const MappingScope scope_418 = {
  "array__10106",
  scope_418_entries, 1,
};

/* struct__10098 */
static const MappingEntry scope_417_entries[5] = {
  /* 0 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__10098, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".l_section", NULL, sizeof(kcg_int), offsetof(struct__10098, l_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(Q_SECTIONTIMER), offsetof(struct__10098, q_sectiontimer), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(struct__10098, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10098, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_417 = {
  "struct__10098",
  scope_417_entries, 5,
};

/* array_int_128 */
static const MappingEntry scope_416_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_416 = {
  "array_int_128",
  scope_416_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_415_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_415 = {
  "array_int_6",
  scope_415_entries, 1,
};

/* struct__10082 */
static const MappingEntry scope_414_entries[7] = {
  /* 0 */ { MAP_FIELD, ".BG_Common_Header", NULL, sizeof(struct__9959), offsetof(struct__10082, BG_Common_Header), &_Type_struct__9959_Utils, NULL, NULL, &scope_401, 1, 3},
  /* 1 */ { MAP_FIELD, ".Radio_Common_Header", NULL, sizeof(struct__10026), offsetof(struct__10082, Radio_Common_Header), &_Type_struct__10026_Utils, NULL, NULL, &scope_407, 1, 4},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__10077), offsetof(struct__10082, packets), &_Type_struct__10077_Utils, NULL, NULL, &scope_413, 1, 5},
  /* 3 */ { MAP_FIELD, ".radioMetadata", NULL, sizeof(struct__10051), offsetof(struct__10082, radioMetadata), &_Type_struct__10051_Utils, NULL, NULL, &scope_409, 1, 2},
  /* 4 */ { MAP_FIELD, ".sendingRBC", NULL, sizeof(struct__10044), offsetof(struct__10082, sendingRBC), &_Type_struct__10044_Utils, NULL, NULL, &scope_408, 1, 6},
  /* 5 */ { MAP_FIELD, ".source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(struct__10082, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10082, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_414 = {
  "struct__10082",
  scope_414_entries, 7,
};

/* struct__10077 */
static const MappingEntry scope_413_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__10077, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__10074), offsetof(struct__10077, PacketHeaders), &_Type_array__10074_Utils, NULL, NULL, &scope_412, 1, 0}
};
static const MappingScope scope_413 = {
  "struct__10077",
  scope_413_entries, 2,
};

/* array__10074 */
static const MappingEntry scope_412_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__10066), 0, &_Type_struct__10066_Utils, NULL, NULL, &scope_411, 1, 0}
};
static const MappingScope scope_412 = {
  "array__10074",
  scope_412_entries, 1,
};

/* struct__10066 */
static const MappingEntry scope_411_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__10066, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__10066, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10066, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__10066, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10066, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_411 = {
  "struct__10066",
  scope_411_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_410_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_410 = {
  "array_int_500",
  scope_410_entries, 1,
};

/* struct__10051 */
static const MappingEntry scope_409_entries[9] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_bool), offsetof(struct__10051, d_emergencystop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_bool), offsetof(struct__10051, d_ref), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_bool), offsetof(struct__10051, d_sr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_bool), offsetof(struct__10051, m_version), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_bool), offsetof(struct__10051, nid_em), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_bool), offsetof(struct__10051, q_dir), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_bool), offsetof(struct__10051, q_scale), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_bool), offsetof(struct__10051, t_sh_rqst), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_bool), offsetof(struct__10051, t_train_reference), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_409 = {
  "struct__10051",
  scope_409_entries, 9,
};

/* struct__10044 */
static const MappingEntry scope_408_entries[4] = {
  /* 0 */ { MAP_FIELD, ".device_id", NULL, sizeof(kcg_int), offsetof(struct__10044, device_id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__10044, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".rbc_id", NULL, sizeof(kcg_int), offsetof(struct__10044, rbc_id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10044, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_408 = {
  "struct__10044",
  scope_408_entries, 4,
};

/* struct__10026 */
static const MappingEntry scope_407_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__10026, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__10026, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__10026, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10026, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__10026, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__10026, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10026, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10026, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10026, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10026, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__10026, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__10026, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_real), offsetof(struct__10026, t_sh_rqst), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10026, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_real), offsetof(struct__10026, t_train_reference), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_407 = {
  "struct__10026",
  scope_407_entries, 15,
};

/* struct__10016 */
static const MappingEntry scope_406_entries[7] = {
  /* 0 */ { MAP_FIELD, ".centerDetectionAcc_DefaultValue", NULL, sizeof(struct__9904), offsetof(struct__10016, centerDetectionAcc_DefaultValue), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 6},
  /* 1 */ { MAP_FIELD, ".d_baliseAntenna_2_frontend", NULL, sizeof(struct__9904), offsetof(struct__10016, d_baliseAntenna_2_frontend), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 3},
  /* 2 */ { MAP_FIELD, ".d_frontend_2_rearend", NULL, sizeof(struct__9904), offsetof(struct__10016, d_frontend_2_rearend), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 4},
  /* 3 */ { MAP_FIELD, ".l_train", NULL, sizeof(kcg_int), offsetof(struct__10016, l_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".locationAccuracy_DefaultValue", NULL, sizeof(struct__9904), offsetof(struct__10016, locationAccuracy_DefaultValue), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 5},
  /* 5 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(struct__10016, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_FIELD, ".nid_operational", NULL, sizeof(kcg_int), offsetof(struct__10016, nid_operational), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_406 = {
  "struct__10016",
  scope_406_entries, 7,
};

/* struct__10011 */
static const MappingEntry scope_405_entries[2] = {
  /* 0 */ { MAP_FIELD, ".driverSelectsStart", NULL, sizeof(kcg_bool), offsetof(struct__10011, driverSelectsStart), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".trackAheadFree", NULL, sizeof(kcg_bool), offsetof(struct__10011, trackAheadFree), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_405 = {
  "struct__10011",
  scope_405_entries, 2,
};

/* struct__9994 */
static const MappingEntry scope_404_entries[14] = {
  /* 0 */ { MAP_FIELD, ".LRBG", NULL, sizeof(struct__9983), offsetof(struct__9994, LRBG), &_Type_struct__9983_Utils, NULL, NULL, &scope_403, 1, 8},
  /* 1 */ { MAP_FIELD, ".estimatedFrontEndPosition", NULL, sizeof(kcg_int), offsetof(struct__9994, estimatedFrontEndPosition), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".linkingIsUsedOnboard", NULL, sizeof(kcg_bool), offsetof(struct__9994, linkingIsUsedOnboard), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".maxSafeFrontEndPostion", NULL, sizeof(kcg_int), offsetof(struct__9994, maxSafeFrontEndPostion), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".minSafeFrontEndPosition", NULL, sizeof(kcg_int), offsetof(struct__9994, minSafeFrontEndPosition), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(struct__9994, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".nominalOrReverseToLRBG", NULL, sizeof(Q_DLRBG), offsetof(struct__9994, nominalOrReverseToLRBG), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".prvLRBG", NULL, sizeof(struct__9983), offsetof(struct__9994, prvLRBG), &_Type_struct__9983_Utils, NULL, NULL, &scope_403, 1, 9},
  /* 8 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(struct__9994, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".trainOrientationToLRBG", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9994, trainOrientationToLRBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".trainPosition", NULL, sizeof(struct__9904), offsetof(struct__9994, trainPosition), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 4},
  /* 11 */ { MAP_FIELD, ".trainPositionIsUnknown", NULL, sizeof(kcg_bool), offsetof(struct__9994, trainPositionIsUnknown), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_FIELD, ".trainRunningDirectionToLRBG", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9994, trainRunningDirectionToLRBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9994, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_404 = {
  "struct__9994",
  scope_404_entries, 14,
};

/* struct__9983 */
static const MappingEntry scope_403_entries[8] = {
  /* 0 */ { MAP_FIELD, ".infoFromLinking", NULL, sizeof(struct__9924), offsetof(struct__9983, infoFromLinking), &_Type_struct__9924_Utils, NULL, NULL, &scope_396, 1, 6},
  /* 1 */ { MAP_FIELD, ".infoFromPassing", NULL, sizeof(struct__9977), offsetof(struct__9983, infoFromPassing), &_Type_struct__9977_Utils, NULL, NULL, &scope_402, 1, 7},
  /* 2 */ { MAP_FIELD, ".location", NULL, sizeof(struct__9904), offsetof(struct__9983, location), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 4},
  /* 3 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9983, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9983, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__9983, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".seqNoOnTrack", NULL, sizeof(kcg_int), offsetof(struct__9983, seqNoOnTrack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9983, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_403 = {
  "struct__9983",
  scope_403_entries, 8,
};

/* struct__9977 */
static const MappingEntry scope_402_entries[3] = {
  /* 0 */ { MAP_FIELD, ".BG_Header", NULL, sizeof(struct__9959), offsetof(struct__9977, BG_Header), &_Type_struct__9959_Utils, NULL, NULL, &scope_401, 1, 1},
  /* 1 */ { MAP_FIELD, ".linkedBGs", NULL, sizeof(array__9933), offsetof(struct__9977, linkedBGs), &_Type_array__9933_Utils, NULL, NULL, &scope_397, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9977, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_402 = {
  "struct__9977",
  scope_402_entries, 3,
};

/* struct__9959 */
static const MappingEntry scope_401_entries[15] = {
  /* 0 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(struct__9904), offsetof(struct__9959, BG_centerDetectionInaccuraccuracies), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 10},
  /* 1 */ { MAP_FIELD, ".bgPosition", NULL, sizeof(struct__9949), offsetof(struct__9959, bgPosition), &_Type_struct__9949_Utils, NULL, NULL, &scope_400, 1, 9},
  /* 2 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__9959, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__9959, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__9959, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9959, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9959, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(struct__9959, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__9959, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__9959, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__9959, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__9959, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".trainOrientationToBG", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9959, trainOrientationToBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_FIELD, ".trainRunningDirectionToBG", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9959, trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9959, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_401 = {
  "struct__9959",
  scope_401_entries, 15,
};

/* struct__9949 */
static const MappingEntry scope_400_entries[7] = {
  /* 0 */ { MAP_FIELD, ".acceleration", NULL, sizeof(kcg_int), offsetof(struct__9949, acceleration), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".motionDirection", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(struct__9949, motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".motionState", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(struct__9949, motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".odo", NULL, sizeof(struct__9943), offsetof(struct__9949, odo), &_Type_struct__9943_Utils, NULL, NULL, &scope_399, 1, 2},
  /* 4 */ { MAP_FIELD, ".speed", NULL, sizeof(struct__9936), offsetof(struct__9949, speed), &_Type_struct__9936_Utils, NULL, NULL, &scope_398, 1, 3},
  /* 5 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(struct__9949, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9949, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_400 = {
  "struct__9949",
  scope_400_entries, 7,
};

/* struct__9943 */
static const MappingEntry scope_399_entries[3] = {
  /* 0 */ { MAP_FIELD, ".o_max", NULL, sizeof(kcg_int), offsetof(struct__9943, o_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(kcg_int), offsetof(struct__9943, o_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(kcg_int), offsetof(struct__9943, o_nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_399 = {
  "struct__9943",
  scope_399_entries, 3,
};

/* struct__9936 */
static const MappingEntry scope_398_entries[4] = {
  /* 0 */ { MAP_FIELD, ".v_lower", NULL, sizeof(kcg_int), offsetof(struct__9936, v_lower), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".v_rawNominal", NULL, sizeof(kcg_int), offsetof(struct__9936, v_rawNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".v_safeNominal", NULL, sizeof(kcg_int), offsetof(struct__9936, v_safeNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".v_upper", NULL, sizeof(kcg_int), offsetof(struct__9936, v_upper), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_398 = {
  "struct__9936",
  scope_398_entries, 4,
};

/* array__9933 */
static const MappingEntry scope_397_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(struct__9910), 0, &_Type_struct__9910_Utils, NULL, NULL, &scope_395, 1, 0}
};
static const MappingScope scope_397 = {
  "array__9933",
  scope_397_entries, 1,
};

/* struct__9924 */
static const MappingEntry scope_396_entries[6] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(struct__9904), offsetof(struct__9924, d_link), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 4},
  /* 1 */ { MAP_FIELD, ".expectedLocation", NULL, sizeof(struct__9904), offsetof(struct__9924, expectedLocation), &_Type_struct__9904_Utils, NULL, NULL, &scope_394, 1, 3},
  /* 2 */ { MAP_FIELD, ".linkingInfo", NULL, sizeof(struct__9910), offsetof(struct__9924, linkingInfo), &_Type_struct__9910_Utils, NULL, NULL, &scope_395, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_bg_fromLinkingBG", NULL, sizeof(kcg_int), offsetof(struct__9924, nid_bg_fromLinkingBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".nid_c_fromLinkingBG", NULL, sizeof(kcg_int), offsetof(struct__9924, nid_c_fromLinkingBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9924, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_396 = {
  "struct__9924",
  scope_396_entries, 6,
};

/* struct__9910 */
static const MappingEntry scope_395_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__9910, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9910, nid_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9910, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9910, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9910, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__9910, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__9910, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__9910, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__9910, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__9910, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9910, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_395 = {
  "struct__9910",
  scope_395_entries, 11,
};

/* struct__9904 */
static const MappingEntry scope_394_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_max", NULL, sizeof(kcg_int), offsetof(struct__9904, d_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(kcg_int), offsetof(struct__9904, d_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nominal", NULL, sizeof(kcg_int), offsetof(struct__9904, nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_394 = {
  "struct__9904",
  scope_394_entries, 3,
};

/* struct__9886 */
static const MappingEntry scope_393_entries[15] = {
  /* 0 */ { MAP_FIELD, ".Level", NULL, sizeof(MA_Level_t_TrackAtlasTypes), offsetof(struct__9886, Level), &_Type_MA_Level_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".dangerpoint", NULL, sizeof(struct__9880), offsetof(struct__9886, dangerpoint), &_Type_struct__9880_Utils, NULL, NULL, &scope_392, 1, 10},
  /* 2 */ { MAP_FIELD, ".endtimer_t", NULL, sizeof(struct__9875), offsetof(struct__9886, endtimer_t), &_Type_struct__9875_Utils, NULL, NULL, &scope_391, 1, 14},
  /* 3 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__9886, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".overlap", NULL, sizeof(struct__9880), offsetof(struct__9886, overlap), &_Type_struct__9880_Utils, NULL, NULL, &scope_392, 1, 12},
  /* 5 */ { MAP_FIELD, ".q_dangerpoint", NULL, sizeof(kcg_bool), offsetof(struct__9886, q_dangerpoint), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9886, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".q_endtimer", NULL, sizeof(kcg_bool), offsetof(struct__9886, q_endtimer), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_FIELD, ".q_overlap", NULL, sizeof(kcg_bool), offsetof(struct__9886, q_overlap), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_FIELD, ".sections", NULL, sizeof(array__9872), offsetof(struct__9886, sections), &_Type_array__9872_Utils, NULL, NULL, &scope_390, 1, 8},
  /* 10 */ { MAP_FIELD, ".t_loa", NULL, sizeof(kcg_int), offsetof(struct__9886, t_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".t_loa_unlimited", NULL, sizeof(kcg_bool), offsetof(struct__9886, t_loa_unlimited), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_FIELD, ".v_loa", NULL, sizeof(kcg_int), offsetof(struct__9886, v_loa), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 13 */ { MAP_FIELD, ".v_main", NULL, sizeof(kcg_int), offsetof(struct__9886, v_main), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9886, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_393 = {
  "struct__9886",
  scope_393_entries, 15,
};

/* struct__9880 */
static const MappingEntry scope_392_entries[3] = {
  /* 0 */ { MAP_FIELD, ".calc_v_release_onboard", NULL, sizeof(kcg_bool), offsetof(struct__9880, calc_v_release_onboard), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_DP_or_OL", NULL, sizeof(kcg_int), offsetof(struct__9880, d_DP_or_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".v_release", NULL, sizeof(kcg_int), offsetof(struct__9880, v_release), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_392 = {
  "struct__9880",
  scope_392_entries, 3,
};

/* struct__9875 */
static const MappingEntry scope_391_entries[2] = {
  /* 0 */ { MAP_FIELD, ".d_endtimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__9875, d_endtimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".t_endtimer", NULL, sizeof(kcg_int), offsetof(struct__9875, t_endtimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_391 = {
  "struct__9875",
  scope_391_entries, 2,
};

/* array__9872 */
static const MappingEntry scope_390_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(struct__9863), 0, &_Type_struct__9863_Utils, NULL, NULL, &scope_389, 1, 0}
};
static const MappingScope scope_390 = {
  "array__9872",
  scope_390_entries, 1,
};

/* struct__9863 */
static const MappingEntry scope_389_entries[6] = {
  /* 0 */ { MAP_FIELD, ".d_sectiontimerstoploc", NULL, sizeof(kcg_int), offsetof(struct__9863, d_sectiontimerstoploc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".l_section", NULL, sizeof(kcg_int), offsetof(struct__9863, l_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".q_endsection", NULL, sizeof(kcg_bool), offsetof(struct__9863, q_endsection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".q_sectiontimer", NULL, sizeof(kcg_bool), offsetof(struct__9863, q_sectiontimer), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".t_sectiontimer", NULL, sizeof(kcg_int), offsetof(struct__9863, t_sectiontimer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9863, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_389 = {
  "struct__9863",
  scope_389_entries, 6,
};

/* struct__9857 */
static const MappingEntry scope_388_entries[3] = {
  /* 0 */ { MAP_FIELD, ".header", NULL, sizeof(struct__9776), offsetof(struct__9857, header), &_Type_struct__9776_Utils, NULL, NULL, &scope_375, 1, 1},
  /* 1 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__9847), offsetof(struct__9857, packets), &_Type_struct__9847_Utils, NULL, NULL, &scope_387, 1, 2},
  /* 2 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__9857, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_388 = {
  "struct__9857",
  scope_388_entries, 3,
};

/* struct__9847 */
static const MappingEntry scope_387_entries[7] = {
  /* 0 */ { MAP_FIELD, ".p0", NULL, sizeof(struct__9763), offsetof(struct__9847, p0), &_Type_struct__9763_Utils, NULL, NULL, &scope_373, 1, 0},
  /* 1 */ { MAP_FIELD, ".p1", NULL, sizeof(struct__9739), offsetof(struct__9847, p1), &_Type_struct__9739_Utils, NULL, NULL, &scope_371, 1, 1},
  /* 2 */ { MAP_FIELD, ".p11", NULL, sizeof(struct__9799), offsetof(struct__9847, p11), &_Type_struct__9799_Utils, NULL, NULL, &scope_379, 1, 6},
  /* 3 */ { MAP_FIELD, ".p3", NULL, sizeof(struct__9841), offsetof(struct__9847, p3), &_Type_struct__9841_Utils, NULL, NULL, &scope_386, 1, 2},
  /* 4 */ { MAP_FIELD, ".p4", NULL, sizeof(struct__9825), offsetof(struct__9847, p4), &_Type_struct__9825_Utils, NULL, NULL, &scope_382, 1, 3},
  /* 5 */ { MAP_FIELD, ".p5", NULL, sizeof(struct__9820), offsetof(struct__9847, p5), &_Type_struct__9820_Utils, NULL, NULL, &scope_381, 1, 4},
  /* 6 */ { MAP_FIELD, ".p9", NULL, sizeof(struct__9815), offsetof(struct__9847, p9), &_Type_struct__9815_Utils, NULL, NULL, &scope_380, 1, 5}
};
static const MappingScope scope_387 = {
  "struct__9847",
  scope_387_entries, 7,
};

/* struct__9841 */
static const MappingEntry scope_386_entries[3] = {
  /* 0 */ { MAP_FIELD, ".aNID_RADIO", NULL, sizeof(array__9838), offsetof(struct__9841, aNID_RADIO), &_Type_array__9838_Utils, NULL, NULL, &scope_385, 1, 2},
  /* 1 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int), offsetof(struct__9841, number), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9841, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_386 = {
  "struct__9841",
  scope_386_entries, 3,
};

/* array__9838 */
static const MappingEntry scope_385_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__9833), 0, &_Type_struct__9833_Utils, NULL, NULL, &scope_384, 1, 0}
};
static const MappingScope scope_385 = {
  "array__9838",
  scope_385_entries, 1,
};

/* struct__9833 */
static const MappingEntry scope_384_entries[2] = {
  /* 0 */ { MAP_FIELD, ".telephoneNumber", NULL, sizeof(array_int_15), offsetof(struct__9833, telephoneNumber), &_Type_array_int_15_Utils, NULL, NULL, &scope_383, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9833, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_384 = {
  "struct__9833",
  scope_384_entries, 2,
};

/* array_int_15 */
static const MappingEntry scope_383_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_15, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_383 = {
  "array_int_15",
  scope_383_entries, 1,
};

/* struct__9825 */
static const MappingEntry scope_382_entries[2] = {
  /* 0 */ { MAP_FIELD, ".M_ERROR", NULL, sizeof(M_ERROR), offsetof(struct__9825, M_ERROR), &_Type_M_ERROR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9825, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_382 = {
  "struct__9825",
  scope_382_entries, 2,
};

/* struct__9820 */
static const MappingEntry scope_381_entries[2] = {
  /* 0 */ { MAP_FIELD, ".TrainRunningNumber", NULL, sizeof(kcg_int), offsetof(struct__9820, TrainRunningNumber), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9820, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_381 = {
  "struct__9820",
  scope_381_entries, 2,
};

/* struct__9815 */
static const MappingEntry scope_380_entries[2] = {
  /* 0 */ { MAP_FIELD, ".transitionInformation", NULL, sizeof(kcg_int), offsetof(struct__9815, transitionInformation), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9815, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_380 = {
  "struct__9815",
  scope_380_entries, 2,
};

/* struct__9799 */
static const MappingEntry scope_379_entries[13] = {
  /* 0 */ { MAP_FIELD, ".NC_CDTRAIN", NULL, sizeof(NC_CDTRAIN), offsetof(struct__9799, NC_CDTRAIN), &_Type_NC_CDTRAIN_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NC_TRAIN", NULL, sizeof(NC_TRAIN), offsetof(struct__9799, NC_TRAIN), &_Type_NC_TRAIN_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".l_train", NULL, sizeof(kcg_int), offsetof(struct__9799, l_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_airtight", NULL, sizeof(M_AIRTIGHT), offsetof(struct__9799, m_airtight), &_Type_M_AIRTIGHT_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".m_axleloadcat", NULL, sizeof(M_AXLELOADCAT), offsetof(struct__9799, m_axleloadcat), &_Type_M_AXLELOADCAT_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".m_loadinggoage", NULL, sizeof(M_LOADINGGAUGE), offsetof(struct__9799, m_loadinggoage), &_Type_M_LOADINGGAUGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nIter_ntc", NULL, sizeof(kcg_int), offsetof(struct__9799, nIter_ntc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_FIELD, ".nIter_tractionIdentity", NULL, sizeof(kcg_int), offsetof(struct__9799, nIter_tractionIdentity), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".n_axle", NULL, sizeof(kcg_int), offsetof(struct__9799, n_axle), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(array_int_3), offsetof(struct__9799, nid_ntc), &_Type_array_int_3_Utils, NULL, NULL, &scope_376, 1, 12},
  /* 10 */ { MAP_FIELD, ".tractionIdentity", NULL, sizeof(array__9796), offsetof(struct__9799, tractionIdentity), &_Type_array__9796_Utils, NULL, NULL, &scope_378, 1, 10},
  /* 11 */ { MAP_FIELD, ".v_maxtrain", NULL, sizeof(kcg_int), offsetof(struct__9799, v_maxtrain), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9799, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_379 = {
  "struct__9799",
  scope_379_entries, 13,
};

/* array__9796 */
static const MappingEntry scope_378_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(struct__9791), 0, &_Type_struct__9791_Utils, NULL, NULL, &scope_377, 1, 0}
};
static const MappingScope scope_378 = {
  "array__9796",
  scope_378_entries, 1,
};

/* struct__9791 */
static const MappingEntry scope_377_entries[2] = {
  /* 0 */ { MAP_FIELD, ".m_voltage", NULL, sizeof(M_VOLTAGE), offsetof(struct__9791, m_voltage), &_Type_M_VOLTAGE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".nid_ctraction", NULL, sizeof(kcg_int), offsetof(struct__9791, nid_ctraction), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_377 = {
  "struct__9791",
  scope_377_entries, 2,
};

/* array_int_3 */
static const MappingEntry scope_376_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_376 = {
  "array_int_3",
  scope_376_entries, 1,
};

/* struct__9776 */
static const MappingEntry scope_375_entries[9] = {
  /* 0 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(struct__9776, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9776, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__9776, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9776, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".xNID_EM", NULL, sizeof(kcg_int), offsetof(struct__9776, xNID_EM), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".xNID_TEXTMESSAGE", NULL, sizeof(kcg_int), offsetof(struct__9776, xNID_TEXTMESSAGE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".xQ_EMERGENCYSTOP", NULL, sizeof(Q_EMERGENCYSTOP), offsetof(struct__9776, xQ_EMERGENCYSTOP), &_Type_Q_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".xQ_MARQSTREASON", NULL, sizeof(Q_MARQSTREASON), offsetof(struct__9776, xQ_MARQSTREASON), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".xT_TRAIN", NULL, sizeof(kcg_real), offsetof(struct__9776, xT_TRAIN), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_375 = {
  "struct__9776",
  scope_375_entries, 9,
};

/* struct__9768 */
static const MappingEntry scope_374_entries[5] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9768, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".t_cycrqst", NULL, sizeof(kcg_int), offsetof(struct__9768, t_cycrqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".t_mar", NULL, sizeof(kcg_int), offsetof(struct__9768, t_mar), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".t_timeoutrqst", NULL, sizeof(kcg_int), offsetof(struct__9768, t_timeoutrqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9768, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_374 = {
  "struct__9768",
  scope_374_entries, 5,
};

/* struct__9763 */
static const MappingEntry scope_373_entries[2] = {
  /* 0 */ { MAP_FIELD, ".packet0", NULL, sizeof(struct__9744), offsetof(struct__9763, packet0), &_Type_struct__9744_Utils, NULL, NULL, &scope_372, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9763, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_373 = {
  "struct__9763",
  scope_373_entries, 2,
};

/* struct__9744 */
static const MappingEntry scope_372_entries[16] = {
  /* 0 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9744, D_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int), offsetof(struct__9744, L_DOUBTOVER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int), offsetof(struct__9744, L_DOUBTUNDER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9744, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int), offsetof(struct__9744, L_TRAININT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9744, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__9744, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9744, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int), offsetof(struct__9744, V_TRAIN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9744, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9744, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(struct__9744, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(struct__9744, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__9744, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(struct__9744, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(struct__9744, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_372 = {
  "struct__9744",
  scope_372_entries, 16,
};

/* struct__9739 */
static const MappingEntry scope_371_entries[2] = {
  /* 0 */ { MAP_FIELD, ".packet1", NULL, sizeof(struct__9719), offsetof(struct__9739, packet1), &_Type_struct__9719_Utils, NULL, NULL, &scope_370, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9739, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_371 = {
  "struct__9739",
  scope_371_entries, 2,
};

/* struct__9719 */
static const MappingEntry scope_370_entries[17] = {
  /* 0 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9719, D_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int), offsetof(struct__9719, L_DOUBTOVER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int), offsetof(struct__9719, L_DOUBTUNDER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9719, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int), offsetof(struct__9719, L_TRAININT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int), offsetof(struct__9719, NID_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__9719, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9719, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_FIELD, ".NID_PRVLRBG", NULL, sizeof(kcg_int), offsetof(struct__9719, NID_PRVLRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int), offsetof(struct__9719, V_TRAIN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(struct__9719, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__9719, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(struct__9719, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(struct__9719, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 10},
  /* 14 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(struct__9719, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(struct__9719, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(struct__9719, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_370 = {
  "struct__9719",
  scope_370_entries, 17,
};

/* TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions */
static const MappingEntry scope_365_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_diff", NULL, sizeof(V_DIFF), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, v_diff), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_365 = {
  "TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions",
  scope_365_entries, 8,
};

/* TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions */
static const MappingEntry scope_364_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_OUTPUT, "nc_diff", NULL, sizeof(NC_DIFF), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, nc_diff), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_364 = {
  "TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions",
  scope_364_entries, 6,
};

/* TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal */
static const MappingEntry scope_363_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L2), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_459, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_363 = {
  "TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal",
  scope_363_entries, 6,
};

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP/ MRSP_Find_First_in_SSP_t__TA_MRSP */
static const MappingEntry scope_362_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Last_Loc", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, Last_Loc), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L2), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L3), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_362 = {
  "TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP/ MRSP_Find_First_in_SSP_t__TA_MRSP",
  scope_362_entries, 8,
};

/* TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSPTA_MRSP::MRSP_FindValidSSP_section 1/ */
static const MappingEntry scope_361_entries[18] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L1_1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L12_1), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L13_1), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L14_1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
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
static const MappingScope scope_361 = {
  "TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSPTA_MRSP::MRSP_FindValidSSP_section 1/",
  scope_361_entries, 18,
};

/* TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSP */
static const MappingEntry scope_360_entries[10] = {
  /* 0 */ { MAP_EXPANDED, "TA_MRSP::MRSP_FindValidSSP_section 1", NULL, 0, 0, NULL, NULL, NULL, &scope_361, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L19), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, _L22), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 7},
  /* 8 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_OUTPUT, "i_out", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP, i_out), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 9}
};
static const MappingScope scope_360 = {
  "TA_MRSP::MRSP_FindLastSSPSection_LOOP/ MRSP_FindLastSSPSection_LOOP_TA_MRSP",
  scope_360_entries, 10,
};

/* TM_conversions::CAST_Int_to_L_SECTION/ CAST_Int_to_L_SECTION_TM_conversions */
static const MappingEntry scope_359_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_section", NULL, sizeof(L_SECTION), offsetof(outC_CAST_Int_to_L_SECTION_TM_conversions, l_section), &_Type_L_SECTION_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_359 = {
  "TM_conversions::CAST_Int_to_L_SECTION/ CAST_Int_to_L_SECTION_TM_conversions",
  scope_359_entries, 6,
};

/* TM_lib_internal::C_P015_extract_el_section/ C_P015_extract_el_section_TM_lib_internal */
static const MappingEntry scope_358_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L2), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_416, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P015_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_358 = {
  "TM_lib_internal::C_P015_extract_el_section/ C_P015_extract_el_section_TM_lib_internal",
  scope_358_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_357_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_357 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_357_entries, 6,
};

/* TM_lib_internal::C_P003V1_extract_el_section/ C_P003V1_extract_el_section_TM_lib_internal */
static const MappingEntry scope_356_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L2), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_437, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_356 = {
  "TM_lib_internal::C_P003V1_extract_el_section/ C_P003V1_extract_el_section_TM_lib_internal",
  scope_356_entries, 4,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP/ FindStartOfNewSpeedProfil_TA_Lib_internal */
static const MappingEntry scope_355_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_STATIC), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L1), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L4), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L5), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_355 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP/ FindStartOfNewSpeedProfil_TA_Lib_internal",
  scope_355_entries, 17,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_354_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_352_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_354 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then:",
  scope_354_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_353_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_352_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_353 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else:",
  scope_353_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_352_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_Front_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_352_entries[0], isActive_kcg_bool_kcg_false, &scope_353, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_352_entries[0], isActive_kcg_bool_kcg_true, &scope_354, 1, 2}
};
static const MappingScope scope_352 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:",
  scope_352_entries, 3,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal */
static const MappingEntry scope_351_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_352, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "added_train_length", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Eval_Q_Front_TA_Lib_internal, added_train_length), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, q_front_in), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_351 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal",
  scope_351_entries, 4,
};

/* TA_Lib_internal::DetectSpeedIncrease/ DetectSpeedIncrease_TA_Lib_internal */
static const MappingEntry scope_350_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L1), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 15},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(V_STATIC), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L11), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L15), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L16), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 0},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L2), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(V_STATIC), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L3), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L6), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, _L9), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "q_speed_increase", NULL, sizeof(kcg_bool), offsetof(outC_DetectSpeedIncrease_TA_Lib_internal, q_speed_increase), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_350 = {
  "TA_Lib_internal::DetectSpeedIncrease/ DetectSpeedIncrease_TA_Lib_internal",
  scope_350_entries, 17,
};

/* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop/ FindFirstRelevantSPForNew_TA_Lib_internal */
static const MappingEntry scope_349_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L169), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L170", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L170), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L172", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_FindFirstRelevantSPForNew_TA_Lib_internal, _L172), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 4},
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
static const MappingScope scope_349 = {
  "TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop/ FindFirstRelevantSPForNew_TA_Lib_internal",
  scope_349_entries, 17,
};

/* TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions */
static const MappingEntry scope_348_entries[11] = {
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
static const MappingScope scope_348 = {
  "TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions",
  scope_348_entries, 11,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_347_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L4_IfBlock1), &_Type_Q_FRONT_Utils, &scope_343_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_343_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_347 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then:",
  scope_347_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_346_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L3_IfBlock1), &_Type_Q_FRONT_Utils, &scope_344_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_344_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_346 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then:",
  scope_346_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_345_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L1_IfBlock1), &_Type_Q_FRONT_Utils, &scope_344_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_344_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_345 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else:",
  scope_345_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_344_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_344_entries[0], isActive_kcg_bool_kcg_false, &scope_345, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_344_entries[0], isActive_kcg_bool_kcg_true, &scope_346, 1, 2}
};
static const MappingScope scope_344 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:",
  scope_344_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1: */
static const MappingEntry scope_343_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_343_entries[0], isActive_kcg_bool_kcg_false, &scope_344, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_343_entries[0], isActive_kcg_bool_kcg_true, &scope_347, 1, 2}
};
static const MappingScope scope_343 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:",
  scope_343_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions */
static const MappingEntry scope_342_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_343, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_front", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_342 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions",
  scope_342_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions */
static const MappingEntry scope_341_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_static", NULL, sizeof(D_STATIC), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, d_static), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_341 = {
  "TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions",
  scope_341_entries, 6,
};

/* TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal */
static const MappingEntry scope_340_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NC_DIFF 1", NULL, sizeof(outC_CAST_Int_to_NC_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_364, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_DIFF 1", NULL, sizeof(outC_CAST_Int_to_V_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_365, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 1", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_363, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 2", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_363, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_459, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(NC_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L25), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(V_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L28), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L4), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_452, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_OUTPUT, "sections", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, sections), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_452, 1, 17}
};
static const MappingScope scope_340 = {
  "TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal",
  scope_340_entries, 18,
};

/* TA_MRSP::MRSP_ConvertIndexedElements/ MRSP_ConvertIndexedElements_TA_MRSP */
static const MappingEntry scope_339_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_indexed_matrix_element_list", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, SSP_indexed_matrix_element_list), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_indexed_trgt_t_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L1), &_Type_SSP_t_indexed_trgt_t_TA_MRSP_Utils, NULL, NULL, &scope_469, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L4), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L7), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_MRSP_ConvertIndexedElements_TA_MRSP, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_339 = {
  "TA_MRSP::MRSP_ConvertIndexedElements/ MRSP_ConvertIndexedElements_TA_MRSP",
  scope_339_entries, 6,
};

/* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP/ MRSP_FindMax_of_all_t_cat_TA_MRSP */
static const MappingEntry scope_338_entries[16] = {
  /* 0 */ { MAP_OUTPUT, "Max", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, Max), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 15},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L13), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L14), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L15), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L20), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L23), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L24), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L25), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L32", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, _L32), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 13},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14}
};
static const MappingScope scope_338 = {
  "TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP/ MRSP_FindMax_of_all_t_cat_TA_MRSP",
  scope_338_entries, 16,
};

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat/ MRSP_Find_First_in_SSP_t_cat_TA_MRSP */
static const MappingEntry scope_337_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "SSP_indexed_loc", NULL, sizeof(SSP_t_indexed_trgt_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, SSP_indexed_loc), &_Type_SSP_t_indexed_trgt_t_TA_MRSP_Utils, NULL, NULL, &scope_469, 1, 9},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP 1", &iter_foldwi_33, sizeof(outC_MRSP_Find_First_in_SSP_t__TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_362, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_cat_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L2), &_Type_SSP_t_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L5), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_t_indexed_trgt_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L6), &_Type_SSP_t_indexed_trgt_t_TA_MRSP_Utils, NULL, NULL, &scope_469, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_337 = {
  "TA_MRSP::MRSP_Find_First_in_SSP_t_cat/ MRSP_Find_First_in_SSP_t_cat_TA_MRSP",
  scope_337_entries, 10,
};

/* TA_MRSP::MRSP_FindLastSSPSection/ MRSP_FindLastSSPSection_TA_MRSP */
static const MappingEntry scope_336_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "Index_Last", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, Index_Last), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindLastSSPSection_LOOP 1", &iter_foldwi_33, sizeof(outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_360, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L14), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L19), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L21", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L21), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L30), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(SSP_Mark_ValidSSPsection_TA_MRSP), offsetof(outC_MRSP_FindLastSSPSection_TA_MRSP, _L31), &_Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils, NULL, NULL, &scope_465, 1, 10}
};
static const MappingScope scope_336 = {
  "TA_MRSP::MRSP_FindLastSSPSection/ MRSP_FindLastSSPSection_TA_MRSP",
  scope_336_entries, 12,
};

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP/ MRSP_DetermineRelevantSpe_TA_MRSP */
static const MappingEntry scope_335_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "TargetCurrentCycle", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, TargetCurrentCycle), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_467, 1, 26},
  /* 1 */ { MAP_LOCAL, "_L120", NULL, sizeof(kcg_int), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L120), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L124", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L124), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L140), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L141", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L141), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L142", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L142), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_int), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L143), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_int), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L144), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L145", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L145), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L146", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L146), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L147", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L147), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L148", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L148), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L149", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L149), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L150", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L150), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_467, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L151", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L151), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L154), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L159", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L159), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_467, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L160", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L160), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L161", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L161), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L162", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L162), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L163", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L163), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L165", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L165), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_467, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L166", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L166), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_467, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L167", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L167), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L168", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L168), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, _L169), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_DetermineRelevantSpe_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25}
};
static const MappingScope scope_335 = {
  "TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP/ MRSP_DetermineRelevantSpe_TA_MRSP",
  scope_335_entries, 27,
};

/* TM_lib_internal::C_P015_us_array/ C_P015_us_array_TM_lib_internal */
static const MappingEntry scope_334_entries[26] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC 2", NULL, sizeof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_300, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_SECTION 1", NULL, sizeof(outC_CAST_Int_to_L_SECTION_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, _4_Context_1), NULL, NULL, NULL, &scope_359, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_SECTIONTIMER 1", NULL, sizeof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_275, 1, 5},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_SECTIONTIMER 1", NULL, sizeof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_us_array_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_301, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 1", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, _3_Context_1), NULL, NULL, NULL, &scope_358, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 2", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_358, 1, 1},
  /* 6 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 3", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_358, 1, 2},
  /* 7 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_extract_el_section 4", NULL, sizeof(outC_C_P015_extract_el_section_TM_lib_internal), offsetof(outC_C_P015_us_array_TM_lib_internal, Context_4), NULL, NULL, NULL, &scope_358, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_us_array_TM_lib_internal, _L1), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_416, 1, 8},
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
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(P015_section_enum_T_TM), offsetof(outC_C_P015_us_array_TM_lib_internal, _L4), &_Type_P015_section_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 10},
  /* 23 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_us_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 24 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 25 */ { MAP_OUTPUT, "sections", NULL, sizeof(P015_section_enum_T_TM), offsetof(outC_C_P015_us_array_TM_lib_internal, sections), &_Type_P015_section_enum_T_TM_Utils, NULL, NULL, &scope_417, 1, 25}
};
static const MappingScope scope_334 = {
  "TM_lib_internal::C_P015_us_array/ C_P015_us_array_TM_lib_internal",
  scope_334_entries, 26,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_333_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L4_IfBlock1), &_Type_Q_GDIR_Utils, &scope_329_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_329_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_333 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:then:",
  scope_333_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_332_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L3_IfBlock1), &_Type_Q_GDIR_Utils, &scope_330_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_330_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_332 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:then:",
  scope_332_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_331_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L1_IfBlock1), &_Type_Q_GDIR_Utils, &scope_330_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_330_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_331 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:else:",
  scope_331_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_330_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_330_entries[0], isActive_kcg_bool_kcg_false, &scope_331, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_330_entries[0], isActive_kcg_bool_kcg_true, &scope_332, 1, 2}
};
static const MappingScope scope_330 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:else:",
  scope_330_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1: */
static const MappingEntry scope_329_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_329_entries[0], isActive_kcg_bool_kcg_false, &scope_330, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_329_entries[0], isActive_kcg_bool_kcg_true, &scope_333, 1, 2}
};
static const MappingScope scope_329 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversionsIfBlock1:",
  scope_329_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversions */
static const MappingEntry scope_328_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_329, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_gdir", NULL, sizeof(Q_GDIR), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, q_gdir), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_gdir_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_GDIR_TM_conversions, q_gdir_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_328 = {
  "TM_conversions::CAST_Int_to_Q_GDIR/ CAST_Int_to_Q_GDIR_TM_conversions",
  scope_328_entries, 6,
};

/* TM_conversions::CAST_Int_to_G_A/ CAST_Int_to_G_A_TM_conversions */
static const MappingEntry scope_327_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_G_A_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "g_a", NULL, sizeof(G_A), offsetof(outC_CAST_Int_to_G_A_TM_conversions, g_a), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_327 = {
  "TM_conversions::CAST_Int_to_G_A/ CAST_Int_to_G_A_TM_conversions",
  scope_327_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_GRADIENT/ CAST_Int_to_D_GRADIENT_TM_conversions */
static const MappingEntry scope_326_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_gradient", NULL, sizeof(D_GRADIENT), offsetof(outC_CAST_Int_to_D_GRADIENT_TM_conversions, d_gradient), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_326 = {
  "TM_conversions::CAST_Int_to_D_GRADIENT/ CAST_Int_to_D_GRADIENT_TM_conversions",
  scope_326_entries, 6,
};

/* TM_lib_internal::C_P021_extract_el_section/ C_P021_extract_el_section_TM_lib_internal */
static const MappingEntry scope_325_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L2), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_474, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P021_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_325 = {
  "TM_lib_internal::C_P021_extract_el_section/ C_P021_extract_el_section_TM_lib_internal",
  scope_325_entries, 6,
};

/* TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal */
static const MappingEntry scope_324_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_324 = {
  "TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal",
  scope_324_entries, 7,
};

/* TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal */
static const MappingEntry scope_323_entries[13] = {
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
static const MappingScope scope_323 = {
  "TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal",
  scope_323_entries, 13,
};

/* TM_conversions::CAST_Int_to_T_CYCRQST/ CAST_Int_to_T_CYCRQST_TM_conversions */
static const MappingEntry scope_322_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_cycloc", NULL, sizeof(T_CYCRQST), offsetof(outC_CAST_Int_to_T_CYCRQST_TM_conversions, t_cycloc), &_Type_T_CYCRQST_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_322 = {
  "TM_conversions::CAST_Int_to_T_CYCRQST/ CAST_Int_to_T_CYCRQST_TM_conversions",
  scope_322_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_TIMEOUTRQST/ CAST_Int_to_T_TIMEOUTRQST_TM_conversions */
static const MappingEntry scope_321_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_timeoutrqst", NULL, sizeof(T_TIMEOUTRQST), offsetof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions, t_timeoutrqst), &_Type_T_TIMEOUTRQST_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_321 = {
  "TM_conversions::CAST_Int_to_T_TIMEOUTRQST/ CAST_Int_to_T_TIMEOUTRQST_TM_conversions",
  scope_321_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_MAR/ CAST_Int_to_T_MAR_TM_conversions */
static const MappingEntry scope_320_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_mar", NULL, sizeof(T_MAR), offsetof(outC_CAST_Int_to_T_MAR_TM_conversions, t_mar), &_Type_T_MAR_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_320 = {
  "TM_conversions::CAST_Int_to_T_MAR/ CAST_Int_to_T_MAR_TM_conversions",
  scope_320_entries, 6,
};

/* TM_lib_internal::C_P003V1_us_array/ C_P003V1_us_array_TM_lib_internal */
static const MappingEntry scope_319_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 2", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_357, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_extract_el_section 2", NULL, sizeof(outC_C_P003V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P003V1_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_356, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L37", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L37), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_437, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L38", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L38), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_434, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L41", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_us_array_TM_lib_internal, _L41), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_OUTPUT, "sections", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_us_array_TM_lib_internal, sections), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_434, 1, 11}
};
static const MappingScope scope_319 = {
  "TM_lib_internal::C_P003V1_us_array/ C_P003V1_us_array_TM_lib_internal",
  scope_319_entries, 12,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfile/ FindStartOfNewSpeedProfile_TA_Lib_internal */
static const MappingEntry scope_318_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP 1", &iter_foldwi_33, sizeof(outC_FindStartOfNewSpeedProfil_TA_Lib_internal), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_355, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L167", NULL, sizeof(array_int_33), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L167), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L2), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L93", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L93), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L98", NULL, sizeof(array__10596), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L98), &_Type_array__10596_Utils, NULL, NULL, &scope_494, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_318 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfile/ FindStartOfNewSpeedProfile_TA_Lib_internal",
  scope_318_entries, 11,
};

/* TA_Lib_internal::Update_SP_per_LRBG_loop/ Update_SP_per_LRBG_loop_TA_Lib_internal */
static const MappingEntry scope_317_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "SpeedProfile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, SpeedProfile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L15), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L19), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L20), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L6), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_317 = {
  "TA_Lib_internal::Update_SP_per_LRBG_loop/ Update_SP_per_LRBG_loop_TA_Lib_internal",
  scope_317_entries, 9,
};

/* TA_SSP::Convert_P27_to_DistanceProfile_1st_section/ Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_316_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_Q_Front 2", NULL, sizeof(outC_Eval_Q_Front_TA_Lib_internal), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _1_Context_2), NULL, NULL, NULL, &scope_351, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 2", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, Context_2), NULL, NULL, NULL, &scope_256, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L86", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 13},
  /* 3 */ { MAP_LOCAL, "_L87", NULL, sizeof(D_STATIC), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L87), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_LOCAL, "_L88", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L88), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L89", NULL, sizeof(Q_SCALE), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L89), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L90", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L90), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L91", NULL, sizeof(Q_FRONT), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L91), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_int), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L92), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L93", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L93), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L94", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L94), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L95", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L95), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L96", NULL, sizeof(V_STATIC), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L96), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L97", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L97), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L98", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, _L98), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 14},
  /* 15 */ { MAP_OUTPUT, "section1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, section1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 17},
  /* 16 */ { MAP_OUTPUT, "section1_delay", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, section1_delay), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 16},
  /* 17 */ { MAP_OUTPUT, "v_static_section1", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P27_to_DistancePr_TA_SSP, v_static_section1), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15}
};
static const MappingScope scope_316 = {
  "TA_SSP::Convert_P27_to_DistanceProfile_1st_section/ Convert_P27_to_DistancePr_TA_SSP",
  scope_316_entries, 18,
};

/* TA_SSP::Convert_P27_to_DistanceProfile_loop/ _16_Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_315_entries[30] = {
  /* 0 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 28},
  /* 1 */ { MAP_OUTPUT, "SpeedProfile", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, SpeedProfile), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 29},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::DetectSpeedIncrease 1", NULL, sizeof(outC_DetectSpeedIncrease_TA_Lib_internal), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, Context_1), NULL, &scope_315_entries[0], isActive_kcg_bool_kcg_true, &scope_350, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 1", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L44", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L44), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L45", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L45), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L46", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L46), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(Q_SCALE), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L47), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L48", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L48), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L57", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L57), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L58), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L65", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L65), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L66", NULL, sizeof(Q_FRONT), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L66), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L68", NULL, sizeof(Q_FRONT), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L68), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L70", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L70), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L71", NULL, sizeof(D_STATIC), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L71), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L84", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L84), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L85", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L85), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L87), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L88", NULL, sizeof(V_STATIC), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L88), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L89", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L89), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L90", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L90), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 24},
  /* 27 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L91), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L92", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L92), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_int), offsetof(outC__16_Convert_P27_to_DistancePr_TA_SSP, _L93), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27}
};
static const MappingScope scope_315 = {
  "TA_SSP::Convert_P27_to_DistanceProfile_loop/ _16_Convert_P27_to_DistancePr_TA_SSP",
  scope_315_entries, 30,
};

/* TA_Lib_internal::FindFirstRelevantSPForNewLRBG/ FindFirstRelevantSPForNewLRBG_TA_Lib_internal */
static const MappingEntry scope_314_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop 3", &iter_foldwi_33, sizeof(outC_FindFirstRelevantSPForNew_TA_Lib_internal), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, Context_3), NULL, NULL, NULL, &scope_349, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L169", NULL, sizeof(array__10596), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L169), &_Type_array__10596_Utils, NULL, NULL, &scope_494, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L93", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L93), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_314 = {
  "TA_Lib_internal::FindFirstRelevantSPForNewLRBG/ FindFirstRelevantSPForNewLRBG_TA_Lib_internal",
  scope_314_entries, 10,
};

/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop/ MoveSPSectionsToNewLRBGaf_TA_Lib_internal */
static const MappingEntry scope_313_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, ProfileOut), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 12},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::NormalizePos 2", NULL, sizeof(outC_NormalizePos_TA_Lib_internal), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, Context_2), NULL, NULL, NULL, &scope_254, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L6), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L7), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L8), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal, _L9), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 9}
};
static const MappingScope scope_313 = {
  "TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop/ MoveSPSectionsToNewLRBGaf_TA_Lib_internal",
  scope_313_entries, 13,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_312_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L1_15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _4__L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9_13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _6_n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_312 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/",
  scope_312_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/ */
static const MappingEntry scope_311_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_us_array_qdiff 1", &iter_mapwi_32, sizeof(outC_C_P027V1_us_array_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, Context_1_1), NULL, NULL, NULL, &scope_340, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L1_1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_459, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L11_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L5_1), &_Type_array_int_32_Utils, NULL, NULL, &scope_437, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_64_32), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L6_1), &_Type_array_int_64_32_Utils, NULL, NULL, &scope_492, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L7_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10425), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9_1), &_Type_array__10425_Utils, NULL, NULL, &scope_453, 1, 7},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(_2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, sections_1), &_Type__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 0}
};
static const MappingScope scope_311 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/",
  scope_311_entries, 9,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2 */
static const MappingEntry scope_310_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_section_onbard", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, P027V1_section_onbard), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 22},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_STATIC 1", NULL, sizeof(outC_CAST_Int_to_D_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_341, 1, 1},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_312, 1, 4},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_FRONT 1", NULL, sizeof(outC_CAST_Int_to_Q_FRONT_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_342, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_STATIC 1", NULL, sizeof(outC_CAST_Int_to_V_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_348, 1, 3},
  /* 5 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1", NULL, 0, 0, NULL, NULL, NULL, &scope_311, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L10), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(array_int_64), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L29), &_Type_array_int_64_Utils, NULL, NULL, &scope_459, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(D_STATIC), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L30), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_FRONT), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L31), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(V_STATIC), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L32), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L33), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(_2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L5), &_Type__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_453, 1, 11},
  /* 21 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_3), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L6), &_Type_array_int_3_Utils, NULL, NULL, &scope_376, 1, 10},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 9}
};
static const MappingScope scope_310 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_se_TM_conversions_baseline2",
  scope_310_entries, 23,
};

/* TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal */
static const MappingEntry scope_309_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_309 = {
  "TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal",
  scope_309_entries, 4,
};

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2/ MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP */
static const MappingEntry scope_308_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "SSP_t_section_out", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP, SSP_t_section_out), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP, _L1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP, _L6), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_308 = {
  "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2/ MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP",
  scope_308_entries, 3,
};

/* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix/ MRSP_RemoveLargestFromSSP_TA_MRSP */
static const MappingEntry scope_307_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "SSP_matrix_out", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, SSP_matrix_out), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L1), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L2), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 2}
};
static const MappingScope scope_307 = {
  "TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix/ MRSP_RemoveLargestFromSSP_TA_MRSP",
  scope_307_entries, 7,
};

/* TA_MRSP::MRSP_FindMax_of_all_t_cats/ MRSP_FindMax_of_all_t_cats_TA_MRSP */
static const MappingEntry scope_306_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "SSP_largest_target", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, SSP_largest_target), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_ConvertIndexedElements 1", &iter_map_11, sizeof(outC_MRSP_ConvertIndexedElements_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_339, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP 1", &iter_foldwi_11, sizeof(outC_MRSP_FindMax_of_all_t_cat_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_338, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_indexed_targets_list_t_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L1), &_Type_SSP_t_indexed_targets_list_t_TA_MRSP_Utils, NULL, NULL, &scope_470, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L26), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L61", NULL, sizeof(array__10572), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L61), &_Type_array__10572_Utils, NULL, NULL, &scope_486, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L62", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP, _L62), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 7}
};
static const MappingScope scope_306 = {
  "TA_MRSP::MRSP_FindMax_of_all_t_cats/ MRSP_FindMax_of_all_t_cats_TA_MRSP",
  scope_306_entries, 9,
};

/* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat/ MRSP_Find_First_in_each_t_TA_MRSP */
static const MappingEntry scope_305_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "SSP_indexed_targets_per_cat_out", NULL, sizeof(SSP_t_indexed_targets_list_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, SSP_indexed_targets_per_cat_out), &_Type_SSP_t_indexed_targets_list_t_TA_MRSP_Utils, NULL, NULL, &scope_470, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Find_First_in_SSP_t_cat 1", &iter_map_11, sizeof(outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_337, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(array__10505), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, _L1), &_Type_array__10505_Utils, NULL, NULL, &scope_470, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_Find_First_in_each_t_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 2}
};
static const MappingScope scope_305 = {
  "TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat/ MRSP_Find_First_in_each_t_TA_MRSP",
  scope_305_entries, 4,
};

/* TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSPmath::Min 1/ */
static const MappingEntry scope_304_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, Mi_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L21_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L22_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L24_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_304 = {
  "TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSPmath::Min 1/",
  scope_304_entries, 5,
};

/* TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSP */
static const MappingEntry scope_303_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "MRSpeed", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, MRSpeed), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L1), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L2), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L3), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP, _L7), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_304, 1, 0}
};
static const MappingScope scope_303 = {
  "TA_MRSP::MRSP_Determine_Lowest_Speed/ MRSP_Determine_Lowest_Speed_TA_MRSP",
  scope_303_entries, 9,
};

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat/ _20_MRSP_DetermineRelevantSpe_TA_MRSP */
static const MappingEntry scope_302_entries[15] = {
  /* 0 */ { MAP_INSTANCE, "TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP 1", &iter_foldwi_33, sizeof(outC_MRSP_DetermineRelevantSpe_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_335, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindLastSSPSection 1", NULL, sizeof(outC_MRSP_FindLastSSPSection_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_336, 1, 1},
  /* 2 */ { MAP_OUTPUT, "ValidSpeed", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, ValidSpeed), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 14},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_valid_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L11), &_Type_SSP_valid_section_t_TA_MRSP_Utils, NULL, NULL, &scope_466, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L30), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_467, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L4), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L52", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L52), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L53", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L53), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_int), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L64), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L65", NULL, sizeof(SSP_relevant_target_t_TA_MRSP), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L65), &_Type_SSP_relevant_target_t_TA_MRSP_Utils, NULL, NULL, &scope_467, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L66", NULL, sizeof(array_int_33), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L66), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L67", NULL, sizeof(array__10575), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L67), &_Type_array__10575_Utils, NULL, NULL, &scope_487, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_302 = {
  "TA_MRSP::MRSP_DetermineRelevantSpeedperCat/ _20_MRSP_DetermineRelevantSpe_TA_MRSP",
  scope_302_entries, 15,
};

/* TM_conversions::CAST_Int_to_T_SECTIONTIMER/ CAST_Int_to_T_SECTIONTIMER_TM_conversions */
static const MappingEntry scope_301_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_sectiontimer", NULL, sizeof(T_SECTIONTIMER), offsetof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions, t_sectiontimer), &_Type_T_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_301 = {
  "TM_conversions::CAST_Int_to_T_SECTIONTIMER/ CAST_Int_to_T_SECTIONTIMER_TM_conversions",
  scope_301_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC/ CAST_Int_to_D_SECTIONTIME_TM_conversions */
static const MappingEntry scope_300_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_sectiontimerstoploc", NULL, sizeof(D_SECTIONTIMERSTOPLOC), offsetof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions, d_sectiontimerstoploc), &_Type_D_SECTIONTIMERSTOPLOC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_300 = {
  "TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC/ CAST_Int_to_D_SECTIONTIME_TM_conversions",
  scope_300_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_STARTOL/ CAST_Int_to_D_STARTOL_TM_conversions */
static const MappingEntry scope_299_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_startol", NULL, sizeof(D_STARTOL), offsetof(outC_CAST_Int_to_D_STARTOL_TM_conversions, d_startol), &_Type_D_STARTOL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_299 = {
  "TM_conversions::CAST_Int_to_D_STARTOL/ CAST_Int_to_D_STARTOL_TM_conversions",
  scope_299_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC/ CAST_Int_to_D_ENDTIMERSTA_TM_conversions */
static const MappingEntry scope_298_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_OUTPUT, "d_endtimerstartloc", NULL, sizeof(D_ENDTIMERSTARTLOC), offsetof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions, d_endtimerstartloc), &_Type_D_ENDTIMERSTARTLOC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_298 = {
  "TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC/ CAST_Int_to_D_ENDTIMERSTA_TM_conversions",
  scope_298_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_RELEASEOL/ CAST_Int_to_V_RELEASEOL_TM_conversions */
static const MappingEntry scope_297_entries[13] = {
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
static const MappingScope scope_297 = {
  "TM_conversions::CAST_Int_to_V_RELEASEOL/ CAST_Int_to_V_RELEASEOL_TM_conversions",
  scope_297_entries, 13,
};

/* TM_conversions::CAST_Int_to_L_ENDSECTION/ CAST_Int_to_L_ENDSECTION_TM_conversions */
static const MappingEntry scope_296_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_endsection", NULL, sizeof(L_ENDSECTION), offsetof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions, l_endsection), &_Type_L_ENDSECTION_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_296 = {
  "TM_conversions::CAST_Int_to_L_ENDSECTION/ CAST_Int_to_L_ENDSECTION_TM_conversions",
  scope_296_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_RELEASEDP/ CAST_Int_to_V_RELEASEDP_TM_conversions */
static const MappingEntry scope_295_entries[13] = {
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
static const MappingScope scope_295 = {
  "TM_conversions::CAST_Int_to_V_RELEASEDP/ CAST_Int_to_V_RELEASEDP_TM_conversions",
  scope_295_entries, 13,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_294_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L4_IfBlock1), &_Type_Q_ENDTIMER_Utils, &scope_290_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_290_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_294 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:then:",
  scope_294_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_293_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L3_IfBlock1), &_Type_Q_ENDTIMER_Utils, &scope_291_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_291_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_293 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:then:",
  scope_293_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_292_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L1_IfBlock1), &_Type_Q_ENDTIMER_Utils, &scope_291_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_291_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_292 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:else:",
  scope_292_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_291_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_291_entries[0], isActive_kcg_bool_kcg_false, &scope_292, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_291_entries[0], isActive_kcg_bool_kcg_true, &scope_293, 1, 2}
};
static const MappingScope scope_291 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:else:",
  scope_291_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1: */
static const MappingEntry scope_290_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_290_entries[0], isActive_kcg_bool_kcg_false, &scope_291, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_290_entries[0], isActive_kcg_bool_kcg_true, &scope_294, 1, 2}
};
static const MappingScope scope_290 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversionsIfBlock1:",
  scope_290_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversions */
static const MappingEntry scope_289_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_290, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_endtimer", NULL, sizeof(Q_ENDTIMER), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, q_endtimer), &_Type_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_endtimer_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions, q_endtimer_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_289 = {
  "TM_conversions::CAST_Int_to_Q_ENDTIMER/ CAST_Int_to_Q_ENDTIMER_TM_conversions",
  scope_289_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_OL/ CAST_Int_to_T_OL_TM_conversions */
static const MappingEntry scope_288_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_ol", NULL, sizeof(T_OL), offsetof(outC_CAST_Int_to_T_OL_TM_conversions, t_ol), &_Type_T_OL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_288 = {
  "TM_conversions::CAST_Int_to_T_OL/ CAST_Int_to_T_OL_TM_conversions",
  scope_288_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_LOA/ CAST_Int_to_T_LOA_TM_conversions */
static const MappingEntry scope_287_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_loa", NULL, sizeof(T_LOA), offsetof(outC_CAST_Int_to_T_LOA_TM_conversions, t_loa), &_Type_T_LOA_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_287 = {
  "TM_conversions::CAST_Int_to_T_LOA/ CAST_Int_to_T_LOA_TM_conversions",
  scope_287_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_286_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L4_IfBlock1), &_Type_Q_DANGERPOINT_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_286 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:then:",
  scope_286_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_285_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L3_IfBlock1), &_Type_Q_DANGERPOINT_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_285 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:then:",
  scope_285_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_284_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L1_IfBlock1), &_Type_Q_DANGERPOINT_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_284 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:else:",
  scope_284_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_283_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_283_entries[0], isActive_kcg_bool_kcg_false, &scope_284, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_283_entries[0], isActive_kcg_bool_kcg_true, &scope_285, 1, 2}
};
static const MappingScope scope_283 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:else:",
  scope_283_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1: */
static const MappingEntry scope_282_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_282_entries[0], isActive_kcg_bool_kcg_false, &scope_283, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_282_entries[0], isActive_kcg_bool_kcg_true, &scope_286, 1, 2}
};
static const MappingScope scope_282 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversionsIfBlock1:",
  scope_282_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversions */
static const MappingEntry scope_281_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_282, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_dangerpoint", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, q_dangerpoint), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_dangerpoint_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions, q_dangerpoint_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_281 = {
  "TM_conversions::CAST_Int_to_Q_DANGERPOINT/ CAST_Int_to_Q_DANGERPOINT_TM_conversions",
  scope_281_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_280_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L4_IfBlock1), &_Type_Q_SECTIONTIMER_Utils, &scope_276_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_276_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_280 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:then:",
  scope_280_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_279_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L3_IfBlock1), &_Type_Q_SECTIONTIMER_Utils, &scope_277_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_277_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_279 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:then:",
  scope_279_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_278_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L1_IfBlock1), &_Type_Q_SECTIONTIMER_Utils, &scope_277_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_277_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_278 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:else:",
  scope_278_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_277_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_277_entries[0], isActive_kcg_bool_kcg_false, &scope_278, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_277_entries[0], isActive_kcg_bool_kcg_true, &scope_279, 1, 2}
};
static const MappingScope scope_277 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:else:",
  scope_277_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1: */
static const MappingEntry scope_276_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_276_entries[0], isActive_kcg_bool_kcg_false, &scope_277, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_276_entries[0], isActive_kcg_bool_kcg_true, &scope_280, 1, 2}
};
static const MappingScope scope_276 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversionsIfBlock1:",
  scope_276_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversions */
static const MappingEntry scope_275_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_276, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_sectiontimer", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, q_sectiontimer), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_sectiontimer_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions, q_sectiontimer_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_275 = {
  "TM_conversions::CAST_Int_to_Q_SECTIONTIMER/ CAST_Int_to_Q_SECTIONTIMER_TM_conversions",
  scope_275_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_274_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L4_IfBlock1), &_Type_Q_OVERLAP_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_274 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:then:",
  scope_274_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_273_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L3_IfBlock1), &_Type_Q_OVERLAP_Utils, &scope_271_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_271_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_273 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:then:",
  scope_273_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_272_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L1_IfBlock1), &_Type_Q_OVERLAP_Utils, &scope_271_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_271_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_272 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:else:",
  scope_272_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_271_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_271_entries[0], isActive_kcg_bool_kcg_false, &scope_272, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_271_entries[0], isActive_kcg_bool_kcg_true, &scope_273, 1, 2}
};
static const MappingScope scope_271 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:else:",
  scope_271_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1: */
static const MappingEntry scope_270_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_270_entries[0], isActive_kcg_bool_kcg_false, &scope_271, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_270_entries[0], isActive_kcg_bool_kcg_true, &scope_274, 1, 2}
};
static const MappingScope scope_270 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversionsIfBlock1:",
  scope_270_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversions */
static const MappingEntry scope_269_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_270, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_overlap", NULL, sizeof(Q_OVERLAP), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, q_overlap), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_overlap_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions, q_overlap_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_269 = {
  "TM_conversions::CAST_Int_to_Q_OVERLAP/ CAST_Int_to_Q_OVERLAP_TM_conversions",
  scope_269_entries, 6,
};

/* TM_lib_internal::C_P015_unflatten_sections/ C_P015_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_268_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_us_array 1", &iter_mapwi_32, sizeof(outC_C_P015_us_array_TM_lib_internal), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L1), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_416, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_32_Utils, NULL, NULL, &scope_437, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_128_32), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_128_32_Utils, NULL, NULL, &scope_485, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10106), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, _L9), &_Type_array__10106_Utils, NULL, NULL, &scope_418, 1, 6},
  /* 11 */ { MAP_OUTPUT, "sections", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_unflatten_sections_TM_lib_internal, sections), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_418, 1, 11}
};
static const MappingScope scope_268 = {
  "TM_lib_internal::C_P015_unflatten_sections/ C_P015_unflatten_sections_TM_lib_internal",
  scope_268_entries, 12,
};

/* TM_conversions::CAST_Int_to_T_ENDTIMER/ CAST_Int_to_T_ENDTIMER_TM_conversions */
static const MappingEntry scope_267_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_endtimer", NULL, sizeof(T_ENDTIMER), offsetof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions, t_endtimer), &_Type_T_ENDTIMER_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_267 = {
  "TM_conversions::CAST_Int_to_T_ENDTIMER/ CAST_Int_to_T_ENDTIMER_TM_conversions",
  scope_267_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_LOA/ CAST_Int_to_V_LOA_TM_conversions */
static const MappingEntry scope_266_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_loa", NULL, sizeof(V_LOA), offsetof(outC_CAST_Int_to_V_LOA_TM_conversions, v_loa), &_Type_V_LOA_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_266 = {
  "TM_conversions::CAST_Int_to_V_LOA/ CAST_Int_to_V_LOA_TM_conversions",
  scope_266_entries, 8,
};

/* TM_conversions::CAST_Int_to_D_OL/ CAST_Int_to_D_OL_TM_conversions */
static const MappingEntry scope_265_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ol", NULL, sizeof(D_OL), offsetof(outC_CAST_Int_to_D_OL_TM_conversions, d_ol), &_Type_D_OL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_265 = {
  "TM_conversions::CAST_Int_to_D_OL/ CAST_Int_to_D_OL_TM_conversions",
  scope_265_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_DP/ CAST_Int_to_D_DP_TM_conversions */
static const MappingEntry scope_264_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_dp", NULL, sizeof(D_DP), offsetof(outC_CAST_Int_to_D_DP_TM_conversions, d_dp), &_Type_D_DP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_264 = {
  "TM_conversions::CAST_Int_to_D_DP/ CAST_Int_to_D_DP_TM_conversions",
  scope_264_entries, 6,
};

/* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP/ FindStartOfNewGradientPro_TA_Lib_internal */
static const MappingEntry scope_263_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L4), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_431, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L5), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientPro_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_263 = {
  "TA_Lib_internal::FindStartOfNewGradientProfile_LOOP/ FindStartOfNewGradientPro_TA_Lib_internal",
  scope_263_entries, 17,
};

/* TA_Lib_internal::EVAL_Q_GDIR/ EVAL_Q_GDIR_TA_Lib_internal */
static const MappingEntry scope_262_entries[9] = {
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
static const MappingScope scope_262 = {
  "TA_Lib_internal::EVAL_Q_GDIR/ EVAL_Q_GDIR_TA_Lib_internal",
  scope_262_entries, 9,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_261_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_261 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:then:",
  scope_261_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_260_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L22_IfBlock1), &_Type_kcg_int_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L33_IfBlock1), &_Type_kcg_int_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_260 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:then:",
  scope_260_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_259_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L25_IfBlock1), &_Type_kcg_int_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L36_IfBlock1), &_Type_kcg_int_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_259 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:else:",
  scope_259_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_258_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_258_entries[0], isActive_kcg_bool_kcg_false, &scope_259, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_258_entries[0], isActive_kcg_bool_kcg_true, &scope_260, 1, 2}
};
static const MappingScope scope_258 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:else:",
  scope_258_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_257_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_257_entries[0], isActive_kcg_bool_kcg_false, &scope_258, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_261, 1, 2}
};
static const MappingScope scope_257 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internalIfBlock1:",
  scope_257_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal */
static const MappingEntry scope_256_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_257, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, _L1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "d_internal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, d_internal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_inte_TA_Lib_internal, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_256 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_inte_TA_Lib_internal",
  scope_256_entries, 4,
};

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop/ FindFirstRelevantGPForNew_TA_Lib_internal */
static const MappingEntry scope_255_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L169", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L169), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L170", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L170), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L172", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNew_TA_Lib_internal, _L172), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_431, 1, 4},
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
static const MappingScope scope_255 = {
  "TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop/ FindFirstRelevantGPForNew_TA_Lib_internal",
  scope_255_entries, 17,
};

/* TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal */
static const MappingEntry scope_254_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, Out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_NormalizePos_TA_Lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_NormalizePos_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_254 = {
  "TA_Lib_internal::NormalizePos/ NormalizePos_TA_Lib_internal",
  scope_254_entries, 5,
};

/* TM_lib_internal::C_P021_us_array/ C_P021_us_array_TM_lib_internal */
static const MappingEntry scope_253_entries[22] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_GRADIENT 1", NULL, sizeof(outC_CAST_Int_to_D_GRADIENT_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, _3_Context_1), NULL, NULL, NULL, &scope_326, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_G_A 1", NULL, sizeof(outC_CAST_Int_to_G_A_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_327, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_GDIR 1", NULL, sizeof(outC_CAST_Int_to_Q_GDIR_TM_conversions), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_328, 1, 5},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 1", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_325, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 2", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_325, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_extract_el_section 3", NULL, sizeof(outC_C_P021_extract_el_section_TM_lib_internal), offsetof(outC_C_P021_us_array_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_325, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_474, 1, 6},
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
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, _L4), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_us_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 20 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_us_array_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_OUTPUT, "sections", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_C_P021_us_array_TM_lib_internal, sections), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 21}
};
static const MappingScope scope_253 = {
  "TM_lib_internal::C_P021_us_array/ C_P021_us_array_TM_lib_internal",
  scope_253_entries, 22,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_252_entries[14] = {
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
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 3}
};
static const MappingScope scope_252 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_252_entries, 14,
};

/* TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal */
static const MappingEntry scope_251_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 1", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_323, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 2", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_323, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 1", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_324, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 3", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_324, 1, 3},
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
static const MappingScope scope_251 = {
  "TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal",
  scope_251_entries, 19,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_250_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 11},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 2}
};
static const MappingScope scope_250 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_250_entries, 12,
};

/* Safe_MOD_int/ Safe_MOD_int */
static const MappingEntry scope_249_entries[11] = {
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
static const MappingScope scope_249 = {
  "Safe_MOD_int/ Safe_MOD_int",
  scope_249_entries, 11,
};

/* MA_Request::CompareSectionTimer/ CompareSectionTimer_MA_Request */
static const MappingEntry scope_248_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, _L1), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_CompareSectionTimer_MA_Request, _L2), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_389, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, _L5), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CompareSectionTimer_MA_Request, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_OUTPUT, "smallestTimer", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_CompareSectionTimer_MA_Request, smallestTimer), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_248 = {
  "MA_Request::CompareSectionTimer/ CompareSectionTimer_MA_Request",
  scope_248_entries, 11,
};

/* Safe_DIV_real/ Safe_DIV_real */
static const MappingEntry scope_247_entries[11] = {
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
static const MappingScope scope_247 = {
  "Safe_DIV_real/ Safe_DIV_real",
  scope_247_entries, 11,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_246_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L2_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P057_compr_onboard_TM_conversions, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_246 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_246_entries, 6,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_245_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_245 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_245_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_244_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_240_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_240_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_244 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_244_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_243_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_241_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_241_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_243 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_243_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_242_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_241_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_241_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_242 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_242_entries, 2,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_241_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_241_entries[0], isActive_kcg_bool_kcg_false, &scope_242, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_241_entries[0], isActive_kcg_bool_kcg_true, &scope_243, 1, 2}
};
static const MappingScope scope_241 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_241_entries, 3,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_240_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_240_entries[0], isActive_kcg_bool_kcg_false, &scope_241, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_240_entries[0], isActive_kcg_bool_kcg_true, &scope_244, 1, 2}
};
static const MappingScope scope_240 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_240_entries, 3,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_239_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_239_entries[0], isActive_kcg_bool_kcg_false, &scope_240, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_239_entries[0], isActive_kcg_bool_kcg_true, &scope_245, 1, 2}
};
static const MappingScope scope_239 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_239_entries, 3,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_238_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_239, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_238 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_238_entries, 6,
};

/* TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversions */
static const MappingEntry scope_237_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P057_onboard", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, P057_onboard), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 22},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_246, 1, 2},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_238, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_CYCRQST 1", NULL, sizeof(outC_CAST_Int_to_T_CYCRQST_TM_conversions), offsetof(outC_C_P057_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_322, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_MAR 1", NULL, sizeof(outC_CAST_Int_to_T_MAR_TM_conversions), offsetof(outC_C_P057_compr_onboard_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_320, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TIMEOUTRQST 1", NULL, sizeof(outC_CAST_Int_to_T_TIMEOUTRQST_TM_conversions), offsetof(outC_C_P057_compr_onboard_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_321, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L10), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(T_TIMEOUTRQST), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L27), &_Type_T_TIMEOUTRQST_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_CYCRQST), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L29), &_Type_T_CYCRQST_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L34", NULL, sizeof(array_int_6), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L34), &_Type_array_int_6_Utils, NULL, NULL, &scope_415, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_MAR), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L4), &_Type_T_MAR_Utils, NULL, NULL, NULL, 1, 9},
  /* 16 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 17 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L44), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 21 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P057_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 8}
};
static const MappingScope scope_237 = {
  "TM_conversions::C_P057_compr_onboard/ C_P057_compr_onboard_TM_conversions",
  scope_237_entries, 23,
};

/* TM_conversions::CAST_Int_to_D_NVSTFF/ CAST_Int_to_D_NVSTFF_TM_conversions */
static const MappingEntry scope_236_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvstff", NULL, sizeof(D_NVSTFF), offsetof(outC_CAST_Int_to_D_NVSTFF_TM_conversions, d_nvstff), &_Type_D_NVSTFF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_236 = {
  "TM_conversions::CAST_Int_to_D_NVSTFF/ CAST_Int_to_D_NVSTFF_TM_conversions",
  scope_236_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_235_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L4_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_235 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:then:",
  scope_235_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_234_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L3_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_234 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:then:",
  scope_234_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_233_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L1_IfBlock1), &_Type_Q_NVDRIVER_ADHES_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_233 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:else:",
  scope_233_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_232_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_232_entries[0], isActive_kcg_bool_kcg_false, &scope_233, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_232_entries[0], isActive_kcg_bool_kcg_true, &scope_234, 1, 2}
};
static const MappingScope scope_232 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:else:",
  scope_232_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1: */
static const MappingEntry scope_231_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_false, &scope_232, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_true, &scope_235, 1, 2}
};
static const MappingScope scope_231 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversionsIfBlock1:",
  scope_231_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions */
static const MappingEntry scope_230_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_231, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "q_nvdriver_adhes_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, q_nvdriver_adhes_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "q_nvdriveradhes", NULL, sizeof(Q_NVDRIVER_ADHES), offsetof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions, q_nvdriveradhes), &_Type_Q_NVDRIVER_ADHES_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_230 = {
  "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES/ CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions",
  scope_230_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_229_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_225_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L8_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_225_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_229 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:then:",
  scope_229_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_228_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_226_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L71_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_226_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_228 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:then:",
  scope_228_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_227_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L1_IfBlock1), &_Type_M_NVDERUN_Utils, &scope_226_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_226_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_227 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:else:",
  scope_227_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_226_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_226_entries[0], isActive_kcg_bool_kcg_false, &scope_227, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_226_entries[0], isActive_kcg_bool_kcg_true, &scope_228, 1, 2}
};
static const MappingScope scope_226 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:else:",
  scope_226_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1: */
static const MappingEntry scope_225_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_225_entries[0], isActive_kcg_bool_kcg_false, &scope_226, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_225_entries[0], isActive_kcg_bool_kcg_true, &scope_229, 1, 2}
};
static const MappingScope scope_225 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversionsIfBlock1:",
  scope_225_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversions */
static const MappingEntry scope_224_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_225, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "m_nvderun", NULL, sizeof(M_NVDERUN), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, m_nvderun), &_Type_M_NVDERUN_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_nvderun_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVDERUN_TM_conversions, m_nvderun_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_224 = {
  "TM_conversions::CAST_Int_to_M_NVDERUN/ CAST_Int_to_M_NVDERUN_TM_conversions",
  scope_224_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_NVCONTACT/ CAST_Int_to_T_NVCONTACT_TM_conversions */
static const MappingEntry scope_223_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_nvcontact", NULL, sizeof(T_NVCONTACT), offsetof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions, t_nvcontact), &_Type_T_NVCONTACT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_223 = {
  "TM_conversions::CAST_Int_to_T_NVCONTACT/ CAST_Int_to_T_NVCONTACT_TM_conversions",
  scope_223_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_222_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L4_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_222 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:then:",
  scope_222_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_221_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L3_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L42_IfBlock1), &_Type_kcg_bool_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_221 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:then:",
  scope_221_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_220_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L2_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L33_IfBlock1), &_Type_kcg_bool_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_220 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:then:",
  scope_220_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_219_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L25_IfBlock1), &_Type_M_NVCONTACT_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L34_IfBlock1), &_Type_kcg_bool_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_219 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:else:",
  scope_219_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_218_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_218_entries[0], isActive_kcg_bool_kcg_false, &scope_219, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_218_entries[0], isActive_kcg_bool_kcg_true, &scope_220, 1, 2}
};
static const MappingScope scope_218 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:else:",
  scope_218_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_217_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_false, &scope_218, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_true, &scope_221, 1, 2}
};
static const MappingScope scope_217 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:else:",
  scope_217_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1: */
static const MappingEntry scope_216_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_false, &scope_217, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_true, &scope_222, 1, 2}
};
static const MappingScope scope_216 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversionsIfBlock1:",
  scope_216_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversions */
static const MappingEntry scope_215_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_216, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_nvcontact", NULL, sizeof(M_NVCONTACT), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, m_nvcontact), &_Type_M_NVCONTACT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_nvcontact_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions, m_nvcontact_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_215 = {
  "TM_conversions::CAST_Int_to_M_NVCONTACT/ CAST_Int_to_M_NVCONTACT_TM_conversions",
  scope_215_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVPOTRP/ CAST_Int_to_D_NVPOTRP_TM_conversions */
static const MappingEntry scope_214_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvpotrp", NULL, sizeof(D_NVPOTRP), offsetof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions, d_nvpotrp), &_Type_D_NVPOTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_214 = {
  "TM_conversions::CAST_Int_to_D_NVPOTRP/ CAST_Int_to_D_NVPOTRP_TM_conversions",
  scope_214_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_213_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L4_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_213 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:then:",
  scope_213_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_212_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L3_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_212 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:then:",
  scope_212_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_211_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L1_IfBlock1), &_Type_Q_NVEMRRLS_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_210_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_211 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:else:",
  scope_211_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_210_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_210_entries[0], isActive_kcg_bool_kcg_false, &scope_211, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_210_entries[0], isActive_kcg_bool_kcg_true, &scope_212, 1, 2}
};
static const MappingScope scope_210 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:else:",
  scope_210_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1: */
static const MappingEntry scope_209_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_false, &scope_210, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_true, &scope_213, 1, 2}
};
static const MappingScope scope_209 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversionsIfBlock1:",
  scope_209_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversions */
static const MappingEntry scope_208_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_209, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_nvemrrls", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, q_nvemrrls), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_nvemrrls_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions, q_nvemrrls_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_208 = {
  "TM_conversions::CAST_Int_to_Q_NVEMRRLS/ CAST_Int_to_Q_NVEMRRLS_TM_conversions",
  scope_208_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_NVOVTRP/ CAST_Int_to_T_NVOVTRP_TM_conversions */
static const MappingEntry scope_207_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "t_nvovtrp", NULL, sizeof(T_NVOVTRP), offsetof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions, t_nvovtrp), &_Type_T_NVOVTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_207 = {
  "TM_conversions::CAST_Int_to_T_NVOVTRP/ CAST_Int_to_T_NVOVTRP_TM_conversions",
  scope_207_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVOVTRP/ CAST_Int_to_D_NVOVTRP_TM_conversions */
static const MappingEntry scope_206_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvovtrp", NULL, sizeof(D_NVOVTRP), offsetof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions, d_nvovtrp), &_Type_D_NVOVTRP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_206 = {
  "TM_conversions::CAST_Int_to_D_NVOVTRP/ CAST_Int_to_D_NVOVTRP_TM_conversions",
  scope_206_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_NVSUPOVTRP/ CAST_Int_to_V_NVSUPOVTRP_TM_conversions */
static const MappingEntry scope_205_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvsupovtrp", NULL, sizeof(V_NVSUPOVTRP), offsetof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions, v_nvsupovtrp), &_Type_V_NVSUPOVTRP_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_205 = {
  "TM_conversions::CAST_Int_to_V_NVSUPOVTRP/ CAST_Int_to_V_NVSUPOVTRP_TM_conversions",
  scope_205_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVALLOWOVTRP/ CAST_Int_to_V_NVALLOWOVTRP_TM_conversions */
static const MappingEntry scope_204_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvallowovtrp", NULL, sizeof(V_NVALLOWOVTRP), offsetof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions, v_nvallowovtrp), &_Type_V_NVALLOWOVTRP_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_204 = {
  "TM_conversions::CAST_Int_to_V_NVALLOWOVTRP/ CAST_Int_to_V_NVALLOWOVTRP_TM_conversions",
  scope_204_entries, 8,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_203_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L4_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_203 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:then:",
  scope_203_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_202_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L3_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_200_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_200_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_202 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:then:",
  scope_202_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_201_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L1_IfBlock1), &_Type_Q_NVSBTSMPERM_Utils, &scope_200_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_200_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_201 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:else:",
  scope_201_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_200_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_200_entries[0], isActive_kcg_bool_kcg_false, &scope_201, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_200_entries[0], isActive_kcg_bool_kcg_true, &scope_202, 1, 2}
};
static const MappingScope scope_200 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:else:",
  scope_200_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1: */
static const MappingEntry scope_199_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_false, &scope_200, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_true, &scope_203, 1, 2}
};
static const MappingScope scope_199 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversionsIfBlock1:",
  scope_199_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversions */
static const MappingEntry scope_198_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_199, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_nvsbtsmperm", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_nvsbtsmperm_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions, q_nvsbtsmperm_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_198 = {
  "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ CAST_Int_to_Q_NVSBTSMPERM_TM_conversions",
  scope_198_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_NVROLL/ CAST_Int_to_D_NVROLL_TM_conversions */
static const MappingEntry scope_197_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_nvroll", NULL, sizeof(D_NVROLL), offsetof(outC_CAST_Int_to_D_NVROLL_TM_conversions, d_nvroll), &_Type_D_NVROLL_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_197 = {
  "TM_conversions::CAST_Int_to_D_NVROLL/ CAST_Int_to_D_NVROLL_TM_conversions",
  scope_197_entries, 6,
};

/* TM_conversions::CAST_Int_to_V_NVREL/ CAST_Int_to_V_NVREL_TM_conversions */
static const MappingEntry scope_196_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvrel", NULL, sizeof(V_NVREL), offsetof(outC_CAST_Int_to_V_NVREL_TM_conversions, v_nvrel), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_196 = {
  "TM_conversions::CAST_Int_to_V_NVREL/ CAST_Int_to_V_NVREL_TM_conversions",
  scope_196_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVUNFIT/ CAST_Int_to_V_NVUNFIT_TM_conversions */
static const MappingEntry scope_195_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvunfit", NULL, sizeof(V_NVUNFIT), offsetof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions, v_nvunfit), &_Type_V_NVUNFIT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_195 = {
  "TM_conversions::CAST_Int_to_V_NVUNFIT/ CAST_Int_to_V_NVUNFIT_TM_conversions",
  scope_195_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVONSIGHT/ CAST_Int_to_V_NVONSIGHT_TM_conversions */
static const MappingEntry scope_194_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvonsight", NULL, sizeof(V_NVONSIGHT), offsetof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions, v_nvonsight), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_194 = {
  "TM_conversions::CAST_Int_to_V_NVONSIGHT/ CAST_Int_to_V_NVONSIGHT_TM_conversions",
  scope_194_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVSTFF/ CAST_Int_to_V_NVSTFF_TM_conversions */
static const MappingEntry scope_193_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvstff", NULL, sizeof(V_NVSTFF), offsetof(outC_CAST_Int_to_V_NVSTFF_TM_conversions, v_nvstff), &_Type_V_NVSTFF_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_193 = {
  "TM_conversions::CAST_Int_to_V_NVSTFF/ CAST_Int_to_V_NVSTFF_TM_conversions",
  scope_193_entries, 8,
};

/* TM_conversions::CAST_Int_to_V_NVSHUNT/ CAST_Int_to_V_NVSHUNT_TM_conversions */
static const MappingEntry scope_192_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_nvshunt", NULL, sizeof(V_NVSHUNT), offsetof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions, v_nvshunt), &_Type_V_NVSHUNT_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_192 = {
  "TM_conversions::CAST_Int_to_V_NVSHUNT/ CAST_Int_to_V_NVSHUNT_TM_conversions",
  scope_192_entries, 8,
};

/* TM_conversions::CAST_Int_to_D_VALIDNV/ CAST_Int_to_D_VALIDNV_TM_conversions */
static const MappingEntry scope_191_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_validnv", NULL, sizeof(D_VALIDNV), offsetof(outC_CAST_Int_to_D_VALIDNV_TM_conversions, d_validnv), &_Type_D_VALIDNV_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_191 = {
  "TM_conversions::CAST_Int_to_D_VALIDNV/ CAST_Int_to_D_VALIDNV_TM_conversions",
  scope_191_entries, 6,
};

/* TM_lib_internal::C_P003V1_unflatten_sections/ C_P003V1_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_190_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_us_array 1", &iter_mapwi_32, sizeof(outC_C_P003V1_us_array_TM_lib_internal), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L1), &_Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_437, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_32_Utils, NULL, NULL, &scope_437, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_32_32), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_32_32_Utils, NULL, NULL, &scope_500, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10240), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, _L9), &_Type_array__10240_Utils, NULL, NULL, &scope_435, 1, 6},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_unflatten_sections_TM_lib_internal, sections), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 8}
};
static const MappingScope scope_190 = {
  "TM_lib_internal::C_P003V1_unflatten_sections/ C_P003V1_unflatten_sections_TM_lib_internal",
  scope_190_entries, 9,
};

/* TA_Lib_internal::Update_SP_per_LRBG/ Update_SP_per_LRBG_TA_Lib_internal */
static const MappingEntry scope_189_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "SpeedProfile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, SpeedProfile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 25},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewSpeedProfile 1", NULL, sizeof(outC_FindStartOfNewSpeedProfile_TA_Lib_internal), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_318, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG_loop 1", &iter_foldi_33, sizeof(outC_Update_SP_per_LRBG_loop_TA_Lib_internal), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_317, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L14), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(array__10596), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L15), &_Type_array__10596_Utils, NULL, NULL, &scope_494, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L23), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L24), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L25), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L26), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L27), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L30), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(array__10608), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L34), &_Type_array__10608_Utils, NULL, NULL, &scope_498, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L35), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L39", NULL, sizeof(array__10416), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L39), &_Type_array__10416_Utils, NULL, NULL, &scope_451, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L41", NULL, sizeof(array__10611), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L41), &_Type_array__10611_Utils, NULL, NULL, &scope_499, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L45", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L45), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L46", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L46), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int_33), offsetof(outC_Update_SP_per_LRBG_TA_Lib_internal, _L9), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 4}
};
static const MappingScope scope_189 = {
  "TA_Lib_internal::Update_SP_per_LRBG/ Update_SP_per_LRBG_TA_Lib_internal",
  scope_189_entries, 26,
};

/* TA_SSP::Convert_P27_to_DistanceProfile/ _17_Convert_P27_to_DistancePr_TA_SSP */
static const MappingEntry scope_188_entries[27] = {
  /* 0 */ { MAP_OUTPUT, "SpeedProfile", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, SpeedProfile), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 23},
  /* 1 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile_1st_section 3", NULL, sizeof(outC_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, Context_3), NULL, NULL, NULL, &scope_316, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile_loop 3", &iter_foldi_33, sizeof(outC__16_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _1_Context_3), NULL, NULL, NULL, &scope_315, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L62", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L62), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 13},
  /* 4 */ { MAP_LOCAL, "_L63", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L63), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L64", NULL, sizeof(array__10599), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L64), &_Type_array__10599_Utils, NULL, NULL, &scope_495, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L65", NULL, sizeof(Q_SCALE), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L65), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L66", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L66), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L67", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L67), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L68", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L68), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L69", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L69), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L70", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L70), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L71", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L71), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 4},
  /* 13 */ { MAP_LOCAL, "_L72", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L72), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_LOCAL, "_L73", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L73), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 2},
  /* 15 */ { MAP_LOCAL, "_L74", NULL, sizeof(array__10602), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L74), &_Type_array__10602_Utils, NULL, NULL, &scope_496, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L76", NULL, sizeof(array__10566), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L76), &_Type_array__10566_Utils, NULL, NULL, &scope_484, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L77", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L77), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L81", NULL, sizeof(array_int_33), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L81), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L82", NULL, sizeof(array_int_33), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L82), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L83", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L83), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L84", NULL, sizeof(array__10437), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L84), &_Type_array__10437_Utils, NULL, NULL, &scope_455, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L85", NULL, sizeof(array__10605), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L85), &_Type_array__10605_Utils, NULL, NULL, &scope_497, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L86", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, _L86), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 22},
  /* 24 */ { MAP_OUTPUT, "section1", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, section1), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 26},
  /* 25 */ { MAP_OUTPUT, "section1_delay", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, section1_delay), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 25},
  /* 26 */ { MAP_OUTPUT, "v_static_section1", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC__17_Convert_P27_to_DistancePr_TA_SSP, v_static_section1), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_188 = {
  "TA_SSP::Convert_P27_to_DistanceProfile/ _17_Convert_P27_to_DistancePr_TA_SSP",
  scope_188_entries, 27,
};

/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter/ MoveSPSectionsToNewLRBGafter_TA_Lib_internal */
static const MappingEntry scope_187_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, ProfileOut), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantSPForNewLRBG 1", NULL, sizeof(outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_314, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop 1", &iter_foldi_33, sizeof(outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_313, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_33), offsetof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal, _L6), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 7}
};
static const MappingScope scope_187 = {
  "TA_Lib_internal::MoveSPSectionsToNewLRBGafter/ MoveSPSectionsToNewLRBGafter_TA_Lib_internal",
  scope_187_entries, 9,
};

/* TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2 */
static const MappingEntry scope_186_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_section_out", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, P027V1_OBU_section_out), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 14},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 1", NULL, sizeof(outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_310, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_72, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_Metadata_L2 1", NULL, sizeof(outC_T_Decode_Metadata_L2_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_309, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L172", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L172), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L173", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L173), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L174), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L175", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L175), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L177", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L177), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_454, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L179), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_186 = {
  "TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2",
  scope_186_entries, 15,
};

/* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP/ MRSP_Determine_LengthOfTa_TA_MRSP */
static const MappingEntry scope_185_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L10), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, _L3), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 2},
  /* 8 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_OUTPUT, "length", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_LengthOfTa_TA_MRSP, length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_185 = {
  "TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP/ MRSP_Determine_LengthOfTa_TA_MRSP",
  scope_185_entries, 10,
};

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1/ _19_MRSP_SplitAndReverseSSP_L_TA_MRSP */
static const MappingEntry scope_184_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_reverse_cat_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, SSP_reverse_cat_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 1 */ { MAP_OUTPUT, "SSP_reverse_t_cat_out", NULL, sizeof(SSP_t_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, SSP_reverse_t_cat_out), &_Type_SSP_t_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_463, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2 1", &iter_map_33, sizeof(outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_308, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, _L18), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L35", NULL, sizeof(array_int_33), offsetof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP, _L35), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 3}
};
static const MappingScope scope_184 = {
  "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1/ _19_MRSP_SplitAndReverseSSP_L_TA_MRSP",
  scope_184_entries, 6,
};

/* TA_MRSP::MRSP_BuildTargetList_LOOP/ MRSP_BuildTargetList_LOOP_TA_MRSP */
static const MappingEntry scope_183_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "SSP_Matrix_out", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, SSP_Matrix_out), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 8},
  /* 1 */ { MAP_OUTPUT, "SSP_list_out", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, SSP_list_out), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 9},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_FindMax_of_all_t_cats 1", NULL, sizeof(outC_MRSP_FindMax_of_all_t_cats_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_306, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat 1", NULL, sizeof(outC_MRSP_Find_First_in_each_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_305, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix 1", NULL, sizeof(outC_MRSP_RemoveLargestFromSSP_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _2_Context_1), NULL, NULL, NULL, &scope_307, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L1), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L2), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_indexed_targets_list_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L3), &_Type_SSP_t_indexed_targets_list_t_TA_MRSP_Utils, NULL, NULL, &scope_470, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L4), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP, _L5), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 7}
};
static const MappingScope scope_183 = {
  "TA_MRSP::MRSP_BuildTargetList_LOOP/ MRSP_BuildTargetList_LOOP_TA_MRSP",
  scope_183_entries, 10,
};

/* TA_MRSP::MRSP_Determine_MRS/ MRSP_Determine_MRS_TA_MRSP */
static const MappingEntry scope_182_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "MRS", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, MRS), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_DetermineRelevantSpeedperCat 1", &iter_map_11, sizeof(outC__20_MRSP_DetermineRelevantSpe_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_302, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_Lowest_Speed 1", &iter_foldi_11, sizeof(outC_MRSP_Determine_Lowest_Speed_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_303, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_int_11), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L11), &_Type_array_int_11_Utils, NULL, NULL, &scope_488, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L3), &_Type_SSP_t_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L4), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_11), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L5), &_Type_array_int_11_Utils, NULL, NULL, &scope_488, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Determine_MRS_TA_MRSP, _L8), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_182 = {
  "TA_MRSP::MRSP_Determine_MRS/ MRSP_Determine_MRS_TA_MRSP",
  scope_182_entries, 9,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:then: */
static const MappingEntry scope_181_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_233_IfBlock1), &_Type_Q_DIR_Utils, &scope_175_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L5_234_IfBlock1), &_Type_kcg_bool_Utils, &scope_175_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_181 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:then:",
  scope_181_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:then: */
static const MappingEntry scope_180_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_226_IfBlock1), &_Type_Q_DIR_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L5_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_180 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:then:",
  scope_180_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:then: */
static const MappingEntry scope_179_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_230_IfBlock1), &_Type_Q_DIR_Utils, &scope_177_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_231_IfBlock1), &_Type_kcg_bool_Utils, &scope_177_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_179 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:then:",
  scope_179_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:else: */
static const MappingEntry scope_178_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_229_IfBlock1), &_Type_kcg_bool_Utils, &scope_177_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_228_IfBlock1), &_Type_Q_DIR_Utils, &scope_177_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_178 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:else:",
  scope_178_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else: */
static const MappingEntry scope_177_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _27_else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_177_entries[0], isActive_kcg_bool_kcg_false, &scope_178, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_177_entries[0], isActive_kcg_bool_kcg_true, &scope_179, 1, 2}
};
static const MappingScope scope_177 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:else:",
  scope_177_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else: */
static const MappingEntry scope_176_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _32_else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_false, &scope_177, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_true, &scope_180, 1, 2}
};
static const MappingScope scope_176 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:else:",
  scope_176_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1: */
static const MappingEntry scope_175_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _25_IfBlock1_clock_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_175_entries[0], isActive_kcg_bool_kcg_false, &scope_176, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_175_entries[0], isActive_kcg_bool_kcg_true, &scope_181, 1, 2}
};
static const MappingScope scope_175 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/IfBlock1:",
  scope_175_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/ */
static const MappingEntry scope_174_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_175, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L12_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L13_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _24_error_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_dir_2), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_dir_in_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_174 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 2/",
  scope_174_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 3/ */
static const MappingEntry scope_173_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L10_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L11_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L12_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L9_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P015_compr_onboard_TM_conversions, n_iter_3), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_173 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 3/",
  scope_173_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:then: */
static const MappingEntry scope_172_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_222_IfBlock1), &_Type_Q_SCALE_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_223_IfBlock1), &_Type_kcg_bool_Utils, &scope_166_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_172 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:then:",
  scope_172_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:then: */
static const MappingEntry scope_171_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_2_IfBlock1), &_Type_Q_SCALE_Utils, &scope_167_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_167_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_171 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:then:",
  scope_171_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:then: */
static const MappingEntry scope_170_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_220_IfBlock1), &_Type_Q_SCALE_Utils, &scope_168_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_168_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_170 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:then:",
  scope_170_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:else: */
static const MappingEntry scope_169_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_219_IfBlock1), &_Type_Q_SCALE_Utils, &scope_168_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_2_IfBlock1), &_Type_kcg_bool_Utils, &scope_168_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_169 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:else:",
  scope_169_entries, 2,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else: */
static const MappingEntry scope_168_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_168_entries[0], isActive_kcg_bool_kcg_false, &scope_169, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_168_entries[0], isActive_kcg_bool_kcg_true, &scope_170, 1, 2}
};
static const MappingScope scope_168 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:else:",
  scope_168_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else: */
static const MappingEntry scope_167_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _21_else_clock_2_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_167_entries[0], isActive_kcg_bool_kcg_false, &scope_168, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_167_entries[0], isActive_kcg_bool_kcg_true, &scope_171, 1, 2}
};
static const MappingScope scope_167 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:else:",
  scope_167_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1: */
static const MappingEntry scope_166_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, IfBlock1_clock_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_166_entries[0], isActive_kcg_bool_kcg_false, &scope_167, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_166_entries[0], isActive_kcg_bool_kcg_true, &scope_172, 1, 2}
};
static const MappingScope scope_166 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/IfBlock1:",
  scope_166_entries, 3,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/ */
static const MappingEntry scope_165_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_166, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_217), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, error_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_scale_2), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, q_scale_in_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_165 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 2/",
  scope_165_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 2/ */
static const MappingEntry scope_164_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L1_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L2_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L3_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L4_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L5_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P015_compr_onboard_TM_conversions, nid_packet_2), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_164 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 2/",
  scope_164_entries, 6,
};

/* TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversions */
static const MappingEntry scope_163_entries[81] = {
  /* 0 */ { MAP_OUTPUT, "P015_onboard", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, P015_onboard), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 80},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_DP 2", NULL, sizeof(outC_CAST_Int_to_D_DP_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _14_Context_2), NULL, NULL, NULL, &scope_264, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC 2", NULL, sizeof(outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _3_Context_2), NULL, NULL, NULL, &scope_298, 1, 16},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_OL 2", NULL, sizeof(outC_CAST_Int_to_D_OL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _16_Context_2), NULL, NULL, NULL, &scope_265, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC 2", NULL, sizeof(outC_CAST_Int_to_D_SECTIONTIME_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, Context_2), NULL, NULL, NULL, &scope_300, 1, 20},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_STARTOL 2", NULL, sizeof(outC_CAST_Int_to_D_STARTOL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _2_Context_2), NULL, NULL, NULL, &scope_299, 1, 17},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_ENDSECTION 2", NULL, sizeof(outC_CAST_Int_to_L_ENDSECTION_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _5_Context_2), NULL, NULL, NULL, &scope_296, 1, 13},
  /* 7 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 2", NULL, 0, 0, NULL, NULL, NULL, &scope_164, 1, 12},
  /* 8 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 3", NULL, 0, 0, NULL, NULL, NULL, &scope_173, 1, 18},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_DANGERPOINT 2", NULL, sizeof(outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _13_Context_2), NULL, NULL, NULL, &scope_281, 1, 7},
  /* 10 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 2", NULL, 0, 0, NULL, NULL, NULL, &scope_174, 1, 19},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_ENDTIMER 2", NULL, sizeof(outC_CAST_Int_to_Q_ENDTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _7_Context_2), NULL, NULL, NULL, &scope_289, 1, 10},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_OVERLAP 2", NULL, sizeof(outC_CAST_Int_to_Q_OVERLAP_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _15_Context_2), NULL, NULL, NULL, &scope_269, 1, 5},
  /* 13 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 2", NULL, 0, 0, NULL, NULL, NULL, &scope_165, 1, 14},
  /* 14 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_SECTIONTIMER 2", NULL, sizeof(outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _11_Context_2), NULL, NULL, NULL, &scope_275, 1, 6},
  /* 15 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_ENDTIMER 2", NULL, sizeof(outC_CAST_Int_to_T_ENDTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _12_Context_2), NULL, NULL, NULL, &scope_267, 1, 3},
  /* 16 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_LOA 2", NULL, sizeof(outC_CAST_Int_to_T_LOA_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _10_Context_2), NULL, NULL, NULL, &scope_287, 1, 8},
  /* 17 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_OL 2", NULL, sizeof(outC_CAST_Int_to_T_OL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _8_Context_2), NULL, NULL, NULL, &scope_288, 1, 9},
  /* 18 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_SECTIONTIMER 1", NULL, sizeof(outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_301, 1, 21},
  /* 19 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_LOA 2", NULL, sizeof(outC_CAST_Int_to_V_LOA_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _9_Context_2), NULL, NULL, NULL, &scope_266, 1, 2},
  /* 20 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_RELEASEDP 2", NULL, sizeof(outC_CAST_Int_to_V_RELEASEDP_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _6_Context_2), NULL, NULL, NULL, &scope_295, 1, 11},
  /* 21 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_RELEASEOL 2", NULL, sizeof(outC_CAST_Int_to_V_RELEASEOL_TM_conversions), offsetof(outC_C_P015_compr_onboard_TM_conversions, _4_Context_2), NULL, NULL, NULL, &scope_297, 1, 15},
  /* 22 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_unflatten_sections 1", NULL, sizeof(outC_C_P015_unflatten_sections_TM_lib_internal), offsetof(outC_C_P015_compr_onboard_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_268, 1, 4},
  /* 23 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 67},
  /* 24 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L101), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 68},
  /* 25 */ { MAP_LOCAL, "_L102", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L102), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_418, 1, 62},
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
  /* 43 */ { MAP_LOCAL, "_L120", NULL, sizeof(array_int_128), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L120), &_Type_array_int_128_Utils, NULL, NULL, &scope_416, 1, 44},
  /* 44 */ { MAP_LOCAL, "_L121", NULL, sizeof(T_LOA), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L121), &_Type_T_LOA_Utils, NULL, NULL, NULL, 1, 43},
  /* 45 */ { MAP_LOCAL, "_L122", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L122), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 42},
  /* 46 */ { MAP_LOCAL, "_L123", NULL, sizeof(T_OL), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L123), &_Type_T_OL_Utils, NULL, NULL, NULL, 1, 41},
  /* 47 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L124), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 48 */ { MAP_LOCAL, "_L125", NULL, sizeof(array_int_6), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L125), &_Type_array_int_6_Utils, NULL, NULL, &scope_415, 1, 39},
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
  /* 61 */ { MAP_LOCAL, "_L138", NULL, sizeof(array_int_15), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L138), &_Type_array_int_15_Utils, NULL, NULL, &scope_383, 1, 26},
  /* 62 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L139), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 63 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L140), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76},
  /* 64 */ { MAP_LOCAL, "_L141", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L141), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_418, 1, 77},
  /* 65 */ { MAP_LOCAL, "_L142", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L142), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 78},
  /* 66 */ { MAP_LOCAL, "_L143", NULL, sizeof(T_SECTIONTIMER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L143), &_Type_T_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 79},
  /* 67 */ { MAP_LOCAL, "_L89", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L89), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 75},
  /* 68 */ { MAP_LOCAL, "_L90", NULL, sizeof(D_DP), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L90), &_Type_D_DP_Utils, NULL, NULL, NULL, 1, 74},
  /* 69 */ { MAP_LOCAL, "_L91", NULL, sizeof(D_OL), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L91), &_Type_D_OL_Utils, NULL, NULL, NULL, 1, 73},
  /* 70 */ { MAP_LOCAL, "_L92", NULL, sizeof(V_LOA), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L92), &_Type_V_LOA_Utils, NULL, NULL, NULL, 1, 72},
  /* 71 */ { MAP_LOCAL, "_L93", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L93), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 71},
  /* 72 */ { MAP_LOCAL, "_L94", NULL, sizeof(T_ENDTIMER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L94), &_Type_T_ENDTIMER_Utils, NULL, NULL, NULL, 1, 70},
  /* 73 */ { MAP_LOCAL, "_L95", NULL, sizeof(N_ITER), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L95), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 69},
  /* 74 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L96), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 63},
  /* 75 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L97), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 64},
  /* 76 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L98), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 65},
  /* 77 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_C_P015_compr_onboard_TM_conversions, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 66},
  /* 78 */ { MAP_LOCAL, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P015_compr_onboard_TM_conversions, n_iter), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 22},
  /* 79 */ { MAP_LOCAL, "nid_packet_ok", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_compr_onboard_TM_conversions, nid_packet_ok), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 80 */ { MAP_LOCAL, "sections", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P015_compr_onboard_TM_conversions, sections), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_418, 1, 24}
};
static const MappingScope scope_163 = {
  "TM_conversions::C_P015_compr_onboard/ C_P015_compr_onboard_TM_conversions",
  scope_163_entries, 81,
};

/* TA_Lib_internal::FindStartOfNewGradientProfile/ FindStartOfNewGradientProfile_TA_Lib_internal */
static const MappingEntry scope_162_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewGradientProfile_LOOP 1", &iter_foldwi_33, sizeof(outC_FindStartOfNewGradientPro_TA_Lib_internal), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_263, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L198", NULL, sizeof(array_int_33), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L198), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L2), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L93", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L93), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L98", NULL, sizeof(array__10560), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L98), &_Type_array__10560_Utils, NULL, NULL, &scope_482, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewGradientProfile_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_162 = {
  "TA_Lib_internal::FindStartOfNewGradientProfile/ FindStartOfNewGradientProfile_TA_Lib_internal",
  scope_162_entries, 11,
};

/* TA_Lib_internal::Update_GP_per_LRBG_loop/ Update_GP_per_LRBG_loop_TA_Lib_internal */
static const MappingEntry scope_161_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, GradientProfile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L15), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_431, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L19), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L20), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L6), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_161 = {
  "TA_Lib_internal::Update_GP_per_LRBG_loop/ Update_GP_per_LRBG_loop_TA_Lib_internal",
  scope_161_entries, 9,
};

/* TA_Gradient::Convert_P21_to_DistanceProfile_loop/ Convert_P21_to_DistancePr_TA_Gradient */
static const MappingEntry scope_160_entries[25] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, GradientProfile), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 24},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_Q_GDIR 2", NULL, sizeof(outC_EVAL_Q_GDIR_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_2), NULL, NULL, NULL, &scope_262, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 3", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_3), NULL, NULL, NULL, &scope_256, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 4", NULL, sizeof(outC_Normalize_Distance_d_inte_TA_Lib_internal), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, Context_4), NULL, NULL, NULL, &scope_256, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L121", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L121), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_476, 1, 23},
  /* 5 */ { MAP_LOCAL, "_L122", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L122), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 22},
  /* 6 */ { MAP_LOCAL, "_L123", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L123), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 21},
  /* 7 */ { MAP_LOCAL, "_L124", NULL, sizeof(G_A), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L124), &_Type_G_A_Utils, NULL, NULL, NULL, 1, 20},
  /* 8 */ { MAP_LOCAL, "_L125", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L125), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 19},
  /* 9 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L126), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 10 */ { MAP_LOCAL, "_L127", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L127), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L128", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L128), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_476, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L129", NULL, sizeof(Q_GDIR), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L129), &_Type_Q_GDIR_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_bool), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L130), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L131), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L132), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L133", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L133), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L134), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L135", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L135), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L136", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L136), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_431, 1, 8},
  /* 20 */ { MAP_LOCAL, "_L137", NULL, sizeof(D_GRADIENT), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L137), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 7},
  /* 21 */ { MAP_LOCAL, "_L138", NULL, sizeof(D_GRADIENT), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L138), &_Type_D_GRADIENT_Utils, NULL, NULL, NULL, 1, 6},
  /* 22 */ { MAP_LOCAL, "_L139", NULL, sizeof(Q_SCALE), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L139), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_LOCAL, "_L140", NULL, sizeof(P021_section_enum_T_TM), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L140), &_Type_P021_section_enum_T_TM_Utils, NULL, NULL, &scope_475, 1, 4},
  /* 24 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_int), offsetof(outC_Convert_P21_to_DistancePr_TA_Gradient, _L141), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_160 = {
  "TA_Gradient::Convert_P21_to_DistanceProfile_loop/ Convert_P21_to_DistancePr_TA_Gradient",
  scope_160_entries, 25,
};

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG/ FindFirstRelevantGPForNewLRBG_TA_Lib_internal */
static const MappingEntry scope_159_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop 1", &iter_foldwi_33, sizeof(outC_FindFirstRelevantGPForNew_TA_Lib_internal), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_255, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L169", NULL, sizeof(array__10560), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L169), &_Type_array__10560_Utils, NULL, NULL, &scope_482, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L93", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L93), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_159 = {
  "TA_Lib_internal::FindFirstRelevantGPForNewLRBG/ FindFirstRelevantGPForNewLRBG_TA_Lib_internal",
  scope_159_entries, 10,
};

/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop/ MoveGPSectionsToNewLRBGaf_TA_Lib_internal */
static const MappingEntry scope_158_entries[13] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, ProfileOut), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 12},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::NormalizePos 1", NULL, sizeof(outC_NormalizePos_TA_Lib_internal), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_254, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L6), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_431, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L7), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L8), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal, _L9), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_431, 1, 9}
};
static const MappingScope scope_158 = {
  "TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop/ MoveGPSectionsToNewLRBGaf_TA_Lib_internal",
  scope_158_entries, 13,
};

/* TM_lib_internal::C_P021_unflatten_sections/ C_P021_unflatten_sections_TM_lib_internal */
static const MappingEntry scope_157_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_us_array 1", &iter_mapwi_33, sizeof(outC_C_P021_us_array_TM_lib_internal), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_253, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_474, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_99_33), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L6), &_Type_array_int_99_33_Utils, NULL, NULL, &scope_481, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10537), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, _L9), &_Type_array__10537_Utils, NULL, NULL, &scope_476, 1, 6},
  /* 11 */ { MAP_OUTPUT, "sections", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P021_unflatten_sections_TM_lib_internal, sections), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_476, 1, 11}
};
static const MappingScope scope_157 = {
  "TM_lib_internal::C_P021_unflatten_sections/ C_P021_unflatten_sections_TM_lib_internal",
  scope_157_entries, 12,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_156_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_252, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_480, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_156 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_156_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_155_entries[25] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 24},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_250, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_251, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_478, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L38", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L38), &_Type_array_bool_30_Utils, NULL, NULL, &scope_479, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_LOCAL, "_L40", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L40), &_Type_array_bool_30_Utils, NULL, NULL, &scope_479, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_155 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_155_entries, 25,
};

/* MA_Request::op_RepeatReq/ op_RepeatReq_MA_Requestlinear::MemoryBasic 1/ */
static const MappingEntry scope_154_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, Memorized_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L4@mem", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L4_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 0, 1},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, _L5_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L6_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L7_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_154 = {
  "MA_Request::op_RepeatReq/ op_RepeatReq_MA_Requestlinear::MemoryBasic 1/",
  scope_154_entries, 6,
};

/* MA_Request::op_RepeatReq/ op_RepeatReq_MA_Request */
static const MappingEntry scope_153_entries[14] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_INSTANCE, "Safe_MOD_int 1", NULL, sizeof(outC_Safe_MOD_int), offsetof(outC_op_RepeatReq_MA_Request, Context_1), NULL, NULL, NULL, &scope_249, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_CYCLOC), offsetof(outC_op_RepeatReq_MA_Request, _L4), &_Type_T_CYCLOC_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_RepeatReq_MA_Request, _L6), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_op_RepeatReq_MA_Request, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_RepeatReq_MA_Request, _L9), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_154, 1, 3},
  /* 12 */ { MAP_LOCAL, "setRepeater@mem", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, rem_setRepeater), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 13 */ { MAP_OUTPUT, "trigger", NULL, sizeof(kcg_bool), offsetof(outC_op_RepeatReq_MA_Request, trigger), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_153 = {
  "MA_Request::op_RepeatReq/ op_RepeatReq_MA_Request",
  scope_153_entries, 14,
};

/* MA_Request::op_3_8_2_3_b/ op_3_8_2_3_b_MA_Request */
static const MappingEntry scope_152_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MA_Request::CompareSectionTimer 1", &iter_fold_10, sizeof(outC_CompareSectionTimer_MA_Request), offsetof(outC_op_3_8_2_3_b_MA_Request, Context_1), NULL, NULL, NULL, &scope_248, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_op_3_8_2_3_b_MA_Request, _L1), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(_4_MovementAuthoritySectionlist_t_TrackAtlasTypes), offsetof(outC_op_3_8_2_3_b_MA_Request, _L11), &_Type__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_390, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_op_3_8_2_3_b_MA_Request, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_op_3_8_2_3_b_MA_Request, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_b_MA_Request, _L6), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_b_MA_Request, _L7), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "triggerMA", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_b_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_152 = {
  "MA_Request::op_3_8_2_3_b/ op_3_8_2_3_b_MA_Request",
  scope_152_entries, 11,
};

/* MA_Request::op_3_8_2_3_a/ op_3_8_2_3_a_MA_Request */
static const MappingEntry scope_151_entries[21] = {
  /* 0 */ { MAP_INSTANCE, "Safe_DIV_real 1", NULL, sizeof(outC_Safe_DIV_real), offsetof(outC_op_3_8_2_3_a_MA_Request, Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Safe_DIV_real 2", NULL, sizeof(outC_Safe_DIV_real), offsetof(outC_op_3_8_2_3_a_MA_Request, Context_2), NULL, NULL, NULL, &scope_247, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_op_3_8_2_3_a_MA_Request, _L1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 5},
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
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L4), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_400, 1, 2},
  /* 16 */ { MAP_LOCAL, "_L5", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L5), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_394, 1, 6},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L7), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_op_3_8_2_3_a_MA_Request, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_op_3_8_2_3_a_MA_Request, _L9), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_398, 1, 9},
  /* 20 */ { MAP_OUTPUT, "triggerMA", NULL, sizeof(kcg_bool), offsetof(outC_op_3_8_2_3_a_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20}
};
static const MappingScope scope_151 = {
  "MA_Request::op_3_8_2_3_a/ op_3_8_2_3_a_MA_Request",
  scope_151_entries, 21,
};

/* TM::Read_P057/ Read_P057_TM */
static const MappingEntry scope_150_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P057_OBU_out", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Read_P057_TM, P057_OBU_out), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P057_compr_onboard 1", NULL, sizeof(outC_C_P057_compr_onboard_TM_conversions), offsetof(outC_Read_P057_TM, _1_Context_1), NULL, NULL, NULL, &scope_237, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P057_TM, Context_1), NULL, NULL, NULL, &scope_72, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Read_P057_TM, _L166), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P057_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P057_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P057_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P057_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 3},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P057_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_150 = {
  "TM::Read_P057/ Read_P057_TM",
  scope_150_entries, 9,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_149_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_138), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_136), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_137), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_149 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_149_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_148_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_134_IfBlock1), &_Type_Q_DIR_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_135_IfBlock1), &_Type_kcg_bool_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_148 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_148_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_147_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_127_IfBlock1), &_Type_Q_DIR_Utils, &scope_143_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_143_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_147 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_147_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_146_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_131_IfBlock1), &_Type_Q_DIR_Utils, &scope_144_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_132_IfBlock1), &_Type_kcg_bool_Utils, &scope_144_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_146 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_146_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_145_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_130_IfBlock1), &_Type_kcg_bool_Utils, &scope_144_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_129_IfBlock1), &_Type_Q_DIR_Utils, &scope_144_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_145 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_145_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_144_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _28_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_144_entries[0], isActive_kcg_bool_kcg_false, &scope_145, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_144_entries[0], isActive_kcg_bool_kcg_true, &scope_146, 1, 2}
};
static const MappingScope scope_144 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_144_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_143_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _33_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_143_entries[0], isActive_kcg_bool_kcg_false, &scope_144, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_143_entries[0], isActive_kcg_bool_kcg_true, &scope_147, 1, 2}
};
static const MappingScope scope_143 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_143_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_142_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _26_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_false, &scope_143, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_true, &scope_148, 1, 2}
};
static const MappingScope scope_142 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_142_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_141_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_142, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _24__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _25_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_141 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_141_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_140_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L9_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_140 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/",
  scope_140_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_139_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_122_IfBlock1), &_Type_Q_SCALE_Utils, &scope_133_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_123_IfBlock1), &_Type_kcg_bool_Utils, &scope_133_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_139 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_139_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_138_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_138 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_138_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_137_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_120_IfBlock1), &_Type_Q_SCALE_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_137 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_137_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_136_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1_119_IfBlock1), &_Type_Q_SCALE_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_136 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_136_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_135_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_kcg_bool_kcg_false, &scope_136, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_kcg_bool_kcg_true, &scope_137, 1, 2}
};
static const MappingScope scope_135 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_135_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_134_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _21_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_false, &scope_135, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_138, 1, 2}
};
static const MappingScope scope_134 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_134_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_133_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_false, &scope_134, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_139, 1, 2}
};
static const MappingScope scope_133 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_133_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_132_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_132 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_132_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2 */
static const MappingEntry scope_131_entries[83] = {
  /* 0 */ { MAP_OUTPUT, "P003V1_onboard", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, P003V1_onboard), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 82},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVOVTRP 1", NULL, sizeof(outC_CAST_Int_to_D_NVOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _7_Context_1), NULL, NULL, NULL, &scope_206, 1, 15},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVPOTRP 2", NULL, sizeof(outC_CAST_Int_to_D_NVPOTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_214, 1, 18},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVROLL 1", NULL, sizeof(outC_CAST_Int_to_D_NVROLL_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _11_Context_1), NULL, NULL, NULL, &scope_197, 1, 11},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_NVSTFF 1", NULL, sizeof(outC_CAST_Int_to_D_NVSTFF_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_236, 1, 23},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_VALIDNV 1", NULL, sizeof(outC_CAST_Int_to_D_VALIDNV_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _17_Context_1), NULL, NULL, NULL, &scope_191, 1, 5},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_NVCONTACT 1", NULL, sizeof(outC_CAST_Int_to_M_NVCONTACT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _4_Context_1), NULL, NULL, NULL, &scope_215, 1, 19},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_NVDERUN 1", NULL, sizeof(outC_CAST_Int_to_M_NVDERUN_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_224, 1, 21},
  /* 8 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_149, 1, 4},
  /* 9 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_140, 1, 2},
  /* 10 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_141, 1, 3},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES 1", NULL, sizeof(outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_230, 1, 22},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVEMRRLS 1", NULL, sizeof(outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _5_Context_1), NULL, NULL, NULL, &scope_208, 1, 17},
  /* 13 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_NVSBTSMPERM 1", NULL, sizeof(outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _10_Context_1), NULL, NULL, NULL, &scope_198, 1, 12},
  /* 14 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_132, 1, 0},
  /* 15 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_NVCONTACT 1", NULL, sizeof(outC_CAST_Int_to_T_NVCONTACT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_223, 1, 20},
  /* 16 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_NVOVTRP 1", NULL, sizeof(outC_CAST_Int_to_T_NVOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _6_Context_1), NULL, NULL, NULL, &scope_207, 1, 16},
  /* 17 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVALLOWOVTRP 1", NULL, sizeof(outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _9_Context_1), NULL, NULL, NULL, &scope_204, 1, 13},
  /* 18 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVONSIGHT 1", NULL, sizeof(outC_CAST_Int_to_V_NVONSIGHT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _14_Context_1), NULL, NULL, NULL, &scope_194, 1, 8},
  /* 19 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVREL 1", NULL, sizeof(outC_CAST_Int_to_V_NVREL_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _12_Context_1), NULL, NULL, NULL, &scope_196, 1, 10},
  /* 20 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSHUNT 1", NULL, sizeof(outC_CAST_Int_to_V_NVSHUNT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _16_Context_1), NULL, NULL, NULL, &scope_192, 1, 6},
  /* 21 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSTFF 1", NULL, sizeof(outC_CAST_Int_to_V_NVSTFF_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _15_Context_1), NULL, NULL, NULL, &scope_193, 1, 7},
  /* 22 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVSUPOVTRP 2", NULL, sizeof(outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _8_Context_2), NULL, NULL, NULL, &scope_205, 1, 14},
  /* 23 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_NVUNFIT 1", NULL, sizeof(outC_CAST_Int_to_V_NVUNFIT_TM_conversions), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _13_Context_1), NULL, NULL, NULL, &scope_195, 1, 9},
  /* 24 */ { MAP_INSTANCE, "TM_lib_internal::C_P003V1_unflatten_sections 1", NULL, sizeof(outC_C_P003V1_unflatten_sections_TM_lib_internal), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _18_Context_1), NULL, NULL, NULL, &scope_190, 1, 1},
  /* 25 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_24), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L1), &_Type_array_int_24_Utils, NULL, NULL, &scope_438, 1, 33},
  /* 26 */ { MAP_LOCAL, "_L10", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L10), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 28},
  /* 27 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 27},
  /* 28 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_int_32), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L13), &_Type_array_int_32_Utils, NULL, NULL, &scope_437, 1, 25},
  /* 30 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 31 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 32 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 33 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 34},
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
  /* 63 */ { MAP_LOCAL, "_L5", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L5), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 31},
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
  /* 81 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 29},
  /* 82 */ { MAP_LOCAL, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2, n_iter), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 24}
};
static const MappingScope scope_131 = {
  "TM_conversions_baseline2::C_P003V1_compr_onboard/ C_P003V1_compr_onboard_TM_conversions_baseline2",
  scope_131_entries, 83,
};

/* TA_SSP::Update_LRBG_only/ Update_LRBG_only_TA_SSP */
static const MappingEntry scope_130_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_only_TA_SSP, Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_only_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_only_TA_SSP, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_only_TA_SSP, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L34", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_SSP, _L34), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L35", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_SSP, _L35), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_only_TA_SSP, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_only_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 7}
};
static const MappingScope scope_130 = {
  "TA_SSP::Update_LRBG_only/ Update_LRBG_only_TA_SSP",
  scope_130_entries, 8,
};

/* TA_SSP::Update_SSP_only/ Update_SSP_only_TA_SSP */
static const MappingEntry scope_129_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG 1", NULL, sizeof(outC_Update_SP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_SSP_only_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_189, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile 1", NULL, sizeof(outC__17_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC_Update_SSP_only_TA_SSP, Context_1), NULL, NULL, NULL, &scope_188, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Update_SSP_only_TA_SSP, _L2), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_only_TA_SSP, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_only_TA_SSP, _L6), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L7), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, _L8), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 6},
  /* 10 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_only_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 10}
};
static const MappingScope scope_129 = {
  "TA_SSP::Update_SSP_only/ Update_SSP_only_TA_SSP",
  scope_129_entries, 11,
};

/* TA_SSP::Update_SSP_then_LRBG/ Update_SSP_then_LRBG_TA_SSP */
static const MappingEntry scope_128_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _2_Context_1), NULL, NULL, NULL, &scope_187, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG 1", NULL, sizeof(outC_Update_SP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_189, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile 1", NULL, sizeof(outC__17_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, Context_1), NULL, NULL, NULL, &scope_188, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L11), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 14},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L12), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L13), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L2), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L6), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 7},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L7), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L8), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, _L9), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 10},
  /* 16 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_SSP_then_LRBG_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 16}
};
static const MappingScope scope_128 = {
  "TA_SSP::Update_SSP_then_LRBG/ Update_SSP_then_LRBG_TA_SSP",
  scope_128_entries, 17,
};

/* TA_SSP::Update_LRBG_then_SSP/ Update_LRBG_then_SSP_TA_SSP */
static const MappingEntry scope_127_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Update_SP_per_LRBG 1", NULL, sizeof(outC_Update_SP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _2_Context_1), NULL, NULL, NULL, &scope_189, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::Convert_P27_to_DistanceProfile 1", NULL, sizeof(outC__17_Convert_P27_to_DistancePr_TA_SSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, Context_1), NULL, NULL, NULL, &scope_188, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L10), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L11), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 14},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(SSP_section_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L12), &_Type_SSP_section_t_TA_MRSP_Utils, NULL, NULL, &scope_450, 1, 15},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L13), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L2), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L7), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L8), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 7},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, _L9), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 12},
  /* 16 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Update_LRBG_then_SSP_TA_SSP, new_profile_out), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 16}
};
static const MappingScope scope_127 = {
  "TA_SSP::Update_LRBG_then_SSP/ Update_LRBG_then_SSP_TA_SSP",
  scope_127_entries, 17,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/ */
static const MappingEntry scope_126_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_455, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L68", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L68_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_457, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L69_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L70", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L70_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L71", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L71_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L75_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 6}
};
static const MappingScope scope_126 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/",
  scope_126_entries, 7,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_125_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _18__L4_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_119_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _19__L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_119_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_125 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_125_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_124_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _11__L3_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_124 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_124_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_123_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _15__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _16__L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_123 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_123_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_122_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _14__L1_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _13__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_122 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_122_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_121_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _12_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_false, &scope_122, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_true, &scope_123, 1, 2}
};
static const MappingScope scope_121 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_121_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_120_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _17_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_false, &scope_121, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_true, &scope_124, 1, 2}
};
static const MappingScope scope_120 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_120_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_119_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _10_IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_119_entries[0], isActive_kcg_bool_kcg_false, &scope_120, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_119_entries[0], isActive_kcg_bool_kcg_true, &scope_125, 1, 2}
};
static const MappingScope scope_119 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_119_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_118_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_119, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L12_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L13_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _9_error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_1_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_118 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_118_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_117_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _7__L2_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _8__L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_117 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_117_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_116_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_116 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_116_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_115_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _5__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_113_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_113_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_115 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_115_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_114_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _4__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_113_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_113_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_114 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_114_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_113_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_113_entries[0], isActive_kcg_bool_kcg_false, &scope_114, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_113_entries[0], isActive_kcg_bool_kcg_true, &scope_115, 1, 2}
};
static const MappingScope scope_113 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_113_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_112_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _6_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_false, &scope_113, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_true, &scope_116, 1, 2}
};
static const MappingScope scope_112 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_112_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_111_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_false, &scope_112, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_true, &scope_117, 1, 2}
};
static const MappingScope scope_111 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_111_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_110_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_111, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _3__L2_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _2__L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_1_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_110 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_110_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_109_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, nid_packet_1_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_109 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_109_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/ */
static const MappingEntry scope_108_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_body", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_OBU_body_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_457, 1, 2},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_109, 1, 3},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_118, 1, 5},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_110, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L10_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_457, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L14_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L15_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L16_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L18_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L20_1), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L21_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L22_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L24_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L25_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, _L28_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L29_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L30_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_5), offsetof(outC_Read_P027V1_TM_baseline2, _L6_1), &_Type_array_int_5_Utils, NULL, NULL, &scope_458, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L9_1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 10},
  /* 19 */ { MAP_OUTPUT, "meta_qdiff", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, meta_qdiff_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 20 */ { MAP_OUTPUT, "n_iter_sections", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, n_iter_sections_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_108 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/",
  scope_108_entries, 21,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2 */
static const MappingEntry scope_107_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 19},
  /* 1 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1_sections 1", &iter_mapwi_33, sizeof(outC_Read_P027V1_sections_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_186, 1, 0},
  /* 2 */ { MAP_EXPANDED, "TM_conversions_baseline2::C_P027V1_compr_onboard_body 1", NULL, 0, 0, NULL, NULL, NULL, &scope_108, 1, 2},
  /* 3 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_merge_body_sections 1", NULL, 0, 0, NULL, NULL, NULL, &scope_126, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_72, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L166", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L166), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_457, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L167), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L169", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L169), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L171", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L171), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L172", NULL, sizeof(array__10593), offsetof(outC_Read_P027V1_TM_baseline2, _L172), &_Type_array__10593_Utils, NULL, NULL, &scope_493, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L178", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L178), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L182", NULL, sizeof(array__10437), offsetof(outC_Read_P027V1_TM_baseline2, _L182), &_Type_array__10437_Utils, NULL, NULL, &scope_455, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L184", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L184), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L185", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L185), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L186", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L186), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 5},
  /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_TM_baseline2, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 4},
  /* 19 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_107 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2",
  scope_107_entries, 20,
};

/* TA_MRSP::MRSP_Determine_LengthOfTargetList/ _18_MRSP_Determine_LengthOfTa_TA_MRSP */
static const MappingEntry scope_106_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP 1", &iter_foldwi_363, sizeof(outC_MRSP_Determine_LengthOfTa_TA_MRSP), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_185, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L179", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L179), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L180), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L182), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L183", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L183), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, _L2), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 1},
  /* 7 */ { MAP_OUTPUT, "length", NULL, sizeof(kcg_int), offsetof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP, length), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_106 = {
  "TA_MRSP::MRSP_Determine_LengthOfTargetList/ _18_MRSP_Determine_LengthOfTa_TA_MRSP",
  scope_106_entries, 8,
};

/* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix/ MRSP_Split_And_Reverse_SS_TA_MRSP */
static const MappingEntry scope_105_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_reverse_matrix_out", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, SSP_reverse_matrix_out), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 5},
  /* 1 */ { MAP_OUTPUT, "SSP_reverse_t_matrix_out", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, SSP_reverse_t_matrix_out), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1 1", &iter_map_11, sizeof(outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_184, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, _L1), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(array_int_33_11), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, _L27), &_Type_array_int_33_11_Utils, NULL, NULL, &scope_464, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L51", NULL, sizeof(array__10459), offsetof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP, _L51), &_Type_array__10459_Utils, NULL, NULL, &scope_460, 1, 3}
};
static const MappingScope scope_105 = {
  "TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix/ MRSP_Split_And_Reverse_SS_TA_MRSP",
  scope_105_entries, 6,
};

/* TA_MRSP::MRSP_BuildTargetList/ MRSP_BuildTargetList_TA_MRSP */
static const MappingEntry scope_104_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SSP_list_out", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, SSP_list_out), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 5},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_BuildTargetList_LOOP 1", &iter_mapfold_363, sizeof(outC_MRSP_BuildTargetList_LOOP_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_183, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(array__10468), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L1), &_Type_array__10468_Utils, NULL, NULL, &scope_462, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L4), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_MRSP_BuildTargetList_TA_MRSP, _L5), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 4}
};
static const MappingScope scope_104 = {
  "TA_MRSP::MRSP_BuildTargetList/ MRSP_BuildTargetList_TA_MRSP",
  scope_104_entries, 6,
};

/* TA_MRSP::MRSP_Build_MRSP_LOOP/ MRSP_Build_MRSP_LOOP_TA_MRSP */
static const MappingEntry scope_103_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "MRSP_section_out", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, MRSP_section_out), &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_468, 1, 13},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_MRS 1", NULL, sizeof(outC_MRSP_Determine_MRS_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_182, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L211", NULL, sizeof(MRSP_section_t_TrackAtlasTypes), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L211), &_Type_MRSP_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_468, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L213", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L213), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L25", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L25), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L26), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(SSP_s_section_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L27), &_Type_SSP_s_section_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L792", NULL, sizeof(SSP_target_t_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L792), &_Type_SSP_target_t_TA_MRSP_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L976", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L976), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L977", NULL, sizeof(SSP_t_indexed_matrix_element_TA_MRSP), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, _L977), &_Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils, NULL, NULL, &scope_461, 1, 11},
  /* 13 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_103 = {
  "TA_MRSP::MRSP_Build_MRSP_LOOP/ MRSP_Build_MRSP_LOOP_TA_MRSP",
  scope_103_entries, 14,
};

/* TA_MA::MA_storage/ MA_storage_TA_MA */
static const MappingEntry scope_102_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Packet15_out", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_MA_storage_TA_MA, Packet15_out), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_MA_storage_TA_MA, _L1), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_MA_storage_TA_MA, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_OUTPUT, "vald_MA", NULL, sizeof(kcg_bool), offsetof(outC_MA_storage_TA_MA, vald_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_102 = {
  "TA_MA::MA_storage/ MA_storage_TA_MA",
  scope_102_entries, 4,
};

/* TM::Read_P015/ Read_P015_TM */
static const MappingEntry scope_101_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P015_OBU_out", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Read_P015_TM, P015_OBU_out), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P015_compr_onboard 1", NULL, sizeof(outC_C_P015_compr_onboard_TM_conversions), offsetof(outC_Read_P015_TM, _1_Context_1), NULL, NULL, NULL, &scope_163, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P015_TM, Context_1), NULL, NULL, NULL, &scope_72, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Read_P015_TM, _L166), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P015_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P015_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P015_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P015_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 3},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P015_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_101 = {
  "TM::Read_P015/ Read_P015_TM",
  scope_101_entries, 9,
};

/* TA_Lib_internal::EVAL_Q_OVERLAP/ EVAL_Q_OVERLAP_TA_Lib_internal */
static const MappingEntry scope_100_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_OVERLAP), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, _L1), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_OVERLAP), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, _L3), &_Type_Q_OVERLAP_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "q_dp_bool", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_OVERLAP_TA_Lib_internal, q_dp_bool), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_100 = {
  "TA_Lib_internal::EVAL_Q_OVERLAP/ EVAL_Q_OVERLAP_TA_Lib_internal",
  scope_100_entries, 4,
};

/* TA_Lib_internal::EVAL_V_Release/ EVAL_V_Release_TA_Lib_internal */
static const MappingEntry scope_99_entries[13] = {
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
static const MappingScope scope_99 = {
  "TA_Lib_internal::EVAL_V_Release/ EVAL_V_Release_TA_Lib_internal",
  scope_99_entries, 13,
};

/* TA_Lib_internal::EVAL_Q_DANGERPOINT/ EVAL_Q_DANGERPOINT_TA_Lib_internal */
static const MappingEntry scope_98_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, _L1), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, _L3), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "q_dp_bool", NULL, sizeof(kcg_bool), offsetof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal, q_dp_bool), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_98 = {
  "TA_Lib_internal::EVAL_Q_DANGERPOINT/ EVAL_Q_DANGERPOINT_TA_Lib_internal",
  scope_98_entries, 4,
};

/* TA_MA::DecodeMASection/ DecodeMASection_TA_MA */
static const MappingEntry scope_97_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "MA_section_out", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_DecodeMASection_TA_MA, MA_section_out), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_389, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_DecodeMASection_TA_MA, _L1), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_418, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_DecodeMASection_TA_MA, _L2), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_389, 1, 1}
};
static const MappingScope scope_97 = {
  "TA_MA::DecodeMASection/ DecodeMASection_TA_MA",
  scope_97_entries, 3,
};

/* TA_Lib_internal::EVAL_T_LOA/ EVAL_T_LOA_TA_Lib_internal */
static const MappingEntry scope_96_entries[11] = {
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
static const MappingScope scope_96 = {
  "TA_Lib_internal::EVAL_T_LOA/ EVAL_T_LOA_TA_Lib_internal",
  scope_96_entries, 11,
};

/* TA_MRSP::Eval_Q_SCALE/ Eval_Q_SCALE_TA_MRSP */
static const MappingEntry scope_95_entries[13] = {
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
static const MappingScope scope_95 = {
  "TA_MRSP::Eval_Q_SCALE/ Eval_Q_SCALE_TA_MRSP",
  scope_95_entries, 13,
};

/* TA_Lib_internal::Update_GP_per_LRBG/ Update_GP_per_LRBG_TA_Lib_internal */
static const MappingEntry scope_94_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "GradientdProfile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, GradientdProfile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewGradientProfile 1", NULL, sizeof(outC_FindStartOfNewGradientProfile_TA_Lib_internal), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_162, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG_loop 1", &iter_foldi_33, sizeof(outC_Update_GP_per_LRBG_loop_TA_Lib_internal), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_161, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L14), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L45", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L45), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(array__10560), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L47), &_Type_array__10560_Utils, NULL, NULL, &scope_482, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L5), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int_33), offsetof(outC_Update_GP_per_LRBG_TA_Lib_internal, _L9), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 4}
};
static const MappingScope scope_94 = {
  "TA_Lib_internal::Update_GP_per_LRBG/ Update_GP_per_LRBG_TA_Lib_internal",
  scope_94_entries, 9,
};

/* TA_Gradient::Convert_P21_to_DistanceProfile/ _21_Convert_P21_to_DistancePr_TA_Gradient */
static const MappingEntry scope_93_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "GradientProfile", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, GradientProfile), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 9},
  /* 1 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile_loop 1", &iter_foldi_33, sizeof(outC_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_160, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L63", NULL, sizeof(P021_OBU_T_TM), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L63), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L65", NULL, sizeof(Q_SCALE), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L65), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L71", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L71), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_476, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L73", NULL, sizeof(P021_OBU_T_TM), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L73), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L74", NULL, sizeof(array__10563), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L74), &_Type_array__10563_Utils, NULL, NULL, &scope_483, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L76", NULL, sizeof(array__10566), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L76), &_Type_array__10566_Utils, NULL, NULL, &scope_484, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L77", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L77), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L83", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC__21_Convert_P21_to_DistancePr_TA_Gradient, _L83), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 8}
};
static const MappingScope scope_93 = {
  "TA_Gradient::Convert_P21_to_DistanceProfile/ _21_Convert_P21_to_DistancePr_TA_Gradient",
  scope_93_entries, 10,
};

/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter/ MoveGPSectionsToNewLRBGafter_TA_Lib_internal */
static const MappingEntry scope_92_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, ProfileOut), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::FindFirstRelevantGPForNewLRBG 1", NULL, sizeof(outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_159, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop 1", &iter_foldi_33, sizeof(outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_158, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L2), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L4), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_33), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L5), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_33), offsetof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal, _L6), &_Type_array_int_33_Utils, NULL, NULL, &scope_463, 1, 7}
};
static const MappingScope scope_92 = {
  "TA_Lib_internal::MoveGPSectionsToNewLRBGafter/ MoveGPSectionsToNewLRBGafter_TA_Lib_internal",
  scope_92_entries, 9,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_91_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_120), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_118), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_119), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P021_compr_onboard_TM_conversions, nid_packet_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_91 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_91_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_90_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_116_IfBlock1), &_Type_Q_DIR_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_117_IfBlock1), &_Type_kcg_bool_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_90 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_90_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_19_IfBlock1), &_Type_Q_DIR_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_89 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_89_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_88_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_113_IfBlock1), &_Type_Q_DIR_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_114_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_88 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_88_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_87_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_112_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_111_IfBlock1), &_Type_Q_DIR_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_87 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_87_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_86_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _10_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_false, &scope_87, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_88, 1, 2}
};
static const MappingScope scope_86 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_86_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_85_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _15_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_86, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_89, 1, 2}
};
static const MappingScope scope_85 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_85_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_84_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _8_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_false, &scope_85, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_true, &scope_90, 1, 2}
};
static const MappingScope scope_84 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_84_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_83_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_84, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _6__L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _7_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_83 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_83_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_82_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L9_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P021_compr_onboard_TM_conversions, n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_82 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_N_ITER 1/",
  scope_82_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_81_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_14_IfBlock1), &_Type_Q_SCALE_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_15_IfBlock1), &_Type_kcg_bool_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_81 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_81_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_80_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_80 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_80_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_79_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_12_IfBlock1), &_Type_Q_SCALE_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_79 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_79_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_78_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1_11_IfBlock1), &_Type_Q_SCALE_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_78 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_78_entries, 2,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_77_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_false, &scope_78, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_true, &scope_79, 1, 2}
};
static const MappingScope scope_77 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_77_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_76_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _3_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_77, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_80, 1, 2}
};
static const MappingScope scope_76 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_76_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_false, &scope_76, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_81, 1, 2}
};
static const MappingScope scope_75 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_75_entries, 3,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_74_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_75, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_74 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_74_entries, 6,
};

/* TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversions */
static const MappingEntry scope_73_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P021_onboard", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, P021_onboard), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 22},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_91, 1, 4},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_82, 1, 2},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_83, 1, 3},
  /* 4 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_unflatten_sections 1", NULL, sizeof(outC_C_P021_unflatten_sections_TM_lib_internal), offsetof(outC_C_P021_compr_onboard_TM_conversions, Context_1), NULL, NULL, NULL, &scope_157, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_int_5), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L1), &_Type_array_int_5_Utils, NULL, NULL, &scope_458, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L10), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L30), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(array_int_99), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L32), &_Type_array_int_99_Utils, NULL, NULL, &scope_474, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SCALE), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L4), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 11},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(P021_OBU_sectionlist_enum_T_TM), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L5), &_Type_P021_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_476, 1, 10},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 9},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 8}
};
static const MappingScope scope_73 = {
  "TM_conversions::C_P021_compr_onboard/ C_P021_compr_onboard_TM_conversions",
  scope_73_entries, 23,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_72_entries[17] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 14},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_155, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_156, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_412, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_410, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_72 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_72_entries, 17,
};

/* MA_Request::Send_MA/ Send_MA_MA_Request */
static const MappingEntry scope_71_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Send_MA_MA_Request, _L1), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 0},
  /* 1 */ { MAP_OUTPUT, "message_out", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Send_MA_MA_Request, message_out), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 1}
};
static const MappingScope scope_71 = {
  "MA_Request::Send_MA/ Send_MA_MA_Request",
  scope_71_entries, 2,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending:<1 */
static const MappingEntry scope_70_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_62_entries[1], isActive_SSM_TR_SM1_SSM_TR_ReqPending_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_70 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending:<1",
  scope_70_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending: */
static const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_62_entries[1], isActive_SSM_TR_SM1_SSM_TR_ReqPending_1_SM1, &scope_70, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L4_SM1_ReqPending), &_Type_kcg_bool_Utils, &scope_62_entries[0], isActive_SSM_ST_SM1_SSM_st_ReqPending_SM1, NULL, 1, 0}
};
static const MappingScope scope_69 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:ReqPending:",
  scope_69_entries, 2,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending:<1 */
static const MappingEntry scope_68_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_62_entries[1], isActive_SSM_TR_SM1_SSM_TR_NoReqPending_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_68 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending:<1",
  scope_68_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending: */
static const MappingEntry scope_67_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_62_entries[1], isActive_SSM_TR_SM1_SSM_TR_NoReqPending_1_SM1, &scope_68, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L1_SM1_NoReqPending), &_Type_kcg_bool_Utils, &scope_62_entries[0], isActive_SSM_ST_SM1_SSM_st_NoReqPending_SM1, NULL, 1, 0}
};
static const MappingScope scope_67 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:NoReqPending:",
  scope_67_entries, 2,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init:<1 */
static const MappingEntry scope_66_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_62_entries[1], isActive_SSM_TR_SM1_SSM_TR_init_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_66 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init:<1",
  scope_66_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init: */
static const MappingEntry scope_65_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_62_entries[1], isActive_SSM_TR_SM1_SSM_TR_init_1_SM1, &scope_66, 1, 0}
};
static const MappingScope scope_65 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:init:",
  scope_65_entries, 1,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1: */
static const MappingEntry scope_62_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_MA_Request_Supervision_MA_Request, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "NoReqPending:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_SSM_ST_SM1_SSM_st_NoReqPending_SM1, &scope_67, 1, 8},
  /* 8 */ { MAP_STATE, "ReqPending:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_SSM_ST_SM1_SSM_st_ReqPending_SM1, &scope_69, 1, 9},
  /* 9 */ { MAP_STATE, "init:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_SSM_ST_SM1_SSM_st_init_SM1, &scope_65, 1, 7}
};
static const MappingScope scope_62 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_RequestSM1:",
  scope_62_entries, 10,
};

/* MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_Request */
static const MappingEntry scope_61_entries[41] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 4},
  /* 1 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, tmp1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 38},
  /* 2 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 39},
  /* 3 */ { MAP_INSTANCE, "MA_Request::op_3_8_2_3_a", NULL, sizeof(outC_op_3_8_2_3_a_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, Context_op_3_8_2_3_a), NULL, &scope_61_entries[1], isActive_kcg_bool_kcg_true, &scope_151, 1, 5},
  /* 4 */ { MAP_INSTANCE, "MA_Request::op_3_8_2_3_b", NULL, sizeof(outC_op_3_8_2_3_b_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, Context_op_3_8_2_3_b), NULL, &scope_61_entries[2], isActive_kcg_bool_kcg_true, &scope_152, 1, 6},
  /* 5 */ { MAP_INSTANCE, "MA_Request::op_RepeatReq 1", NULL, sizeof(outC_op_RepeatReq_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, Context_1), NULL, NULL, NULL, &scope_153, 1, 7},
  /* 6 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_62, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_MA_Request_Supervision_MA_Request, _L1), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_MA_Request_Supervision_MA_Request, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L23@mem", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_MA_Request_Supervision_MA_Request, _L24), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 15},
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
  /* 33 */ { MAP_LOCAL, "_L67", NULL, sizeof(Driver2MAR_T_MA_Request), offsetof(outC_MA_Request_Supervision_MA_Request, _L67), &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_405, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 35 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L71), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 36 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_LOCAL, "_L9", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_MA_Request_Supervision_MA_Request, _L9), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_400, 1, 13},
  /* 38 */ { MAP_LOCAL, "in_triggerMA@mem", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, rem_in_triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 39 */ { MAP_LOCAL, "pendingReq@mem", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, pendingReq), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 40 */ { MAP_OUTPUT, "triggerMA", NULL, sizeof(kcg_bool), offsetof(outC_MA_Request_Supervision_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40}
};
static const MappingScope scope_61 = {
  "MA_Request::MA_Request_Supervision/ MA_Request_Supervision_MA_Request",
  scope_61_entries, 41,
};

/* MA_Request::Build_MA_request/ Build_MA_request_MA_Request */
static const MappingEntry scope_60_entries[24] = {
  /* 0 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_request_MA_Request, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Build_MA_request_MA_Request, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L30", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), offsetof(outC_Build_MA_request_MA_Request, _L30), &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_406, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_ENGINE), offsetof(outC_Build_MA_request_MA_Request, _L31), &_Type_NID_ENGINE_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_MARQSTREASON), offsetof(outC_Build_MA_request_MA_Request, _L32), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_request_MA_Request, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_MARQSTREASON), offsetof(outC_Build_MA_request_MA_Request, _L34), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L35", NULL, sizeof(Q_MARQSTREASON), offsetof(outC_Build_MA_request_MA_Request, _L35), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L54", NULL, sizeof(Radio_TrainTrack_Header_T_Radio_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L54), &_Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_375, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L56", NULL, sizeof(NID_EM), offsetof(outC_Build_MA_request_MA_Request, _L56), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L57", NULL, sizeof(Q_EMERGENCYSTOP), offsetof(outC_Build_MA_request_MA_Request, _L57), &_Type_Q_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L58", NULL, sizeof(NID_TEXTMESSAGE), offsetof(outC_Build_MA_request_MA_Request, _L58), &_Type_NID_TEXTMESSAGE_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L59", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L59), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_request_MA_Request, _L60), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L61", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L61), &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_373, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L62", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L62), &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_371, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L77", NULL, sizeof(outPackets_T_Common_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L77), &_Type_outPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_387, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L78", NULL, sizeof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L78), &_Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_379, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L79", NULL, sizeof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L79), &_Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_386, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L80", NULL, sizeof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L80), &_Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_382, 1, 19},
  /* 20 */ { MAP_LOCAL, "_L81", NULL, sizeof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L81), &_Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_381, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L82", NULL, sizeof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg), offsetof(outC_Build_MA_request_MA_Request, _L82), &_Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_380, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L83", NULL, sizeof(T_TRAIN), offsetof(outC_Build_MA_request_MA_Request, _L83), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 23 */ { MAP_OUTPUT, "message132", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Build_MA_request_MA_Request, message132), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 23}
};
static const MappingScope scope_60 = {
  "MA_Request::Build_MA_request/ Build_MA_request_MA_Request",
  scope_60_entries, 24,
};

/* MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Requestlinear::MemoryBasic 1/ */
static const MappingEntry scope_59_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(struct__9768), offsetof(outC_Receive_MA_RequestParameters_MA_Request, Memorized_1), &_Type_struct__9768_Utils, NULL, NULL, &scope_374, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(struct__9768), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L2_1), &_Type_struct__9768_Utils, NULL, NULL, &scope_374, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L4@mem", NULL, sizeof(struct__9768), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L4_1), &_Type_struct__9768_Utils, NULL, NULL, &scope_374, 0, 1},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L5_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(struct__9768), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L6_1), &_Type_struct__9768_Utils, NULL, NULL, &scope_374, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(struct__9768), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L7_1), &_Type_struct__9768_Utils, NULL, NULL, &scope_374, 1, 5}
};
static const MappingScope scope_59 = {
  "MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Requestlinear::MemoryBasic 1/",
  scope_59_entries, 6,
};

/* MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Request */
static const MappingEntry scope_58_entries[17] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_OUTPUT, "IsNew", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, IsNew), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_OUTPUT, "MA_RequestParams", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, MA_RequestParams), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM::Read_P015 1", NULL, sizeof(outC_Read_P015_TM), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _1_Context_1), NULL, NULL, NULL, &scope_101, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM::Read_P057 1", NULL, sizeof(outC_Read_P057_TM), offsetof(outC_Receive_MA_RequestParameters_MA_Request, Context_1), NULL, NULL, NULL, &scope_150, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L11), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L2), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L3), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L8), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_59, 1, 1},
  /* 15 */ { MAP_OUTPUT, "ma_received", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, ma_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "present", NULL, sizeof(kcg_bool), offsetof(outC_Receive_MA_RequestParameters_MA_Request, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_58 = {
  "MA_Request::Receive_MA_RequestParameters/ Receive_MA_RequestParameters_MA_Request",
  scope_58_entries, 17,
};

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list/ C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2 */
static const MappingEntry scope_57_entries[12] = {
  /* 0 */ { MAP_LOCAL, "_L108", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L108), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L109", NULL, sizeof(P003V1_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L109), &_Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_435, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L110", NULL, sizeof(array__10617), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L110), &_Type_array__10617_Utils, NULL, NULL, &scope_501, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L111", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L111), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_434, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L112", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L112), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L113", NULL, sizeof(array__10240), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L113), &_Type_array__10240_Utils, NULL, NULL, &scope_435, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L115", NULL, sizeof(P003V1_section_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L115), &_Type_P003V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_434, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L116", NULL, sizeof(array__10620), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L116), &_Type_array__10620_Utils, NULL, NULL, &scope_502, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L59", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, _L59), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 0},
  /* 9 */ { MAP_OUTPUT, "n_iter_out", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, n_iter_out), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_OUTPUT, "nid_c1", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, nid_c1), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_OUTPUT, "nid_c_list", NULL, sizeof(_5_P003_OBU_nid_c_sectionlist_enum_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2, nid_c_list), &_Type__5_P003_OBU_nid_c_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_435, 1, 11}
};
static const MappingScope scope_57 = {
  "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list/ C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2",
  scope_57_entries, 12,
};

/* TA_Export::GradientProfile_to_DMI_loop/ GradientProfile_to_DMI_loop_TA_Export */
static const MappingEntry scope_56_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "Gradiient_section_for_DMI_out", NULL, sizeof(_3_GradientProfile_for_DMI_section_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, Gradiient_section_for_DMI_out), &_Type__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_430, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Gradient_section_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L1), &_Type_Gradient_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_431, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(_3_GradientProfile_for_DMI_section_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L12), &_Type__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_430, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L4), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(G_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L5), &_Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_GradientProfile_to_DMI_loop_TA_Export, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_56 = {
  "TA_Export::GradientProfile_to_DMI_loop/ GradientProfile_to_DMI_loop_TA_Export",
  scope_56_entries, 9,
};

/* TA_Storage::NV_storage/ NV_storage_TA_Storage */
static const MappingEntry scope_55_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "P3_received", NULL, sizeof(kcg_bool), offsetof(outC_NV_storage_TA_Storage, P3_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_OUTPUT, "Packet3_out", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_NV_storage_TA_Storage, Packet3_out), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_NV_storage_TA_Storage, _L1), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_NV_storage_TA_Storage, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_55 = {
  "TA_Storage::NV_storage/ NV_storage_TA_Storage",
  scope_55_entries, 4,
};

/* TM_baseline2::Read_P003V1/ Read_P003V1_TM_baseline2 */
static const MappingEntry scope_54_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P003V1_OBU_out", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, P003V1_OBU_out), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_compr_onboard 1", NULL, sizeof(outC_C_P003V1_compr_onboard_TM_conversions_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_131, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P003V1_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_72, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Read_P003V1_TM_baseline2, _L166), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P003V1_TM_baseline2, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P003V1_TM_baseline2, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P003V1_TM_baseline2, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P003V1_TM_baseline2, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 2},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P003V1_TM_baseline2, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_54 = {
  "TM_baseline2::Read_P003V1/ Read_P003V1_TM_baseline2",
  scope_54_entries, 9,
};

/* TA_SpeedProfiles::SP_TSR/ SP_TSR_TA_SpeedProfiles */
static const MappingEntry scope_53_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "TSR", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_TSR_TA_SpeedProfiles, TSR), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_TSR_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_TSR_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_53 = {
  "TA_SpeedProfiles::SP_TSR/ SP_TSR_TA_SpeedProfiles",
  scope_53_entries, 3,
};

/* TA_SpeedProfiles::SP_STM_SystemSpeed/ SP_STM_SystemSpeed_TA_SpeedProfiles */
static const MappingEntry scope_52_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "STM_SystemSpeed", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles, STM_SystemSpeed), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_52 = {
  "TA_SpeedProfiles::SP_STM_SystemSpeed/ SP_STM_SystemSpeed_TA_SpeedProfiles",
  scope_52_entries, 3,
};

/* TA_SpeedProfiles::SP_STM_MaxSpeed/ SP_STM_MaxSpeed_TA_SpeedProfiles */
static const MappingEntry scope_51_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "STM_MaxSpeed", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles, STM_MaxSpeed), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_51 = {
  "TA_SpeedProfiles::SP_STM_MaxSpeed/ SP_STM_MaxSpeed_TA_SpeedProfiles",
  scope_51_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:then: */
static const MappingEntry scope_50_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_LRBG_only 1", NULL, sizeof(outC_Update_LRBG_only_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _2_Context_1), NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_130, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L1_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L2_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_404, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L3_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4}
};
static const MappingScope scope_50 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:then:",
  scope_50_entries, 5,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:then: */
static const MappingEntry scope_49_entries[6] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_SSP_only 1", NULL, sizeof(outC_Update_SSP_only_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _3_Context_1), NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_129, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L111_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L210_IfBlock1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_456, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L39_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L48_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5}
};
static const MappingScope scope_49 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:then:",
  scope_49_entries, 6,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:then: */
static const MappingEntry scope_48_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_SSP_then_LRBG 1", NULL, sizeof(outC_Update_SSP_then_LRBG_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _4_Context_1), NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_128, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L116_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L215_IfBlock1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_456, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L314_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L413_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_404, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L512_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_44_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6}
};
static const MappingScope scope_48 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:then:",
  scope_48_entries, 7,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:then: */
static const MappingEntry scope_47_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "TA_SSP::Update_LRBG_then_SSP 1", NULL, sizeof(outC_Update_LRBG_then_SSP_TA_SSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _5_Context_1), NULL, &scope_45_entries[0], isActive_kcg_bool_kcg_true, &scope_127, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L122_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L221_IfBlock1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, &scope_456, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L320_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L419_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, &scope_404, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L518_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, &scope_451, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L617_IfBlock1), &_Type_kcg_bool_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6}
};
static const MappingScope scope_47 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:then:",
  scope_47_entries, 7,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:else: */
static const MappingEntry scope_46_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L124_IfBlock1), &_Type_SSP_cat_t_TA_MRSP_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_false, &scope_451, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L323_IfBlock1), &_Type_kcg_bool_Utils, &scope_45_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_46 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:else:",
  scope_46_entries, 2,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else: */
static const MappingEntry scope_45_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_45_entries[0], isActive_kcg_bool_kcg_false, &scope_46, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_45_entries[0], isActive_kcg_bool_kcg_true, &scope_47, 1, 2}
};
static const MappingScope scope_45 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:else:",
  scope_45_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else: */
static const MappingEntry scope_44_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_false, &scope_45, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_kcg_bool_kcg_true, &scope_48, 1, 2}
};
static const MappingScope scope_44 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:else:",
  scope_44_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else: */
static const MappingEntry scope_43_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _7_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_false, &scope_44, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_49, 1, 2}
};
static const MappingScope scope_43 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:else:",
  scope_43_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1: */
static const MappingEntry scope_42_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_false, &scope_43, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_50, 1, 2}
};
static const MappingScope scope_42 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfilesIfBlock1:",
  scope_42_entries, 3,
};

/* TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfiles */
static const MappingEntry scope_41_entries[43] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 4},
  /* 2 */ { MAP_LOCAL, "P27V1_local", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, P27V1_local), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 13},
  /* 3 */ { MAP_OUTPUT, "SSP", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SSP_TA_SpeedProfiles, SSP), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 41},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_LRBG 1", NULL, sizeof(outC_Eval_LRBG_TA_Lib_internal), offsetof(outC_SP_SSP_TA_SpeedProfiles, _1_Context_1), NULL, NULL, NULL, &scope_20, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1 1", NULL, sizeof(outC_Read_P027V1_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, Context_1), NULL, NULL, NULL, &scope_107, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 14},
  /* 7 */ { MAP_LOCAL, "_L103", NULL, sizeof(NID_BG), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L103), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 19},
  /* 8 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L104), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 9 */ { MAP_LOCAL, "_L107", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L107), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 21},
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
  /* 30 */ { MAP_LOCAL, "_L42", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L42), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L60", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L60), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_456, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L73", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SP_SSP_TA_SpeedProfiles, _L73), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 18},
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
static const MappingScope scope_41 = {
  "TA_SpeedProfiles::SP_SSP/ SP_SSP_TA_SpeedProfiles",
  scope_41_entries, 43,
};

/* TA_SpeedProfiles::SP_SignalingRelated/ SP_SignalingRelated_TA_SpeedProfiles */
static const MappingEntry scope_40_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "SignalingRelated", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SignalingRelated_TA_SpeedProfiles, SignalingRelated), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_SignalingRelated_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_SignalingRelated_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_40 = {
  "TA_SpeedProfiles::SP_SignalingRelated/ SP_SignalingRelated_TA_SpeedProfiles",
  scope_40_entries, 3,
};

/* TA_SpeedProfiles::SP_PBD_SR/ SP_PBD_SR_TA_SpeedProfiles */
static const MappingEntry scope_39_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "PBD_SR", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_PBD_SR_TA_SpeedProfiles, PBD_SR), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_PBD_SR_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_PBD_SR_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_39 = {
  "TA_SpeedProfiles::SP_PBD_SR/ SP_PBD_SR_TA_SpeedProfiles",
  scope_39_entries, 3,
};

/* TA_SpeedProfiles::SP_OverrideRelated/ SP_OverrideRelated_TA_SpeedProfiles */
static const MappingEntry scope_38_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "OverrideRelated", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_OverrideRelated_TA_SpeedProfiles, OverrideRelated), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_OverrideRelated_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_OverrideRelated_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_38 = {
  "TA_SpeedProfiles::SP_OverrideRelated/ SP_OverrideRelated_TA_SpeedProfiles",
  scope_38_entries, 3,
};

/* TA_SpeedProfiles::SP_ModeRelated/ SP_ModeRelated_TA_SpeedProfiles */
static const MappingEntry scope_37_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "ModeRelated", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, ModeRelated), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ModeRelated_TA_SpeedProfiles, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2}
};
static const MappingScope scope_37 = {
  "TA_SpeedProfiles::SP_ModeRelated/ SP_ModeRelated_TA_SpeedProfiles",
  scope_37_entries, 4,
};

/* TA_SpeedProfiles::SP_MaxTrainSpeed/ SP_MaxTrainSpeed_TA_SpeedProfiles */
static const MappingEntry scope_36_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "MaxTrainSpeed", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles, MaxTrainSpeed), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_36 = {
  "TA_SpeedProfiles::SP_MaxTrainSpeed/ SP_MaxTrainSpeed_TA_SpeedProfiles",
  scope_36_entries, 3,
};

/* TA_SpeedProfiles::SP_LX_SR/ SP_LX_SR_TA_SpeedProfiles */
static const MappingEntry scope_35_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "LX_SR", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_LX_SR_TA_SpeedProfiles, LX_SR), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_LX_SR_TA_SpeedProfiles, _L4), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_LX_SR_TA_SpeedProfiles, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_35 = {
  "TA_SpeedProfiles::SP_LX_SR/ SP_LX_SR_TA_SpeedProfiles",
  scope_35_entries, 3,
};

/* TA_SpeedProfiles::SP_ASP/ SP_ASP_TA_SpeedProfiles */
static const MappingEntry scope_34_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "ASP", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ASP_TA_SpeedProfiles, ASP), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_SP_ASP_TA_SpeedProfiles, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_SP_ASP_TA_SpeedProfiles, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1}
};
static const MappingScope scope_34 = {
  "TA_SpeedProfiles::SP_ASP/ SP_ASP_TA_SpeedProfiles",
  scope_34_entries, 3,
};

/* TA_SpeedProfiles::Build_SSP_Matrix/ Build_SSP_Matrix_TA_SpeedProfiles */
static const MappingEntry scope_33_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "SSP_matrix_out", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, SSP_matrix_out), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 14},
  /* 1 */ { MAP_OUTPUT, "SSP_matrix_updated", NULL, sizeof(kcg_bool), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, SSP_matrix_updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L1), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L10), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L11), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(array__10459), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L12), &_Type_array__10459_Utils, NULL, NULL, &scope_460, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L2), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L6), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L7), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L8), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_SSP_Matrix_TA_SpeedProfiles, _L9), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 8}
};
static const MappingScope scope_33 = {
  "TA_SpeedProfiles::Build_SSP_Matrix/ Build_SSP_Matrix_TA_SpeedProfiles",
  scope_33_entries, 15,
};

/* TA_MRSP::Calculate_MRSP/ Calculate_MRSP_TA_MRSP */
static const MappingEntry scope_32_entries[16] = {
  /* 0 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), offsetof(outC_Calculate_MRSP_TA_MRSP, MRSP), &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_471, 1, 15},
  /* 1 */ { MAP_INSTANCE, "TA_MRSP::MRSP_BuildTargetList 1", NULL, sizeof(outC_MRSP_BuildTargetList_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_104, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Build_MRSP_LOOP 1", &iter_mapwi_200, sizeof(outC_MRSP_Build_MRSP_LOOP_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _3_Context_1), NULL, NULL, NULL, &scope_103, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Determine_LengthOfTargetList 1", NULL, sizeof(outC__18_MRSP_Determine_LengthOfTa_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _2_Context_1), NULL, NULL, NULL, &scope_106, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix 1", NULL, sizeof(outC_MRSP_Split_And_Reverse_SS_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_105, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(SSP_t_list_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L1), &_Type_SSP_t_list_t_TA_MRSP_Utils, NULL, NULL, &scope_462, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(array__10584), offsetof(outC_Calculate_MRSP_TA_MRSP, _L10), &_Type_array__10584_Utils, NULL, NULL, &scope_490, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(array__10508), offsetof(outC_Calculate_MRSP_TA_MRSP, _L12), &_Type_array__10508_Utils, NULL, NULL, &scope_471, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(array_int_200), offsetof(outC_Calculate_MRSP_TA_MRSP, _L14), &_Type_array_int_200_Utils, NULL, NULL, &scope_491, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L15), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_Calculate_MRSP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_t_matrix_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L3), &_Type_SSP_t_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_464, 1, 6},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Calculate_MRSP_TA_MRSP, _L4), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Calculate_MRSP_TA_MRSP, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Calculate_MRSP_TA_MRSP, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__10581), offsetof(outC_Calculate_MRSP_TA_MRSP, _L9), &_Type_array__10581_Utils, NULL, NULL, &scope_489, 1, 9}
};
static const MappingScope scope_32 = {
  "TA_MRSP::Calculate_MRSP/ Calculate_MRSP_TA_MRSP",
  scope_32_entries, 16,
};

/* TA_MA::StoreRaw_MA/ StoreRaw_MA_TA_MA */
static const MappingEntry scope_31_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 1 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 8},
  /* 2 */ { MAP_OUTPUT, "MA_onboard_out", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_StoreRaw_MA_TA_MA, MA_onboard_out), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 3 */ { MAP_INSTANCE, "TA_MA::MA_storage 1", NULL, sizeof(outC_MA_storage_TA_MA), offsetof(outC_StoreRaw_MA_TA_MA, _1_Context_1), NULL, &scope_31_entries[1], isActive_kcg_bool_kcg_true, &scope_102, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM::Read_P015 1", NULL, sizeof(outC_Read_P015_TM), offsetof(outC_StoreRaw_MA_TA_MA, Context_1), NULL, NULL, NULL, &scope_101, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_StoreRaw_MA_TA_MA, _L22), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L24@mem", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_StoreRaw_MA_TA_MA, _L24), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 0, 0},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_StoreRaw_MA_TA_MA, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L26@mem", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 10 */ { MAP_OUTPUT, "new_MA", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, new_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_OUTPUT, "vald_MA", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_MA_TA_MA, vald_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_31 = {
  "TA_MA::StoreRaw_MA/ StoreRaw_MA_TA_MA",
  scope_31_entries, 12,
};

/* TA_MA::Decode_P015/ Decode_P015_TA_MA */
static const MappingEntry scope_30_entries[55] = {
  /* 0 */ { MAP_OUTPUT, "MA_decoded_out", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, MA_decoded_out), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 54},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_Q_DANGERPOINT 1", NULL, sizeof(outC_EVAL_Q_DANGERPOINT_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, _5_Context_1), NULL, NULL, NULL, &scope_98, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_Q_OVERLAP 1", NULL, sizeof(outC_EVAL_Q_OVERLAP_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, _4_Context_1), NULL, NULL, NULL, &scope_100, 1, 6},
  /* 3 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_T_LOA 1", NULL, sizeof(outC_EVAL_T_LOA_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, _6_Context_1), NULL, NULL, NULL, &scope_96, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_V_Release 1", NULL, sizeof(outC_EVAL_V_Release_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, Context_1), NULL, NULL, NULL, &scope_99, 1, 5},
  /* 5 */ { MAP_INSTANCE, "TA_Lib_internal::EVAL_V_Release 2", NULL, sizeof(outC_EVAL_V_Release_TA_Lib_internal), offsetof(outC_Decode_P015_TA_MA, Context_2), NULL, NULL, NULL, &scope_99, 1, 8},
  /* 6 */ { MAP_INSTANCE, "TA_MA::DecodeMASection 1", NULL, sizeof(outC_DecodeMASection_TA_MA), offsetof(outC_Decode_P015_TA_MA, _2_Context_1), NULL, NULL, NULL, &scope_97, 1, 3},
  /* 7 */ { MAP_INSTANCE, "TA_MRSP::Eval_Q_SCALE 1", NULL, sizeof(outC_Eval_Q_SCALE_TA_MRSP), offsetof(outC_Decode_P015_TA_MA, _3_Context_1), NULL, NULL, NULL, &scope_95, 1, 0},
  /* 8 */ { MAP_INSTANCE, "TA_MRSP::Eval_Q_SCALE 2", NULL, sizeof(outC_Eval_Q_SCALE_TA_MRSP), offsetof(outC_Decode_P015_TA_MA, _1_Context_2), NULL, NULL, NULL, &scope_95, 1, 1},
  /* 9 */ { MAP_INSTANCE, "TA_MRSP::Eval_Q_SCALE 3", NULL, sizeof(outC_Eval_Q_SCALE_TA_MRSP), offsetof(outC_Decode_P015_TA_MA, Context_3), NULL, NULL, NULL, &scope_95, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Decode_P015_TA_MA, _L1), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(Q_SECTIONTIMER), offsetof(outC_Decode_P015_TA_MA, _L10), &_Type_Q_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(T_SECTIONTIMER), offsetof(outC_Decode_P015_TA_MA, _L11), &_Type_T_SECTIONTIMER_Utils, NULL, NULL, NULL, 1, 21},
  /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(D_SECTIONTIMERSTOPLOC), offsetof(outC_Decode_P015_TA_MA, _L12), &_Type_D_SECTIONTIMERSTOPLOC_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(Q_ENDTIMER), offsetof(outC_Decode_P015_TA_MA, _L13), &_Type_Q_ENDTIMER_Utils, NULL, NULL, NULL, 1, 19},
  /* 15 */ { MAP_LOCAL, "_L14", NULL, sizeof(T_ENDTIMER), offsetof(outC_Decode_P015_TA_MA, _L14), &_Type_T_ENDTIMER_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L15", NULL, sizeof(D_ENDTIMERSTARTLOC), offsetof(outC_Decode_P015_TA_MA, _L15), &_Type_D_ENDTIMERSTARTLOC_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(Q_DANGERPOINT), offsetof(outC_Decode_P015_TA_MA, _L16), &_Type_Q_DANGERPOINT_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L161", NULL, sizeof(V_NVREL), offsetof(outC_Decode_P015_TA_MA, _L161), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 43},
  /* 19 */ { MAP_LOCAL, "_L162", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Decode_P015_TA_MA, _L162), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 42},
  /* 20 */ { MAP_LOCAL, "_L163", NULL, sizeof(kcg_int), offsetof(outC_Decode_P015_TA_MA, _L163), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 44},
  /* 21 */ { MAP_LOCAL, "_L164", NULL, sizeof(MA_Level_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L164), &_Type_MA_Level_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 45},
  /* 22 */ { MAP_LOCAL, "_L165", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L165), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46},
  /* 23 */ { MAP_LOCAL, "_L166", NULL, sizeof(Endtimer_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L166), &_Type_Endtimer_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_391, 1, 47},
  /* 24 */ { MAP_LOCAL, "_L168", NULL, sizeof(_4_MovementAuthoritySectionlist_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L168), &_Type__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_390, 1, 48},
  /* 25 */ { MAP_LOCAL, "_L169", NULL, sizeof(V_RELEASEOL), offsetof(outC_Decode_P015_TA_MA, _L169), &_Type_V_RELEASEOL_Utils, NULL, NULL, NULL, 1, 49},
  /* 26 */ { MAP_LOCAL, "_L17", NULL, sizeof(D_DP), offsetof(outC_Decode_P015_TA_MA, _L17), &_Type_D_DP_Utils, NULL, NULL, NULL, 1, 15},
  /* 27 */ { MAP_LOCAL, "_L178", NULL, sizeof(DP_or_OL_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L178), &_Type_DP_or_OL_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 50},
  /* 28 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L179), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 29 */ { MAP_LOCAL, "_L18", NULL, sizeof(V_RELEASEDP), offsetof(outC_Decode_P015_TA_MA, _L18), &_Type_V_RELEASEDP_Utils, NULL, NULL, NULL, 1, 14},
  /* 30 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 31 */ { MAP_LOCAL, "_L182", NULL, sizeof(DP_or_OL_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L182), &_Type_DP_or_OL_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_392, 1, 53},
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
  /* 43 */ { MAP_LOCAL, "_L49", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L49), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 35},
  /* 44 */ { MAP_LOCAL, "_L5", NULL, sizeof(V_LOA), offsetof(outC_Decode_P015_TA_MA, _L5), &_Type_V_LOA_Utils, NULL, NULL, NULL, 1, 27},
  /* 45 */ { MAP_LOCAL, "_L53", NULL, sizeof(MovementAuthoritySection_t_TrackAtlasTypes), offsetof(outC_Decode_P015_TA_MA, _L53), &_Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_389, 1, 36},
  /* 46 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 47 */ { MAP_LOCAL, "_L56", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L56), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 38},
  /* 48 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_Decode_P015_TA_MA, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 49 */ { MAP_LOCAL, "_L58", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L58), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 40},
  /* 50 */ { MAP_LOCAL, "_L59", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decode_P015_TA_MA, _L59), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 41},
  /* 51 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_LOA), offsetof(outC_Decode_P015_TA_MA, _L6), &_Type_T_LOA_Utils, NULL, NULL, NULL, 1, 26},
  /* 52 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_ITER), offsetof(outC_Decode_P015_TA_MA, _L7), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 25},
  /* 53 */ { MAP_LOCAL, "_L8", NULL, sizeof(P015_OBU_sectionlist_enum_T_TM), offsetof(outC_Decode_P015_TA_MA, _L8), &_Type_P015_OBU_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_418, 1, 24},
  /* 54 */ { MAP_LOCAL, "_L9", NULL, sizeof(L_ENDSECTION), offsetof(outC_Decode_P015_TA_MA, _L9), &_Type_L_ENDSECTION_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_30 = {
  "TA_MA::Decode_P015/ Decode_P015_TA_MA",
  scope_30_entries, 55,
};

/* TA_Gradient::Update_LRBG_only/ Update_LRBG_only_TA_Gradient */
static const MappingEntry scope_29_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_only_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_92, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_only_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_only_TA_Gradient, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_only_TA_Gradient, _L3), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L34", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_Gradient, _L34), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L35", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_only_TA_Gradient, _L35), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_only_TA_Gradient, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_only_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 7}
};
static const MappingScope scope_29 = {
  "TA_Gradient::Update_LRBG_only/ Update_LRBG_only_TA_Gradient",
  scope_29_entries, 8,
};

/* TA_Gradient::Update_GP_only/ Update_GP_only_TA_Gradient */
static const MappingEntry scope_28_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile 1", NULL, sizeof(outC__21_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC_Update_GP_only_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_93, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG 1", NULL, sizeof(outC_Update_GP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_GP_only_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_94, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Update_GP_only_TA_Gradient, _L2), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, _L4), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, _L5), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 5},
  /* 6 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_only_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 6}
};
static const MappingScope scope_28 = {
  "TA_Gradient::Update_GP_only/ Update_GP_only_TA_Gradient",
  scope_28_entries, 7,
};

/* TA_Gradient::Update_GP_then_LRBG/ Update_GP_then_LRBG_TA_Gradient */
static const MappingEntry scope_27_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile 1", NULL, sizeof(outC__21_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_93, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _2_Context_1), NULL, NULL, NULL, &scope_92, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG 1", NULL, sizeof(outC_Update_GP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_94, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L11), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L12), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L13), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L2), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L5), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, _L6), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 6},
  /* 12 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_GP_then_LRBG_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 12}
};
static const MappingScope scope_27 = {
  "TA_Gradient::Update_GP_then_LRBG/ Update_GP_then_LRBG_TA_Gradient",
  scope_27_entries, 13,
};

/* TA_Gradient::Update_LRBG_then_GP/ Update_LRBG_then_GP_TA_Gradient */
static const MappingEntry scope_26_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Convert_P21_to_DistanceProfile 1", NULL, sizeof(outC__21_Convert_P21_to_DistancePr_TA_Gradient), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_93, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::MoveGPSectionsToNewLRBGafter 1", NULL, sizeof(outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_92, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Update_GP_per_LRBG 1", NULL, sizeof(outC_Update_GP_per_LRBG_TA_Lib_internal), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _2_Context_1), NULL, NULL, NULL, &scope_94, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L13), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L2), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L4), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L7), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L8), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, _L9), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 11},
  /* 12 */ { MAP_OUTPUT, "new_profile_out", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Update_LRBG_then_GP_TA_Gradient, new_profile_out), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 12}
};
static const MappingScope scope_26 = {
  "TA_Gradient::Update_LRBG_then_GP/ Update_LRBG_then_GP_TA_Gradient",
  scope_26_entries, 13,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_25_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L1_IfBlock1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_414, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(NID_BG), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L2_IfBlock1), &_Type_NID_BG_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_25 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:then:",
  scope_25_entries, 2,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L11_IfBlock1), &_Type_NID_LRBG_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L22_IfBlock1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, &scope_414, 1, 0}
};
static const MappingScope scope_24 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:then:",
  scope_24_entries, 2,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L13_IfBlock1), &_Type_kcg_int_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:else:",
  scope_23_entries, 1,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_22_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_LRBG_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_false, &scope_23, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 2}
};
static const MappingScope scope_22 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:",
  scope_22_entries, 3,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_21_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_LRBG_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 2}
};
static const MappingScope scope_21 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:",
  scope_21_entries, 3,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internal */
static const MappingEntry scope_20_entries[5] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 0},
  /* 1 */ { MAP_OUTPUT, "LRBG", NULL, sizeof(kcg_int), offsetof(outC_Eval_LRBG_TA_Lib_internal, LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L14), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_20 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internal",
  scope_20_entries, 5,
};

/* TM::Read_P021/ Read_P021_TM */
static const MappingEntry scope_19_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "P021_OBU_out", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Read_P021_TM, P021_OBU_out), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 8},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::C_P021_compr_onboard 1", NULL, sizeof(outC_C_P021_compr_onboard_TM_conversions), offsetof(outC_Read_P021_TM, _1_Context_1), NULL, NULL, NULL, &scope_73, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P021_TM, Context_1), NULL, NULL, NULL, &scope_72, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L166", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Read_P021_TM, _L166), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P021_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P021_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_411, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P021_TM, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_410, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P021_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 3},
  /* 8 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P021_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_19 = {
  "TM::Read_P021/ Read_P021_TM",
  scope_19_entries, 9,
};

/* MA_Request::Manage_MA_Request/ Manage_MA_Request_MA_Request */
static const MappingEntry scope_18_entries[28] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 1 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 26},
  /* 2 */ { MAP_INSTANCE, "MA_Request::Build_MA_request 1", NULL, sizeof(outC_Build_MA_request_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _2_Context_1), NULL, &scope_18_entries[1], isActive_kcg_bool_kcg_true, &scope_60, 1, 4},
  /* 3 */ { MAP_INSTANCE, "MA_Request::MA_Request_Supervision 1", NULL, sizeof(outC_MA_Request_Supervision_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _1_Context_1), NULL, NULL, NULL, &scope_61, 1, 5},
  /* 4 */ { MAP_INSTANCE, "MA_Request::Receive_MA_RequestParameters 1", NULL, sizeof(outC_Receive_MA_RequestParameters_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, Context_1), NULL, NULL, NULL, &scope_58, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MA_Request::Send_MA 1", NULL, sizeof(outC_Send_MA_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _3_Context_1), NULL, NULL, NULL, &scope_71, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L12), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L16), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L17), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_400, 1, 16},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Manage_MA_Request_MA_Request, _L18), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 21},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Manage_MA_Request_MA_Request, _L2), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 7},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L24", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), offsetof(outC_Manage_MA_Request_MA_Request, _L24), &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_406, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L25), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(Driver2MAR_T_MA_Request), offsetof(outC_Manage_MA_Request_MA_Request, _L27), &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_405, 1, 22},
  /* 18 */ { MAP_LOCAL, "_L28", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L28), &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_373, 1, 23},
  /* 19 */ { MAP_LOCAL, "_L29", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L29), &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_371, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(T_TRAIN), offsetof(outC_Manage_MA_Request_MA_Request, _L30), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L5), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 9},
  /* 23 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_LOCAL, "_L7", NULL, sizeof(P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L7), &_Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_374, 1, 11},
  /* 25 */ { MAP_LOCAL, "_L9@mem", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, _L9), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 0, 1},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_Manage_MA_Request_MA_Request, message_out), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 27},
  /* 27 */ { MAP_LOCAL, "triggerMA@mem", NULL, sizeof(kcg_bool), offsetof(outC_Manage_MA_Request_MA_Request, triggerMA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0}
};
static const MappingScope scope_18 = {
  "MA_Request::Manage_MA_Request/ Manage_MA_Request_MA_Request",
  scope_18_entries, 28,
};

/* TA_Export::TA_to_ML/ TA_to_ML_TA_Export */
static const MappingEntry scope_17_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(DataForModeAndLevel_t_TrackAtlasTypes), offsetof(outC_TA_to_ML_TA_Export, _L1), &_Type_DataForModeAndLevel_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_429, 1, 0},
  /* 1 */ { MAP_OUTPUT, "to_ML", NULL, sizeof(DataForModeAndLevel_t_TrackAtlasTypes), offsetof(outC_TA_to_ML_TA_Export, to_ML), &_Type_DataForModeAndLevel_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_429, 1, 1}
};
static const MappingScope scope_17 = {
  "TA_Export::TA_to_ML/ TA_to_ML_TA_Export",
  scope_17_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU/ C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 */
static const MappingEntry scope_16_entries[58] = {
  /* 0 */ { MAP_OUTPUT, "P003_onbaord_out", NULL, sizeof(P003_OBU_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, P003_onbaord_out), &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_449, 1, 57},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list 1", NULL, sizeof(outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_57, 1, 0},
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
  /* 25 */ { MAP_LOCAL, "_L216", NULL, sizeof(P203V1_OBU_n_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L216), &_Type_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 49},
  /* 26 */ { MAP_LOCAL, "_L217", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L217), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 50},
  /* 27 */ { MAP_LOCAL, "_L218", NULL, sizeof(P203V1_OBU_k_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L218), &_Type_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 51},
  /* 28 */ { MAP_LOCAL, "_L219", NULL, sizeof(L_NVKRINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L219), &_Type_L_NVKRINT_Utils, NULL, NULL, NULL, 1, 52},
  /* 29 */ { MAP_LOCAL, "_L220", NULL, sizeof(M_NVKRINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L220), &_Type_M_NVKRINT_Utils, NULL, NULL, NULL, 1, 53},
  /* 30 */ { MAP_LOCAL, "_L221", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L221), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 54},
  /* 31 */ { MAP_LOCAL, "_L222", NULL, sizeof(P203V1_OBU_l_sectionlist_enum_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L222), &_Type_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_440, 1, 55},
  /* 32 */ { MAP_LOCAL, "_L223", NULL, sizeof(M_NVKTINT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L223), &_Type_M_NVKTINT_Utils, NULL, NULL, NULL, 1, 56},
  /* 33 */ { MAP_LOCAL, "_L50", NULL, sizeof(P003_OBU_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L50), &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_449, 1, 1},
  /* 34 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 35 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L53), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 36 */ { MAP_LOCAL, "_L54", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L54), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 4},
  /* 37 */ { MAP_LOCAL, "_L55", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L55), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 5},
  /* 38 */ { MAP_LOCAL, "_L57", NULL, sizeof(Q_SCALE), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L57), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 6},
  /* 39 */ { MAP_LOCAL, "_L58", NULL, sizeof(D_VALIDNV), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L58), &_Type_D_VALIDNV_Utils, NULL, NULL, NULL, 1, 7},
  /* 40 */ { MAP_LOCAL, "_L59", NULL, sizeof(_5_P003_OBU_nid_c_sectionlist_enum_T_TM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L59), &_Type__5_P003_OBU_nid_c_sectionlist_enum_T_TM_Utils, NULL, NULL, &scope_435, 1, 8},
  /* 41 */ { MAP_LOCAL, "_L60", NULL, sizeof(N_ITER), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L60), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 9},
  /* 42 */ { MAP_LOCAL, "_L61", NULL, sizeof(NID_C), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L61), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 10},
  /* 43 */ { MAP_LOCAL, "_L62", NULL, sizeof(V_NVSHUNT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L62), &_Type_V_NVSHUNT_Utils, NULL, NULL, NULL, 1, 11},
  /* 44 */ { MAP_LOCAL, "_L63", NULL, sizeof(V_NVSTFF), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L63), &_Type_V_NVSTFF_Utils, NULL, NULL, NULL, 1, 12},
  /* 45 */ { MAP_LOCAL, "_L64", NULL, sizeof(V_NVONSIGHT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L64), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 13},
  /* 46 */ { MAP_LOCAL, "_L65", NULL, sizeof(P003_permanent_data_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L65), &_Type_P003_permanent_data_T_TM_baseline2_Utils, NULL, NULL, &scope_448, 1, 14},
  /* 47 */ { MAP_LOCAL, "_L70", NULL, sizeof(V_NVLIMSUPERV), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L70), &_Type_V_NVLIMSUPERV_Utils, NULL, NULL, NULL, 1, 15},
  /* 48 */ { MAP_LOCAL, "_L71", NULL, sizeof(V_NVONSIGHT), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L71), &_Type_V_NVONSIGHT_Utils, NULL, NULL, NULL, 1, 16},
  /* 49 */ { MAP_LOCAL, "_L72", NULL, sizeof(V_NVREL), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L72), &_Type_V_NVREL_Utils, NULL, NULL, NULL, 1, 17},
  /* 50 */ { MAP_LOCAL, "_L73", NULL, sizeof(D_NVROLL), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L73), &_Type_D_NVROLL_Utils, NULL, NULL, NULL, 1, 18},
  /* 51 */ { MAP_LOCAL, "_L74", NULL, sizeof(Q_NVSBTSMPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L74), &_Type_Q_NVSBTSMPERM_Utils, NULL, NULL, NULL, 1, 19},
  /* 52 */ { MAP_LOCAL, "_L75", NULL, sizeof(Q_NVEMRRLS), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L75), &_Type_Q_NVEMRRLS_Utils, NULL, NULL, NULL, 1, 20},
  /* 53 */ { MAP_LOCAL, "_L76", NULL, sizeof(P203V1_OBU_T_TM_baseline2), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L76), &_Type_P203V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 21},
  /* 54 */ { MAP_LOCAL, "_L77", NULL, sizeof(Q_NVGUIPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L77), &_Type_Q_NVGUIPERM_Utils, NULL, NULL, NULL, 1, 22},
  /* 55 */ { MAP_LOCAL, "_L78", NULL, sizeof(Q_NVLOCACC), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L78), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 23},
  /* 56 */ { MAP_LOCAL, "_L79", NULL, sizeof(Q_NVSBFBPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L79), &_Type_Q_NVSBFBPERM_Utils, NULL, NULL, NULL, 1, 24},
  /* 57 */ { MAP_LOCAL, "_L80", NULL, sizeof(Q_NVINHSMICPERM), offsetof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2, _L80), &_Type_Q_NVINHSMICPERM_Utils, NULL, NULL, NULL, 1, 25}
};
static const MappingScope scope_16 = {
  "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU/ C_P003V1_OBU_P003_OBU_TM_conversions_baseline2",
  scope_16_entries, 58,
};

/* TA_Export::GradientProfile_to_DMI/ GradientProfile_to_DMI_TA_Export */
static const MappingEntry scope_15_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Gradient_Profile_for_DMI_out", NULL, sizeof(GradientProfile_for_DMI_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_TA_Export, Gradient_Profile_for_DMI_out), &_Type_GradientProfile_for_DMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_432, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TA_Export::GradientProfile_to_DMI_loop 1", &iter_map_50, sizeof(outC_GradientProfile_to_DMI_loop_TA_Export), offsetof(outC_GradientProfile_to_DMI_TA_Export, Context_1), NULL, NULL, NULL, &scope_56, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_GradientProfile_to_DMI_TA_Export, _L1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(array__10229), offsetof(outC_GradientProfile_to_DMI_TA_Export, _L2), &_Type_array__10229_Utils, NULL, NULL, &scope_432, 1, 2}
};
static const MappingScope scope_15 = {
  "TA_Export::GradientProfile_to_DMI/ GradientProfile_to_DMI_TA_Export",
  scope_15_entries, 4,
};

/* TA_Storage::StoreRaw_NV/ StoreRaw_NV_TA_Storage */
static const MappingEntry scope_14_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 1 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 9},
  /* 2 */ { MAP_OUTPUT, "NV_onboard_out", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, NV_onboard_out), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 12},
  /* 3 */ { MAP_INSTANCE, "TA_Storage::NV_storage 3", NULL, sizeof(outC_NV_storage_TA_Storage), offsetof(outC_StoreRaw_NV_TA_Storage, _1_Context_3), NULL, &scope_14_entries[1], isActive_kcg_bool_kcg_true, &scope_55, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_baseline2::Read_P003V1 3", NULL, sizeof(outC_Read_P003V1_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, Context_3), NULL, NULL, NULL, &scope_54, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, _L22), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L23@mem", NULL, sizeof(kcg_bool), offsetof(outC_StoreRaw_NV_TA_Storage, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 8 */ { MAP_LOCAL, "_L24@mem", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_StoreRaw_NV_TA_Storage, _L24), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 0, 1},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_StoreRaw_NV_TA_Storage, _L25), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_StoreRaw_NV_TA_Storage, _L26), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 8},
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
  /* 2 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), offsetof(outC_Build_MRSP_TA_MRSP, MRSP), &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_471, 1, 36},
  /* 3 */ { MAP_INSTANCE, "TA_MRSP::Calculate_MRSP 1", NULL, sizeof(outC_Calculate_MRSP_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _12_Context_1), NULL, &scope_13_entries[1], isActive_kcg_bool_kcg_true, &scope_32, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TA_SpeedProfiles::Build_SSP_Matrix 1", NULL, sizeof(outC_Build_SSP_Matrix_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _11_Context_1), NULL, NULL, NULL, &scope_33, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_ASP 1", NULL, sizeof(outC_SP_ASP_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, Context_1), NULL, NULL, NULL, &scope_34, 1, 4},
  /* 6 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_LX_SR 1", NULL, sizeof(outC_SP_LX_SR_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _1_Context_1), NULL, NULL, NULL, &scope_35, 1, 5},
  /* 7 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_MaxTrainSpeed 1", NULL, sizeof(outC_SP_MaxTrainSpeed_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _2_Context_1), NULL, NULL, NULL, &scope_36, 1, 6},
  /* 8 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_ModeRelated 1", NULL, sizeof(outC_SP_ModeRelated_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _3_Context_1), NULL, NULL, NULL, &scope_37, 1, 7},
  /* 9 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_OverrideRelated 1", NULL, sizeof(outC_SP_OverrideRelated_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _4_Context_1), NULL, NULL, NULL, &scope_38, 1, 8},
  /* 10 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_PBD_SR 1", NULL, sizeof(outC_SP_PBD_SR_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _5_Context_1), NULL, NULL, NULL, &scope_39, 1, 9},
  /* 11 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_SSP 1", NULL, sizeof(outC_SP_SSP_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _7_Context_1), NULL, NULL, NULL, &scope_41, 1, 11},
  /* 12 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_STM_MaxSpeed 1", NULL, sizeof(outC_SP_STM_MaxSpeed_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _8_Context_1), NULL, NULL, NULL, &scope_51, 1, 12},
  /* 13 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_STM_SystemSpeed 1", NULL, sizeof(outC_SP_STM_SystemSpeed_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _9_Context_1), NULL, NULL, NULL, &scope_52, 1, 13},
  /* 14 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_SignalingRelated 1", NULL, sizeof(outC_SP_SignalingRelated_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _6_Context_1), NULL, NULL, NULL, &scope_40, 1, 10},
  /* 15 */ { MAP_INSTANCE, "TA_SpeedProfiles::SP_TSR 1", NULL, sizeof(outC_SP_TSR_TA_SpeedProfiles), offsetof(outC_Build_MRSP_TA_MRSP, _10_Context_1), NULL, NULL, NULL, &scope_53, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L11", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L11), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L13", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L13), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L14", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L14), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L15", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L15), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L16", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_MRSP_TA_MRSP, _L16), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_Build_MRSP_TA_MRSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 24 */ { MAP_LOCAL, "_L1@mem", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), offsetof(outC_Build_MRSP_TA_MRSP, _L1), &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_471, 0, 0},
  /* 25 */ { MAP_LOCAL, "_L2", NULL, sizeof(SSP_matrix_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L2), &_Type_SSP_matrix_t_TA_MRSP_Utils, NULL, NULL, &scope_460, 1, 15},
  /* 26 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 27 */ { MAP_LOCAL, "_L21", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L21), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 31},
  /* 28 */ { MAP_LOCAL, "_L22", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Build_MRSP_TA_MRSP, _L22), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 32},
  /* 29 */ { MAP_LOCAL, "_L23", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_MRSP_TA_MRSP, _L23), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 33},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L3), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 16},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L4), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L5), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 18},
  /* 33 */ { MAP_LOCAL, "_L7", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L7), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 19},
  /* 34 */ { MAP_LOCAL, "_L8", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L8), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 20},
  /* 35 */ { MAP_LOCAL, "_L9", NULL, sizeof(SSP_cat_t_TA_MRSP), offsetof(outC_Build_MRSP_TA_MRSP, _L9), &_Type_SSP_cat_t_TA_MRSP_Utils, NULL, NULL, &scope_451, 1, 21},
  /* 36 */ { MAP_OUTPUT, "newMRSP", NULL, sizeof(kcg_bool), offsetof(outC_Build_MRSP_TA_MRSP, newMRSP), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35}
};
static const MappingScope scope_13 = {
  "TA_MRSP::Build_MRSP/ Build_MRSP_TA_MRSP",
  scope_13_entries, 37,
};

/* TA_MA::Build_MA/ Build_MA_TA_MA */
static const MappingEntry scope_12_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "MA_onboard_out", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Build_MA_TA_MA, MA_onboard_out), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TA_MA::Decode_P015 1", NULL, sizeof(outC_Decode_P015_TA_MA), offsetof(outC_Build_MA_TA_MA, _1_Context_1), NULL, NULL, NULL, &scope_30, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_MA::StoreRaw_MA 1", NULL, sizeof(outC_StoreRaw_MA_TA_MA), offsetof(outC_Build_MA_TA_MA, Context_1), NULL, NULL, NULL, &scope_31, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), offsetof(outC_Build_MA_TA_MA, _L1), &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(P015_OBU_T_TM), offsetof(outC_Build_MA_TA_MA, _L3), &_Type_P015_OBU_T_TM_Utils, NULL, NULL, &scope_419, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_MA_TA_MA, _L5), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_MA_TA_MA, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(P003V1_OBU_T_TM_baseline2), offsetof(outC_Build_MA_TA_MA, _L7), &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 8},
  /* 10 */ { MAP_OUTPUT, "new_MA", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, new_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_OUTPUT, "vald_MA", NULL, sizeof(kcg_bool), offsetof(outC_Build_MA_TA_MA, vald_MA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_12 = {
  "TA_MA::Build_MA/ Build_MA_TA_MA",
  scope_12_entries, 12,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:then: */
static const MappingEntry scope_11_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_LRBG_only 1", NULL, sizeof(outC_Update_LRBG_only_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _2_Context_1), NULL, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_29, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L1_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L2_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_404, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L3_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4}
};
static const MappingScope scope_11 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:then:",
  scope_11_entries, 5,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:then: */
static const MappingEntry scope_10_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_GP_only 1", NULL, sizeof(outC_Update_GP_only_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _3_Context_1), NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L110_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L29_IfBlock1), &_Type_P021_OBU_T_TM_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_477, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L48_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4}
};
static const MappingScope scope_10 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:then:",
  scope_10_entries, 5,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:then: */
static const MappingEntry scope_9_entries[6] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_GP_then_LRBG 1", NULL, sizeof(outC_Update_GP_then_LRBG_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _4_Context_1), NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_27, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L114_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L213_IfBlock1), &_Type_P021_OBU_T_TM_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_477, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L412_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_404, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L511_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5}
};
static const MappingScope scope_9 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:then:",
  scope_9_entries, 6,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:then: */
static const MappingEntry scope_8_entries[6] = {
  /* 0 */ { MAP_INSTANCE, "TA_Gradient::Update_LRBG_then_GP 1", NULL, sizeof(outC_Update_LRBG_then_GP_TA_Gradient), offsetof(outC_Build_GradientProfile_TA_Gradient, _5_Context_1), NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L119_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L218_IfBlock1), &_Type_P021_OBU_T_TM_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_477, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L417_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_404, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L516_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L615_IfBlock1), &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5}
};
static const MappingScope scope_8 = {
  "TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:then:",
  scope_8_entries, 6,
};

/* TA_Gradient::Build_GradientProfile/ Build_GradientProfile_TA_GradientIfBlock1:else:else:else:else: */
static const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, _L121_IfBlock1), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_433, 1, 0},
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
  /* 1 */ { MAP_OUTPUT, "GP", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), offsetof(outC_Build_GradientProfile_TA_Gradient, GP), &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 41},
  /* 2 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 4},
  /* 3 */ { MAP_LOCAL, "P21_local", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, P21_local), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 13},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_LRBG 1", NULL, sizeof(outC_Eval_LRBG_TA_Lib_internal), offsetof(outC_Build_GradientProfile_TA_Gradient, _1_Context_1), NULL, NULL, NULL, &scope_20, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM::Read_P021 1", NULL, sizeof(outC_Read_P021_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, Context_1), NULL, NULL, NULL, &scope_19, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_GradientProfile_TA_Gradient, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 14},
  /* 7 */ { MAP_LOCAL, "_L103", NULL, sizeof(NID_BG), offsetof(outC_Build_GradientProfile_TA_Gradient, _L103), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 19},
  /* 8 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L104), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 9 */ { MAP_LOCAL, "_L107", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_GradientProfile_TA_Gradient, _L107), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 21},
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
  /* 30 */ { MAP_LOCAL, "_L42", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_GradientProfile_TA_Gradient, _L42), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_Build_GradientProfile_TA_Gradient, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L60", NULL, sizeof(P021_OBU_T_TM), offsetof(outC_Build_GradientProfile_TA_Gradient, _L60), &_Type_P021_OBU_T_TM_Utils, NULL, NULL, &scope_477, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L73", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_GradientProfile_TA_Gradient, _L73), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_413, 1, 18},
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

/* TrackAtlas::TrackAtlas/ TrackAtlas_TrackAtlas */
static const MappingEntry scope_1_entries[68] = {
  /* 0 */ { MAP_INSTANCE, "MA_Request::Manage_MA_Request 1", NULL, sizeof(outC_Manage_MA_Request_MA_Request), (size_t)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_18, 1, 7},
  /* 1 */ { MAP_OUTPUT, "MA_onboard_out", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), (size_t)&outputs_ctx.MA_onboard_out, &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 50},
  /* 2 */ { MAP_OUTPUT, "MA_request_out", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&outputs_ctx.MA_request_out, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 52},
  /* 3 */ { MAP_OUTPUT, "MRSP", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), (size_t)&outputs_ctx.MRSP, &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_471, 1, 51},
  /* 4 */ { MAP_INPUT, "MessageIn", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&inputs_ctx.MessageIn, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 53},
  /* 5 */ { MAP_INPUT, "ModeAndLevel_in", NULL, sizeof(T_Mode_Level_Level_And_Mode_Types_Pkg), (size_t)&inputs_ctx.ModeAndLevel_in, &_Type_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 54},
  /* 6 */ { MAP_LOCAL, "MovementAuthority_Local", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), (size_t)&outputs_ctx.MovementAuthority_Local, &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 8},
  /* 7 */ { MAP_OUTPUT, "NV_raw_out", NULL, sizeof(P003_OBU_T_TM), (size_t)&outputs_ctx.NV_raw_out, &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_449, 1, 46},
  /* 8 */ { MAP_INPUT, "P203V1_onboard", NULL, sizeof(P203V1_OBU_T_TM_baseline2), (size_t)&inputs_ctx.P203V1_onboard, &_Type_P203V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 66},
  /* 9 */ { MAP_INPUT, "PermanentDataP003", NULL, sizeof(P003_permanent_data_T_TM_baseline2), (size_t)&inputs_ctx.PermanentDataP003, &_Type_P003_permanent_data_T_TM_baseline2_Utils, NULL, NULL, &scope_448, 1, 67},
  /* 10 */ { MAP_INPUT, "SystemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.SystemTime, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 58},
  /* 11 */ { MAP_INSTANCE, "TA_Export::GradientProfile_to_DMI 1", NULL, sizeof(outC_GradientProfile_to_DMI_TA_Export), (size_t)&outputs_ctx._6_Context_1, NULL, NULL, NULL, &scope_15, 1, 4},
  /* 12 */ { MAP_INSTANCE, "TA_Export::TA_to_ML 1", NULL, sizeof(outC_TA_to_ML_TA_Export), (size_t)&outputs_ctx._3_Context_1, NULL, NULL, NULL, &scope_17, 1, 6},
  /* 13 */ { MAP_INSTANCE, "TA_Gradient::Build_GradientProfile 1", NULL, sizeof(outC_Build_GradientProfile_TA_Gradient), (size_t)&outputs_ctx._5_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 14 */ { MAP_INSTANCE, "TA_MA::Build_MA 1", NULL, sizeof(outC_Build_MA_TA_MA), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_12, 1, 1},
  /* 15 */ { MAP_INSTANCE, "TA_MRSP::Build_MRSP 1", NULL, sizeof(outC_Build_MRSP_TA_MRSP), (size_t)&outputs_ctx._7_Context_1, NULL, NULL, NULL, &scope_13, 1, 2},
  /* 16 */ { MAP_INSTANCE, "TA_Storage::StoreRaw_NV 1", NULL, sizeof(outC_StoreRaw_NV_TA_Storage), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_14, 1, 3},
  /* 17 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_OBU_P003_OBU 1", NULL, sizeof(outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2), (size_t)&outputs_ctx._4_Context_1, NULL, NULL, NULL, &scope_16, 1, 5},
  /* 18 */ { MAP_OUTPUT, "To_ModeAndLevel", NULL, sizeof(DataForModeAndLevel_t_TrackAtlasTypes), (size_t)&outputs_ctx.To_ModeAndLevel, &_Type_DataForModeAndLevel_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_429, 1, 47},
  /* 19 */ { MAP_INPUT, "TrainData_in", NULL, sizeof(FromTIU_t_TrackAtlasTypes), (size_t)&inputs_ctx.TrainData_in, &_Type_FromTIU_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 55},
  /* 20 */ { MAP_INPUT, "TrainPositionIn", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), (size_t)&inputs_ctx.TrainPositionIn, &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 56},
  /* 21 */ { MAP_LOCAL, "_L14", NULL, sizeof(GradientProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L14, &_Type_GradientProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_433, 1, 10},
  /* 22 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 24 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L17, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 25 */ { MAP_LOCAL, "_L19", NULL, sizeof(MRSP_Profile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L19, &_Type_MRSP_Profile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_471, 1, 13},
  /* 26 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 27 */ { MAP_LOCAL, "_L21", NULL, sizeof(P003V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L21, &_Type_P003V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_436, 1, 15},
  /* 28 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L22, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 29 */ { MAP_LOCAL, "_L23", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&outputs_ctx._L23, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 17},
  /* 30 */ { MAP_LOCAL, "_L24", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&outputs_ctx._L24, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 18},
  /* 31 */ { MAP_LOCAL, "_L25", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), (size_t)&outputs_ctx._L25, &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 19},
  /* 32 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_Mode_Level_Level_And_Mode_Types_Pkg), (size_t)&outputs_ctx._L26, &_Type_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 20},
  /* 33 */ { MAP_LOCAL, "_L27", NULL, sizeof(FromTIU_t_TrackAtlasTypes), (size_t)&outputs_ctx._L27, &_Type_FromTIU_t_TrackAtlasTypes_Utils, NULL, NULL, NULL, 1, 21},
  /* 34 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L28, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 35 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 36 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L30, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 24},
  /* 37 */ { MAP_LOCAL, "_L31", NULL, sizeof(GradientProfile_for_DMI_t_TrackAtlasTypes), (size_t)&outputs_ctx._L31, &_Type_GradientProfile_for_DMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_432, 1, 25},
  /* 38 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L32, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 39 */ { MAP_LOCAL, "_L34", NULL, sizeof(DataForSupervision_nextGen_t_TrackAtlasTypes), (size_t)&outputs_ctx._L34, &_Type_DataForSupervision_nextGen_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_473, 1, 27},
  /* 40 */ { MAP_LOCAL, "_L35", NULL, sizeof(DataForDMI_t_TrackAtlasTypes), (size_t)&outputs_ctx._L35, &_Type_DataForDMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_472, 1, 28},
  /* 41 */ { MAP_LOCAL, "_L50", NULL, sizeof(P003_OBU_T_TM), (size_t)&outputs_ctx._L50, &_Type_P003_OBU_T_TM_Utils, NULL, NULL, &scope_449, 1, 29},
  /* 42 */ { MAP_LOCAL, "_L51", NULL, sizeof(P203V1_OBU_T_TM_baseline2), (size_t)&outputs_ctx._L51, &_Type_P203V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 30},
  /* 43 */ { MAP_LOCAL, "_L52", NULL, sizeof(P003_permanent_data_T_TM_baseline2), (size_t)&outputs_ctx._L52, &_Type_P003_permanent_data_T_TM_baseline2_Utils, NULL, NULL, &scope_448, 1, 31},
  /* 44 */ { MAP_LOCAL, "_L54", NULL, sizeof(DataForModeAndLevel_t_TrackAtlasTypes), (size_t)&outputs_ctx._L54, &_Type_DataForModeAndLevel_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_429, 1, 32},
  /* 45 */ { MAP_LOCAL, "_L64", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), (size_t)&outputs_ctx._L64, &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_373, 1, 42},
  /* 46 */ { MAP_LOCAL, "_L65", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L65, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 41},
  /* 47 */ { MAP_LOCAL, "_L66", NULL, sizeof(T_TRAIN), (size_t)&outputs_ctx._L66, &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 40},
  /* 48 */ { MAP_LOCAL, "_L67", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&outputs_ctx._L67, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_388, 1, 39},
  /* 49 */ { MAP_LOCAL, "_L68", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L68, &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_400, 1, 38},
  /* 50 */ { MAP_LOCAL, "_L69", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), (size_t)&outputs_ctx._L69, &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_371, 1, 37},
  /* 51 */ { MAP_LOCAL, "_L70", NULL, sizeof(Driver2MAR_T_MA_Request), (size_t)&outputs_ctx._L70, &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_405, 1, 36},
  /* 52 */ { MAP_LOCAL, "_L71", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), (size_t)&outputs_ctx._L71, &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_406, 1, 35},
  /* 53 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L72, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 54 */ { MAP_LOCAL, "_L73", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L73, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 33},
  /* 55 */ { MAP_LOCAL, "_L74", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), (size_t)&outputs_ctx._L74, &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_404, 1, 44},
  /* 56 */ { MAP_LOCAL, "_L75", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&outputs_ctx._L75, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_414, 1, 43},
  /* 57 */ { MAP_LOCAL, "_L76", NULL, sizeof(MovementAuthority_t_TrackAtlasTypes), (size_t)&outputs_ctx._L76, &_Type_MovementAuthority_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_393, 1, 45},
  /* 58 */ { MAP_INPUT, "fromDriverToMA_R", NULL, sizeof(Driver2MAR_T_MA_Request), (size_t)&inputs_ctx.fromDriverToMA_R, &_Type_Driver2MAR_T_MA_Request_Utils, NULL, NULL, &scope_405, 1, 61},
  /* 59 */ { MAP_INPUT, "odometry", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.odometry, &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_400, 1, 60},
  /* 60 */ { MAP_INPUT, "packet0", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), (size_t)&inputs_ctx.packet0, &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_373, 1, 63},
  /* 61 */ { MAP_INPUT, "packet1", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), (size_t)&inputs_ctx.packet1, &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_371, 1, 64},
  /* 62 */ { MAP_INPUT, "preindicationLocation", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.preindicationLocation, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 59},
  /* 63 */ { MAP_INPUT, "t_train", NULL, sizeof(T_TRAIN), (size_t)&inputs_ctx.t_train, &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 65},
  /* 64 */ { MAP_OUTPUT, "to_DMI", NULL, sizeof(DataForDMI_t_TrackAtlasTypes), (size_t)&outputs_ctx.to_DMI, &_Type_DataForDMI_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_472, 1, 48},
  /* 65 */ { MAP_OUTPUT, "to_Supervision", NULL, sizeof(DataForSupervision_nextGen_t_TrackAtlasTypes), (size_t)&outputs_ctx.to_Supervision, &_Type_DataForSupervision_nextGen_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_473, 1, 49},
  /* 66 */ { MAP_INPUT, "trainProps", NULL, sizeof(trainProperties_T_TrainPosition_Types_Pck), (size_t)&inputs_ctx.trainProps, &_Type_trainProperties_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_406, 1, 62},
  /* 67 */ { MAP_INPUT, "train_length_TOBEREPLACED", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), (size_t)&inputs_ctx.train_length_TOBEREPLACED, &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 57}
};
static const MappingScope scope_1 = {
  "TrackAtlas::TrackAtlas/ TrackAtlas_TrackAtlas",
  scope_1_entries, 68,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TrackAtlas::TrackAtlas", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

