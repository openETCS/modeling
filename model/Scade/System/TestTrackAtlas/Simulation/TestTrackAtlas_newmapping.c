/* TestTrackAtlas_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TestTrackAtlas_newtype.h"
#include "TestTrackAtlas_newmapping.h"

/* iterators */
static const MappingIterator iter_array_22;
static const MappingIterator iter_array_15;
static const MappingIterator iter_array_150;
static const MappingIterator iter_array_21;
static const MappingIterator iter_array_350;
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
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_396;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_50;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_99;
static const MappingIterator iter_array_64;
static const MappingIterator iter_array_2;
static const MappingIterator iter_array_7;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_231;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_128;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_foldi_32;
static const MappingIterator iter_map_32;
static const MappingIterator iter_foldi_128;
static const MappingIterator iter_foldi_99;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_231;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_foldwi_50;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldwi_30;
static const MappingIterator iter_mapwi_32;
static const MappingIterator iter_foldi_50;
static const MappingIterator iter_mapwi_33;
static const MappingIterator iter_array_22 = { "array", 22, 22, NULL};
static const MappingIterator iter_array_15 = { "array", 15, 15, NULL};
static const MappingIterator iter_array_150 = { "array", 150, 150, NULL};
static const MappingIterator iter_array_21 = { "array", 21, 21, NULL};
static const MappingIterator iter_array_350 = { "array", 350, 350, NULL};
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
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_396 = { "array", 396, 396, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_50 = { "array", 50, 50, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_231 = { "array", 231, 231, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_128 = { "array", 128, 128, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_foldi_32 = { "foldi", 32, 32, NULL};
static const MappingIterator iter_map_32 = { "map", 32, 32, NULL};
static const MappingIterator iter_foldi_128 = { "foldi", 128, 128, NULL};
static const MappingIterator iter_foldi_99 = { "foldi", 99, 99, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_231 = { "foldi", 231, 231, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};
static const MappingIterator iter_foldwi_50 = { "foldwi", 50, 50, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL};
static const MappingIterator iter_mapwi_32 = { "mapwi", 32, 32, NULL};
static const MappingIterator iter_foldi_50 = { "foldi", 50, 50, NULL};
static const MappingIterator iter_mapwi_33 = { "mapwi", 33, 33, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_545, 1);
MAP_DECL(scope_544, 1);
MAP_DECL(scope_543, 1);
MAP_DECL(scope_542, 1);
MAP_DECL(scope_541, 1);
MAP_DECL(scope_540, 1);
MAP_DECL(scope_539, 1);
MAP_DECL(scope_538, 1);
MAP_DECL(scope_537, 1);
MAP_DECL(scope_536, 1);
MAP_DECL(scope_535, 1);
MAP_DECL(scope_534, 1);
MAP_DECL(scope_533, 1);
MAP_DECL(scope_532, 1);
MAP_DECL(scope_531, 1);
MAP_DECL(scope_530, 1);
MAP_DECL(scope_529, 1);
MAP_DECL(scope_528, 1);
MAP_DECL(scope_527, 1);
MAP_DECL(scope_526, 1);
MAP_DECL(scope_525, 1);
MAP_DECL(scope_524, 1);
MAP_DECL(scope_523, 1);
MAP_DECL(scope_522, 1);
MAP_DECL(scope_521, 1);
MAP_DECL(scope_520, 1);
MAP_DECL(scope_519, 1);
MAP_DECL(scope_518, 1);
MAP_DECL(scope_517, 1);
MAP_DECL(scope_516, 1);
MAP_DECL(scope_515, 1);
MAP_DECL(scope_514, 1);
MAP_DECL(scope_513, 1);
MAP_DECL(scope_512, 1);
MAP_DECL(scope_511, 1);
MAP_DECL(scope_510, 1);
MAP_DECL(scope_509, 1);
MAP_DECL(scope_508, 1);
MAP_DECL(scope_507, 1);
MAP_DECL(scope_506, 1);
MAP_DECL(scope_505, 1);
MAP_DECL(scope_504, 1);
MAP_DECL(scope_503, 4);
MAP_DECL(scope_502, 1);
MAP_DECL(scope_501, 6);
MAP_DECL(scope_500, 1);
MAP_DECL(scope_499, 3);
MAP_DECL(scope_498, 3);
MAP_DECL(scope_497, 1);
MAP_DECL(scope_496, 7);
MAP_DECL(scope_495, 9);
MAP_DECL(scope_494, 4);
MAP_DECL(scope_493, 1);
MAP_DECL(scope_492, 5);
MAP_DECL(scope_491, 14);
MAP_DECL(scope_490, 8);
MAP_DECL(scope_489, 3);
MAP_DECL(scope_488, 15);
MAP_DECL(scope_487, 7);
MAP_DECL(scope_486, 3);
MAP_DECL(scope_485, 4);
MAP_DECL(scope_484, 1);
MAP_DECL(scope_483, 6);
MAP_DECL(scope_482, 11);
MAP_DECL(scope_481, 3);
MAP_DECL(scope_480, 2);
MAP_DECL(scope_479, 15);
MAP_DECL(scope_478, 26);
MAP_DECL(scope_477, 1);
MAP_DECL(scope_476, 1);
MAP_DECL(scope_475, 11);
MAP_DECL(scope_474, 1);
MAP_DECL(scope_473, 3);
MAP_DECL(scope_472, 1);
MAP_DECL(scope_471, 1);
MAP_DECL(scope_470, 1);
MAP_DECL(scope_469, 10);
MAP_DECL(scope_468, 1);
MAP_DECL(scope_467, 3);
MAP_DECL(scope_466, 1);
MAP_DECL(scope_465, 12);
MAP_DECL(scope_464, 1);
MAP_DECL(scope_463, 1);
MAP_DECL(scope_462, 5);
MAP_DECL(scope_461, 1);
MAP_DECL(scope_460, 1);
MAP_DECL(scope_459, 1);
MAP_DECL(scope_458, 2);
MAP_DECL(scope_457, 1);
MAP_DECL(scope_456, 1);
MAP_DECL(scope_455, 1);
MAP_DECL(scope_454, 1);
MAP_DECL(scope_453, 14);
MAP_DECL(scope_452, 1);
MAP_DECL(scope_451, 7);
MAP_DECL(scope_450, 1);
MAP_DECL(scope_449, 10);
MAP_DECL(scope_448, 1);
MAP_DECL(scope_447, 1);
MAP_DECL(scope_446, 24);
MAP_DECL(scope_445, 1);
MAP_DECL(scope_444, 4);
MAP_DECL(scope_443, 1);
MAP_DECL(scope_442, 6);
MAP_DECL(scope_441, 4);
MAP_DECL(scope_440, 7);
MAP_DECL(scope_439, 11);
MAP_DECL(scope_438, 7);
MAP_DECL(scope_437, 8);
MAP_DECL(scope_436, 7);
MAP_DECL(scope_435, 6);
MAP_DECL(scope_434, 11);
MAP_DECL(scope_433, 8);
MAP_DECL(scope_432, 7);
MAP_DECL(scope_431, 15);
MAP_DECL(scope_430, 7);
MAP_DECL(scope_429, 2);
MAP_DECL(scope_428, 1);
MAP_DECL(scope_427, 5);
MAP_DECL(scope_426, 1);
MAP_DECL(scope_425, 12);
MAP_DECL(scope_420, 5);
MAP_DECL(scope_419, 10);
MAP_DECL(scope_418, 7);
MAP_DECL(scope_417, 10);
MAP_DECL(scope_416, 6);
MAP_DECL(scope_415, 10);
MAP_DECL(scope_414, 10);
MAP_DECL(scope_413, 10);
MAP_DECL(scope_412, 8);
MAP_DECL(scope_411, 6);
MAP_DECL(scope_410, 10);
MAP_DECL(scope_409, 8);
MAP_DECL(scope_408, 8);
MAP_DECL(scope_407, 8);
MAP_DECL(scope_406, 28);
MAP_DECL(scope_405, 19);
MAP_DECL(scope_404, 8);
MAP_DECL(scope_403, 6);
MAP_DECL(scope_402, 15);
MAP_DECL(scope_401, 10);
MAP_DECL(scope_400, 2);
MAP_DECL(scope_399, 2);
MAP_DECL(scope_398, 2);
MAP_DECL(scope_397, 2);
MAP_DECL(scope_396, 3);
MAP_DECL(scope_395, 3);
MAP_DECL(scope_394, 3);
MAP_DECL(scope_393, 6);
MAP_DECL(scope_392, 54);
MAP_DECL(scope_391, 2);
MAP_DECL(scope_390, 2);
MAP_DECL(scope_389, 2);
MAP_DECL(scope_388, 2);
MAP_DECL(scope_387, 3);
MAP_DECL(scope_386, 3);
MAP_DECL(scope_385, 3);
MAP_DECL(scope_384, 6);
MAP_DECL(scope_383, 26);
MAP_DECL(scope_382, 2);
MAP_DECL(scope_381, 2);
MAP_DECL(scope_380, 2);
MAP_DECL(scope_379, 2);
MAP_DECL(scope_378, 3);
MAP_DECL(scope_377, 3);
MAP_DECL(scope_376, 3);
MAP_DECL(scope_375, 6);
MAP_DECL(scope_374, 38);
MAP_DECL(scope_373, 2);
MAP_DECL(scope_372, 2);
MAP_DECL(scope_371, 2);
MAP_DECL(scope_370, 2);
MAP_DECL(scope_369, 3);
MAP_DECL(scope_368, 3);
MAP_DECL(scope_367, 3);
MAP_DECL(scope_366, 6);
MAP_DECL(scope_365, 41);
MAP_DECL(scope_364, 2);
MAP_DECL(scope_363, 2);
MAP_DECL(scope_362, 2);
MAP_DECL(scope_361, 2);
MAP_DECL(scope_360, 3);
MAP_DECL(scope_359, 3);
MAP_DECL(scope_358, 3);
MAP_DECL(scope_357, 6);
MAP_DECL(scope_356, 50);
MAP_DECL(scope_355, 2);
MAP_DECL(scope_354, 2);
MAP_DECL(scope_353, 2);
MAP_DECL(scope_352, 2);
MAP_DECL(scope_351, 3);
MAP_DECL(scope_350, 3);
MAP_DECL(scope_349, 3);
MAP_DECL(scope_348, 6);
MAP_DECL(scope_347, 39);
MAP_DECL(scope_346, 26);
MAP_DECL(scope_345, 21);
MAP_DECL(scope_344, 2);
MAP_DECL(scope_343, 2);
MAP_DECL(scope_342, 2);
MAP_DECL(scope_341, 2);
MAP_DECL(scope_340, 3);
MAP_DECL(scope_339, 3);
MAP_DECL(scope_338, 3);
MAP_DECL(scope_337, 6);
MAP_DECL(scope_336, 37);
MAP_DECL(scope_335, 12);
MAP_DECL(scope_334, 26);
MAP_DECL(scope_333, 17);
MAP_DECL(scope_332, 17);
MAP_DECL(scope_331, 17);
MAP_DECL(scope_330, 17);
MAP_DECL(scope_329, 17);
MAP_DECL(scope_328, 26);
MAP_DECL(scope_327, 17);
MAP_DECL(scope_326, 10);
MAP_DECL(scope_325, 9);
MAP_DECL(scope_324, 9);
MAP_DECL(scope_323, 9);
MAP_DECL(scope_322, 9);
MAP_DECL(scope_321, 9);
MAP_DECL(scope_320, 9);
MAP_DECL(scope_319, 9);
MAP_DECL(scope_318, 16);
MAP_DECL(scope_317, 6);
MAP_DECL(scope_316, 27);
MAP_DECL(scope_315, 7);
MAP_DECL(scope_314, 13);
MAP_DECL(scope_313, 8);
MAP_DECL(scope_312, 6);
MAP_DECL(scope_311, 6);
MAP_DECL(scope_310, 12);
MAP_DECL(scope_309, 14);
MAP_DECL(scope_308, 16);
MAP_DECL(scope_307, 4);
MAP_DECL(scope_306, 16);
MAP_DECL(scope_305, 14);
MAP_DECL(scope_304, 11);
MAP_DECL(scope_303, 20);
MAP_DECL(scope_302, 11);
MAP_DECL(scope_301, 9);
MAP_DECL(scope_300, 1);
MAP_DECL(scope_299, 1);
MAP_DECL(scope_298, 3);
MAP_DECL(scope_297, 4);
MAP_DECL(scope_296, 3);
MAP_DECL(scope_295, 3);
MAP_DECL(scope_294, 3);
MAP_DECL(scope_293, 3);
MAP_DECL(scope_292, 3);
MAP_DECL(scope_291, 4);
MAP_DECL(scope_290, 14);
MAP_DECL(scope_289, 19);
MAP_DECL(scope_288, 12);
MAP_DECL(scope_287, 11);
MAP_DECL(scope_286, 2);
MAP_DECL(scope_285, 2);
MAP_DECL(scope_284, 2);
MAP_DECL(scope_283, 3);
MAP_DECL(scope_282, 3);
MAP_DECL(scope_281, 6);
MAP_DECL(scope_280, 6);
MAP_DECL(scope_279, 18);
MAP_DECL(scope_278, 2);
MAP_DECL(scope_277, 2);
MAP_DECL(scope_276, 2);
MAP_DECL(scope_275, 2);
MAP_DECL(scope_274, 2);
MAP_DECL(scope_273, 3);
MAP_DECL(scope_272, 3);
MAP_DECL(scope_271, 3);
MAP_DECL(scope_270, 3);
MAP_DECL(scope_269, 6);
MAP_DECL(scope_268, 6);
MAP_DECL(scope_267, 6);
MAP_DECL(scope_266, 2);
MAP_DECL(scope_265, 2);
MAP_DECL(scope_264, 2);
MAP_DECL(scope_263, 3);
MAP_DECL(scope_262, 3);
MAP_DECL(scope_261, 6);
MAP_DECL(scope_260, 6);
MAP_DECL(scope_259, 6);
MAP_DECL(scope_258, 6);
MAP_DECL(scope_257, 6);
MAP_DECL(scope_256, 6);
MAP_DECL(scope_255, 6);
MAP_DECL(scope_254, 9);
MAP_DECL(scope_253, 6);
MAP_DECL(scope_252, 2);
MAP_DECL(scope_251, 2);
MAP_DECL(scope_250, 2);
MAP_DECL(scope_249, 3);
MAP_DECL(scope_248, 3);
MAP_DECL(scope_247, 6);
MAP_DECL(scope_246, 11);
MAP_DECL(scope_245, 11);
MAP_DECL(scope_244, 11);
MAP_DECL(scope_243, 11);
MAP_DECL(scope_242, 6);
MAP_DECL(scope_241, 14);
MAP_DECL(scope_240, 8);
MAP_DECL(scope_239, 11);
MAP_DECL(scope_238, 29);
MAP_DECL(scope_237, 1);
MAP_DECL(scope_236, 1);
MAP_DECL(scope_235, 1);
MAP_DECL(scope_234, 3);
MAP_DECL(scope_233, 3);
MAP_DECL(scope_232, 16);
MAP_DECL(scope_231, 12);
MAP_DECL(scope_230, 25);
MAP_DECL(scope_229, 6);
MAP_DECL(scope_228, 9);
MAP_DECL(scope_227, 23);
MAP_DECL(scope_226, 4);
MAP_DECL(scope_225, 20);
MAP_DECL(scope_224, 27);
MAP_DECL(scope_223, 20);
MAP_DECL(scope_222, 27);
MAP_DECL(scope_221, 2);
MAP_DECL(scope_220, 2);
MAP_DECL(scope_219, 2);
MAP_DECL(scope_218, 2);
MAP_DECL(scope_217, 3);
MAP_DECL(scope_216, 3);
MAP_DECL(scope_215, 3);
MAP_DECL(scope_214, 6);
MAP_DECL(scope_213, 29);
MAP_DECL(scope_212, 20);
MAP_DECL(scope_211, 2);
MAP_DECL(scope_210, 2);
MAP_DECL(scope_209, 2);
MAP_DECL(scope_208, 2);
MAP_DECL(scope_207, 3);
MAP_DECL(scope_206, 3);
MAP_DECL(scope_205, 3);
MAP_DECL(scope_204, 6);
MAP_DECL(scope_203, 2);
MAP_DECL(scope_202, 2);
MAP_DECL(scope_201, 2);
MAP_DECL(scope_200, 2);
MAP_DECL(scope_199, 3);
MAP_DECL(scope_198, 3);
MAP_DECL(scope_197, 3);
MAP_DECL(scope_196, 6);
MAP_DECL(scope_195, 35);
MAP_DECL(scope_194, 22);
MAP_DECL(scope_193, 25);
MAP_DECL(scope_192, 20);
MAP_DECL(scope_191, 25);
MAP_DECL(scope_190, 20);
MAP_DECL(scope_189, 20);
MAP_DECL(scope_188, 25);
MAP_DECL(scope_187, 20);
MAP_DECL(scope_186, 25);
MAP_DECL(scope_185, 25);
MAP_DECL(scope_184, 20);
MAP_DECL(scope_183, 27);
MAP_DECL(scope_182, 21);
MAP_DECL(scope_181, 20);
MAP_DECL(scope_180, 2);
MAP_DECL(scope_179, 2);
MAP_DECL(scope_178, 2);
MAP_DECL(scope_177, 2);
MAP_DECL(scope_176, 3);
MAP_DECL(scope_175, 3);
MAP_DECL(scope_174, 3);
MAP_DECL(scope_173, 6);
MAP_DECL(scope_172, 29);
MAP_DECL(scope_171, 25);
MAP_DECL(scope_170, 20);
MAP_DECL(scope_169, 25);
MAP_DECL(scope_168, 20);
MAP_DECL(scope_167, 27);
MAP_DECL(scope_166, 20);
MAP_DECL(scope_165, 25);
MAP_DECL(scope_164, 20);
MAP_DECL(scope_163, 20);
MAP_DECL(scope_162, 2);
MAP_DECL(scope_161, 2);
MAP_DECL(scope_160, 2);
MAP_DECL(scope_159, 2);
MAP_DECL(scope_158, 3);
MAP_DECL(scope_157, 3);
MAP_DECL(scope_156, 3);
MAP_DECL(scope_155, 6);
MAP_DECL(scope_154, 2);
MAP_DECL(scope_153, 2);
MAP_DECL(scope_152, 2);
MAP_DECL(scope_151, 2);
MAP_DECL(scope_150, 3);
MAP_DECL(scope_149, 3);
MAP_DECL(scope_148, 3);
MAP_DECL(scope_147, 6);
MAP_DECL(scope_146, 35);
MAP_DECL(scope_145, 20);
MAP_DECL(scope_144, 27);
MAP_DECL(scope_143, 27);
MAP_DECL(scope_142, 20);
MAP_DECL(scope_141, 25);
MAP_DECL(scope_140, 20);
MAP_DECL(scope_139, 27);
MAP_DECL(scope_138, 20);
MAP_DECL(scope_137, 6);
MAP_DECL(scope_136, 2);
MAP_DECL(scope_135, 2);
MAP_DECL(scope_134, 2);
MAP_DECL(scope_133, 2);
MAP_DECL(scope_132, 2);
MAP_DECL(scope_131, 3);
MAP_DECL(scope_130, 3);
MAP_DECL(scope_129, 3);
MAP_DECL(scope_128, 3);
MAP_DECL(scope_127, 6);
MAP_DECL(scope_126, 2);
MAP_DECL(scope_125, 2);
MAP_DECL(scope_124, 2);
MAP_DECL(scope_123, 2);
MAP_DECL(scope_122, 3);
MAP_DECL(scope_121, 3);
MAP_DECL(scope_120, 3);
MAP_DECL(scope_119, 6);
MAP_DECL(scope_118, 6);
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
MAP_DECL(scope_107, 6);
MAP_DECL(scope_106, 2);
MAP_DECL(scope_105, 2);
MAP_DECL(scope_104, 2);
MAP_DECL(scope_103, 3);
MAP_DECL(scope_102, 3);
MAP_DECL(scope_101, 6);
MAP_DECL(scope_100, 9);
MAP_DECL(scope_99, 6);
MAP_DECL(scope_98, 6);
MAP_DECL(scope_97, 7);
MAP_DECL(scope_96, 9);
MAP_DECL(scope_95, 9);
MAP_DECL(scope_94, 9);
MAP_DECL(scope_93, 9);
MAP_DECL(scope_92, 24);
MAP_DECL(scope_91, 10);
MAP_DECL(scope_90, 12);
MAP_DECL(scope_89, 17);
MAP_DECL(scope_88, 15);
MAP_DECL(scope_87, 5);
MAP_DECL(scope_86, 5);
MAP_DECL(scope_85, 5);
MAP_DECL(scope_84, 5);
MAP_DECL(scope_83, 5);
MAP_DECL(scope_82, 5);
MAP_DECL(scope_81, 5);
MAP_DECL(scope_80, 5);
MAP_DECL(scope_79, 5);
MAP_DECL(scope_78, 5);
MAP_DECL(scope_77, 1);
MAP_DECL(scope_76, 3);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 3);
MAP_DECL(scope_73, 3);
MAP_DECL(scope_72, 3);
MAP_DECL(scope_71, 3);
MAP_DECL(scope_70, 3);
MAP_DECL(scope_69, 3);
MAP_DECL(scope_68, 3);
MAP_DECL(scope_67, 3);
MAP_DECL(scope_66, 5);
MAP_DECL(scope_65, 5);
MAP_DECL(scope_64, 5);
MAP_DECL(scope_63, 5);
MAP_DECL(scope_62, 5);
MAP_DECL(scope_61, 5);
MAP_DECL(scope_60, 5);
MAP_DECL(scope_59, 5);
MAP_DECL(scope_58, 5);
MAP_DECL(scope_57, 5);
MAP_DECL(scope_56, 1);
MAP_DECL(scope_55, 3);
MAP_DECL(scope_54, 3);
MAP_DECL(scope_53, 3);
MAP_DECL(scope_52, 3);
MAP_DECL(scope_51, 3);
MAP_DECL(scope_50, 3);
MAP_DECL(scope_49, 3);
MAP_DECL(scope_48, 3);
MAP_DECL(scope_47, 3);
MAP_DECL(scope_46, 3);
MAP_DECL(scope_45, 16);
MAP_DECL(scope_44, 44);
MAP_DECL(scope_43, 19);
MAP_DECL(scope_42, 13);
MAP_DECL(scope_41, 11);
MAP_DECL(scope_40, 2);
MAP_DECL(scope_39, 2);
MAP_DECL(scope_38, 1);
MAP_DECL(scope_37, 3);
MAP_DECL(scope_36, 3);
MAP_DECL(scope_35, 5);
MAP_DECL(scope_34, 7);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 2);
MAP_DECL(scope_31, 2);
MAP_DECL(scope_30, 2);
MAP_DECL(scope_29, 3);
MAP_DECL(scope_28, 3);
MAP_DECL(scope_27, 3);
MAP_DECL(scope_26, 6);
MAP_DECL(scope_25, 2);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 2);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 3);
MAP_DECL(scope_20, 3);
MAP_DECL(scope_19, 3);
MAP_DECL(scope_18, 6);
MAP_DECL(scope_17, 6);
MAP_DECL(scope_16, 21);
MAP_DECL(scope_15, 20);
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 3);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 3);
MAP_DECL(scope_6, 3);
MAP_DECL(scope_5, 4);
MAP_DECL(scope_4, 10);
MAP_DECL(scope_3, 15);
MAP_DECL(scope_2, 32);
MAP_DECL(scope_1, 20);
MAP_DECL(scope_0, 1);

/* array_int_22 */
static const MappingEntry scope_545_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_22, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_545 = {
  "array_int_22",
  scope_545_entries, 1,
};

/* array_int_15 */
static const MappingEntry scope_544_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_15, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_544 = {
  "array_int_15",
  scope_544_entries, 1,
};

/* array_int_150 */
static const MappingEntry scope_543_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_150, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_543 = {
  "array_int_150",
  scope_543_entries, 1,
};

/* array_int_21 */
static const MappingEntry scope_542_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_21, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_542 = {
  "array_int_21",
  scope_542_entries, 1,
};

/* array_int_350 */
static const MappingEntry scope_541_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_350, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_541 = {
  "array_int_350",
  scope_541_entries, 1,
};

/* array_int_4_32_128 */
static const MappingEntry scope_540_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(array_int_4_32), 0, &_Type_array_int_4_32_Utils, NULL, NULL, &scope_448, 1, 0}
};
static const MappingScope scope_540 = {
  "array_int_4_32_128",
  scope_540_entries, 1,
};

/* array_int_9 */
static const MappingEntry scope_539_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_9, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_539 = {
  "array_int_9",
  scope_539_entries, 1,
};

/* array_int_491 */
static const MappingEntry scope_538_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_491, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_538 = {
  "array_int_491",
  scope_538_entries, 1,
};

/* array__11599 */
static const MappingEntry scope_537_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__11235), 0, &_Type_struct__11235_Utils, NULL, NULL, &scope_473, 1, 0}
};
static const MappingScope scope_537 = {
  "array__11599",
  scope_537_entries, 1,
};

/* array_int_105 */
static const MappingEntry scope_536_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_105, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_536 = {
  "array_int_105",
  scope_536_entries, 1,
};

/* array_int_395 */
static const MappingEntry scope_535_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_395, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_535 = {
  "array_int_395",
  scope_535_entries, 1,
};

/* array_int_3_33_99 */
static const MappingEntry scope_534_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_472, 1, 0}
};
static const MappingScope scope_534 = {
  "array_int_3_33_99",
  scope_534_entries, 1,
};

