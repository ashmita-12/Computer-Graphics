#include <GL/glut.h>
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    // Draw a single pixel
    glColor3f(1.0f, 0.0f, 0.0f);  // Red
    glBegin(GL_POINTS);
    glVertex2f(0.0f, 0.0f);
    glEnd();
    // Draw a polygon
    glColor3f(0.0f, 0.0f, 1.0f);  // Blue
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
    glFlush();}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("OpenGL Pixel and Polygon Example");
    glViewport(0, 0, 400, 400);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1, -1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
