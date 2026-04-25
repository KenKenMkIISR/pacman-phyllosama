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
void set_palette(unsigned char n,unsigned char b,unsigned char r,unsigned char g);
//グラフィック用カラーパレット設定

void pset(int x,int y,unsigned char c);
// (x,y)の位置にカラーcで点を描画

void putbmpmn(int x,int y,unsigned short m,unsigned short n,const unsigned char bmp[]);
// 横m*縦nドットのキャラクターを座標x,yに表示
// unsigned char bmp[m*n]配列に、単純にカラー番号を並べる
// カラー番号が0の部分は透明色として扱う

void putbmpmn2(int x,int y,unsigned short m,unsigned short n,const unsigned char bmp[],int SX,int SY,int EX,int EY);
// 横m*縦nドットのキャラクターを座標x,yに表示
// unsigned char bmp[m*n]配列に、単純にカラー番号を並べる
// カラー番号が0の部分は透明色として扱う
// 表示範囲　(SX,SY)-(EX,EY)

void clrbmpmn(int x,int y,unsigned short m,unsigned short n);
// 縦m*横nドットのキャラクター消去
// カラー0で塗りつぶし

void gline(int x1,int y1,int x2,int y2,unsigned char c);
// (x1,y1)-(x2,y2)にカラーcで線分を描画

void hline(int x1,int x2,int y,unsigned char c);
// (x1,y)-(x2,y)への水平ラインを高速描画

void circle(int x0,int y0,unsigned int r,unsigned char c);
// (x0,y0)を中心に、半径r、カラーcの円を描画

void boxfill(int x1,int y1,int x2,int y2,unsigned char c);
// (x1,y1),(x2,y2)を対角線とするカラーcで塗られた長方形を描画

void circlefill(int x0,int y0,unsigned int r,unsigned char c);
// (x0,y0)を中心に、半径r、カラーcで塗られた円を描画

void putfont(int x,int y,unsigned char c,int bc,unsigned char n);
//8*8ドットのアルファベットフォント表示
//座標（x,y)、カラー番号c
//bc:バックグランドカラー、負数の場合無視
//n:文字番号

void printstr(int x,int y,unsigned char c,int bc,unsigned char *s);
//座標(x,y)からカラー番号cで文字列sを表示、bc:バックグランドカラー

void printnum(int x,int y,unsigned char c,int bc,unsigned int n);
//座標(x,y)にカラー番号cで数値nを表示、bc:バックグランドカラー

void printnum2(int x,int y,unsigned char c,int bc,unsigned int n,unsigned char e);
//座標(x,y)にカラー番号cで数値nを表示、bc:バックグランドカラー、e桁で表示

unsigned int g_color(int x,int y);
//座標(x,y)の色情報を返す、画面外は0を返す
//パレット番号ではないことに注意

void init_graphic(void);
//グラフィックLCD使用開始

extern unsigned short palette[];
//パレット用配列
