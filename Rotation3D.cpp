#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main() {
	int gd=DETECT, gm;
	initgraph (&gd, &gm, "");
	int x1=250,y1=100, x2=350, y2=150, theta=45;
	int a1, b1, a2, b2;
	setbkcolor(WHITE);
    cleardevice();
    setcolor(BLUE);
	a1=x1*cos(theta)-y1*sin(theta);
	b1=x1*sin(theta)+y1*cos(theta);
	a2=x2*cos(theta)-y2*sin(theta);
	b2=x2*sin(theta)+y2*cos(theta);
	bar3d(x1, y1, x2, y2, 30, 1) ;
	outtextxy(x2+25, y2, "Before Rotation :");
	bar3d(a1, b1, a2,b2, 30,1);
	outtextxy(a2+25,b2,"After Rotation :");
	getch();
	closegraph();
	return 0;
}


