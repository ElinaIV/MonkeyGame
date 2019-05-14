#pragma once
#include "Banana.h"
#include "Bomb.h"
#include "Monkey.h"
#include "Pictures.h"


class MainGame {

	friend void Timer(int);
	friend int main(int, char **);

public:
	static MainGame* get_instance();
	static void clear_instance();

	void Display();
	void pressKey(int, int, int);
	void releaseKey(int, int, int);
	void Motion();

	~MainGame();

protected:
	int N;
	int K;
	int shag;
	int wid;
	int hei;
	int dir;
	int tim;
	int score;
	double q;

	Monkey *monkey;
	Banana *banan;
	Bomb *bomb;
	Pictures *obj;

	MainGame();
	static MainGame* instance;
};
