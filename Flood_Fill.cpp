#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void f_fill(int x, int y, int f_col, int old_col){
	if(getpixel(x,y)==old_col){
		putpixel(x, y, f_col);
		f_fill(x, y+1, f_col, old_col);
		f_fill(x, y-1, f_col, old_col);
		f_fill(x+1, y, f_col, old_col);
		f_fill(x-1, y, f_col, old_col);
		f_fill(x-1, y+1, f_col, old_col);
		f_fill(x-1, y-1, f_col, old_col);
		f_fill(x+1, y+1, f_col, old_col);
		f_fill(x+1, y-1, f_col, old_col);
	}
}
int main(){
	int gdriver=DETECT, gmode;
	initgraph(&gdriver, &gmode, "");
	setbkcolor(WHITE);
	setcolor(BLUE);
	cleardevice();
	rectangle(10, 10, 100, 100);
	f_fill(50, 50, GREEN, WHITE);
	getch();
	return 0;
}
