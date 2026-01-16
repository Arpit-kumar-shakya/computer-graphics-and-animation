#include<graphics.h>
#include<conio.h>

int main() {
    int gd=DETECT, gm;
    initgraph(&gm,&gd,NULL);

    ellipse(100,100,0,360,40,60);

    getch();
    closegraph();
    return 0;
}