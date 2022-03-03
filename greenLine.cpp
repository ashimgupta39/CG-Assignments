// Ashim Gupta
// 101916039
// 3CS10
#include "./freeglut-3.2.1/include/GL/freeglut.h" // GLUT, includes glu.h and gl.h
void display()
{
 glClearColor(0.0,0.0,0.0,0.0);
 glClear(GL_COLOR_BUFFER_BIT);
 double x1 = 10;
 double y1 = 10;
 double x2 = 50;
 double y2 = 50;
 x1 = 2*x1 / 500 - 1;
 y1 = 2*y1 / 500 - 1;
 x2 = 2*x2 / 500 - 1;
 y2 = 2*y2 / 500 - 1;
 glBegin(GL_LINES);
 glColor3f(0.0f, 1.0f, 0.0f); // Red
 glVertex2f(x1,y1); // x, y
 glVertex2f(x2,y2);
 
 glEnd();
 
 glFlush();
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
 glutInit(&argc, argv);
 glutCreateWindow("Line");
 glutInitWindowSize(500, 500);
 glutDisplayFunc(display);
 glutMainLoop();
 
 
 return 0;
}
