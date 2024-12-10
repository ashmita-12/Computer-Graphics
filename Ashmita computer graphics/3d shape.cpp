#include <GL/glut.h>
void drawCube() {
    glutSolidCube(0.5);}
void drawSphere() {
    glutSolidSphere(0.3, 30, 30);}
void drawCone() {
    glutSolidCone(0.3, 0.6, 30, 30);}
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glColor3f(1.0f, 0.0f, 0.0f);  // Red
    glPushMatrix();
    glTranslatef(-0.5f, 0.0f, 0.0f);
    drawCube();
    glPopMatrix();
    glColor3f(0.0f, 1.0f, 0.0f);  // Green
    glPushMatrix();
    glTranslatef(0.5f, 0.0f, 0.0f);
    drawSphere(); glPopMatrix();
    glColor3f(0.0f, 0.0f, 1.0f);  // Blue
    glPushMatrix();
    glTranslatef(0.0f, -0.5f, 0.0f);
    drawCone();
    glPopMatrix();
    glFlush();}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL 3D Objects Example");
   glViewport(0, 0, 800, 600);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, 800.0 / 600.0, 0.1, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;}
