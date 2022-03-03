// Ashim Gupta
// 101916039
// 3CS10
#include "./freeglut-3.2.1/include/GL/freeglut.h" // GLUT, includes glu.h and gl.h
 whenever the window needs to be re-painted. */
void display_red()
{
 glClearColor(1.0f, 0.0f, 0.0f, 0.0f);// Set background color to black and 
opaque
 glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
 
 glFlush();
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
 glutInit(&argc, argv); // Initialize GLUT
 glutCreateWindow("OpenGL Setup Test"); // Create a window with the given 
title
 glutInitWindowSize(320, 320); // Set the window's initial width & height
 glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
 
 glutDisplayFunc(display_red);
 
 
 glutMainLoop(); // Enter the infinitely event-processing loop
 return 0;
}
