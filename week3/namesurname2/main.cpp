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
        const std::string first_name = GetNameByYear(year, first_names);
        const std::string last_name = GetNameByYear(year, last_names);

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
};

int main() {

    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        std::cout << person.GetFullNameWithHistory(year) << std::endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullNameWithHistory(year) << std::endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullNameWithHistory(year) << std::endl;
    }

    person.ChangeFirstName(1990, "Polina");
    person.ChangeLastName(1990, "Volkova-Sergeeva");
    std::cout << person.GetFullNameWithHistory(1990) << std::endl;

    person.ChangeFirstName(1966, "Pauline");
    std::cout << person.GetFullNameWithHistory(1966) << std::endl;

    person.ChangeLastName(1960, "Sergeeva");
    for (int year : {1960, 1967}) {
        std::cout << person.GetFullNameWithHistory(year) << std::endl;
    }

    person.ChangeLastName(1961, "Ivanova");
    std::cout << person.GetFullNameWithHistory(1967) << std::endl;

    return 0;
}
