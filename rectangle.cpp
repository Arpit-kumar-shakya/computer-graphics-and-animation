#include<graphics.h>
#include<conio.h>

int main() 
{
    int gd =DETECT, gm;
    initgraph(&gd,&gm,NULL);

    line(50,50,100,50);
    line(50,50,50,100);
    line(50,100,100,100);
    line(100,100,100,50);

    getch();
    closegraph();
    return 0;
}