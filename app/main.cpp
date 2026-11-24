#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <nlohmann/json.hpp>
#include "Map.h"

int main() {
    std::ifstream fisier("nivel1.json");
    nlohmann::json date = nlohmann::json::parse(fisier);
    std::vector<std::string> rows = date["map"].get<std::vector<std::string>>();
    Map map(rows);
    std::cout << map;


    return 0;
}
