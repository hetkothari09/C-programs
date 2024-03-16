#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <stdio.h>

void drawCircle(int xc, int yc, int x, int y){
    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, RED);

    putpixel(xc+y, yc+x, RED);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc+y, yc-x, RED);
    putpixel(xc-y, yc-x, RED);

}

void circleBres(int xc, int yc, int r){
    int x=0;
    int y=r;
    int d=3-2*r;
    drawCircle(xc,yc,x,y);

    while(y>=x){
        x++;
        if(d>0){
            y--;
            d = d+4*(x-y)+10;
        }
        else{
            d = d+4*x+6;
            drawCircle(xc,yc,x,y);
            delay(50);
        }
    }
}

void main(){
    int xc=50;
    int yc=50;
    int r2=30;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\Program Files\CodeBlocks\MinGW\bin");
    circleBres(xc,yc,r2);
}
