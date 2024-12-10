#include <stdio.h>
#include <math.h>
#include <graphics.h>
int X1, X2, Y1, Y2, mx, my, depth;
void draw();
void scale();
int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	printf("\n\t\t\t3D Scaling\n");
	printf("\n Enter 1st top value(x1,y1):");
	scanf("%d %d", &X1, &Y1);
	printf("Enter right bottom value(x2,y2):");
	scanf("%d %d", &X2, &Y2);
    depth = (X2 - X1) / 4;
    mx = (X1 + X2) / 2;
    my = (Y1 + Y2) / 2;
	draw(); 	getch();
	cleardevice();
	scale();
	getch();
	closegraph();
}
void draw(){
	bar3d(X1, Y1, X2, Y2, depth, 1);
    outtextxy(X1 + 25, Y1 - 15, "Object");
}
void scale(){
	int a1,a2,b1,b2,dep,x,y;
	printf("\n\nEnter the scaling factors:");
	scanf("%d%d",&x,&y);
	a1 = mx+(X1-mx)*x;
	a2 = mx+(X2-mx)*x;
	b1 = my+(Y1-my)*y;
	b2 = my+(Y2-my)*y;
	dep = (a2-a1)/4;
	bar3d(a1,b1,a2,b2,dep,7);
	outtextxy(a1+25,b1-15,"Image");
	setcolor(3);
	draw();
}
