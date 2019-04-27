#include "Pictures.h"
#include "MainGame.h"

#include <iostream>
#include <cstdlib>
#include <GL/glut.h>

Pictures::Pictures(){
    p = 0;
    f = 0;
}

void Pictures::heart1(){
    if (p >= 3){
        f = 1;
        return;
    }
    glColor3f(1, 0.0, 0.0);
    glRectf(28, 22, 3, 15);
    glRectf(26, 15, 5, 11);
    glRectf(23, 11, 8, 9);
    glRectf(20, 9, 11, 7);
    glRectf(18, 7, 13, 5);
    glRectf(25, 24, 6, 22);
    glRectf(23, 26, 17, 24);
    glRectf(15, 26, 8, 24);
}

void Pictures::heart2(){
     if ((p == 2) || (p >= 3)){
        return;
    }
    glColor3f(1, 0.0, 0.0);
    glRectf(58, 22, 33, 15);
    glRectf(56, 15, 35, 11);
    glRectf(53, 11, 38, 9);
    glRectf(50, 9, 41, 7);
    glRectf(48, 7, 43, 5);
    glRectf(55, 24, 36, 22);
    glRectf(53, 26, 47, 24);
    glRectf(45, 26, 38, 24);
}

void Pictures::heart3(){
    if ((p == 1) || (p == 2) || (p >= 3)){
        return;
    }
    glColor3f(1, 0.0, 0.0);
    glRectf(88, 22, 63, 15);
    glRectf(86, 15, 65, 11);
    glRectf(83, 11, 68, 9);
    glRectf(80, 9, 71, 7);
    glRectf(78, 7, 73, 5);
    glRectf(85, 24, 66, 22);
    glRectf(83, 26, 77, 24);
    glRectf(75, 26, 68, 24);
}

void Pictures::GameOver(){
    glColor3f(0.0, 0.0, 0.0);
    glRectf(wid, hei, 0, 0);

    glColor3f(1.0, 1.0, 1.0);
    glRectf(120, 460, 100, 300);
    glRectf(200, 460, 120, 440);
    glRectf(200, 440, 180, 420);
    glRectf(200, 320, 120, 300);
    glRectf(200, 360, 180, 320);
    glRectf(180, 360, 160, 340);

    glRectf(300, 460, 280, 300);
    glRectf(380, 460, 300, 440);
    glRectf(360, 400, 300, 380);
    glRectf(380, 460, 360, 300);

    glRectf(480, 460, 460, 300);
    glRectf(500, 440, 480, 400);
    glRectf(520, 420, 500, 380);
    glRectf(540, 440, 520, 400);
    glRectf(560, 460, 540, 300);

    glRectf(660, 460, 640, 300);
    glRectf(740, 460, 660, 440);
    glRectf(740, 400, 660, 380);
    glRectf(740, 320, 660, 300);

    glRectf(120, 250, 100, 90);
    glRectf(200, 250, 120, 230);
    glRectf(200, 230, 180, 90);
    glRectf(180, 110, 120, 90);

    glRectf(300, 250, 280, 190);
    glRectf(320, 190, 300, 130);
    glRectf(340, 130, 320, 90);
    glRectf(360, 190, 340, 130);
    glRectf(380, 250, 360, 190);

    glRectf(480, 250, 460, 90);
    glRectf(560, 250, 480, 230);
    glRectf(560, 110, 480, 90);
    glRectf(560, 180, 480, 160);

    glRectf(660, 250, 640, 90);
    glRectf(740, 250, 660, 230);
    glRectf(740, 230, 720, 170);
    glRectf(740, 170, 660, 150);
    glRectf(680, 150, 660, 130);
    glRectf(720, 130, 680, 110);
    glRectf(740, 110, 720, 90);
}


