/*
 * ProbeSDM_EnvSim.h
 *
 *  Created on: 06.02.2016
 *      Author: thorsten
 */

#ifndef PROBESDM_ENVSIM_H_
#define PROBESDM_ENVSIM_H_

// this is a dummy helper
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EnvSim::ProbeSDM::dummyOut */ dummyOut;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_ProbeSDM_EnvSim;

#define ProbeSDM_init_EnvSim(outC)
#define ProbeSDM_reset_EnvSim(outC)
#define ProbeSDM_EnvSim(a,b,c,d,e,f)

#endif /* PROBESDM_ENVSIM_H_ */
