#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <nlohmann/json.hpp>
#include "Map.h"
#include "Direction.h"
#include "Player.h"
#include "Fruit.h"
#include "Enemy.h"
#include "Game.h"


static Direction parseDirection(const std::string& text) {
    if (text == "Left") {
        return Direction::Left;
    }
    if (text == "Right") {
        return Direction::Right;
    }
    if (text == "Up") {
        return Direction::Up;
    }
    if (text == "Down") {
        return Direction::Down;
    }
    return Direction::Right;
}
int main() {
    std::ifstream fisier("nivel1.json");
    nlohmann::json date = nlohmann::json::parse(fisier);
    std::vector<std::string> rows = date["map"].get<std::vector<std::string>>();
    Map map(rows);
    
    int px = date["player"]["x"].get<int>();
    int py = date["player"]["y"].get<int>();
    Direction pdir = parseDirection(date["player"]["dir"].get<std::string>());

    Player player(Position(px, py), pdir);

    std::vector<Fruit> fruits;
    for (const auto& f : date["fruits"]) {
        int fx = f["x"].get<int>();
        int fy = f["y"].get<int>();
        int fpoints = f["points"].get<int>();
        fruits.push_back(Fruit(fpoints, Position(fx, fy)));
    }

    std::vector<Enemy> enemies;
    for (const auto& e : date["enemies"]) {
        int ex = e["x"].get<int>();
        int ey = e["y"].get<int>();
        Direction edir = parseDirection(e["dir"].get<std::string>());
        enemies.push_back(Enemy(Position(ex, ey), edir));
    }
    Game game(map, player, enemies, fruits);
    std::cout << game;
    return 0;
}
