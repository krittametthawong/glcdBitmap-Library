/*--------------------------------------------------------------------------*/
// Filename			: 	glcdRGBBitmap.h
// C compiler		: 	avr-gcc
// Description		: 	Draw a PROGMEM-resident 16-bit image (RGB 5/6/5) at the specified (x,y) position.  
// 					  	For 16-bit display devices; no color reduction performed. 
//						Compatible for ATX-2, POP-7, POP-X2, IPST-SE, POP-XT and Unicon Board.
// Original Author	: 	Adafruit Industries
// Modified Author	: 	Mr.Krittamet Thawong
// Version			: 	1.0
// Release Date		: 	July 26, 2021
/*--------------------------------------------------------------------------*/

#ifndef _GLCDRGBBITMAP_H_
#define _GLCDRGBBITMAP_H_

#if defined(ARDUINO) || (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
//#include <WApplet.c>
#endif

#define isATX2 (defined (_ATX2_H_) || defined (_ATX2_GLCD_H_))
#define isIPST (defined (_IPST_H_) || defined (_IPST_GLCD_H_))
#define isPOPX2 (defined (_POPX2_H_) || defined (_IPST_GLCD_H_))
#define isPOP7 (defined (_POP7_H_) || defined (_IPST_GLCD_H_))
#define isPOPXT (defined (_POPXT_H_))
#define isUNICON (defined (_UNICON_H_))

#if isATX2 || isIPST || isPOPX2 || isPOP7 || isPOPXT || isUNICON
void glcdRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[], int16_t w, int16_t h) {
    glcdConfig();
    for(int16_t j=0; j<h; j++, y++) {
        for(int16_t i=0; i<w; i++ ) {
            __tft.drawPixel(x+i, y, pgm_read_word(&bitmap[j * w + i]));
        }
    }
}
#endif

#endif