#include <iostream>
#include <string>

int main() {
    std::string a;
    std::cin >> a;
    int f = 0;
    for (int i=0; i < a.size(); ++i) {
        if (a[i] == 'f') {
            if (f == 0) {
                ++f;
            } else if (f==1) {
                std::cout << i;
                ++f;
                break;
            }
        }
    }
    if (f==0) {
        std::cout << -2;
    } else if (f==1) {
        std::cout << -1;
    }

    return 0;
}
