/*#define PI 3.1415926535898

#include <GL/glut.h>

#include <math.h>
void init() {
	glClearColor(1.0, 1.0, 0.0, 0.0);
	gluOrtho2D(-12, 12, -12, 12); // set Cartesian co-ordinates
}
void home()
// radius of arc
{
	// formula for circumference; 2*PI*radius
	GLfloat twicePI = 2.0f * PI;
	glClear(GL_COLOR_BUFFER_BIT);

	// radius of arc
	int arcRadius = 2.5;
	int moonRadius = 2.5;
	int lineAmount = 100;

	// radii of the circles
	float radius = 0.2;


	//semicircle
	// Semi-circle
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i <= lineAmount; i++) {
		glVertex2f(
			0 + (arcRadius * cos(i * PI / lineAmount)),
			5 + (arcRadius * sin(i * PI / lineAmount))
		);
	}
	glEnd();
	glFlush();
	//Roof
	 // Clear display window
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-4, 5);
	glVertex2f(-4, 4);
	glVertex2f(-3, 4);
	glVertex2f(-3, -1);
	glVertex2f(3, -1);
	glVertex2f(3, 4);
	glVertex2f(4, 4);
	glVertex2f(4, 5);
	glEnd();
	glFlush();

	//leftwindow
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-2.5, 3.5);
	glVertex2f(-2.5, 1.5);
	glVertex2f(-1.5, 1.5);
	glVertex2f(-1.5, 3.5);
	glEnd();
	glFlush();

	glColor3f(0.9, 0.5, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(-2.5, 3.5);
	glVertex2f(-2.5, 1.5);
	glVertex2f(-1.5, 1.5);
	glVertex2f(-1.5, 3.5);
	glEnd();
	glFlush();

	//lines
	//vertical
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(-2.0, 3.5);
	glVertex2f(-2.0, 1.5);
	glVertex2f(-1.5, 1.5);
	glVertex2f(-1.5, 3.5);


	//horizontal
	glVertex2f(-2.5, 2.5);
	glVertex2f(-1.5, 2.5);
	glVertex2f(-2.5, 3.5);
	glVertex2f(-1.5, 3.5);

	glEnd();
	glFlush();

	//rightwindow
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(2.5, 3.5);
	glVertex2f(2.5, 1.5);
	glVertex2f(1.5, 1.5);
	glVertex2f(1.5, 3.5);
	glEnd();
	glFlush();

	glColor3f(0.9, 0.5, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(2.5, 3.5);
	glVertex2f(2.5, 1.5);
	glVertex2f(1.5, 1.5);
	glVertex2f(1.5, 3.5);
	glEnd();
	glFlush();

	//lines
	//vertical
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(2.0, 3.5);
	glVertex2f(2.0, 1.5);
	glVertex2f(1.5, 1.5);
	glVertex2f(1.5, 3.5);

	//horizontal
	glVertex2f(2.5, 2.5);
	glVertex2f(1.5, 2.5);
	glVertex2f(2.5, 3.5);
	glVertex2f(1.5, 3.5);
	glEnd();
	glFlush();

	//door

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.8, 3.5);
	glVertex2f(-0.8, -1.0);
	glVertex2f(0.8, -1.0);
	glVertex2f(0.8, 3.5);
	glEnd();
	glFlush();

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.8, 3.5);
	glVertex2f(-0.8, -1.0);
	glVertex2f(0.8, -1.0);
	glVertex2f(0.8, 3.5);
	glEnd();
	glFlush();

	//doorknob
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLE_FAN);

	// loop to add angle to current angle
	for (int i = 0; i <= lineAmount; i++) {
		glVertex2f(
			0.3 + (radius * cos(i * twicePI / lineAmount)),
			0.8 + (radius * sin(i * twicePI / lineAmount))
		);
	}
	glEnd();
	glFlush();

	//cresentmoon
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLE_FAN);


	// loop to add angle to current angle
	for (int i = 0; i <= lineAmount; i++) {
		glVertex2f(
			8.0 + (moonRadius * cos(i * twicePI / lineAmount)),
			8.0 + (moonRadius * sin(i * twicePI / lineAmount))
		);
	}
	glEnd();
	glFlush();

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_FAN);


	// loop to add angle to current angle
	for (int i = 0; i <= lineAmount; i++) {
		glVertex2f(
			8.4 + (moonRadius * cos(i * twicePI / lineAmount)),
			8.0 + (moonRadius * sin(i * twicePI / lineAmount))
		);
	}
	glEnd();
	glFlush();

}
int main(int argc, char** argv)
{
	// Initialize GLUT
	glutInit(&argc, argv);
	// Set display mode
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// Set top - left display window position.
	glutInitWindowPosition(100, 100);
	// Set display window width and height
	glutInitWindowSize(800, 600);
	// Create display window with the given title
	glutCreateWindow("101047 house");
	// Execute initialization procedure
	init();
	// Send graphics to display window
	glutDisplayFunc(home);
	// Display everything and wait.
	glutMainLoop();
}
*/