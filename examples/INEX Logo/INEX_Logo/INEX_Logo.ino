
/*
 * Select INEX Board
 * */
#include <ipst.h>
//#include <ATX2.h>
//#include <pop7.h>
//#include <popx2.h>

#include "glcdBitmap.h"
#include "INEXLogo.c"
void setup() {
	// XIO();		If use ATX-2 Board, remove "//" this comment.
}
void loop() {
  glcdClear();
  glcdMode(0);
  glcdRGBBitmap(0, 33, INEXLogo, 128, 94);
  delay(3000);
  glcdClear();
  glcdMode(1);
  glcdRGBBitmap(16, 17, INEXLogo, 128, 94);
  delay(3000);
  glcdClear();
  glcdMode(2);
  glcdRGBBitmap(0, 33, INEXLogo, 128, 94);
  delay(3000);
  glcdClear();
  glcdMode(3);
  glcdRGBBitmap(16, 17, INEXLogo, 128, 94);
  delay(3000);
}
