#ifndef BALISE_LOCALISATION_INFRALIB_SCSIM_MAPPING
#define BALISE_LOCALISATION_INFRALIB_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Balise_Localisation_InfraLib_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Balise_Localisation_InfraLib.h"
void _SCSIM_Mapping_Balise_Localisation_InfraLib();

void* _SCSIM_Get_Balise_Localisation_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Interdistance_InfraLib.h"
void _SCSIM_Mapping_Balise_Interdistance_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Interdistance_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_convert_engineering.h"
void _SCSIM_Mapping_TOOLS_convert_engineering(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_convert_engineering_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*BALISE_LOCALISATION_INFRALIB_SCSIM_MAPPING */
