/*----------------------------------------------------------------------------

Copyright (C) 2026, KenKen, all right reserved.

This program supplied herewith by KenKen is free software; you can
redistribute it and/or modify it under the terms of the same license written
here and only for non-commercial purpose.

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of FITNESS FOR A PARTICULAR
PURPOSE. The copyright owner and contributors are NOT LIABLE for any damages
caused by using this program.

----------------------------------------------------------------------------*/
#define VERTICAL 0
#define HORIZONTAL 1
#define LCD_ALIGNMENT VERTICAL
//#define LCD_ALIGNMENT HORIZONTAL

#if LCD_ALIGNMENT == VERTICAL
	#define X_RES 240 // 横方向解像度
	#define Y_RES 320 // 縦方向解像度
#else
	#define X_RES 320 // 横方向解像度
	#define Y_RES 240 // 縦方向解像度
#endif

// LCD settings
#define LCD_CS 13
#define LCD_DC 10
#define LCD_RESET 11
#define LCD_SPI_TX 15
#define LCD_SPI_RX 12
#define LCD_SPI_SCK 14
#define LCD_SPICH spi1
#define LCD_SPI_BAUDRATE (50*1000*1000)
#define LCD_SPI_BAUDRATE_R (15*1000*1000)

void LCD_WriteComm(unsigned char comm);
void LCD_WriteData(unsigned char data);
void LCD_WriteData2(unsigned short data);
void LCD_WriteDataN(unsigned char *b,int n);
void LCD_WriteData_notfinish(unsigned char data);
void LCD_WriteData2_notfinish(unsigned short data);
void LCD_WriteDataN_notfinish(unsigned char *b,int n);
void checkSPIfinish(void);
void LCD_Init(void);
void LCD_SetCursor(unsigned short x, unsigned short y);
void LCD_Clear(unsigned short color);
void drawPixel(unsigned short x, unsigned short y, unsigned short color);
void LCD_setAddrWindow(unsigned short x,unsigned short y,unsigned short w,unsigned short h);
void LCD_continuous_output(unsigned short x,unsigned short y,unsigned short color,int n);
unsigned short getColor(unsigned short x, unsigned short y);
void lcd_display_init(void);

extern int lcd180turn;
extern int lcdinvert;