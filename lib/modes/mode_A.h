/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE OggVorbis SOFTWARE CODEC SOURCE CODE.   *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS SOURCE IS GOVERNED BY *
 * THE GNU LESSER/LIBRARY PUBLIC LICENSE, WHICH IS INCLUDED WITH    *
 * THIS SOURCE. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.        *
 *                                                                  *
 * THE OggVorbis SOURCE CODE IS (C) COPYRIGHT 1994-2000             *
 * by Monty <monty@xiph.org> and the XIPHOPHORUS Company            *
 * http://www.xiph.org/                                             *
 *                                                                  *
 ********************************************************************

 function: predefined encoding modes
 last mod: $Id: mode_A.h,v 1.8 2001/01/22 01:38:50 xiphmont Exp $

 ********************************************************************/

#ifndef _V_MODES_A_H_
#define _V_MODES_A_H_

#include <stdio.h>
#include "vorbis/codec.h"
#include "backends.h"

#include "books/lsp12_0.vqh"
#include "books/lsp30_0.vqh"
#include "books/lsp12_1.vqh"
#include "books/lsp30_1.vqh"

#include "books/res0_128_128aux.vqh"
#include "books/res0_128_1024aux.vqh"

#include "books/res0_128_128_1.vqh"
#include "books/res0_128_128_2.vqh"
#include "books/res0_128_128_3.vqh"
#include "books/res0_128_128_4.vqh"
#include "books/res0_128_128_5.vqh"

#include "books/res0_128_1024_1.vqh"
#include "books/res0_128_1024_2.vqh"
#include "books/res0_128_1024_3.vqh"
#include "books/res0_128_1024_4.vqh"
#include "books/res0_128_1024_5.vqh"
#include "books/res0_128_1024_6.vqh"
#include "books/res0_128_1024_7.vqh"
#include "books/res0_128_1024_8.vqh"
#include "books/res0_128_1024_9.vqh"


static vorbis_info_psy _psy_set_A0={
  1,/*athp*/
  1,/*decayp*/

  -100.,
  -140.,

  8,

  /*     0  1  2   3   4   5   6   7   8   9  10  11  12  13  14  15   16   */
  /* x: 63 88 125 175 250 350 500 700 1k 1.4k 2k 2.8k 4k 5.6k 8k 11.5k 16k Hz */
  /* y: 0 10 20 30 40 50 60 70 80 90 100 dB */

   1,/* tonemaskp */
  /*  0   10   20   30   40   50   60   70   80   90   100 */
  {
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*63*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*88*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*125*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*175*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*250*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*350*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*500*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*700*/

   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*1000*/
   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*1400*/
   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*2000*/
   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*2800*/
   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*4000*/
   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*5600*/
   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*8000*/
   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*11500*/
   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*16000*/
  },

  1,/* peakattp */
  {{-14.f,-16.f,-18.f,-19.f,-20.f,-21.f,-22.f,-22.f,-22.f,-22.f,-22.f},/*63*/
   {-14.f,-16.f,-18.f,-19.f,-20.f,-21.f,-22.f,-22.f,-22.f,-22.f,-22.f},/*88*/
   {-14.f,-16.f,-18.f,-19.f,-20.f,-21.f,-22.f,-22.f,-22.f,-22.f,-22.f},/*125*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-22.f,-22.f,-22.f},/*175*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-22.f,-22.f,-22.f},/*250*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-22.f,-22.f,-22.f},/*350*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-22.f,-22.f,-22.f},/*500*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-14.f,-20.f,-22.f,-22.f,-22.f},/*700*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-14.f,-20.f,-22.f,-22.f,-22.f},/*1000*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-22.f,-22.f},/*1400*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-22.f,-22.f},/*2000*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-22.f,-22.f},/*2400*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-22.f,-22.f},/*4000*/
   {-10.f,-10.f,-10.f,-10.f,-10.f,-11.f,-12.f,-13.f,-22.f,-22.f,-22.f},/*5600*/
   {-10.f,-10.f,-10.f,-10.f,-10.f,-11.f,-12.f,-13.f,-22.f,-22.f,-22.f},/*8000*/
   {-10.f,-10.f,-10.f,-10.f,-10.f,-10.f,-10.f,-11.f,-22.f,-22.f,-22.f},/*11500*/
   {-10.f,-10.f,-10.f,-10.f,-10.f,-10.f,-10.f,-10.f,-20.f,-21.f,-22.f},/*16000*/
  },

  1,/*noisemaskp */
  -10.f,  /* suppress any noise curve over maxspec+n */
  .5f,   /* low window */
  .5f,   /* high window */
  5,
  5,
  {.000f, 0.f,/*63*/
   .000f, 0.f,/*88*/
   .000f, 0.f,/*125*/
   .000f, 0.f,/*175*/
   .000f, 0.f,/*250*/
   .000f, 0.f,/*350*/
   .000f, 0.f,/*500*/
   .300f, 0.f,/*700*/
   .500f, 0.f,/*1000*/
   .500f, 0.f,/*1400*/
   .500f, 0.f,/*2000*/
   .500f, 0.f,/*2800*/
   .600f, 0.f,/*4000*/
   .700f, 0.f,/*5600*/
   .850f, 0.f,/*8000*/
   .900f, 0.f,/*11500*/
   .900f, 0.f,/*16000*/
  },
 
  95.f,  /* even decade + 5 is important; saves an rint() later in a
            tight loop) */
  -22.,

  -0., -.004   /* attack/decay control */
};

