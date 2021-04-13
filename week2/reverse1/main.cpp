#include <iostream>
#include <vector>

void Reverse(std::vector<int>& v) {
    std::vector<int> temp;
    for (int i=v.size()-1; i>=0; --i) {
        temp.push_back(v[i]);
    }
    v = temp;
}

int main() {
//    std::vector<int> numbers = {1, 5, 3, 4, 2};
//    Reverse(numbers);
//
//    for (auto num: numbers) {
//        std::cout<<num<<std::endl;
//    }
    return 0;
}
