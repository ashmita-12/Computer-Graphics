#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
char IncFlag;
int polygonpoints[3][2] = {{10,100},{110,100},{110,200}};
void polyline()
{
	int icnt;
	cleardevice();
	line(0,240,640,240);
	line(320,0,320,480);
	for(icnt=0;icnt<3;icnt++)
	{
		line(polygonpoints[icnt][0],polygonpoints[icnt][1],
		polygonpoints[(icnt+1)%3][0],polygonpoints[(icnt+1)%3][1]);
	}
}
void Reflect()
{
	float Angle;
	int icnt;
	int Tx, Ty;
	printf("end");
	for(icnt=0;icnt<3;icnt++)
	{
		polygonpoints[icnt][1]=(480-polygonpoints[icnt][1]);
	}
}
int main()
{
	int gDriver = DETECT, gMode;
	int icnt;
	initgraph(&gDriver,&gMode,"C:\\TurboC3\\BGI");
	for(icnt=0;icnt<3;icnt++)
	{
		polygonpoints[icnt][0]+=320;
		polygonpoints[icnt][1]=240-polygonpoints[icnt][1];
	}
	polyline();
	getch();
	printf("Object after reflection about x-axis\n");
	Reflect();
	polyline();
	getch();
}
