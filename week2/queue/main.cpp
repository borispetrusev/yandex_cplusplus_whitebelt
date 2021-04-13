#include <iostream>
#include <vector>
#include <string>

int main() {
    int q;
    std::cin >> q;
    std::vector<bool> queue;
    for (int i=0; i<q; ++i) {
        std::string command;
        std::cin >> command;
        if (command == "WORRY") {
            int place;
            std::cin >> place;
            queue[place] = 1;
        } else if (command == "QUIET") {
            int place;
            std::cin >> place;
            queue[place] = 0;
        } else if (command == "COME") {
            int cnt;
            std::cin >> cnt;
            queue.resize(cnt+queue.size(), false);
        } else if (command == "WORRY_COUNT") {
            int cnt = 0;
            for (auto prs: queue) {
                cnt += prs;
            }
            std::cout << cnt << std::endl;
        }
    }
    return 0;
}
