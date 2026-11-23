//
// Created by Administrator on 23/11/2026.
//

#ifndef OOP_FRUIT_H
#define OOP_FRUIT_H
#include "Position.h"

class Fruit {
public:
    Fruit(int points, const Position &pos);

    friend std::ostream &operator<<(std::ostream &os, const Fruit &fruit);

private:
    int points_ = 0;
    Position pos_;
    bool collected_ = false;
};


#endif //OOP_FRUIT_H
