#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void flood(int,int,int,int);
int main() {
	printf("\nluis neupane - flood fill");
int gd=DETECT,gm;
initgraph(&gd,&gm,"NULL");
rectangle(50,50,250,250);
flood(55,55,10,0);
getch();
return 0; }
void flood(int x, int y,int fillColor, int defaultColor)
{ if(getpixel(x,y)==defaultColor)
{ delay(.02);
putpixel(x,y,fillColor);
flood(x+1,y,fillColor,defaultColor);
flood(x-1,y,fillColor,defaultColor);
flood(x,y+1,fillColor,defaultColor);
flood(x,y-1,fillColor,defaultColor); } }
