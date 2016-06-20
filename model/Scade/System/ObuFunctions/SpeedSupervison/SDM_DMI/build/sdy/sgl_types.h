/*+ FILE DESCRIPTION -------------------------------------------------------
 FILENAME          : sgl_types.h
 DESCRIPTION       : Definition of SGL types
 VERSION           : $Revision: 16364 $
 MODIFICATION DATE : $Date: 2015-02-26 14:32:58 +0100 (jeu., 26 févr. 2015) $
 COPYRIGHT (C)     : 2008-2015 by Esterel Technologies. All Rights Reserved.
 ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS GOVERNED BY ESTEREL TECHNOLOGIES LICENSING CONDITIONS.
---------------------------------------------------------------------------- +*/

#ifndef _SGLTYPES_H
#define _SGLTYPES_H


/*+-----------------------------------------------------------------
  DESCRIPTION:
    SGL Types 
  REQUIREMENTS:
    [SGL-IRS-053] SGL arguments types
---------------------------------------------------------------------+*/

 /*****************************************************************************
 ** Scalar types
 *****************************************************************************/

#if (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L))

/* C99 sized integers */
#include <stdint.h>
typedef uint8_t SGLbool;
typedef int8_t SGLint8;
typedef uint8_t SGLuint8;
typedef int16_t SGLint16;
typedef uint16_t SGLuint16;
typedef int32_t SGLint32;
typedef uint32_t SGLuint32;
typedef int64_t SGLint64;
typedef uint64_t SGLuint64;

#else

/* C90 sized integers */
typedef unsigned char SGLbool;
typedef signed char SGLint8;
typedef unsigned char SGLuint8;
typedef short int SGLint16;
typedef unsigned short int SGLuint16;
typedef long int SGLint32;
typedef unsigned long int SGLuint32;
#if defined(_MSC_VER)
typedef __int64 SGLint64;
typedef unsigned __int64 SGLuint64;
#elif defined(__GNUC__) && !defined(__STRICT_ANSI__)
typedef long long SGLint64;
typedef unsigned long long SGLuint64;
#else
/* 64-bit integers not supported! */
#endif

#endif

/* Float types */
typedef float SGLfloat;
typedef double SGLdouble;

/* For compatibility */
typedef SGLint32 SGLlong;
typedef SGLint16 SGLshort;
typedef SGLuint32 SGLulong;
typedef SGLuint8 SGLbyte;
typedef SGLuint16 SGLushort;

 /*****************************************************************************
 ** Structure types
 *****************************************************************************/

typedef struct {
    SGLlong l_integralPart;
    SGLlong l_fractionalPart;
    SGLlong l_secondFontPos;
    SGLlong l_displaySign;
    SGLbyte b_separator;
    SGLbool b_leadingZeros;
} sgl_numeric_format;

/* Color structure */
typedef struct {
    SGLfloat f_red;
    SGLfloat f_green;
    SGLfloat f_blue;
    SGLfloat f_alpha;
} sgl_color;

typedef struct {
    SGLfloat f_min_x;
    SGLfloat f_min_y;
    SGLfloat f_max_x;
    SGLfloat f_max_y;
    SGLulong ul_nb_lines;
} sgl_bounding_box;

/* Line width structure */
typedef struct {
    SGLfloat f_line_width;      /* line width when there is no halo on a line */
    SGLfloat f_color_width;     /* line width of the colored part of a haloed line */
    SGLfloat f_halo_width;      /* line width of the halo of a haloed line */
} sgl_line_width;

/* Texture attributes structure */
typedef struct {
    SGLulong ui_texture;
    SGLulong ul_textures_dimension[2];
    SGLulong ul_dimension_power_2[2];
    SGLbool b_texture_specified_state;
    SGLbyte b_texture_format;
    SGLbyte b_textures_app_mode;
} sgl_texture_attrib;

/* Structure parameter of sglInit */
typedef struct {
    SGLulong ul_screen_width;   /* Screen Width */
    SGLulong ul_screen_height;  /* Screen Height */
    SGLbyte *pb_texture_buffer; /* Buffer to uncompress textures (if necessary) */
    SGLulong ul_texture_max_width;      /* Width of pb_texture_buffer */
    SGLulong ul_texture_max_height;     /* Height of pb_texture_buffer */
    sgl_texture_attrib *p_texture_attrib;       /* Table containing each texture attribute (if necessary) */
    SGLulong ul_number_of_textures;     /* Number of entries in p_texture_attrib */
} sgl_parameters;

typedef struct {
    SGLfloat f_x;
    SGLfloat f_y;
} sgl_point;

typedef struct {
    sgl_point s_p1;
    sgl_point s_p2;
    sgl_point s_p3;
} sgl_triangle;

typedef struct {
    sgl_point s_p1;
    sgl_point s_p2;
} sgl_segment;

/*****************************************************************************
** Define the Maximum length of stipple
*****************************************************************************/
#define SGL_MAX_STIPPLES_LENGTH                 6U

