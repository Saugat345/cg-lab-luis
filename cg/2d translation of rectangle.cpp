#include <stdio.h>
#include <graphics.h>
int main()
{ int gd = DETECT, gm, s;
initgraph(&gd, &gm, (char *)"");
int x1 = 200, y1 = 150, x2 = 300, y2 = 250;
int tx = 50, ty = 50;
	printf("\n2D translation of rectangle - luis Neupane");
printf("\nRectangle before translation\n");
rectangle(x1, y1, x2, y2);
printf("\nRectangle after translation\n");
rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
getch();
closegraph();
return 0; }
