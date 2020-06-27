void headphone()
{
	//left side
	//front
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(-100, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(+130, -200, 0);
	glVertex3d(+130, +200, 0);
	glVertex3d(-130, +200, 0);
	glEnd();
	glPopMatrix();

	//back
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(-80, 20, -20);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(+130, -200, 0);
	glVertex3d(+130, +200, 0);
	glVertex3d(-130, +200, 0);
	glEnd();
	glPopMatrix();

	//right
	glPushMatrix();
	glColor3d(1, 1, 0);
	glTranslated(-100, 0, -10);
	glBegin(GL_POLYGON);
	glVertex3d(+130, -200, 0);
	glVertex3d(+150, -180, 0);
	glVertex3d(+150, +220, 0);
	glVertex3d(+130, +200, 0);
	glEnd();
	glPopMatrix();

	//left
	glPushMatrix();
	glColor3d(1, 1, 0);
	glTranslated(-100, 0, -10);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(-110, -180, 0);
	glVertex3d(-110, +220, 0);
	glVertex3d(-130, +200, 0);
	glEnd();
	glPopMatrix();

	//down
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(-100, 0, -10);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(+130, -200, 0);
	glVertex3d(+150, -180, 0);
	glVertex3d(-110, -180, 0);
	glEnd();
	glPopMatrix();

	//up
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(-100, 0, -9);
	glBegin(GL_POLYGON);
	glVertex3d(-130, +200, 0);
	glVertex3d(+130, +200, 0);
	glVertex3d(+150, +220, 0);
	glVertex3d(-110, +220, 0);
	glEnd();
	glPopMatrix();




	//rightside
	//front
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(500, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(+130, -200, 0);
	glVertex3d(+130, +200, 0);
	glVertex3d(-130, +200, 0);
	glEnd();
	glPopMatrix();

	//back
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(520, 20, -20);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(+130, -200, 0);
	glVertex3d(+130, +200, 0);
	glVertex3d(-130, +200, 0);
	glEnd();
	glPopMatrix();

	//right
	glPushMatrix();
	glColor3d(1, 1, 0);
	glTranslated(500, 0, -10);
	glBegin(GL_POLYGON);
	glVertex3d(+130, -200, 0);
	glVertex3d(+150, -180, 0);
	glVertex3d(+150, +220, 0);
	glVertex3d(+130, +200, 0);
	glEnd();
	glPopMatrix();

	//left
	glPushMatrix();
	glColor3d(1, 1, 0);
	glTranslated(500, 0, -10);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(-110, -180, 0);
	glVertex3d(-110, +220, 0);
	glVertex3d(-130, +200, 0);
	glEnd();
	glPopMatrix();

	//down
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(500, 0, -10);
	glBegin(GL_POLYGON);
	glVertex3d(-130, -200, 0);
	glVertex3d(+130, -200, 0);
	glVertex3d(+150, -180, 0);
	glVertex3d(-110, -180, 0);
	glEnd();
	glPopMatrix();

	//up
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(500, 0, -9);
	glBegin(GL_POLYGON);
	glVertex3d(-130, +200, 0);
	glVertex3d(+130, +200, 0);
	glVertex3d(+150, +220, 0);
	glVertex3d(-110, +220, 0);
	glEnd();
	glPopMatrix();

	//HEADPHONESTRAP
	glPushMatrix();
	glColor3d(1,0,0);
	glTranslated(220,220,0);
	headphonestrapD(400,0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(402, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(404, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(406, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(408, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(410, 0);
	glPopMatrix();


	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(412, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(414, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(416, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(418, 0);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(220, 220, 0);
	headphonestrapD(420, 0);
	glPopMatrix();

}

void headphonestrapD(double radius, double depth)
{
	glBegin(GL_LINE_STRIP);
	for (double theta = 0; theta < 1 * 3.14; theta += 0.01)
	{
		glVertex3d(radius * cos(theta), radius * sin(theta), depth);
	}
	glEnd();
}


void bluetooth()
{
	glPushMatrix();
	glColor3d(1, 0, 1);
	glTranslated(-1200, 0, 0);
	bluetoothstrapD(300, 30);
	glPopMatrix();


	glPushMatrix();
	glColor3d(1, 0, 1);
	glTranslated(-1200, 0, 0);
	bluetoothstrapD(450, 30);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 1);
	glTranslated(-1200, 0, 0);
	bluetoothstrapD(600, 30);
	glPopMatrix();
	
}



void bluetoothstrapD(double radius, double depth)
{
	glBegin(GL_LINE_STRIP);
	for (double theta = 1.5*3.14; theta < 2.5*3.14; theta +=0.01)
	{
		glVertex3d(radius * cos(theta), radius * sin(theta), depth);
	}
	glEnd();
}