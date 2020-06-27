void pc()
{
	
	//monitor
	//front
	glPushMatrix();
	glColor3d(1, 1, 1);
	glTranslated(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3d(-400, -200, 0);
	glVertex3d(+400, -200, 0);
	glVertex3d(+400, +200, 0);
	glVertex3d(-400, +200, 0);
	glEnd();
	glPopMatrix();


	//back
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(20, 20, -10);
	glBegin(GL_POLYGON);
	glVertex3d(-400, -200, 0);
	glVertex3d(+400, -200, 0);
	glVertex3d(+400, +200, 0);
	glVertex3d(-400, +200, 0);
	glEnd();
	glPopMatrix();

	//down
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(0, 0, -5);
	glBegin(GL_POLYGON);
	glVertex3d(-400, -200, 0);
	glVertex3d(+400, -200, 0);
	glVertex3d(+420, -180, 0);
	glVertex3d(-380, -180, 0);
	glEnd();
	glPopMatrix();

	//up
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(0, 400, -5);
	glBegin(GL_POLYGON);
	glVertex3d(-400, -200, 0);
	glVertex3d(+400, -200, 0);
	glVertex3d(+420, -180, 0);
	glVertex3d(-380, -180, 0);
	glEnd();
	glPopMatrix();

	//right
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(0, 0, -4);
	glBegin(GL_POLYGON);
	glVertex3d(+400, -200, 0);
	glVertex3d(+420, -180, 0);
	glVertex3d(+420, 220, 0);
	glVertex3d(+400, 200, 0);
	glEnd();
	glPopMatrix();

	//left
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(-800, 0, -6);
	glBegin(GL_POLYGON);
	glVertex3d(+400, -200, 0);
	glVertex3d(+420, -180, 0);
	glVertex3d(+420, 220, 0);
	glVertex3d(+400, 200, 0);
	glEnd();
	glPopMatrix();

	//stand
	//top
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(0, 0, 10);
	glBegin(GL_POLYGON);
	glVertex3d(+10, -200, 0);
	glVertex3d(-10, -200, 0);
	glVertex3d(-10, -250, 0);
	glVertex3d(+10, -250, 0);
	glEnd();
	glPopMatrix();

	//base
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(0, 0, 10);
	glBegin(GL_POLYGON);
	glVertex3d(+400, -250, 0);
	glVertex3d(-400, -250, 0);
	glVertex3d(-400, -260, 0);
	glVertex3d(+400, -260, 0);
	glEnd();
	glPopMatrix();

	//screen
	//green
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(30, 30, 10);
	glBegin(GL_POLYGON);
	glVertex3d(-30, -30, 0);
	glVertex3d(+30, -30, 0);
	glVertex3d(+30, +30, 0);
	glVertex3d(-30, +30, 0);
	glEnd();
	glPopMatrix();

	//red
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(-30, 30, 10);
	glBegin(GL_POLYGON);
	glVertex3d(-30, -30, 0);
	glVertex3d(+30, -30, 0);
	glVertex3d(+30, +30, 0);
	glVertex3d(-30, +30, 0);
	glEnd();
	glPopMatrix();

	//yellow
	glPushMatrix();
	glColor3d(1, 1, 0);
	glTranslated(30, -30, 10);
	glBegin(GL_POLYGON);
	glVertex3d(-30, -30, 0);
	glVertex3d(+30, -30, 0);
	glVertex3d(+30, +30, 0);
	glVertex3d(-30, +30, 0);
	glEnd();
	glPopMatrix();

	//blue
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(-30, -30, 10);
	glBegin(GL_POLYGON);
	glVertex3d(-30, -30, 0);
	glVertex3d(+30, -30, 0);
	glVertex3d(+30, +30, 0);
	glVertex3d(-30, +30, 0);
	glEnd();
	glPopMatrix();


}


void cpu()
{
	//CPU
	//front
	glPushMatrix();
	glColor3d(1, 1, 1);
	glTranslated(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3d(-100, -250, 0);
	glVertex3d(+100, -250, 0);
	glVertex3d(+100, +250, 0);
	glVertex3d(-100, +250, 0);
	glEnd();
	glPopMatrix();

	//usb
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3d(-10, -100, 0);
	glVertex3d(10, -100, 0);
	glVertex3d(+10, -90, 0);
	glVertex3d(-10, -90, 0);
	glEnd();
	glPopMatrix();
	 
	//usb2
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3d(-40, -100, 0);
	glVertex3d(-20, -100, 0);
	glVertex3d(-20, -90, 0);
	glVertex3d(-40, -90, 0);
	glEnd();
	glPopMatrix();

	//cdplayer




	//back
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(100, 40, -10);
	glBegin(GL_POLYGON);
	glVertex3d(-100, -250, 0);
	glVertex3d(+100, -250, 0);
	glVertex3d(+100, +250, 0);
	glVertex3d(-100, +250, 0);
	glEnd();
	glPopMatrix();

	//right
	glPushMatrix();
	glColor3d(1, 1, 0);
	glTranslated(0, 0, -9);
	glBegin(GL_POLYGON);
	glVertex3d(100, -250, 0);
	glVertex3d(+200, -210, 0);
	glVertex3d(+200, 290, 0);
	glVertex3d(100, 250, 0);
	glEnd();
	glPopMatrix();

	//left
	glPushMatrix();
	glColor3d(1, 1, 0);
	glTranslated(0, 0, -9);
	glBegin(GL_POLYGON);
	glVertex3d(-100, -250, 0);
	glVertex3d(0, -210, 0);
	glVertex3d(0, 290, 0);
	glVertex3d(-100, 250, 0);
	glEnd();
	glPopMatrix();

	//up
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(0, 0, -8);
	glBegin(GL_POLYGON);
	glVertex3d(-100, 250, 0);
	glVertex3d(100, 250, 0);
	glVertex3d(200, 290, 0);
	glVertex3d(0, 290, 0);
	glEnd();
	glPopMatrix();

	//down
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(0, 0, -9);
	glBegin(GL_POLYGON);
	glVertex3d(-100, -250, 0);
	glVertex3d(100, -250, 0);
	glVertex3d(200, -210, 0);
	glVertex3d(0, -210, 0);
	glEnd();
	glPopMatrix();
	
}

	void keyboard()
	{
		//keyboard

		glPushMatrix();
		glColor3d(1, 1, 0);
		glTranslated(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex3d(-250, -100, 0);
		glVertex3d(+250, -100, 0);
		glVertex3d(+290, -30, 0);
		glVertex3d(-210, -30, 0);
		glEnd();
		glPopMatrix();

		/*
		//keys
		glPushMatrix();
		glColor3d(0, 0, 0);
		glTranslated(0, 0, 0);
		glBegin(GL_LINES);
		glVertex3d(-250, -100, 0);
		glVertex3d(+250, -100, 0);

		glEnd();
		glPopMatrix();
		*/
	}



