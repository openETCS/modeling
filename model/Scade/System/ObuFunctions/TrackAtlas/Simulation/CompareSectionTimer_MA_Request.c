/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompareSectionTimer_MA_Request.h"

void CompareSectionTimer_reset_MA_Request(
  outC_CompareSectionTimer_MA_Request *outC)
{
}

/* MA_Request::CompareSectionTimer */
void CompareSectionTimer_MA_Request(
  /* MA_Request::CompareSectionTimer::timer */T_internal_Type_Obu_BasicTypes_Pkg timer,
  /* MA_Request::CompareSectionTimer::ma_section */MovementAuthoritySection_t_TrackAtlasTypes *ma_section,
  outC_CompareSectionTimer_MA_Request *outC)
{
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&outC->_L2, ma_section);
  outC->_L9 = outC->_L2.valid;
  outC->_L10 = outC->_L2.q_sectiontimer;
  outC->_L12 = outC->_L9 & outC->_L10;
  outC->_L11 = !outC->_L12;
  outC->_L1 = timer;
  outC->_L3 = outC->_L2.t_sectiontimer;
  outC->_L7 = outC->_L1 <= outC->_L3;
  outC->_L8 = outC->_L11 | outC->_L7;
  if (outC->_L8) {
    outC->_L5 = outC->_L1;
  }
  else {
    outC->_L5 = outC->_L3;
  }
  outC->smallestTimer = outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CompareSectionTimer_MA_Request.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

