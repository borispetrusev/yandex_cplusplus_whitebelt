#include <iostream>
#include <string>

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

int main() {
//    std::cout << isPalindrom("madam") << std::endl;
//    std::cout << isPalindrom("gentleman") << std::endl;
//    std::cout << isPalindrom("X") << std::endl;
    return 0;
}
