//
// Created by sebiz on 20.01.2022.
//

#include "pole.h"
#include <iostream>

using namespace std;

//Funkcje klasy pole -------------------------------------------------------------------------------

pole::pole(int x, int y, int wartosc, bool sprawdzone): x(x), y(y), wartosc(wartosc), sprawdzone(sprawdzone){};
pole::~pole() {};

int pole::podajx(){
    return x;
}

int pole::podajy(){
    return y;
}

int pole::podajwartosc(){
    return wartosc;
}

bool pole::podajstan(){
    return sprawdzone;
}

void pole::ustawxy(int nowex, int nowey) {
    x = nowex;
    y = nowey;
}

void pole::ustawwartosc(){
    wartosc = 9; //wartosc 9 oznacza bombe
}

int pole::sprawdz(){
    if(sprawdzone == false){
        sprawdzone = true;
        return wartosc;
    }
    cout << "Pole bylo juz sprawdzone" << endl;
        return 10; //dowolna wartosc inna niz 0
}

int pole::sprawdz(bool automatycznie){
    if(sprawdzone == false){
        sprawdzone = true;
        return wartosc;
    }
    return 10; //dowolna wartosc inna niz 0
}

void pole::operator++(){
++wartosc;
}