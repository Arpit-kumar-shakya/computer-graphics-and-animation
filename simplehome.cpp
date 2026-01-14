#include<graphics.h>
#include<conio.h>

int main() 
{
    int gd =DETECT, gm;
    initgraph(&gd,&gm,NULL);
    
    line(80,80,30,180);
    line(80,80,130,180);
    line(30,180,130,180);
    circle(80,148,20);
    line(80,80,330,80);
    line(330,80,330,180);
    line(330,180,130,180);
    line(130,180,130,380);
    line(130,380,330,380);
    line(330,380,330,180);
    line(200,210,240,210);
    line(240,210,240,250);
    line(240,250,200,250);
    line(200,250,200,210);
    line(220,210,220,250);
    line(200,230,240,230);
    line(30,180,30,380);
    line(30,380,130,380);
    line(60,300,60,380);
    line(60,300,100,300);
    line(100,300,100,380);


    getch();
    closegraph();
    return 0;
}