/* array__11587 */
static const MappingEntry scope_533_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__11116), 0, &_Type_struct__11116_Utils, NULL, NULL, &scope_451, 1, 0}
};
static const MappingScope scope_533 = {
  "array__11587",
  scope_533_entries, 1,
};

/* array_int_236 */
static const MappingEntry scope_532_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_236, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_532 = {
  "array_int_236",
  scope_532_entries, 1,
};

/* array_int_264 */
static const MappingEntry scope_531_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_264, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_531 = {
  "array_int_264",
  scope_531_entries, 1,
};

/* array_int_7_33_231 */
static const MappingEntry scope_530_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_7_33), 0, &_Type_array_int_7_33_Utils, NULL, NULL, &scope_456, 1, 0}
};
static const MappingScope scope_530 = {
  "array_int_7_33_231",
  scope_530_entries, 1,
};

/* array_int_18 */
static const MappingEntry scope_529_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_18, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_529 = {
  "array_int_18",
  scope_529_entries, 1,
};

/* array_int_56 */
static const MappingEntry scope_528_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_56, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_528 = {
  "array_int_56",
  scope_528_entries, 1,
};

/* array_int_24 */
static const MappingEntry scope_527_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_527 = {
  "array_int_24",
  scope_527_entries, 1,
};

/* array_int_444 */
static const MappingEntry scope_526_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_444, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_526 = {
  "array_int_444",
  scope_526_entries, 1,
};

/* array_int_68 */
static const MappingEntry scope_525_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_68, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_525 = {
  "array_int_68",
  scope_525_entries, 1,
};

/* array_int_432 */
static const MappingEntry scope_524_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_432, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_524 = {
  "array_int_432",
  scope_524_entries, 1,
};

/* array_int_2_32_32 */
static const MappingEntry scope_523_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2_32), 0, &_Type_array_int_2_32_Utils, NULL, NULL, &scope_459, 1, 0}
};
static const MappingScope scope_523 = {
  "array_int_2_32_32",
  scope_523_entries, 1,
};

/* array__11554 */
static const MappingEntry scope_522_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__11172), 0, &_Type_struct__11172_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_522 = {
  "array__11554",
  scope_522_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_521_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_521 = {
  "array_int_6",
  scope_521_entries, 1,
};

/* array_int_494 */
static const MappingEntry scope_520_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_494, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_520 = {
  "array_int_494",
  scope_520_entries, 1,
};

/* array__11545 */
static const MappingEntry scope_519_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__11204), 0, &_Type_struct__11204_Utils, NULL, NULL, &scope_467, 1, 0}
};
static const MappingScope scope_519 = {
  "array__11545",
  scope_519_entries, 1,
};

/* array_int_104 */
static const MappingEntry scope_518_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_104, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_518 = {
  "array_int_104",
  scope_518_entries, 1,
};

/* array_int_1 */
static const MappingEntry scope_517_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_517 = {
  "array_int_1",
  scope_517_entries, 1,
};

/* array_int_396 */
static const MappingEntry scope_516_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_396, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_516 = {
  "array_int_396",
  scope_516_entries, 1,
};

/* array_int_3_33_231 */
static const MappingEntry scope_515_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_472, 1, 0}
};
static const MappingScope scope_515 = {
  "array_int_3_33_231",
  scope_515_entries, 1,
};

/* array__11530 */
static const MappingEntry scope_514_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(array__11431), 0, &_Type_array__11431_Utils, NULL, NULL, &scope_493, 1, 0}
};
static const MappingScope scope_514 = {
  "array__11530",
  scope_514_entries, 1,
};

/* array__11527 */
static const MappingEntry scope_513_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(Q_SCALE), 0, &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_513 = {
  "array__11527",
  scope_513_entries, 1,
};

/* array__11524 */
static const MappingEntry scope_512_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(array__11490), 0, &_Type_array__11490_Utils, NULL, NULL, &scope_502, 1, 0}
};
static const MappingScope scope_512 = {
  "array__11524",
  scope_512_entries, 1,
};

/* array_int_50 */
static const MappingEntry scope_511_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_511 = {
  "array_int_50",
  scope_511_entries, 1,
};

/* array_bool_50 */
static const MappingEntry scope_510_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_510 = {
  "array_bool_50",
  scope_510_entries, 1,
};

/* array__11515 */
static const MappingEntry scope_509_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__10906), 0, &_Type_struct__10906_Utils, NULL, NULL, &scope_429, 1, 0}
};
static const MappingScope scope_509 = {
  "array__11515",
  scope_509_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_508_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_508 = {
  "array_int_33",
  scope_508_entries, 1,
};

/* array_int_64_32 */
static const MappingEntry scope_507_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_64), 0, &_Type_array_int_64_Utils, NULL, NULL, &scope_460, 1, 0}
};
static const MappingScope scope_507 = {
  "array_int_64_32",
  scope_507_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_506_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 0}
};
static const MappingScope scope_506 = {
  "array_int_500_500",
  scope_506_entries, 1,
};

/* array_bool_30 */
static const MappingEntry scope_505_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_505 = {
  "array_bool_30",
  scope_505_entries, 1,
};

/* array_int_30 */
static const MappingEntry scope_504_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_504 = {
  "array_int_30",
  scope_504_entries, 1,
};

/* struct__11493 */
static const MappingEntry scope_503_entries[4] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__11493, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__11493, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".sections", NULL, sizeof(array__11490), offsetof(struct__11493, sections), &_Type_array__11490_Utils, NULL, NULL, &scope_502, 1, 3},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11493, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_503 = {
  "struct__11493",
  scope_503_entries, 4,
};

/* array__11490 */
static const MappingEntry scope_502_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__11481), 0, &_Type_struct__11481_Utils, NULL, NULL, &scope_501, 1, 0}
};
static const MappingScope scope_502 = {
  "array__11490",
  scope_502_entries, 1,
};

/* struct__11481 */
static const MappingEntry scope_501_entries[6] = {
  /* 0 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__11478), offsetof(struct__11481, SECTIONS_q_diff), &_Type_array__11478_Utils, NULL, NULL, &scope_500, 1, 5},
  /* 1 */ { MAP_FIELD, ".d_static", NULL, sizeof(kcg_int), offsetof(struct__11481, d_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".n_iter", NULL, sizeof(kcg_int), offsetof(struct__11481, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".q_front", NULL, sizeof(Q_FRONT), offsetof(struct__11481, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".v_static", NULL, sizeof(kcg_int), offsetof(struct__11481, v_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11481, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_501 = {
  "struct__11481",
  scope_501_entries, 6,
};

/* array__11478 */
static const MappingEntry scope_500_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__11472), 0, &_Type_struct__11472_Utils, NULL, NULL, &scope_499, 1, 0}
};
static const MappingScope scope_500 = {
  "array__11478",
  scope_500_entries, 1,
};

/* struct__11472 */
static const MappingEntry scope_499_entries[3] = {
  /* 0 */ { MAP_FIELD, ".nc_diff", NULL, sizeof(kcg_int), offsetof(struct__11472, nc_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".v_diff", NULL, sizeof(kcg_int), offsetof(struct__11472, v_diff), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11472, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_499 = {
  "struct__11472",
  scope_499_entries, 3,
};

/* struct__11466 */
static const MappingEntry scope_498_entries[3] = {
  /* 0 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__11466, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__11466, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11466, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_498 = {
  "struct__11466",
  scope_498_entries, 3,
};

/* array_int_5 */
static const MappingEntry scope_497_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_497 = {
  "array_int_5",
  scope_497_entries, 1,
};

/* struct__11453 */
static const MappingEntry scope_496_entries[7] = {
  /* 0 */ { MAP_FIELD, ".BG_Common_Header", NULL, sizeof(struct__11371), offsetof(struct__11453, BG_Common_Header), &_Type_struct__11371_Utils, NULL, NULL, &scope_488, 1, 3},
  /* 1 */ { MAP_FIELD, ".Radio_Common_Header", NULL, sizeof(struct__10921), offsetof(struct__11453, Radio_Common_Header), &_Type_struct__10921_Utils, NULL, NULL, &scope_431, 1, 4},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__10906), offsetof(struct__11453, packets), &_Type_struct__10906_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 3 */ { MAP_FIELD, ".radioMetadata", NULL, sizeof(struct__11441), offsetof(struct__11453, radioMetadata), &_Type_struct__11441_Utils, NULL, NULL, &scope_495, 1, 2},
  /* 4 */ { MAP_FIELD, ".sendingRBC", NULL, sizeof(struct__11434), offsetof(struct__11453, sendingRBC), &_Type_struct__11434_Utils, NULL, NULL, &scope_494, 1, 6},
  /* 5 */ { MAP_FIELD, ".source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(struct__11453, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11453, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_496 = {
  "struct__11453",
  scope_496_entries, 7,
};

/* struct__11441 */
static const MappingEntry scope_495_entries[9] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_bool), offsetof(struct__11441, d_emergencystop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_bool), offsetof(struct__11441, d_ref), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_bool), offsetof(struct__11441, d_sr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_bool), offsetof(struct__11441, m_version), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_bool), offsetof(struct__11441, nid_em), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_bool), offsetof(struct__11441, q_dir), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_bool), offsetof(struct__11441, q_scale), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_bool), offsetof(struct__11441, t_sh_rqst), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_bool), offsetof(struct__11441, t_train_reference), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_495 = {
  "struct__11441",
  scope_495_entries, 9,
};

/* struct__11434 */
static const MappingEntry scope_494_entries[4] = {
  /* 0 */ { MAP_FIELD, ".device_id", NULL, sizeof(kcg_int), offsetof(struct__11434, device_id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__11434, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".rbc_id", NULL, sizeof(kcg_int), offsetof(struct__11434, rbc_id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11434, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_494 = {
  "struct__11434",
  scope_494_entries, 4,
};

/* array__11431 */
static const MappingEntry scope_493_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(struct__11423), 0, &_Type_struct__11423_Utils, NULL, NULL, &scope_492, 1, 0}
};
static const MappingScope scope_493 = {
  "array__11431",
  scope_493_entries, 1,
};

/* struct__11423 */
static const MappingEntry scope_492_entries[5] = {
  /* 0 */ { MAP_FIELD, ".d_static_LRBG", NULL, sizeof(kcg_int), offsetof(struct__11423, d_static_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_static_abs", NULL, sizeof(kcg_int), offsetof(struct__11423, d_static_abs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".q_train_length_corr", NULL, sizeof(kcg_bool), offsetof(struct__11423, q_train_length_corr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".v_static", NULL, sizeof(kcg_int), offsetof(struct__11423, v_static), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11423, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_492 = {
  "struct__11423",
  scope_492_entries, 5,
};

/* struct__11406 */
static const MappingEntry scope_491_entries[14] = {
  /* 0 */ { MAP_FIELD, ".LRBG", NULL, sizeof(struct__11395), offsetof(struct__11406, LRBG), &_Type_struct__11395_Utils, NULL, NULL, &scope_490, 1, 8},
  /* 1 */ { MAP_FIELD, ".estimatedFrontEndPosition", NULL, sizeof(kcg_int), offsetof(struct__11406, estimatedFrontEndPosition), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".linkingIsUsedOnboard", NULL, sizeof(kcg_bool), offsetof(struct__11406, linkingIsUsedOnboard), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".maxSafeFrontEndPostion", NULL, sizeof(kcg_int), offsetof(struct__11406, maxSafeFrontEndPostion), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".minSafeFrontEndPosition", NULL, sizeof(kcg_int), offsetof(struct__11406, minSafeFrontEndPosition), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(struct__11406, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".nominalOrReverseToLRBG", NULL, sizeof(Q_DLRBG), offsetof(struct__11406, nominalOrReverseToLRBG), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".prvLRBG", NULL, sizeof(struct__11395), offsetof(struct__11406, prvLRBG), &_Type_struct__11395_Utils, NULL, NULL, &scope_490, 1, 9},
  /* 8 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(struct__11406, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".trainOrientationToLRBG", NULL, sizeof(Q_DIRLRBG), offsetof(struct__11406, trainOrientationToLRBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".trainPosition", NULL, sizeof(struct__11316), offsetof(struct__11406, trainPosition), &_Type_struct__11316_Utils, NULL, NULL, &scope_481, 1, 4},
  /* 11 */ { MAP_FIELD, ".trainPositionIsUnknown", NULL, sizeof(kcg_bool), offsetof(struct__11406, trainPositionIsUnknown), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_FIELD, ".trainRunningDirectionToLRBG", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__11406, trainRunningDirectionToLRBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11406, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_491 = {
  "struct__11406",
  scope_491_entries, 14,
};

/* struct__11395 */
static const MappingEntry scope_490_entries[8] = {
  /* 0 */ { MAP_FIELD, ".infoFromLinking", NULL, sizeof(struct__11336), offsetof(struct__11395, infoFromLinking), &_Type_struct__11336_Utils, NULL, NULL, &scope_483, 1, 6},
  /* 1 */ { MAP_FIELD, ".infoFromPassing", NULL, sizeof(struct__11389), offsetof(struct__11395, infoFromPassing), &_Type_struct__11389_Utils, NULL, NULL, &scope_489, 1, 7},
  /* 2 */ { MAP_FIELD, ".location", NULL, sizeof(struct__11316), offsetof(struct__11395, location), &_Type_struct__11316_Utils, NULL, NULL, &scope_481, 1, 4},
  /* 3 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__11395, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__11395, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__11395, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".seqNoOnTrack", NULL, sizeof(kcg_int), offsetof(struct__11395, seqNoOnTrack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11395, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_490 = {
  "struct__11395",
  scope_490_entries, 8,
};

/* struct__11389 */
static const MappingEntry scope_489_entries[3] = {
  /* 0 */ { MAP_FIELD, ".BG_Header", NULL, sizeof(struct__11371), offsetof(struct__11389, BG_Header), &_Type_struct__11371_Utils, NULL, NULL, &scope_488, 1, 1},
  /* 1 */ { MAP_FIELD, ".linkedBGs", NULL, sizeof(array__11345), offsetof(struct__11389, linkedBGs), &_Type_array__11345_Utils, NULL, NULL, &scope_484, 1, 2},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11389, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_489 = {
  "struct__11389",
  scope_489_entries, 3,
};

/* struct__11371 */
static const MappingEntry scope_488_entries[15] = {
  /* 0 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(struct__11316), offsetof(struct__11371, BG_centerDetectionInaccuraccuracies), &_Type_struct__11316_Utils, NULL, NULL, &scope_481, 1, 10},
  /* 1 */ { MAP_FIELD, ".bgPosition", NULL, sizeof(struct__11361), offsetof(struct__11371, bgPosition), &_Type_struct__11361_Utils, NULL, NULL, &scope_487, 1, 9},
  /* 2 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__11371, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__11371, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__11371, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__11371, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__11371, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(struct__11371, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__11371, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__11371, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__11371, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__11371, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".trainOrientationToBG", NULL, sizeof(Q_DIRLRBG), offsetof(struct__11371, trainOrientationToBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_FIELD, ".trainRunningDirectionToBG", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__11371, trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11371, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_488 = {
  "struct__11371",
  scope_488_entries, 15,
};

/* struct__11361 */
static const MappingEntry scope_487_entries[7] = {
  /* 0 */ { MAP_FIELD, ".acceleration", NULL, sizeof(kcg_int), offsetof(struct__11361, acceleration), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".motionDirection", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(struct__11361, motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".motionState", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(struct__11361, motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".odo", NULL, sizeof(struct__11355), offsetof(struct__11361, odo), &_Type_struct__11355_Utils, NULL, NULL, &scope_486, 1, 2},
  /* 4 */ { MAP_FIELD, ".speed", NULL, sizeof(struct__11348), offsetof(struct__11361, speed), &_Type_struct__11348_Utils, NULL, NULL, &scope_485, 1, 3},
  /* 5 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(struct__11361, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11361, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_487 = {
  "struct__11361",
  scope_487_entries, 7,
};

/* struct__11355 */
static const MappingEntry scope_486_entries[3] = {
  /* 0 */ { MAP_FIELD, ".o_max", NULL, sizeof(kcg_int), offsetof(struct__11355, o_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(kcg_int), offsetof(struct__11355, o_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(kcg_int), offsetof(struct__11355, o_nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_486 = {
  "struct__11355",
  scope_486_entries, 3,
};

/* struct__11348 */
static const MappingEntry scope_485_entries[4] = {
  /* 0 */ { MAP_FIELD, ".v_lower", NULL, sizeof(kcg_int), offsetof(struct__11348, v_lower), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".v_rawNominal", NULL, sizeof(kcg_int), offsetof(struct__11348, v_rawNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".v_safeNominal", NULL, sizeof(kcg_int), offsetof(struct__11348, v_safeNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".v_upper", NULL, sizeof(kcg_int), offsetof(struct__11348, v_upper), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_485 = {
  "struct__11348",
  scope_485_entries, 4,
};

/* array__11345 */
static const MappingEntry scope_484_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(struct__11322), 0, &_Type_struct__11322_Utils, NULL, NULL, &scope_482, 1, 0}
};
static const MappingScope scope_484 = {
  "array__11345",
  scope_484_entries, 1,
};

/* struct__11336 */
static const MappingEntry scope_483_entries[6] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(struct__11316), offsetof(struct__11336, d_link), &_Type_struct__11316_Utils, NULL, NULL, &scope_481, 1, 4},
  /* 1 */ { MAP_FIELD, ".expectedLocation", NULL, sizeof(struct__11316), offsetof(struct__11336, expectedLocation), &_Type_struct__11316_Utils, NULL, NULL, &scope_481, 1, 3},
  /* 2 */ { MAP_FIELD, ".linkingInfo", NULL, sizeof(struct__11322), offsetof(struct__11336, linkingInfo), &_Type_struct__11322_Utils, NULL, NULL, &scope_482, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_bg_fromLinkingBG", NULL, sizeof(kcg_int), offsetof(struct__11336, nid_bg_fromLinkingBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".nid_c_fromLinkingBG", NULL, sizeof(kcg_int), offsetof(struct__11336, nid_c_fromLinkingBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11336, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_483 = {
  "struct__11336",
  scope_483_entries, 6,
};

/* struct__11322 */
static const MappingEntry scope_482_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_link", NULL, sizeof(kcg_int), offsetof(struct__11322, d_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_LRBG", NULL, sizeof(kcg_int), offsetof(struct__11322, nid_LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__11322, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__11322, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__11322, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_FIELD, ".q_linkorientation", NULL, sizeof(Q_LINKORIENTATION), offsetof(struct__11322, q_linkorientation), &_Type_Q_LINKORIENTATION_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".q_linkreaction", NULL, sizeof(Q_LINKREACTION), offsetof(struct__11322, q_linkreaction), &_Type_Q_LINKREACTION_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".q_locacc", NULL, sizeof(kcg_int), offsetof(struct__11322, q_locacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_FIELD, ".q_newcountry", NULL, sizeof(Q_NEWCOUNTRY), offsetof(struct__11322, q_newcountry), &_Type_Q_NEWCOUNTRY_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__11322, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11322, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_482 = {
  "struct__11322",
  scope_482_entries, 11,
};

/* struct__11316 */
static const MappingEntry scope_481_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_max", NULL, sizeof(kcg_int), offsetof(struct__11316, d_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(kcg_int), offsetof(struct__11316, d_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nominal", NULL, sizeof(kcg_int), offsetof(struct__11316, nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_481 = {
  "struct__11316",
  scope_481_entries, 3,
};

/* struct__11311 */
static const MappingEntry scope_480_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__11293), offsetof(struct__11311, Header), &_Type_struct__11293_Utils, NULL, NULL, &scope_479, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__10906), offsetof(struct__11311, Messages), &_Type_struct__10906_Utils, NULL, NULL, &scope_429, 1, 1}
};
static const MappingScope scope_480 = {
  "struct__11311",
  scope_480_entries, 2,
};

/* struct__11293 */
static const MappingEntry scope_479_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__11293, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__11293, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__11293, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__11293, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__11293, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__11293, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__11293, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__11293, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int), offsetof(struct__11293, q_dir), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int), offsetof(struct__11293, q_scale), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__11293, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__11293, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_int), offsetof(struct__11293, t_sh_rqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__11293, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_int), offsetof(struct__11293, t_train_reference), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_479 = {
  "struct__11293",
  scope_479_entries, 15,
};

/* struct__11264 */
static const MappingEntry scope_478_entries[26] = {
  /* 0 */ { MAP_FIELD, ".D_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__11264, D_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 1 */ { MAP_FIELD, ".D_NVPOTRP", NULL, sizeof(kcg_int), offsetof(struct__11264, D_NVPOTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 2 */ { MAP_FIELD, ".D_NVROLL", NULL, sizeof(kcg_int), offsetof(struct__11264, D_NVROLL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".D_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__11264, D_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_FIELD, ".D_VALIDNV", NULL, sizeof(kcg_int), offsetof(struct__11264, D_VALIDNV), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11264, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".M_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__11264, M_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 7 */ { MAP_FIELD, ".M_NVDERUN", NULL, sizeof(kcg_int), offsetof(struct__11264, M_NVDERUN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 8 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11264, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__11264, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__11264, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_NVDRIVER_ADHES", NULL, sizeof(kcg_int), offsetof(struct__11264, Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 12 */ { MAP_FIELD, ".Q_NVEMRRLS", NULL, sizeof(kcg_int), offsetof(struct__11264, Q_NVEMRRLS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_FIELD, ".Q_NVSRBKTRG", NULL, sizeof(kcg_int), offsetof(struct__11264, Q_NVSRBKTRG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__11264, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array_int_32), offsetof(struct__11264, SECTIONS), &_Type_array_int_32_Utils, NULL, NULL, &scope_477, 1, 7},
  /* 16 */ { MAP_FIELD, ".T_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__11264, T_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_FIELD, ".T_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__11264, T_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_FIELD, ".V_NVALLOWOVTRP", NULL, sizeof(kcg_int), offsetof(struct__11264, V_NVALLOWOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_FIELD, ".V_NVONSIGHT", NULL, sizeof(kcg_int), offsetof(struct__11264, V_NVONSIGHT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_FIELD, ".V_NVREL", NULL, sizeof(kcg_int), offsetof(struct__11264, V_NVREL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 21 */ { MAP_FIELD, ".V_NVSHUNT", NULL, sizeof(kcg_int), offsetof(struct__11264, V_NVSHUNT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 22 */ { MAP_FIELD, ".V_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__11264, V_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".V_NVSUPOVTRP", NULL, sizeof(kcg_int), offsetof(struct__11264, V_NVSUPOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_FIELD, ".V_NVUNFIT", NULL, sizeof(kcg_int), offsetof(struct__11264, V_NVUNFIT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 25 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11264, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_478 = {
  "struct__11264",
  scope_478_entries, 26,
};

/* array_int_32 */
static const MappingEntry scope_477_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_477 = {
  "array_int_32",
  scope_477_entries, 1,
};

/* array__11258 */
static const MappingEntry scope_476_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__11235), 0, &_Type_struct__11235_Utils, NULL, NULL, &scope_473, 1, 0}
};
static const MappingScope scope_476 = {
  "array__11258",
  scope_476_entries, 1,
};

/* struct__11244 */
static const MappingEntry scope_475_entries[11] = {
  /* 0 */ { MAP_FIELD, ".D_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__11244, D_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(struct__11244, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11244, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__11244, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__11244, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11244, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__11244, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__11244, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__11244, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__11241), offsetof(struct__11244, SECTIONS), &_Type_array__11241_Utils, NULL, NULL, &scope_474, 1, 10},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11244, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_475 = {
  "struct__11244",
  scope_475_entries, 11,
};

/* array__11241 */
static const MappingEntry scope_474_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__11235), 0, &_Type_struct__11235_Utils, NULL, NULL, &scope_473, 1, 0}
};
static const MappingScope scope_474 = {
  "array__11241",
  scope_474_entries, 1,
};

/* struct__11235 */
static const MappingEntry scope_473_entries[3] = {
  /* 0 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(struct__11235, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__11235, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__11235, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_473 = {
  "struct__11235",
  scope_473_entries, 3,
};

/* array_int_3_33 */
static const MappingEntry scope_472_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_3), 0, &_Type_array_int_3_Utils, NULL, NULL, &scope_471, 1, 0}
};
static const MappingScope scope_472 = {
  "array_int_3_33",
  scope_472_entries, 1,
};

/* array_int_3 */
static const MappingEntry scope_471_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_471 = {
  "array_int_3",
  scope_471_entries, 1,
};

/* array__11226 */
static const MappingEntry scope_470_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__11204), 0, &_Type_struct__11204_Utils, NULL, NULL, &scope_467, 1, 0}
};
static const MappingScope scope_470 = {
  "array__11226",
  scope_470_entries, 1,
};

/* struct__11213 */
static const MappingEntry scope_469_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__11213, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__11213, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11213, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11213, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__11213, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__11213, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__11213, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__11213, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__11210), offsetof(struct__11213, SECTIONS), &_Type_array__11210_Utils, NULL, NULL, &scope_468, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11213, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_469 = {
  "struct__11213",
  scope_469_entries, 10,
};

/* array__11210 */
static const MappingEntry scope_468_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__11204), 0, &_Type_struct__11204_Utils, NULL, NULL, &scope_467, 1, 0}
};
static const MappingScope scope_468 = {
  "array__11210",
  scope_468_entries, 1,
};

/* struct__11204 */
static const MappingEntry scope_467_entries[3] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__11204, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__11204, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__11204, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_467 = {
  "struct__11204",
  scope_467_entries, 3,
};

/* array_int_99 */
static const MappingEntry scope_466_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_466 = {
  "array_int_99",
  scope_466_entries, 1,
};

/* struct__11186 */
static const MappingEntry scope_465_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__11186, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11186, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11186, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(struct__11186, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(struct__11186, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__11186, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__11186, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__11186, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(array__11183), offsetof(struct__11186, SECTIONS_SSP), &_Type_array__11183_Utils, NULL, NULL, &scope_464, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__11169), offsetof(struct__11186, SECTIONS_q_diff), &_Type_array__11169_Utils, NULL, NULL, &scope_461, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__11186, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11186, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_465 = {
  "struct__11186",
  scope_465_entries, 12,
};

/* array__11183 */
static const MappingEntry scope_464_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__11172), 0, &_Type_struct__11172_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_464 = {
  "array__11183",
  scope_464_entries, 1,
};

/* array__11180 */
static const MappingEntry scope_463_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__11172), 0, &_Type_struct__11172_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_463 = {
  "array__11180",
  scope_463_entries, 1,
};

/* struct__11172 */
static const MappingEntry scope_462_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__11172, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__11172, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__11172, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__11169), offsetof(struct__11172, SECTIONS_q_diff), &_Type_array__11169_Utils, NULL, NULL, &scope_461, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__11172, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_462 = {
  "struct__11172",
  scope_462_entries, 5,
};

/* array__11169 */
static const MappingEntry scope_461_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__11158), 0, &_Type_struct__11158_Utils, NULL, NULL, &scope_458, 1, 0}
};
static const MappingScope scope_461 = {
  "array__11169",
  scope_461_entries, 1,
};

/* array_int_64 */
static const MappingEntry scope_460_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_460 = {
  "array_int_64",
  scope_460_entries, 1,
};

/* array_int_2_32 */
static const MappingEntry scope_459_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2), 0, &_Type_array_int_2_Utils, NULL, NULL, &scope_457, 1, 0}
};
static const MappingScope scope_459 = {
  "array_int_2_32",
  scope_459_entries, 1,
};

/* struct__11158 */
static const MappingEntry scope_458_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(struct__11158, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(struct__11158, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_458 = {
  "struct__11158",
  scope_458_entries, 2,
};

/* array_int_2 */
static const MappingEntry scope_457_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_457 = {
  "array_int_2",
  scope_457_entries, 1,
};

/* array_int_7_33 */
static const MappingEntry scope_456_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_7), 0, &_Type_array_int_7_Utils, NULL, NULL, &scope_455, 1, 0}
};
static const MappingScope scope_456 = {
  "array_int_7_33",
  scope_456_entries, 1,
};

/* array_int_7 */
static const MappingEntry scope_455_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_455 = {
  "array_int_7",
  scope_455_entries, 1,
};

/* array__11146 */
static const MappingEntry scope_454_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__11116), 0, &_Type_struct__11116_Utils, NULL, NULL, &scope_451, 1, 0}
};
static const MappingScope scope_454 = {
  "array__11146",
  scope_454_entries, 1,
};

