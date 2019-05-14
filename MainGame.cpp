#include "MainGame.h"
#include "GL/glut.h"
#include <iostream>
#include "Timer.h"
#include <cmath>

using namespace std;

MainGame* MainGame::instance = NULL;

MainGame* MainGame::get_instance()
{
	instance = new MainGame;

	if(!instance) {
		cout << "Warning - an empty MainGame was created. Don't expect much." << endl;
	}

	return instance;
}

MainGame::~MainGame() {
	delete[]monkey;
	delete[]banan;
	delete[]bomb;
	delete[]obj;
}

void MainGame::clear_instance()
{
	delete instance;
	instance = NULL;
}

MainGame::MainGame() {
	N = 30;
	K = 40;
	shag = 20;
	wid = shag * N;
	hei = shag * K;
	dir = 0;
	tim = 25;
	score = 0;
	q = 0;

	monkey = new Monkey[1]{N};
	banan = new Banana[5];
	bomb = new Bomb[3];
	obj = new Pictures[1];
}

void MainGame::Display() {
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < 5; i++) {
		banan[i].draw(shag);
	}
	for (int i = 0; i < 3; i++) {
		bomb[i].draw(shag);
	}

	monkey[0].DrawMonkey(shag);
	obj[0].heart1();
	obj[0].heart2();
	obj[0].heart3();
	if (obj[0].f == 1) {
		obj[0].GameOver(wid, hei);
	}

	glFlush();
	glutSwapBuffers();
}

void MainGame::pressKey(int key, int a, int b) {
	switch (key) {
	case GLUT_KEY_RIGHT:  dir = 1;
		break;
	case GLUT_KEY_LEFT:  dir = 2;
		break;
	case GLUT_KEY_F1:
		std::cerr << "Score: " << score << std::endl;
		exit(0);
		break;
	}
}

void MainGame::releaseKey(int key, int xx, int yy) {
	switch (key) {
	case GLUT_KEY_RIGHT:  dir = 0;
		break;
	case GLUT_KEY_LEFT:  dir = 0;
		break;
	}
}

void MainGame::Motion() {
	switch (dir) {
	case 1: monkey[0].x += 0.4;
		break;
	case 2: monkey[0].x -= 0.4;
		break;
	case 0:
		break;
	}

	if (monkey[0].x >= (N - 2)) {
		monkey[0].x = N - 2;
	}
	if (monkey[0].x <= 0) {
		monkey[0].x = 0;
	}

	for (int i = 0; i < 5; i++) {
		if ((fabs(monkey[0].x - banan[i].x) < 2) && (fabs(monkey[0].y - banan[i].y) < 4)) {
			banan[i].release(N, K);
			q += 0.01;
			score++;
		}
	}

	for (int i = 0; i < 3; i++) {
		if ((fabs(monkey[0].x - bomb[i].x) < 2) && (fabs(monkey[0].y - bomb[i].y) < 4)) {
			bomb[i].release(N, K);
			obj[0].p++;
		}
	}

	for (int i = 0; i < 5; i++) {
		banan[i].fall(q);
		if (banan[i].y < 0) {
			banan[i].release(N, K);
		}
	}
	for (int i = 0; i < 3; i++) {
		bomb[i].fall(q);
		if (bomb[i].y < 0) {
			bomb[i].release(N, K);
		}
	}
}