/* Linestipple structure */
typedef struct {
    SGLbyte tb_length[SGL_MAX_STIPPLES_LENGTH]; /* Length of each stipple segment */
    SGLbyte tb_on_off[SGL_MAX_STIPPLES_LENGTH]; /* Visibility of each segment */
    SGLbyte b_all_on;           /* 1 => plain line, 0 => dashed line */
    SGLbyte b_number;           /* Number of defined segments in tables tb_length and tb_on_off */
} sgl_linestipple;

 /*****************************************************************************
 **   Macros for mathematical computations
 *****************************************************************************/

#define SGLbool_not(x)   (SGLbool)(!(x))
#define SGLbool_and(x,y) (SGLbool)((x)&&(y))
#define SGLbool_or(x,y)  (SGLbool)((x)||(y))
#define SGLbool_eq(x,y)  (SGLbool)((x)==(y))
#define SGLbool_ne(x,y)  (SGLbool)((x)!=(y))

#define SGLint8_neg(x)   (SGLint8)(-(x))
#define SGLint8_add(x,y) (SGLint8)((x)+(y))
#define SGLint8_sub(x,y) (SGLint8)((x)-(y))
#define SGLint8_mul(x,y) (SGLint8)((x)*(y))
#define SGLint8_div(x,y) (SGLint8)((y)==0?0:(x)/(y))
#define SGLint8_rem(x,y) (SGLint8)((y)==0?0:(x)%(y))
#define SGLint8_eq(x,y)  (SGLbool)((x)==(y))
#define SGLint8_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLint8_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLint8_gt(x,y)  (SGLbool)((x)>(y))
#define SGLint8_le(x,y)  (SGLbool)((x)<=(y))
#define SGLint8_lt(x,y)  (SGLbool)((x)<(y))

#define SGLuint8_neg(x)   (SGLuint8)(-(x))
#define SGLuint8_add(x,y) (SGLuint8)((x)+(y))
#define SGLuint8_sub(x,y) (SGLuint8)((x)-(y))
#define SGLuint8_mul(x,y) (SGLuint8)((x)*(y))
#define SGLuint8_div(x,y) (SGLuint8)((y)==0U?0U:(x)/(y))
#define SGLuint8_rem(x,y) (SGLuint8)((y)==0U?0U:(x)%(y))
#define SGLuint8_eq(x,y)  (SGLbool)((x)==(y))
#define SGLuint8_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLuint8_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLuint8_gt(x,y)  (SGLbool)((x)>(y))
#define SGLuint8_le(x,y)  (SGLbool)((x)<=(y))
#define SGLuint8_lt(x,y)  (SGLbool)((x)<(y))

#define SGLint16_neg(x)   (SGLint16)(-(x))
#define SGLint16_add(x,y) (SGLint16)((x)+(y))
#define SGLint16_sub(x,y) (SGLint16)((x)-(y))
#define SGLint16_mul(x,y) (SGLint16)((x)*(y))
#define SGLint16_div(x,y) (SGLint16)((y)==0?0:(x)/(y))
#define SGLint16_rem(x,y) (SGLint16)((y)==0?0:(x)%(y))
#define SGLint16_eq(x,y)  (SGLbool)((x)==(y))
#define SGLint16_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLint16_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLint16_gt(x,y)  (SGLbool)((x)>(y))
#define SGLint16_le(x,y)  (SGLbool)((x)<=(y))
#define SGLint16_lt(x,y)  (SGLbool)((x)<(y))

#define SGLuint16_neg(x)   (SGLuint16)(-(x))
#define SGLuint16_add(x,y) (SGLuint16)((x)+(y))
#define SGLuint16_sub(x,y) (SGLuint16)((x)-(y))
#define SGLuint16_mul(x,y) (SGLuint16)((x)*(y))
#define SGLuint16_div(x,y) (SGLuint16)((y)==0U?0U:(x)/(y))
#define SGLuint16_rem(x,y) (SGLuint16)((y)==0U?0U:(x)%(y))
#define SGLuint16_eq(x,y)  (SGLbool)((x)==(y))
#define SGLuint16_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLuint16_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLuint16_gt(x,y)  (SGLbool)((x)>(y))
#define SGLuint16_le(x,y)  (SGLbool)((x)<=(y))
#define SGLuint16_lt(x,y)  (SGLbool)((x)<(y))

#define SGLint32_neg(x)   (SGLint32)(-(x))
#define SGLint32_add(x,y) (SGLint32)((x)+(y))
#define SGLint32_sub(x,y) (SGLint32)((x)-(y))
#define SGLint32_mul(x,y) (SGLint32)((x)*(y))
#define SGLint32_div(x,y) (SGLint32)((y)==0L?0L:(x)/(y))
#define SGLint32_rem(x,y) (SGLint32)((y)==0L?0L:(x)%(y))
#define SGLint32_eq(x,y)  (SGLbool)((x)==(y))
#define SGLint32_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLint32_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLint32_gt(x,y)  (SGLbool)((x)>(y))
#define SGLint32_le(x,y)  (SGLbool)((x)<=(y))
#define SGLint32_lt(x,y)  (SGLbool)((x)<(y))

