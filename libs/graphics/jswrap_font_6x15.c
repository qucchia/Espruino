/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2013 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * This file is designed to be parsed during the build process
 *
 * Contains Custom Fonts
 * ----------------------------------------------------------------------------
 */

#include "jswrap_font_6x15.h"
#include "jswrap_graphics.h"

// Generated from HaxorNarrow-15.bdf at https://github.com/Tecate/bitmap-fonts with tweaks by Gordon Williams for ISO8859-1 support
// -ucw.cz-Haxor-Narrow-R-Normal--15-120-72-72-M-72-iso8859-2// BOUNDINGBOX 8 17 0 -3// _ASCENT 13// _DESCENT 3
// Charset iso8859


static const unsigned char fontBitmap[] = { 
0, 0, 0, 0, 0, 0, 0, 15, 230, 0, 0, 36, 0, 112, 0, 0, 
1, 32, 3, 128, 0, 0, 0, 16, 1, 60, 3, 192, 60, 240, 15, 0, 
242, 0, 32, 0, 0, 3, 136, 8, 136, 17, 16, 127, 240, 68, 64, 136, 
128, 142, 0, 0, 6, 6, 18, 16, 36, 192, 50, 96, 25, 32, 66, 67, 
3, 0, 0, 0, 60, 14, 132, 34, 8, 70, 16, 115, 32, 1, 128, 30, 
128, 0, 9, 0, 28, 0, 0, 0, 7, 192, 48, 96, 128, 34, 0, 32, 
0, 8, 0, 136, 2, 12, 24, 7, 192, 0, 0, 36, 0, 48, 1, 248, 
0, 192, 2, 64, 0, 0, 2, 0, 4, 0, 8, 0, 254, 0, 32, 0, 
64, 0, 128, 0, 0, 0, 72, 0, 224, 0, 0, 16, 0, 32, 0, 64, 
0, 128, 1, 0, 0, 0, 0, 96, 0, 192, 0, 0, 1, 0, 12, 0, 
96, 3, 0, 24, 0, 192, 0, 0, 0, 254, 2, 2, 8, 98, 17, 132, 
16, 16, 31, 192, 0, 0, 64, 1, 0, 4, 0, 15, 254, 0, 0, 16, 
56, 65, 144, 132, 33, 16, 65, 192, 128, 0, 4, 4, 16, 4, 33, 8, 
66, 16, 123, 192, 0, 0, 12, 0, 104, 1, 16, 12, 32, 63, 248, 0, 
128, 0, 1, 240, 130, 32, 132, 65, 8, 130, 16, 248, 0, 0, 63, 224, 
136, 33, 16, 66, 32, 130, 62, 0, 0, 16, 0, 32, 120, 67, 0, 152, 
1, 192, 0, 0, 3, 222, 8, 66, 16, 132, 33, 8, 61, 224, 0, 0, 
240, 130, 16, 132, 33, 8, 66, 15, 248, 0, 0, 24, 96, 48, 192, 0, 
0, 194, 129, 134, 0, 0, 0, 128, 2, 128, 8, 128, 32, 128, 128, 128, 
0, 0, 136, 1, 16, 2, 32, 4, 64, 8, 128, 17, 0, 0, 1, 1, 
1, 4, 1, 16, 1, 64, 1, 0, 0, 0, 64, 1, 0, 2, 9, 132, 
32, 8, 128, 14, 0, 0, 0, 63, 224, 128, 33, 28, 66, 68, 132, 137, 
7, 240, 0, 0, 7, 248, 49, 0, 130, 0, 196, 0, 127, 128, 0, 15, 
254, 16, 132, 33, 8, 66, 16, 123, 192, 0, 1, 255, 4, 1, 8, 2, 
16, 4, 16, 16, 0, 0, 255, 225, 0, 66, 0, 130, 2, 3, 248, 0, 
0, 63, 248, 66, 16, 132, 33, 8, 66, 0, 128, 0, 15, 254, 17, 0, 
34, 0, 68, 0, 128, 0, 0, 1, 255, 4, 1, 8, 2, 16, 132, 17, 
240, 0, 0, 255, 224, 8, 0, 16, 0, 32, 15, 254, 0, 0, 32, 8, 
127, 240, 128, 32, 0, 2, 3, 4, 1, 8, 2, 16, 4, 63, 240, 0, 
0, 255, 224, 8, 0, 40, 1, 140, 12, 6, 0, 0, 63, 248, 0, 16, 
0, 32, 0, 64, 0, 128, 0, 15, 254, 12, 0, 6, 0, 48, 0, 255, 
224, 0, 3, 255, 131, 0, 1, 128, 0, 192, 63, 248, 0, 0, 127, 193, 
0, 66, 0, 132, 1, 7, 252, 0, 0, 63, 248, 66, 0, 132, 1, 8, 
1, 224, 0, 0, 7, 252, 16, 4, 32, 40, 64, 32, 127, 160, 0, 3, 
255, 132, 32, 8, 64, 16, 224, 30, 56, 0, 0, 112, 65, 16, 66, 16, 
132, 17, 4, 28, 0, 0, 32, 0, 64, 0, 255, 225, 0, 2, 0, 0, 
0, 15, 252, 0, 4, 0, 8, 0, 16, 255, 192, 0, 3, 224, 0, 60, 
0, 6, 0, 240, 62, 0, 0, 0, 255, 128, 0, 192, 6, 0, 48, 0, 
24, 0, 12, 63, 224, 0, 0, 192, 224, 102, 0, 48, 1, 152, 12, 14, 
0, 0, 56, 0, 12, 0, 7, 224, 48, 3, 128, 0, 0, 8, 6, 16, 
52, 35, 136, 88, 16, 192, 32, 0, 3, 255, 196, 0, 136, 1, 0, 0, 
48, 0, 24, 0, 12, 0, 6, 0, 3, 0, 1, 0, 0, 16, 2, 32, 
4, 127, 248, 0, 0, 32, 1, 128, 4, 0, 6, 0, 2, 0, 0, 0, 
0, 16, 0, 32, 0, 64, 0, 128, 1, 0, 2, 0, 0, 32, 0, 32, 
0, 32, 0, 0, 0, 39, 0, 145, 1, 34, 2, 72, 3, 248, 0, 0, 
255, 224, 16, 128, 64, 128, 129, 0, 252, 0, 0, 3, 240, 8, 16, 16, 
32, 32, 64, 33, 0, 0, 0, 252, 2, 4, 4, 8, 4, 32, 255, 224, 
0, 0, 63, 0, 145, 1, 34, 2, 68, 3, 144, 0, 0, 16, 0, 255, 
194, 64, 4, 128, 9, 0, 0, 0, 3, 172, 8, 164, 17, 72, 34, 144, 
121, 32, 129, 128, 0, 31, 252, 2, 0, 8, 0, 16, 0, 31, 192, 0, 
0, 1, 1, 2, 19, 252, 0, 8, 0, 16, 0, 0, 0, 32, 0, 32, 
0, 65, 0, 147, 254, 0, 0, 127, 240, 1, 0, 6, 0, 50, 0, 131, 
0, 0, 0, 4, 32, 8, 127, 240, 0, 32, 0, 64, 0, 0, 255, 1, 
0, 3, 252, 4, 0, 7, 240, 0, 0, 63, 192, 32, 0, 128, 1, 0, 
1, 252, 0, 0, 7, 224, 16, 32, 32, 64, 64, 128, 126, 0, 0, 3, 
255, 2, 16, 8, 16, 16, 32, 31, 128, 0, 0, 126, 1, 2, 2, 4, 
2, 16, 15, 252, 0, 0, 63, 192, 32, 0, 128, 1, 0, 1, 0, 0, 
0, 6, 32, 18, 32, 36, 64, 68, 128, 70, 0, 0, 2, 0, 63, 240, 
8, 16, 16, 32, 32, 64, 0, 0, 254, 0, 2, 0, 4, 0, 16, 15, 
240, 0, 0, 56, 0, 14, 0, 3, 0, 56, 3, 128, 0, 0, 15, 192, 
0, 96, 7, 0, 1, 128, 252, 0, 0, 3, 12, 1, 32, 1, 128, 4, 
128, 48, 192, 0, 0, 240, 96, 27, 0, 8, 0, 96, 15, 0, 0, 0, 
32, 192, 66, 128, 153, 1, 66, 3, 4, 0, 0, 57, 56, 141, 137, 0, 
16, 0, 7, 255, 0, 0, 16, 1, 35, 98, 57, 56, 0, 0, 8, 0, 
32, 0, 64, 0, 64, 0, 64, 0, 128, 2, 0, 0, 0, 192, 2, 64, 
4, 128, 6, 0, 0, 0, 46, 0, 84, 0, 72, 0, 0, 2, 160, 5, 
64, 5, 0, 0, 0, 16, 0, 64, 0, 0, 0, 7, 250, 49, 2, 130, 
0, 196, 0, 127, 128, 0, 1, 254, 12, 64, 160, 130, 49, 0, 31, 224, 
0, 0, 127, 147, 16, 72, 32, 76, 64, 7, 248, 0, 0, 31, 232, 196, 
10, 8, 35, 16, 1, 254, 0, 0, 15, 242, 98, 1, 4, 9, 136, 0, 
255, 0, 0, 1, 254, 76, 65, 96, 129, 49, 0, 31, 224, 0, 1, 255, 
4, 1, 40, 2, 144, 4, 16, 16, 0, 3, 254, 8, 2, 80, 6, 160, 
10, 32, 32, 0, 0, 31, 242, 64, 18, 128, 41, 0, 65, 1, 0, 0, 
15, 254, 16, 132, 161, 10, 66, 16, 128, 32, 0, 31, 252, 33, 10, 66, 
26, 132, 37, 0, 64, 0, 1, 255, 202, 16, 132, 33, 40, 66, 16, 4, 
0, 1, 32, 9, 127, 240, 128, 32, 0, 2, 0, 151, 255, 72, 2, 0, 
0, 160, 10, 127, 242, 128, 32, 0, 20, 1, 15, 254, 80, 4, 0, 1, 
255, 194, 16, 132, 33, 4, 4, 7, 240, 0, 0, 15, 254, 12, 0, 134, 
2, 3, 0, 255, 224, 0, 3, 255, 163, 0, 33, 128, 128, 192, 63, 248, 
0, 0, 127, 193, 0, 74, 0, 164, 1, 7, 252, 0, 0, 31, 241, 64, 
20, 128, 37, 0, 65, 255, 0, 0, 7, 252, 80, 5, 32, 9, 64, 20, 
127, 192, 0, 3, 254, 40, 2, 16, 4, 160, 8, 63, 224, 0, 2, 16, 
2, 64, 3, 0, 6, 0, 18, 0, 66, 0, 0, 0, 127, 244, 132, 5, 
8, 18, 28, 3, 199, 0, 0, 31, 248, 128, 10, 128, 18, 0, 33, 255, 
128, 0, 7, 254, 0, 2, 64, 5, 0, 8, 127, 224, 0, 1, 255, 136, 
0, 160, 1, 32, 2, 159, 248, 0, 0, 255, 196, 0, 64, 0, 144, 1, 
15, 252, 0, 0, 28, 0, 6, 1, 3, 244, 24, 1, 192, 0, 0, 32, 
0, 64, 2, 255, 249, 0, 2, 0, 0, 0, 7, 254, 16, 0, 34, 8, 
68, 16, 116, 32, 7, 128, 0, 0, 255, 0, 128, 10, 0, 36, 0, 4, 
0, 0, 0, 19, 128, 72, 130, 145, 9, 36, 1, 252, 0, 0, 4, 224, 
82, 33, 36, 65, 73, 0, 127, 0, 0, 1, 56, 36, 136, 41, 16, 146, 
64, 31, 192, 0, 0, 78, 5, 34, 2, 68, 20, 144, 7, 240, 0, 0, 
9, 193, 36, 69, 72, 132, 146, 0, 254, 0, 0, 4, 224, 18, 32, 36, 
64, 63, 0, 145, 1, 34, 1, 200, 0, 0, 7, 224, 16, 32, 32, 112, 
64, 144, 66, 0, 0, 1, 248, 36, 8, 40, 16, 144, 32, 16, 128, 0, 
0, 126, 1, 34, 10, 68, 36, 136, 7, 32, 0, 0, 31, 128, 72, 128, 
145, 193, 34, 65, 200, 0, 0, 7, 224, 82, 32, 36, 65, 72, 128, 114, 
0, 0, 1, 248, 36, 136, 41, 16, 146, 32, 28, 128, 0, 0, 1, 1, 
2, 11, 252, 32, 8, 0, 16, 0, 0, 0, 65, 64, 132, 255, 4, 2, 
0, 4, 0, 0, 3, 248, 8, 8, 16, 16, 16, 69, 255, 204, 0, 0, 
0, 3, 240, 8, 16, 16, 32, 144, 131, 255, 130, 0, 0, 0, 3, 252, 
2, 0, 40, 0, 144, 0, 31, 192, 0, 0, 255, 8, 128, 10, 0, 36, 
0, 7, 240, 0, 0, 31, 128, 64, 130, 129, 9, 2, 1, 248, 0, 0, 
7, 224, 80, 33, 32, 65, 64, 128, 126, 0, 0, 1, 248, 20, 8, 72, 
16, 80, 33, 31, 128, 0, 0, 126, 5, 2, 2, 4, 20, 8, 7, 224, 
0, 0, 8, 0, 16, 1, 172, 3, 88, 0, 128, 1, 0, 0, 0, 31, 
225, 16, 1, 64, 4, 128, 0, 128, 0, 0, 3, 248, 32, 8, 160, 16, 
128, 64, 63, 192, 0, 1, 252, 0, 4, 16, 8, 64, 32, 31, 224, 0, 
0, 127, 2, 1, 8, 2, 8, 8, 39, 248, 0, 0, 31, 192, 128, 64, 
0, 130, 2, 1, 254, 0, 0, 7, 131, 0, 216, 64, 65, 3, 0, 120, 
0, 0, 1, 0, 31, 248, 4, 9, 8, 28, 16, 32, 0, 0, 
};

