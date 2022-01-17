//
// Created by sebiz on 07.12.2021.
//

#ifndef JIPP_2_LABS_LINE_H
#define JIPP_2_LABS_LINE_H

#include <iostream>
#include <list>
#include "stop.h"

using namespace std;

class Line {
private:
    string number;
    string direction;
    list<Stop *> stops;

public:
    Line(const string &number, const string &direction);

    void addStop(Stop * stop);

    void print();

};


#endif //JIPP_2_LABS_LINE_H