#include <GL/glut.h>
#include <cmath>

const float PI = 3.14159265f;

void drawCylinder(float radius, float height, int sides) {
    float angleIncrement = 2 * PI / sides;

    glBegin(GL_QUAD_STRIP);
    for (int i = 0; i <= sides; ++i) {
        float angle = i * angleIncrement;
        float x = radius * cos(angle);
        float z = radius * sin(angle);

        glVertex3f(x, -height / 2, z);
        glVertex3f(x, height / 2, z);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    gluLookAt(1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 0.0f, 1.0f);  // Blue
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    drawCylinder(0.3f, 0.6f, 30);
    glPopMatrix();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Cylinder Example");

    glViewport(0, 0, 800, 600);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, 800.0 / 600.0, 0.1, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
