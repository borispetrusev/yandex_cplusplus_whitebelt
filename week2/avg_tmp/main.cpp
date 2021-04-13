#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> temps;
    int sum=0;
    for (int i=0; i < n; ++i) {
        int temp;
        std::cin>>temp;
        temps.push_back(temp);
        sum += temp;
    }
    std::vector<int>indices;
    double avg = sum / temps.size();
    for (int i=0; i < temps.size(); ++i) {
        if (temps[i] > avg) {
            indices.push_back(i);
        }
    }
    std::cout << indices.size() << std::endl;
    for (auto num: indices) {
        std::cout << num << " ";
    }
    return 0;
}
