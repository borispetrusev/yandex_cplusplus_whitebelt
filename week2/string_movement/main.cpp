#include <iostream>
#include <vector>
#include <string>

void MoveStrings(std::vector<std::string>& source,
                 std::vector<std::string>& destination) {
    for (auto word: source) {
        destination.push_back(word);
    }
    source.clear();
}

int main() {

    return 0;
}
