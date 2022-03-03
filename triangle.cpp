// Ashim Gupta
// 101916039
// 3CS10
#include "./freeglut-3.2.1/include/GL/freeglut.h" // GLUT, includes glu.h and gl.h
void display()
{
 glClearColor(0.0,0.0,0.0,0.0);
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_TRIANGLES);
 glColor3f(0.0, 1.0, 0.0);
 glVertex3f(0, 0, 0);
 glVertex3f(1, 0, 0);
 glVertex3f(0, 1, 0);
 glEnd();
 
 glFlush();
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
 glutInit(&argc, argv);
 glutCreateWindow("Triangle");
 glutInitWindowSize(320, 320);
 glutInitWindowPosition(50, 50);
 glutDisplayFunc(display);
 glutMainLoop();
 
 
 return 0;
}
