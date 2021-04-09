#include <iostream>
#include <vector>

int main() {
    int N;
    std::vector<int> binary;
    std::cin >> N;
    while (N > 0) {
        binary.push_back(N % 2);
        N /= 2;
    }
    for (int i=binary.size()-1; i > -1; --i) {
        std::cout <<binary[i];
    }

    return 0;
}
