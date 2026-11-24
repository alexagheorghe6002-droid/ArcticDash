//
// Created by Administrator on 23/11/2026.
//

#include "Map.h"
#include <iostream>

Map::Map(const std::vector<std::string> &rows) {
    for (const auto &row: rows) {
        std::vector<Tile> tileRow;

        for (char c: row) {
            switch (c) {
                case '#':
                    tileRow.push_back(Tile(TileType::IceWall));
                    break;
                case '~':
                    tileRow.push_back(Tile(TileType::ThinIce));
                    break;
                case 'W':
                    tileRow.push_back(Tile(TileType::Water));
                    break;
                case '.':
                default:
                    tileRow.push_back(Tile(TileType::IceFloor));
                    break;
            }
        }

        grid_.push_back(tileRow);
    }
}

std::ostream &operator<<(std::ostream &os, const Map &map) {
    for (const auto &row: map.grid_) {
        for (const auto &tile: row) {
            os << tile;
        }
        os << '\n';
    }
    return os;
}

bool Map::isWall(const Position& pos) const {
    int x = pos.getX();
    int y = pos.getY();

    if (y < 0 || y >= static_cast<int>(grid_.size()) ||
        x < 0 || x >= static_cast<int>(grid_[y].size())) {
        return true;
        }

    return grid_[y][x].isWall();
}

