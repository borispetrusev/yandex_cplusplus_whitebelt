#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (b != 0) {
        int out = a / b;
        std::cout << out;
    } else {
        std::cout << "Impossible";
    }

    return 0;
}
