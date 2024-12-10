#include <GL/glut.h>
#include <math.h>
const int numsegments = 100;  // Number of segments for the circle
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 1.0f, 0.0f);  // Green
    glBegin(GL_LINE_LOOP);
    for(int i = 0;i < numsegments;++i)
	 {
        float theta = 2.0f * 3.1415926f * float(i) / float(numsegments);
        float x = 0.5f * cosf(theta);
        float y = 0.5f * sinf(theta);
        glVertex2f(x, y);
    }
    glEnd();
    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("OpenGL Circle Example");
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
