//
// Created by Administrator on 23/11/2026.
//

#ifndef OOP_POSITION_H
#define OOP_POSITION_H
#include <iosfwd>

class Position {
public:
    Position(int x, int y);

    friend std::ostream& operator<<(std::ostream& os, const Position& pos);

    int getX() const;
    int getY() const;

private:
    int x_=0;
    int y_=0;

};

#endif //OOP_POSITION_H
