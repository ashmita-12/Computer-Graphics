#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int x1, y1, x2, y2, i;
	float x, y, length, dx, dy;
	int gd = DETECT, gm;
	printf("Enter the first point:\n");
	scanf("%d%d", &x1,&y1);
	printf("Enter the second point:\n");
	scanf("%d%d", &x2,&y2);
	initgraph(&gd, &gm, (char *)"");
	if(abs(x2-x1)>abs(y2-y1))
	{	length = abs(x2-x1); }
	else
	{	length = abs(y2-y1); }
	dx = (x2-x1)/length;
	dy = (y2-y1)/length;
	x= x1;
	y = y1;
	i = 0;
	while(i<=length)
	{
		putpixel(x, y, GREEN);
		x = x+dx;
		y = y+dy;
		i++;
	}
	getch();
	closegraph();	
}
