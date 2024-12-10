#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{	int x1, y1, x2, y2, i ;
	float x, y, dx, dy,p;
	int gd = DETECT, gm;
	printf("Enter the first point:\n");
	scanf("%d%d", &x1,&y1);
	printf("Enter the second point:\n");
	scanf("%d%d", &x2,&y2);
	initgraph(&gd, &gm, (char *)"");
	x= x1;
	y = y1;
	i = 0;
	dx = (x2 - x1);
	dy = (y2 - y1);
	p = (2*dy - dx);
	while(i<=dx)
	{   putpixel(x, y, GREEN);
		if(p<0)
		{	x = x+1;
			p= p+2*dy; }
		else
		{   x = x+1;
			y = y+1;
		p = p+ (2*dy) - (2*dx);	}
		i++;
	}
	getch();
	closegraph();	
}
