// Ashim Gupta
// 101916039
// 3CS10
#include "./freeglut-3.2.1/include/GL/freeglut.h" // GLUT, includes glu.h and gl.h
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
float x1,x2,y1,y2;
void display(void)
{
float dely,delx,steps,x,y,k,Xincrement,Yincrement;
delx=x2-x1;
dely=y2-y1;
if(abs(delx)> abs(dely))
{
steps = abs(delx);
}
else
steps = abs(dely);
Xincrement = delx/steps;
Yincrement = dely/steps;
x= x1;
y=y1;
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
for (k=1 ;k<=steps;k++)
{
x= x + Xincrement;
y= y + Yincrement;
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
}
glFlush();
}
void init(void)
{
glClearColor(0.7,0.7,0.7,0.7);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-100,100,-100,100);
}
int main(int argc, char** argv) {
cout<<"Enter the value of x1 : ";
cin>>x1;
cout<<"Enter the value of y1 : ";
cin>>y1;
cout<<"Enter the value of x2 : ";
cin>>x2;
cout<<"Enter the value of y2 : ";
cin>>y2;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100,100);
glutCreateWindow ("DDA Line Algo");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
