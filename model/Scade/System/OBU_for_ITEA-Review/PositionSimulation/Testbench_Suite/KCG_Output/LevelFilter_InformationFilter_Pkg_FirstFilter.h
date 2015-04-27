/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _LevelFilter_InformationFilter_Pkg_FirstFilter_H_
#define _LevelFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::LevelFilter */
extern kcg_bool LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */ kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */ MsgSource_T_Common_Types_Pkg inPacketOrigin);

#endif /* _LevelFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** LevelFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

