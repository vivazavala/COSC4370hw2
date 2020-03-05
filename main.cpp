/*******************************************************
 * Homework 2: OpenGL                                  *
 *-----------------------------------------------------*
 * First, you should fill in problem1(), problem2(),   *
 * and problem3() as instructed in the written part of *
 * the problem set.  Then, express your creativity     *
 * with problem4()!                                    *
 *                                                     *
 * Note: you will only need to add/modify code where   *
 * it says "TODO".                                     *
 *                                                     *
 * The left mouse button rotates, the right mouse      *
 * button zooms, and the keyboard controls which       *
 * problem to display.                                 *
 *                                                     *
 * For Linux/OS X:                                     *
 * To compile your program, just type "make" at the    *
 * command line.  Typing "make clean" will remove all  *
 * computer-generated files.  Run by typing "./hw2"    *
 *                                                     *
 * For Visual Studio:                                  *
 * You can create a project with this main.cpp and     *
 * build and run the executable as you normally would. *
 *******************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#if __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

bool leftDown = false, rightDown = false;
int lastPos[2];
float cameraPos[4] = { 0,1,4,1 };
int windowWidth = 640, windowHeight = 480;
double yRot = 0;
int curProblem = 1; // TODO: change this number to try different examples
float specular[] = { 1.0, 1.0, 1.0, 1.0 };
float shininess[] = { 50.0 };


void problem1() {
	float r = 0;
	for (int i = 0; i < 10; i++) {
		glPushMatrix();
		glRotatef(r, 0.0, 0.0, 1.0);
		glTranslatef(1, 0, 0);
		glutSolidTeapot(0.3);
		glPopMatrix();
		r = r + 37;
	}

}
void problem2() {
	// TODO: Your code here!
	glPushMatrix();
	glTranslatef(-1.75,0,0);
	glutSolidCube(0.3);
	for (int i = 0; i < 14; i++) {
		glTranslatef(.25, 0, 0);   //.25
		glutSolidCube(0.3);
	}
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-1.75, 0, 0);  //.01,-2
	glutSolidCube(.3);

	for (int i = 0; i < 14; i++) { //15
		glTranslatef(0.25, 0.015, 0);  //.01
		glutSolidCube(0.3);
	}
	glPopMatrix();
	glPushMatrix();
	
	glTranslatef(-1.5, 0, 0);  //.025,  -2
	glutSolidCube(.3);

	
	for (int i = 0; i < 13; i++) {
		glTranslatef(0.25, 0.03, 0);  //.025
		glutSolidCube(0.3);
	}

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1, 0, 0);  //.04
	glutSolidCube(.3);
	for (int i = 0; i < 11; i++) {
		glTranslatef(0.25, 0.06, 0);   //.04, .05
		glutSolidCube(0.3);
	}
	glPopMatrix();
}


void problem3() {
	// TODO: Your code here!
	
	glPushMatrix();
	glTranslatef(-3, -2, 0);
	for (int i = 0; i <= 5; i++) {
		glTranslatef(0.5, 0.5, 0);
		glutSolidTeapot(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-2.1, -2, 0);
	for (int i = 0; i <= 4; i++) {
		glTranslatef(0.5, 0.5, 0);
		glutSolidTeapot(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.2, -2, 0);
	for (int i = 0; i <= 3; i++) {
		glTranslatef(0.5, 0.5, 0);
		glutSolidTeapot(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-.3, -2, 0);
	for (int i = 0; i <= 2; i++) {
		glTranslatef(0.5, 0.5, 0);
		glutSolidTeapot(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(.6, -2, 0);
	for (int i = 0; i <= 1; i++) {
		glTranslatef(0.5, 0.5, 0);
		glutSolidTeapot(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5, -2, 0);
	glTranslatef(0.5, 0.5, 0);
	glutSolidTeapot(0.25);
	glPopMatrix();
}


void problem4() { //empire state thumbs up!!
	
	glPushMatrix();
	glTranslatef(-.95, 1.4, 0);
	for (int j = 0; j < 25; j++) {
		glTranslatef(0, 0.01, 0);
		glutSolidCube(0.01);		//top of empire
	}								//state thumb model
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-.95, 1.4, 0);
	glutSolidCube(0.1);		//top thumb 1
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-.95, 1.3, 0);
	glutSolidCube(0.2);		//top thumb 2
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-.95, 1.2, 0);
	glutSolidCube(0.25);		//top thumb 3
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-.95, 1.1, 0);
	glutSolidCube(0.35);		//top thumb 4
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-.95, -1, 0);
	for (int i = 1; i <= 5; i++) {//draw thumb
		glTranslatef(0, 0.4, 0);
		glutSolidCube(0.40);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-.75, -1, 0);
	for (int i = 1; i <= 3; i++) {
		glTranslatef(0, 0.5, 0);
		glutSolidCube(0.4);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.5, -1, 0);
	for (int i = 1; i <= 3; i++) {
		glTranslatef(0, 0.5, 0);
		glutSolidCube(0.55);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.4, -.75, 0.25);//fingers
	for (int i = 1; i <= 1; i++) {
		glTranslatef(0, 0.4, 0);
		glutSolidCube(0.25);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-.4, -.75, 0.35);
	for (int i = 1; i <= 4; i++) {  //y<=4
		glTranslatef(0, 0.3, 0);
		glutSolidCube(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-.4, -.75, 0.55);
	for (int i = 1; i <= 4; i++) {
		glTranslatef(0, 0.3, 0);
		glutSolidCube(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.4, -.75, 0.545);
	for (int i = 1; i <= 4; i++) {
		glTranslatef(0, 0.3, 0);
		glutSolidCube(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-.45, -.75, 0.535);
	for (int i = 1; i <= 4; i++) {
		glTranslatef(0, 0.3, 0);
		glutSolidCube(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.45, -.75, 0.35); 
	for (int i = 1; i <= 4; i++) {
		glTranslatef(0, 0.3, 0);
		glutSolidCube(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.6, -.75, 0.35); 
	for (int i = 1; i <= 4; i++) {
		glTranslatef(0, 0.3, 0.05);
		glutSolidCube(0.25);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.7, -.75, 0.35); 
	for (int i = 1; i <= 4; i++) {
		glTranslatef(0, 0.3, 0.025);
		glutSolidCube(0.20);
	}
	glPopMatrix();

}


void display() {
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glDisable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glBegin(GL_LINES);
	glColor3f(1, 0, 0); glVertex3f(0, 0, 0); glVertex3f(1, 0, 0); // x axis
	glColor3f(0, 1, 0); glVertex3f(0, 0, 0); glVertex3f(0, 1, 0); // y axis
	glColor3f(0, 0, 1); glVertex3f(0, 0, 0); glVertex3f(0, 0, 1); // z axis
	glEnd(/*GL_LINES*/);


	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
	glEnable(GL_LIGHT0);


	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, windowWidth, windowHeight);


	float ratio = (float)windowWidth / (float)windowHeight;
	gluPerspective(50, ratio, 1, 1000);


	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(cameraPos[0], cameraPos[1], cameraPos[2], 0, 0, 0, 0, 1, 0);


	glLightfv(GL_LIGHT0, GL_POSITION, cameraPos);


	glRotatef(yRot, 0, 1, 0);


	if (curProblem == 1) problem1();
	if (curProblem == 2) problem2();
	if (curProblem == 3) problem3();
	if (curProblem == 4) problem4();


	glutSwapBuffers();
}


void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) leftDown = (state == GLUT_DOWN);
	else if (button == GLUT_RIGHT_BUTTON) rightDown = (state == GLUT_DOWN);


	lastPos[0] = x;
	lastPos[1] = y;
}


void mouseMoved(int x, int y) {
	if (leftDown) yRot += (x - lastPos[0]) * .1;
	if (rightDown) {
		for (int i = 0; i < 3; i++)
			cameraPos[i] *= pow(1.1, (y - lastPos[1]) * .1);
	}
	lastPos[0] = x;
	lastPos[1] = y;
	glutPostRedisplay();
}


void keyboard(unsigned char key, int x, int y) {
	curProblem = key - '0';
	if (key == 'q' || key == 'Q' || key == 27) {
		exit(0);
	}
	glutPostRedisplay();
}


void reshape(int width, int height) {
	windowWidth = width;
	windowHeight = height;
	glutPostRedisplay();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("HW2");


	glutDisplayFunc(display);
	glutMotionFunc(mouseMoved);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);


	glutMainLoop();


	return 0;
}



