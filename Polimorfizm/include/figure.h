//
// Created by sebiz on 30.11.2021.
//

#ifndef POLIMORFIZM_FIGURE_H
#define POLIMORFIZM_FIGURE_H


class Figure{
public:
    virtual double getArea() = 0;
};

class Circle : public Figure{
public:
    double a;
    Circle(double a);
    double getArea() {
        return a * a * 3.14;
    }
};

class Rectangle : public Figure{
public:
    double a,b;
    Rectangle(double a, double b);
    double getArea() {
        return a * b;
    }
};


#endif //POLIMORFIZM_FIGURE_H
