#ifndef   DISPLAY
#define   DISPLAY

#include <stdconst.h>
#include "aclock.h"
#include "spi.h"
/*
 * SPI Transmit Mode
 * COMMAND: Clears Data
 * DATA: Sets Data
 */

#define true 1
#define false 0

#define FANCY_FACTOR 7

void	DisplayInit(void);
void	DisplayExit(void);
void	DisplayErase(void);
void	DisplayUpdateSync(void);
void	DisplayChar(UBYTE X,UBYTE Y,UBYTE Char);
void	DisplayNum(UBYTE X,UBYTE Y,ULONG Num);
void	DisplayString(UBYTE X,UBYTE Y,UBYTE *pString);
void	DisplaySetPixel(UBYTE X,UBYTE Y);
void	DisplayClrPixel(UBYTE X,UBYTE Y);
void	DisplayLineX(UBYTE X1,UBYTE X2,UBYTE Y);
void	DisplayLineY(UBYTE X,UBYTE Y1,UBYTE Y2);

UBYTE	DisplayWrite(UBYTE type, UBYTE *data, UWORD length);

void DisplayAnalogClock(UBYTE cx, UBYTE cy, UBYTE r, UBYTE hh, UBYTE mm, UBYTE ss);
void DisplayDigitalClock(UBYTE cx, UBYTE cy, UBYTE hh, UBYTE mm, UBYTE ss);

#endif
