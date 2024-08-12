#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int myAdd(int a, int b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int mySub(int a, int b) {
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
int myMul(int a, int b) {
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
double myDiv(int a, int b) {
    if (b == 0 ) {
        return 0.0;
    }
    return (double)a / (double)b;
}

int main() {return 0;}
