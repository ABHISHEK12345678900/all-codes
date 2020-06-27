
#include<GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int angle = 0;
int x=0, //man translated
y=1,
x1 = 300,//rain drop
x2=900,
x5=600;//bluetooth
int direction = 1;

void pc();
void road();
void roadstrip();
void bluetoothname();
void cpu();
void keyboard();
void phone();
void headphonestrapD(double, double);
void bluetoothstrapD(double, double);
void rectangleD(double, double, double, double, double);
void circleD(double, double);
void raindrop();
void man();
//void control1();
void myKeyboard(unsigned char, int, int);
void myInit();
void timer(int);
void myDisplay();
void myReshape(int width, int height);
void control();



#include"writeText.h"
#include"control.h"
#include"frame1.h"
#include"1framename.h"
#include"frame2.h"
#include"2framename.h"
#include"headphone.h"
#include"phone.h"
#include"frame3.h"
#include"3framename.h"
#include"computer.h"
#include"frame4.h"
#include"frameEnd.h"


#define UNIT 960
#define ESC 27
#define SPACE 32

int frame = 1;
int window3D = 0;
int w_width = 1920, w_height = 1080;


double aspectRatio = (double)1920 / (double)1080;

	int main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutInitWindowPosition(0, 0);	// Window location
	glutInitWindowSize(1920, 1080);
	glutCreateWindow("Go Watch");

	glutDisplayFunc(myDisplay);
	glutReshapeFunc(myReshape);
	glutKeyboardFunc(myKeyboard);

	glutTimerFunc(0, timer, 0);

	myInit();
	glutMainLoop();
	return 0;


}


void myInit()
{
	if (!window3D)
	{
		glEnable(GL_DEPTH_TEST);

		glViewport(0, 0, 1920, 1080);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(-UNIT * aspectRatio, UNIT * aspectRatio, -UNIT, UNIT, -UNIT, UNIT);
		glMatrixMode(GL_MATRIX_MODE);
	}
	else
	{
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
		glClearDepth(1.0f);                   // Set background depth to farthest
		glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
		glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
		glShadeModel(GL_SMOOTH);   // Enable smooth shading
		glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
	}

}


void myReshape(int width, int height)
{
	aspectRatio = (GLfloat)width / (GLfloat)height;

	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);

	// Set the aspect ratio of the clipping volume to match the viewport
	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
	glLoadIdentity();             // Reset

	if (!window3D)
	{
		if (width > height)
			glOrtho(-UNIT * aspectRatio, UNIT * aspectRatio, -UNIT, UNIT, -UNIT, UNIT);
		else
			glOrtho(-UNIT, UNIT, -UNIT / aspectRatio, UNIT / aspectRatio, -UNIT, UNIT);
		glMatrixMode(GL_MODELVIEW);
	}
	else
	{
		// Enable perspective projection with fovy, aspect, zNear and zFar
		gluPerspective(45.0f, aspectRatio, 0.1f, 100000);

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glTranslatef(0, 0, -2000);
	}
	
	// Update the window width and height.
	w_width = width;
	w_height = height;
}


void timer(int)
{	// Function runs throughtout the code every 1/60 th of a min (FPS = 60)
	control();	// Check which frame to animate
	glutPostRedisplay();	// Trigger myDisplay()
	glutTimerFunc(1000 / 60, timer, 0);		// 60 FPS animation
}



void control()
{

	switch (frame)
	{
	case 1:
		break;

	case 2:
		break;

	case 3:
		if (direction == 1)
		{

			if (angle < 45)
			{
				angle += 1;

			}
			else
				direction = 0;
		}
		else
		{
			if (angle > -45)
				angle -= 1;
			else
				direction = 1;

		}


		//raindrop
		//1st drop
		if (y == 1)
		{
			if (x1 > -100)
			{

				x1 -= 100;

			}
			else
			{
				y = 0;
			}
		}
		else
		{
			x1 = 300;
			y = 1;
		}
        //2nd drop
		/*if (y == 1)
		{
			if (x2 > -1000)
			{

				x2 -= 100;

			}
			else
			{
				y = 0;
			}
		}
		else
		{
			x2 = 200;
			y = 1;
		}
		*/

		//man translation
		if (x <= 1000)
		{
			x = x + 1;
		}



		   break;

	case 4:   break;

	case 5: //blutooth 
		if (x5 <= 1200)
		{
			x5 = x5 + 1;
		}
		break;

	case 6:   break;

	case 7:  if (x2 <= 1600)
	{
		x2 = x2 + 1;
	}
			 break;

		

	default: break;
	}
}



void myKeyboard(unsigned char key, int x, int y)
{
	int speed3d = 5;

	switch ((int)key)
	{
	case ESC: exit(0);		break;
	case SPACE: frame++;	break;
	}
}



void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);

	switch (frame)
	{
	case 1:	frame1();	break;

	case 2: first_framename(); break;

	case 3: frame2();  break;

	case 4: second_framename(); break;

	case 5: frame3();   break;

	case 6: third_framename();   break;

	case 7:frame4();    break;

	default:frameEnd();  break;
	}

	glutSwapBuffers();
}