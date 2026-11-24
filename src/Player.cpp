//
// Created by Administrator on 24/11/2026.
//
#include <iostream>
#include "Player.h"

Player::Player(const Position &pos, Direction dir) : pos_(pos), direction_(dir) {
}

std::ostream &operator<<(std::ostream &os, const Player &player) {
    if (player.alive_) {
        //daca e in viata
        os << "Player is alive"<< std::endl;
        os << "Player collected: "<< player.points_<< std::endl;
        os << "Player at " << player.pos_ << ", ";
        switch (player.direction_) {
            case Direction::Right: os << "Direction is right";
                break;
            case Direction::Left: os << "Direction is left";
                break;
            case Direction::Down: os << "Direction is down";
                break;
            case Direction::Up: os << "Direction is up";
                break;
        }
    }
    else
        {
            os << "Player is dead";
        }
        return os;
    }