#define SGLuint32_neg(x)   (SGLuint32)(-(x))
#define SGLuint32_add(x,y) (SGLuint32)((x)+(y))
#define SGLuint32_sub(x,y) (SGLuint32)((x)-(y))
#define SGLuint32_mul(x,y) (SGLuint32)((x)*(y))
#define SGLuint32_div(x,y) (SGLuint32)((y)==0UL?0UL:(x)/(y))
#define SGLuint32_rem(x,y) (SGLuint32)((y)==0UL?0UL:(x)%(y))
#define SGLuint32_eq(x,y)  (SGLbool)((x)==(y))
#define SGLuint32_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLuint32_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLuint32_gt(x,y)  (SGLbool)((x)>(y))
#define SGLuint32_le(x,y)  (SGLbool)((x)<=(y))
#define SGLuint32_lt(x,y)  (SGLbool)((x)<(y))

#define SGLint64_neg(x)   (SGLint64)(-(x))
#define SGLint64_add(x,y) (SGLint64)((x)+(y))
#define SGLint64_sub(x,y) (SGLint64)((x)-(y))
#define SGLint64_mul(x,y) (SGLint64)((x)*(y))
#define SGLint64_div(x,y) (SGLint64)((y)==0L?0L:(x)/(y))
#define SGLint64_rem(x,y) (SGLint64)((y)==0L?0L:(x)%(y))
#define SGLint64_eq(x,y)  (SGLbool)((x)==(y))
#define SGLint64_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLint64_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLint64_gt(x,y)  (SGLbool)((x)>(y))
#define SGLint64_le(x,y)  (SGLbool)((x)<=(y))
#define SGLint64_lt(x,y)  (SGLbool)((x)<(y))

#define SGLuint64_neg(x)   (SGLuint64)(-(x))
#define SGLuint64_add(x,y) (SGLuint64)((x)+(y))
#define SGLuint64_sub(x,y) (SGLuint64)((x)-(y))
#define SGLuint64_mul(x,y) (SGLuint64)((x)*(y))
#define SGLuint64_div(x,y) (SGLuint64)((y)==0UL?0UL:(x)/(y))
#define SGLuint64_rem(x,y) (SGLuint64)((y)==0UL?0UL:(x)%(y))
#define SGLuint64_eq(x,y)  (SGLbool)((x)==(y))
#define SGLuint64_ne(x,y)  (SGLbool)((x)!=(y))
#define SGLuint64_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLuint64_gt(x,y)  (SGLbool)((x)>(y))
#define SGLuint64_le(x,y)  (SGLbool)((x)<=(y))
#define SGLuint64_lt(x,y)  (SGLbool)((x)<(y))

#define SGLfloat_neg(x)   (SGLfloat)(-(x))
#define SGLfloat_add(x,y) (SGLfloat)((x)+(y))
#define SGLfloat_sub(x,y) (SGLfloat)((x)-(y))
#define SGLfloat_mul(x,y) (SGLfloat)((x)*(y))
#define SGLfloat_div(x,y) (SGLfloat)((((y)<1e-6F)&&(y)>-1e-6F)?0.0F:(x)/(y))
#define SGLfloat_rem(x,y) (SGLfloat)((x)-(y)*(SGLint32)SGLfloat_div(x,y))
#define SGLfloat_eq(x,y)  (SGLbool)((((x)-(y))<1e-6F)&&(((y)-(x))<1e-6F))
#define SGLfloat_ne(x,y)  (SGLbool)((((x)-(y))>=1e-6F)||(((y)-(x))>=1e-6F))
#define SGLfloat_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLfloat_gt(x,y)  (SGLbool)((x)>(y))
#define SGLfloat_le(x,y)  (SGLbool)((x)<=(y))
#define SGLfloat_lt(x,y)  (SGLbool)((x)<(y))

#define SGLdouble_neg(x)   (SGLdouble)(-(x))
#define SGLdouble_add(x,y) (SGLdouble)((x)+(y))
#define SGLdouble_sub(x,y) (SGLdouble)((x)-(y))
#define SGLdouble_mul(x,y) (SGLdouble)((x)*(y))
#define SGLdouble_div(x,y) (SGLdouble)((((y)<1e-6)&&(y)>-1e-6)?0.0:(x)/(y))
#define SGLdouble_rem(x,y) (SGLdouble)((x)-(y)*(SGLint32)SGLdouble_div(x,y))
#define SGLdouble_eq(x,y)  (SGLbool)((((x)-(y))<1e-6)&&(((y)-(x))<1e-6))
#define SGLdouble_ne(x,y)  (SGLbool)((((x)-(y))>=1e-6)||(((y)-(x))>=1e-6))
#define SGLdouble_ge(x,y)  (SGLbool)((x)>=(y))
#define SGLdouble_gt(x,y)  (SGLbool)((x)>(y))
#define SGLdouble_le(x,y)  (SGLbool)((x)<=(y))
#define SGLdouble_lt(x,y)  (SGLbool)((x)<(y))

#endif                          /* _SGLTYPES_H */
