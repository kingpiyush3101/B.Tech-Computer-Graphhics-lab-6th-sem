#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main(){
 int gd=DETECT,gm;
 float x,y,xc=100,yc=100,rx=60,ry=40,pk,pk1;
 initgraph(&gd,&gm," ");
 setbkcolor(WHITE);
 cleardevice();
 x=0;
 y=ry;
 pk=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
 while((2*x*ry*ry)<(2*y*rx*rx)){
  if(pk<=0){
   x=x+1;
   pk1=pk+(2*ry*ry*x)+(ry*ry);
  }
  else{
  x=x+1;
  y=y-1;
  pk1=pk+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
  }
  pk=pk1;
  putpixel(xc+x,yc+y,2);
  putpixel(xc-x,yc+y,2);
  putpixel(xc+x,yc-y,2);
  putpixel(xc-x,yc-y,2);
  }
  pk=((x+0.5)*(x+0.5)*ry*ry)+((y-1)*(y-1)*rx*rx)-(rx*rx*ry*ry);
  while(y>0){
  if(pk>0){
  y=y-1;
  pk1=pk-(2*rx*rx*y)+(rx*rx);
  }
  else{
  x=x+1;
  y=y-1;
  pk1=pk+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);
  }
  pk=pk1;
  putpixel(xc+x,yc+y,2);
  putpixel(xc-x,yc+y,2);
  putpixel(xc+x,yc-y,2);
  putpixel(xc-x,yc-y,2);
  }
  getch();
}
