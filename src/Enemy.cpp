//
// Created by Administrator on 23/11/2026.
//

#include <iostream>
#include "Enemy.h"

Enemy::Enemy(const Position &pos, Direction dir) : pos_(pos), direction_(dir) {
}

std::ostream &operator<<(std::ostream &os, const Enemy &enemy) {
    os <<"Enemy at "<< enemy.pos_ << ", ";
    switch (enemy.direction_) {
        case Direction::Right: os << "Direction is right";
            break;
        case Direction::Left: os << "Direction is left";
            break;
        case Direction::Down: os << "Direction is down";
            break;
        case Direction::Up: os << "Direction is up";
            break;
    }
    return os;
}
