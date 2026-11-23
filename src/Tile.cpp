//
// Created by Administrator on 23/11/2026.
//

#include <iostream>
#include "Tile.h"

Tile::Tile(TileType T) : type_ (T) {
}

std::ostream &operator<<(std::ostream &os, const Tile &tile) {
    os <<"Tile type is: ";
    switch (tile.type_) {
        case TileType::IceWall: os << "IceWall";
            break;
        case TileType::Water: os << "Water";
            break;
        case TileType::IceFloor: os << "IceFloor";
            break;
        case TileType::ThinIce: os << "ThinIce";
            break;
    }
    return os;
}
