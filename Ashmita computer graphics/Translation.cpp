#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd = DETECT,gm;
	int x1, x2, y1, y2, tx, ty, x3, y3, x4, y4;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("\n Enter the starting point of line segment(x1,y1):");
	scanf("%d%d",&x1,&y1);
	printf("\n Enter the ending point of line segment(x2,y2):");
	scanf("%d%d",&x2,&y2);
	printf("\n Enter translation vector (tx,ty):");
	scanf("%d%d",&tx,&ty);
	setcolor(7);
	line(x1,y1,x2,y2);
	outtextxy(x2+5,y2,"Object");
	x3 = x1 + tx;
	y3 = y1 + ty;
	x4 = x2 + tx;
	y4 = y2 + ty;
	setcolor(15);
	line(x3,y3,x4,y4);
	outtextxy(x4+5,y4,"Image");
	getch();	
}
