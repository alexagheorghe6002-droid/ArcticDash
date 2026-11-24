//
// Created by Administrator on 23/11/2026.
//

#ifndef OOP_MAP_H
#define OOP_MAP_H
#include <vector>
#include "Tile.h"
#include "Position.h"
#include <string>

class Map {
public:
    explicit Map(const std::vector<std::string>&);
    friend std::ostream &operator<<(std::ostream &os, const Map &map);
    bool isWall(const Position& pos) const;
    void iceTransform(const Position& pos);
    Map(const Map &other);
    Map &operator=(const Map &other);
    ~Map();
private:
    std::vector<std::vector<Tile>>grid_;
};


#endif //OOP_MAP_H
