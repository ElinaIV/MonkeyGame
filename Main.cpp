#include <iostream>
#include "MainGame.h"
#include "GL/glut.h"
#include <ctime>
#include "Timer.h"
#include <cmath>
#include <cstdlib>

MainGame* instance = MainGame::get_instance();

void MainGameDisplay() {
	instance->Display();
}

void MainGamePressKey(int key, int a, int b) {
	instance->pressKey(key, a, b);
}

void MainGameReleaseKey(int key, int a, int b) {
	instance->releaseKey(key, a, b);
}

int main(int argc, char **argv) {
	srand(time(0));

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(instance->wid, instance->hei);
	glutCreateWindow("MonkeyGame");
	glClearColor(0.529, 0.8, 0.98, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, instance->wid, 0, instance->hei);

	glutDisplayFunc(MainGameDisplay);
	glutSpecialFunc(MainGamePressKey);
	glutSpecialUpFunc(MainGameReleaseKey);
	glutTimerFunc(instance->tim, Timer, 0);

	glutMainLoop();
	MainGame::clear_instance();

	return 0;
}
