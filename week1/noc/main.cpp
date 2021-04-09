#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    bool found = false;
    while (!found) {
        if (a != 0 && b != 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        } else {
            std::cout << a + b;
            found = true;
        }
    }

    return 0;
}
