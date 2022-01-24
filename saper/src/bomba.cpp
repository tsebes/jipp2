//
// Created by sebiz on 24.01.2022.
//

#include <iostream>
#include "bomba.h"

using namespace std;


bomba::bomba(int x, int y, int wartosc, bool sprawdzone, int numerbomby): pole(x, y, wartosc, sprawdzone), numerbomby(numerbomby){};
bomba::~bomba(){};

void bomba::ustawnumer(int numer) {
    numerbomby = numer;
}

void bomba::wyswietlwartosc(int szerokosc, int wysokosc){
    cout << "bomba numer "<< numerbomby <<" znajduje sie pod wartoscia: " << y * szerokosc +x << endl;
    cout << "x = " << x << ", y = " << y << endl;
}