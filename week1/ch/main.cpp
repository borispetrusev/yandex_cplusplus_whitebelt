#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    while (a <= b) {
        if (a % 2 == 0) {
            std::cout << a << " ";
        }
        ++a;
    }

    return 0;
}
