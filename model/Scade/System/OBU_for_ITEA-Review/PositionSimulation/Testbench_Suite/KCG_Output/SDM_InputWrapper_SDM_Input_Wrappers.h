/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SDM_InputWrapper_SDM_Input_Wrappers_H_
#define _SDM_InputWrapper_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"
#include "ConvertOdometry_SDM_Input_Wrappers.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"
#include "ConvertMA_SDM_Input_Wrappers.h"

/* =====================  no input structure  ====================== */


/* SDM_Input_Wrappers::SDM_InputWrapper */
extern void SDM_InputWrapper_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SDM_InputWrapper::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ODO_to_SDM */ odometry_T_Obu_BasicTypes_Pkg *ODO_to_SDM,
  /* SDM_Input_Wrappers::SDM_InputWrapper::m_level */ M_LEVEL m_level,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::MRSP */ MRSP_Profile_t *MRSP,
  /* SDM_Input_Wrappers::SDM_InputWrapper::MA */ MAs_t *MA,
  /* SDM_Input_Wrappers::SDM_InputWrapper::MA_updated */ kcg_bool MA_updated,
  /* SDM_Input_Wrappers::SDM_InputWrapper::MRSP_updated */ kcg_bool MRSP_updated,
  /* SDM_Input_Wrappers::SDM_InputWrapper::m_level_out */ M_LEVEL *m_level_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_out */ MRSP_internal_T_TargetManagement_types *mrsp_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ma_out */ MAs_real_T_TargetManagement_types *ma_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::odo_out */ Odometry_real_T_SDM_Types_Pkg *odo_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::V_ura_out */ V_internal_real_Type_SDM_Types_Pkg *V_ura_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ma_update_out */ kcg_bool *ma_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_update_out */ kcg_bool *mrsp_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::nationalvalues_out */ NationalValues_real_T_SDM_Types_Pkg *nationalvalues_out);

#endif /* _SDM_InputWrapper_SDM_Input_Wrappers_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SDM_InputWrapper_SDM_Input_Wrappers.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

