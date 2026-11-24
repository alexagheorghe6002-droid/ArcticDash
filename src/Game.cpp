//
// Created by Administrator on 24/11/2026.
//

#include "Game.h"

Game::Game (const Map &map, const Player &player, const std::vector<Enemy> &enemies, const std::vector<Fruit> &fruits)
    : map_ (map), player1_(player), enemies_(enemies), fruits_(fruits){}

std::ostream &operator<<(std::ostream &os, const Game &game) {
    os<<game.map_<<std::endl;
    os<<game.player1_<<std::endl;
    for (const auto &enemy: game.enemies_) {
        os<<enemy<<std::endl;
    }
    for (const auto &fruit: game.fruits_) {
        os<<fruit<<std::endl;
    }
    return os;
}

void Game::movePlayer(Direction dir) {
    player1_.move(map_, dir);
    map_.stepOn(player1_.getPosition());
}

void Game::playerIceTransform() {
    player1_.iceTransform(map_);
}
