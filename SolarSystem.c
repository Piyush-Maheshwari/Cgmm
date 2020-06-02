
#include<stdio.h>
#include<graphics.h>
void drawCircle(int xc, int yc, int x, int y,int color)
{
    putpixel(xc+x, yc+y, color);
    putpixel(xc-x, yc+y, color);
    putpixel(xc+x, yc-y, color);
    putpixel(xc-x, yc-y, color);
    putpixel(xc+y, yc+x, color);
    putpixel(xc-y, yc+x, color);
    putpixel(xc+y, yc-x, color);
    putpixel(xc-y, yc-x, color);
    delay(5);
}
void circleBres(int xc, int yc, int r,int color)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y,color);
    while (y >= x)
    {
	x++;
	if (d > 0)
	{
	    y--;
	    d = d + 4 * (x - y) + 10;
	}
	else
	{
	    d = d + 4 * x + 6;
	}
	drawCircle(xc, yc, x, y,color);
    }
}
int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm,NULL);
   ellipse(300,250,0,360,60,30);
   ellipse(300,250,0,360,90,40);
   ellipse(300,250,0,360,120,50);
   ellipse(300,250,0,360,150,60);
   ellipse(300,250,0,360,180,70);
   ellipse(300,250,0,360,210,80);
   ellipse(300,250,0,360,240,90);
   ellipse(300,250,0,360,300,110);

     //sun
    circleBres(300,250,25,YELLOW);
    outtextxy(290,250,"sun");
   //mercury
   circleBres(360,250,7,BROWN);
   outtextxy(340,250,"mercury");
   //earth
   circleBres(420,250,20,CYAN);
   outtextxy(400,250,"earth");
   //jupiter
   circleBres(480,250,23,BROWN);
   outtextxy(460,250,"jupiter");
   //uranus
   circleBres(540,250,13,BLUE);
   outtextxy(520,250,"uranus");
   //neptune
   circleBres(600,250,17,BLUE);
   outtextxy(580,250,"neptune");
   //venus
   circleBres(210,250,10,GREEN);
   outtextxy(190,250,"venus");
   //mars
   circleBres(150,250,15,RED);
   outtextxy(130,250,"mars");
   //saturn
   circleBres(90,250,21,BROWN);
   outtextxy(70,250,"saturn");
   outtextxy(70,370,"Piyush Maheshwari");
   outtextxy(70,380,"AIM: To draw solar system using Bresenhams Circle Drawing Algorithm.");
   delay(1000);
   getch();
}
