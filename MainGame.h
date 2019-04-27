#ifndef MAINGAME_H
#define MAINGAME_H

#include <GL/glut.h>

class Thing;
class Monkey;
class Pictures;
class MainGame
{
    public:
        static MainGame* get_instance();
        static void clear_instance();

        void Display();
        void pressKey(int key, int a, int b);
        void releaseKey();
        void Motion();
        void Timer();

    private:
        MainGame();
        static MainGame* instance();
};

#endif // MAINGAME_H
