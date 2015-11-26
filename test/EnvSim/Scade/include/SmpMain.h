#ifndef _SMP_MAIN_H_INCLUDED_31861C36_F614_417A_835C_44FACBBAB8E9_
#define _SMP_MAIN_H_INCLUDED_31861C36_F614_417A_835C_44FACBBAB8E9_

#ifdef __cplusplus
extern "C" {
#endif

#include "stdlib.h"

#include "NewSmuTypes.h"

/* Simplorer types for C models */
typedef enum SmpType_t {
    SmpBool,
    SmpInt,
    SmpReal,
    SmpInt8,
    SmpInt16,
    SmpInt32,
    SmpInt64,
    SmpUint8,
    SmpUint16,
    SmpUint32,
    SmpUint64, 
    SmpFloat32,
    SmpFloat64,
    SmpChar,
    SmpEnum,
    /* buffer, size expressed in bytes */
    SmpVoid
} SmpType;

typedef enum SmpProduct_t {
    SmpSc,
    SmpSdy,
    SmpRp
} SmpProduct;

typedef enum SmpAccessKind_t {
    SmpAddress,
    SmpAccessor,
    SmpOffset
} SmpAccessKind;

typedef int (*SmpToString)(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);

typedef struct SmpAccess_t {
    SmpAccessKind kind;
    union {
	void* m_pAddress;
	void (*m_pfnAccessor)(void* value);
	size_t m_nContextOffset;
    } value;
} SmpAccess;

typedef struct SmpIODescription_t {
    int m_nId; /* filled during the registration */
    const char* m_pszName;
    const char* m_pszUnit;
    const char* m_pszType;
    const char* m_pszInfo;
    SmpType m_nType;
    int m_nSize;    /* not nul if array */
    int m_bMemory;  /* for outputs used as memories */
    SmpAccess access;
    SmpToString m_pfnToString;
} SmpIODescription;

/* for one root node only, applies to both sensors and inputs */
typedef struct SmpScenarioInput_t {
    const char* m_pszName;  /* scade name */
    SmpAccess access;
    SmpToString m_pfnToString;
} SmpScenarioInput;

typedef struct SmpModelDescription_t {
    const char* m_pszName;
    SmpProduct m_nProduct;
    SmpIODescription* m_inputs;
    SmpIODescription* m_outputs;
    SmpIODescription* m_states;
    SmpScenarioInput* m_entries;
    size_t m_nContextSize;
    double m_nSampleTime;
    void (*m_pfnConvert)(void* pAddress, int nIndex, double* pValue, SmpType nType, int bToDouble);
    void (*m_pfnKcgInitialize)(void* pContext, void* pCallData);
    void (*m_pfnKcgCycle)(void* pContext, void* pCallData);
    void (*m_pfnOpen)(const char* pszName, void* pContext, void* pCallData);
    void (*m_pfnClose)(void* pContext, void* pCallData);
    long (*m_pfnSmpPrep)(void* pCallData);
/*    long (*m_pfnSmpInitialize)(void* pCallData); */
/*    long (*m_pfnSmpCycle)(void* pCallData); */
} SmpModelDescription;

/* cosimulation */
typedef struct SmpCosimulation_t {
    const char* m_pszScadeBinDirectory;
    const char* m_pzwWorkspacePathname;
    const char* m_pstHost;
    const char* m_pszConfiguration;
    const char* m_pszRoot;
    int m_nPort;
} SmpCosimulation;

/* delegated functions */
extern SmpModelDescription** SmxGetModelDescriptions();
extern int SmxGetModelsCount();
extern SmpIODescription* SmxGetSensorDescriptions();
extern SmpScenarioInput* SmxGetSensorScenarioEntries();
extern const char* SmxGetScenarioPathname();
extern SmpCosimulation* SmxGetCosimulationDescription();

/* callbacks */
extern long SmxPrepCore(void* pCallData, SmpModelDescription* pDescription);
/* extern long SmxInitializeCore(void* pCallData, SmpModelDescription* pDescription); */
/* extern long SmxCycleCore(void* pCallData, SmpModelDescription* pDescription); */

#ifdef __cplusplus
}
#endif

#endif /*_SMP_MAIN_H_INCLUDED_31861C36_F614_417A_835C_44FACBBAB8E9_ */
