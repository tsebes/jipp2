//
// Created by sebiz on 24.01.2022.
//

#include <iostream>
#include "porazka.h"

using namespace std;

porazka::porazka(int ileppolzostalo, int xplanszy, int yplanszy, int ilebomb): ilepolzostalo(ileppolzostalo), wyniki(xplanszy, yplanszy, ilebomb) {};

void porazka::wyswietl() {
    cout << "Grales na polu o szerokosci " << xplanszy << ", wysokosci " << yplanszy << " oraz majac " << ilebomb << " bomb i przegrales." << endl;
    cout << "Nie udalo ci sie znalezc " << ilepolzostalo << " bezpiecznych pol" << endl;
}
