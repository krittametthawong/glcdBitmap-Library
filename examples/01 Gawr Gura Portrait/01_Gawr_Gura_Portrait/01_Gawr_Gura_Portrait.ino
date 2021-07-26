
/*
 * Select INEX Board
 * */
#include <ipst.h>
//#include <ATX2.h>
//#include <pop7.h>
//#include <popx2.h>

#include "glcdRGBBitmap.h"
#include "Gawr_Gura_Portrait.c"
void setup() {

}
void loop() {
  glcdClear();
  glcdMode(0);
  glcdRGBBitmap(4, 40, Gawr_Gura_Portrait, 120, 120);
  delay(3000);
  glcdClear();
  glcdMode(1);
  glcdRGBBitmap(20, 4, Gawr_Gura_Portrait, 120, 120);
  delay(3000);
  glcdClear();
  glcdMode(2);
  glcdRGBBitmap(4, 40, Gawr_Gura_Portrait, 120, 120);
  delay(3000);
  glcdClear();
  glcdMode(3);
  glcdRGBBitmap(20, 4, Gawr_Gura_Portrait, 120, 120);
  delay(3000);
}
