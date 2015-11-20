/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kr_intLookUp */
kcg_int Kr_intLookUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kr_intLookUp::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::Kr_intLookUp::trainData */ trainData_T_TIU_Types_Pkg *trainData)
{
  static kcg_int i1;
  /* SDMConversionModelPkg::Kr_intLookUp */
  static kcg_int acc;
  /* SDMConversionModelPkg::Kr_intLookUp */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* SDMConversionModelPkg::Kr_intLookUp::_L2 */
  static P3_NationalValues_T_Packet_Types_Pkg _L2;
  /* SDMConversionModelPkg::Kr_intLookUp::_L1 */
  static nvkrintArray_T_Packet_Types_Pkg _L1;
  /* SDMConversionModelPkg::Kr_intLookUp::_L5 */
  static trainData_T_TIU_Types_Pkg _L5;
  /* SDMConversionModelPkg::Kr_intLookUp::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* SDMConversionModelPkg::Kr_intLookUp::_L6 */
  static kcg_int _L6;
  /* SDMConversionModelPkg::Kr_intLookUp::_L8 */
  static kcg_int _L8;
  /* SDMConversionModelPkg::Kr_intLookUp::_L9 */
  static kcg_int _L9;
  /* SDMConversionModelPkg::Kr_intLookUp::_L10 */
  static kcg_bool _L10;
  /* SDMConversionModelPkg::Kr_intLookUp::_L11 */
  static array_int_7 _L11;
  /* SDMConversionModelPkg::Kr_intLookUp::m_KrInt */
  static kcg_int m_KrInt;
  
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L2, NationalValues);
  kcg_copy_nvkrintArray_T_Packet_Types_Pkg(&_L1, &_L2.nvkrintArray);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L5, trainData);
  _L4 = _L5.trainLength;
  _L9 = 100;
  /* pow */ for (i1 = 0; i1 < 7; i1++) {
    _L11[i1] = _L4;
  }
  _L10 = kcg_true;
  _L6 = _L9;
  /* 1 */ if (_L10) {
    /* 1 */ for (i = 0; i < 7; i++) {
      acc = _L6;
      /* 1 */
      Kr_intIterator_SDMConversionModelPkg(
        acc,
        &_L1[i],
        _L11[i],
        &cond_iterw,
        &_L6);
      _L8 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L8 = 0;
  }
  noname = _L8;
  m_KrInt = _L6;
  return m_KrInt;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kr_intLookUp_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

