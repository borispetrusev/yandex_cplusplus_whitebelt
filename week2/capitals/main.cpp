#include <iostream>
#include <string>
#include <map>

int main() {
    int Q;
    std::cin >> Q;
    std::map<std::string, std::string> country_dict;
    for (int i=0; i<Q; ++i) {
        std::string command;
        std::cin >> command;
        if (command == "DUMP") {
            if (country_dict.size() == 0) {
                std::cout << "There are no countries in the world" << std::endl;
            } else {
                for (const auto& pair: country_dict) {
                    std::cout << pair.first << "/" << pair.second << " ";
                }
                std::cout << std::endl;
            }
        } else if (command == "ABOUT") {
            std::string country;
            std::cin >> country;
            if (country_dict.count(country) != 0) {
                std::cout << "Country " << country << " has capital " << country_dict[country] << std::endl;
            } else {
                std::cout << "Country " << country << " doesn't exist" << std::endl;
            }
        } else if (command == "RENAME") {
            std::string old_country, new_country;
            std::cin >> old_country >> new_country;
            if (new_country == old_country || country_dict.count(old_country) == 0
            || country_dict.count(new_country) != 0) {
                std::cout << "Incorrect rename, skip" << std::endl;
            } else {
                country_dict[new_country] = country_dict[old_country];
                country_dict.erase(old_country);
                std::cout << "Country " << old_country << " with capital " <<country_dict[new_country] << " has been renamed to " << new_country << std::endl;
            }
        } else if (command == "CHANGE_CAPITAL") {
            std::string country, capital;
            std::cin >> country >> capital;
            if (country_dict.count(country) == 0) {
                country_dict[country] = capital;
                std::cout << "Introduce new country " << country << " with capital " << capital << std::endl;
            } else if (capital == country_dict[country]) {
                std::cout << "Country " << country << " hasn't changed its capital" << std::endl;
            } else {
                std::cout << "Country " << country << " has changed its capital from "<< country_dict[country] <<" to " << capital <<std::endl;
                country_dict[country] = capital;
            }
        }


    }

    return 0;
}
