/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Update_SP_per_LRBG_TA_Lib_internal_H_
#define _Update_SP_per_LRBG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindStartOfNewSpeedProfile_TA_Lib_internal.h"
#include "Update_SP_per_LRBG_loop_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::SpeedProfile_out */ SpeedProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Update_SP_per_LRBG_loop_TA_Lib_internal /* 1 */ _1_Context_1[33];
  outC_FindStartOfNewSpeedProfile_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::Update_SP_per_LRBG::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L5 */ _L5;
  array_int_33 /* TA_Lib_internal::Update_SP_per_LRBG::_L9 */ _L9;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L14 */ _L14;
  array__10579 /* TA_Lib_internal::Update_SP_per_LRBG::_L15 */ _L15;
  kcg_int /* TA_Lib_internal::Update_SP_per_LRBG::_L20 */ _L20;
  kcg_int /* TA_Lib_internal::Update_SP_per_LRBG::_L21 */ _L21;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::Update_SP_per_LRBG::_L23 */ _L23;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L24 */ _L24;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L25 */ _L25;
  SSP_s_section_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L27 */ _L27;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L26 */ _L26;
  kcg_bool /* TA_Lib_internal::Update_SP_per_LRBG::_L29 */ _L29;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L30 */ _L30;
  array__10591 /* TA_Lib_internal::Update_SP_per_LRBG::_L34 */ _L34;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L35 */ _L35;
  kcg_bool /* TA_Lib_internal::Update_SP_per_LRBG::_L36 */ _L36;
  kcg_bool /* TA_Lib_internal::Update_SP_per_LRBG::_L37 */ _L37;
  kcg_int /* TA_Lib_internal::Update_SP_per_LRBG::_L38 */ _L38;
  array__10399 /* TA_Lib_internal::Update_SP_per_LRBG::_L39 */ _L39;
  array__10594 /* TA_Lib_internal::Update_SP_per_LRBG::_L41 */ _L41;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L45 */ _L45;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::Update_SP_per_LRBG::_L46 */ _L46;
} outC_Update_SP_per_LRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Update_SP_per_LRBG */
extern void Update_SP_per_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Update_SP_per_LRBG::new_SP */SSP_cat_t_TA_MRSP *new_SP,
  /* TA_Lib_internal::Update_SP_per_LRBG::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_Lib_internal::Update_SP_per_LRBG::section1_delay */SSP_section_t_TA_MRSP *section1_delay,
  /* TA_Lib_internal::Update_SP_per_LRBG::section1 */SSP_section_t_TA_MRSP *section1,
  /* TA_Lib_internal::Update_SP_per_LRBG::Last_SpeedProfile_in */SSP_cat_t_TA_MRSP *Last_SpeedProfile_in,
  outC_Update_SP_per_LRBG_TA_Lib_internal *outC);

extern void Update_SP_per_LRBG_reset_TA_Lib_internal(
  outC_Update_SP_per_LRBG_TA_Lib_internal *outC);

#endif /* _Update_SP_per_LRBG_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_SP_per_LRBG_TA_Lib_internal.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

