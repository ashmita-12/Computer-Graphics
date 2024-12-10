#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd = DETECT,gm;
	float x1, x2, y1, y2, x3, y3, x4, y4, a, t;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("\n Enter the coordinates of starting point(x1,y1):");
	scanf("%f%f",&x1,&y1);
	printf("\n Enter the coordinates of ending point(x2,y2):");
	scanf("%f%f",&x2,&y2);
	printf("\n Enter angle for rotation (degree):");
	scanf("%f",&a);
	setcolor(7);
	line(x1,y1,x2,y2);
	outtextxy(x2+5,y2,"Object");
	t = a*(3.14/180);
	x3 = (x1*cos(t))-(y1*sin(t));
	y3 = (x1*sin(t))+(y1*cos(t));
	x4 = (x2*cos(t))-(y2*sin(t));
	y4 = (x2*sin(t))+(y2*cos(t));
	setcolor(15);
	line(x3,y3,x4,y4);
	outtextxy(x3+5,y3,"Image");
	getch();	
}
