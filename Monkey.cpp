#include "Monkey.h"

#include <iostream>
#include <cstdlib>
#include <GL/glut.h>
using namespace std;

Monkey::Monkey(){
    x = N / 2 - 0.5;
    y = 0;
}

void Monkey::DrawMonkey(){
    glColor3f(0.94, 0.9, 0.55);
    glRectd((x + 0.7) * shag, (y + 1.25) * shag, (x + 1.4) * shag, (y + 2.75) * shag);
    glRectd((x + 0.8) * shag, (y + 3.4) * shag, (x + 2) * shag, (y + 4.6) * shag);

    glColor3f(0.54, 0.278, 0.149);
    glRectd(x * shag, y * shag, (x + 2) * shag, (y + 0.5) * shag);
    glRectd((x + 1.75) * shag, (y + 0.5) * shag, (x + 1.30) * shag, (y + 1) * shag);
    glRectd((x + 0.7) * shag, (y + 1) * shag, (x + 1.95) * shag, (y + 1.25) * shag);
    glRectd((x + 1.25) * shag, (y + 1.25) * shag, (x + 2.75) * shag, (y + 1.5) * shag);
    glRectd((x + 2.5) * shag, (y + 1.5) * shag, (x + 3) * shag, (y + 1.75) * shag);
    glRectd((x + 2.75) * shag, (y + 1.75) * shag, (x + 3.15) * shag, (y + 2) * shag);
    glRectd((x + 3) * shag, (y + 2) * shag, (x + 3.25) * shag, (y + 3.15) * shag);
    glRectd((x + 3)* shag, (y + 3.15) * shag, (x + 3.75) * shag, (y + 3.4) * shag);
    glRectd((x + 1.4) * shag, (y + 1.25) * shag, (x + 1.95) * shag, (y + 3) * shag);
    glRectd((x + 0.75) * shag, (y + 2.7) * shag, (x + 1.4) * shag, (y + 3) * shag);
    glRectd((x - 0.25) * shag, (y + 2.5) * shag, (x + 0.75) * shag, (y + 2.75) * shag);
    glRectd((x - 0.4) * shag, (y + 2.75) * shag, (x + 0.1) * shag, (y + 3) * shag);
    glRectd((x - 0.5) * shag, (y + 3) * shag, (x - 0.25) * shag, (y + 3.4) * shag);
    glRectd(x * shag, (y + 3) * shag, (x + 0.25) * shag, (y + 3.3) * shag);
    glRectd((x + 1.4) * shag, (y + 3) * shag, (x + 1.75) * shag, (y + 3.4) * shag);
    glRectd((x + 0.8) * shag, (y + 3.4) * shag, (x + 2) * shag, (y + 3.6) * shag);
    glRectd((x + 1.35) * shag, (y + 3.6) * shag, (x + 2) * shag, (y + 3.75) * shag);
    glRectd((x + 1.5) * shag, (y + 3.75) * shag, (x + 2) * shag, (y + 4.6) * shag);
    glRectd((x + 0.8) * shag, (y + 4.25) * shag, (x + 2) * shag, (y + 4.6) * shag);
    glRectd((x + 2) * shag, (y + 4) * shag, (x + 2.25) * shag, (y + 4.4) * shag);

    glColor3f(0.0, 0.0, 0.0);
    glRectd((x + 0.8) * shag, (y + 3.9) * shag, (x + 1) * shag, (y + 4.1) * shag);
}
