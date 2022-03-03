// Ashim Gupta
// 101916039
// 3CS10
#include "./freeglut-3.2.1/include/GL/freeglut.h" // GLUT, includes glu.h and gl.h
#include<iostream>
#include <stdio.h>
using namespace std;
int x1, y1, x2, y2;
void myInit() {
 glClear(GL_COLOR_BUFFER_BIT);
 glClearColor(0.0, 0.0, 0.0, 1.0);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D(0, 500, 0, 500);
}
void draw_pixel(int x, int y) {
 glBegin(GL_POINTS);
 glVertex2i(x, y);
 glEnd();
}
void draw_line(int x1, int x2, int y1, int y2) {
 int delx, dely, i, e;
 int xincrement,yincrement, increment1, increment2;
 int x,y;
 delx = x2-x1;
 dely = y2-y1;
 if (delx < 0)
 delx = -delx;
 if (dely < 0)
 dely = -dely;
 xincrement = 1;
 if (x2 < x1)
 xincrement = -1;
 yincrement = 1;
 if (y2 < y1)
 yincrement = -1;
 x = x1; y = y1;
 if (delx > dely) {
 draw_pixel(x, y);
 e = 2 * dely-delx;
 increment1 = 2*(dely-delx);
 increment2 = 2*dely;
 for (i=0; i<delx; i++) {
 if (e >= 0) {
 y += yincrement;
 e += increment1;
 }
 else
 e += increment2;
 x += xincrement;
 draw_pixel(x, y);
 }
 } else {
 draw_pixel(x, y);
 e = 2*delx-dely;
 increment1 = 2*(delx-dely);
 increment2 = 2*delx;
 for (i=0; i<dely; i++) {
 if (e >= 0) {
 x += xincrement;
 e += increment1;
 }
 else
 e += increment2;
 y += yincrement;
 draw_pixel(x, y);
 }
 }
}
void myDisplay() {
 draw_line(x1, x2, y1, y2);
 glFlush();
}
int main(int argc, char **argv) {
 cout<<"Enter the value of x1:"<<endl;
 cin>>x1;
 cout<<"Enter the value of y1:"<<endl;
 cin>>y1;
 cout<<"Enter the value of x2:"<<endl;
 cin>>x2;
 cout<<"Enter the value of y2:"<<endl;
 cin>>y2;
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(500, 500);
 glutInitWindowPosition(0, 0);
 glutCreateWindow("Bresenham's Line Drawing");
 myInit();
 glutDisplayFunc(myDisplay);
 glutMainLoop();
}
