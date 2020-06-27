void frame4()
{
	glPushMatrix();
	glTranslated(-600, 0, 0);
	pc();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1400,0,0);
	cpu();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-700, -450, 0);
	keyboard();
	glPopMatrix();

	glPushMatrix();
	glTranslated(800, 0, 0);
	headphone();
	glPopMatrix();

	glPushMatrix();
	glScaled(0.5,0.5,1);
	glTranslated(x2, 0, 0);
	bluetooth();
	glPopMatrix();


	//glLoadIdentity();
	glPushMatrix();
	glTranslated(0, 0, 0);
	bluetoothname();
	glPopMatrix();

	
	

}