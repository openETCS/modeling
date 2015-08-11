/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MRSP_FindMax_of_all_t_cat_TA_MRSP_H_
#define _MRSP_FindMax_of_all_t_cat_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::cont */ cont;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::Max */ Max;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L13 */ _L13;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L14 */ _L14;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L15 */ _L15;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L20 */ _L20;
  kcg_bool /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L21 */ _L21;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L24 */ _L24;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L23 */ _L23;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L25 */ _L25;
  kcg_int /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L26 */ _L26;
  kcg_bool /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L27 */ _L27;
  kcg_int /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L28 */ _L28;
  kcg_bool /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L29 */ _L29;
  kcg_bool /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L30 */ _L30;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::_L32 */ _L32;
} outC_MRSP_FindMax_of_all_t_cat_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP */
extern void MRSP_FindMax_of_all_t_cat_TA_MRSP(
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::Init_target */SSP_t_indexed_matrix_element_TA_MRSP *Init_target,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::SSP_indexed_target */SSP_t_indexed_matrix_element_TA_MRSP *SSP_indexed_target,
  outC_MRSP_FindMax_of_all_t_cat_TA_MRSP *outC);

extern void MRSP_FindMax_of_all_t_cat_reset_TA_MRSP(
  outC_MRSP_FindMax_of_all_t_cat_TA_MRSP *outC);

#endif /* _MRSP_FindMax_of_all_t_cat_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindMax_of_all_t_cat_TA_MRSP.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

