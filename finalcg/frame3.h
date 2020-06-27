void frame3()
{
	glLoadIdentity();
	glPushMatrix();
	glTranslated(-1000,0,0);
	phone();
	glPopMatrix();

	glLoadIdentity();
	glPushMatrix();
	glTranslated(900, 0, 0);
	headphone();
	glPopMatrix();

	glLoadIdentity();
	glPushMatrix();
	glTranslated(x5, 0, 0);
	bluetooth();
	glPopMatrix();


	glLoadIdentity();
	glPushMatrix();
	glTranslated(0, 0, 0);
	bluetoothname();
	glPopMatrix();

}

void bluetoothname()
{
	char string0_1[] = "BLUETOOTH_WAVES";
	


	// Display "GO Smart Watch"
	glPushMatrix();
	glTranslatef(-500, 700, 0);
	glColor3f(1, 1, 1);
	drawText(string0_1);
	glPopMatrix();

	glFlush();
}