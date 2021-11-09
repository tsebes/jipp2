//
// Created by sebiz on 09.11.2021.
//


#include "Point.h"

Point::Point(double x, double y, string name) : name(name) {
    *this->x = x;
    *this->y = y;
}

Point::Point(string name) : name(name) {
    *x = *y = 0;
}

double Point::getX() {
    return *x;
}

void Point::setX(double x) {
    *this->x = x;
}

double Point::getY() {
    return *y;
}

void Point::setY(double y) {
    *this->y = y;
}

void Point::printData() const {
    cout << "Point " << name << " (x = " << *x << ", y = " << *y << ")\n";
}

void Point::setName(string name) {
    this->name = name;
}

bool Point::operator==(const Point &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           name == rhs.name;
}

bool Point::operator!=(const Point &rhs) const {
    return !(rhs == *this);
}

const string &Point::getName() const {
    return name;
}

Point::~Point(){
    delete x;
    delete y;
}

Point::Point(Point &point){
    name = point.name;
    *x = *point.x;
    *y = *point.y;
}


Pojazd::Pojazd(string numerrejestracyjny,string nazwa, int iloscmiejsc, string *miejsce, string marka){
    *this->iloscmiejsc = iloscmiejsc;
    *miejsce = "Puste";
}

Pojazd::Pojazd(Pojaz &Pojazd){
    numerrejestracyjny = Pojazd.numerrejestracyjny;
    nazwa = Pojazd.nazwa;
    *iloscmiejsc = *point.iloscmiejsc;
    marka = Pojazd.marka;
}

void Pojazd::printData() const {
    cout << "Pojazd: " << nazwa << " numer rejestracyjny:" << numerrejestracyjny << ", ilosc miejsc = " << *iloscmiejsc << endl;
    for (int i=0; i < *iloscmiejsc; i++){
        cout << "miejsce " << *iloscmiejsc+1 << ":" << miejsce[*iloscmiejsc] << endl;
    }
}

void Pojazd::setplace(int numermiejsca, string nowadana){
    miejsce[numermiejsca] = nowadana;
}

