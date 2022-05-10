#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void b_fill(int x, int y, int f_col, int b_col){
	if(getpixel(x,y)!=b_col && getpixel(x,y)!=f_col){
		putpixel(x, y, f_col);
		b_fill(x, y+1, f_col, b_col);
		b_fill(x, y-1, f_col, b_col);
		b_fill(x+1, y, f_col, b_col);
		b_fill(x-1, y, f_col, b_col);
		b_fill(x-1, y+1, f_col, b_col);
		b_fill(x-1, y-1, f_col, b_col);
		b_fill(x+1, y+1, f_col, b_col);
		b_fill(x+1, y-1, f_col, b_col);
	}
}
int main(){
	int gdriver=DETECT, gmode;
	initgraph(&gdriver, &gmode, "");
	setbkcolor(WHITE);
	setcolor(BLUE);
	cleardevice();
	rectangle(10, 10, 100, 100);
	b_fill(50, 50, GREEN, BLUE);
	getch();
	return 0;
}
