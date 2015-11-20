/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_TA_MA.h"

/* TA_MA::Get_EOA */
L_internal_Type_Obu_BasicTypes_Pkg Get_EOA_TA_MA(
  /* TA_MA::Get_EOA::MA_absolute */ MovementAuthority_t_TrackAtlasTypes *MA_absolute)
{
  static kcg_int i1;
  /* TA_MA::Get_EOA */
  static L_internal_Type_Obu_BasicTypes_Pkg acc;
  /* TA_MA::Get_EOA */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TA_MA::Get_EOA::_L2 */
  static kcg_int _L2;
  /* TA_MA::Get_EOA::_L3 */
  static kcg_bool _L3;
  /* TA_MA::Get_EOA::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* TA_MA::Get_EOA::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* TA_MA::Get_EOA::_L6 */
  static MovementAuthority_t_TrackAtlasTypes _L6;
  /* TA_MA::Get_EOA::_L37 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L37;
  /* TA_MA::Get_EOA::_L38 */
  static array_168400 _L38;
  /* TA_MA::Get_EOA::currentEOA */
  static L_internal_Type_Obu_BasicTypes_Pkg currentEOA;
  
  _L5 = DEFAULT_loc_TA_MA;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L6, MA_absolute);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L37, &_L6.sections);
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L38[i1], &_L37);
  }
  _L3 = kcg_true;
  _L4 = _L5;
  /* 1 */ if (_L3) {
    /* 1 */ for (i = 0; i < 10; i++) {
      acc = _L4;
      /* 1 */ Get_EOA_loop_TA_MA(i, acc, &_L38[i], &cond_iterw, &_L4);
      _L2 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L2 = 0;
  }
  noname = _L2;
  currentEOA = _L4;
  return currentEOA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Get_EOA_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

