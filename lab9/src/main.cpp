//
// Created by sebiz on 07.12.2021.
//

#include <iostream>
#include <list>
#include "stop.h"
#include "line.h"

using namespace std;

int main() {
    list<Stop> stops;
    stops.emplace_back(1, "Politechnika", 50.1, 50.2);
    stops.emplace_back(2, "Nowy Kleparz", 50.2, 50.2);
    stops.emplace_back(3, "Plac Inwalidow", 50.2, 50.2);
    stops.emplace_back(4, "Urzednicza", 50.2, 50.2);
    stops.emplace_back(5, "Biprostal", 50.2, 50.2);
    stops.emplace_back(6, "Uniwersytet Pedagogiczny", 50.2, 50.2);

    Line l1("P", "Podchorazych");
    list<Stop>::iterator x;

    for (x = stops.begin(); x != stops.end(); x++) {
        l1.addStop(*x);
    }

    /*
    l1.addStop(&stops[0]);
    l1.addStop(&stops[1]);
    l1.addStop(&stops[2]);
    l1.addStop(&stops[3]);
    l1.addStop(&stops[4]);
    l1.addStop(&stops[5]);
    */

    l1.print();

    cout << "---------------------------------------" << endl;
    stops.emplace_back(7, "Bratyslawska", 50.2, 50.2);
    stops.emplace_back(8, "Teatr Bagatela", 50.2, 50.2);
    stops.emplace_back(9, "Stary Kleparz", 50.2, 50.2);
    stops.emplace_back(10, "Teatr Slowackiego", 50.2, 50.2);
    stops.emplace_back(11, "Teatr Slowackiego1", 50.2, 50.2);
    stops.emplace_back(12, "Teatr Slowackiego2", 50.2, 50.2);
    stops.emplace_back(13, "Teatr Slowackiego3", 50.2, 50.2);

    /*
    l1.addStop(&stops[6]);
    l1.addStop(&stops[7]);
    l1.addStop(&stops[8]);
    l1.addStop(&stops[9]);
    l1.addStop(&stops[10]);
    l1.addStop(&stops[11]);
    l1.addStop(&stops[12]);
    */

    l1.print();

    cout << "---------------------------------------" << endl;
    /*
    stops[0].print();
    stops[1].print();
    stops[2].print();
    */

    return 0;
}