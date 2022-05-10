#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void drawCircle(int x0, int y0, int r){
	int x=r, y=0, err=0;
	while(x>=y){
		putpixel(x0+x, y0+y, RED);
		putpixel(x0-x, y0+y, RED);
		putpixel(x0+x, y0-y, RED);
		putpixel(x0-x, y0-y, RED);
		putpixel(x0+y, y0+x, RED);
		putpixel(x0-y, y0+x, RED);
		putpixel(x0+y, y0-x, RED);
		putpixel(x0-y, y0-x, RED);
		if (err<=0){
			y += 1;
			err += 2*y + 1;
		}
		else{
			x -= 1;
			err -= 2*x + 1;
		}
	}
}
int main(){
	int gdriver=DETECT, gmode;
	initgraph(&gdriver, &gmode, "");
	setbkcolor(WHITE);
	cleardevice();
	int x=150, y=150, r=100;
	drawCircle(x, y, r);
	getch();
	return 0;
}
