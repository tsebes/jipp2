//
// Created by sebiz on 24.01.2022.
//

#include <iostream>
#include "wygrana.h"

using namespace std;

wygrana::wygrana(int xplanszy, int yplanszy, int ilebomb): wyniki(xplanszy, yplanszy, ilebomb){};

void wygrana::wyswietl() {
    cout << "Grales na polu o szerokosci " << xplanszy << ", wysokosci " << yplanszy << " oraz majac " << ilebomb << " bomb i wygrales!!!" << endl;
}