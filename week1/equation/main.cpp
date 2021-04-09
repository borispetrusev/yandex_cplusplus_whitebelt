#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a == 0 && b == 0) {
        return 0;
    }
    if (a == 0) {
        std::cout << -c / b;
    } else {
        double disc =b * b - 4 * a * c;
        if (disc == 0) {
            std::cout << -b / (2 * a);
        } else if (disc > 0) {
            disc =  std::sqrt(disc);
            std:: cout << (-b + disc) / (2 * a) <<" " << (-b - disc) / (2 * a);
        }
    }
    return 0;
}
