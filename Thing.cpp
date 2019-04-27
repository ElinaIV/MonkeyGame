#include "Thing.h"
#include "MainGame.h"

#include <iostream>
#include <cstdlib>

void Thing::release(){
    x = rand() % N;
    y = rand() % K + K;
}

void Thing::fall(double a){
    y -= 0.25 + a;
}
