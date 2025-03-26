#include <graphics.h>
#include <stdio.h>
#include <math.h>


void drawLineDDA(int x1, int y1, int x2, int y2) {
	
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    float xIncrement = (float)dx / steps;
    float yIncrement = (float)dy / steps;

    float x = x1, y = y1;
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xIncrement;
        y += yIncrement;
        delay(2);  // Slow down drawing for better visualization
    }
}

// Function to draw a checkerboard
void drawCheckerboard(int startX, int startY, int size, int rows, int cols) {
    for (int i = 0; i <= rows; i++) {
        drawLineDDA(startX, startY + i * size, startX + cols * size, startY + i * size);  // Horizontal lines
    }
    for (int j = 0; j <= cols; j++) {
        drawLineDDA(startX + j * size, startY, startX + j * size, startY + rows * size);  // Vertical lines
    }
}

int main() 
{

 printf("luis neupane checker box");
    int gd = DETECT, gm;
    int startX = 50, startY = 50, boxSize = 50, rows = 8, cols = 8;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    drawCheckerboard(startX, startY, boxSize, rows, cols);
   

    getch();
    closegraph();
    return 0;
}

