#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main() {
	int gd=DETECT , gm ;
	int x1=100,y1=300,x2=300,y2=300,tx=20,ty=40;
	initgraph(&gd,&gm," ");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(RED);
	line(x1,y1,x2,y2);
	setcolor(BLUE);
	line(x1+tx,y1+ty,x2+tx,y2+ty);
	getch();
	return 0;
}
