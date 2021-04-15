#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int Q;
    std::vector<int> nums;
    std::cin >> Q;
    for (int i=0; i<Q; ++i) {
        int temp;
        std::cin >> temp;
        nums.push_back(temp);
    }

    std::sort(begin(nums), end(nums), [](int x, int y) {
        return abs(x) < abs(y);
    });


    for (auto num: nums) {
        std::cout << num << " ";
    }

    return 0;
}
