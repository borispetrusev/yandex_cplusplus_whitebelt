#include <iostream>
#include <string>
#include <map>

class Person {
public:
    void ChangeFirstName(int year, const std::string& first_name) {
        // добавить факт изменения имени на first_name в год year
        first_names[year] = first_name;
    }
    void ChangeLastName(int year, const std::string& last_name) {
        // добавить факт изменения фамилии на last_name в год year
        last_names[year] = last_name;
    }
    std::string GetFullName(int year) {
        // получить имя и фамилию по состоянию на конец года year
        std::string first_name = GetName(year, first_names);
        std::string second_name = GetName(year, last_names);
        if (first_name == "Incognito" && second_name == "Incognito") {
            return "Incognito";
        } else if (first_name == "Incognito") {
            return second_name + " with unknown first name";
        } else if (second_name == "Incognito") {
            return first_name + " with unknown last name";
        } else return first_name + " " + second_name;
    }
private:
    // приватные поля
    std::map<int, std::string> first_names;
    std::map<int, std::string> last_names;

    std::string GetName(int year,std::map<int, std::string>& db) {
        std::string output;
        int cnt = 0;
        int diff = 9999;
        if (db.find(year) != db.end()) {
            return db[year];
        }
        
        for (auto rec: db) {
            if (rec.first > year) {
                break;
            }
            ++cnt;
            int new_diff = year - rec.first;
            if (new_diff < diff) {
                diff = new_diff;
                output = rec.second;
            }

        }
        if (cnt==0) {
            return "Incognito";
        } else {
            return output;
        }
    }

};

int main() {
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        std::cout << person.GetFullName(year) << std::endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullName(year) << std::endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullName(year) << std::endl;
    }

    return 0;
}
