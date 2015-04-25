/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _IncorporateAbsenceOfSB_SDM_OutputWrapper_H_
#define _IncorporateAbsenceOfSB_SDM_OutputWrapper_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* SDM_OutputWrapper::IncorporateAbsenceOfSB */
extern void IncorporateAbsenceOfSB_SDM_OutputWrapper(
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::in_sdmCmd */ SDM_Commands_real_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::NationalValues */ NationalValues_real_T_SDM_Types_Pkg *NationalValues,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::NoSBInterface */ kcg_bool NoSBInterface,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::triggeredEB */ kcg_bool *triggeredEB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::triggeredSB */ kcg_bool *triggeredSB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::revokedEB */ kcg_bool *revokedEB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::revokedSB */ kcg_bool *revokedSB);

#endif /* _IncorporateAbsenceOfSB_SDM_OutputWrapper_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** IncorporateAbsenceOfSB_SDM_OutputWrapper.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

