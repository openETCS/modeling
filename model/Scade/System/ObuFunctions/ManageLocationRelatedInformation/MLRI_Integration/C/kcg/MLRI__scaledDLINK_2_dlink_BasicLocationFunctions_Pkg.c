/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/** "Remark_1" {Description = "Converts the linking distance variables into the uniform distance type - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */MLRI__Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */MLRI__D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */MLRI__Q_LOCACC q_locacc,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L15 */ kcg_int _L15;
  
  _L15 = q_locacc * MLRI__cQLOCACC_resolution_TrainPosition_Types_Pck;
  (*distance).d_min = - _L15;
  (*distance).d_max = _L15;
  switch (q_scale) {
    case MLRI__Q_SCALE_10_cm_scale :
      (*distance).nominal = d_link *
        MLRI__cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
      break;
    case MLRI__Q_SCALE_1_m_scale :
      (*distance).nominal = d_link *
        MLRI__cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
      break;
    case MLRI__Q_SCALE_10_m_scale :
      (*distance).nominal = d_link *
        MLRI__cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

