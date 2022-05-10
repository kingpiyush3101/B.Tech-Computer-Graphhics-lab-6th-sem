#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gdriver=DETECT, gmode;
	initgraph(&gdriver, &gmode, "");
	setbkcolor(WHITE);
	setcolor(BLUE);
	cleardevice();
	int poly[10];
	poly[0] = 20;
	poly[1] = 100;
	poly[2] = 120;
	poly[3] = 140;
	poly[4] = 240;
	poly[5] = 260;
	poly[6] = 120;
	poly[7] = 320;
	poly[8] = poly[0];
	poly[9] = poly[1];
	drawpoly(5,poly);
	getch();
	return 0;
}

