//
// Created by sebiz on 18.10.2021.
//

#include <iostream>
#include "calc.h"

using namespace std;

float add(float a, float b){
    return a+b;
}

float substract(float a, float b){
    return a-b;
}

float volume(float a, float b, float h, float height){
    return ((a+b)/2)*h*height;
}

void help(){
    cout << "possible actions:" << endl;
    cout << "add [a] [b]" << endl << "dzialanie dodaje do siebie wartosc a z wartoscia b" <<endl;
    cout << "substract [a] [b]" << endl << "dzialanie odejmuje do wartosc b od wartosci a" <<endl;
    cout << "volume [a] [b] [h] [height]" << endl << "dzialanie oblicza objetosc graniastoslupa prostego o podstawie trapezu gdzie: a oraz b to podstawy tego trapezu, h to wysokosc trapezu, height to wysokosc graniastoslupa"<< endl;
    cout << "help" << endl << "dzialanie wyswietla informacje o mozliwych dzialaniach" << endl;
};