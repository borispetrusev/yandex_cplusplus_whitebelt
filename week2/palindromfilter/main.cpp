#include <iostream>
#include <string>
#include <vector>

bool IsPalindrom (std::string input) {
    if (input.size() <= 1) {
        return true;
    }
    std::string new_string = "";
    for (int i = input.size() - 1; i >= 0; --i) {
        new_string += input[i];
    }
    if (new_string == input) {
        return true;
    }

    return false;
}

std::vector<std::string> PalindromFilter(std::vector<std::string> input,
                                         int minLength) {
    std::vector<std::string> output;
    for (auto word: input) {
        if (IsPalindrom(word) && word.size() >= minLength) {
            output.push_back(word);
        }
    }
    return output;

}

int main() {
//    std::vector<std::string> test1, test2, test3;
//    test1 = PalindromFilter({"abacaba","aba"}, 5);
//    test2 = PalindromFilter({"abacaba","aba"}, 2);
//    test3 = PalindromFilter({"weew","bro","code"}, 4);
//    std::cout << "Test 1" <<std::endl;
//    for (auto word:test1) {
//        std::cout << word<<std::endl;
//    }
//
//    std::cout << "Test 2" <<std::endl;
//    for (auto word:test2) {
//        std::cout << word<<std::endl;
//    }
//
//    std::cout << "Test 3" <<std::endl;
//    for (auto word:test3) {
//        std::cout << word<<std::endl;
//    }

    return 0;
}