/* struct__11129 */
static const MappingEntry scope_453_entries[14] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__11129, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11129, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__11129, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__11129, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11129, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__11129, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__11129, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__11129, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__11129, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__11129, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__11129, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__11129, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__11126), offsetof(struct__11129, SECTIONS), &_Type_array__11126_Utils, NULL, NULL, &scope_452, 1, 13},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11129, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_453 = {
  "struct__11129",
  scope_453_entries, 14,
};

/* array__11126 */
static const MappingEntry scope_452_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__11116), 0, &_Type_struct__11116_Utils, NULL, NULL, &scope_451, 1, 0}
};
static const MappingScope scope_452 = {
  "array__11126",
  scope_452_entries, 1,
};

/* struct__11116 */
static const MappingEntry scope_451_entries[7] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__11116, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__11116, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__11116, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__11116, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__11116, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__11116, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__11116, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_451 = {
  "struct__11116",
  scope_451_entries, 7,
};

/* array_int_231 */
static const MappingEntry scope_450_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_450 = {
  "array_int_231",
  scope_450_entries, 1,
};

/* struct__11100 */
static const MappingEntry scope_449_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_TSR", NULL, sizeof(kcg_int), offsetof(struct__11100, D_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11100, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".L_TSR", NULL, sizeof(kcg_int), offsetof(struct__11100, L_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11100, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".NID_TSR", NULL, sizeof(kcg_int), offsetof(struct__11100, NID_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__11100, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__11100, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__11100, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".V_TSR", NULL, sizeof(kcg_int), offsetof(struct__11100, V_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11100, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_449 = {
  "struct__11100",
  scope_449_entries, 10,
};

/* array_int_4_32 */
static const MappingEntry scope_448_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_4), 0, &_Type_array_int_4_Utils, NULL, NULL, &scope_447, 1, 0}
};
static const MappingScope scope_448 = {
  "array_int_4_32",
  scope_448_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_447_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_447 = {
  "array_int_4",
  scope_447_entries, 1,
};

/* struct__11067 */
static const MappingEntry scope_446_entries[24] = {
  /* 0 */ { MAP_FIELD, ".D_DP", NULL, sizeof(kcg_int), offsetof(struct__11067, D_DP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 1 */ { MAP_FIELD, ".D_ENDTIMERSTARTLOC", NULL, sizeof(kcg_int), offsetof(struct__11067, D_ENDTIMERSTARTLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 2 */ { MAP_FIELD, ".D_OL", NULL, sizeof(kcg_int), offsetof(struct__11067, D_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 3 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(struct__11067, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_FIELD, ".D_STARTOL", NULL, sizeof(kcg_int), offsetof(struct__11067, D_STARTOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 5 */ { MAP_FIELD, ".L_ENDSECTION", NULL, sizeof(kcg_int), offsetof(struct__11067, L_ENDSECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11067, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__11067, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__11067, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".Q_DANGERPOINT", NULL, sizeof(kcg_int), offsetof(struct__11067, Q_DANGERPOINT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__11067, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_ENDTIMER", NULL, sizeof(kcg_int), offsetof(struct__11067, Q_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_FIELD, ".Q_OVERLAP", NULL, sizeof(kcg_int), offsetof(struct__11067, Q_OVERLAP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__11067, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__11067, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__11064), offsetof(struct__11067, SECTIONS), &_Type_array__11064_Utils, NULL, NULL, &scope_445, 1, 8},
  /* 16 */ { MAP_FIELD, ".T_ENDTIMER", NULL, sizeof(kcg_int), offsetof(struct__11067, T_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_FIELD, ".T_LOA", NULL, sizeof(kcg_int), offsetof(struct__11067, T_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_FIELD, ".T_OL", NULL, sizeof(kcg_int), offsetof(struct__11067, T_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_FIELD, ".T_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__11067, T_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 20 */ { MAP_FIELD, ".V_LOA", NULL, sizeof(kcg_int), offsetof(struct__11067, V_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 21 */ { MAP_FIELD, ".V_RELEASEDP", NULL, sizeof(kcg_int), offsetof(struct__11067, V_RELEASEDP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 22 */ { MAP_FIELD, ".V_RELEASEOL", NULL, sizeof(kcg_int), offsetof(struct__11067, V_RELEASEOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11067, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_446 = {
  "struct__11067",
  scope_446_entries, 24,
};

/* array__11064 */
static const MappingEntry scope_445_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__11057), 0, &_Type_struct__11057_Utils, NULL, NULL, &scope_444, 1, 0}
};
static const MappingScope scope_445 = {
  "array__11064",
  scope_445_entries, 1,
};

/* struct__11057 */
static const MappingEntry scope_444_entries[4] = {
  /* 0 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(struct__11057, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_SECTION", NULL, sizeof(kcg_int), offsetof(struct__11057, L_SECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__11057, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".T_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__11057, T_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_444 = {
  "struct__11057",
  scope_444_entries, 4,
};

/* array_int_128 */
static const MappingEntry scope_443_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_443 = {
  "array_int_128",
  scope_443_entries, 1,
};

/* struct__11045 */
static const MappingEntry scope_442_entries[6] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__11045, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__11045, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__11045, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__11045, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__11045, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11045, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_442 = {
  "struct__11045",
  scope_442_entries, 6,
};

/* struct__11038 */
static const MappingEntry scope_441_entries[4] = {
  /* 0 */ { MAP_FIELD, ".message", NULL, sizeof(struct__10877), offsetof(struct__11038, message), &_Type_struct__10877_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_FIELD, ".message_sent", NULL, sizeof(kcg_bool), offsetof(struct__11038, message_sent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__10906), offsetof(struct__11038, packets), &_Type_struct__10906_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 3 */ { MAP_FIELD, ".trigger", NULL, sizeof(kcg_int), offsetof(struct__11038, trigger), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_441 = {
  "struct__11038",
  scope_441_entries, 4,
};

/* struct__11028 */
static const MappingEntry scope_440_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__11028, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__11028, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__11028, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__11028, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__11028, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__11028, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11028, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_440 = {
  "struct__11028",
  scope_440_entries, 7,
};

/* struct__11014 */
static const MappingEntry scope_439_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__11014, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__11014, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__11014, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__11014, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__11014, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__11014, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__11014, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__11014, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__11014, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__11014, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11014, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_439 = {
  "struct__11014",
  scope_439_entries, 11,
};

/* struct__11004 */
static const MappingEntry scope_438_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__11004, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__11004, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__11004, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__11004, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__11004, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".t_train_received", NULL, sizeof(kcg_real), offsetof(struct__11004, t_train_received), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__11004, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_438 = {
  "struct__11004",
  scope_438_entries, 7,
};

/* struct__10993 */
static const MappingEntry scope_437_entries[8] = {
  /* 0 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__10993, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10993, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10993, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10993, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10993, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10993, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10993, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10993, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_437 = {
  "struct__10993",
  scope_437_entries, 8,
};

/* struct__10983 */
static const MappingEntry scope_436_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10983, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10983, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10983, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10983, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".q_orientation", NULL, sizeof(Q_ORIENTATION), offsetof(struct__10983, q_orientation), &_Type_Q_ORIENTATION_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10983, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10983, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_436 = {
  "struct__10983",
  scope_436_entries, 7,
};

/* struct__10974 */
static const MappingEntry scope_435_entries[6] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10974, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10974, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10974, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10974, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10974, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10974, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_435 = {
  "struct__10974",
  scope_435_entries, 6,
};

/* struct__10960 */
static const MappingEntry scope_434_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__10960, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".d_tafdisplay", NULL, sizeof(kcg_int), offsetof(struct__10960, d_tafdisplay), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10960, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".l_tafdisplay", NULL, sizeof(kcg_int), offsetof(struct__10960, l_tafdisplay), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10960, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10960, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10960, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10960, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10960, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10960, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10960, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_434 = {
  "struct__10960",
  scope_434_entries, 11,
};

/* struct__10949 */
static const MappingEntry scope_433_entries[8] = {
  /* 0 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__10949, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10949, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10949, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10949, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10949, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10949, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10949, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10949, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_433 = {
  "struct__10949",
  scope_433_entries, 8,
};

/* struct__10939 */
static const MappingEntry scope_432_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10939, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10939, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__10939, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10939, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10939, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10939, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10939, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_432 = {
  "struct__10939",
  scope_432_entries, 7,
};

/* struct__10921 */
static const MappingEntry scope_431_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__10921, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__10921, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__10921, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10921, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__10921, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__10921, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10921, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10921, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10921, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__10921, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__10921, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__10921, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_real), offsetof(struct__10921, t_sh_rqst), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10921, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_real), offsetof(struct__10921, t_train_reference), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_431 = {
  "struct__10921",
  scope_431_entries, 15,
};

/* struct__10911 */
static const MappingEntry scope_430_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10911, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__10911, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__10911, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10911, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__10911, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".t_train_SH_request", NULL, sizeof(kcg_real), offsetof(struct__10911, t_train_SH_request), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10911, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_430 = {
  "struct__10911",
  scope_430_entries, 7,
};

/* struct__10906 */
static const MappingEntry scope_429_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__10906, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__10903), offsetof(struct__10906, PacketHeaders), &_Type_array__10903_Utils, NULL, NULL, &scope_428, 1, 0}
};
static const MappingScope scope_429 = {
  "struct__10906",
  scope_429_entries, 2,
};

/* array__10903 */
static const MappingEntry scope_428_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__10895), 0, &_Type_struct__10895_Utils, NULL, NULL, &scope_427, 1, 0}
};
static const MappingScope scope_428 = {
  "array__10903",
  scope_428_entries, 1,
};

/* struct__10895 */
static const MappingEntry scope_427_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__10895, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__10895, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__10895, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__10895, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10895, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_427 = {
  "struct__10895",
  scope_427_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_426_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_426 = {
  "array_int_500",
  scope_426_entries, 1,
};

/* struct__10877 */
static const MappingEntry scope_425_entries[12] = {
  /* 0 */ { MAP_FIELD, ".field1", NULL, sizeof(kcg_int), offsetof(struct__10877, field1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".field2", NULL, sizeof(kcg_int), offsetof(struct__10877, field2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".field3", NULL, sizeof(kcg_int), offsetof(struct__10877, field3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".field4", NULL, sizeof(kcg_int), offsetof(struct__10877, field4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".field5", NULL, sizeof(kcg_int), offsetof(struct__10877, field5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".field6", NULL, sizeof(kcg_int), offsetof(struct__10877, field6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".field7", NULL, sizeof(kcg_int), offsetof(struct__10877, field7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".field8", NULL, sizeof(kcg_int), offsetof(struct__10877, field8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__10877, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__10877, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__10877, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__10877, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_425 = {
  "struct__10877",
  scope_425_entries, 12,
};

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal */
static const MappingEntry scope_420_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal, _L1), &_Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_458, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_2), offsetof(outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal, _L2), &_Type_array_int_2_Utils, NULL, NULL, &scope_457, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal, section_arrays), &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_457, 1, 4}
};
static const MappingScope scope_420 = {
  "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal",
  scope_420_entries, 5,
};

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_qdiff_TM_lib_internal */
static const MappingEntry scope_419_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L2), &_Type_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_459, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L7), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal, flat), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 9}
};
static const MappingScope scope_419 = {
  "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_qdiff_TM_lib_internal",
  scope_419_entries, 10,
};

/* TM_lib_internal::C_P015_fs_struct_to_array/ C_P015_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_418_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_section_int_T_TM), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P015_section_int_T_TM_Utils, NULL, NULL, &scope_444, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_4), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_4_Utils, NULL, NULL, &scope_447, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P015_section_array_T_TM), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P015_section_array_T_TM_Utils, NULL, NULL, &scope_447, 1, 6}
};
static const MappingScope scope_418 = {
  "TM_lib_internal::C_P015_fs_struct_to_array/ C_P015_fs_struct_to_array_TM_lib_internal",
  scope_418_entries, 7,
};

/* TM_lib_internal::C_P015_fs_flatten_array/ C_P015_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_417_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L1), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_443, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P015_OBU_sectionlist_array_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L2), &_Type_P015_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_448, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L7), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_443, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, flat), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_443, 1, 9}
};
static const MappingScope scope_417 = {
  "TM_lib_internal::C_P015_fs_flatten_array/ C_P015_fs_flatten_array_TM_lib_internal",
  scope_417_entries, 10,
};

/* TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_416_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_473, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_3), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L10), &_Type_array_int_3_Utils, NULL, NULL, &scope_471, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P041_section_array_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P041_section_array_T_TM_Utils, NULL, NULL, &scope_471, 1, 5}
};
static const MappingScope scope_416 = {
  "TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal",
  scope_416_entries, 6,
};

/* TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_415_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L1), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P041_OBU_sectionlist_array_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L2), &_Type_P041_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L7), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, flat), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 9}
};
static const MappingScope scope_415 = {
  "TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal",
  scope_415_entries, 10,
};

/* TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_414_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_451, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_7), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_7_Utils, NULL, NULL, &scope_455, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P005_section_array_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P005_section_array_T_TM_Utils, NULL, NULL, &scope_455, 1, 9}
};
static const MappingScope scope_414 = {
  "TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal",
  scope_414_entries, 10,
};

/* TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_413_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_450, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_OBU_sectionlist_array_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L2), &_Type_P005_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_456, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L7), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_450, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, flat), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_450, 1, 9}
};
static const MappingScope scope_413 = {
  "TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal",
  scope_413_entries, 10,
};

/* TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal */
static const MappingEntry scope_412_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Flattened), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff 1", &iter_foldi_32, sizeof(outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_419, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff 1", &iter_map_32, sizeof(outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_420, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_2_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L74), &_Type_array_int_2_32_Utils, NULL, NULL, &scope_459, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L75), &_Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_461, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L76), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L83", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L83), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L84", NULL, sizeof(array_int_2_32_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L84), &_Type_array_int_2_32_32_Utils, NULL, NULL, &scope_523, 1, 6}
};
static const MappingScope scope_412 = {
  "TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal",
  scope_412_entries, 8,
};

/* TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_411_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_467, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_3), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_3_Utils, NULL, NULL, &scope_471, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P021_section_array_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P021_section_array_T_TM_Utils, NULL, NULL, &scope_471, 1, 5}
};
static const MappingScope scope_411 = {
  "TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal",
  scope_411_entries, 6,
};

/* TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_410_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_sectionlist_array_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L2), &_Type_P021_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L7), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, flat), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 9}
};
static const MappingScope scope_410 = {
  "TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal",
  scope_410_entries, 10,
};

/* TM_lib_internal::C_P015_flatten_sections/ C_P015_flatten_sections_TM_lib_internal */
static const MappingEntry scope_409_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Flattened), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_443, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_fs_flatten_array 1", &iter_foldi_128, sizeof(outC_C_P015_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_417, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_fs_struct_to_array 2", &iter_map_32, sizeof(outC_C_P015_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_418, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_4_32), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_4_32_Utils, NULL, NULL, &scope_448, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P015_OBU_sectionlist_int_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L75), &_Type_P015_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_445, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L76), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_443, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L78), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_443, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_4_32_128), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_4_32_128_Utils, NULL, NULL, &scope_540, 1, 6}
};
static const MappingScope scope_409 = {
  "TM_lib_internal::C_P015_flatten_sections/ C_P015_flatten_sections_TM_lib_internal",
  scope_409_entries, 8,
};

/* TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal */
static const MappingEntry scope_408_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Flattened), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_flatten_array 1", &iter_foldi_99, sizeof(outC_C_P041_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_415, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P041_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_416, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_472, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P041_OBU_sectionlist_int_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L75), &_Type_P041_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_476, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L76), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L78), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_99), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_99_Utils, NULL, NULL, &scope_534, 1, 6}
};
static const MappingScope scope_408 = {
  "TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal",
  scope_408_entries, 8,
};

/* TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal */
static const MappingEntry scope_407_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Flattened), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_450, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_flatten_array 2", &iter_foldi_231, sizeof(outC_C_P005_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_413, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_struct_to_array 2", &iter_map_33, sizeof(outC_C_P005_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_414, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_7_33), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_7_33_Utils, NULL, NULL, &scope_456, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P005_OBU_sectionlist_int_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L75), &_Type_P005_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_454, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L76), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L78), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_450, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_7_33_231), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_7_33_231_Utils, NULL, NULL, &scope_530, 1, 6}
};
static const MappingScope scope_407 = {
  "TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal",
  scope_407_entries, 8,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2 */
static const MappingEntry scope_406_entries[28] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 26},
  /* 1 */ { MAP_OUTPUT, "P027V1_sections_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, P027V1_sections_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 27},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027_flatten_sections_qdiff 1", NULL, sizeof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_412, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_403, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L1), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_462, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_432), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L209), &_Type_array_int_432_Utils, NULL, NULL, &scope_524, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L217", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L217), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_461, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_447, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L385", NULL, sizeof(array_int_68), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L385), &_Type_array_int_68_Utils, NULL, NULL, &scope_525, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L422", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L422), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L423", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L423), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L424", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L424), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L425", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L425), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L426), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L429", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L429), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L430", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L430), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L431", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, _L431), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_406 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2",
  scope_406_entries, 28,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_405_entries[19] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_PACKET), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L3), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_OUTPUT, "nid_packet_meta", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, nid_packet_meta), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_405 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_405_entries, 19,
};

/* TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal */
static const MappingEntry scope_404_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Flattened), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_flatten_array 1", &iter_foldi_231, sizeof(outC_C_P021_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_410, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P021_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_411, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_472, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P021_OBU_sectionlist_int_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L75), &_Type_P021_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_470, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L76), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L78), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_231), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_231_Utils, NULL, NULL, &scope_515, 1, 6}
};
static const MappingScope scope_404 = {
  "TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal",
  scope_404_entries, 8,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_403_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_403 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_403_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_402_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_402 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_402_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_401_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 2}
};
static const MappingScope scope_401 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_401_entries, 10,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_400_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_394_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_394_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_400 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_400_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_399_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_395_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_395_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_399 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_399_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_398_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_396_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_396_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_398 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_398_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_397_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_396_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_396_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_397 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_397_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_396_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_396_entries[0], isActive_kcg_bool_kcg_false, &scope_397, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_396_entries[0], isActive_kcg_bool_kcg_true, &scope_398, 1, 2}
};
static const MappingScope scope_396 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_396_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_395_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_395_entries[0], isActive_kcg_bool_kcg_false, &scope_396, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_395_entries[0], isActive_kcg_bool_kcg_true, &scope_399, 1, 2}
};
static const MappingScope scope_395 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_395_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_394_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_394_entries[0], isActive_kcg_bool_kcg_false, &scope_395, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_394_entries[0], isActive_kcg_bool_kcg_true, &scope_400, 1, 2}
};
static const MappingScope scope_394 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_394_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_393_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_394, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_393 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_393_entries, 6,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversions */
static const MappingEntry scope_392_entries[54] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 52},
  /* 1 */ { MAP_OUTPUT, "P015_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, P015_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 53},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_393, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_flatten_sections 1", NULL, sizeof(outC_C_P015_flatten_sections_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_409, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_405, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_403, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L1), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_446, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_350), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L209), &_Type_array_int_350_Utils, NULL, NULL, &scope_541, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L365", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L365), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 21 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 23 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 26 */ { MAP_LOCAL, "_L371", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L371), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_445, 1, 21},
  /* 27 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_521, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 30 */ { MAP_LOCAL, "_L380", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L380), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_443, 1, 31},
  /* 31 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_21), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L381), &_Type_array_int_21_Utils, NULL, NULL, &scope_542, 1, 32},
  /* 32 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_150), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L384), &_Type_array_int_150_Utils, NULL, NULL, &scope_543, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 35 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 36 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 37 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L390), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 38 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 39 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L392), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 40 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 41 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 42 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 43 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 44},
  /* 44 */ { MAP_LOCAL, "_L398", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L398), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_445, 1, 45},
  /* 45 */ { MAP_LOCAL, "_L399", NULL, sizeof(array_int_15), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L399), &_Type_array_int_15_Utils, NULL, NULL, &scope_544, 1, 46},
  /* 46 */ { MAP_LOCAL, "_L400", NULL, sizeof(array_int_22), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L400), &_Type_array_int_22_Utils, NULL, NULL, &scope_545, 1, 47},
  /* 47 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 48},
  /* 48 */ { MAP_LOCAL, "_L403", NULL, sizeof(array_int_1), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L403), &_Type_array_int_1_Utils, NULL, NULL, &scope_517, 1, 49},
  /* 49 */ { MAP_LOCAL, "_L404", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L404), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 50},
  /* 50 */ { MAP_LOCAL, "_L405", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L405), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 51},
  /* 51 */ { MAP_LOCAL, "n_iter", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 52 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 53 */ { MAP_LOCAL, "sections", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, sections), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_445, 1, 5}
};
static const MappingScope scope_392 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversions",
  scope_392_entries, 54,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_391_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_385_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_385_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_391 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_391_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_390_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_386_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_386_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_390 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_390_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_389_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_387_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_387_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_389 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_389_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_388_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_387_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_387_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_388 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_388_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_387_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_387_entries[0], isActive_kcg_bool_kcg_false, &scope_388, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_387_entries[0], isActive_kcg_bool_kcg_true, &scope_389, 1, 2}
};
static const MappingScope scope_387 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_387_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_386_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_386_entries[0], isActive_kcg_bool_kcg_false, &scope_387, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_386_entries[0], isActive_kcg_bool_kcg_true, &scope_390, 1, 2}
};
static const MappingScope scope_386 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_386_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_385_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_385_entries[0], isActive_kcg_bool_kcg_false, &scope_386, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_385_entries[0], isActive_kcg_bool_kcg_true, &scope_391, 1, 2}
};
static const MappingScope scope_385 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_385_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_384_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_385, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_384 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_384_entries, 6,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversions */
static const MappingEntry scope_383_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 24},
  /* 1 */ { MAP_OUTPUT, "P065_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, P065_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 25},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_384, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P065_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_405, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L1), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_449, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_491), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L209), &_Type_array_int_491_Utils, NULL, NULL, &scope_538, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_9), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L373), &_Type_array_int_9_Utils, NULL, NULL, &scope_539, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 20 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L397", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L397), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L398", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L398), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L399", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L399), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 24 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L401", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L401), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_383 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversions",
  scope_383_entries, 26,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_382_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_376_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_376_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_382 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_382_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_381_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_377_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_377_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_381 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_381_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_380_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_378_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_378_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_380 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_380_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_379_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_378_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_378_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_379 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_379_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_378_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_378_entries[0], isActive_kcg_bool_kcg_false, &scope_379, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_378_entries[0], isActive_kcg_bool_kcg_true, &scope_380, 1, 2}
};
static const MappingScope scope_378 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_378_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_377_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_377_entries[0], isActive_kcg_bool_kcg_false, &scope_378, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_377_entries[0], isActive_kcg_bool_kcg_true, &scope_381, 1, 2}
};
static const MappingScope scope_377 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_377_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_376_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_376_entries[0], isActive_kcg_bool_kcg_false, &scope_377, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_376_entries[0], isActive_kcg_bool_kcg_true, &scope_382, 1, 2}
};
static const MappingScope scope_376 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_376_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_375_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_376, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_375 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_375_entries, 6,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions */
static const MappingEntry scope_374_entries[38] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 36},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 37},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_375, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_flatten_sections 1", NULL, sizeof(outC_C_P041_flatten_sections_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_408, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_405, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_403, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_475, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_395), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L209), &_Type_array_int_395_Utils, NULL, NULL, &scope_535, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(P041_trackide_sectionlist_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L368), &_Type_P041_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_474, 1, 22},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_5), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L373), &_Type_array_int_5_Utils, NULL, NULL, &scope_497, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L375", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L375), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_517, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L380", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L380), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_6), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L381), &_Type_array_int_6_Utils, NULL, NULL, &scope_521, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_105), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L384), &_Type_array_int_105_Utils, NULL, NULL, &scope_536, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__11258), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L385), &_Type_array__11258_Utils, NULL, NULL, &scope_476, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__11599), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L386), &_Type_array__11599_Utils, NULL, NULL, &scope_537, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 35},
  /* 37 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_374 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions",
  scope_374_entries, 38,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_373_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_367_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_367_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_373 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_373_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_372_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_372 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_372_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_371_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_369_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_369_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_371 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_371_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_370_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_369_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_369_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_370 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_370_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_369_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_369_entries[0], isActive_kcg_bool_kcg_false, &scope_370, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_369_entries[0], isActive_kcg_bool_kcg_true, &scope_371, 1, 2}
};
static const MappingScope scope_369 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_369_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_368_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_368_entries[0], isActive_kcg_bool_kcg_false, &scope_369, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_368_entries[0], isActive_kcg_bool_kcg_true, &scope_372, 1, 2}
};
static const MappingScope scope_368 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_368_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_367_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_367_entries[0], isActive_kcg_bool_kcg_false, &scope_368, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_367_entries[0], isActive_kcg_bool_kcg_true, &scope_373, 1, 2}
};
static const MappingScope scope_367 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_367_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_366_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_367, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_366 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_366_entries, 6,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions */
static const MappingEntry scope_365_entries[41] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 39},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 40},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_366, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_flatten_sections 1", NULL, sizeof(outC_C_P005_flatten_sections_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_407, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_405, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_403, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_453, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_264), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L209), &_Type_array_int_264_Utils, NULL, NULL, &scope_531, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L365", NULL, sizeof(P005_trackide_sectionlist_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L365), &_Type_P005_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_452, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 22 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 25 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 26 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 27 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_447, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L375", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L375), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_451, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_517, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L380", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L380), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_450, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_497, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_236), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L384), &_Type_array_int_236_Utils, NULL, NULL, &scope_532, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__11146), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L385), &_Type_array__11146_Utils, NULL, NULL, &scope_454, 1, 36},
  /* 37 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__11587), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L386), &_Type_array__11587_Utils, NULL, NULL, &scope_533, 1, 35},
  /* 38 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 39 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 38},
  /* 40 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_365 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions",
  scope_365_entries, 41,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_364_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_358_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_358_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_364 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_364_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_363_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_363 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_363_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_362_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_360_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_360_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_362 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_362_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_361_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_360_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_360_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_361 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_361_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_360_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_360_entries[0], isActive_kcg_bool_kcg_false, &scope_361, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_360_entries[0], isActive_kcg_bool_kcg_true, &scope_362, 1, 2}
};
static const MappingScope scope_360 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_360_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_359_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_359_entries[0], isActive_kcg_bool_kcg_false, &scope_360, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_359_entries[0], isActive_kcg_bool_kcg_true, &scope_363, 1, 2}
};
static const MappingScope scope_359 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_359_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_358_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_358_entries[0], isActive_kcg_bool_kcg_false, &scope_359, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_358_entries[0], isActive_kcg_bool_kcg_true, &scope_364, 1, 2}
};
static const MappingScope scope_358 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_358_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_357_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_358, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_357 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_357_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2 */
static const MappingEntry scope_356_entries[50] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 48},
  /* 1 */ { MAP_OUTPUT, "P003V1_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, P003V1_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 49},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_357, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 2", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_405, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_403, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_478, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_444), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L209), &_Type_array_int_444_Utils, NULL, NULL, &scope_526, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L365", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L365), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_477, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_521, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 23 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_24), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L381), &_Type_array_int_24_Utils, NULL, NULL, &scope_527, 1, 23},
  /* 24 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 24},
  /* 25 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_56), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L384), &_Type_array_int_56_Utils, NULL, NULL, &scope_528, 1, 25},
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
  /* 44 */ { MAP_LOCAL, "_L407", NULL, sizeof(array_int_18), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L407), &_Type_array_int_18_Utils, NULL, NULL, &scope_529, 1, 44},
  /* 45 */ { MAP_LOCAL, "_L408", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L408), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_477, 1, 45},
  /* 46 */ { MAP_LOCAL, "_L409", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L409), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 46},
  /* 47 */ { MAP_LOCAL, "_L412", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L412), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 47},
  /* 48 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 49 */ { MAP_LOCAL, "sections", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, sections), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_477, 1, 4}
};
static const MappingScope scope_356 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2",
  scope_356_entries, 50,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_355_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_349_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_349_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_355 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_355_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_354_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_350_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_350_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_354 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_354_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_353_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_351_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_351_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_353 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_353_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_352_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_351_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_351_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_352 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_352_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_351_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_351_entries[0], isActive_kcg_bool_kcg_false, &scope_352, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_351_entries[0], isActive_kcg_bool_kcg_true, &scope_353, 1, 2}
};
static const MappingScope scope_351 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_351_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_350_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_350_entries[0], isActive_kcg_bool_kcg_false, &scope_351, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_350_entries[0], isActive_kcg_bool_kcg_true, &scope_354, 1, 2}
};
static const MappingScope scope_350 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_350_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_349_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_349_entries[0], isActive_kcg_bool_kcg_false, &scope_350, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_349_entries[0], isActive_kcg_bool_kcg_true, &scope_355, 1, 2}
};
static const MappingScope scope_349 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_349_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_348_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_349, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_348 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_348_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2 */
static const MappingEntry scope_347_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 34},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_body_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 2 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_sections), &_Type_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_463, 1, 36},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_348, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_405, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 3", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_3), NULL, NULL, NULL, &scope_405, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_465, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L209), &_Type_array_int_494_Utils, NULL, NULL, &scope_520, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 19 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackside_sectionlist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L367), &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_464, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L369), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_461, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_521, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__11180), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L385), &_Type_array__11180_Utils, NULL, NULL, &scope_463, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__11554), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L386), &_Type_array__11554_Utils, NULL, NULL, &scope_522, 1, 24},
  /* 28 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L394), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_462, 1, 28},
  /* 31 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 32 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 33 */ { MAP_LOCAL, "_L402", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L402), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L403", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L403), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L405", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L405), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 33},
  /* 36 */ { MAP_OUTPUT, "meta_first_section", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, meta_first_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 37 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 38 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37}
};
static const MappingScope scope_347 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2",
  scope_347_entries, 39,
};

/* TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal */
static const MappingEntry scope_346_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_401, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5}
};
static const MappingScope scope_346 = {
  "TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal",
  scope_346_entries, 26,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_sections_TM_conversions_baseline2 */
static const MappingEntry scope_345_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 20},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section 2", NULL, sizeof(outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_406, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_346, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L431", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L431), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L432", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L432), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L433", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L433), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L434", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L434), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L435", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L435), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L436", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L436), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L437", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L437), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L438", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L438), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L439", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L439), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L440", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L440), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_462, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L441", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L441), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L442", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L442), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L443", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L443), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L446", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L446), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L447", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L447), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L448", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, _L448), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19}
};
static const MappingScope scope_345 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_sections_TM_conversions_baseline2",
  scope_345_entries, 21,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_344_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_338_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_338_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_344 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_344_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_343_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_339_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_339_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_343 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_343_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_342_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_340_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_340_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_342 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_342_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_341_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_340_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_340_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_341 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_341_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_340_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_340_entries[0], isActive_kcg_bool_kcg_false, &scope_341, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_340_entries[0], isActive_kcg_bool_kcg_true, &scope_342, 1, 2}
};
static const MappingScope scope_340 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_340_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_339_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_339_entries[0], isActive_kcg_bool_kcg_false, &scope_340, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_339_entries[0], isActive_kcg_bool_kcg_true, &scope_343, 1, 2}
};
static const MappingScope scope_339 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_339_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_338_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_338_entries[0], isActive_kcg_bool_kcg_false, &scope_339, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_338_entries[0], isActive_kcg_bool_kcg_true, &scope_344, 1, 2}
};
static const MappingScope scope_338 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_338_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_337_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_338, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_337 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_337_entries, 6,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions */
static const MappingEntry scope_336_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 35},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_337, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_flatten_sections 1", NULL, sizeof(outC_C_P021_flatten_sections_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_404, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_405, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_403, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_469, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_396), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L209), &_Type_array_int_396_Utils, NULL, NULL, &scope_516, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L369", NULL, sizeof(P021_trackide_sectionlist_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L369), &_Type_P021_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_468, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_447, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L375", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L375), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_467, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_517, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L380", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L380), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_466, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_497, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_104), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L384), &_Type_array_int_104_Utils, NULL, NULL, &scope_518, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__11226), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L385), &_Type_array__11226_Utils, NULL, NULL, &scope_470, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__11545), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L386), &_Type_array__11545_Utils, NULL, NULL, &scope_519, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_336 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions",
  scope_336_entries, 37,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_335_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_402, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_506, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 10}
};
static const MappingScope scope_335 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_335_entries, 12,
};

/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal */
static const MappingEntry scope_334_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_401, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5}
};
static const MappingScope scope_334 = {
  "TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal",
  scope_334_entries, 26,
};

/* TM_trackside::Write_P015/ Write_P015_TM_trackside */
static const MappingEntry scope_333_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P015_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P015_tracksim_compr 1", NULL, sizeof(outC_C_P015_tracksim_compr_TM_conversions), offsetof(outC_Write_P015_TM_trackside, Context_1), NULL, NULL, NULL, &scope_392, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P015_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P015_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_Write_P015_TM_trackside, _L1), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_446, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P015_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P015_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P015_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 13}
};
static const MappingScope scope_333 = {
  "TM_trackside::Write_P015/ Write_P015_TM_trackside",
  scope_333_entries, 17,
};

/* TM_trackside::Write_P065/ Write_P065_TM_trackside */
static const MappingEntry scope_332_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P065_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P065_tracksim_compr 1", NULL, sizeof(outC_C_P065_tracksim_compr_TM_conversions), offsetof(outC_Write_P065_TM_trackside, Context_1), NULL, NULL, NULL, &scope_383, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P065_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P065_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_Write_P065_TM_trackside, _L1), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_449, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P065_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P065_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P065_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 13}
};
static const MappingScope scope_332 = {
  "TM_trackside::Write_P065/ Write_P065_TM_trackside",
  scope_332_entries, 17,
};

/* TM_trackside::Write_P041/ Write_P041_TM_trackside */
static const MappingEntry scope_331_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P041_tracksim_compr 1", NULL, sizeof(outC_C_P041_tracksim_compr_TM_conversions), offsetof(outC_Write_P041_TM_trackside, Context_1), NULL, NULL, NULL, &scope_374, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Write_P041_TM_trackside, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_475, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 13}
};
static const MappingScope scope_331 = {
  "TM_trackside::Write_P041/ Write_P041_TM_trackside",
  scope_331_entries, 17,
};

/* TM_trackside::Write_P005/ Write_P005_TM_trackside */
static const MappingEntry scope_330_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P005_tracksim_compr 1", NULL, sizeof(outC_C_P005_tracksim_compr_TM_conversions), offsetof(outC_Write_P005_TM_trackside, Context_1), NULL, NULL, NULL, &scope_365, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P005_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P005_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Write_P005_TM_trackside, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_453, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 13}
};
static const MappingScope scope_330 = {
  "TM_trackside::Write_P005/ Write_P005_TM_trackside",
  scope_330_entries, 17,
};

/* TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2 */
static const MappingEntry scope_329_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_tracksim_compr 1", NULL, sizeof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_356, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_478, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 13}
};
static const MappingScope scope_329 = {
  "TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2",
  scope_329_entries, 17,
};

/* TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2 */
static const MappingEntry scope_328_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 1 */ { MAP_OUTPUT, "PacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, PacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 25},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_body 1", NULL, sizeof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_347, 1, 3},
  /* 3 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections 1", &iter_foldwi_33, sizeof(outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_345, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_335, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_346, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_465, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L45), &_Type_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_463, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L51", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L51), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L54", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L54), &_Type_array_int_33_Utils, NULL, NULL, &scope_508, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L55", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L55), &_Type_array_int_33_Utils, NULL, NULL, &scope_508, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L56), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_328 = {
  "TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2",
  scope_328_entries, 26,
};

/* TM_trackside::Write_P021/ Write_P021_TM_trackside */
static const MappingEntry scope_327_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P021_tracksim_compr 1", NULL, sizeof(outC_C_P021_tracksim_compr_TM_conversions), offsetof(outC_Write_P021_TM_trackside, Context_1), NULL, NULL, NULL, &scope_336, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_335, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_334, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Write_P021_TM_trackside, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_469, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 13}
};
static const MappingScope scope_327 = {
  "TM_trackside::Write_P021/ Write_P021_TM_trackside",
  scope_327_entries, 17,
};

/* TM_RBC_conversions::C_M003_int__to_header/ C_M003_int__to_header_TM_RBC_conversions */
static const MappingEntry scope_326_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Message_Header_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, Message_Header_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 9},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_int_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L1), &_Type_M_003_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_442, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_326 = {
  "TM_RBC_conversions::C_M003_int__to_header/ C_M003_int__to_header_TM_RBC_conversions",
  scope_326_entries, 10,
};

/* MessageLibBaseline2::Send_P015/ Send_P015_MessageLibBaseline2 */
static const MappingEntry scope_325_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P015 1", NULL, sizeof(outC_Write_P015_TM_trackside), offsetof(outC_Send_P015_MessageLibBaseline2, Context_1), NULL, &scope_325_entries[0], isActive_kcg_bool_kcg_true, &scope_333, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_Send_P015_MessageLibBaseline2, _L4), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_446, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_325 = {
  "MessageLibBaseline2::Send_P015/ Send_P015_MessageLibBaseline2",
  scope_325_entries, 9,
};

/* MessageLibBaseline2::Send_P065/ Send_P065_MessageLibBaseline2 */
static const MappingEntry scope_324_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P065 1", NULL, sizeof(outC_Write_P065_TM_trackside), offsetof(outC_Send_P065_MessageLibBaseline2, Context_1), NULL, &scope_324_entries[0], isActive_kcg_bool_kcg_true, &scope_332, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_Send_P065_MessageLibBaseline2, _L4), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_449, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_324 = {
  "MessageLibBaseline2::Send_P065/ Send_P065_MessageLibBaseline2",
  scope_324_entries, 9,
};

/* MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2 */
static const MappingEntry scope_323_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P041 1", NULL, sizeof(outC_Write_P041_TM_trackside), offsetof(outC_Send_P041_MessageLibBaseline2, Context_1), NULL, &scope_323_entries[0], isActive_kcg_bool_kcg_true, &scope_331, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Send_P041_MessageLibBaseline2, _L4), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_475, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_323 = {
  "MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2",
  scope_323_entries, 9,
};

/* MessageLibBaseline2::Send_P005/ Send_P005_MessageLibBaseline2 */
static const MappingEntry scope_322_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P005 1", NULL, sizeof(outC_Write_P005_TM_trackside), offsetof(outC_Send_P005_MessageLibBaseline2, Context_1), NULL, &scope_322_entries[0], isActive_kcg_bool_kcg_true, &scope_330, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Send_P005_MessageLibBaseline2, _L4), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_453, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_322 = {
  "MessageLibBaseline2::Send_P005/ Send_P005_MessageLibBaseline2",
  scope_322_entries, 9,
};

/* MessageLibBaseline2::Send_P003V1/ Send_P003V1_MessageLibBaseline2 */
static const MappingEntry scope_321_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P003V1 1", NULL, sizeof(outC_Write_P003V1_TM_trackside_baseline2), offsetof(outC_Send_P003V1_MessageLibBaseline2, Context_1), NULL, &scope_321_entries[0], isActive_kcg_bool_kcg_true, &scope_329, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L4), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_478, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_321 = {
  "MessageLibBaseline2::Send_P003V1/ Send_P003V1_MessageLibBaseline2",
  scope_321_entries, 9,
};

/* MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2 */
static const MappingEntry scope_320_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P027V1 1", NULL, sizeof(outC_Write_P027V1_TM_trackside_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, Context_1), NULL, &scope_320_entries[0], isActive_kcg_bool_kcg_true, &scope_328, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L4), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_465, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_320 = {
  "MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2",
  scope_320_entries, 9,
};

/* MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2 */
static const MappingEntry scope_319_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P021 1", NULL, sizeof(outC_Write_P021_TM_trackside), offsetof(outC_Send_P021_MessageLibBaseline2, Context_1), NULL, &scope_319_entries[0], isActive_kcg_bool_kcg_true, &scope_327, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Send_P021_MessageLibBaseline2, _L4), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_469, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_319 = {
  "MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2",
  scope_319_entries, 9,
};

/* TA_Lib_internal::TrainLength_Correction/ TrainLength_Correction_TA_Lib_internal */
static const MappingEntry scope_318_entries[16] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L1), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L10), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L2), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L4), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L5), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_TrainLength_Correction_TA_Lib_internal, _L9), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_OUTPUT, "corrected_distance", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_TrainLength_Correction_TA_Lib_internal, corrected_distance), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15}
};
static const MappingScope scope_318 = {
  "TA_Lib_internal::TrainLength_Correction/ TrainLength_Correction_TA_Lib_internal",
  scope_318_entries, 16,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/ FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internalmath::Abs 1/ */
static const MappingEntry scope_317_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_317 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/ FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internalmath::Abs 1/",
  scope_317_entries, 6,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/ FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal */
static const MappingEntry scope_316_entries[27] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L2), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L20), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 22},
  /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 13 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L26), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 18 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L4), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 4},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L5), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 21 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 22 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 23 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 24 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 25 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_317, 1, 0},
  /* 26 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26}
};
static const MappingScope scope_316 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/ FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal",
  scope_316_entries, 27,
};

/* TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal */
static const MappingEntry scope_315_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_315 = {
  "TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal",
  scope_315_entries, 7,
};

/* TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal */
static const MappingEntry scope_314_entries[13] = {
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
static const MappingScope scope_314 = {
  "TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal",
  scope_314_entries, 13,
};

/* TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions */
static const MappingEntry scope_313_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_OUTPUT, "v_diff", NULL, sizeof(V_DIFF), offsetof(outC_CAST_Int_to_V_DIFF_TM_conversions, v_diff), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_313 = {
  "TM_conversions::CAST_Int_to_V_DIFF/ CAST_Int_to_V_DIFF_TM_conversions",
  scope_313_entries, 8,
};

/* TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions */
static const MappingEntry scope_312_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_OUTPUT, "nc_diff", NULL, sizeof(NC_DIFF), offsetof(outC_CAST_Int_to_NC_DIFF_TM_conversions, nc_diff), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_312 = {
  "TM_conversions::CAST_Int_to_NC_DIFF/ CAST_Int_to_NC_DIFF_TM_conversions",
  scope_312_entries, 6,
};

/* TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal */
static const MappingEntry scope_311_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L2), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "element", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_extract_el_section_TM_lib_internal, element), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_311 = {
  "TM_lib_internal::C_P027V1_extract_el_section/ C_P027V1_extract_el_section_TM_lib_internal",
  scope_311_entries, 6,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003/ SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_310_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_322, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_325, 1, 4},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_320, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_324, 1, 3},
  /* 5 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8}
};
static const MappingScope scope_310 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003/ SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_310_entries, 12,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003/ SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_309_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_322, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_325, 1, 4},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_320, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_324, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 2", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_2), NULL, NULL, NULL, &scope_324, 1, 5},
  /* 6 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L33", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L33), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9}
};
static const MappingScope scope_309 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003/ SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_309_entries, 14,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003/ SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_308_entries[16] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P003V1 1", NULL, sizeof(outC_Send_P003V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_321, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_322, 1, 3},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_325, 1, 6},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_320, 1, 1},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P041 1", NULL, sizeof(outC_Send_P041_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_323, 1, 4},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_324, 1, 5},
  /* 7 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 12}
};
static const MappingScope scope_308 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003/ SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_308_entries, 16,
};

/* MessageLibBaseline2::Send_M003_JRU/ Send_M003_JRU_MessageLibBaseline2 */
static const MappingEntry scope_307_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, Message_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions::C_M003_int__to_header 1", NULL, sizeof(outC_C_M003_int__to_header_TM_RBC_conversions), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, Context_1), NULL, NULL, NULL, &scope_326, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_int_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, _L1), &_Type_M_003_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_442, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 2}
};
static const MappingScope scope_307 = {
  "MessageLibBaseline2::Send_M003_JRU/ Send_M003_JRU_MessageLibBaseline2",
  scope_307_entries, 4,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003/ SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_306_entries[16] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P003V1 1", NULL, sizeof(outC_Send_P003V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_321, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_322, 1, 3},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_325, 1, 6},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_320, 1, 1},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P041 1", NULL, sizeof(outC_Send_P041_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_323, 1, 4},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_324, 1, 5},
  /* 7 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 12}
};
static const MappingScope scope_306 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003/ SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_306_entries, 16,
};

/* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop/ SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP */
static const MappingEntry scope_305_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "Pointer", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, Pointer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L10), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L7), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, _L9), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 3},
  /* 13 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12}
};
static const MappingScope scope_305 = {
  "TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop/ SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP",
  scope_305_entries, 14,
};

/* TA_SSP::SSP_Truncate_at_BG_loop/ SSP_Truncate_at_BG_loop_TA_SSP */
static const MappingEntry scope_304_entries[11] = {
  /* 0 */ { MAP_OUTPUT, "Profile_out", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, Profile_out), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 10},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L2), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L3), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L5), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L8), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Truncate_at_BG_loop_TA_SSP, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_304 = {
  "TA_SSP::SSP_Truncate_at_BG_loop/ SSP_Truncate_at_BG_loop_TA_SSP",
  scope_304_entries, 11,
};

/* TA_SSP::SSP_Normalize_Profile_loop/ SSP_Normalize_Profile_loop_TA_SSP */
static const MappingEntry scope_303_entries[20] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 18},
  /* 1 */ { MAP_OUTPUT, "ProfileNormalized_LRBG", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, ProfileNormalized_LRBG), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 19},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::TrainLength_Correction 1", NULL, sizeof(outC_TrainLength_Correction_TA_Lib_internal), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, Context_1), NULL, &scope_303_entries[0], isActive_kcg_bool_kcg_true, &scope_318, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L2), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L3), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L38", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L38), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L39", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L39), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L4), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L45", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L45), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L46", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L46), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L48", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L48), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 18 */ { MAP_LOCAL, "_L7", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L7), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 6},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SSP_Normalize_Profile_loop_TA_SSP, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_303 = {
  "TA_SSP::SSP_Normalize_Profile_loop/ SSP_Normalize_Profile_loop_TA_SSP",
  scope_303_entries, 20,
};

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs/ FindStartOfNewSpeedProfileAbs_TA_Lib_internal */
static const MappingEntry scope_302_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP 1", &iter_foldwi_50, sizeof(outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_316, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L1), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L100), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L198", NULL, sizeof(array_int_50), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L198), &_Type_array_int_50_Utils, NULL, NULL, &scope_511, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L2), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L93", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L93), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L94), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L98", NULL, sizeof(array__11530), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L98), &_Type_array__11530_Utils, NULL, NULL, &scope_514, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, _L99), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_OUTPUT, "relevant_section", NULL, sizeof(kcg_int), offsetof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal, relevant_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10}
};
static const MappingScope scope_302 = {
  "TA_Lib_internal::FindStartOfNewSpeedProfileAbs/ FindStartOfNewSpeedProfileAbs_TA_Lib_internal",
  scope_302_entries, 11,
};

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop/ SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP */
static const MappingEntry scope_301_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "SSP", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, SSP), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L15), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L19), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L20), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L6), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_301 = {
  "TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop/ SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP",
  scope_301_entries, 9,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_300_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_298_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_300 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:then:",
  scope_300_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_299_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_298_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_299 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:else:",
  scope_299_entries, 1,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_298_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_Front_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_298_entries[0], isActive_kcg_bool_kcg_false, &scope_299, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_298_entries[0], isActive_kcg_bool_kcg_true, &scope_300, 1, 2}
};
static const MappingScope scope_298 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internalIfBlock1:",
  scope_298_entries, 3,
};

/* TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal */
static const MappingEntry scope_297_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_298, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, _L1), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "add_train_length", NULL, sizeof(kcg_bool), offsetof(outC_Eval_Q_Front_TA_Lib_internal, add_train_length), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(Q_FRONT), offsetof(outC_Eval_Q_Front_TA_Lib_internal, q_front_in), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_297 = {
  "TA_Lib_internal::Eval_Q_Front/ Eval_Q_Front_TA_Lib_internal",
  scope_297_entries, 4,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_296_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_292_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_292_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_292_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_296 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:then:",
  scope_296_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_295_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L11_IfBlock1), &_Type_kcg_int_Utils, &scope_293_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L22_IfBlock1), &_Type_kcg_int_Utils, &scope_293_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L33_IfBlock1), &_Type_kcg_int_Utils, &scope_293_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_295 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:else:then:",
  scope_295_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_294_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_293_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L25_IfBlock1), &_Type_kcg_int_Utils, &scope_293_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L36_IfBlock1), &_Type_kcg_int_Utils, &scope_293_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_294 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:else:else:",
  scope_294_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_293_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_293_entries[0], isActive_kcg_bool_kcg_false, &scope_294, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_293_entries[0], isActive_kcg_bool_kcg_true, &scope_295, 1, 2}
};
static const MappingScope scope_293 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:else:",
  scope_293_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_292_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_292_entries[0], isActive_kcg_bool_kcg_false, &scope_293, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_292_entries[0], isActive_kcg_bool_kcg_true, &scope_296, 1, 2}
};
static const MappingScope scope_292 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internalIfBlock1:",
  scope_292_entries, 3,
};

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internal */
static const MappingEntry scope_291_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_292, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, _L1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_OUTPUT, "d_internal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, d_internal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_291 = {
  "TA_Lib_internal::Normalize_Distance_d_internal_t/ Normalize_Distance_d_internal_t_TA_Lib_internal",
  scope_291_entries, 4,
};

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal */
static const MappingEntry scope_290_entries[14] = {
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
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 3}
};
static const MappingScope scope_290 = {
  "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
  scope_290_entries, 14,
};

/* TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal */
static const MappingEntry scope_289_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 1", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_314, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 2", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_314, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 1", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_315, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 3", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_3), NULL, NULL, NULL, &scope_315, 1, 3},
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
static const MappingScope scope_289 = {
  "TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal",
  scope_289_entries, 19,
};

/* TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal */
static const MappingEntry scope_288_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 11},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_289, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 2}
};
static const MappingScope scope_288 = {
  "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
  scope_288_entries, 12,
};

/* TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions */
static const MappingEntry scope_287_entries[11] = {
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
static const MappingScope scope_287 = {
  "TM_conversions::CAST_Int_to_V_STATIC/ CAST_Int_to_V_STATIC_TM_conversions",
  scope_287_entries, 11,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_286_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L4_IfBlock1), &_Type_Q_FRONT_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_282_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_286 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:then:",
  scope_286_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_285_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L3_IfBlock1), &_Type_Q_FRONT_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_285 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:then:",
  scope_285_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_284_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L1_IfBlock1), &_Type_Q_FRONT_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_283_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_284 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:else:",
  scope_284_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_283_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_283_entries[0], isActive_kcg_bool_kcg_false, &scope_284, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_283_entries[0], isActive_kcg_bool_kcg_true, &scope_285, 1, 2}
};
static const MappingScope scope_283 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:else:",
  scope_283_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1: */
static const MappingEntry scope_282_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_282_entries[0], isActive_kcg_bool_kcg_false, &scope_283, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_282_entries[0], isActive_kcg_bool_kcg_true, &scope_286, 1, 2}
};
static const MappingScope scope_282 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversionsIfBlock1:",
  scope_282_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions */
static const MappingEntry scope_281_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_282, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_front", NULL, sizeof(Q_FRONT), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_front_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_FRONT_TM_conversions, q_front_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_281 = {
  "TM_conversions::CAST_Int_to_Q_FRONT/ CAST_Int_to_Q_FRONT_TM_conversions",
  scope_281_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions */
static const MappingEntry scope_280_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_static", NULL, sizeof(D_STATIC), offsetof(outC_CAST_Int_to_D_STATIC_TM_conversions, d_static), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_280 = {
  "TM_conversions::CAST_Int_to_D_STATIC/ CAST_Int_to_D_STATIC_TM_conversions",
  scope_280_entries, 6,
};

/* TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal */
static const MappingEntry scope_279_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NC_DIFF 1", NULL, sizeof(outC_CAST_Int_to_NC_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _2_Context_1), NULL, NULL, NULL, &scope_312, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_DIFF 1", NULL, sizeof(outC_CAST_Int_to_V_DIFF_TM_conversions), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_313, 1, 3},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 1", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_311, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_extract_el_section 2", NULL, sizeof(outC_C_P027V1_extract_el_section_TM_lib_internal), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_311, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(NC_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L25), &_Type_NC_DIFF_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(V_DIFF), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L28), &_Type_V_DIFF_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L4), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_499, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_OUTPUT, "sections", NULL, sizeof(P027V1_section_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_us_array_qdiff_TM_lib_internal, sections), &_Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_499, 1, 17}
};
static const MappingScope scope_279 = {
  "TM_lib_internal::C_P027V1_us_array_qdiff/ C_P027V1_us_array_qdiff_TM_lib_internal",
  scope_279_entries, 18,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_278_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4_IfBlock1), &_Type_M_VERSION_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_270_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_278 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then:",
  scope_278_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_277_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L3_IfBlock1), &_Type_M_VERSION_Utils, &scope_271_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_271_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_277 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then:",
  scope_277_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_276_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L2_IfBlock1), &_Type_M_VERSION_Utils, &scope_272_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_272_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_276 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then:",
  scope_276_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_275_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L26_IfBlock1), &_Type_M_VERSION_Utils, &scope_273_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_273_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_275 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then:",
  scope_275_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_274_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_273_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L27_IfBlock1), &_Type_M_VERSION_Utils, &scope_273_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_274 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else:",
  scope_274_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_273_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_273_entries[0], isActive_kcg_bool_kcg_false, &scope_274, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_273_entries[0], isActive_kcg_bool_kcg_true, &scope_275, 1, 2}
};
static const MappingScope scope_273 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:",
  scope_273_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_272_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_272_entries[0], isActive_kcg_bool_kcg_false, &scope_273, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_272_entries[0], isActive_kcg_bool_kcg_true, &scope_276, 1, 2}
};
static const MappingScope scope_272 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:",
  scope_272_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_271_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_271_entries[0], isActive_kcg_bool_kcg_false, &scope_272, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_271_entries[0], isActive_kcg_bool_kcg_true, &scope_277, 1, 2}
};
static const MappingScope scope_271 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:",
  scope_271_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1: */
static const MappingEntry scope_270_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_270_entries[0], isActive_kcg_bool_kcg_false, &scope_271, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_270_entries[0], isActive_kcg_bool_kcg_true, &scope_278, 1, 2}
};
static const MappingScope scope_270 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:",
  scope_270_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions */
static const MappingEntry scope_269_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_270, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_269 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions",
  scope_269_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_TAFDISPLAY/ CAST_Int_to_D_TAFDISPLAY_TM_conversions */
static const MappingEntry scope_268_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_TAFDISPLAY_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_TAFDISPLAY_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_TAFDISPLAY_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_TAFDISPLAY_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_TAFDISPLAY_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_tafdisplay", NULL, sizeof(D_TAFDISPLAY), offsetof(outC_CAST_Int_to_D_TAFDISPLAY_TM_conversions, d_tafdisplay), &_Type_D_TAFDISPLAY_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_268 = {
  "TM_conversions::CAST_Int_to_D_TAFDISPLAY/ CAST_Int_to_D_TAFDISPLAY_TM_conversions",
  scope_268_entries, 6,
};

/* TM_conversions::CAST_Int_to_L_TAFDISPLAY/ CAST_Int_to_L_TAFDISPLAY_TM_conversions */
static const MappingEntry scope_267_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_tafdisplay", NULL, sizeof(L_TAFDISPLAY), offsetof(outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions, l_tafdisplay), &_Type_L_TAFDISPLAY_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_267 = {
  "TM_conversions::CAST_Int_to_L_TAFDISPLAY/ CAST_Int_to_L_TAFDISPLAY_TM_conversions",
  scope_267_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_266_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_ORIENTATION), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L4_IfBlock1), &_Type_Q_ORIENTATION_Utils, &scope_262_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_262_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_266 = {
  "TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:then:",
  scope_266_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_265_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_ORIENTATION), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L3_IfBlock1), &_Type_Q_ORIENTATION_Utils, &scope_263_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_263_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_265 = {
  "TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:else:then:",
  scope_265_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_264_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_ORIENTATION), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L1_IfBlock1), &_Type_Q_ORIENTATION_Utils, &scope_263_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_263_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_264 = {
  "TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:else:else:",
  scope_264_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_263_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_263_entries[0], isActive_kcg_bool_kcg_false, &scope_264, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_263_entries[0], isActive_kcg_bool_kcg_true, &scope_265, 1, 2}
};
static const MappingScope scope_263 = {
  "TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:else:",
  scope_263_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1: */
static const MappingEntry scope_262_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_262_entries[0], isActive_kcg_bool_kcg_false, &scope_263, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_262_entries[0], isActive_kcg_bool_kcg_true, &scope_266, 1, 2}
};
static const MappingScope scope_262 = {
  "TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversionsIfBlock1:",
  scope_262_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversions */
static const MappingEntry scope_261_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_262, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_orientation", NULL, sizeof(Q_ORIENTATION), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, q_orientation), &_Type_Q_ORIENTATION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_orientation_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions, q_orientation_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_261 = {
  "TM_conversions::CAST_Int_to_Q_ORIENTATION/ CAST_Int_to_Q_ORIENTATION_TM_conversions",
  scope_261_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_SR/ CAST_Int_to_D_SR_TM_conversions */
static const MappingEntry scope_260_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SR_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SR_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_SR_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_SR_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_SR_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_sr", NULL, sizeof(D_SR), offsetof(outC_CAST_Int_to_D_SR_TM_conversions, d_sr), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_260 = {
  "TM_conversions::CAST_Int_to_D_SR/ CAST_Int_to_D_SR_TM_conversions",
  scope_260_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP/ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions */
static const MappingEntry scope_259_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_emergencystop", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, d_emergencystop), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_259 = {
  "TM_conversions::CAST_Int_to_D_EMERGENCYSTOP/ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions",
  scope_259_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_REF/ CAST_Int_to_D_REF_TM_conversions */
static const MappingEntry scope_258_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ref", NULL, sizeof(D_REF), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, d_ref), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_258 = {
  "TM_conversions::CAST_Int_to_D_REF/ CAST_Int_to_D_REF_TM_conversions",
  scope_258_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_EM/ CAST_Int_to_NID_EM_TM_conversions */
static const MappingEntry scope_257_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_em", NULL, sizeof(NID_EM), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, nid_em), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_257 = {
  "TM_conversions::CAST_Int_to_NID_EM/ CAST_Int_to_NID_EM_TM_conversions",
  scope_257_entries, 6,
};

/* TM_conversions::CAST_Int_to_L_MESSAGE/ CAST_Int_to_L_MESSAGE_TM_conversions */
static const MappingEntry scope_256_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_message", NULL, sizeof(L_MESSAGE), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, l_message), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_256 = {
  "TM_conversions::CAST_Int_to_L_MESSAGE/ CAST_Int_to_L_MESSAGE_TM_conversions",
  scope_256_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_MESSAGE/ CAST_Int_to_NID_MESSAGE_TM_conversions */
static const MappingEntry scope_255_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_message", NULL, sizeof(NID_MESSAGE), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, nid_message), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_255 = {
  "TM_conversions::CAST_Int_to_NID_MESSAGE/ CAST_Int_to_NID_MESSAGE_TM_conversions",
  scope_255_entries, 6,
};

/* TM_conversions::CAST_Int_to_T_TRAIN/ CAST_Int_to_T_TRAIN_TM_conversions */
static const MappingEntry scope_254_entries[9] = {
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
static const MappingScope scope_254 = {
  "TM_conversions::CAST_Int_to_T_TRAIN/ CAST_Int_to_T_TRAIN_TM_conversions",
  scope_254_entries, 9,
};

/* TM_conversions::CAST_Int_to_NID_LRBG/ CAST_Int_to_NID_LRBG_TM_conversions */
static const MappingEntry scope_253_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "NID_LRBG_out", NULL, sizeof(NID_LRBG), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, NID_LRBG_out), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_253 = {
  "TM_conversions::CAST_Int_to_NID_LRBG/ CAST_Int_to_NID_LRBG_TM_conversions",
  scope_253_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_252_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_248_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L8_IfBlock1), &_Type_M_ACK_Utils, &scope_248_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_252 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:then:",
  scope_252_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_251_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_249_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L71_IfBlock1), &_Type_M_ACK_Utils, &scope_249_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_251 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:then:",
  scope_251_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_250_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L1_IfBlock1), &_Type_M_ACK_Utils, &scope_249_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_249_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_250 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:else:",
  scope_250_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_249_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_249_entries[0], isActive_kcg_bool_kcg_false, &scope_250, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_249_entries[0], isActive_kcg_bool_kcg_true, &scope_251, 1, 2}
};
static const MappingScope scope_249 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:",
  scope_249_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1: */
static const MappingEntry scope_248_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_248_entries[0], isActive_kcg_bool_kcg_false, &scope_249, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_248_entries[0], isActive_kcg_bool_kcg_true, &scope_252, 1, 2}
};
static const MappingScope scope_248 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:",
  scope_248_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversions */
static const MappingEntry scope_247_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_248, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_ack", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_ack_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, m_ack_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_247 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversions",
  scope_247_entries, 6,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003/ Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_246_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_310, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_307, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_246 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003/ Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_246_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003/ Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_245_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_309, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_307, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_245 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003/ Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_245_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003/ Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_244_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_308, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_307, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_244 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003/ Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_244_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003/ Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_243_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_306, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_307, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_243 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003/ Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_243_entries, 11,
};

/* TA_SSP::SSP_Correct_StartSection/ SSP_Correct_StartSection_TA_SSP */
static const MappingEntry scope_242_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Profile_out", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Correct_StartSection_TA_SSP, Profile_out), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Correct_StartSection_TA_SSP, _L1), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Correct_StartSection_TA_SSP, _L3), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Correct_StartSection_TA_SSP, _L5), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Correct_StartSection_TA_SSP, _L7), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_SSP_Correct_StartSection_TA_SSP, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_242 = {
  "TA_SSP::SSP_Correct_StartSection/ SSP_Correct_StartSection_TA_SSP",
  scope_242_entries, 6,
};

/* TA_SSP::SSP_Truncate_at_BG/ SSP_Truncate_at_BG_TA_SSP */
static const MappingEntry scope_241_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "Profile_out", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, Profile_out), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 13},
  /* 1 */ { MAP_INSTANCE, "TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop 1", &iter_foldwi_50, sizeof(outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, Context_1), NULL, NULL, NULL, &scope_305, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::SSP_Truncate_at_BG_loop 1", &iter_foldwi_50, sizeof(outC_SSP_Truncate_at_BG_loop_TA_SSP), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_304, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L1), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L12), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L13), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(array_int_50), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L17), &_Type_array_int_50_Utils, NULL, NULL, &scope_511, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(array__11530), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L6), &_Type_array__11530_Utils, NULL, NULL, &scope_514, 1, 4},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_SSP_Truncate_at_BG_TA_SSP, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_241 = {
  "TA_SSP::SSP_Truncate_at_BG/ SSP_Truncate_at_BG_TA_SSP",
  scope_241_entries, 14,
};

/* TA_SSP::SSP_Normalize_Profile/ SSP_Normalize_Profile_TA_SSP */
static const MappingEntry scope_240_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "ProfileNormalized_LRBG", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_TA_SSP, ProfileNormalized_LRBG), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TA_SSP::SSP_Normalize_Profile_loop 1", &iter_foldi_50, sizeof(outC_SSP_Normalize_Profile_loop_TA_SSP), offsetof(outC_SSP_Normalize_Profile_TA_SSP, Context_1), NULL, NULL, NULL, &scope_303, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_TA_SSP, _L1), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Normalize_Profile_TA_SSP, _L2), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Normalize_Profile_TA_SSP, _L3), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_50), offsetof(outC_SSP_Normalize_Profile_TA_SSP, _L4), &_Type_array_int_50_Utils, NULL, NULL, &scope_511, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Normalize_Profile_TA_SSP, _L5), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_50), offsetof(outC_SSP_Normalize_Profile_TA_SSP, _L6), &_Type_array_int_50_Utils, NULL, NULL, &scope_511, 1, 6}
};
static const MappingScope scope_240 = {
  "TA_SSP::SSP_Normalize_Profile/ SSP_Normalize_Profile_TA_SSP",
  scope_240_entries, 8,
};

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile/ SSP_Merge_New_P27V1_to_Profile_TA_SSP */
static const MappingEntry scope_239_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 9},
  /* 1 */ { MAP_OUTPUT, "SpeedProfile_out", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, SpeedProfile_out), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 10},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::FindStartOfNewSpeedProfileAbs 1", NULL, sizeof(outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, Context_1), NULL, &scope_239_entries[0], isActive_kcg_bool_kcg_true, &scope_302, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop 1", &iter_foldi_50, sizeof(outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_301, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _L14), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L148", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _L148), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L45", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _L45), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L47", NULL, sizeof(array__11530), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _L47), &_Type_array__11530_Utils, NULL, NULL, &scope_514, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _L5), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int_50), offsetof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP, _L9), &_Type_array_int_50_Utils, NULL, NULL, &scope_511, 1, 4}
};
static const MappingScope scope_239 = {
  "TA_SSP::SSP_Merge_New_P27V1_to_Profile/ SSP_Merge_New_P27V1_to_Profile_TA_SSP",
  scope_239_entries, 11,
};

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop/ SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP */
static const MappingEntry scope_238_entries[29] = {
  /* 0 */ { MAP_OUTPUT, "SpeedtProfile", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, SpeedtProfile), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 28},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_Q_Front 1", NULL, sizeof(outC_Eval_Q_Front_TA_Lib_internal), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, Context_1), NULL, NULL, NULL, &scope_297, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TA_Lib_internal::Normalize_Distance_d_internal_t 2", NULL, sizeof(outC_Normalize_Distance_d_internal_t_TA_Lib_internal), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, Context_2), NULL, NULL, NULL, &scope_291, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L121", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L121), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_502, 1, 13},
  /* 4 */ { MAP_LOCAL, "_L123", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L123), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_501, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L125", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L125), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L130), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L131), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L133", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L133), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L134), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L135", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L135), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L136", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L136), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L137", NULL, sizeof(V_STATIC), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L137), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 4},
  /* 13 */ { MAP_LOCAL, "_L138", NULL, sizeof(D_STATIC), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L138), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_LOCAL, "_L139", NULL, sizeof(Q_SCALE), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L139), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2},
  /* 15 */ { MAP_LOCAL, "_L142", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L142), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L143", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L143), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L144), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L145", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L145), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L146", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L146), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L147", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L147), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L148", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L148), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L155", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L155), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L156", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L156), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L157", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L157), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L158", NULL, sizeof(kcg_int), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L158), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L159", NULL, sizeof(Q_FRONT), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L159), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L160", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP, _L160), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27}
};
static const MappingScope scope_238 = {
  "TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop/ SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP",
  scope_238_entries, 29,
};

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_237_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L1_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_233_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_237 = {
  "TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:then:",
  scope_237_entries, 1,
};

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_236_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L11_IfBlock1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_234_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_236 = {
  "TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:else:then:",
  scope_236_entries, 1,
};

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_235_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L12_IfBlock1), &_Type_kcg_int_Utils, &scope_234_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_235 = {
  "TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:else:else:",
  scope_235_entries, 1,
};

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_234_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_234_entries[0], isActive_kcg_bool_kcg_false, &scope_235, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_234_entries[0], isActive_kcg_bool_kcg_true, &scope_236, 1, 2}
};
static const MappingScope scope_234 = {
  "TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:else:",
  scope_234_entries, 3,
};

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_233_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_233_entries[0], isActive_kcg_bool_kcg_false, &scope_234, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_233_entries[0], isActive_kcg_bool_kcg_true, &scope_237, 1, 2}
};
static const MappingScope scope_233 = {
  "TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internalIfBlock1:",
  scope_233_entries, 3,
};

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internal */
static const MappingEntry scope_232_entries[16] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_233, 1, 0},
  /* 1 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, ProfileOut), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 15},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L130", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L130), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L141", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L141), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_bool), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L143), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L2), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L254", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L254), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L255", NULL, sizeof(kcg_int), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L255), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L256", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L256), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L257", NULL, sizeof(kcg_int), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L257), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L6), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 4},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L7), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 5},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(StaticSpeedSection_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, _L9), &_Type_StaticSpeedSection_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_492, 1, 6},
  /* 15 */ { MAP_LOCAL, "offset", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal, offset), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_232 = {
  "TA_Lib_internal::MoveSSPSectionsAbsolute_Loop/ MoveSSPSectionsAbsolute_Loop_TA_Lib_internal",
  scope_232_entries, 16,
};

/* TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal */
static const MappingEntry scope_231_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_290, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_506, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_231 = {
  "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
  scope_231_entries, 12,
};

/* TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal */
static const MappingEntry scope_230_entries[25] = {
  /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 24},
  /* 2 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_288, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_289, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int_30_Utils, NULL, NULL, &scope_504, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L38", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L38), &_Type_array_bool_30_Utils, NULL, NULL, &scope_505, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_LOCAL, "_L40", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L40), &_Type_array_bool_30_Utils, NULL, NULL, &scope_505, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_230 = {
  "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
  scope_230_entries, 25,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/ */
static const MappingEntry scope_229_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L1_15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _4__L11_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L9_13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_OUTPUT, "n_iter", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _6_n_iter_1), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_229 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2TM_conversions::CAST_Int_to_N_ITER 1/",
  scope_229_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/ */
static const MappingEntry scope_228_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_us_array_qdiff 1", &iter_mapwi_32, sizeof(outC_C_P027V1_us_array_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, Context_1_1), NULL, NULL, NULL, &scope_279, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L1_1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_460, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L11_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_32), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L5_1), &_Type_array_int_32_Utils, NULL, NULL, &scope_477, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_64_32), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L6_1), &_Type_array_int_64_32_Utils, NULL, NULL, &scope_507, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L7_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(array__11478), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L9_1), &_Type_array__11478_Utils, NULL, NULL, &scope_500, 1, 7},
  /* 8 */ { MAP_OUTPUT, "sections", NULL, sizeof(P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, sections_1), &_Type_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_500, 1, 0}
};
static const MappingScope scope_228 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1/",
  scope_228_entries, 9,
};

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 */
static const MappingEntry scope_227_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_section_onbard", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, P027V1_section_onbard), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_501, 1, 22},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_STATIC 1", NULL, sizeof(outC_CAST_Int_to_D_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_280, 1, 1},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_N_ITER 1", NULL, 0, 0, NULL, NULL, NULL, &scope_229, 1, 4},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_FRONT 1", NULL, sizeof(outC_CAST_Int_to_Q_FRONT_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_281, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_V_STATIC 1", NULL, sizeof(outC_CAST_Int_to_V_STATIC_TM_conversions), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_287, 1, 3},
  /* 5 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_unflatten_sections_qdiff 1", NULL, 0, 0, NULL, NULL, NULL, &scope_228, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L10), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_501, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(array_int_64), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L29), &_Type_array_int_64_Utils, NULL, NULL, &scope_460, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(D_STATIC), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L30), &_Type_D_STATIC_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_FRONT), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L31), &_Type_Q_FRONT_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(V_STATIC), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L32), &_Type_V_STATIC_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(N_ITER), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L33), &_Type_N_ITER_Utils, NULL, NULL, NULL, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L5), &_Type_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_500, 1, 11},
  /* 21 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_3), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L6), &_Type_array_int_3_Utils, NULL, NULL, &scope_471, 1, 10},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 9}
};
static const MappingScope scope_227 = {
  "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2",
  scope_227_entries, 23,
};

/* TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal */
static const MappingEntry scope_226_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int), offsetof(outC_T_Decode_Metadata_L2_TM_lib_internal, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_226 = {
  "TM_lib_internal::T_Decode_Metadata_L2/ T_Decode_Metadata_L2_TM_lib_internal",
  scope_226_entries, 4,
};

/* TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H/ M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_225_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_028_T_TM_radio_messages), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_028_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_TRAIN), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_225 = {
  "TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H/ M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_225_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M028/ C_header_to_M028_TM_RBC_conversions */
static const MappingEntry scope_224_entries[27] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M028_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_256, 1, 4},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_255, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_254, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 2", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M028_TM_RBC_conversions, Context_2), NULL, NULL, NULL, &scope_254, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_028_T_TM_radio_messages), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L26), &_Type_M_028_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L29), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L31), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L32), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L33), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M028_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_028_T_TM_radio_messages), offsetof(outC_C_header_to_M028_TM_RBC_conversions, message_out), &_Type_M_028_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 26}
};
static const MappingScope scope_224 = {
  "TM_RBC_conversions::C_header_to_M028/ C_header_to_M028_TM_RBC_conversions",
  scope_224_entries, 27,
};

/* TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H/ M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_223_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_432, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_VERSION), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_223 = {
  "TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H/ M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_223_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M032/ C_header_to_M032_TM_RBC_conversions */
static const MappingEntry scope_222_entries[27] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_VERSION 1", NULL, sizeof(outC_CAST_Int_to_M_VERSION_TM_conversions), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_269, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M032_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 5},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L26), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_432, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(M_VERSION), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L29), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L31), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L32), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L33), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_RBC_conversions, message_out), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_432, 1, 26}
};
static const MappingScope scope_222 = {
  "TM_RBC_conversions::C_header_to_M032/ C_header_to_M032_TM_RBC_conversions",
  scope_222_entries, 27,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_221_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L2_19_IfBlock1), &_Type_Q_SCALE_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L3_110_IfBlock1), &_Type_kcg_bool_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_221 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_221_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_220_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_220 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_220_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_219_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L1_17_IfBlock1), &_Type_Q_SCALE_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_219 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_219_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_218_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L1_16_IfBlock1), &_Type_Q_SCALE_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_218 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_218_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_217_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_false, &scope_218, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_true, &scope_219, 1, 2}
};
static const MappingScope scope_217 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_217_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_216_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _8_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_false, &scope_217, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_true, &scope_220, 1, 2}
};
static const MappingScope scope_216 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_216_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_215_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_false, &scope_216, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_true, &scope_221, 1, 2}
};
static const MappingScope scope_215 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_215_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_214_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_215, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_214 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_214_entries, 6,
};

/* TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversions */
static const MappingEntry scope_213_entries[29] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_REF 1", NULL, sizeof(outC_CAST_Int_to_D_REF_TM_conversions), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_258, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M033_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 6},
  /* 5 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_214, 1, 2},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_033_T_TM_radio_messages), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L26), &_Type_M_033_T_TM_radio_messages_Utils, NULL, NULL, &scope_433, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L29), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L30", NULL, sizeof(D_REF), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L30), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L32", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L32), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 27},
  /* 20 */ { MAP_LOCAL, "_L33", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L33), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L34", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L34), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 24 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 25 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 26 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 27 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M033_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 28 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_033_T_TM_radio_messages), offsetof(outC_C_header_to_M033_TM_RBC_conversions, message_out), &_Type_M_033_T_TM_radio_messages_Utils, NULL, NULL, &scope_433, 1, 28}
};
static const MappingScope scope_213 = {
  "TM_RBC_conversions::C_header_to_M033/ C_header_to_M033_TM_RBC_conversions",
  scope_213_entries, 29,
};

/* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H/ M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_212_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_033_T_TM_radio_messages), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_033_T_TM_radio_messages_Utils, NULL, NULL, &scope_433, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(Q_SCALE), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(D_REF), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L27), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(M_VERSION), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L28), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_212 = {
  "TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H/ M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_212_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_211_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L4_122_IfBlock1), &_Type_Q_DIR_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L5_123_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_211 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_211_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_210_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L3_115_IfBlock1), &_Type_Q_DIR_Utils, &scope_206_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_206_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_210 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_210_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_209_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L2_119_IfBlock1), &_Type_Q_DIR_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L4_120_IfBlock1), &_Type_kcg_bool_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_209 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_209_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_208_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L1_118_IfBlock1), &_Type_kcg_bool_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L2_117_IfBlock1), &_Type_Q_DIR_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_208 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_208_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_207_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _16_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_207_entries[0], isActive_kcg_bool_kcg_false, &scope_208, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_207_entries[0], isActive_kcg_bool_kcg_true, &scope_209, 1, 2}
};
static const MappingScope scope_207 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_207_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_206_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _21_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_206_entries[0], isActive_kcg_bool_kcg_false, &scope_207, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_206_entries[0], isActive_kcg_bool_kcg_true, &scope_210, 1, 2}
};
static const MappingScope scope_206 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_206_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_205_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _14_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_206, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_211, 1, 2}
};
static const MappingScope scope_205 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_205_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_204_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_205, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _13_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M034_TM_RBC_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_204 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_204_entries, 6,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_203_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L2_111_IfBlock1), &_Type_Q_SCALE_Utils, &scope_197_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L3_112_IfBlock1), &_Type_kcg_bool_Utils, &scope_197_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_203 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_203_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_202_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_198_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_198_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_202 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_202_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_201_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L1_19_IfBlock1), &_Type_Q_SCALE_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_201 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_201_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_200_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L1_18_IfBlock1), &_Type_Q_SCALE_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_200 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_200_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_199_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_false, &scope_200, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_true, &scope_201, 1, 2}
};
static const MappingScope scope_199 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_199_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_198_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _10_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_198_entries[0], isActive_kcg_bool_kcg_false, &scope_199, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_198_entries[0], isActive_kcg_bool_kcg_true, &scope_202, 1, 2}
};
static const MappingScope scope_198 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_198_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_197_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_197_entries[0], isActive_kcg_bool_kcg_false, &scope_198, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_197_entries[0], isActive_kcg_bool_kcg_true, &scope_203, 1, 2}
};
static const MappingScope scope_197 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_197_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_196_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_197, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_196 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_196_entries, 6,
};

/* TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversions */
static const MappingEntry scope_195_entries[35] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_REF 1", NULL, sizeof(outC_CAST_Int_to_D_REF_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_258, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_TAFDISPLAY 1", NULL, sizeof(outC_CAST_Int_to_D_TAFDISPLAY_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_268, 1, 6},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 8},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_TAFDISPLAY 1", NULL, sizeof(outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_267, 1, 5},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _7_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _6_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_255, 1, 7},
  /* 7 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_204, 1, 4},
  /* 8 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_196, 1, 2},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M034_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_254, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_034_T_TM_radio_messages), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L26), &_Type_M_034_T_TM_radio_messages_Utils, NULL, NULL, &scope_434, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 24},
  /* 18 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 25},
  /* 19 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L29), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 26},
  /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(D_REF), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L30), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L31", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L31), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L32", NULL, sizeof(L_TAFDISPLAY), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L32), &_Type_L_TAFDISPLAY_Utils, NULL, NULL, NULL, 1, 29},
  /* 24 */ { MAP_LOCAL, "_L33", NULL, sizeof(D_TAFDISPLAY), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L33), &_Type_D_TAFDISPLAY_Utils, NULL, NULL, NULL, 1, 30},
  /* 25 */ { MAP_LOCAL, "_L35", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L35), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 33},
  /* 26 */ { MAP_LOCAL, "_L36", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L36), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 32},
  /* 27 */ { MAP_LOCAL, "_L37", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L37), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 31},
  /* 28 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 29 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 30 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 31 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M034_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 34 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_034_T_TM_radio_messages), offsetof(outC_C_header_to_M034_TM_RBC_conversions, message_out), &_Type_M_034_T_TM_radio_messages_Utils, NULL, NULL, &scope_434, 1, 34}
};
static const MappingScope scope_195 = {
  "TM_RBC_conversions::C_header_to_M034/ C_header_to_M034_TM_RBC_conversions",
  scope_195_entries, 35,
};

/* TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H/ M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_194_entries[22] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 21},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_034_T_TM_radio_messages), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_034_T_TM_radio_messages_Utils, NULL, NULL, &scope_434, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(Q_SCALE), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(D_REF), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L27), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(L_TAFDISPLAY), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L28), &_Type_L_TAFDISPLAY_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L29", NULL, sizeof(D_TAFDISPLAY), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L29), &_Type_D_TAFDISPLAY_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIR), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L30), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_194 = {
  "TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H/ M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_194_entries, 22,
};

/* TM_RBC_conversions::C_header_to_M038/ C_header_to_M038_TM_RBC_conversions */
static const MappingEntry scope_193_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_255, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M038_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_254, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_038_T_TM_radio_messages), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L26), &_Type_M_038_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L30), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L31), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L32), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M038_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_038_T_TM_radio_messages), offsetof(outC_C_header_to_M038_TM_RBC_conversions, message_out), &_Type_M_038_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_193 = {
  "TM_RBC_conversions::C_header_to_M038/ C_header_to_M038_TM_RBC_conversions",
  scope_193_entries, 25,
};

/* TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H/ M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_192_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_038_T_TM_radio_messages), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_038_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(D_REF), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_DIR), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L33), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_SCALE), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L34), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_192 = {
  "TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H/ M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_192_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M039/ C_header_to_M039_TM_RBC_conversions */
static const MappingEntry scope_191_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M039_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_039_T_TM_radio_messages), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L26), &_Type_M_039_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L30), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L31), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M039_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_039_T_TM_radio_messages), offsetof(outC_C_header_to_M039_TM_RBC_conversions, message_out), &_Type_M_039_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_191 = {
  "TM_RBC_conversions::C_header_to_M039/ C_header_to_M039_TM_RBC_conversions",
  scope_191_entries, 25,
};

/* TM_RBC_conversions_legacy::M039_to_Radio_Track_Train_H/ M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_190_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_039_T_TM_radio_messages), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_039_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(D_REF), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_DIR), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L33), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_SCALE), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L34), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_190 = {
  "TM_RBC_conversions_legacy::M039_to_Radio_Track_Train_H/ M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_190_entries, 20,
};

/* TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H/ M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_189_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_040_T_TM_radio_messages), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_040_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(D_REF), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_DIR), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L33), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_SCALE), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L34), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_189 = {
  "TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H/ M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_189_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M040/ C_header_to_M040_TM_RBC_conversions */
static const MappingEntry scope_188_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M040_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_040_T_TM_radio_messages), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L26), &_Type_M_040_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L30), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L31), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M040_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_040_T_TM_radio_messages), offsetof(outC_C_header_to_M040_TM_RBC_conversions, message_out), &_Type_M_040_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_188 = {
  "TM_RBC_conversions::C_header_to_M040/ C_header_to_M040_TM_RBC_conversions",
  scope_188_entries, 25,
};

/* TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H/ M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_187_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_041_T_TM_radio_messages), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_041_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(D_REF), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_DIR), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L33), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_SCALE), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L34), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_187 = {
  "TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H/ M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_187_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M041/ C_header_to_M041_TM_RBC_conversions */
static const MappingEntry scope_186_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M041_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_041_T_TM_radio_messages), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L26), &_Type_M_041_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L30), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L31), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M041_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_041_T_TM_radio_messages), offsetof(outC_C_header_to_M041_TM_RBC_conversions, message_out), &_Type_M_041_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_186 = {
  "TM_RBC_conversions::C_header_to_M041/ C_header_to_M041_TM_RBC_conversions",
  scope_186_entries, 25,
};

/* TM_RBC_conversions::C_header_to_M043/ C_header_to_M043_TM_RBC_conversions */
static const MappingEntry scope_185_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_255, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M043_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_254, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_043_T_TM_radio_messages), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L26), &_Type_M_043_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L30), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L31), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L32), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M043_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_043_T_TM_radio_messages), offsetof(outC_C_header_to_M043_TM_RBC_conversions, message_out), &_Type_M_043_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_185 = {
  "TM_RBC_conversions::C_header_to_M043/ C_header_to_M043_TM_RBC_conversions",
  scope_185_entries, 25,
};

/* TM_RBC_conversions_legacy::M043_to_Radio_Track_Train_H/ M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_184_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_043_T_TM_radio_messages), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_043_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(D_REF), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_DIR), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L33), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_SCALE), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L34), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_184 = {
  "TM_RBC_conversions_legacy::M043_to_Radio_Track_Train_H/ M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_184_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M045/ C_header_to_M045_TM_RBC_conversions */
static const MappingEntry scope_183_entries[27] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M045_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 5},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_ORIENTATION 1", NULL, sizeof(outC_CAST_Int_to_Q_ORIENTATION_TM_conversions), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_261, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_045_T_TM_radio_messages), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L26), &_Type_M_045_T_TM_radio_messages_Utils, NULL, NULL, &scope_436, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_ORIENTATION), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L29), &_Type_Q_ORIENTATION_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L31), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L32), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L33), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M045_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_045_T_TM_radio_messages), offsetof(outC_C_header_to_M045_TM_RBC_conversions, message_out), &_Type_M_045_T_TM_radio_messages_Utils, NULL, NULL, &scope_436, 1, 26}
};
static const MappingScope scope_183 = {
  "TM_RBC_conversions::C_header_to_M045/ C_header_to_M045_TM_RBC_conversions",
  scope_183_entries, 27,
};

/* TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H/ M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_182_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 20},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_045_T_TM_radio_messages), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_045_T_TM_radio_messages_Utils, NULL, NULL, &scope_436, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(M_VERSION), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(D_REF), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_DIR), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L33), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(Q_SCALE), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L34), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(Q_ORIENTATION), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L35), &_Type_Q_ORIENTATION_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 19 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_182 = {
  "TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H/ M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_182_entries, 21,
};

/* TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H/ M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_181_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_002_T_TM_radio_messages), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_002_T_TM_radio_messages_Utils, NULL, NULL, &scope_437, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(D_SR), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(Q_SCALE), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L27), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_181 = {
  "TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H/ M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_181_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_180_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L2_19_IfBlock1), &_Type_Q_SCALE_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L3_110_IfBlock1), &_Type_kcg_bool_Utils, &scope_174_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_180 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_180_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_179_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_175_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_175_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_179 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_179_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_178_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L1_17_IfBlock1), &_Type_Q_SCALE_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_178 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_178_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_177_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L1_16_IfBlock1), &_Type_Q_SCALE_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_177 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_177_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_176_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_false, &scope_177, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_true, &scope_178, 1, 2}
};
static const MappingScope scope_176 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_176_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_175_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _8_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_175_entries[0], isActive_kcg_bool_kcg_false, &scope_176, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_175_entries[0], isActive_kcg_bool_kcg_true, &scope_179, 1, 2}
};
static const MappingScope scope_175 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_175_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_174_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_174_entries[0], isActive_kcg_bool_kcg_false, &scope_175, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_174_entries[0], isActive_kcg_bool_kcg_true, &scope_180, 1, 2}
};
static const MappingScope scope_174 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_174_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_173_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_174, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_173 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_173_entries, 6,
};

/* TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversions */
static const MappingEntry scope_172_entries[29] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_SR 1", NULL, sizeof(outC_CAST_Int_to_D_SR_TM_conversions), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_260, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 5},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_255, 1, 4},
  /* 5 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_173, 1, 2},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M002_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_254, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_002_T_TM_radio_messages), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L26), &_Type_M_002_T_TM_radio_messages_Utils, NULL, NULL, &scope_437, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L29), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L30", NULL, sizeof(D_SR), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L30), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L33", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L33), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L34", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L34), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 24 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 25 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 26 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 27 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M002_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 28 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_002_T_TM_radio_messages), offsetof(outC_C_header_to_M002_TM_RBC_conversions, message_out), &_Type_M_002_T_TM_radio_messages_Utils, NULL, NULL, &scope_437, 1, 28}
};
static const MappingScope scope_172 = {
  "TM_RBC_conversions::C_header_to_M002/ C_header_to_M002_TM_RBC_conversions",
  scope_172_entries, 29,
};

/* TM_RBC_conversions::C_header_to_M003/ C_header_to_M003_TM_RBC_conversions */
static const MappingEntry scope_171_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M003_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L26), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L30), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L31), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_RBC_conversions, message_out), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_171 = {
  "TM_RBC_conversions::C_header_to_M003/ C_header_to_M003_TM_RBC_conversions",
  scope_171_entries, 25,
};

/* TM_RBC_conversions_legacy::M003_to_Radio_Track_Train_H/ M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_170_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_170 = {
  "TM_RBC_conversions_legacy::M003_to_Radio_Track_Train_H/ M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_170_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M006/ C_header_to_M006_TM_RBC_conversions */
static const MappingEntry scope_169_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M006_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_006_T_TM_radio_messages), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L26), &_Type_M_006_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L30), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L31), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M006_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_006_T_TM_radio_messages), offsetof(outC_C_header_to_M006_TM_RBC_conversions, message_out), &_Type_M_006_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_169 = {
  "TM_RBC_conversions::C_header_to_M006/ C_header_to_M006_TM_RBC_conversions",
  scope_169_entries, 25,
};

/* TM_RBC_conversions_legacy::M006_to_Radio_Track_Train_H/ M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_168_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_006_T_TM_radio_messages), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_006_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_168 = {
  "TM_RBC_conversions_legacy::M006_to_Radio_Track_Train_H/ M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_168_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M008/ C_header_to_M008_TM_RBC_conversions */
static const MappingEntry scope_167_entries[27] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M008_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 5},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_254, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 2", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M008_TM_RBC_conversions, Context_2), NULL, NULL, NULL, &scope_254, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L26), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_438, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L29), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L31), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L32), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L33), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_RBC_conversions, message_out), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_438, 1, 26}
};
static const MappingScope scope_167 = {
  "TM_RBC_conversions::C_header_to_M008/ C_header_to_M008_TM_RBC_conversions",
  scope_167_entries, 27,
};

/* TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H/ M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_166_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_166 = {
  "TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H/ M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_166_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M009/ C_header_to_M009_TM_RBC_conversions */
static const MappingEntry scope_165_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 2},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M009_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 4},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_009_T_TM_radio_messages), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L26), &_Type_M_009_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L30), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L31), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M009_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_009_T_TM_radio_messages), offsetof(outC_C_header_to_M009_TM_RBC_conversions, message_out), &_Type_M_009_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_165 = {
  "TM_RBC_conversions::C_header_to_M009/ C_header_to_M009_TM_RBC_conversions",
  scope_165_entries, 25,
};

/* TM_RBC_conversions_legacy::M009_to_Radio_Track_Train_H/ M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_164_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_009_T_TM_radio_messages), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_009_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(T_TRAIN), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L27), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_164 = {
  "TM_RBC_conversions_legacy::M009_to_Radio_Track_Train_H/ M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_164_entries, 20,
};

/* TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H/ M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_163_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_439, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 16},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_DIR), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(D_REF), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(Q_SCALE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L27), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_EM), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L28), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 14 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L31), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_163 = {
  "TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H/ M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_163_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_162_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L4_122_IfBlock1), &_Type_Q_DIR_Utils, &scope_156_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L5_123_IfBlock1), &_Type_kcg_bool_Utils, &scope_156_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_162 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_162_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_161_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L3_115_IfBlock1), &_Type_Q_DIR_Utils, &scope_157_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_161 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_161_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_160_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L2_119_IfBlock1), &_Type_Q_DIR_Utils, &scope_158_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L4_120_IfBlock1), &_Type_kcg_bool_Utils, &scope_158_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_160 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_160_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_159_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L1_118_IfBlock1), &_Type_kcg_bool_Utils, &scope_158_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L2_117_IfBlock1), &_Type_Q_DIR_Utils, &scope_158_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_159 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_159_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_158_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _16_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_158_entries[0], isActive_kcg_bool_kcg_false, &scope_159, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_158_entries[0], isActive_kcg_bool_kcg_true, &scope_160, 1, 2}
};
static const MappingScope scope_158 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_158_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_157_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _21_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive_kcg_bool_kcg_false, &scope_158, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive_kcg_bool_kcg_true, &scope_161, 1, 2}
};
static const MappingScope scope_157 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_157_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_156_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _14_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_156_entries[0], isActive_kcg_bool_kcg_false, &scope_157, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_156_entries[0], isActive_kcg_bool_kcg_true, &scope_162, 1, 2}
};
static const MappingScope scope_156 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_156_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_155_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_156, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _13_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_RBC_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_155 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_155_entries, 6,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_154_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L2_111_IfBlock1), &_Type_Q_SCALE_Utils, &scope_148_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L3_112_IfBlock1), &_Type_kcg_bool_Utils, &scope_148_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_154 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_154_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_153_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_149_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_149_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_153 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_153_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_152_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L1_19_IfBlock1), &_Type_Q_SCALE_Utils, &scope_150_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_152 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_152_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_151_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L1_18_IfBlock1), &_Type_Q_SCALE_Utils, &scope_150_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_151 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_151_entries, 2,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_150_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_kcg_bool_kcg_false, &scope_151, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_kcg_bool_kcg_true, &scope_152, 1, 2}
};
static const MappingScope scope_150 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_150_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_149_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _10_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_149_entries[0], isActive_kcg_bool_kcg_false, &scope_150, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_149_entries[0], isActive_kcg_bool_kcg_true, &scope_153, 1, 2}
};
static const MappingScope scope_149 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_149_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_148_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_148_entries[0], isActive_kcg_bool_kcg_false, &scope_149, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_148_entries[0], isActive_kcg_bool_kcg_true, &scope_154, 1, 2}
};
static const MappingScope scope_148 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_148_entries, 3,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_147_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_148, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_147 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversionsTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_147_entries, 6,
};

/* TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversions */
static const MappingEntry scope_146_entries[35] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_EMERGENCYSTOP 1", NULL, sizeof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_259, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_REF 1", NULL, sizeof(outC_CAST_Int_to_D_REF_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_258, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 7},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _7_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_EM 1", NULL, sizeof(outC_CAST_Int_to_NID_EM_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_257, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _6_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 9},
  /* 7 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_155, 1, 5},
  /* 8 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_147, 1, 3},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L26), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_439, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 24},
  /* 18 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 25},
  /* 19 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_EM), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L29), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 26},
  /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L30), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L31", NULL, sizeof(D_REF), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L31), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L32), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 29},
  /* 24 */ { MAP_LOCAL, "_L33", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L33), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 30},
  /* 25 */ { MAP_LOCAL, "_L35", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L35), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 33},
  /* 26 */ { MAP_LOCAL, "_L36", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L36), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 32},
  /* 27 */ { MAP_LOCAL, "_L37", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L37), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 31},
  /* 28 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 29 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 30 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 31 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 34 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_RBC_conversions, message_out), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_439, 1, 34}
};
static const MappingScope scope_146 = {
  "TM_RBC_conversions::C_header_to_M015/ C_header_to_M015_TM_RBC_conversions",
  scope_146_entries, 35,
};

/* TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H/ M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_145_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_016_T_TM_radio_messages), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_016_T_TM_radio_messages_Utils, NULL, NULL, &scope_440, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(M_VERSION), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(NID_EM), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_145 = {
  "TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H/ M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_145_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M016/ C_header_to_M016_TM_RBC_conversions */
static const MappingEntry scope_144_entries[27] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_256, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_EM 1", NULL, sizeof(outC_CAST_Int_to_NID_EM_TM_conversions), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_257, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M016_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_255, 1, 5},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_254, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_016_T_TM_radio_messages), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L26), &_Type_M_016_T_TM_radio_messages_Utils, NULL, NULL, &scope_440, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_EM), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L29), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L31), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L32), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L33), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M016_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_016_T_TM_radio_messages), offsetof(outC_C_header_to_M016_TM_RBC_conversions, message_out), &_Type_M_016_T_TM_radio_messages_Utils, NULL, NULL, &scope_440, 1, 26}
};
static const MappingScope scope_144 = {
  "TM_RBC_conversions::C_header_to_M016/ C_header_to_M016_TM_RBC_conversions",
  scope_144_entries, 27,
};

/* TM_RBC_conversions::C_header_to_M018/ C_header_to_M018_TM_RBC_conversions */
static const MappingEntry scope_143_entries[27] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 4},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _5_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_EM 1", NULL, sizeof(outC_CAST_Int_to_NID_EM_TM_conversions), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_257, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_255, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M018_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_254, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_018_T_TM_radio_messages), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L26), &_Type_M_018_T_TM_radio_messages_Utils, NULL, NULL, &scope_440, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_EM), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L29), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L31), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L32), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L33), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M018_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_018_T_TM_radio_messages), offsetof(outC_C_header_to_M018_TM_RBC_conversions, message_out), &_Type_M_018_T_TM_radio_messages_Utils, NULL, NULL, &scope_440, 1, 26}
};
static const MappingScope scope_143 = {
  "TM_RBC_conversions::C_header_to_M018/ C_header_to_M018_TM_RBC_conversions",
  scope_143_entries, 27,
};

/* TM_RBC_conversions_legacy::M018_to_Radio_Track_Train_H/ M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_142_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_018_T_TM_radio_messages), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_018_T_TM_radio_messages_Utils, NULL, NULL, &scope_440, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(M_VERSION), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(NID_EM), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_142 = {
  "TM_RBC_conversions_legacy::M018_to_Radio_Track_Train_H/ M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_142_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M024/ C_header_to_M024_TM_RBC_conversions */
static const MappingEntry scope_141_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_256, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_255, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M024_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_254, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L26), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L30), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L31), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L32), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 24 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_RBC_conversions, message_out), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 24}
};
static const MappingScope scope_141 = {
  "TM_RBC_conversions::C_header_to_M024/ C_header_to_M024_TM_RBC_conversions",
  scope_141_entries, 25,
};

/* TM_RBC_conversions_legacy::M024_to_Radio_Track_Train_H/ M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_140_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_140 = {
  "TM_RBC_conversions_legacy::M024_to_Radio_Track_Train_H/ M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_140_entries, 20,
};

/* TM_RBC_conversions::C_header_to_M027/ C_header_to_M027_TM_RBC_conversions */
static const MappingEntry scope_139_entries[27] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M027_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_256, 1, 4},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _4_Context_1), NULL, NULL, NULL, &scope_247, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _3_Context_1), NULL, NULL, NULL, &scope_253, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _1_Context_1), NULL, NULL, NULL, &scope_255, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _2_Context_1), NULL, NULL, NULL, &scope_254, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 2", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M027_TM_RBC_conversions, Context_2), NULL, NULL, NULL, &scope_254, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_027_T_TM_radio_messages), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L26), &_Type_M_027_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L29), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L31), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L32), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L33), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 23},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M027_TM_RBC_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 26 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_027_T_TM_radio_messages), offsetof(outC_C_header_to_M027_TM_RBC_conversions, message_out), &_Type_M_027_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 26}
};
static const MappingScope scope_139 = {
  "TM_RBC_conversions::C_header_to_M027/ C_header_to_M027_TM_RBC_conversions",
  scope_139_entries, 27,
};

/* TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H/ M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_138_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_027_T_TM_radio_messages), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_027_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_TRAIN), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L26), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_138 = {
  "TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H/ M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_138_entries, 20,
};

/* TM_conversions::CAST_D_EMERGENCYSTOP_to_int/ CAST_D_EMERGENCYSTOP_to_int_TM_conversions */
static const MappingEntry scope_137_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L1), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_emergencystop_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, d_emergencystop_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_137 = {
  "TM_conversions::CAST_D_EMERGENCYSTOP_to_int/ CAST_D_EMERGENCYSTOP_to_int_TM_conversions",
  scope_137_entries, 6,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_136_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_128_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_128_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_136 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:then:",
  scope_136_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_135_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_129_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_129_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_135 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:then:",
  scope_135_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_134_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_130_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_130_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_134 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_134_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_133_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L26_IfBlock1), &_Type_kcg_int_Utils, &scope_131_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_131_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_133 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:then:",
  scope_133_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_132_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_131_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L27_IfBlock1), &_Type_kcg_int_Utils, &scope_131_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_132 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:else:",
  scope_132_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_131_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_131_entries[0], isActive_kcg_bool_kcg_false, &scope_132, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_131_entries[0], isActive_kcg_bool_kcg_true, &scope_133, 1, 2}
};
static const MappingScope scope_131 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_131_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_130_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_130_entries[0], isActive_kcg_bool_kcg_false, &scope_131, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_130_entries[0], isActive_kcg_bool_kcg_true, &scope_134, 1, 2}
};
static const MappingScope scope_130 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:",
  scope_130_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_129_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_129_entries[0], isActive_kcg_bool_kcg_false, &scope_130, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_129_entries[0], isActive_kcg_bool_kcg_true, &scope_135, 1, 2}
};
static const MappingScope scope_129 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:",
  scope_129_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_128_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_128_entries[0], isActive_kcg_bool_kcg_false, &scope_129, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_128_entries[0], isActive_kcg_bool_kcg_true, &scope_136, 1, 2}
};
static const MappingScope scope_128 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:",
  scope_128_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversions */
