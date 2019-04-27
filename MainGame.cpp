#include "MainGame.h"
#include "Thing.h"
#include "Banana.h"
#include "Bomb.h"
#include "Monkey.h"
#include "Pictures.h"

#include <iostream>
#include <cstdlib>
#include <GL/glut.h>
#include <ctime>
#include <math.h>
using namespace std;

MainGame* MainGame::instance = NULL;

MainGame* MainGame::get_instance()
{
    f (!instance)
    {
        cout <<"Warning - an empty MainGame was created. Don't expect much." <<endl;
        instance = new Forest;
    }
    return instance;
}

void MainGame::clear_instance()
{
    delete instance;
    instance = NULL;
}

MainGame::MainGame(){
    int N = 30;
    int K = 40;
    int shag = 20;
    int wid = shag * N;
    int hei = shag * K;
    int dir = 0;
    int tim = 25;
    int score = 0;
    double q = 0;
}

void MainGame::Display(){
    glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < 5; i++) {
		banan[i].draw();
	}
	for (int i = 0; i < 3; i++) {
		bomb[i].draw();
	}

	monkey[0].DrawMonkey();
	obj[0].heart1();
    obj[0].heart2();
    obj[0].heart3();
    if (obj[0].f == 1){
        obj[0].GameOver();
    }

	glFlush();
	glutSwapBuffers();
}

void MainGame::pressKey(int key, int a, int b){
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

void MainGame::releaseKey(int key, int xx, int yy){
    switch (key) {
	case GLUT_KEY_RIGHT:  dir = 0;
		break;
	case GLUT_KEY_LEFT:  dir = 0;
		break;
	}
}

void MainGame::Motion(){
    switch(dir){
        case 1: monkey[0].x += 0.4;
            break;
        case 2: monkey[0].x -= 0.4;
            break;
        case 0:
            break;
    }

    if (monkey[0].x >= (N - 2)){
        monkey[0].x = N - 2;
    }
    if (monkey[0].x <= 0){
        monkey[0].x = 0;
    }

    for (int i = 0; i < 5; i++){
        if ((fabs(monkey[0].x - banan[i].x) < 2) && (fabs(monkey[0].y - banan[i].y) < 4)){
            banan[i].release();
            q += 0.01;
            score++;
        }
    }

    for (int i = 0; i < 3; i++){
        if ((fabs(monkey[0].x - bomb[i].x) < 2) && (fabs(monkey[0].y - bomb[i].y) < 4)){
            bomb[i].release();
            obj[0].p++;
        }
    }

     for (int i = 0; i < 5; i++){
        banan[i].fall(q);
        if (banan[i].y < 0){
            banan[i].release();
        }
    }
    for (int i = 0; i < 3; i++){
        bomb[i].fall(q);
        if (bomb[i].y < 0){
            bomb[i].release();
        }
    }
}

void MainGame::Timer(int = 0){
    display();
	motion();
	if (obj[0].f == 1){
		return;
	}
	glutTimerFunc(tim, timer, 0);
}
