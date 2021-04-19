#include <iostream>
#include <string>

class ReversibleString {
public:
    ReversibleString() {};
    ReversibleString(const std::string& input) {
        storage = input;
    };
    void Reverse() {
        std::string temp="";
        for (int i = storage.size()-1; i>=0; --i) {
            temp += storage[i];
        }
        storage = temp;
    };
    std::string ToString() const {
        return storage;
    }

private:
    std::string storage;

};


int main() {
    ReversibleString s("live");
    s.Reverse();
    std::cout << s.ToString() << std::endl;

    s.Reverse();
    const ReversibleString& s_ref = s;
    std::string tmp = s_ref.ToString();
    std::cout << tmp << std::endl;

    ReversibleString empty;
    std::cout << '"' << empty.ToString() << '"' << std::endl;
    return 0;
}
