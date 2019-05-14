#pragma once

class Pictures {

	friend class MainGame;
	friend void Timer(int);

protected:

	int p, f;

public:
	Pictures();
	void heart1();
	void heart2();
	void heart3();
	void GameOver(int, int);

};
