#include <stdio.h>
#include <math.h>
#include <graphics.h>
int X1, X2, Y1, Y2, mx, my, depth;
void draw();
void trans();
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    printf("\t\t\t3D Translation\n");
    printf("Enter 1st top value (X1, Y1): ");
    scanf("%d %d", &X1, &Y1);
    printf("Enter right bottom value (X2, Y2): ");
    scanf("%d %d", &X2, &Y2);
    depth = (X2 - X1) / 4;
    mx = (X1 + X2) / 2;
    my = (Y1 + Y2) / 2;
    draw(); getch();
    cleardevice();
    trans();
    getch();
    closegraph();
}
void draw() {
    bar3d(X1, Y1, X2, Y2, depth, 7);
    outtextxy(X1 + 50, Y1 - 15, "Object");
}
void trans() {
    int a1, b1, a2, b2, dep, X, Y;
    printf("Enter the Translation Distances(tx,ty):");
    scanf("%d %d", &X, &Y);
    a1 = X1 + X;
    a2 = X2 +X;
    b1 = Y1 + Y;
    b2 = Y2 + Y;
    dep = (a2 - a1) / 4;
    bar3d(a1, b1, a2, b2, dep, 7);
    outtextxy(a1 + 50, b1 - 15, "Image");
    setcolor(15);  
    draw();
}
