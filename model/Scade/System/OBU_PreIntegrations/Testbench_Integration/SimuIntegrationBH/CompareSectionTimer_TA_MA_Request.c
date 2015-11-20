/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompareSectionTimer_TA_MA_Request.h"

/* TA_MA_Request::CompareSectionTimer */
T_internal_Type_Obu_BasicTypes_Pkg CompareSectionTimer_TA_MA_Request(
  /* TA_MA_Request::CompareSectionTimer::timer */ T_internal_Type_Obu_BasicTypes_Pkg timer,
  /* TA_MA_Request::CompareSectionTimer::ma_section */ MovementAuthoritySection_t_TrackAtlasTypes *ma_section)
{
  /* TA_MA_Request::CompareSectionTimer::_L1 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* TA_MA_Request::CompareSectionTimer::_L2 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L2;
  /* TA_MA_Request::CompareSectionTimer::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_MA_Request::CompareSectionTimer::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* TA_MA_Request::CompareSectionTimer::_L7 */
  static kcg_bool _L7;
  /* TA_MA_Request::CompareSectionTimer::_L8 */
  static kcg_bool _L8;
  /* TA_MA_Request::CompareSectionTimer::_L9 */
  static kcg_bool _L9;
  /* TA_MA_Request::CompareSectionTimer::_L10 */
  static kcg_bool _L10;
  /* TA_MA_Request::CompareSectionTimer::_L11 */
  static kcg_bool _L11;
  /* TA_MA_Request::CompareSectionTimer::_L12 */
  static kcg_bool _L12;
  /* TA_MA_Request::CompareSectionTimer::smallestTimer */
  static T_internal_Type_Obu_BasicTypes_Pkg smallestTimer;
  
  _L1 = timer;
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L2, ma_section);
  _L9 = _L2.valid;
  _L10 = _L2.q_sectiontimer;
  _L12 = _L9 & _L10;
  _L11 = !_L12;
  _L3 = _L2.t_sectiontimer;
  _L7 = _L1 <= _L3;
  _L8 = _L11 | _L7;
  /* 1 */ if (_L8) {
    _L5 = _L1;
  }
  else {
    _L5 = _L3;
  }
  smallestTimer = _L5;
  return smallestTimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CompareSectionTimer_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

