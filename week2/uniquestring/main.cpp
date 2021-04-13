#include <iostream>
#include <set>
#include <string>

int main() {
    int Q;
    std::set<std::string> string_collection;
    std::cin >> Q;
    for (int i=0; i<Q; ++i) {
        std::string input;
        std::cin >> input;
        string_collection.insert(input);
    }
    std::cout << string_collection.size();
    return 0;
}
