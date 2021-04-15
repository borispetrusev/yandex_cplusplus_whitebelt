#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int Q;
    std::cin >> Q;
    std::vector<char> str(Q);
    for (int i=0; i < Q; ++i) {
        char temp;
        std::cin >> temp;
        str.push_back(temp);
    }
    std::sort(begin(str), end(str), [](char s, char j) {
        return tolower(s) < tolower(j);
    });

    for (const char& s: str) {
        std::cout << s << " ";
    }

    return 0;
}
