/*#include <windows.h>// windows
#include <GL/glut.h> // so as to use te glut library
#include <math.h> //trigonomerty function for smoothness
void init() {
	gluOrtho2D(-1.5, 1.5, -1.5, 1.5);// minx, max for x, min for y, max for y
	glClearColor(0.0, 0.0, 0.0, 1.0);// set background color to black and opaque
}
void MySquare() {
	glPointSize();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);//red
	glVertex2f(-0.5f, -0.5f);// coordinates x,y of the square
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.5f, -0.25f);
	glVertex2f(-0.5f, -0.25f);
	glVertex2f(0.0f, 0.75f);
	glEnd();

	glBegin(GL_POINTS);
	glFlush(); // render now

}

int main(int argc, char** argv) {
	glutInit(&argc, argv); // initialize glut
	glutCreateWindow("MySquare"); // create window with the given name
	glutInitWindowSize(320, 320); // set window width and height
	glutInitWindowPosition(50, 50);;//position windows initial top left corner
	init();
	glutDisplayFunc(MySquare);
	glutMainLoop();//enter the event processing loop
}*/
