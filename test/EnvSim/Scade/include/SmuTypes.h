#ifndef _SMUTYPES_H_
#define _SMUTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Conversion version */
typedef enum {
    Scv43,
    Scv612,
    _ScvLast /* bounds checking */
} SimConvVersion;

/* Runtime version */
typedef enum {
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

typedef enum {
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

typedef enum {
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
};

extern void SimInit();
extern int SimStep();
extern void SimStop();

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMUTYPES_H_ */
