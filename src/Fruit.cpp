//
// Created by Administrator on 23/11/2026.
//

#include "Fruit.h"
#include <iostream>

Fruit::Fruit(int points, const Position &pos) : points_(points), pos_(pos) {
}

std::ostream &operator<<(std::ostream &os, const Fruit &fruit) {
    os << "Fruit at " << fruit.pos_ << ", " << fruit.points_ << " points";
    if (fruit.collected_) {
        os << ", collected";
    } else {
        os << ", not collected";
    }
    return os;
}
