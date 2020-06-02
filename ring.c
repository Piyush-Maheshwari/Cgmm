#include<stdio.h>
#include<graphics.h>
void circ(int x0,int y0,int r,int col)
{
	int x=0,y=r;
	double p=5.0/4.0-r;
	while(x<y)
	{
		putpixel(x0+x,y0+y,col);
		putpixel(x0+y,y0+x,col);
		putpixel(x0+x,y0-y,col);
		putpixel(x0-x,y0+y,col);
		putpixel(x0+y,y0-x,col);
		putpixel(x0-y,y0+x,col);
		putpixel(x0-y,y0-x,col);
		putpixel(x0-x,y0-y,col);
		if(p<0)
		{
			x++;
			p+=2*x+1;
		}
		else
		{
			x++;
			y--;
			p+=2*x+1-2*y;
		}
	}

}
int main()
{
	int gd=DETECT,gm;
	int r,x0,y0;
	initgraph(&gd,&gm,"");
	
	setbkcolor(WHITE);
	circ(150,50,30,BLUE);
	circ(200,50,30,DARKGRAY);
	circ(250,50,30,RED);
	circ(175,90,30,YELLOW);
	circ(225,90,30,GREEN);
	getch();
	closegraph();
	return 0;
}
