#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Initialize graphics mode

    line(50,50,50,80);    // Draw a circle
    getch();
    closegraph();
    return 0;
}