static const MappingEntry scope_127_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_128, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L4), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(M_VERSION), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, m_version_in), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_version_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, m_version_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_127 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversions",
  scope_127_entries, 6,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_126_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_126 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:then:",
  scope_126_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_125_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L52_IfBlock1), &_Type_kcg_bool_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_125 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:then:",
  scope_125_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_124_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L43_IfBlock1), &_Type_kcg_bool_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_124 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_124_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_123_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L24_IfBlock1), &_Type_kcg_int_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_123 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_123_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_122_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_122_entries[0], isActive_kcg_bool_kcg_false, &scope_123, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_122_entries[0], isActive_kcg_bool_kcg_true, &scope_124, 1, 2}
};
static const MappingScope scope_122 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:",
  scope_122_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_121_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_false, &scope_122, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_true, &scope_125, 1, 2}
};
static const MappingScope scope_121 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:",
  scope_121_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_120_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_false, &scope_121, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_true, &scope_126, 1, 2}
};
static const MappingScope scope_120 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:",
  scope_120_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversions */
static const MappingEntry scope_119_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_120, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L12), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, q_dir_in), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "q_dir_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, q_dir_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_119 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversions",
  scope_119_entries, 6,
};

/* TM_conversions::CAST_D_REF_to_int/ CAST_D_REF_to_int_TM_conversions */
static const MappingEntry scope_118_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_REF), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L1), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ref_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, d_ref_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_118 = {
  "TM_conversions::CAST_D_REF_to_int/ CAST_D_REF_to_int_TM_conversions",
  scope_118_entries, 6,
};

/* TM_conversions::CAST_D_SR_to_int/ CAST_D_SR_to_int_TM_conversions */
static const MappingEntry scope_117_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_SR), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L1), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_sr_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, d_sr_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_117 = {
  "TM_conversions::CAST_D_SR_to_int/ CAST_D_SR_to_int_TM_conversions",
  scope_117_entries, 6,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_116_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_110_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_116 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:then:",
  scope_116_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_115_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_115 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:then:",
  scope_115_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_114_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L13_IfBlock1), &_Type_kcg_int_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_114 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_114_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_113_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_113 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_113_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_112_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_false, &scope_113, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_true, &scope_114, 1, 2}
};
static const MappingScope scope_112 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:",
  scope_112_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_111_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_false, &scope_112, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_true, &scope_115, 1, 2}
};
static const MappingScope scope_111 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:",
  scope_111_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_110_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive_kcg_bool_kcg_false, &scope_111, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive_kcg_bool_kcg_true, &scope_116, 1, 2}
};
static const MappingScope scope_110 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:",
  scope_110_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversions */
static const MappingEntry scope_109_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_110, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L2), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_OUTPUT, "d", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, d), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_109 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversions",
  scope_109_entries, 6,
};

/* TM_conversions::CAST_NID_EM_to_int/ CAST_NID_EM_to_int_TM_conversions */
static const MappingEntry scope_108_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_EM), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L1), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_em_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, nid_em_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_108 = {
  "TM_conversions::CAST_NID_EM_to_int/ CAST_NID_EM_to_int_TM_conversions",
  scope_108_entries, 6,
};

/* TM_conversions::CAST_NID_LRBG_to_int/ CAST_NID_LRBG_to_int_TM_conversions */
static const MappingEntry scope_107_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L1), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_lrbg_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, nid_lrbg_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_107 = {
  "TM_conversions::CAST_NID_LRBG_to_int/ CAST_NID_LRBG_to_int_TM_conversions",
  scope_107_entries, 6,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_106_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L8_IfBlock1), &_Type_kcg_int_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_106 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:then:",
  scope_106_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_105_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L71_IfBlock1), &_Type_kcg_int_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_105 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:then:",
  scope_105_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_104_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_104 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:else:",
  scope_104_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_103_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_false, &scope_104, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_true, &scope_105, 1, 2}
};
static const MappingScope scope_103 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:",
  scope_103_entries, 3,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_102_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_false, &scope_103, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_true, &scope_106, 1, 2}
};
static const MappingScope scope_102 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:",
  scope_102_entries, 3,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversions */
static const MappingEntry scope_101_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_102, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_ACK), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L4), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "m_ack_in", NULL, sizeof(M_ACK), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, m_ack_in), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_ack_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, m_ack_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_101 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversions",
  scope_101_entries, 6,
};

/* TM_conversions::CAST_T_TRAIN_to_int/ CAST_T_TRAIN_to_int_TM_conversions */
static const MappingEntry scope_100_entries[9] = {
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
static const MappingScope scope_100 = {
  "TM_conversions::CAST_T_TRAIN_to_int/ CAST_T_TRAIN_to_int_TM_conversions",
  scope_100_entries, 9,
};

/* TM_conversions::CAST_NID_MESSAGE_to_int/ CAST_NID_MESSAGE_to_int_TM_conversions */
static const MappingEntry scope_99_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_MESSAGE), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L1), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_message_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, nid_message_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_99 = {
  "TM_conversions::CAST_NID_MESSAGE_to_int/ CAST_NID_MESSAGE_to_int_TM_conversions",
  scope_99_entries, 6,
};

/* RadioLib::RBC_init/ RBC_init_RadioLib */
static const MappingEntry scope_98_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_init_RadioLib, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_init_RadioLib, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_init_RadioLib, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_init_RadioLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RBC_init_RadioLib, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_RBC_init_RadioLib, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_98 = {
  "RadioLib::RBC_init/ RBC_init_RadioLib",
  scope_98_entries, 6,
};

/* RadioLib::RBC_close/ RBC_close_RadioLib */
static const MappingEntry scope_97_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Message_out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_close_RadioLib, Message_out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 1 */ { MAP_OUTPUT, "Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_close_RadioLib, Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_close_RadioLib, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_close_RadioLib, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_close_RadioLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RBC_close_RadioLib, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RBC_close_RadioLib, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_97 = {
  "RadioLib::RBC_close/ RBC_close_RadioLib",
  scope_97_entries, 7,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003/ Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_96_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_96_entries[0], isActive_kcg_bool_kcg_true, &scope_246, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6}
};
static const MappingScope scope_96 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003/ Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_96_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003/ Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_95_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_95_entries[0], isActive_kcg_bool_kcg_true, &scope_245, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6}
};
static const MappingScope scope_95 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003/ Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_95_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003/ Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_94_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_94_entries[0], isActive_kcg_bool_kcg_true, &scope_244, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6}
};
static const MappingScope scope_94 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003/ Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_94_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003/ Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_93_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_93_entries[0], isActive_kcg_bool_kcg_true, &scope_243, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6}
};
static const MappingScope scope_93 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003/ Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_93_entries, 9,
};

/* TA_SSP::SSP_Position_SSP_with_BGs/ SSP_Position_SSP_with_BGs_TA_SSP */
static const MappingEntry scope_92_entries[24] = {
  /* 0 */ { MAP_OUTPUT, "ProfileLoopOut", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, ProfileLoopOut), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 23},
  /* 1 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, ProfileOut), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 21},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::SSP_Correct_StartSection 1", NULL, sizeof(outC_SSP_Correct_StartSection_TA_SSP), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _5_Context_1), NULL, NULL, NULL, &scope_242, 1, 5},
  /* 3 */ { MAP_INSTANCE, "TA_SSP::SSP_Correct_StartSection 2", NULL, sizeof(outC_SSP_Correct_StartSection_TA_SSP), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _2_Context_2), NULL, NULL, NULL, &scope_242, 1, 6},
  /* 4 */ { MAP_INSTANCE, "TA_SSP::SSP_Merge_New_P27V1_to_Profile 1", NULL, sizeof(outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, Context_1), NULL, NULL, NULL, &scope_239, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TA_SSP::SSP_Normalize_Profile 1", NULL, sizeof(outC_SSP_Normalize_Profile_TA_SSP), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _3_Context_1), NULL, NULL, NULL, &scope_240, 1, 1},
  /* 6 */ { MAP_INSTANCE, "TA_SSP::SSP_Normalize_Profile 2", NULL, sizeof(outC_SSP_Normalize_Profile_TA_SSP), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, Context_2), NULL, NULL, NULL, &scope_240, 1, 2},
  /* 7 */ { MAP_INSTANCE, "TA_SSP::SSP_Truncate_at_BG 1", NULL, sizeof(outC_SSP_Truncate_at_BG_TA_SSP), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _4_Context_1), NULL, NULL, NULL, &scope_241, 1, 3},
  /* 8 */ { MAP_INSTANCE, "TA_SSP::SSP_Truncate_at_BG 2", NULL, sizeof(outC_SSP_Truncate_at_BG_TA_SSP), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _1_Context_2), NULL, NULL, NULL, &scope_241, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L16), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L18), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L22), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L23", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L23), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L29), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L30), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L33", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L33), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L4", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L4), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 7},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L5), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 8},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L6), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 11},
  /* 21 */ { MAP_LOCAL, "_L8", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L8), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, _L9), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 23 */ { MAP_OUTPUT, "available", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Position_SSP_with_BGs_TA_SSP, available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22}
};
static const MappingScope scope_92 = {
  "TA_SSP::SSP_Position_SSP_with_BGs/ SSP_Position_SSP_with_BGs_TA_SSP",
  scope_92_entries, 24,
};

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile/ SSP_Convert_P27V1_to_DistanceProfile_TA_SSP */
static const MappingEntry scope_91_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "SpeedProfile", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, SpeedProfile), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 9},
  /* 1 */ { MAP_INSTANCE, "TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop 1", &iter_foldi_50, sizeof(outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, Context_1), NULL, NULL, NULL, &scope_238, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L63", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L63), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L65", NULL, sizeof(Q_SCALE), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L65), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L71", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L71), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_502, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L73", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L73), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L74", NULL, sizeof(array__11524), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L74), &_Type_array__11524_Utils, NULL, NULL, &scope_512, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L76", NULL, sizeof(array__11527), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L76), &_Type_array__11527_Utils, NULL, NULL, &scope_513, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L77", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L77), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L83", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP, _L83), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 8}
};
static const MappingScope scope_91 = {
  "TA_SSP::SSP_Convert_P27V1_to_DistanceProfile/ SSP_Convert_P27V1_to_DistanceProfile_TA_SSP",
  scope_91_entries, 10,
};

/* TA_Lib_internal::MoveSSPSectionsAbsolute/ MoveSSPSectionsAbsolute_TA_Lib_internal */
static const MappingEntry scope_90_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "ProfileOut", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, ProfileOut), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSSPSectionsAbsolute_Loop 1", &iter_foldi_50, sizeof(outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, Context_1), NULL, NULL, NULL, &scope_232, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L2), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L37", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L37), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L38", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L38), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L39", NULL, sizeof(array_bool_50), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L39), &_Type_array_bool_50_Utils, NULL, NULL, &scope_510, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L4), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L40", NULL, sizeof(array_int_50), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L40), &_Type_array_int_50_Utils, NULL, NULL, &scope_511, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L41", NULL, sizeof(array_int_50), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L41), &_Type_array_int_50_Utils, NULL, NULL, &scope_511, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_bool_50), offsetof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal, _L6), &_Type_array_bool_50_Utils, NULL, NULL, &scope_510, 1, 3}
};
static const MappingScope scope_90 = {
  "TA_Lib_internal::MoveSSPSectionsAbsolute/ MoveSSPSectionsAbsolute_TA_Lib_internal",
  scope_90_entries, 12,
};

/* TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal */
static const MappingEntry scope_89_entries[17] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 1 */ { MAP_OUTPUT, "Data", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 14},
  /* 2 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 15},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_230, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _1_Context_1), NULL, &scope_89_entries[0], isActive_kcg_bool_kcg_true, &scope_231, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int_500), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_89 = {
  "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
  scope_89_entries, 17,
};

/* TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2 */
static const MappingEntry scope_88_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_section_out", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, P027V1_OBU_section_out), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_501, 1, 14},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 1", NULL, sizeof(outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_227, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_89, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_Metadata_L2 1", NULL, sizeof(outC_T_Decode_Metadata_L2_TM_lib_internal), offsetof(outC_Read_P027V1_sections_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_226, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L171", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L171), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L172", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L172), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L173", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L173), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L174), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L175", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L175), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L176", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L176), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L177", NULL, sizeof(P027V1_section_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L177), &_Type_P027V1_section_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_501, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L179", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L179), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_sections_TM_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_88 = {
  "TM_baseline2::Read_P027V1_sections/ Read_P027V1_sections_TM_baseline2",
  scope_88_entries, 15,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:then: */
static const MappingEntry scope_87_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M028 1", NULL, sizeof(outC_C_header_to_M028_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _36_Context_1), NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_224, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _37_Context_1), NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_225, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_028_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2_IfBlock2), &_Type_M_028_T_TM_radio_messages_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_430, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 4}
};
static const MappingScope scope_87 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:then:",
  scope_87_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:then: */
static const MappingEntry scope_86_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M032 1", NULL, sizeof(outC_C_header_to_M032_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _34_Context_1), NULL, &scope_68_entries[0], isActive_kcg_bool_kcg_true, &scope_222, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H 2", NULL, sizeof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _35_Context_2), NULL, &scope_68_entries[0], isActive_kcg_bool_kcg_true, &scope_223, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L254_IfBlock2), &_Type_M_032_T_TM_radio_messages_Utils, &scope_68_entries[0], isActive_kcg_bool_kcg_true, &scope_432, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L355_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_68_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_68_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_86 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:then:",
  scope_86_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:then: */
static const MappingEntry scope_85_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M033 1", NULL, sizeof(outC_C_header_to_M033_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _32_Context_1), NULL, &scope_69_entries[0], isActive_kcg_bool_kcg_true, &scope_213, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _33_Context_1), NULL, &scope_69_entries[0], isActive_kcg_bool_kcg_true, &scope_212, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L156_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_69_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L257_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_69_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_033_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L358_IfBlock2), &_Type_M_033_T_TM_radio_messages_Utils, &scope_69_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 2}
};
static const MappingScope scope_85 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:then:",
  scope_85_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:then: */
static const MappingEntry scope_84_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M034 1", NULL, sizeof(outC_C_header_to_M034_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _30_Context_1), NULL, &scope_70_entries[0], isActive_kcg_bool_kcg_true, &scope_195, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _31_Context_1), NULL, &scope_70_entries[0], isActive_kcg_bool_kcg_true, &scope_194, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L159_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_70_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L260_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_70_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_034_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L361_IfBlock2), &_Type_M_034_T_TM_radio_messages_Utils, &scope_70_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 2}
};
static const MappingScope scope_84 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:then:",
  scope_84_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:then: */
static const MappingEntry scope_83_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M038 1", NULL, sizeof(outC_C_header_to_M038_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _28_Context_1), NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_193, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _29_Context_1), NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_192, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L162_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L263_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_038_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L364_IfBlock2), &_Type_M_038_T_TM_radio_messages_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 2}
};
static const MappingScope scope_83 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:then:",
  scope_83_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:then: */
static const MappingEntry scope_82_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M039 1", NULL, sizeof(outC_C_header_to_M039_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _26_Context_1), NULL, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_191, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M039_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _27_Context_1), NULL, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_190, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L165_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L266_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_039_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L367_IfBlock2), &_Type_M_039_T_TM_radio_messages_Utils, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 2}
};
static const MappingScope scope_82 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:then:",
  scope_82_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:then: */
static const MappingEntry scope_81_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M040 1", NULL, sizeof(outC_C_header_to_M040_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _24_Context_1), NULL, &scope_73_entries[0], isActive_kcg_bool_kcg_true, &scope_188, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _25_Context_1), NULL, &scope_73_entries[0], isActive_kcg_bool_kcg_true, &scope_189, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_040_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L168_IfBlock2), &_Type_M_040_T_TM_radio_messages_Utils, &scope_73_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L269_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_73_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L370_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_73_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_81 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:then:",
  scope_81_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_80_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M041 1", NULL, sizeof(outC_C_header_to_M041_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _22_Context_1), NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_186, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _23_Context_1), NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_187, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_041_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L171_IfBlock2), &_Type_M_041_T_TM_radio_messages_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L272_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L373_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_80 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:then:",
  scope_80_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_79_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M043 1", NULL, sizeof(outC_C_header_to_M043_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _20_Context_1), NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_185, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M043_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _21_Context_1), NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_184, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L274_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_043_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L375_IfBlock2), &_Type_M_043_T_TM_radio_messages_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L476_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_79 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:then:",
  scope_79_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_78_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M045 1", NULL, sizeof(outC_C_header_to_M045_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _18_Context_1), NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_183, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _19_Context_1), NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_182, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L177_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_045_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L278_IfBlock2), &_Type_M_045_T_TM_radio_messages_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_436, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L379_IfBlock2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_78 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:else:then:",
  scope_78_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_77_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L180_IfBlock2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_431, 1, 0}
};
static const MappingScope scope_77 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:else:else:",
  scope_77_entries, 1,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_76_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_77, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_78, 1, 2}
};
static const MappingScope scope_76 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:else:",
  scope_76_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _38_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_false, &scope_76, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_79, 1, 2}
};
static const MappingScope scope_75 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:else:",
  scope_75_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else: */
static const MappingEntry scope_74_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _39_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_false, &scope_75, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_80, 1, 2}
};
static const MappingScope scope_74 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:else:",
  scope_74_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else: */
static const MappingEntry scope_73_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _40_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_73_entries[0], isActive_kcg_bool_kcg_false, &scope_74, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_73_entries[0], isActive_kcg_bool_kcg_true, &scope_81, 1, 2}
};
static const MappingScope scope_73 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:else:",
  scope_73_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else: */
static const MappingEntry scope_72_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _41_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_72_entries[0], isActive_kcg_bool_kcg_false, &scope_73, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_82, 1, 2}
};
static const MappingScope scope_72 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:else:",
  scope_72_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else: */
static const MappingEntry scope_71_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _42_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_false, &scope_72, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_83, 1, 2}
};
static const MappingScope scope_71 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:else:",
  scope_71_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else: */
static const MappingEntry scope_70_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _43_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_70_entries[0], isActive_kcg_bool_kcg_false, &scope_71, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_70_entries[0], isActive_kcg_bool_kcg_true, &scope_84, 1, 2}
};
static const MappingScope scope_70 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:else:",
  scope_70_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else: */
static const MappingEntry scope_69_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _44_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_69_entries[0], isActive_kcg_bool_kcg_false, &scope_70, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_69_entries[0], isActive_kcg_bool_kcg_true, &scope_85, 1, 2}
};
static const MappingScope scope_69 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:else:",
  scope_69_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else: */
static const MappingEntry scope_68_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _45_else_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive_kcg_bool_kcg_false, &scope_69, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive_kcg_bool_kcg_true, &scope_86, 1, 2}
};
static const MappingScope scope_68 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:else:",
  scope_68_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2: */
static const MappingEntry scope_67_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, IfBlock2_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_false, &scope_68, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_67_entries[0], isActive_kcg_bool_kcg_true, &scope_87, 1, 2}
};
static const MappingScope scope_67 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock2:",
  scope_67_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:then: */
static const MappingEntry scope_66_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M002 1", NULL, sizeof(outC_C_header_to_M002_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _16_Context_1), NULL, &scope_46_entries[0], isActive_kcg_bool_kcg_true, &scope_172, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _17_Context_1), NULL, &scope_46_entries[0], isActive_kcg_bool_kcg_true, &scope_181, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_46_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_002_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2_IfBlock1), &_Type_M_002_T_TM_radio_messages_Utils, &scope_46_entries[0], isActive_kcg_bool_kcg_true, &scope_437, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_46_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 4}
};
static const MappingScope scope_66 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:then:",
  scope_66_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:then: */
static const MappingEntry scope_65_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M003 1", NULL, sizeof(outC_C_header_to_M003_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _15_Context_1), NULL, &scope_47_entries[0], isActive_kcg_bool_kcg_true, &scope_171, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M003_to_Radio_Track_Train_H 4", NULL, sizeof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Context_4), NULL, &scope_47_entries[0], isActive_kcg_bool_kcg_true, &scope_170, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L181_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_47_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L282_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_47_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L383_IfBlock1), &_Type_M_003_T_TM_radio_messages_Utils, &scope_47_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 2}
};
static const MappingScope scope_65 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:then:",
  scope_65_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:then: */
static const MappingEntry scope_64_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M006 1", NULL, sizeof(outC_C_header_to_M006_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _13_Context_1), NULL, &scope_48_entries[0], isActive_kcg_bool_kcg_true, &scope_169, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M006_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _14_Context_1), NULL, &scope_48_entries[0], isActive_kcg_bool_kcg_true, &scope_168, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L184_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_48_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L285_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_48_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_006_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L386_IfBlock1), &_Type_M_006_T_TM_radio_messages_Utils, &scope_48_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 2}
};
static const MappingScope scope_64 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:then:",
  scope_64_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:then: */
static const MappingEntry scope_63_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M008 1", NULL, sizeof(outC_C_header_to_M008_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _11_Context_1), NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_167, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H 2", NULL, sizeof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _12_Context_2), NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_166, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L187_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L288_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L389_IfBlock1), &_Type_M_008_T_TM_radio_messages_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_438, 1, 2}
};
static const MappingScope scope_63 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:then:",
  scope_63_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_62_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M009 1", NULL, sizeof(outC_C_header_to_M009_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _9_Context_1), NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_165, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M009_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _10_Context_1), NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_164, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L190_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L291_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_009_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L392_IfBlock1), &_Type_M_009_T_TM_radio_messages_Utils, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 2}
};
static const MappingScope scope_62 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:then:",
  scope_62_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_61_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M015 1", NULL, sizeof(outC_C_header_to_M015_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _7_Context_1), NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_146, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H 2", NULL, sizeof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _8_Context_2), NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_163, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L193_IfBlock1), &_Type_M_015_T_TM_radio_messages_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_439, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L294_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L395_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_61 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:then:",
  scope_61_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_60_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M016 1", NULL, sizeof(outC_C_header_to_M016_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _5_Context_1), NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_144, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H 2", NULL, sizeof(outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _6_Context_2), NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_145, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_016_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L196_IfBlock1), &_Type_M_016_T_TM_radio_messages_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_440, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L297_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L398_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_60 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:then:",
  scope_60_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_59_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M018 1", NULL, sizeof(outC_C_header_to_M018_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _4_Context_1), NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_143, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M018_to_Radio_Track_Train_H 2", NULL, sizeof(outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Context_2), NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_142, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L299_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_018_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3100_IfBlock1), &_Type_M_018_T_TM_radio_messages_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_440, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L4_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_59 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:then:",
  scope_59_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_58_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M024 1", NULL, sizeof(outC_C_header_to_M024_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _3_Context_1), NULL, &scope_54_entries[0], isActive_kcg_bool_kcg_true, &scope_141, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M024_to_Radio_Track_Train_H 9", NULL, sizeof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Context_9), NULL, &scope_54_entries[0], isActive_kcg_bool_kcg_true, &scope_140, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1101_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_54_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2102_IfBlock1), &_Type_M_024_T_TM_radio_messages_Utils, &scope_54_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3103_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_54_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2}
};
static const MappingScope scope_58 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:then:",
  scope_58_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_57_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::C_header_to_M027 1", NULL, sizeof(outC_C_header_to_M027_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _1_Context_1), NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_139, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _2_Context_1), NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_138, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1104_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L2105_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_027_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L3106_IfBlock1), &_Type_M_027_T_TM_radio_messages_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_430, 1, 2}
};
static const MappingScope scope_57 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:else:then:",
  scope_57_entries, 5,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_56_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1107_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_false, &scope_431, 1, 0}
};
static const MappingScope scope_56 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:else:else:",
  scope_56_entries, 1,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_55_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_false, &scope_56, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_57, 1, 2}
};
static const MappingScope scope_55 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:else:",
  scope_55_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_54_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _46_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_54_entries[0], isActive_kcg_bool_kcg_false, &scope_55, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_54_entries[0], isActive_kcg_bool_kcg_true, &scope_58, 1, 2}
};
static const MappingScope scope_54 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:else:",
  scope_54_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_53_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _47_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_false, &scope_54, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_59, 1, 2}
};
static const MappingScope scope_53 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:else:",
  scope_53_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_52_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _48_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_false, &scope_53, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_60, 1, 2}
};
static const MappingScope scope_52 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:else:",
  scope_52_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_51_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _49_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_false, &scope_52, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_61, 1, 2}
};
static const MappingScope scope_51 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:else:",
  scope_51_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else: */
static const MappingEntry scope_50_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _50_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_false, &scope_51, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_62, 1, 2}
};
static const MappingScope scope_50 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:else:",
  scope_50_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else: */
static const MappingEntry scope_49_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _51_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_false, &scope_50, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_63, 1, 2}
};
static const MappingScope scope_49 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:else:",
  scope_49_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else: */
static const MappingEntry scope_48_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _52_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_48_entries[0], isActive_kcg_bool_kcg_false, &scope_49, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_48_entries[0], isActive_kcg_bool_kcg_true, &scope_64, 1, 2}
};
static const MappingScope scope_48 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:else:",
  scope_48_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else: */
