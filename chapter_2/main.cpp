#include "io.h"

int main(){
    int a{readNumber()};
    int b{readNumber()};

    int sum{};
    sum = a + b;
    writeAnswer(sum);

    return 0;
}