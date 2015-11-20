/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copySpeedProfileElement_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copySpeedProfileElement */
void copySpeedProfileElement_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::index */ kcg_int index,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::fromTrackAtlas */ MRSP_section_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::continue */ kcg_bool *_1_continue,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::toDMI */ DMI_speedProfileElement_T_DMI_Types_Pkg *toDMI)
{
  static kcg_int noname;
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::_L1 */
  static MRSP_section_t_TrackAtlasTypes _L1;
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::_L2 */
  static DMI_speedProfileElement_T_DMI_Types_Pkg _L2;
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::_L6 */
  static kcg_bool _L6;
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::_L3 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::_L7 */
  static kcg_int _L7;
  
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L1, fromTrackAtlas);
  _L6 = _L1.valid;
  _L5 = _L1.Loc_Abs;
  _L4 = _L1.Loc_LRBG;
  _L3 = _L1.MRS;
  _L2.valid = _L6;
  _L2.Loc_Abs = _L5;
  _L2.Loc_LRBG = _L4;
  _L2.MRS = _L3;
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(toDMI, &_L2);
  *_1_continue = _L6;
  _L7 = index;
  noname = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** copySpeedProfileElement_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

