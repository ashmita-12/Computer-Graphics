#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd = DETECT,gm;
	float x1, x2, y1, y2, sx, sy, x3, y3, x4, y4;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("\n Enter the starting point coordinates(x1,y1):");
	scanf("%f%f",&x1,&y1);
	printf("\n Enter the ending point coordinates(x2,y2):");
	scanf("%f%f",&x2,&y2);
	printf("\n Enter scaling factors(sx,sy):");
	scanf("%f%f",&sx,&sy);
	setcolor(7);
	line(x1,y1,x2,y2);
	outtextxy(x2+5,y2,"Object");
	x3 = x1*sx;
	y3 = y1*sy;
	x4 = x2*sx;
	y4 = y2*sy;
	setcolor(15);
	line(x3,y3,x4,y4);
	outtextxy(x4+5,y4,"Image");
	getch();	
}
