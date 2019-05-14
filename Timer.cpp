#include "Timer.h"
#include "MainGame.h"
#include "GL/glut.h"

void Timer(int) {
	MainGame::instance->Display();
	MainGame::instance->Motion();
	if (MainGame::instance->obj[0].f == 1) {
		return;
	}
	glutTimerFunc(MainGame::instance->tim, Timer, 0);
}
