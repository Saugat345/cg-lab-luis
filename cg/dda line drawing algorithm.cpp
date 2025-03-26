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
        delay(5);  // Slow down drawing for better visualization
    }
}

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    printf("\n luis neupane -dda line drawing");

    printf("\nEnter x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    drawLineDDA(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}

