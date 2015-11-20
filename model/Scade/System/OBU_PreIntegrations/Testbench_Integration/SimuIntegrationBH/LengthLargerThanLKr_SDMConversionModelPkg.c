/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LengthLargerThanLKr_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::LengthLargerThanLKr */
kcg_bool LengthLargerThanLKr_SDMConversionModelPkg(
  /* SDMConversionModelPkg::LengthLargerThanLKr::L */ L_internal_Type_Obu_BasicTypes_Pkg L,
  /* SDMConversionModelPkg::LengthLargerThanLKr::LnvKrInt */ L_NVKRINT LnvKrInt)
{
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L2 */
  static L_NVKRINT _L2;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L3 */
  static kcg_int _L3;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L4 */
  static kcg_bool _L4;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L7 */
  static array_int_32 _L7;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L81 */
  static kcg_int _L81;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L80 */
  static kcg_int _L80;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L79 */
  static kcg_int _L79;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L78 */
  static kcg_int _L78;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L77 */
  static kcg_int _L77;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L76 */
  static kcg_int _L76;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L75 */
  static kcg_int _L75;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L74 */
  static kcg_int _L74;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L73 */
  static kcg_int _L73;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L72 */
  static kcg_int _L72;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L71 */
  static kcg_int _L71;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L70 */
  static kcg_int _L70;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L69 */
  static kcg_int _L69;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L68 */
  static kcg_int _L68;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L67 */
  static kcg_int _L67;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L66 */
  static kcg_int _L66;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L65 */
  static kcg_int _L65;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L64 */
  static kcg_int _L64;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L63 */
  static kcg_int _L63;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L62 */
  static kcg_int _L62;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L61 */
  static kcg_int _L61;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L60 */
  static kcg_int _L60;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L59 */
  static kcg_int _L59;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L58 */
  static kcg_int _L58;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L57 */
  static kcg_int _L57;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L56 */
  static kcg_int _L56;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L55 */
  static kcg_int _L55;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L54 */
  static kcg_int _L54;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L53 */
  static kcg_int _L53;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L52 */
  static kcg_int _L52;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L51 */
  static kcg_int _L51;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L50 */
  static kcg_int _L50;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L82 */
  static kcg_int _L82;
  /* SDMConversionModelPkg::LengthLargerThanLKr::_L83 */
  static kcg_int _L83;
  /* SDMConversionModelPkg::LengthLargerThanLKr::isLarger */
  static kcg_bool isLarger;
  
  _L1 = L;
  _L2 = LnvKrInt;
  _L83 = 100;
  kcg_copy_array_int_32(
    &_L7,
    (array_int_32 *) &cLKrIntLookUp_SDMConversionModelPkg);
  _L50 = _L7[0];
  _L51 = _L7[1];
  _L52 = _L7[2];
  _L53 = _L7[3];
  _L54 = _L7[4];
  _L55 = _L7[5];
  _L56 = _L7[6];
  _L57 = _L7[7];
  _L58 = _L7[8];
  _L59 = _L7[9];
  _L60 = _L7[10];
  _L61 = _L7[11];
  _L62 = _L7[12];
  _L63 = _L7[13];
  _L64 = _L7[14];
  _L65 = _L7[15];
  _L66 = _L7[16];
  _L67 = _L7[17];
  _L68 = _L7[18];
  _L69 = _L7[19];
  _L70 = _L7[20];
  _L71 = _L7[21];
  _L72 = _L7[22];
  _L73 = _L7[23];
  _L74 = _L7[24];
  _L75 = _L7[25];
  _L76 = _L7[26];
  _L77 = _L7[27];
  _L78 = _L7[28];
  _L79 = _L7[29];
  _L80 = _L7[30];
  _L81 = _L7[31];
  switch (_L2) {
    case L_NVKRINT_0m :
      _L3 = _L50;
      break;
    case L_NVKRINT_25m :
      _L3 = _L51;
      break;
    case L_NVKRINT_50m :
      _L3 = _L52;
      break;
    case L_NVKRINT_75m :
      _L3 = _L53;
      break;
    case L_NVKRINT_100m :
      _L3 = _L54;
      break;
    case L_NVKRINT_150m :
      _L3 = _L55;
      break;
    case L_NVKRINT_200m :
      _L3 = _L56;
      break;
    case L_NVKRINT_300m :
      _L3 = _L57;
      break;
    case L_NVKRINT_400m :
      _L3 = _L58;
      break;
    case L_NVKRINT_500m :
      _L3 = _L59;
      break;
    case L_NVKRINT_600m :
      _L3 = _L60;
      break;
    case L_NVKRINT_700m :
      _L3 = _L61;
      break;
    case L_NVKRINT_800m :
      _L3 = _L62;
      break;
    case L_NVKRINT_900m :
      _L3 = _L63;
      break;
    case L_NVKRINT_1000m :
      _L3 = _L64;
      break;
    case L_NVKRINT_1100m :
      _L3 = _L65;
      break;
    case L_NVKRINT_1200m :
      _L3 = _L66;
      break;
    case L_NVKRINT_1300m :
      _L3 = _L67;
      break;
    case L_NVKRINT_1400m :
      _L3 = _L68;
      break;
    case L_NVKRINT_1500m :
      _L3 = _L69;
      break;
    case L_NVKRINT_1600m :
      _L3 = _L70;
      break;
    case L_NVKRINT_1700m :
      _L3 = _L71;
      break;
    case L_NVKRINT_1800m :
      _L3 = _L72;
      break;
    case L_NVKRINT_1900m :
      _L3 = _L73;
      break;
    case L_NVKRINT_2000m :
      _L3 = _L74;
      break;
    case L_NVKRINT_2100m :
      _L3 = _L75;
      break;
    case L_NVKRINT_2200m :
      _L3 = _L76;
      break;
    case L_NVKRINT_2300m :
      _L3 = _L77;
      break;
    case L_NVKRINT_2400m :
      _L3 = _L78;
      break;
    case L_NVKRINT_2500m :
      _L3 = _L79;
      break;
    case L_NVKRINT_2600m :
      _L3 = _L80;
      break;
    case L_NVKRINT_2700m :
      _L3 = _L81;
      break;
    
  }
  _L82 = _L83 * _L3;
  _L4 = _L1 >= _L82;
  isLarger = _L4;
  return isLarger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LengthLargerThanLKr_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

