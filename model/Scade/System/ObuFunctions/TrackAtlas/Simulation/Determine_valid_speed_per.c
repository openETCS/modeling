/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Determine_valid_speed_per.h"

void Determine_valid_speed_per_reset(outC_Determine_valid_speed_per *outC)
{
}

/* Determine_valid_speed_per_cat_LOOP */
void Determine_valid_speed_per(
  /* Determine_valid_speed_per_cat_LOOP::Section */SSP_section_t *Section,
  /* Determine_valid_speed_per_cat_LOOP::CurrentTarget */SSP_t_section_t CurrentTarget,
  /* Determine_valid_speed_per_cat_LOOP::SSP_section */SSP_section_t *SSP_section,
  outC_Determine_valid_speed_per *outC)
{
  kcg_copy_SSP_section_t(&outC->_L58, SSP_section);
  kcg_copy_SSP_section_t(&outC->_L57, Section);
  kcg_copy_SSP_section_t(&outC->_L39, Section);
  outC->_L42 = outC->_L39.target;
  outC->_L40 = CurrentTarget;
  outC->_L48 = outC->_L42 <= outC->_L40;
  kcg_copy_SSP_section_t(&outC->_L41, SSP_section);
  outC->_L47 = outC->_L41.target;
  outC->_L49 = outC->_L40 >= outC->_L47;
  outC->_L50 = outC->_L48 & outC->_L49;
  if (outC->_L50) {
    kcg_copy_SSP_section_t(&outC->_L56, &outC->_L58);
  }
  else {
    kcg_copy_SSP_section_t(&outC->_L56, &outC->_L57);
  }
  outC->_L55 = !outC->_L50;
  kcg_copy_SSP_section_t(&outC->ValidSection, &outC->_L56);
  outC->cont = outC->_L55;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_valid_speed_per.c
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

