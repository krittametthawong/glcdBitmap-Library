# Bitmap Graphics Library for INEX Microcontroller
Draw a PROGMEM-resident 16-bit image (Applicable for RGB 5/6/5 and BGR 5/6/5) at the specified (x,y) position.  
For 16-bit display devices; no color reduction performed. 
Compatible for ATX-2, POP-7, POP-X2, IPST-SE, POP-XT and Unicon Board (INEX Board).

This library was created to draw bitmap image graphics (Bitmap) using the 16-bit image conversion tool ImageConvertor565. (Already appended in glcdBitmap library folder)
This library is compatible with IPST-SE, POP-X2, POP-7 or ATX2 boards.

First of all, it must be understood that Graphical LCD display. The color of the INEX board shows line graphics and 65,536 color backgrounds, which define the color bits as BGR (5-6-5), that is, 5 bits of blue followed by 6 bits of green, and ends with the value of 5 bits of red because There are two versions of this type of display produced by color graphic LCD manufacturers, with BGR and RGB color bits arranged.

If users uses the ATX-2, POP-7, POP-X2 or IPST-SE circuit board and try to determine the color of the image or the font, then find that the resulting color is not correct, Call the function glcdSetColorWordRGB(); contained in setup() at the beginning of the program.
Most images have a color value of 24 bits (8-8-8 bits), i.e. 8 bits of red followed by 8 bits of green and ending with 8 bits of blue. 16 bit first (5-6-5 bit) using a conversion tool named ImageConvertor565 (Already appended in glcdBitmap library folder)


Tools for 16-bit Image Convertor (ImageConverter565)
<br/> <img src="https://github.com/krittametthawong/glcdBitmap-Library/blob/main/ImageConverter565%20Tools/imageconvertor_example01.jpg" width="600"> 

Example (on IPST-SE Board)
1. INEX Logo
<br/> <img src="https://github.com/krittametthawong/glcdBitmap-Library/blob/main/examples/INEX%20Logo/inexlogo.jpg" width="300">
2. Gawr Gura
<br/> <img src="https://github.com/krittametthawong/glcdBitmap-Library/blob/main/examples/Gawr%20Gura/gawrgura.jpg" width="300"> 
