#include <graphics.h>
#include <stdio.h>

void dda(int x1,int y1,int x2,int y2)
{
  int dx,dy,len,k;
  float Xincr,Yincr,x,y;
 
   dx = x2 - x1;
   dy = y2 - y1;

   if (abs(dx) > abs(dy))
 	len = abs(dx);
   else
 	len = abs(dy);

   Xincr = dx / (float)len;
   Yincr = dy / (float)len;

   x = x1;
   y = y1;

   putpixel(x,y,WHITE);

	for (k = 0; k < len; k++)
	{
  	x += Xincr;
  	y += Yincr;
  	putpixel(x,y,WHITE);
	}

}

void main()
{

	int gd = DETECT, gm = DETECT, x1, y1, x2, y2;

	initgraph(&gd, &gm, " ");
           outtextxy(25,20, "Draw a star using DDA line drawing algorithm " );
            outtextxy(20, 40, "Piyush Maheshwari”);
	dda(100,270,200,50);
	dda(300,270,200,50);
	dda(100,270,300,270);  
	dda(100,100,300,100);
	dda(100,100,200,300);
	dda(300,100,200,300);
 

	getch();
	closegraph();
}
