#ifndef THING_H
#define THING_H

class MainGame;
class Thing
{
    public:
        double x, y;
        int score;

        virtual void draw() = 0;
};

#endif // THING_H
