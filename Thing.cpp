#include "Thing.h"
#include <cstdlib>

void Thing::release(int N, int K) {
	x = rand() % N;
	y = rand() % K + K;
}
