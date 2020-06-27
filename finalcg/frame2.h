void frame2()
{
	glPushMatrix();
	glTranslated(x,0,0);
	man();                        //man function
	glPopMatrix();

	//clouds
	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-900, 500, 0);
	circleD(150, 0);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-800, 500, 0);
	circleD(150, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-700, 500, 0);
	circleD(150, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-300, 500, 0);
	circleD(150, 0);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-200, 500, 0);
	circleD(150, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-100, 500, 0);
	circleD(150, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(300, 500, 0);
	circleD(150, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(400, 500, 0);
	circleD(150, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(500, 500, 0);
	circleD(150, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(900, 500, 0);
	circleD(150, 0);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(1000, 500, 0);
	circleD(150, 0);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(1100, 500, 0);
	circleD(150, 0);
	glPopMatrix();


	//road
	glPushMatrix();
	glTranslated(-1750,-650,-7);
	//glRotated(40,0,0,0);
	road();
	glPopMatrix();

	//road strip
	glPushMatrix();
	glTranslated(0, -400, -6);
	//glRotated(40,0,0,0);
	roadstrip();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-800, -400, -6);
	//glRotated(40,0,0,0);
	roadstrip();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1600, -400, -6);
	//glRotated(40,0,0,0);
	roadstrip();
	glPopMatrix();

	glPushMatrix();
	glTranslated(800, -400, -6);
	//glRotated(40,0,0,0);
	roadstrip();
	glPopMatrix();





	raindrop();

}
	void raindrop()
	{
		//rain drops
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-900, x1, 0);
		//glTranslated(-900, 300, 0);
		circleD(10, 0);
		glPopMatrix();
	
/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-900, x2, 0);
		//glTranslated(-900, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		
		glPushMatrix();
		glColor3f(0, 0, 1);
		//glTranslated(-900, x3, 0);
		glTranslated(-900, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		//glTranslated(-900, x4, 0);
		glTranslated(-900, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		//glTranslated(-900, x, 0);
		glTranslated(-900, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		//glTranslated(-900, x, 0);
		glTranslated(-900, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		//glTranslated(-900, x, 0);
		glTranslated(-900, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		//glTranslated(-900, x, 0);
		glTranslated(-900, -400, 0);
		circleD(10, 0);
		glPopMatrix();*/


		//2nd col

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-700, -400, 0);
		circleD(10, 0);
		glPopMatrix();
		*/

		//3rd col
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-400, -400, 0);
		circleD(10, 0);
		glPopMatrix();
		*/

		//4th col

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(-200, -400, 0);
		circleD(10, 0);
		glPopMatrix();*/


		//5th col
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(200, -400, 0);
		circleD(10, 0);
		glPopMatrix();*/


		//6th col
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		
		/*glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(400, -400, 0);
		circleD(10, 0);
		glPopMatrix();
		*/

		//7th col
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(700, -400, 0);
		circleD(10, 0);
		glPopMatrix();
		*/

		//8th col
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(900, -400, 0);
		circleD(10, 0);
		glPopMatrix();
		*/

		//9th col
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, x1, 0);
		circleD(10, 0);
		glPopMatrix();

		/*
		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, 200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, 100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, 0, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, -100, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, -200, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, -300, 0);
		circleD(10, 0);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0, 0, 1);
		glTranslated(1000, -400, 0);
		circleD(10, 0);
		glPopMatrix();
		*/
	
}






void rectangleD(double x1, double y1, double x2, double y2, double z)
{
	glBegin(GL_POLYGON);
	glVertex3d(x1, y1, z);
	glVertex3d(x2, y1, z);
	glVertex3d(x2, y2, z);
	glVertex3d(x1, y2, z);
	glEnd();
}


void man()
{
	//head
	glPushMatrix();
	glColor3d(1, 1, 1);
	circleD(80, 0);
	glPopMatrix();

	//headphones
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(30, 20, 0);
	circleD(35, 2);
	glPopMatrix();

	//headphonestrip
	glPushMatrix();
	glColor3d(1, 1, 0.3);
	glTranslated(30, 50, 0);
	rectangleD(-10, -20, 10, 20, 3);
	glPopMatrix();


	// Body
	glPushMatrix();
	glColor3d(0.7, 0, 0.9);
	glTranslated(0, -200, 0);
	rectangleD(-50, -100, 50, 100, 0);
	glPopMatrix();




	// Right Leg
	glPushMatrix();
	glColor3d(0.8, 0.5, 0.3);
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, 2);
	rectangleD(-20, -100, 40, -80, 2);
	glPopMatrix();


	// Left Leg
	glColor3d(0.7, 0.4, 0.2);
	glPushMatrix();
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, -2);
	rectangleD(-20, -100, 40, -80, -2);
	glPopMatrix();

	// Right Hand
	glColor3d(0.8, 0.5, 0.3);
	glPushMatrix();
	glTranslated(0, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, 2);
	glPopMatrix();

	// Left Hand
	glColor3f(0.7, 0.4, 0.2);
	glPushMatrix();
	glTranslated(0, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, -2);
	glPopMatrix();


}


void roadstrip()
{
	glColor3d(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex3d(0, 0, 0);
	glVertex3d(300, 0, 0);
	glVertex3d(330, 30, 0);
	glVertex3d(30, 30, 0);
	glEnd();
}


void road()
{

	glColor3d(0.1, 0.1 , 0.1);
	glBegin(GL_POLYGON);
	glVertex3d(0, 0, 0);
	glVertex3d(3300, 0, 0);
	glVertex3d(3500, 500, 0);
	glVertex3d(200, 500, 0);
	glEnd();
}



void circleD(double radius, double depth)
{
	glBegin(GL_POLYGON);
	for (double theta = 0; theta < 2 * 3.14; theta += 0.1)
	{
		glVertex3d(radius * cos(theta), radius * sin(theta), depth);
	}
	glEnd();
}