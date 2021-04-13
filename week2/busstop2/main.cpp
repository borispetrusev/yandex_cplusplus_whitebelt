#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    int Q;
    std::cin >> Q;
    std::map<std::vector<std::string>,int> bus_stops;
    for (int i=0; i<Q; ++i) {
        int count;
        std::cin >> count;
        std::vector<std::string> temp;
        for (int j=0; j<count; ++j) {
            std::string t;
            std::cin >> t;
            temp.push_back(t);
        }
        if (bus_stops.count(temp) == 0) {
            int cur_size = bus_stops.size();
            bus_stops[temp] = cur_size + 1;
            std::cout << "New bus " << bus_stops[temp] << std::endl;
        } else {
            std::cout << "Already exists for " <<bus_stops[temp] <<std::endl;
        }
    }
    return 0;
}
