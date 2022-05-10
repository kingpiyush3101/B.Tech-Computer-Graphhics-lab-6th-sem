#include<stdio.h>  
#include<conio.h>
#include<graphics.h>  
#include<math.h>  
int main()  
{   
    int gd=DETECT , gm ;
	int x1=300,y1=100,x2=500,y2=100,x3,y3;
	double degree=90,radian;
	initgraph(&gd,&gm," ");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(RED); 
    line(x1,y1,x2,y2);    
    radian=degree*0.01745;
	x3=(int)(x1+((x2-x1)*cos(radian)-(y2-y1)*sin(radian)));
	y3=(int)(y1+((x2-x1)*sin(radian)+(y2-y1)*cos(radian)));
	setcolor(BLUE);   
    line(x1, y1 ,x3, y3);  
    getch();  
	return 0;  
}  
