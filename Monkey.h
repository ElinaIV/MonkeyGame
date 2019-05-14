#pragma once

class Monkey {

	friend class MainGame;

protected:

	double x, y;

public:
	Monkey(int);

	void DrawMonkey(int);
};
