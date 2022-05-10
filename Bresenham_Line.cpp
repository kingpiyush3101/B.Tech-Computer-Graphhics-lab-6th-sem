#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gdriver=DETECT, gmode;
	initgraph(&gdriver, &gmode, "");
	setbkcolor(WHITE);
	cleardevice();
	int x0=100, y0=200, x1=500, y1=300;	
	int dx, dy, p, x, y;
	dx = x1 - x0;
	dy = y1 - y0;
	x = x0;
	y = y0;
	p = 2 * dy - dx;
	while(x<x1){
		if(p>=0){
			putpixel(x,y,BLUE);
			y = y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else{
			putpixel(x,y,BLUE);
			p = p + 2 * dy;
		}
		x = x + 1;
	}
	getch();
	return 0;
}

