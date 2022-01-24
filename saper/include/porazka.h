//
// Created by sebiz on 24.01.2022.
//

#ifndef SAPER_PORAZKA_H
#define SAPER_PORAZKA_H

#include "wyniki.h"

class porazka : public wyniki{
private:
    int ilepolzostalo;
public:
    /**
     * konstruktor klasy porazka
     * @param ileppolzostalo ilosc bomb ktora pozostala na planszy w momencie przegranej
     * @param xplanszy szerokosc planszy na ktorej odbywala sie gra
     * @param yplanszy wysokosc planszy na ktorej odbywala sie gra
     * @param ilebomb ilocs bomb ktora byla w grze
     */
    porazka(int ileppolzostalo, int xplanszy, int yplanszy, int ilebomb);

    /**
     * funkcja wyswietlajaca informacje o grze ktora sie odbyla
     */
    void wyswietl();
};


#endif //SAPER_PORAZKA_H
