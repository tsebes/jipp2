//
// Created by sebiz on 24.01.2022.
//

#ifndef SAPER_WYNIKI_H
#define SAPER_WYNIKI_H


class wyniki {
protected:
    int xplanszy;
    int yplanszy;
    int ilebomb;
public:
    /**
     * konstruktor klasy wyniki
     * @param xplanszy szerokosc planszy na ktorej odbywala sie gra
     * @param yplanszy wysokosc planszy na ktorej odbywala sie gra
     * @param ilebomb ilocs bomb ktora byla w grze
     */
    wyniki(int xplanszy, int yplanszy, int ilebomb);

    /**
     * funckja wirtualna wyswietlajaca dane (nigdy sie nie wykona)
     */
    virtual void wyswietl() = 0;
};


#endif //SAPER_WYNIKI_H
