void frameEnd()
{
	glLoadIdentity();

	char stringEnd_1[] = "WIRELESS HEAD PHONES";
	glPushMatrix();
	glTranslatef(-500, 600, 0);
	glColor3f(1, 0, 0);
	drawText(stringEnd_1);
	glPopMatrix();

	char stringEnd_2[] = "Thank You!";
	glPushMatrix();
	glTranslatef(-200, 300, 0);
	glScaled(0.7, 0.7, 0);
	glColor3d(1, 1, 1);
	drawText(stringEnd_2);
	glPopMatrix();

	char stringEnd_3[] = "Done by:";
	glPushMatrix();
	glTranslatef(250, -200, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(stringEnd_3);
	glPopMatrix();

	char stringEnd_4[] = "ABHISHEK A H [1DS16CS700]";
	glPushMatrix();
	glTranslatef(300, -300, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(stringEnd_4);
	glPopMatrix();

	char stringEnd_5[] = "SAMMED S M [1DS16CS737 ]";
	glPushMatrix();
	glTranslatef(300, -400, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(stringEnd_5);
	glPopMatrix();



	glFlush();
}