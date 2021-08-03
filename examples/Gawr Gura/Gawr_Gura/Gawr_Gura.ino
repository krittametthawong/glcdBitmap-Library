
/*
 * Select INEX Board
 * */
#include <ipst.h>
//#include <ATX2.h>
//#include <pop7.h>
//#include <popx2.h>

#include "glcdBitmap.h"
#include "GawrGura.c"
void setup() {
	// XIO();		If use ATX-2 Board, remove "//" this comment.
}
void loop() {
  glcdClear();
  glcdMode(0);
  glcdBitmap(1, 34, GawrGura, 126, 126);
  delay(3000);
  glcdClear();
  glcdMode(1);
  glcdBitmap(17, 2, GawrGura, 126, 126);
  delay(3000);
  glcdClear();
  glcdMode(2);
  glcdBitmap(1, 34, GawrGura, 126, 126);
  delay(3000);
  glcdClear();
  glcdMode(3);
  glcdBitmap(17, 2, GawrGura, 126, 126);
  delay(3000);
}
