// Ashim Gupta
// 101916039
// 3CS10
#include "./freeglut-3.2.1/include/GL/freeglut.h" // GLUT, includes glu.h and gl.h
void display()
{
 glClearColor(0.0,0.0,0.0,0.0);
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_QUADS); // Each set of 4 vertices form a quad
 glColor3f(1.0f, 0.0f, 0.0f); // Red
 glVertex2f(0.05f, 0.05f); // x, y
 glVertex2f( 0.95f, 0.05f);
 glVertex2f( 0.95f, 0.95f);
 glVertex2f(0.05f, 0.95f);
 glEnd();
 
 glFlush();
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
 glutInit(&argc, argv);
 glutCreateWindow("Rectangle");
 glutInitWindowSize(320, 320);
 glutInitWindowPosition(50, 50);
 glutDisplayFunc(display);
 glutMainLoop();
 
 
 return 0;
}
