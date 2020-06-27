void phone()
{

	//back
//glLoadIdentity();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(20, 20, -20);
	glBegin(GL_POLYGON);
	glVertex3d(-200, -400, 0);
	glVertex3d(+200, -400, 0);
	glVertex3d(+200, +400, 0);
	glVertex3d(-200, +400, 0);
	glEnd();
	glPopMatrix();

	//rightside
//glLoadIdentity();

	glPushMatrix();
	glColor3d(0, 1, 1);
	glTranslated(210, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3d(-10, -400, 0);
	glVertex3d(+10, -380, 0);
	glVertex3d(+10, +420, 0);
	glVertex3d(-10, +400, 0);
	glEnd();
	glPopMatrix();

    //leftside
	//glLoadIdentity();

    glPushMatrix();
	glColor3d(0, 1, 1);
	glTranslated(-190, 0, -20);
	glBegin(GL_POLYGON);
	glVertex3d(-10, -400, 0);
	glVertex3d(+10, -380, 0);
	glVertex3d(+10, +420, 0);
	glVertex3d(-10, +400, 0);
	glEnd();
	glPopMatrix();

	//lowerside
	//glLoadIdentity();

	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(0, -390, -20);
	glBegin(GL_POLYGON);
	glVertex3d(-200, -10, 0);
	glVertex3d(+200, -10, 0);
	glVertex3d(+220, +10, 0);
	glVertex3d(-180, +10, 0);
	glEnd();
	glPopMatrix();



	//upperside
	//glLoadIdentity();

	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(0, 410, 0);
	glBegin(GL_POLYGON);
	glVertex3d(-200, -10, 0);
	glVertex3d(+200, -10, 0);
	glVertex3d(+220, +10, 0);
	glVertex3d(-180, +10, 0);
	glEnd();
	glPopMatrix();

	//screen
//glLoadIdentity();

	glPushMatrix();
	glColor3d(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex3d(-200, -400, 0);
	glVertex3d(+200, -400, 0);
	glVertex3d(+200, +400, 0);
	glVertex3d(-200, +400, 0);
	glEnd();
	glPopMatrix();

	//innerscreen
	//glLoadIdentity();

	glPushMatrix();
	glTranslated(0, 0, 10);
	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3d(-190, -390, 0);
	glVertex3d(+190, -390, 0);
	glVertex3d(+190, +390, 0);
	glVertex3d(-190, +390, 0);
	glEnd();
	glPopMatrix();


	//play button
	//glLoadIdentity();

	glPushMatrix();
	glTranslated(0, 0, 11);
	glColor3d(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3d(-40, -40, 0);
	glVertex3d(+40, 0, 0);
	glVertex3d(-40, +40, 0);
	glEnd();
	glPopMatrix();

	// repeat button
	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(130, 0, 0);
	rectangleD(-30, -40, 30, 40, 11);
	glPopMatrix();

	//pause button
	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-130, 0, 0);
	rectangleD(-5, -40, 5, 40, 11);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-100, 0, 0);
	rectangleD(-5, -40, 5, 40, 11);
	glPopMatrix();


	//backbutton
	//glLoadIdentity();

	glPushMatrix();
	glTranslated(-130, -350, 11);
	glScaled(0.5, 0.5, 0);
	glColor3d(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex3d(-40, -40, 0);
	glVertex3d(+40, 0, 0);
	glVertex3d(-40, +40, 0);
	glEnd();
	glPopMatrix();

	//square(multi) button
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslated(130, -350, 0);
	rectangleD(-20, -20, 20, 20, 11);
	glPopMatrix();

	//home button
	glPushMatrix();
	glTranslated(-24, -370, 0);
	glColor3f(1, 1, 1);
	glTranslated(30, 20, 0);
	circleD(20, 11);
	glPopMatrix();

	
}