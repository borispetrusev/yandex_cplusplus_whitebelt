#include <iostream>
#include <string>
#include <vector>

int main() {
    int q=0;
    const std::vector<int> day_count = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int current_month=0;
    std::vector<std::vector<std::string>> todolist(day_count[current_month]);
    std::cin>>q;
    for (int i=0; i < q; ++i) {
        std::string command;
        std::cin >> command;
        if (command == "ADD") {
            int day=0;
            std::string task;
            std::cin >> day >> task;
            todolist[day-1].push_back(task);
        }
        else if (command == "DUMP") {
            int day=0;
            std::cin >> day;
            std::cout << todolist[day-1].size() <<" ";
            for (auto task: todolist[day-1]) {
                std::cout << task << " ";
            }
            std::cout << std::endl;
        }
        else if (command == "NEXT") {
            if (current_month == 11) {
                current_month = 0;
            } else {
                current_month += 1;
            }
            if (todolist.size() < day_count[current_month]) {
                todolist.resize(day_count[current_month], {});
            }  else if (todolist.size() > day_count[current_month]) {
                int day = todolist.size() - 1;
                while (day > day_count[current_month] - 1) {
                    todolist[day_count[current_month]-1].insert(
                            end(todolist[day_count[current_month]-1]),
                            begin(todolist[day]),
                            end(todolist[day]));
                    --day;

                }
                todolist.resize(day_count[current_month], {});

            }

        }

    }

    return 0;
}
