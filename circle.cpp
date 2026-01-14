#include<graphics.h>
#include<conio.h>

int main() 
{
    int gd =DETECT, gm;
    initgraph(&gd,&gm,NULL);

    circle(300,200,90);

    getch();
    closegraph();
    return 0;
}