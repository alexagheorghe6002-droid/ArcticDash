//
// Created by Administrator on 24/11/2026.
//

#ifndef OOP_GAME_H
#define OOP_GAME_H
#include "Player.h"
#include "Enemy.h"
#include "Fruit.h"
#include "Map.h"

class Game {
    public:
     Game(const Map &map, const Player &player, const std::vector<Enemy> &enemies, const std::vector<Fruit> &fruits);
    friend std::ostream &operator<<(std::ostream &os, const Game &game);
private:

    Map map_;
    Player player1_;
    std::vector<Enemy> enemies_;
    std::vector<Fruit> fruits_;
};
#endif //OOP_GAME_H