static const MappingEntry scope_47_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _53_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_kcg_bool_kcg_false, &scope_48, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_kcg_bool_kcg_true, &scope_65, 1, 2}
};
static const MappingScope scope_47 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:else:",
  scope_47_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1: */
static const MappingEntry scope_46_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_46_entries[0], isActive_kcg_bool_kcg_false, &scope_47, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_46_entries[0], isActive_kcg_bool_kcg_true, &scope_66, 1, 2}
};
static const MappingScope scope_46 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacyIfBlock1:",
  scope_46_entries, 3,
};

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy */
static const MappingEntry scope_45_entries[16] = {
  /* 0 */ { MAP_OUTPUT, "Header_Out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Header_Out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 15},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 1},
  /* 2 */ { MAP_IF, "IfBlock2:", NULL, 0, 0, NULL, NULL, NULL, &scope_67, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_MESSAGE_to_int 1", NULL, sizeof(outC_CAST_NID_MESSAGE_to_int_TM_conversions), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, Context_1), NULL, NULL, NULL, &scope_99, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L34", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L34), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L35", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L35), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L39", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, _L39), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 14},
  /* 13 */ { MAP_LOCAL, "header_sheet1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, header_sheet1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 4},
  /* 14 */ { MAP_LOCAL, "header_sheet2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, header_sheet2), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 5},
  /* 15 */ { MAP_LOCAL, "nid_message", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_45 = {
  "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy",
  scope_45_entries, 16,
};

/* TM_conversions::C_TrackTrainMessage_to_Int/ C_TrackTrainMessage_to_Int_TM_conversions */
static const MappingEntry scope_44_entries[44] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(Radio_TrackTrain_Header_T_TM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Message_Out), &_Type_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_479, 1, 43},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_D_EMERGENCYSTOP_to_int 1", NULL, sizeof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_1), NULL, NULL, NULL, &scope_137, 1, 12},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_D_REF_to_int 1", NULL, sizeof(outC_CAST_D_REF_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_118, 1, 9},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_D_SR_to_int 1", NULL, sizeof(outC_CAST_D_SR_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_117, 1, 7},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_M_ACK_to_int 1", NULL, sizeof(outC_CAST_M_ACK_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _8_Context_1), NULL, NULL, NULL, &scope_101, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_M_VERSION_to_int 1", NULL, sizeof(outC_CAST_M_VERSION_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_127, 1, 11},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_EM_to_int 1", NULL, sizeof(outC_CAST_NID_EM_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _6_Context_1), NULL, NULL, NULL, &scope_108, 1, 5},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_LRBG_to_int 1", NULL, sizeof(outC_CAST_NID_LRBG_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _7_Context_1), NULL, NULL, NULL, &scope_107, 1, 3},
  /* 8 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_MESSAGE_to_int 1", NULL, sizeof(outC_CAST_NID_MESSAGE_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _10_Context_1), NULL, NULL, NULL, &scope_99, 1, 0},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Q_DIR_to_int 1", NULL, sizeof(outC_CAST_Q_DIR_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_119, 1, 10},
  /* 10 */ { MAP_INSTANCE, "TM_conversions::CAST_Q_SCALE_to_int 1", NULL, sizeof(outC_CAST_Q_SCALE_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _5_Context_1), NULL, NULL, NULL, &scope_109, 1, 6},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 1", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _9_Context_1), NULL, NULL, NULL, &scope_100, 1, 1},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 2", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_2), NULL, NULL, NULL, &scope_100, 1, 4},
  /* 13 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 3", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_3), NULL, NULL, NULL, &scope_100, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L10", NULL, sizeof(Q_SCALE), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L10), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 20},
  /* 16 */ { MAP_LOCAL, "_L11", NULL, sizeof(D_SR), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L11), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L12", NULL, sizeof(T_TRAIN), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L12), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L13", NULL, sizeof(D_REF), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L13), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L14", NULL, sizeof(Q_DIR), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L14), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 16},
  /* 20 */ { MAP_LOCAL, "_L15", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L15), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 21 */ { MAP_LOCAL, "_L16", NULL, sizeof(M_VERSION), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L16), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 22 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 27},
  /* 24 */ { MAP_LOCAL, "_L32", NULL, sizeof(Radio_TrackTrain_Header_T_TM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L32), &_Type_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_479, 1, 29},
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
static const MappingScope scope_44 = {
  "TM_conversions::C_TrackTrainMessage_to_Int/ C_TrackTrainMessage_to_Int_TM_conversions",
  scope_44_entries, 44,
};

/* Internal_Tests::TestTrackTrackAtlas/ TestTrackTrackAtlas_Internal_Tests */
static const MappingEntry scope_43_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003 2", NULL, sizeof(outC_Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, Context_2), NULL, NULL, NULL, &scope_94, 1, 1},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003 3", NULL, sizeof(outC_Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _1_Context_3), NULL, NULL, NULL, &scope_93, 1, 0},
  /* 2 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, Context_1), NULL, NULL, NULL, &scope_95, 1, 2},
  /* 3 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _2_Context_1), NULL, NULL, NULL, &scope_96, 1, 3},
  /* 4 */ { MAP_OUTPUT, "Message_out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, Message_out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 17},
  /* 5 */ { MAP_OUTPUT, "Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 18},
  /* 6 */ { MAP_INSTANCE, "RadioLib::RBC_close 1", NULL, sizeof(outC_RBC_close_RadioLib), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _3_Context_1), NULL, NULL, NULL, &scope_97, 1, 4},
  /* 7 */ { MAP_INSTANCE, "RadioLib::RBC_init 3", NULL, sizeof(outC_RBC_init_RadioLib), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, Context_3), NULL, NULL, NULL, &scope_98, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L18), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L2), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 7},
  /* 13 */ { MAP_LOCAL, "_L20", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L20), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L3), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 8},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_441, 1, 9},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L5), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestTrackTrackAtlas_Internal_Tests, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 11}
};
static const MappingScope scope_43 = {
  "Internal_Tests::TestTrackTrackAtlas/ TestTrackTrackAtlas_Internal_Tests",
  scope_43_entries, 19,
};

/* TA_SSP::SSP_Postprocessing/ SSP_Postprocessing_TA_SSP */
static const MappingEntry scope_42_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Postprocessing_TA_SSP, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_OUTPUT, "SSP", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Postprocessing_TA_SSP, SSP), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 12},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::SSP_Position_SSP_with_BGs 1", NULL, sizeof(outC_SSP_Position_SSP_with_BGs_TA_SSP), offsetof(outC_SSP_Postprocessing_TA_SSP, Context_1), NULL, NULL, NULL, &scope_92, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Postprocessing_TA_SSP, _L1), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Postprocessing_TA_SSP, _L10), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Postprocessing_TA_SSP, _L2), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Postprocessing_TA_SSP, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L4@mem", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Postprocessing_TA_SSP, _L4), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 0, 0},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Postprocessing_TA_SSP, _L6), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Postprocessing_TA_SSP, _L7), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Postprocessing_TA_SSP, _L8), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Postprocessing_TA_SSP, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_OUTPUT, "available", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Postprocessing_TA_SSP, available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11}
};
static const MappingScope scope_42 = {
  "TA_SSP::SSP_Postprocessing/ SSP_Postprocessing_TA_SSP",
  scope_42_entries, 13,
};

/* TA_SSP::SSP_Preprocessing/ SSP_Preprocessing_TA_SSP */
static const MappingEntry scope_41_entries[11] = {
  /* 0 */ { MAP_OUTPUT, "SSP", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Preprocessing_TA_SSP, SSP), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 10},
  /* 1 */ { MAP_INSTANCE, "TA_Lib_internal::MoveSSPSectionsAbsolute 1", NULL, sizeof(outC_MoveSSPSectionsAbsolute_TA_Lib_internal), offsetof(outC_SSP_Preprocessing_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_90, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TA_SSP::SSP_Convert_P27V1_to_DistanceProfile 1", NULL, sizeof(outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP), offsetof(outC_SSP_Preprocessing_TA_SSP, Context_1), NULL, NULL, NULL, &scope_91, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_SSP_Preprocessing_TA_SSP, _L1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Preprocessing_TA_SSP, _L11), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Preprocessing_TA_SSP, _L13), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_SSP_Preprocessing_TA_SSP, _L14), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Preprocessing_TA_SSP, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_SSP_Preprocessing_TA_SSP, _L16), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Preprocessing_TA_SSP, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_SSP_Preprocessing_TA_SSP, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_41 = {
  "TA_SSP::SSP_Preprocessing/ SSP_Preprocessing_TA_SSP",
  scope_41_entries, 11,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:then: */
static const MappingEntry scope_40_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L1_IfBlock1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, &scope_496, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(NID_BG), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L2_IfBlock1), &_Type_NID_BG_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_40 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:then:",
  scope_40_entries, 2,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:then: */
static const MappingEntry scope_39_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L11_IfBlock1), &_Type_NID_LRBG_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L22_IfBlock1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_true, &scope_496, 1, 0}
};
static const MappingScope scope_39 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:then:",
  scope_39_entries, 2,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:else: */
static const MappingEntry scope_38_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L13_IfBlock1), &_Type_kcg_int_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_38 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:else:",
  scope_38_entries, 1,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else: */
static const MappingEntry scope_37_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_LRBG_TA_Lib_internal, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_false, &scope_38, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_true, &scope_39, 1, 2}
};
static const MappingScope scope_37 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:else:",
  scope_37_entries, 3,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1: */
static const MappingEntry scope_36_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Eval_LRBG_TA_Lib_internal, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_false, &scope_37, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_true, &scope_40, 1, 2}
};
static const MappingScope scope_36 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internalIfBlock1:",
  scope_36_entries, 3,
};

/* TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internal */
static const MappingEntry scope_35_entries[5] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 0},
  /* 1 */ { MAP_OUTPUT, "LRBG", NULL, sizeof(kcg_int), offsetof(outC_Eval_LRBG_TA_Lib_internal, LRBG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_496, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, _L14), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Eval_LRBG_TA_Lib_internal, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_35 = {
  "TA_Lib_internal::Eval_LRBG/ Eval_LRBG_TA_Lib_internal",
  scope_35_entries, 5,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/ */
static const MappingEntry scope_34_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1), &_Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_502, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L68", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L68_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_498, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L69_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L70", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L70_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L71", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L71_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L75_1), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 6}
};
static const MappingScope scope_34 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_lib_internal::C_P027V1_merge_body_sections 1/",
  scope_34_entries, 7,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _18__L4_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_27_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _19__L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_27_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_33 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_33_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_32_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _11__L3_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_28_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_28_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_32 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_32_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_31_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _15__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _16__L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_31 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_31_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_30_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _14__L1_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _13__L2_1_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_30 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_30_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_29_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _12_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_false, &scope_30, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_true, &scope_31, 1, 2}
};
static const MappingScope scope_29 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_29_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_28_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _17_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive_kcg_bool_kcg_false, &scope_29, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive_kcg_bool_kcg_true, &scope_32, 1, 2}
};
static const MappingScope scope_28 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_28_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_27_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _10_IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_27_entries[0], isActive_kcg_bool_kcg_false, &scope_28, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_27_entries[0], isActive_kcg_bool_kcg_true, &scope_33, 1, 2}
};
static const MappingScope scope_27 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_27_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_26_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L12_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L13_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _9_error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_1_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_dir_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_26 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_26_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_25_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _7__L2_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _8__L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_25 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_25_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_24 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_24_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_23_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _5__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_23 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_23_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _4__L1_1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_22_entries, 2,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_21_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 2}
};
static const MappingScope scope_21 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_21_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_20_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _6_else_clock_1_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_false, &scope_21, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 2}
};
static const MappingScope scope_20 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_20_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, IfBlock1_clock_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_false, &scope_20, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 2}
};
static const MappingScope scope_19 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_19_entries, 3,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_18_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _3__L2_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _2__L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, error_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_1_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, q_scale_in_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_18 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_18_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/ */
static const MappingEntry scope_17_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L1_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L2_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L3_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L4_1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L5_1_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, nid_packet_1_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_17 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/TM_conversions::CAST_Int_to_NID_PACKET 1/",
  scope_17_entries, 6,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/ */
static const MappingEntry scope_16_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_OBU_body", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_OBU_body_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_498, 1, 2},
  /* 1 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 3},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 5},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L10_1), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_498, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L14_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L15_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L16_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L18_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L20_1), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L21_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L22_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L24_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L25_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_PACKET), offsetof(outC_Read_P027V1_TM_baseline2, _L28_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(Q_SCALE), offsetof(outC_Read_P027V1_TM_baseline2, _L29_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIR), offsetof(outC_Read_P027V1_TM_baseline2, _L30_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_int_5), offsetof(outC_Read_P027V1_TM_baseline2, _L6_1), &_Type_array_int_5_Utils, NULL, NULL, &scope_497, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L9_1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 10},
  /* 19 */ { MAP_OUTPUT, "meta_qdiff", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, meta_qdiff_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 20 */ { MAP_OUTPUT, "n_iter_sections", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, n_iter_sections_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2TM_conversions_baseline2::C_P027V1_compr_onboard_body 1/",
  scope_16_entries, 21,
};

/* TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2 */
static const MappingEntry scope_15_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "P027V1_out", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, P027V1_out), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 19},
  /* 1 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1_sections 1", &iter_mapwi_33, sizeof(outC_Read_P027V1_sections_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_88, 1, 0},
  /* 2 */ { MAP_EXPANDED, "TM_conversions_baseline2::C_P027V1_compr_onboard_body 1", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 2},
  /* 3 */ { MAP_EXPANDED, "TM_lib_internal::C_P027V1_merge_body_sections 1", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P027V1_TM_baseline2, Context_1), NULL, NULL, NULL, &scope_89, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L166", NULL, sizeof(P027V1_OBU_body_enum_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L166), &_Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils, NULL, NULL, &scope_498, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L167), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L168", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L168), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L169", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L169), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L170", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L170), &_Type_array_int_33_Utils, NULL, NULL, &scope_508, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L171", NULL, sizeof(array_int_33), offsetof(outC_Read_P027V1_TM_baseline2, _L171), &_Type_array_int_33_Utils, NULL, NULL, &scope_508, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L172", NULL, sizeof(array__11515), offsetof(outC_Read_P027V1_TM_baseline2, _L172), &_Type_array__11515_Utils, NULL, NULL, &scope_509, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L178", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Read_P027V1_TM_baseline2, _L178), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L182", NULL, sizeof(array__11490), offsetof(outC_Read_P027V1_TM_baseline2, _L182), &_Type_array__11490_Utils, NULL, NULL, &scope_502, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L184", NULL, sizeof(kcg_int), offsetof(outC_Read_P027V1_TM_baseline2, _L184), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L185", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L185), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L186", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, _L186), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P027V1_TM_baseline2, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5},
  /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int_500), offsetof(outC_Read_P027V1_TM_baseline2, _L5), &_Type_array_int_500_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 19 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P027V1_TM_baseline2, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_15 = {
  "TM_baseline2::Read_P027V1/ Read_P027V1_TM_baseline2",
  scope_15_entries, 20,
};

/* SimTrainPos/ SimTrainPosIfBlock1:then: */
static const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SimTrainPos, _L1_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_491, 1, 0}
};
static const MappingScope scope_14 = {
  "SimTrainPos/ SimTrainPosIfBlock1:then:",
  scope_14_entries, 1,
};

/* SimTrainPos/ SimTrainPosIfBlock1:else:then: */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SimTrainPos, _L13_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_491, 1, 0}
};
static const MappingScope scope_13 = {
  "SimTrainPos/ SimTrainPosIfBlock1:else:then:",
  scope_13_entries, 1,
};

/* SimTrainPos/ SimTrainPosIfBlock1:else:else:then: */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SimTrainPos, _L14_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_491, 1, 0}
};
static const MappingScope scope_12 = {
  "SimTrainPos/ SimTrainPosIfBlock1:else:else:then:",
  scope_12_entries, 1,
};

/* SimTrainPos/ SimTrainPosIfBlock1:else:else:else:then: */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SimTrainPos, _L15_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_true, &scope_491, 1, 0}
};
static const MappingScope scope_11 = {
  "SimTrainPos/ SimTrainPosIfBlock1:else:else:else:then:",
  scope_11_entries, 1,
};

/* SimTrainPos/ SimTrainPosIfBlock1:else:else:else:else: */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SimTrainPos, _L16_IfBlock1), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_false, &scope_491, 1, 0}
};
static const MappingScope scope_10 = {
  "SimTrainPos/ SimTrainPosIfBlock1:else:else:else:else:",
  scope_10_entries, 1,
};

/* SimTrainPos/ SimTrainPosIfBlock1:else:else:else: */
static const MappingEntry scope_9_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SimTrainPos, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_false, &scope_10, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_true, &scope_11, 1, 2}
};
static const MappingScope scope_9 = {
  "SimTrainPos/ SimTrainPosIfBlock1:else:else:else:",
  scope_9_entries, 3,
};

/* SimTrainPos/ SimTrainPosIfBlock1:else:else: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SimTrainPos, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_8 = {
  "SimTrainPos/ SimTrainPosIfBlock1:else:else:",
  scope_8_entries, 3,
};

/* SimTrainPos/ SimTrainPosIfBlock1:else: */
static const MappingEntry scope_7_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SimTrainPos, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_false, &scope_8, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_kcg_bool_kcg_true, &scope_13, 1, 2}
};
static const MappingScope scope_7 = {
  "SimTrainPos/ SimTrainPosIfBlock1:else:",
  scope_7_entries, 3,
};

/* SimTrainPos/ SimTrainPosIfBlock1: */
static const MappingEntry scope_6_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_SimTrainPos, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_14, 1, 2}
};
static const MappingScope scope_6 = {
  "SimTrainPos/ SimTrainPosIfBlock1:",
  scope_6_entries, 3,
};

/* SimTrainPos/ SimTrainPos */
static const MappingEntry scope_5_entries[4] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 0},
  /* 1 */ { MAP_OUTPUT, "TrainPos", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_SimTrainPos, TrainPos), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_491, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SimTrainPos, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "t", NULL, sizeof(kcg_int), offsetof(outC_SimTrainPos, t), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_5 = {
  "SimTrainPos/ SimTrainPos",
  scope_5_entries, 4,
};

/* ConvertReceivedMess/ ConvertReceivedMess */
static const MappingEntry scope_4_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Received_Message", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_ConvertReceivedMess, Received_Message), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_496, 1, 9},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_ConvertReceivedMess, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_496, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_ConvertReceivedMess, _L2), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_480, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_ConvertReceivedMess, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_ConvertReceivedMess, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(BG_Header_T_BG_Types_Pkg), offsetof(outC_ConvertReceivedMess, _L38), &_Type_BG_Header_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_488, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_ConvertReceivedMess, _L39), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_495, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_ConvertReceivedMess, _L4), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L40", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_ConvertReceivedMess, _L40), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L41", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_ConvertReceivedMess, _L41), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_494, 1, 8}
};
static const MappingScope scope_4 = {
  "ConvertReceivedMess/ ConvertReceivedMess",
  scope_4_entries, 10,
};

/* Internal_Tests::TestTrackTrackAtlasLegacy/ TestTrackTrackAtlasLegacy_Internal_Tests */
static const MappingEntry scope_3_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Compressed_Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, Compressed_Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 13},
  /* 1 */ { MAP_OUTPUT, "Compressed_Radio_Message_out", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, Compressed_Radio_Message_out), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_480, 1, 12},
  /* 2 */ { MAP_INSTANCE, "Internal_Tests::TestTrackTrackAtlas 1", NULL, sizeof(outC_TestTrackTrackAtlas_Internal_Tests), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, Context_1), NULL, NULL, NULL, &scope_43, 1, 0},
  /* 3 */ { MAP_OUTPUT, "RadioTrackTrainHeader_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, RadioTrackTrainHeader_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 14},
  /* 4 */ { MAP_INSTANCE, "TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H 1", NULL, sizeof(outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _1_Context_1), NULL, NULL, NULL, &scope_45, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::C_TrackTrainMessage_to_Int 1", NULL, sizeof(outC_C_TrackTrainMessage_to_Int_TM_conversions), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _2_Context_1), NULL, NULL, NULL, &scope_44, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(Radio_TrackTrain_Header_T_TM), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L3), &_Type_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_479, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L4), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L5), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_480, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L8), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_425, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_TestTrackTrackAtlasLegacy_Internal_Tests, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11}
};
static const MappingScope scope_3 = {
  "Internal_Tests::TestTrackTrackAtlasLegacy/ TestTrackTrackAtlasLegacy_Internal_Tests",
  scope_3_entries, 15,
};

/* TA_SSP::Build_StaticSpeedProfile/ Build_StaticSpeedProfile_TA_SSP */
static const MappingEntry scope_2_entries[32] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 4},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, tmp4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 27},
  /* 2 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 28},
  /* 3 */ { MAP_OUTPUT, "SSP", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, SSP), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 29},
  /* 4 */ { MAP_INSTANCE, "TA_Lib_internal::Eval_LRBG 1", NULL, sizeof(outC_Eval_LRBG_TA_Lib_internal), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _1_Context_1), NULL, NULL, NULL, &scope_35, 1, 6},
  /* 5 */ { MAP_INSTANCE, "TA_SSP::SSP_Postprocessing 1", NULL, sizeof(outC_SSP_Postprocessing_TA_SSP), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _3_Context_1), NULL, &scope_2_entries[2], isActive_kcg_bool_kcg_true, &scope_42, 1, 8},
  /* 6 */ { MAP_INSTANCE, "TA_SSP::SSP_Preprocessing 1", NULL, sizeof(outC_SSP_Preprocessing_TA_SSP), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _2_Context_1), NULL, &scope_2_entries[1], isActive_kcg_bool_kcg_true, &scope_41, 1, 7},
  /* 7 */ { MAP_INSTANCE, "TM_baseline2::Read_P027V1 1", NULL, sizeof(outC_Read_P027V1_TM_baseline2), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, Context_1), NULL, NULL, NULL, &scope_15, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L1), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_496, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L107", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L107), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_496, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_int), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L108), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L109), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L111@mem", NULL, sizeof(NID_BG), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L111), &_Type_NID_BG_Utils, NULL, NULL, NULL, 0, 0},
  /* 13 */ { MAP_LOCAL, "_L112", NULL, sizeof(NID_BG), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L112), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L113), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L193", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L193), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L194", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L194), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L202", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L202), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L209", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L209), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 19 */ { MAP_LOCAL, "_L237@mem", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L237), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 0, 1},
  /* 20 */ { MAP_LOCAL, "_L238", NULL, sizeof(NID_BG), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L238), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 23},
  /* 21 */ { MAP_LOCAL, "_L239", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L239), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 22 */ { MAP_LOCAL, "_L240", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L240), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 23 */ { MAP_LOCAL, "_L241@mem", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L241), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 24 */ { MAP_LOCAL, "_L242@mem", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L242), &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 0, 3},
  /* 25 */ { MAP_LOCAL, "_L243", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L243), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 26},
  /* 26 */ { MAP_LOCAL, "_L42", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L42), &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_491, 1, 10},
  /* 27 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 28 */ { MAP_LOCAL, "_L60", NULL, sizeof(P027V1_OBU_T_TM_baseline2), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L60), &_Type_P027V1_OBU_T_TM_baseline2_Utils, NULL, NULL, &scope_503, 1, 11},
  /* 29 */ { MAP_LOCAL, "_L73", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, _L73), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 13},
  /* 30 */ { MAP_OUTPUT, "available", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, available), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 31 */ { MAP_OUTPUT, "updated", NULL, sizeof(kcg_bool), offsetof(outC_Build_StaticSpeedProfile_TA_SSP, updated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30}
};
static const MappingScope scope_2 = {
  "TA_SSP::Build_StaticSpeedProfile/ Build_StaticSpeedProfile_TA_SSP",
  scope_2_entries, 32,
};

/* TestSpeedProfile/ TestSpeedProfile */
static const MappingEntry scope_1_entries[20] = {
  /* 0 */ { MAP_INSTANCE, "ConvertReceivedMess 1", NULL, sizeof(outC_ConvertReceivedMess), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_4, 1, 2},
  /* 1 */ { MAP_INSTANCE, "Internal_Tests::TestTrackTrackAtlasLegacy 1", NULL, sizeof(outC_TestTrackTrackAtlasLegacy_Internal_Tests), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 2 */ { MAP_OUTPUT, "SSP_out", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx.SSP_out, &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 17},
  /* 3 */ { MAP_INSTANCE, "SimTrainPos 1", NULL, sizeof(outC_SimTrainPos), (size_t)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_5, 1, 3},
  /* 4 */ { MAP_INSTANCE, "TA_SSP::Build_StaticSpeedProfile 1", NULL, sizeof(outC_Build_StaticSpeedProfile_TA_SSP), (size_t)&outputs_ctx._3_Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_INPUT, "Trigger_in", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.Trigger_in, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(StaticSpeedProfile_t_TrackAtlasTypes), (size_t)&outputs_ctx._L11, &_Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils, NULL, NULL, &scope_493, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L13, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_480, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L14, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), (size_t)&outputs_ctx._L15, &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), (size_t)&outputs_ctx._L16, &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_496, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L18, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(trainPosition_T_TrainPosition_Types_Pck), (size_t)&outputs_ctx._L28, &_Type_trainPosition_T_TrainPosition_Types_Pck_Utils, NULL, NULL, &scope_491, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L31, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L32, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_OUTPUT, "available", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.available, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_INPUT, "reset", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.reset, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_OUTPUT, "updated", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.updated, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_1 = {
  "TestSpeedProfile/ TestSpeedProfile",
  scope_1_entries, 20,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TestSpeedProfile", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

