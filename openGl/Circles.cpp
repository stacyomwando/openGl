/*#include <GL/glut.h>// so as to use te glut library
#include <math.h>//trigonomerty function for smoothness;


const float PI = 3.141592653;//initialize pi

void init() {
	gluOrtho2D(-1.5, 1.5, -1.5, 1.5);// minx, max for x, min for y, max for y
	glClearColor(1.0, 1.0, 1.0, 1.0);// set background color to white and opaque
}

void MyArc() {

	glBegin(GL_POINTS);
	for (int i = 0; i < 1000; i++) {
		glVertex3f(cos(1 * 3.14159 * i / 1000.0), sin(1 * 3.14159 * i / 1000.0), 0);
	}
	glEnd();
	glFlush(); //Render now

}

void MySquare() {

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);//red
	glVertex2f(-0.5f, -0.5f);// coordinates x,y of the square
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.25f, -0.25f);// coordinates x,y of the square
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, 0.25f);
	glVertex2f(-0.25f, 0.25f);

	glEnd();

	glFlush();
}



void Star() {
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 1.0f, 0.0f);// color of one triangle
	glVertex2f(0.5f, -0.20f);// x and y coordinates of one triangle
	glVertex2f(-0.5f, -0.20f);
	glVertex2f(0.0f, 0.70f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 1.0f, 0.0f);// color of second triangle
	glVertex2f(-0.5f, 0.40f);// x and y coordinates of second triangle
	glVertex2f(0.5f, 0.40f);
	glVertex2f(0.0f, -0.50f);
	glEnd();
	glFlush(); // render now

}

void MyCircle(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


	float x, y;
	glColor3f(0, 1, 0);//set color to green 



	for (float angle = 0; angle <= 2 * PI; angle += 0.01)//loop for drawing the first circle using angles and pi
	{
		x = (0.3) * cos(angle);//initializing the points for the vertices
		y = (0.3) * sin(angle);
		glBegin(GL_POINTS);
		glVertex2f(x, y);
		glEnd();

	}


	float a, b;
	glColor3f(0, 1, 0);



	for (float angle = 0; angle <= 2 * PI; angle += 0.01)//loop for drawing the second circle using angles and pi
	{
		a = (0.3) * cos(angle) + 0.3;//initializing the points for the vertices
		b = (0.3) * sin(angle) + 0.2;
		glBegin(GL_POINTS);
		glVertex2f(a, b);
		glEnd();

	}

	float c, d;
	glColor3f(0, 1, 0);



	for (float angle = 0; angle <= 2 * PI; angle += 0.01)//loop for drawing the third circle using angles and pi
	{
		c = (0.3) * cos(angle) + 0.3;//initializing the points for the vertices
		d = (0.3) * sin(angle) - 0.3;
		glBegin(GL_POINTS);
		glVertex2f(c, d);
		glEnd();

	}

	glutSwapBuffers();
}
void main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	// Window of drawing
	glutInitWindowSize(500, 500);// set window width and height
	glutInitWindowPosition(100, 100);//position windows initial top left corner
	glutCreateWindow("Shapes");// create window with the given name
	init();
	glutDisplayFunc(MyCircle);
	glutDisplayFunc(Star);
	glutDisplayFunc(MySquare);
	glutDisplayFunc(MyArc);
	glutMainLoop();
}
*/