//
// Created by Administrator on 23/11/2026.
//

#ifndef OOP_TILE_H
#define OOP_TILE_H
#include <iosfwd>


enum class TileType { IceWall, IceFloor, ThinIce, Water };

class Tile {
public:
    explicit Tile(TileType T);

    friend std::ostream &operator<<(std::ostream &os, const Tile &tile);

    void stepOn();

    bool isWall() const;

private:
    int timesStepped_ = 0;
    TileType type_;
};


#endif //OOP_TILE_H
