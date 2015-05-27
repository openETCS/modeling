#ifndef BUTTONBEHAVIOUR_SCSIM_MAPPING
#define BUTTONBEHAVIOUR_SCSIM_MAPPING

#include "SmuTypes.h"
#include "ButtonBehaviour_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "ButtonBehaviour.h"
void _SCSIM_Mapping_ButtonBehaviour();

void* _SCSIM_Get_ButtonBehaviour_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_SSM_TR_Released_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_Released_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_Pressed_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_Pressed_SM1_Utils;
static int _SCSIM_ClockActive_SSM_st_Pressed_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_Released_SM1(void*);

#endif /*BUTTONBEHAVIOUR_SCSIM_MAPPING */
