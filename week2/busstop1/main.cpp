#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    int Q;
    std::cin >> Q;
    std::map<std::string, std::vector<std::string>> bus_stops;
    std::map<std::string, std::vector<std::string>> stops_bus;
    for (int i=0; i<Q; ++i) {
        std::string command;
        std::cin >> command;
        if (command == "NEW_BUS") {
            int stop_count;
            std::string bus;
            std::cin >> bus >> stop_count;
            std::vector<std::string> temp;
            for (int j=0; j < stop_count; ++j) {
                std::string t;
                std::cin>>t;
                temp.push_back(t);


//                if (stops_bus.count(t)==0) {
               stops_bus[t].push_back(bus);
            //}
            }
            bus_stops[bus] = temp;
        } else if (command == "BUSES_FOR_STOP") {
            std::string stop;
            std::cin >> stop;
          if (stops_bus.count(stop)==0) {
              std::cout << "No stop" <<std::endl;
          } else {
              //std::cout << "Stop " << stop << ": ";
              for (auto word: stops_bus[stop]) {
                  std::cout <<word <<" ";
              }
              std::cout<<std::endl;
          }
        } else if (command == "ALL_BUSES") {
            if (bus_stops.size() == 0) {
                std::cout << "No buses" <<std::endl;
            } else {
                for (auto bus: bus_stops) {
                    std::cout << "Bus " << bus.first << ": ";
                    for (auto st: bus.second) {
                        std::cout << st << " ";
                    }
                    std::cout << std::endl;
                }
            }
        } else if (command == "STOPS_FOR_BUS") {
            std::string bus;
            std::cin >> bus;
            if (bus_stops.count(bus)==0) {
                std::cout << "No bus" << std::endl;
            } else {
                for (auto stop:bus_stops[bus]) {
                    if (stops_bus[stop].size() == 1) {
                        std::cout << "Stop " <<stop <<": no interchange" <<std::endl;
                    } else {
                        std::cout << "Stop " <<stop <<": ";
                        for (auto buses: stops_bus[stop]) {
                            if (buses != bus) {
                            std::cout << buses << " ";
                                }
                        }
                        std::cout << std::endl;
                    }
                }
            }

        }
    }

    return 0;
}