static vorbis_info_psy _psy_set_A={
  1,/*athp*/
  1,/*decayp*/

  -100.f,
  -140.f,

  8,

  /*     0  1  2   3   4   5   6   7   8   9  10  11  12  13  14  15   16   */
  /* x: 63 88 125 175 250 350 500 700 1k 1.4k 2k 2.8k 4k 5.6k 8k 11.5k 16k Hz */
  /* y: 0 10 20 30 40 50 60 70 80 90 100 dB */
   1,/* tonemaskp */
  /*  0   10   20   30   40   50   60   70   80   90   100 */
  {
   {-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f}, /*63*/
   {-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f}, /*88*/
   {-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f}, /*125*/
   //   {-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-100.}, /*175*/
   //   {-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-100.}, /*250*/
   //   {-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-100.}, /*350*/
   //   {-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-100.}, /*500*/
   //   {-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-99.,-100.}, /*700*/

   //   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*63*/
   //   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*88*/
   //   {-30.,-35.,-35.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*125*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*175*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*250*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*350*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*500*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*700*/

   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*1000*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*1400*/
   {-40.f,-40.f,-40.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*2000*/
   {-40.f,-40.f,-40.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*2800*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*4000*/
   {-30.f,-35.f,-35.f,-40.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*5600*/

   {-20.f,-25.f,-30.f,-35.f,-40.f,-50.f,-60.f,-70.f,-80.f,-90.f,-100.f}, /*8000*/
   {-20.f,-25.f,-30.f,-35.f,-35.f,-45.f,-50.f,-60.f,-70.f,-80.f,-90.f}, /*11500*/
   {-20.f,-24.f,-26.f,-32.f,-35.f,-45.f,-50.f,-60.f,-70.f,-80.f,-90.f}, /*16000*/

  },

  1,/* peakattp */
  {{-14.f,-16.f,-18.f,-19.f,-20.f,-21.f,-22.f,-22.f,-24.f,-24.f,-24.f},/*63*/
   {-14.f,-16.f,-18.f,-19.f,-20.f,-21.f,-22.f,-22.f,-24.f,-24.f,-24.f},/*88*/
   {-14.f,-16.f,-18.f,-19.f,-20.f,-21.f,-22.f,-22.f,-24.f,-24.f,-24.f},/*125*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-24.f,-24.f,-24.f},/*175*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-24.f,-24.f,-24.f},/*250*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-22.f,-24.f,-24.f},/*350*/
   {-10.f,-10.f,-10.f,-10.f,-16.f,-16.f,-18.f,-20.f,-22.f,-24.f,-24.f},/*500*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-24.f,-24.f},/*700*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-24.f,-24.f},/*1000*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-24.f,-24.f},/*1400*/
   {-10.f,-10.f,-10.f,-10.f,-14.f,-14.f,-16.f,-20.f,-22.f,-24.f,-24.f},/*2000*/
   {-10.f,-10.f,-10.f,-12.f,-16.f,-16.f,-16.f,-20.f,-22.f,-24.f,-24.f},/*2400*/
   {-10.f,-10.f,-10.f,-12.f,-16.f,-16.f,-16.f,-20.f,-22.f,-24.f,-24.f},/*4000*/
   {-10.f,-10.f,-10.f,-12.f,-12.f,-14.f,-16.f,-18.f,-22.f,-24.f,-24.f},/*5600*/
   {-10.f,-10.f,-10.f,-10.f,-10.f,-14.f,-16.f,-18.f,-22.f,-24.f,-24.f},/*8000*/
   {-10.f,-10.f,-10.f,-10.f,-10.f,-14.f,-16.f,-18.f,-22.f,-24.f,-24.f},/*11500*/
   {-10.f,-10.f,-10.f,-10.f,-10.f,-12.f,-16.f,-18.f,-22.f,-24.f,-24.f},/*16000*/
  },

  1,/*noisemaskp */
  -0.f,  /* suppress any noise curve over maxspec+n */
  .5f,   /* low window */
  .5f,   /* high window */
  25,
  25,
  {.000f, 0.f, /*63*/
   .000f, 0.f, /*88*/
   .000f, 0.f, /*125*/
   .000f, 0.f, /*175*/
   .000f, 0.f, /*250*/
   .000f, 0.f, /*350*/
   .000f, 0.f, /*500*/
   .200f, 0.f, /*700*/
   .300f, 0.f, /*1000*/
   .400f, 0.f, /*1400*/
   .400f, 0.f, /*2000*/
   .400f, 0.f, /*2800*/
   .700f, 0.f, /*4000*/
   .850f, 0.f, /*5600*/
   .900f, 0.f, /*8000*/
   .900f, 0.f, /*11500*/
   .900f, 0.f, /*16000*/
  },
 
  95.f,  /* even decade + 5 is important; saves an rint() later in a
            tight loop) */
  -28.,

  -0.f, -.004f,   /* attack/decay control */

};

/* with GNUisms, this could be short and readable. Oh well */
static vorbis_info_time0 _time_set0A={0};
static vorbis_info_floor0 _floor_set0A={12, 44100,  64, 10,130, 2, {0,1},
                                        0.199f, .285f};
static vorbis_info_floor0 _floor_set1A={30, 44100, 256, 12,150, 2, {2,3}, 
                                        .082f, .126f};
static vorbis_info_residue0 _residue_set0A={0,96,16,6,4,
					    {0,1,1,1,1,1},
					    {6,7,8,9,10},
					    
					    {0,99999,9999,9999,9999},
					    {999.f,1.5f,3.5f,15.5f,26.5f},
					    {4,4,4,4,4},
					    {99,99,99,99,99}};

static vorbis_info_residue0 _residue_set1A={0, 960, 32,10,5,
					    {0,1,1,1,1,1,1,1,1,1},
					    {11,12,13,14,15,16,17,18,19},
					   
					    {0,8,9999,16,9999,
					     24,9999,9999,9999},
					    {999.f,1.5f,1.5f,2.5f,2.5f,
					     6.5f,6.5f,12.5f,22.5f},
					    {5,5,5,5,5,5,5,5,5},
					    {99,99,99,99,99,99,99,99,99}};

static vorbis_info_mapping0 _mapping_set0A={1, {0,0}, {0}, {0}, {0}, {0}};
static vorbis_info_mapping0 _mapping_set1A={1, {0,0}, {0}, {1}, {1}, {1}};
static vorbis_info_mode _mode_set0A={0,0,0,0};
static vorbis_info_mode _mode_set1A={1,0,0,1};

/* CD quality stereo, no channel coupling */
codec_setup_info info_A={

  /* smallblock, largeblock */
  {256, 2048}, 
  /* modes,maps,times,floors,residues,books,psys */
  2,          2,    1,     2,       2,   20,   2,
  /* modes */
  {&_mode_set0A,&_mode_set1A},
  /* maps */
  {0,0},{&_mapping_set0A,&_mapping_set1A},
  /* times */
  {0,0},{&_time_set0A},
  /* floors */
  {0,0},{&_floor_set0A,&_floor_set1A},
  /* residue */
  {0,0},{&_residue_set0A,&_residue_set1A},
  /* books */
  {&_vq_book_lsp12_0,       /* 0 */
   &_vq_book_lsp12_1,       /* 1 */
   &_vq_book_lsp30_0,      /* 2 */
   &_vq_book_lsp30_1,      /* 3 */

   &_huff_book_res0_128_128aux,
   &_huff_book_res0_128_1024aux,

   &_vq_book_res0_128_128_1,
   &_vq_book_res0_128_128_2,
   &_vq_book_res0_128_128_3,
   &_vq_book_res0_128_128_4,
   &_vq_book_res0_128_128_5,

   &_vq_book_res0_128_1024_1,
   &_vq_book_res0_128_1024_2,
   &_vq_book_res0_128_1024_3,
   &_vq_book_res0_128_1024_4,
   &_vq_book_res0_128_1024_5,
   &_vq_book_res0_128_1024_6,
   &_vq_book_res0_128_1024_7,
   &_vq_book_res0_128_1024_8,
   &_vq_book_res0_128_1024_9,

  },
  /* psy */
  {&_psy_set_A0,&_psy_set_A},
  /* thresh sample period, preecho clamp trigger threshhold, range, minenergy */
  256, 30.f, -30.f, -96.f,

  -10., 

  0,
};

#define PREDEF_INFO_MAX 0

#endif
