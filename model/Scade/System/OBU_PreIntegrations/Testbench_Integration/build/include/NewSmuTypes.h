#ifndef _NEWSMUTYPES_H_
#define _NEWSMUTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/*Comparison result codes:*/
#define SIM_CMP_RES_EQ 1        /*a==b     or   |a-b| <= tol (if tol defined)*/
#define SIM_CMP_RES_NEQ 2       /*a!=b     or   |a-b| >  tol (if tol defined)*/
#define SIM_CMP_RES_BOUNDARY 4  /* | |a-b| - tol| < pow(2.0,-51)*|b|*/ 
#define SIM_CMP_RES_LT 8        /*a<b*/
#define SIM_CMP_RES_GT 16       /*a>b*/
#define SIM_CMP_RES_ERR 32      /*misc error*/
#define SIM_CMP_RES_BAD_SIM_CONV 64      /*SimTypeVTable (ex:pSimDoubleVTable) not in Scv65 version => unable to compare with tolerance */

#define MAX_REAL_FORMAT_LEN 10

/* Conversion version */
typedef enum SimConvVersion_t {
    Scv43,
    Scv612,
    Scv65,
    _ScvLast /* bounds checking */
} SimConvVersion;

/* Runtime version */
typedef enum SimRtVersion_t {
    Srtv43,
    Srtv50,
    Srtv51,
    Srtv6,
    Srtv601,
    Srtv61,
    Srtv612,
    Srtv62,
    _SrtvLast	/* bounds checking */
} SimRtVersion;

/* Conversion types */
typedef enum SimConvType_t {
    SptNone,
    SptString,
    SptChar,
    SptShort,
    SptLong,
    SptFloat,
    SptDouble,
    SptBool,
    _SptLast	/* bounds checking */
} SimConvType;

typedef enum SimBool_t {
    SbFalse,
    SbTrue
} SimBool;

struct SimTypeVTable {
    /*
    * version of the table
    */
    SimConvVersion m_version; 
    /*
    * non zero if both nTo and nFrom are provided
    * (SptNone is considered as beeing always provided)
    */
    int (*m_pfnGetConvInfo)(SimConvType nTo, SimConvType nFrom);
    /*
    * serializes a value
    * returns the address of the value (non NULL if successful)
    */
    const void* (*m_pfnToType)(SimConvType, const void* pT);
    /*
    * compiles a value (non zero if successful)
    */
    int (*m_pfnFromType)(SimConvType, const void* pType, void* pT);
    /*
    * compares two values (non zero if successful)
    */
    int (*m_pfnCompare)(int* result, const void* pValue1, const void* pValue2);
    /*
    * compares two values with tolerance (non zero if successful)
    */
    int (*m_pfnCompareWithTol)(int* result, const void* pValue1, const void* pValue2, const void* pTol);
};

typedef int (*PFNSTRAPPEND)(const char *str, void *pData);
typedef void (*PFNCOMPARETYPE)(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);

typedef struct SimTypeUtils_t {
    int (*m_pfnTypeToString)(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
    int (*m_pfnCheckString)(const char *str, char **endptr);
    int (*m_pfnStringToType)(const char *str, void *pValue, char **endptr);
    int (*m_pfnAllowDoubleConversion)();
    int (*m_pfnTypeToDouble)(const void *pValue, double *dValue);
    int (*m_pfnAllowLongConvertion)();
    int (*m_pfnTypeToLong)(const void *pValue, long *lValue);
    PFNCOMPARETYPE m_pfnCompareType;
    int (*m_pfnGetSignature)(PFNSTRAPPEND pfnStrAppend, void *pData);
    int (*m_pfnSetDefaultValue)(void *pValue);
    int m_nSize;
} SimTypeUtils;

typedef struct SimFieldUtils_t {
    const char* m_name;
    unsigned int m_nOffset;
    SimTypeUtils* m_pTypeUtils;
} SimFieldUtils;

typedef struct SimEnumValUtils_t {
    const char* m_name;
    int m_nVal;
} SimEnumValUtils;

typedef struct SimConverter_t {
    /* Array */
    int (*m_pfnArrayToString)(const void *pValue,
            int (*pfnTypeToString)(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData),
            int nSize, int nCellSize, PFNSTRAPPEND pfnStrAppend, void *pData);
    int (*m_pfnStringToArray)(const char *str, void *pValue, SimTypeUtils *pTypeUtils,
            int nSize, int nCellSize, char **endptr);
    void (*m_pfnArrayComparison)(int *pResult, const void *pValue1, const void *pValue2, PFNCOMPARETYPE pfnCompareType,
            int nSize, int nCellSize, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);

    /* Char Array (String) */
    int (*m_pfnCharArrayToString)(const void *pValue,
            int (*pfnTypeToString)(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData),
            int nSize, int nCellSize, PFNSTRAPPEND pfnStrAppend, void *pData,
            int bStringsPadding, char cStringsPaddingChar);
    int (*m_pfnStringToCharArray)(const char *str, void *pValue, SimTypeUtils *pTypeUtils,
            int nSize, int nCellSize, char **endptr,
            int bStringsPadding, char cStringsPaddingChar);

    /* Structure */
    int (*m_pfnStructureToString)(const void *pValue, const SimFieldUtils *pFields, int nSize,
            PFNSTRAPPEND pfnStrAppend, void *pData);
    int (*m_pfnStringToStructure)(const char *str, void *pValue, const SimFieldUtils *pFields,
            int nSize, char **endptr);
    void (*m_pfnStructureComparison)(int *pResult, const void *pValue1, const void *pValue2,
           const SimFieldUtils *pFields, int nSize, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);

    /* Enum */
    int (*m_pfnEnumToString)(int nValue, const SimEnumValUtils *pEnumVals, int nSize,
           PFNSTRAPPEND pfnStrAppend, void *pData);
    int (*m_pfnStringToEnum)(const char* str, int* pValue, const SimEnumValUtils *pEnumVals,
           int nSize, char **endptr);

    /* Parameters */
    char m_RealFormat[MAX_REAL_FORMAT_LEN];
    int m_bDisplayStrings;
    int m_bStringsPadding;
    char m_cStringsPaddingChar;

} SimConverter;

extern SimConverter* pConverter;
extern char* strDefaultRealFormat;

typedef struct SimSimulator_t {
  
    /* Control */
    void (*m_pfnRefresh)(struct SimSimulator_t*);
    void (*m_pfnAcquireValueMutex)(struct SimSimulator_t*);
    void (*m_pfnReleaseValueMutex)(struct SimSimulator_t*);
} SimSimulator;

typedef struct SimTolerance_t {
    double m_dTolerance;
    int m_bRelative;
} SimTolerance;

extern int SimInit();
extern int SimReset();
extern int SimStep();
extern int SimStop();

typedef enum  SimMtcErrCode_t{
    SmecNoError,        /* No error                     */
    SmecErrBadFormat,   /* Bad format                   */
    SmecErrBadMagic,    /* Bad magic number             */
    SmecErrFileRead,    /* Cannot open file for reading */
    SmecErrFileWrite,   /* Cannot open file for writing */
    SmecErrFileClose,   /* Cannot close  file           */
    SmecErrWrite,       /* Failed write operation       */
    SmecErrUnknown      /* Unknown error                */
} SimMtcErrCode;

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _NEWSMUTYPES_H_ */

