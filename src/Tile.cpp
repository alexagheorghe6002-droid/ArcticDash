//
// Created by Administrator on 23/11/2026.
//

#include <iostream>
#include "Tile.h"

Tile::Tile(TileType T) : type_(T) {
}

void Tile::stepOn() {
    if (type_ == TileType::ThinIce) {
        timesStepped_++;
        if (timesStepped_ == 2) {
            type_ = TileType::Water;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const Tile &tile) {
    switch (tile.type_) {
        case TileType::IceWall: os << '#';
            break;
        case TileType::Water: os << 'W';
            break;
        case TileType::IceFloor: os << '.';
            break;
        case TileType::ThinIce: os << '~';
            break;
    }
    return os;
}
