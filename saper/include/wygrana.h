//
// Created by sebiz on 24.01.2022.
//

#ifndef SAPER_WYGRANA_H
#define SAPER_WYGRANA_H

#include "wyniki.h"

class wygrana : public wyniki{
public:
    /**
     * konstruktor klasy wygrana
     * @param xplanszy szerokosc planszy na ktorej odbywala sie gra
     * @param yplanszy wysokosc planszy na ktorej odbywala sie gra
     * @param ilebomb ilocs bomb ktora byla w grze
     */
    wygrana(int xplanszy, int yplanszy, int ilebomb);

    /**
    * funkcja wyswietlajaca informacje o grze ktora sie odbyla
    */
    void wyswietl();
};


#endif //SAPER_WYGRANA_H
