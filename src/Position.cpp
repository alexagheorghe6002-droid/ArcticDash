//
// Created by Administrator on 23/11/2026.
//

#include "Position.h"
#include <iostream>

Position::Position(int x, int y):x_(x),y_(y){}

std::ostream& operator<<(std::ostream& os, const Position& pos) {
    os<<"("<<pos.x_<<","<<pos.y_<<")";  
    return os;
}