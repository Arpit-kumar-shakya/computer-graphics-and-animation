#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  

    line(50,50,50,80);    
    getch();
    closegraph();
    return 0;
}
