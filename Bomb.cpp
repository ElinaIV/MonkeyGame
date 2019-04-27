#include "Bomb.h"
#include <GL/glut.h>

void Bomb::draw(){
    glColor3f(0.41, 0.41, 0.41);
    glRectd((x + 0.3) * shag, y * shag, (x + 0.7) * shag, (y + 1) * shag);
    glRectd(x * shag, (y + 0.3) * shag, (x + 1) * shag, (y + 0.7) * shag);
    glRectd((x + 0.15) * shag, (y + 0.15) * shag, (x + 0.85) * shag, (y + 0.85) * shag);

    glColor3f(0.54, 0.278, 0.149);
    glRectd((x + 0.45) * shag, (y + 1) * shag, (x + 0.55) * shag, (y + 1.3) * shag);

    glColor3f(1.0, 0.27, 0.0);
    glRectd((x + 0.4) * shag, (y + 1.25) * shag, (x + 0.6) * shag, (y + 1.5) * shag);

}

