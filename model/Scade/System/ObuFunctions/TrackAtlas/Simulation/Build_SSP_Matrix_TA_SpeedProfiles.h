/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Build_SSP_Matrix_TA_SpeedProfiles_H_
#define _Build_SSP_Matrix_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_matrix_updated */ SSP_matrix_updated;
  SSP_matrix_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_matrix_out */ SSP_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L2 */ _L2;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L3 */ _L3;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L4 */ _L4;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L5 */ _L5;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L6 */ _L6;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L7 */ _L7;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L8 */ _L8;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L9 */ _L9;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L10 */ _L10;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::Build_SSP_Matrix::_L11 */ _L11;
  array__10442 /* TA_SpeedProfiles::Build_SSP_Matrix::_L12 */ _L12;
  kcg_bool /* TA_SpeedProfiles::Build_SSP_Matrix::_L13 */ _L13;
} outC_Build_SSP_Matrix_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::Build_SSP_Matrix */
extern void Build_SSP_Matrix_TA_SpeedProfiles(
  /* TA_SpeedProfiles::Build_SSP_Matrix::ASP */SSP_cat_t_TA_MRSP *ASP,
  /* TA_SpeedProfiles::Build_SSP_Matrix::LX_SR */SSP_cat_t_TA_MRSP *LX_SR,
  /* TA_SpeedProfiles::Build_SSP_Matrix::MaxTrainSpeed */SSP_cat_t_TA_MRSP *MaxTrainSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::ModeRelated */SSP_cat_t_TA_MRSP *ModeRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::OverrideRelated */SSP_cat_t_TA_MRSP *OverrideRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::PBD_SR */SSP_cat_t_TA_MRSP *PBD_SR,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SignalingRelated */SSP_cat_t_TA_MRSP *SignalingRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP */SSP_cat_t_TA_MRSP *SSP,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_updated */kcg_bool SSP_updated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::STM_MaxSpeed */SSP_cat_t_TA_MRSP *STM_MaxSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::STM_SystemSpeed */SSP_cat_t_TA_MRSP *STM_SystemSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::TSR */SSP_cat_t_TA_MRSP *TSR,
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC);

extern void Build_SSP_Matrix_reset_TA_SpeedProfiles(
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC);

#endif /* _Build_SSP_Matrix_TA_SpeedProfiles_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_SSP_Matrix_TA_SpeedProfiles.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

