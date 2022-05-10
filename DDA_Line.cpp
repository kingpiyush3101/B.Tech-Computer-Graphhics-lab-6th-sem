#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gdriver=DETECT,gmode,length,i=1;
	float x,y,dy,dx;
	initgraph(&gdriver,&gmode,"");
	setbkcolor(WHITE);
	cleardevice();
	int x0=100,y0=200,x1=500,y1=300;
	dx=x1-x0;
	dy=y1-y0;
	if(dx>=dy){
		length=dx;
	}
	else{
		length=dy;
	}
	dy=dy/length;
	dx=dx/length;
	while(i<=length){
		putpixel(x,y,BLUE);
		x=x+dx;
		y=y+dy;
		i++;
	}
	getch();
	closegraph();	
}
