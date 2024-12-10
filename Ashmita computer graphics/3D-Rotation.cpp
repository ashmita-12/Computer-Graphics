#include <stdio.h>
#include <math.h>
#include <graphics.h>
int X1, X2, Y1, Y2, mx, my, depth;
void draw();
void rotate();
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    printf("\t\t\t3D Transformation Rotating\n");
    printf("Enter 1st top value (X1, Y1): ");
    scanf("%d %d", &X1, &Y1);
    printf("Enter right bottom value (X2, Y2): ");
    scanf("%d %d", &X2, &Y2);
    depth = (X2 - X1) / 4;
    mx = (X1 + X2) / 2;
    my = (Y1 + Y2) / 2;
    draw();  getch();
    cleardevice();
    rotate();  getch();
    closegraph(); }
void draw() {
    bar3d(X1, Y1, X2, Y2, depth, 7);
    outtextxy(X1 + 25, Y1 - 15, "Object"); }
void rotate() {
    float t;
    int a1, b1, a2, b2, dep;
    printf("Enter the angle to rotate:");
    scanf("%f", &t);
    t = t * (3.14/ 180);
    a1 = mx + (X1 - mx) * cos(t) - (Y1 - my) * sin(t);
    a2 = mx + (X2 - mx) * cos(t) - (Y2 - my) * sin(t);
    b1 = my + (X1 - mx) * sin(t) + (Y1 - my) * cos(t);
    b2 = my + (X2 - mx) * sin(t) + (Y2 - my) * cos(t);
    if (a2 > a1)
        dep = (a2 - a1) / 4;
    else
     dep = (a1 - a2) / 4;
    bar3d(a1, b1, a2, b2, dep, 7);
    outtextxy(a1 + 50, b1 - 15, "Image");
    setcolor(15);  draw(); }
