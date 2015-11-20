/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMRSP_section */
void ConvertMRSP_section_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertMRSP_section::MRSP_section_ext */ MRSP_section_t_TrackAtlasTypes *MRSP_section_ext,
  /* SDM_Input_Wrappers::ConvertMRSP_section::MRSP_section_int */ MRSP_internal_section_T_TargetManagement_types *MRSP_section_int)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L2 */
  static kcg_bool _L2;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L5 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L6 */
  static MRSP_internal_section_T_TargetManagement_types _L6;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L7 */
  static L_internal_real_Type_SDM_Types_Pkg _L7;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L8 */
  static V_internal_real_Type_SDM_Types_Pkg _L8;
  /* SDM_Input_Wrappers::ConvertMRSP_section::_L9 */
  static MRSP_section_t_TrackAtlasTypes _L9;
  
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L9, MRSP_section_ext);
  _L5 = _L9.MRS;
  _L4 = _L9.Loc_LRBG;
  _L3 = _L9.Loc_Abs;
  _L2 = _L9.valid;
  _L7 = /* 12 */ TransformL_intToL_real_SDM_Types_Pkg(_L3);
  _L8 = /* 6 */ TransformV_intToV_real_SDM_Types_Pkg(_L5);
  _L6.Loc_Abs = _L7;
  _L6.MRS = _L8;
  _L6.valid = _L2;
  noname = _L4;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    MRSP_section_int,
    &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertMRSP_section_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