static const unsigned char fontWidths[] = { 
3, 2, 6, 8, 8, 8, 8, 3, 5, 5, 6, 8, 3, 6, 3, 7, 
7, 5, 6, 6, 7, 6, 6, 6, 6, 6, 3, 3, 6, 7, 6, 7, 
7, 6, 6, 6, 6, 6, 6, 6, 6, 4, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 8, 6, 6, 6, 4, 7, 4, 6, 7, 
4, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 4, 2, 4, 8, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
5, 0, 4, 4, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 
6, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 6, 6, 6, 6, 7, 
6, 6, 6, 6, 6, 6, 8, 6, 6, 6, 6, 6, 6, 6, 6, 7, 
7, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 6, 6, 6, 6, 
};


/*JSON{
  "type" : "method",
  "class" : "Graphics",
  "name" : "setFont6x15",
  "generate" : "jswrap_graphics_setFont6x15",
  "params" : [
    ["scale","int","(optional) If >1 the font will be scaled up by that amount."]
  ],
  "return" : ["JsVar","The instance of Graphics this was called on, to allow call chaining."],
  "return_object" : "Graphics"
}
Set the current font
*/
JsVar *jswrap_graphics_setFont6x15(JsVar *parent, int scale) {
  if (scale<1) scale=1;
  JsVar *bitmap = jsvNewNativeString(fontBitmap, sizeof(fontBitmap));
  JsVar *widths = jsvNewNativeString(fontWidths, sizeof(fontWidths));
  JsVar *r = jswrap_graphics_setFontCustom(parent, bitmap, 32, widths, 15 + (scale<<8)); // 1 bit
  jsvUnLock2(bitmap, widths);
  return r;
}
