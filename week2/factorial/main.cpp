#include <iostream>

int Factorial (int x) {
    if (x <=0) {
        return 1;
    }
    int out = 1;
    for (int i = 1; i <= x; ++i) {
        out *= i;
    }
    return out;
}

int main() {
    //std::cout << Factorial(4) << std::endl;
    return 0;
}
