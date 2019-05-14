#pragma once

class Thing {

	friend class MainGame;

protected:

	double x, y;

public:

	virtual void draw(int) = 0;

	virtual void fall(double) = 0;

	void release(int, int);

};
