#include <iostream>
#include <string>
#include <map>
#include <set>

int main() {
    int Q;
    std::cin >> Q;
    std::map<std::set<std::string>, int> bus_stops;
    for (int i=0; i < Q; ++i) {
        int N;
        std::cin >> N;
        std::set<std::string> stops;
        for (int j=0; j < N; ++j) {
            std::string stop;
            std::cin >> stop;
            stops.insert(stop);
        }
        if (bus_stops.count(stops)) {
            std::cout << "Already exists for " << bus_stops[stops] <<std::endl;
        } else {
            int old_size=bus_stops.size();
            bus_stops[stops] = old_size + 1;
            std::cout << "New bus " <<old_size+1 <<std::endl;
        }
    }

    return 0;
}
