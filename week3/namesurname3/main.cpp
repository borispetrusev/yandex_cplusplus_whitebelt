#include <iostream>
#include <string>
#include <map>
#include <vector>


std::string GetNameByYear(int year, const std::map<int, std::string>& db) {
    std::string output;
    for (const auto& rec: db) {
        if (rec.first <= year) {
            output = rec.second;
        } else {
            break;
        }
    }
    return output;
}

std::vector<std::string> GetNameWithHistoryByYear (int year, const std::map<int, std::string>& db) {
    std::vector<std::string> output;
    for (const auto& rec: db) {
        if (rec.first <= year) {
            if (output.empty() || output.back() != rec.second) {
                output.push_back(rec.second);
            }
        }
    }
    return output;
}

class Person {
public:
    Person(const std::string& name, const std::string& surname, const int year) {
        birth_year = year;
        first_names[year] = name;
        last_names[year] = surname;
    }
    void ChangeFirstName(int year, const std::string& first_name) {
        // добавить факт изменения имени на first_name в год year
        if (year >= birth_year) {
            first_names[year] = first_name;
        }
    }
    void ChangeLastName(int year, const std::string& last_name) {
        // добавить факт изменения фамилии на last_name в год year
        if (year >= birth_year) {
            last_names[year] = last_name;
        }
    }
    std::string GetFullName(int year) {
        // получить имя и фамилию по состоянию на конец года year
        const std::string first_name = GetNameByYear(year, first_names);
        const std::string last_name = GetNameByYear(year, last_names);

        if (year < birth_year) {
            return "No person";
        }

        if (first_name.empty() && last_name.empty()) {
            return "Incognito";
        } else if (first_name.empty()) {
            return last_name + " with unknown first name";
        } else if (last_name.empty()) {
            return first_name + " with unknown last name";
        } else {
            return first_name + " " + last_name;
        }

    }

    std::string ConstructOutput(std::vector<std::string> input) {
        std::string output;
        if (input.size()==0) {
            output = "Incognito";
        } else if (input.size()==1) {
            output = input[0];
        } else if (input.size()==2) {
            output = input[1] +" ("+input[0] +")";
        } else {
            output=input[input.size()-1]+" ("+input[input.size()-2];
            for (int i = input.size()-3; i>=0; --i) {
                output = output + ", " + input[i];
            }
            output = output + ")";
        }

        return output;
    }


    std::string GetFullNameWithHistory(int year) {
        // получить все имена и фамилии по состоянию на конец года year
        if (year < birth_year) {
            return "No person";
        }

        const std::vector<std::string> first_name = GetNameWithHistoryByYear(year, first_names);
        const std::vector<std::string> last_name = GetNameWithHistoryByYear(year, last_names);
        if (first_name.size()==0 && last_name.size()==0) {
            return "Incognito";
        }
        std::string first_output=ConstructOutput(first_name);
        std::string second_output=ConstructOutput(last_name);
        if (first_output=="Incognito") {
            return second_output + " with unknown first name";
        } else if (second_output=="Incognito") {
            return first_output + " with unknown last name";
        } else {
            return first_output + " " + second_output;
        }


    }
private:
    // приватные поля
    std::map<int, std::string> first_names;
    std::map<int, std::string> last_names;
    int birth_year;
};

int main() {

    Person person("Polina", "Sergeeva", 1960);
    for (int year : {1959, 1960}) {
        std::cout << person.GetFullNameWithHistory(year) << std::endl;
    }

    person.ChangeFirstName(1965, "Appolinaria");
    person.ChangeLastName(1967, "Ivanova");
    for (int year : {1965, 1967}) {
        std::cout << person.GetFullNameWithHistory(year) << std::endl;
    }

    return 0;
}
