#include <iostream>
#include <vector>

std::vector<int> Reversed(const std::vector<int>& v) {
    std::vector<int> temp;
    for (int i=v.size()-1; i>=0; --i) {
        temp.push_back(v[i]);
    }
    return temp;
}

int main() {
    return 0;
}
