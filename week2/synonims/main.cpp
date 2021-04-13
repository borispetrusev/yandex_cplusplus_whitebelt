#include <iostream>
#include <set>
#include <map>
#include <string>

int main() {
    int Q;
    std::map<std::string, std::set<std::string>> syn_dict;
    std::cin>>Q;
    for (int i=0; i<Q; ++i) {
        std::string command;
        std::cin >> command;
        if (command=="COUNT") {
            std::string word;
            std::cin >> word;
            std::cout << syn_dict[word].size() << std::endl;
        } else if (command=="CHECK") {
            std::string word1, word2;
            std::cin >> word1 >> word2;
            if (syn_dict[word1].count(word2)) {
                std::cout<<"YES"<<std::endl;
            } else {
                std::cout<<"NO"<<std::endl;
            }
        } else if (command=="ADD") {
            std::string word1, word2;
            std::cin >> word1 >> word2;
            syn_dict[word1].insert(word2);
            syn_dict[word2].insert(word1);
        }
    }

    return 0;
}
