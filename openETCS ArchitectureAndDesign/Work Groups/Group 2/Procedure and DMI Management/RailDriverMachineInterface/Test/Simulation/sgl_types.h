/*+ FILE DESCRIPTION -------------------------------------------------------
 FILENAME          : sgl_types.h
 DESCRIPTION       : Definition of SGL types
 VERSION           : $Revision: 12210 $
 MODIFICATION DATE : $Date: 2013-10-15 15:02:28 +0200 (Tue, 15 Oct 2013) $
 COPYRIGHT (C)     : 2008-2013 by Esterel Technologies. All Rights Reserved.
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

typedef float SGLfloat;
typedef long int SGLlong;
typedef unsigned long int SGLulong;
typedef unsigned char SGLbyte;
typedef unsigned char SGLbool;
typedef unsigned short int SGLushort;

typedef struct {
    SGLlong l_integralPart;
    SGLlong l_fractionalPart;
    SGLlong l_secondFontPos;
    SGLbyte b_separator;
    SGLbool b_leadingZeros;
    SGLlong l_displaySign;
} sgl_numeric_format;

/* Color structure */
typedef struct {
    SGLfloat f_red;
    SGLfloat f_green;
    SGLfloat f_blue;
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

/* Macros for mathematical computations */
#define SGLlong_ADD(x,y) ((x)+(y))
#define SGLlong_SUB(x,y) ((x)-(y))
#define SGLlong_MUL(x,y) ((x)*(y))
#define SGLlong_DIV(x,y) ((x)/(y))
#define SGLfloat_ADD(x,y) ((x)+(y))
#define SGLfloat_SUB(x,y) ((x)-(y))
#define SGLfloat_MUL(x,y) ((x)*(y))
#define SGLfloat_DIV(x,y) ((x)/(y))

#endif                          /* _SGLTYPES_H */
