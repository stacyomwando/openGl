//101169
//101047

/*#include <windows.h>// windows
#include <GL/glut.h> // so as to use te glut library
#include <math.h> //trigonomerty function for smoothness
void init() {
	gluOrtho2D(-1.5, 1.5, -1.5, 1.5);// minx, max for x, min for y, max for y
	glClearColor(1.0, 1.0, 1.0, 1.0);// set background color to white and opaque
}
void shapes() {

	glBegin(GL_POINTS);
	for (int i = 0; i < 500; i++) {
		glVertex3f(cos(0.5 * 3.14159 * i / 500.0), sin(0.5 * 3.14159 * i / 500.0), -0.5);
	}
	glEnd();

	const float PI = 3.141592653;
	float x, y;
	glColor3f(0, 1, 0);
	for (float angle = 0; angle <= 2 * PI; angle += 0.01)
	{
		x = (0.3) * cos(angle);
		y = (0.3) * sin(angle);
		glBegin(GL_POINTS);
		glVertex2f(x, y);
		glEnd();
	}
	float a, b;
	glColor3f(0, 1, 0);
	for (float angle = 0; angle <= 2 * PI; angle += 0.01)
	{
		a = (0.3) * cos(angle) + 0.3;
		b = (0.3) * sin(angle) + 0.2;
		glBegin(GL_POINTS);
		glVertex2f(a, b);
		glEnd();

	}

	float c, d;
	glColor3f(0, 1, 0);

	for (float angle = 0; angle <= 2 * PI; angle += 0.01)
	{
		c = (0.3) * cos(angle) + 0.3;
		d = (0.3) * sin(angle) - 0.3;
		glBegin(GL_POINTS);
		glVertex2f(c, d);
		glEnd();

	}


	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 1.0f, 0.0f);// color of one triangle
	glVertex2f(-1.0f, -0.75f); //x,y
	glVertex2f(-0.5f, -0.75f);
	glVertex2f(-0.75f, -0.25f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 1.0f, 0.0f);// color of second triangle
	glVertex2f(-1.0f, -0.4f); //x,y
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.75f, -0.9f);
	glEnd();
	

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);//red
	glVertex2f(-1.0f, 0.25f); //x,y
	glVertex2f(-0.5f, 0.25f);
	glVertex2f(-0.5f, 0.75f);
	glVertex2f(-1.0f, 0.75f);
	glEnd();
	//glFlush(); // render now
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.95f, 0.3f); //x,y
	glVertex2f(-0.55f, 0.3f);
	glVertex2f(-0.55f, 0.7f);
	glVertex2f(-0.95f, 0.7f);

	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv); // initialize glut
	glutCreateWindow("Shapes"); // create window with the given name
	glutInitWindowSize(320, 320); // set window width and height
	glutInitWindowPosition(50, 50);;//position windows initial top left corner
	init();
	glutDisplayFunc(shapes);
	

	glutMainLoop();//enter the event processing loop
}
*/

