#include<graphics.h>
#include<stdio.h>
#include<math.h>
int sign(x)
{
if(x>0)
 return 1;
else if(x<0)
 return -1;
else
 return 0;
}
void drawline(int x1,int y1, int x2, int y2)
{
int x,y,dx,dy,swap,temp,s1,s2,p,i;
x=x1;
y=y1;
dx=abs(x2-x1);
dy=abs(y2-y1);
s1=sign(x2-x1);
s2=sign(y2-y1);
swap=0;
putpixel(x1,y1,15);
if(dy>dx)
 {
 temp=dx;
 dx=dy;
 dy=temp;
 swap=1;
 }
p=2*dy-dx;
for(i=0;i<dx;i++)
 {
 putpixel(x,y,getcolor());
 while(p>=0)
  {
  p=p-2*dx;
  if(swap)
   x+=s1;
  else
   y+=s2;
  }
 p=p+2*dy;
 if(swap)
  y+=s2;
 else
  x+=s1;
 }
putpixel(x2,y2,15);
}
 int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
    /* Draw Hut */
    setcolor(WHITE);
    drawline(100,100,150,50);
    drawline(150,50,200,100);
    drawline(150,50,350,50);
    drawline(350,50,400,100);
    drawline(100,100,100,200);
    drawline(100,100,200,100);
    drawline(200,100,200,200);
    drawline(100,200,200,200);
    drawline(200,100,400,100);
    drawline(400,100,400,200);
    drawline(200,200,400,200);
    drawline(135,150,135,200);
    drawline(135,150,165,150);
    drawline(165,150,165,200);
    outtextxy(5,10,"Piyush Maheshwari ");
    outtextxy(10,25,"Draw a hut using bresenham's line drawing algorithm");
    getch();
    closegraph();
    return 0;
}


