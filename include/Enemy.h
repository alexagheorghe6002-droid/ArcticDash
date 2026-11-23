//
// Created by Administrator on 23/11/2026.
//

#ifndef OOP_ENEMY_H
#define OOP_ENEMY_H
#include "Direction.h"
#include "Position.h"

class Enemy {
public:
    Enemy(const Position &pos, Direction dir);

    friend std::ostream &operator<<(std::ostream &os, const Enemy &enemy);

private:
    Position pos_;
    Direction direction_;
};

#endif //OOP_ENEMY_H
