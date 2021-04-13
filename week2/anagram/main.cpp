#include <iostream>
#include <map>
#include <vector>
#include <string>

std::map<char,int> BuildCharCounters(const std::string& word) {
    std::map<char, int> output;
    for (auto ch: word) {
        ++output[ch];
    }
    return output;
};

int main() {
    int N;
    std::cin >> N;
    std::vector<std::string> result;
    for (int i=0; i<N; ++i) {
        std::string first, second;
        std::cin >> first >> second;
        std::map<char,int> dict1, dict2;
        dict1 = BuildCharCounters(first);
        dict2 = BuildCharCounters(second);
        if (dict1 == dict2) {
            result.push_back("YES");
        } else {
            result.push_back("NO");
        }
    }

    for (auto item: result) {
        std::cout << item << std::endl;
    }

    return 0;
}
