#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Initialize graphics mode

    circle(250, 200, 100);    // Draw a circle
    getch();
    closegraph();
    return 0;
}
