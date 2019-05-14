#include "Banana.h"
#include "GL/glut.h"


void Banana::draw(int shag) {
	glColor3f(1.0, 1.0, 0.0);
	glRectd(x * shag, y * shag, (x + 0.35) * shag, (y + 0.15) * shag);
	glRectd((x + 0.15) * shag, (y + 0.15) * shag, (x + 0.6) * shag, (y + 0.3) * shag);
	glRectd((x + 0.35) * shag, (y + 0.3) * shag, (x + 0.8) * shag, (y + 0.45) * shag);
	glRectd((x + 0.45) * shag, (y + 0.45) * shag, (x + 1) * shag, (y + 0.75) * shag);
	glRectd((x + 0.55) * shag, (y + 0.75) * shag, (x + 1.2) * shag, (y + 1.05) * shag);
	glRectd((x + 0.65) * shag, (y + 1.05) * shag, (x + 1.2) * shag, (y + 1.2) * shag);
	glRectd((x + 0.75) * shag, (y + 1.2) * shag, (x + 1.05) * shag, (y + 1.45) * shag);

	glColor3f(0.54, 0.278, 0.149);
	glRectd((x + 0.75) * shag, (y + 1.45) * shag, (x + 0.95) * shag, (y + 1.6) * shag);
}


void Banana::fall(double a) {
	y -= 0.25 + a;
}
