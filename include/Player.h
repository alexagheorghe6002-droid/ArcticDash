//
// Created by Administrator on 24/11/2026.
//

#ifndef OOP_PLAYER_H
#define OOP_PLAYER_H
#include "Direction.h"
#include "Position.h"
#include "Map.h"
#include <iostream>


class Player {
public:
    Player(const Position &pos, Direction dir);

    friend std::ostream &operator<<(std::ostream &os, const Player &player);
    void move(const Map &map, const Direction &dir);
    void iceTransform(Map& map);
private:
    int points_=0;
    bool alive_=true;
    Position pos_;
    Direction direction_;
};
#endif //OOP_PLAYER_H
