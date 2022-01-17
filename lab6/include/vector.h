//
// Created by sebiz on 16.11.2021.
//

#ifndef LAB6_VECTOR_H
#define LAB6_VECTOR_H

#include <iostream>


class Vector {
private:
    double x, y;

public:
    Vector() {};

    Vector(double x, double y) : x(x), y(y) {}

    double length() {
        return sqrt(x * x + y * y);
    }

    void print();

    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    Vector &operator+=(const Vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }

    Vector operator-(const Vector & rhs){
        return {x - rhs.x, y - rhs.y};
    }

    Vector operator*(const Vector & rhs){
        return {x * rhs.x,y * rhs.y};
    }


};


#endif //LAB6_VECTOR_H
